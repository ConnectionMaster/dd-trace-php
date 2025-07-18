--TEST--
Track automated user login success event with anonymization mode and verify the tags in the root span
--INI--
extension=ddtrace.so
--ENV--
DD_APPSEC_ENABLED=1
DD_APPSEC_AUTO_USER_INSTRUMENTATION_MODE=anon
--FILE--
<?php
use function datadog\appsec\testing\root_span_get_meta;
use function datadog\appsec\track_user_login_success_event_automated;
include __DIR__ . '/inc/ddtrace_version.php';

ddtrace_version_at_least('0.79.0');

track_user_login_success_event_automated("login", "", ['something' => 'discarded']);

echo "root_span_get_meta():\n";
print_r(root_span_get_meta());
?>
--EXPECTF--
root_span_get_meta():
Array
(
    [runtime-id] => %s
    [_dd.appsec.events.users.login.success.auto.mode] => anonymization
    [appsec.events.users.login.success.usr.login] => anon_428821350e9691491f616b754cd8315f
    [_dd.appsec.usr.login] => anon_428821350e9691491f616b754cd8315f
    [appsec.events.users.login.success.track] => true
    [server.business_logic.users.login.success] => null
    [_dd.p.ts] => 02
    [_dd.p.dm] => -5
)
