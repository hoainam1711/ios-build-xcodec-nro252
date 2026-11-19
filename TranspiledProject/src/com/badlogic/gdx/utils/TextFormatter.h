#ifndef HEADER_com_badlogic_gdx_utils_TextFormatter
#define HEADER_com_badlogic_gdx_utils_TextFormatter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_TextFormatter {
	java_lang_Object parent;
	jref F_messageFormat;
	jref F_buffer;
} com_badlogic_gdx_utils_TextFormatter;

extern Class class_com_badlogic_gdx_utils_TextFormatter;


#define VTABLE_com_badlogic_gdx_utils_TextFormatter_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_TextFormatter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_TextFormatter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_TextFormatter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_TextFormatter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_TextFormatter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_finalize 5
typedef void (*func_com_badlogic_gdx_utils_TextFormatter_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_notify 6
typedef void (*func_com_badlogic_gdx_utils_TextFormatter_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_TextFormatter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_wait 8
typedef void (*func_com_badlogic_gdx_utils_TextFormatter_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_TextFormatter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_TextFormatter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String 11
typedef jobject (*func_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String 12
typedef jobject (*func_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String 13
typedef jobject (*func_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_utils_TextFormatter(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_TextFormatter(jcontext ctx);
void init_com_badlogic_gdx_utils_TextFormatter_java_util_Locale_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
