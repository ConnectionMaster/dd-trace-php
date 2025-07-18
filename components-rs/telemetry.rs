use crate::log::Log;
use datadog_sidecar::service::blocking::SidecarTransport;
use datadog_sidecar::service::{blocking, InstanceId, QueueId, SidecarAction};
use ddcommon::tag::parse_tags;
use ddcommon_ffi::slice::AsBytes;
use ddcommon_ffi::{self as ffi, CharSlice, MaybeError};
use ddtelemetry::data;
use ddtelemetry::data::metrics::{MetricNamespace, MetricType};
use ddtelemetry::data::{Dependency, Integration, LogLevel};
use ddtelemetry::metrics::MetricContext;
use ddtelemetry::worker::{LogIdentifier, TelemetryActions};
use ddtelemetry_ffi::try_c;
use std::error::Error;
use std::hash::{Hash, Hasher};
use std::path::PathBuf;
use std::str::FromStr;
use zwohash::ZwoHasher;

#[cfg(windows)]
macro_rules! windowsify_path {
    ($lit:literal) => {
        const_str::replace!($lit, "/", "\\")
    };
}
#[cfg(unix)]
macro_rules! windowsify_path {
    ($lit:literal) => {
        $lit
    };
}

#[must_use]
#[no_mangle]
pub extern "C" fn ddtrace_detect_composer_installed_json(
    transport: &mut Box<SidecarTransport>,
    instance_id: &InstanceId,
    queue_id: &QueueId,
    path: CharSlice,
) -> bool {
    let pathstr = path.to_utf8_lossy();
    if let Some(index) = pathstr.rfind(windowsify_path!("/vendor/autoload.php")) {
        let path = format!(
            "{}{}",
            &pathstr[..index],
            windowsify_path!("/vendor/composer/installed.json")
        );
        if parse_composer_installed_json(transport, instance_id, queue_id, path).is_ok() {
            return true;
        }
    }
    false
}

fn parse_composer_installed_json(
    transport: &mut Box<SidecarTransport>,
    instance_id: &InstanceId,
    queue_id: &QueueId,
    path: String,
) -> Result<(), Box<dyn Error>> {
    let action = vec![SidecarAction::PhpComposerTelemetryFile(PathBuf::from_str(
        path.as_str(),
    )?)];
    blocking::enqueue_actions(transport, instance_id, queue_id, action)?;

    Ok(())
}

#[derive(Default)]
pub struct SidecarActionsBuffer {
    buffer: Vec<SidecarAction>,
}

#[no_mangle]
pub extern "C" fn ddog_sidecar_telemetry_buffer_alloc() -> Box<SidecarActionsBuffer> {
    SidecarActionsBuffer::default().into()
}

#[no_mangle]
pub extern "C" fn ddog_sidecar_telemetry_buffer_drop(_: Box<SidecarActionsBuffer>) {}

#[no_mangle]
pub unsafe extern "C" fn ddog_sidecar_telemetry_addIntegration_buffer(
    buffer: &mut SidecarActionsBuffer,
    integration_name: CharSlice,
    integration_version: CharSlice,
    integration_enabled: bool,
) {
    let version = integration_version
        .is_empty()
        .then(|| integration_version.to_utf8_lossy().into_owned());

    let action = TelemetryActions::AddIntegration(Integration {
        name: integration_name.to_utf8_lossy().into_owned(),
        enabled: integration_enabled,
        version,
        compatible: None,
        auto_enabled: None,
    });
    buffer.buffer.push(SidecarAction::Telemetry(action));
}

#[no_mangle]
pub unsafe extern "C" fn ddog_sidecar_telemetry_addDependency_buffer(
    buffer: &mut SidecarActionsBuffer,
    dependency_name: CharSlice,
    dependency_version: CharSlice,
) {
    let version =
        (!dependency_version.is_empty()).then(|| dependency_version.to_utf8_lossy().into_owned());

    let action = TelemetryActions::AddDependency(Dependency {
        name: dependency_name.to_utf8_lossy().into_owned(),
        version,
    });
    buffer.buffer.push(SidecarAction::Telemetry(action));
}

#[no_mangle]
pub unsafe extern "C" fn ddog_sidecar_telemetry_enqueueConfig_buffer(
    buffer: &mut SidecarActionsBuffer,
    config_key: CharSlice,
    config_value: CharSlice,
    origin: data::ConfigurationOrigin,
    config_id: CharSlice,
) {
    let config_id = if config_id.is_empty() {
        None
    } else {
        Some(config_id.to_utf8_lossy().into_owned())
    };
    let action = TelemetryActions::AddConfig(data::Configuration {
        name: config_key.to_utf8_lossy().into_owned(),
        value: config_value.to_utf8_lossy().into_owned(),
        origin,
        config_id,
    });
    buffer.buffer.push(SidecarAction::Telemetry(action));
}

#[no_mangle]
pub extern "C" fn ddog_sidecar_telemetry_buffer_flush(
    transport: &mut Box<SidecarTransport>,
    instance_id: &InstanceId,
    queue_id: &QueueId,
    buffer: Box<SidecarActionsBuffer>,
) -> MaybeError {
    try_c!(blocking::enqueue_actions(
        transport,
        instance_id,
        queue_id,
        buffer.buffer,
    ));

    MaybeError::None
}

#[no_mangle]
pub unsafe extern "C" fn ddog_sidecar_telemetry_register_metric_buffer(
    buffer: &mut SidecarActionsBuffer,
    metric_name: CharSlice,
    metric_type: MetricType,
    namespace: MetricNamespace,
) {
    buffer
        .buffer
        .push(SidecarAction::RegisterTelemetryMetric(MetricContext {
            name: metric_name.to_utf8_lossy().into_owned(),
            namespace,
            metric_type,
            tags: Vec::default(),
            common: true,
        }));
}

#[no_mangle]
pub unsafe extern "C" fn ddog_sidecar_telemetry_add_span_metric_point_buffer(
    buffer: &mut SidecarActionsBuffer,
    metric_name: CharSlice,
    metric_value: f64,
    tags: CharSlice,
) {
    let (tags, _) = parse_tags(&tags.to_utf8_lossy());

    buffer.buffer.push(SidecarAction::AddTelemetryMetricPoint((
        metric_name.to_utf8_lossy().into_owned(),
        metric_value,
        tags,
    )));
}

#[no_mangle]
pub unsafe extern "C" fn ddog_sidecar_telemetry_add_integration_log_buffer(
    category: Log,
    buffer: &mut SidecarActionsBuffer,
    log: CharSlice,
) {
    let mut hasher = ZwoHasher::default();
    log.hash(&mut hasher);

    // Convert from our log category to telemetry log level
    let level = match category {
        Log::Error => LogLevel::Error,
        Log::Warn => LogLevel::Warn,
        _ => LogLevel::Debug,
    };

    let action = TelemetryActions::AddLog((
        LogIdentifier {
            identifier: hasher.finish(),
        },
        data::Log {
            message: log.to_utf8_lossy().into_owned(),
            level,
            stack_trace: None,
            count: 1,
            tags: String::new(),
            is_sensitive: false,
            is_crash: false,
        },
    ));
    buffer.buffer.push(SidecarAction::Telemetry(action));
}
