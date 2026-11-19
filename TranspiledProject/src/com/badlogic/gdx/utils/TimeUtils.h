#ifndef HEADER_com_badlogic_gdx_utils_TimeUtils
#define HEADER_com_badlogic_gdx_utils_TimeUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_TimeUtils {
	java_lang_Object parent;
} com_badlogic_gdx_utils_TimeUtils;

extern Class class_com_badlogic_gdx_utils_TimeUtils;

extern jlong SF_com_badlogic_gdx_utils_TimeUtils_nanosPerMilli;

#define VTABLE_com_badlogic_gdx_utils_TimeUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_TimeUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_TimeUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_TimeUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_TimeUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_TimeUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_finalize 5
typedef void (*func_com_badlogic_gdx_utils_TimeUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_notify 6
typedef void (*func_com_badlogic_gdx_utils_TimeUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_TimeUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_wait 8
typedef void (*func_com_badlogic_gdx_utils_TimeUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_TimeUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_TimeUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_TimeUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_utils_TimeUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_TimeUtils(jcontext ctx);
void init_com_badlogic_gdx_utils_TimeUtils(jcontext ctx, jobject self);
jlong SM_com_badlogic_gdx_utils_TimeUtils_nanoTime_R_long(jcontext ctx);
jlong SM_com_badlogic_gdx_utils_TimeUtils_millis_R_long(jcontext ctx);
jlong SM_com_badlogic_gdx_utils_TimeUtils_nanosToMillis_long_R_long(jcontext ctx, jlong param0);
jlong SM_com_badlogic_gdx_utils_TimeUtils_millisToNanos_long_R_long(jcontext ctx, jlong param0);
jlong SM_com_badlogic_gdx_utils_TimeUtils_timeSinceNanos_long_R_long(jcontext ctx, jlong param0);
jlong SM_com_badlogic_gdx_utils_TimeUtils_timeSinceMillis_long_R_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
