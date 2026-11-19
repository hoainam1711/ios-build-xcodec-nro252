#ifndef HEADER_java_io_SequenceInputStream
#define HEADER_java_io_SequenceInputStream

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_SequenceInputStream {
	java_io_InputStream parent;
	jref F_e;
	jref F_in;
} java_io_SequenceInputStream;

extern Class class_java_io_SequenceInputStream;


#define VTABLE_java_io_SequenceInputStream_hashCode_R_int 0
typedef jint (*func_java_io_SequenceInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_SequenceInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_SequenceInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_SequenceInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_SequenceInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_SequenceInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_finalize 5
typedef void (*func_java_io_SequenceInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_notify 6
typedef void (*func_java_io_SequenceInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_notifyAll 7
typedef void (*func_java_io_SequenceInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_wait 8
typedef void (*func_java_io_SequenceInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_wait_long 9
typedef void (*func_java_io_SequenceInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_SequenceInputStream_wait_long_int 10
typedef void (*func_java_io_SequenceInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_SequenceInputStream_close 11
typedef void (*func_java_io_SequenceInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_available_R_int 12
typedef jint (*func_java_io_SequenceInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_mark_int 13
typedef void (*func_java_io_SequenceInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_SequenceInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_SequenceInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_read_R_int 15
typedef jint (*func_java_io_SequenceInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_SequenceInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_SequenceInputStream_reset 18
typedef void (*func_java_io_SequenceInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_SequenceInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_SequenceInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_SequenceInputStream_nextStream 20
typedef void (*func_java_io_SequenceInputStream_nextStream)(jcontext ctx, jobject self);

void mark_java_io_SequenceInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_SequenceInputStream(jcontext ctx);
void init_java_io_SequenceInputStream_java_util_Enumeration(jcontext ctx, jobject self, jobject param0);
void init_java_io_SequenceInputStream_java_io_InputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_io_SequenceInputStream_nextStream(jcontext ctx, jobject self);
jint M_java_io_SequenceInputStream_available_R_int(jcontext ctx, jobject self);
jint M_java_io_SequenceInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_io_SequenceInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_SequenceInputStream_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
