#ifndef HEADER_lib_network_ByteStreamBuffer
#define HEADER_lib_network_ByteStreamBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_ByteStreamBuffer {
	java_lang_Object parent;
	jref F_buf;
	jint F_readPos;
	jint F_writePos;
} lib_network_ByteStreamBuffer;

extern Class class_lib_network_ByteStreamBuffer;


#define VTABLE_lib_network_ByteStreamBuffer_hashCode_R_int 0
typedef jint (*func_lib_network_ByteStreamBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_network_ByteStreamBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_ByteStreamBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_lib_network_ByteStreamBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_network_ByteStreamBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_toString_R_java_lang_String 4
typedef jobject (*func_lib_network_ByteStreamBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_finalize 5
typedef void (*func_lib_network_ByteStreamBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_notify 6
typedef void (*func_lib_network_ByteStreamBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_notifyAll 7
typedef void (*func_lib_network_ByteStreamBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_wait 8
typedef void (*func_lib_network_ByteStreamBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_wait_long 9
typedef void (*func_lib_network_ByteStreamBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_network_ByteStreamBuffer_wait_long_int 10
typedef void (*func_lib_network_ByteStreamBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_network_ByteStreamBuffer_write_Array1_byte 11
typedef void (*func_lib_network_ByteStreamBuffer_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message 12
typedef jobject (*func_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message 13
typedef jobject (*func_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message)(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jobject param3);
#define VTABLE_lib_network_ByteStreamBuffer_available_R_int 14
typedef jint (*func_lib_network_ByteStreamBuffer_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_ByteStreamBuffer_peek_int_R_byte 15
typedef jbyte (*func_lib_network_ByteStreamBuffer_peek_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_network_ByteStreamBuffer_skip_int 16
typedef void (*func_lib_network_ByteStreamBuffer_skip_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_network_ByteStreamBuffer_read_Array1_byte_int 17
typedef void (*func_lib_network_ByteStreamBuffer_read_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_lib_network_ByteStreamBuffer_ensureCapacity_int 18
typedef void (*func_lib_network_ByteStreamBuffer_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_network_ByteStreamBuffer_clear 19
typedef void (*func_lib_network_ByteStreamBuffer_clear)(jcontext ctx, jobject self);

void mark_lib_network_ByteStreamBuffer(jobject object, jint mark, jint depth);
void clinit_lib_network_ByteStreamBuffer(jcontext ctx);
void init_lib_network_ByteStreamBuffer(jcontext ctx, jobject self);
void M_lib_network_ByteStreamBuffer_write_Array1_byte(jcontext ctx, jobject self, jobject param0);
jobject M_lib_network_ByteStreamBuffer_pollMessage_R_nro_Message(jcontext ctx, jobject self);
jobject M_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jobject param3);
jint M_lib_network_ByteStreamBuffer_available_R_int(jcontext ctx, jobject self);
jbyte M_lib_network_ByteStreamBuffer_peek_int_R_byte(jcontext ctx, jobject self, jint param0);
void M_lib_network_ByteStreamBuffer_skip_int(jcontext ctx, jobject self, jint param0);
void M_lib_network_ByteStreamBuffer_read_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_lib_network_ByteStreamBuffer_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_lib_network_ByteStreamBuffer_clear(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
