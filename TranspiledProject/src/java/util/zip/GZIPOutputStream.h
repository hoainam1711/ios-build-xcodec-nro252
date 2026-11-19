#ifndef HEADER_java_util_zip_GZIPOutputStream
#define HEADER_java_util_zip_GZIPOutputStream

#include "Clearwing.h"
#include "java/util/zip/DeflaterOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_GZIPOutputStream {
	java_util_zip_DeflaterOutputStream parent;
	jref F_crc;
} java_util_zip_GZIPOutputStream;

extern Class class_java_util_zip_GZIPOutputStream;

extern jint SF_java_util_zip_GZIPOutputStream_GZIP_MAGIC;
extern jint SF_java_util_zip_GZIPOutputStream_TRAILER_SIZE;

#define VTABLE_java_util_zip_GZIPOutputStream_hashCode_R_int 0
typedef jint (*func_java_util_zip_GZIPOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_GZIPOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_GZIPOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_GZIPOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_GZIPOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_finalize 5
typedef void (*func_java_util_zip_GZIPOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_notify 6
typedef void (*func_java_util_zip_GZIPOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_notifyAll 7
typedef void (*func_java_util_zip_GZIPOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_wait 8
typedef void (*func_java_util_zip_GZIPOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_wait_long 9
typedef void (*func_java_util_zip_GZIPOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_GZIPOutputStream_wait_long_int 10
typedef void (*func_java_util_zip_GZIPOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_GZIPOutputStream_close 11
typedef void (*func_java_util_zip_GZIPOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_flush 12
typedef void (*func_java_util_zip_GZIPOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_write_Array1_byte 13
typedef void (*func_java_util_zip_GZIPOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_GZIPOutputStream_write_int 15
typedef void (*func_java_util_zip_GZIPOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_GZIPOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_util_zip_GZIPOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_finish 17
typedef void (*func_java_util_zip_GZIPOutputStream_finish)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_deflate 18
typedef void (*func_java_util_zip_GZIPOutputStream_deflate)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_writeHeader 19
typedef void (*func_java_util_zip_GZIPOutputStream_writeHeader)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int 20
typedef void (*func_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int 21
typedef void (*func_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int 22
typedef void (*func_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);

void mark_java_util_zip_GZIPOutputStream(jobject object, jint mark, jint depth);
void clinit_java_util_zip_GZIPOutputStream(jcontext ctx);
void init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_zip_GZIPOutputStream_java_io_OutputStream_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
void init_java_util_zip_GZIPOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void init_java_util_zip_GZIPOutputStream_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_util_zip_GZIPOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_GZIPOutputStream_finish(jcontext ctx, jobject self);
void M_java_util_zip_GZIPOutputStream_writeHeader(jcontext ctx, jobject self);
void M_java_util_zip_GZIPOutputStream_writeTrailer_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_util_zip_GZIPOutputStream_writeInt_int_Array1_byte_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
void M_java_util_zip_GZIPOutputStream_writeShort_int_Array1_byte_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
