#ifndef HEADER_com_badlogic_gdx_utils_async_ThreadUtils
#define HEADER_com_badlogic_gdx_utils_async_ThreadUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_async_ThreadUtils {
	java_lang_Object parent;
} com_badlogic_gdx_utils_async_ThreadUtils;

extern Class class_com_badlogic_gdx_utils_async_ThreadUtils;


#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_async_ThreadUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_async_ThreadUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_async_ThreadUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_async_ThreadUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_async_ThreadUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_finalize 5
typedef void (*func_com_badlogic_gdx_utils_async_ThreadUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_notify 6
typedef void (*func_com_badlogic_gdx_utils_async_ThreadUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_async_ThreadUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_wait 8
typedef void (*func_com_badlogic_gdx_utils_async_ThreadUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_async_ThreadUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_async_ThreadUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_async_ThreadUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_utils_async_ThreadUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_async_ThreadUtils(jcontext ctx);
void init_com_badlogic_gdx_utils_async_ThreadUtils(jcontext ctx, jobject self);
void SM_com_badlogic_gdx_utils_async_ThreadUtils_yield(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
