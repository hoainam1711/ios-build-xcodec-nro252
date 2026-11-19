#ifndef HEADER_com_badlogic_gdx_utils_CharArray$CharArrayWriter
#define HEADER_com_badlogic_gdx_utils_CharArray$CharArrayWriter

#include "Clearwing.h"
#include "java/io/Writer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_CharArray$CharArrayWriter {
	java_io_Writer parent;
	jref F_this$0;
} com_badlogic_gdx_utils_CharArray$CharArrayWriter;

extern Class class_com_badlogic_gdx_utils_CharArray$CharArrayWriter;


#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_finalize 5
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_notify 6
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_wait 8
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_char_R_java_lang_Appendable 11
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable 12
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 13
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close 14
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush 15
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char 16
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int 17
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int 18
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String 19
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int 20
typedef void (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer 21
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_char_R_java_io_Writer 22
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_char_R_java_io_Writer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer 23
typedef jobject (*func_com_badlogic_gdx_utils_CharArray$CharArrayWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_com_badlogic_gdx_utils_CharArray$CharArrayWriter(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_CharArray$CharArrayWriter(jcontext ctx);
void init_com_badlogic_gdx_utils_CharArray$CharArrayWriter_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_close(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_flush(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_CharArray$CharArrayWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
