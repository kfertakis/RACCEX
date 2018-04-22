/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: common.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "common.pb-c.h"
void   phi_cmd__init
                     (PhiCmd         *message)
{
  static PhiCmd init_value = PHI_CMD__INIT;
  *message = init_value;
}
size_t phi_cmd__get_packed_size
                     (const PhiCmd *message)
{
  assert(message->base.descriptor == &phi_cmd__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t phi_cmd__pack
                     (const PhiCmd *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &phi_cmd__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t phi_cmd__pack_to_buffer
                     (const PhiCmd *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &phi_cmd__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PhiCmd *
       phi_cmd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PhiCmd *)
     protobuf_c_message_unpack (&phi_cmd__descriptor,
                                allocator, len, data);
}
void   phi_cmd__free_unpacked
                     (PhiCmd *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &phi_cmd__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cookie__init
                     (Cookie         *message)
{
  static Cookie init_value = COOKIE__INIT;
  *message = init_value;
}
size_t cookie__get_packed_size
                     (const Cookie *message)
{
  assert(message->base.descriptor == &cookie__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cookie__pack
                     (const Cookie *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cookie__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cookie__pack_to_buffer
                     (const Cookie *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cookie__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Cookie *
       cookie__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Cookie *)
     protobuf_c_message_unpack (&cookie__descriptor,
                                allocator, len, data);
}
void   cookie__free_unpacked
                     (Cookie *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &cookie__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor phi_cmd__field_descriptors[8] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(PhiCmd, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "arg_count",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(PhiCmd, arg_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phi_result_code",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(PhiCmd, phi_result_code),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phi_errorno",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(PhiCmd, has_phi_errorno),
    offsetof(PhiCmd, phi_errorno),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "int_args",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    offsetof(PhiCmd, n_int_args),
    offsetof(PhiCmd, int_args),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uint_args",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(PhiCmd, n_uint_args),
    offsetof(PhiCmd, uint_args),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "u64int_args",
    7,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(PhiCmd, n_u64int_args),
    offsetof(PhiCmd, u64int_args),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "extra_args",
    8,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(PhiCmd, n_extra_args),
    offsetof(PhiCmd, extra_args),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned phi_cmd__field_indices_by_name[] = {
  1,   /* field[1] = arg_count */
  7,   /* field[7] = extra_args */
  4,   /* field[4] = int_args */
  3,   /* field[3] = phi_errorno */
  2,   /* field[2] = phi_result_code */
  0,   /* field[0] = type */
  6,   /* field[6] = u64int_args */
  5,   /* field[5] = uint_args */
};
static const ProtobufCIntRange phi_cmd__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor phi_cmd__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PhiCmd",
  "PhiCmd",
  "PhiCmd",
  "",
  sizeof(PhiCmd),
  8,
  phi_cmd__field_descriptors,
  phi_cmd__field_indices_by_name,
  1,  phi_cmd__number_ranges,
  (ProtobufCMessageInit) phi_cmd__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cookie__field_descriptors[2] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Cookie, type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "phi_cmd",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Cookie, phi_cmd),
    &phi_cmd__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cookie__field_indices_by_name[] = {
  1,   /* field[1] = phi_cmd */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange cookie__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 3, 1 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cookie__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Cookie",
  "Cookie",
  "Cookie",
  "",
  sizeof(Cookie),
  2,
  cookie__field_descriptors,
  cookie__field_indices_by_name,
  2,  cookie__number_ranges,
  (ProtobufCMessageInit) cookie__init,
  NULL,NULL,NULL    /* reserved[123] */
};