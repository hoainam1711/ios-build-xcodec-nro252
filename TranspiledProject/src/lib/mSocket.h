#ifndef HEADER_lib_mSocket
#define HEADER_lib_mSocket

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_mSocket {
	java_lang_Object parent;
} lib_mSocket;

extern Class class_lib_mSocket;

extern jobject SF_lib_mSocket_MESSAGE;

#define VTABLE_lib_mSocket_hashCode_R_int 0
typedef jint (*func_lib_mSocket_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_mSocket_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_mSocket_clone_R_java_lang_Object 2
typedef jobject (*func_lib_mSocket_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_mSocket_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_toString_R_java_lang_String 4
typedef jobject (*func_lib_mSocket_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_finalize 5
typedef void (*func_lib_mSocket_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_notify 6
typedef void (*func_lib_mSocket_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_notifyAll 7
typedef void (*func_lib_mSocket_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_wait 8
typedef void (*func_lib_mSocket_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_wait_long 9
typedef void (*func_lib_mSocket_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_mSocket_wait_long_int 10
typedef void (*func_lib_mSocket_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_mSocket_close 11
typedef void (*func_lib_mSocket_close)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_setKeepAlive_boolean 12
typedef void (*func_lib_mSocket_setKeepAlive_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_lib_mSocket_getInputStream_R_java_io_DataInputStream 13
typedef jobject (*func_lib_mSocket_getInputStream_R_java_io_DataInputStream)(jcontext ctx, jobject self);
#define VTABLE_lib_mSocket_getOutputStream_R_java_io_DataOutputStream 14
typedef jobject (*func_lib_mSocket_getOutputStream_R_java_io_DataOutputStream)(jcontext ctx, jobject self);

void mark_lib_mSocket(jobject object, jint mark, jint depth);
void clinit_lib_mSocket(jcontext ctx);
void init_lib_mSocket_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_lib_mSocket_close(jcontext ctx, jobject self);
void M_lib_mSocket_setKeepAlive_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_lib_mSocket_getInputStream_R_java_io_DataInputStream(jcontext ctx, jobject self);
jobject M_lib_mSocket_getOutputStream_R_java_io_DataOutputStream(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
