#ifndef HEADER_com_badlogic_gdx_ApplicationLogger
#define HEADER_com_badlogic_gdx_ApplicationLogger

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_ApplicationLogger {
	java_lang_Object parent;
} com_badlogic_gdx_ApplicationLogger;

extern Class class_com_badlogic_gdx_ApplicationLogger;


#define INDEX_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String 0
typedef void (*func_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String_java_lang_Throwable 1
typedef void (*func_com_badlogic_gdx_ApplicationLogger_log_java_lang_String_java_lang_String_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String 2
typedef void (*func_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String_java_lang_Throwable 3
typedef void (*func_com_badlogic_gdx_ApplicationLogger_error_java_lang_String_java_lang_String_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String 4
typedef void (*func_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String_java_lang_Throwable 5
typedef void (*func_com_badlogic_gdx_ApplicationLogger_debug_java_lang_String_java_lang_String_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_com_badlogic_gdx_ApplicationLogger(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_ApplicationLogger(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
