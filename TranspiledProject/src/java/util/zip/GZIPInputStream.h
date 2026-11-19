#ifndef HEADER_java_util_zip_GZIPInputStream
#define HEADER_java_util_zip_GZIPInputStream

#include "Clearwing.h"
#include "java/util/zip/InflaterInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_GZIPInputStream {
	java_util_zip_InflaterInputStream parent;
	jref F_crc;
	jbool F_eos;
	jbool F_closed;
	jref F_tmpbuf;
} java_util_zip_GZIPInputStream;

extern Class class_java_util_zip_GZIPInputStream;

extern jint SF_java_util_zip_GZIPInputStream_GZIP_MAGIC;
extern jint SF_java_util_zip_GZIPInputStream_FTEXT;
extern jint SF_java_util_zip_GZIPInputStream_FHCRC;
extern jint SF_java_util_zip_GZIPInputStream_FEXTRA;
extern jint SF_java_util_zip_GZIPInputStream_FNAME;
extern jint SF_java_util_zip_GZIPInputStream_FCOMMENT;

#define VTABLE_java_util_zip_GZIPInputStream_hashCode_R_int 0
typedef jint (*func_java_util_zip_GZIPInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_GZIPInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_GZIPInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_GZIPInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_GZIPInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_finalize 5
typedef void (*func_java_util_zip_GZIPInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_notify 6
typedef void (*func_java_util_zip_GZIPInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_notifyAll 7
typedef void (*func_java_util_zip_GZIPInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_wait 8
typedef void (*func_java_util_zip_GZIPInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_wait_long 9
typedef void (*func_java_util_zip_GZIPInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_GZIPInputStream_wait_long_int 10
typedef void (*func_java_util_zip_GZIPInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_GZIPInputStream_close 11
typedef void (*func_java_util_zip_GZIPInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_available_R_int 12
typedef jint (*func_java_util_zip_GZIPInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_mark_int 13
typedef void (*func_java_util_zip_GZIPInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_GZIPInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_util_zip_GZIPInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_read_R_int 15
typedef jint (*func_java_util_zip_GZIPInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_util_zip_GZIPInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_GZIPInputStream_reset 18
typedef void (*func_java_util_zip_GZIPInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_skip_long_R_long 19
typedef jlong (*func_java_util_zip_GZIPInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_GZIPInputStream_ensureOpen 20
typedef void (*func_java_util_zip_GZIPInputStream_ensureOpen)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_fill 21
typedef void (*func_java_util_zip_GZIPInputStream_fill)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int 22
typedef jint (*func_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPInputStream_readTrailer_R_boolean 23
typedef jbool (*func_java_util_zip_GZIPInputStream_readTrailer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long 24
typedef jlong (*func_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int 25
typedef jint (*func_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int 26
typedef jint (*func_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int 27
typedef void (*func_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_java_util_zip_GZIPInputStream(jobject object, jint mark, jint depth);
void clinit_java_util_zip_GZIPInputStream(jcontext ctx);
void M_java_util_zip_GZIPInputStream_ensureOpen(jcontext ctx, jobject self);
void init_java_util_zip_GZIPInputStream_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_zip_GZIPInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_GZIPInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_GZIPInputStream_close(jcontext ctx, jobject self);
jint M_java_util_zip_GZIPInputStream_readHeader_java_io_InputStream_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_zip_GZIPInputStream_readTrailer_R_boolean(jcontext ctx, jobject self);
jlong M_java_util_zip_GZIPInputStream_readUInt_java_io_InputStream_R_long(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_GZIPInputStream_readUShort_java_io_InputStream_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_zip_GZIPInputStream_readUByte_java_io_InputStream_R_int(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_GZIPInputStream_skipBytes_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
