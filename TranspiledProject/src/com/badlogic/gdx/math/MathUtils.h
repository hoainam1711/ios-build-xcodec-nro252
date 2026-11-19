#ifndef HEADER_com_badlogic_gdx_math_MathUtils
#define HEADER_com_badlogic_gdx_math_MathUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_MathUtils {
	java_lang_Object parent;
} com_badlogic_gdx_math_MathUtils;

extern Class class_com_badlogic_gdx_math_MathUtils;

extern jfloat SF_com_badlogic_gdx_math_MathUtils_nanoToSec;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_FLOAT_ROUNDING_ERROR;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_PI;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_PI2;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_HALF_PI;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_E;
extern jint SF_com_badlogic_gdx_math_MathUtils_SIN_BITS;
extern jint SF_com_badlogic_gdx_math_MathUtils_SIN_MASK;
extern jint SF_com_badlogic_gdx_math_MathUtils_SIN_COUNT;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_radFull;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_degFull;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_radToIndex;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_degToIndex;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_radiansToDegrees;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_radDeg;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_degreesToRadians;
extern jfloat SF_com_badlogic_gdx_math_MathUtils_degRad;
extern jobject SF_com_badlogic_gdx_math_MathUtils_random;
extern jint SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_INT;
extern jdouble SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_FLOOR;
extern jdouble SF_com_badlogic_gdx_math_MathUtils_CEIL;
extern jdouble SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_CEIL;
extern jdouble SF_com_badlogic_gdx_math_MathUtils_BIG_ENOUGH_ROUND;

#define VTABLE_com_badlogic_gdx_math_MathUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_MathUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_MathUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_MathUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_MathUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_MathUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_MathUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_finalize 5
typedef void (*func_com_badlogic_gdx_math_MathUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_notify 6
typedef void (*func_com_badlogic_gdx_math_MathUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_MathUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_wait 8
typedef void (*func_com_badlogic_gdx_math_MathUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_MathUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_math_MathUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_MathUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_MathUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_math_MathUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_MathUtils(jcontext ctx);
void init_com_badlogic_gdx_math_MathUtils(jcontext ctx, jobject self);
jfloat SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_cos_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_tan_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_tanDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_atanUnchecked_double_R_float(jcontext ctx, jdouble param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_atan2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jdouble SM_com_badlogic_gdx_math_MathUtils_atanUncheckedDeg_double_R_double(jcontext ctx, jdouble param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_atan2Deg_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_com_badlogic_gdx_math_MathUtils_atan2Deg360_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_com_badlogic_gdx_math_MathUtils_acos_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_asin_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_atan_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_asinDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_acosDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_atanDeg_float_R_float(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(jcontext ctx, jint param0);
jint SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int(jcontext ctx, jint param0, jint param1);
jlong SM_com_badlogic_gdx_math_MathUtils_random_long_R_long(jcontext ctx, jlong param0);
jlong SM_com_badlogic_gdx_math_MathUtils_random_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jbool SM_com_badlogic_gdx_math_MathUtils_randomBoolean_R_boolean(jcontext ctx);
jbool SM_com_badlogic_gdx_math_MathUtils_randomBoolean_float_R_boolean(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_random_R_float(jcontext ctx);
jfloat SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_random_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_com_badlogic_gdx_math_MathUtils_randomSign_R_int(jcontext ctx);
jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_R_float(jcontext ctx);
jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_com_badlogic_gdx_math_MathUtils_randomTriangular_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_com_badlogic_gdx_math_MathUtils_nextPowerOfTwo_int_R_int(jcontext ctx, jint param0);
jbool SM_com_badlogic_gdx_math_MathUtils_isPowerOfTwo_int_R_boolean(jcontext ctx, jint param0);
jshort SM_com_badlogic_gdx_math_MathUtils_clamp_short_short_short_R_short(jcontext ctx, jshort param0, jshort param1, jshort param2);
jint SM_com_badlogic_gdx_math_MathUtils_clamp_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);
jlong SM_com_badlogic_gdx_math_MathUtils_clamp_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2);
jfloat SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jdouble SM_com_badlogic_gdx_math_MathUtils_clamp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2);
jfloat SM_com_badlogic_gdx_math_MathUtils_lerp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_com_badlogic_gdx_math_MathUtils_norm_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_com_badlogic_gdx_math_MathUtils_map_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_com_badlogic_gdx_math_MathUtils_lerpAngle_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_com_badlogic_gdx_math_MathUtils_lerpAngleDeg_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_com_badlogic_gdx_math_MathUtils_floor_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_math_MathUtils_floorPositive_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_math_MathUtils_ceil_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_math_MathUtils_ceilPositive_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_math_MathUtils_round_float_R_int(jcontext ctx, jfloat param0);
jint SM_com_badlogic_gdx_math_MathUtils_roundPositive_float_R_int(jcontext ctx, jfloat param0);
jbool SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(jcontext ctx, jfloat param0);
jbool SM_com_badlogic_gdx_math_MathUtils_isZero_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_com_badlogic_gdx_math_MathUtils_log_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_com_badlogic_gdx_math_MathUtils_log2_float_R_float(jcontext ctx, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
