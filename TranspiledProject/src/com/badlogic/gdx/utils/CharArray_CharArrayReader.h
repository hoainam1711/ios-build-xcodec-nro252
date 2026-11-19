#ifndef HEADER_com_badlogic_gdx_utils_CharArray$CharArrayReader
#define HEADER_com_badlogic_gdx_utils_CharArray$CharArrayReader

#include "Clearwing.h"
#include "java/io/Reader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_CharArray$CharArrayReader {
	java_io_Reader parent;
	jint F_mark;
	jint F_pos;
	jref F_this$0;
} com_badlogic_gdx_utils_CharArray$CharArrayReader;

extern Class class_com_badlogic_gdx_utils_CharArray$CharArrayReader;


#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_finalize 5
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_notify 6
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_wait 8
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_java_nio_CharBuffer_R_int 11
typedef jint (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_close 12
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_close)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int 13
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int 15
typedef jint (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_R_int 16
typedef jint (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int 17
typedef jint (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean 18
typedef jbool (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset 19
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long 20
typedef jlong (*func_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);

void mark_com_badlogic_gdx_utils_CharArray$CharArrayReader(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_CharArray$CharArrayReader(jcontext ctx);
void init_com_badlogic_gdx_utils_CharArray$CharArrayReader_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_CharArray$CharArrayReader_close(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_CharArray$CharArrayReader_mark_int(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_CharArray$CharArrayReader_markSupported_R_boolean(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_CharArray$CharArrayReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_com_badlogic_gdx_utils_CharArray$CharArrayReader_ready_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_CharArray$CharArrayReader_reset(jcontext ctx, jobject self);
jlong M_com_badlogic_gdx_utils_CharArray$CharArrayReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
