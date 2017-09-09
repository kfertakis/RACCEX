/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: common.proto */

#ifndef PROTOBUF_C_common_2eproto__INCLUDED
#define PROTOBUF_C_common_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _PhiCmd PhiCmd;
typedef struct _PhiDevice PhiDevice;


/* --- enums --- */


/* --- messages --- */

struct  _PhiCmd
{
  ProtobufCMessage base;
  uint32_t type;
  uint32_t arg_cnt;
  size_t n_int_args;
  int64_t *int_args;
  size_t n_uint_args;
  uint64_t *uint_args;
  size_t n_str_args;
  char **str_args;
  size_t n_extra_args;
  ProtobufCBinaryData *extra_args;
};
#define PHI_CMD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&phi_cmd__descriptor) \
    , 0, 0, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


struct  _PhiDevice
{
  ProtobufCMessage base;
  char *name;
  protobuf_c_boolean is_buy;
};
#define PHI_DEVICE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&phi_device__descriptor) \
    , NULL, 0 }


/* PhiCmd methods */
void   phi_cmd__init
                     (PhiCmd         *message);
size_t phi_cmd__get_packed_size
                     (const PhiCmd   *message);
size_t phi_cmd__pack
                     (const PhiCmd   *message,
                      uint8_t             *out);
size_t phi_cmd__pack_to_buffer
                     (const PhiCmd   *message,
                      ProtobufCBuffer     *buffer);
PhiCmd *
       phi_cmd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   phi_cmd__free_unpacked
                     (PhiCmd *message,
                      ProtobufCAllocator *allocator);
/* PhiDevice methods */
void   phi_device__init
                     (PhiDevice         *message);
size_t phi_device__get_packed_size
                     (const PhiDevice   *message);
size_t phi_device__pack
                     (const PhiDevice   *message,
                      uint8_t             *out);
size_t phi_device__pack_to_buffer
                     (const PhiDevice   *message,
                      ProtobufCBuffer     *buffer);
PhiDevice *
       phi_device__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   phi_device__free_unpacked
                     (PhiDevice *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*PhiCmd_Closure)
                 (const PhiCmd *message,
                  void *closure_data);
typedef void (*PhiDevice_Closure)
                 (const PhiDevice *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor phi_cmd__descriptor;
extern const ProtobufCMessageDescriptor phi_device__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_common_2eproto__INCLUDED */