/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: profile.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "profile.pb-c.h"
void   pprof__profile__init
                     (PProf__Profile         *message)
{
  static const PProf__Profile init_value = PPROF__PROFILE__INIT;
  *message = init_value;
}
size_t pprof__profile__get_packed_size
                     (const PProf__Profile *message)
{
  assert(message->base.descriptor == &pprof__profile__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__profile__pack
                     (const PProf__Profile *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__profile__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__profile__pack_to_buffer
                     (const PProf__Profile *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__profile__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Profile *
       pprof__profile__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Profile *)
     protobuf_c_message_unpack (&pprof__profile__descriptor,
                                allocator, len, data);
}
void   pprof__profile__free_unpacked
                     (PProf__Profile *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__profile__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__value_type__init
                     (PProf__ValueType         *message)
{
  static const PProf__ValueType init_value = PPROF__VALUE_TYPE__INIT;
  *message = init_value;
}
size_t pprof__value_type__get_packed_size
                     (const PProf__ValueType *message)
{
  assert(message->base.descriptor == &pprof__value_type__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__value_type__pack
                     (const PProf__ValueType *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__value_type__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__value_type__pack_to_buffer
                     (const PProf__ValueType *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__value_type__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__ValueType *
       pprof__value_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__ValueType *)
     protobuf_c_message_unpack (&pprof__value_type__descriptor,
                                allocator, len, data);
}
void   pprof__value_type__free_unpacked
                     (PProf__ValueType *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__value_type__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__sample__init
                     (PProf__Sample         *message)
{
  static const PProf__Sample init_value = PPROF__SAMPLE__INIT;
  *message = init_value;
}
size_t pprof__sample__get_packed_size
                     (const PProf__Sample *message)
{
  assert(message->base.descriptor == &pprof__sample__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__sample__pack
                     (const PProf__Sample *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__sample__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__sample__pack_to_buffer
                     (const PProf__Sample *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__sample__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Sample *
       pprof__sample__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Sample *)
     protobuf_c_message_unpack (&pprof__sample__descriptor,
                                allocator, len, data);
}
void   pprof__sample__free_unpacked
                     (PProf__Sample *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__sample__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__label__init
                     (PProf__Label         *message)
{
  static const PProf__Label init_value = PPROF__LABEL__INIT;
  *message = init_value;
}
size_t pprof__label__get_packed_size
                     (const PProf__Label *message)
{
  assert(message->base.descriptor == &pprof__label__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__label__pack
                     (const PProf__Label *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__label__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__label__pack_to_buffer
                     (const PProf__Label *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__label__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Label *
       pprof__label__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Label *)
     protobuf_c_message_unpack (&pprof__label__descriptor,
                                allocator, len, data);
}
void   pprof__label__free_unpacked
                     (PProf__Label *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__label__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__mapping__init
                     (PProf__Mapping         *message)
{
  static const PProf__Mapping init_value = PPROF__MAPPING__INIT;
  *message = init_value;
}
size_t pprof__mapping__get_packed_size
                     (const PProf__Mapping *message)
{
  assert(message->base.descriptor == &pprof__mapping__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__mapping__pack
                     (const PProf__Mapping *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__mapping__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__mapping__pack_to_buffer
                     (const PProf__Mapping *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__mapping__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Mapping *
       pprof__mapping__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Mapping *)
     protobuf_c_message_unpack (&pprof__mapping__descriptor,
                                allocator, len, data);
}
void   pprof__mapping__free_unpacked
                     (PProf__Mapping *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__mapping__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__location__init
                     (PProf__Location         *message)
{
  static const PProf__Location init_value = PPROF__LOCATION__INIT;
  *message = init_value;
}
size_t pprof__location__get_packed_size
                     (const PProf__Location *message)
{
  assert(message->base.descriptor == &pprof__location__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__location__pack
                     (const PProf__Location *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__location__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__location__pack_to_buffer
                     (const PProf__Location *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__location__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Location *
       pprof__location__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Location *)
     protobuf_c_message_unpack (&pprof__location__descriptor,
                                allocator, len, data);
}
void   pprof__location__free_unpacked
                     (PProf__Location *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__location__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__line__init
                     (PProf__Line         *message)
{
  static const PProf__Line init_value = PPROF__LINE__INIT;
  *message = init_value;
}
size_t pprof__line__get_packed_size
                     (const PProf__Line *message)
{
  assert(message->base.descriptor == &pprof__line__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__line__pack
                     (const PProf__Line *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__line__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__line__pack_to_buffer
                     (const PProf__Line *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__line__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Line *
       pprof__line__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Line *)
     protobuf_c_message_unpack (&pprof__line__descriptor,
                                allocator, len, data);
}
void   pprof__line__free_unpacked
                     (PProf__Line *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__line__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pprof__function__init
                     (PProf__Function         *message)
{
  static const PProf__Function init_value = PPROF__FUNCTION__INIT;
  *message = init_value;
}
size_t pprof__function__get_packed_size
                     (const PProf__Function *message)
{
  assert(message->base.descriptor == &pprof__function__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pprof__function__pack
                     (const PProf__Function *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pprof__function__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pprof__function__pack_to_buffer
                     (const PProf__Function *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pprof__function__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PProf__Function *
       pprof__function__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PProf__Function *)
     protobuf_c_message_unpack (&pprof__function__descriptor,
                                allocator, len, data);
}
void   pprof__function__free_unpacked
                     (PProf__Function *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &pprof__function__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor pprof__profile__field_descriptors[14] =
{
  {
    "sample_type",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Profile, n_sample_type),
    offsetof(PProf__Profile, sample_type),
    &pprof__value_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sample",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Profile, n_sample),
    offsetof(PProf__Profile, sample),
    &pprof__sample__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mapping",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Profile, n_mapping),
    offsetof(PProf__Profile, mapping),
    &pprof__mapping__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "location",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Profile, n_location),
    offsetof(PProf__Profile, location),
    &pprof__location__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "function",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Profile, n_function),
    offsetof(PProf__Profile, function),
    &pprof__function__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "string_table",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(PProf__Profile, n_string_table),
    offsetof(PProf__Profile, string_table),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "drop_frames",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, drop_frames),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "keep_frames",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, keep_frames),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "time_nanos",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, time_nanos),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "duration_nanos",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, duration_nanos),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "period_type",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, period_type),
    &pprof__value_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "period",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, period),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "comment",
    13,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT64,
    offsetof(PProf__Profile, n_comment),
    offsetof(PProf__Profile, comment),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "default_sample_type",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Profile, default_sample_type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__profile__field_indices_by_name[] = {
  12,   /* field[12] = comment */
  13,   /* field[13] = default_sample_type */
  6,   /* field[6] = drop_frames */
  9,   /* field[9] = duration_nanos */
  4,   /* field[4] = function */
  7,   /* field[7] = keep_frames */
  3,   /* field[3] = location */
  2,   /* field[2] = mapping */
  11,   /* field[11] = period */
  10,   /* field[10] = period_type */
  1,   /* field[1] = sample */
  0,   /* field[0] = sample_type */
  5,   /* field[5] = string_table */
  8,   /* field[8] = time_nanos */
};
static const ProtobufCIntRange pprof__profile__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 14 }
};
const ProtobufCMessageDescriptor pprof__profile__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Profile",
  "Profile",
  "PProf__Profile",
  "PProf",
  sizeof(PProf__Profile),
  14,
  pprof__profile__field_descriptors,
  pprof__profile__field_indices_by_name,
  1,  pprof__profile__number_ranges,
  (ProtobufCMessageInit) pprof__profile__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__value_type__field_descriptors[2] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__ValueType, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "unit",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__ValueType, unit),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__value_type__field_indices_by_name[] = {
  0,   /* field[0] = type */
  1,   /* field[1] = unit */
};
static const ProtobufCIntRange pprof__value_type__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor pprof__value_type__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.ValueType",
  "ValueType",
  "PProf__ValueType",
  "PProf",
  sizeof(PProf__ValueType),
  2,
  pprof__value_type__field_descriptors,
  pprof__value_type__field_indices_by_name,
  1,  pprof__value_type__number_ranges,
  (ProtobufCMessageInit) pprof__value_type__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__sample__field_descriptors[3] =
{
  {
    "location_id",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(PProf__Sample, n_location_id),
    offsetof(PProf__Sample, location_id),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT64,
    offsetof(PProf__Sample, n_value),
    offsetof(PProf__Sample, value),
    NULL,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_PACKED,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "label",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Sample, n_label),
    offsetof(PProf__Sample, label),
    &pprof__label__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__sample__field_indices_by_name[] = {
  2,   /* field[2] = label */
  0,   /* field[0] = location_id */
  1,   /* field[1] = value */
};
static const ProtobufCIntRange pprof__sample__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor pprof__sample__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Sample",
  "Sample",
  "PProf__Sample",
  "PProf",
  sizeof(PProf__Sample),
  3,
  pprof__sample__field_descriptors,
  pprof__sample__field_indices_by_name,
  1,  pprof__sample__number_ranges,
  (ProtobufCMessageInit) pprof__sample__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__label__field_descriptors[4] =
{
  {
    "key",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Label, key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "str",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Label, str),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Label, num),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "num_unit",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Label, num_unit),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__label__field_indices_by_name[] = {
  0,   /* field[0] = key */
  2,   /* field[2] = num */
  3,   /* field[3] = num_unit */
  1,   /* field[1] = str */
};
static const ProtobufCIntRange pprof__label__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor pprof__label__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Label",
  "Label",
  "PProf__Label",
  "PProf",
  sizeof(PProf__Label),
  4,
  pprof__label__field_descriptors,
  pprof__label__field_indices_by_name,
  1,  pprof__label__number_ranges,
  (ProtobufCMessageInit) pprof__label__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__mapping__field_descriptors[10] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memory_start",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, memory_start),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "memory_limit",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, memory_limit),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "file_offset",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, file_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "filename",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, filename),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "build_id",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, build_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_functions",
    7,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, has_functions),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_filenames",
    8,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, has_filenames),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_line_numbers",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, has_line_numbers),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "has_inline_frames",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(PProf__Mapping, has_inline_frames),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__mapping__field_indices_by_name[] = {
  5,   /* field[5] = build_id */
  3,   /* field[3] = file_offset */
  4,   /* field[4] = filename */
  7,   /* field[7] = has_filenames */
  6,   /* field[6] = has_functions */
  9,   /* field[9] = has_inline_frames */
  8,   /* field[8] = has_line_numbers */
  0,   /* field[0] = id */
  2,   /* field[2] = memory_limit */
  1,   /* field[1] = memory_start */
};
static const ProtobufCIntRange pprof__mapping__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor pprof__mapping__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Mapping",
  "Mapping",
  "PProf__Mapping",
  "PProf",
  sizeof(PProf__Mapping),
  10,
  pprof__mapping__field_descriptors,
  pprof__mapping__field_indices_by_name,
  1,  pprof__mapping__number_ranges,
  (ProtobufCMessageInit) pprof__mapping__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__location__field_descriptors[5] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Location, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mapping_id",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Location, mapping_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "address",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Location, address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "line",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(PProf__Location, n_line),
    offsetof(PProf__Location, line),
    &pprof__line__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "is_folded",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(PProf__Location, is_folded),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__location__field_indices_by_name[] = {
  2,   /* field[2] = address */
  0,   /* field[0] = id */
  4,   /* field[4] = is_folded */
  3,   /* field[3] = line */
  1,   /* field[1] = mapping_id */
};
static const ProtobufCIntRange pprof__location__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor pprof__location__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Location",
  "Location",
  "PProf__Location",
  "PProf",
  sizeof(PProf__Location),
  5,
  pprof__location__field_descriptors,
  pprof__location__field_indices_by_name,
  1,  pprof__location__number_ranges,
  (ProtobufCMessageInit) pprof__location__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__line__field_descriptors[2] =
{
  {
    "function_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Line, function_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "line",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Line, line),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__line__field_indices_by_name[] = {
  0,   /* field[0] = function_id */
  1,   /* field[1] = line */
};
static const ProtobufCIntRange pprof__line__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor pprof__line__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Line",
  "Line",
  "PProf__Line",
  "PProf",
  sizeof(PProf__Line),
  2,
  pprof__line__field_descriptors,
  pprof__line__field_indices_by_name,
  1,  pprof__line__number_ranges,
  (ProtobufCMessageInit) pprof__line__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pprof__function__field_descriptors[5] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Function, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Function, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "system_name",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Function, system_name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "filename",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Function, filename),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "start_line",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(PProf__Function, start_line),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pprof__function__field_indices_by_name[] = {
  3,   /* field[3] = filename */
  0,   /* field[0] = id */
  1,   /* field[1] = name */
  4,   /* field[4] = start_line */
  2,   /* field[2] = system_name */
};
static const ProtobufCIntRange pprof__function__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor pprof__function__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PProf.Function",
  "Function",
  "PProf__Function",
  "PProf",
  sizeof(PProf__Function),
  5,
  pprof__function__field_descriptors,
  pprof__function__field_indices_by_name,
  1,  pprof__function__number_ranges,
  (ProtobufCMessageInit) pprof__function__init,
  NULL,NULL,NULL    /* reserved[123] */
};