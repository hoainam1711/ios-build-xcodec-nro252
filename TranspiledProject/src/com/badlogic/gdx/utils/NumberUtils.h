#ifndef HEADER_com_badlogic_gdx_utils_NumberUtils
#define HEADER_com_badlogic_gdx_utils_NumberUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_NumberUtils {
	java_lang_Object parent;
} com_badlogic_gdx_utils_NumberUtils;

extern Class class_com_badlogic_gdx_utils_NumberUtils;


#define VTABLE_com_badlogic_gdx_utils_NumberUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_NumberUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_NumberUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_NumberUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_NumberUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_NumberUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_finalize 5
typedef void (*func_com_badlogic_gdx_utils_NumberUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_notify 6
typedef void (*func_com_badlogic_gdx_utils_NumberUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_NumberUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_wait 8
typedef void (*func_com_badlogic_gdx_utils_NumberUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_NumberUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_NumberUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_NumberUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_utils_NumberUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_NumberUtils(jcontext ctx);
void init_com_badlogic_gdx_utils_NumberUtils(jcontext ctx, jobject self);
jint SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_utils_NumberUtils_floatToIntColor_float_R_int(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(jcontext ctx, jint param0);
jfloat SM_com_badlogic_gdx_utils_NumberUtils_intBitsToFloat_int_R_float(jcontext ctx, jint param0);
jlong SM_com_badlogic_gdx_utils_NumberUtils_doubleToLongBits_double_R_long(jcontext ctx, jdouble param0);
jdouble SM_com_badlogic_gdx_utils_NumberUtils_longBitsToDouble_long_R_double(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
