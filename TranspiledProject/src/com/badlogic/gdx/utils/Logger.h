#ifndef HEADER_com_badlogic_gdx_utils_Logger
#define HEADER_com_badlogic_gdx_utils_Logger

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Logger {
	java_lang_Object parent;
	jref F_tag;
	jint F_level;
} com_badlogic_gdx_utils_Logger;

extern Class class_com_badlogic_gdx_utils_Logger;

extern jint SF_com_badlogic_gdx_utils_Logger_NONE;
extern jint SF_com_badlogic_gdx_utils_Logger_ERROR;
extern jint SF_com_badlogic_gdx_utils_Logger_INFO;
extern jint SF_com_badlogic_gdx_utils_Logger_DEBUG;

#define VTABLE_com_badlogic_gdx_utils_Logger_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Logger_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Logger_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Logger_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Logger_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Logger_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Logger_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Logger_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_notify 6
typedef void (*func_com_badlogic_gdx_utils_Logger_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Logger_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_wait 8
typedef void (*func_com_badlogic_gdx_utils_Logger_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Logger_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Logger_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Logger_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Logger_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String 11
typedef void (*func_com_badlogic_gdx_utils_Logger_debug_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception 12
typedef void (*func_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String 13
typedef void (*func_com_badlogic_gdx_utils_Logger_info_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception 14
typedef void (*func_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Logger_error_java_lang_String 15
typedef void (*func_com_badlogic_gdx_utils_Logger_error_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable 16
typedef void (*func_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Logger_setLevel_int 17
typedef void (*func_com_badlogic_gdx_utils_Logger_setLevel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Logger_getLevel_R_int 18
typedef jint (*func_com_badlogic_gdx_utils_Logger_getLevel_R_int)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Logger(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Logger(jcontext ctx);
void init_com_badlogic_gdx_utils_Logger_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Logger_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_com_badlogic_gdx_utils_Logger_debug_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Logger_info_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Logger_error_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Logger_setLevel_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_Logger_getLevel_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
