#ifndef HEADER_com_badlogic_gdx_utils_async_AsyncResult
#define HEADER_com_badlogic_gdx_utils_async_AsyncResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_async_AsyncResult {
	java_lang_Object parent;
	jref F_result;
} com_badlogic_gdx_utils_async_AsyncResult;

extern Class class_com_badlogic_gdx_utils_async_AsyncResult;


#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_async_AsyncResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_async_AsyncResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_async_AsyncResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_async_AsyncResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_async_AsyncResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_finalize 5
typedef void (*func_com_badlogic_gdx_utils_async_AsyncResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_notify 6
typedef void (*func_com_badlogic_gdx_utils_async_AsyncResult_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_async_AsyncResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_wait 8
typedef void (*func_com_badlogic_gdx_utils_async_AsyncResult_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_async_AsyncResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_async_AsyncResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_async_AsyncResult(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_async_AsyncResult(jcontext ctx);
void init_com_badlogic_gdx_utils_async_AsyncResult_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_async_AsyncResult_isDone_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_async_AsyncResult_get_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
