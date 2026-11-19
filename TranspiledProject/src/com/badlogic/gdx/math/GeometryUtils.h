#ifndef HEADER_com_badlogic_gdx_math_GeometryUtils
#define HEADER_com_badlogic_gdx_math_GeometryUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_GeometryUtils {
	java_lang_Object parent;
} com_badlogic_gdx_math_GeometryUtils;

extern Class class_com_badlogic_gdx_math_GeometryUtils;

extern jobject SF_com_badlogic_gdx_math_GeometryUtils_tmp1;
extern jobject SF_com_badlogic_gdx_math_GeometryUtils_tmp2;
extern jobject SF_com_badlogic_gdx_math_GeometryUtils_tmp3;

#define VTABLE_com_badlogic_gdx_math_GeometryUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_GeometryUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_GeometryUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_GeometryUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_GeometryUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_GeometryUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_finalize 5
typedef void (*func_com_badlogic_gdx_math_GeometryUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_notify 6
typedef void (*func_com_badlogic_gdx_math_GeometryUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_GeometryUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_wait 8
typedef void (*func_com_badlogic_gdx_math_GeometryUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_math_GeometryUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_GeometryUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_GeometryUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_math_GeometryUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_GeometryUtils(jcontext ctx);
void init_com_badlogic_gdx_math_GeometryUtils(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_math_GeometryUtils_toBarycoord_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_com_badlogic_gdx_math_GeometryUtils_barycoordInsideTriangle_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_math_GeometryUtils_fromBarycoord_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jfloat SM_com_badlogic_gdx_math_GeometryUtils_fromBarycoord_com_badlogic_gdx_math_Vector2_float_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_com_badlogic_gdx_math_GeometryUtils_lowestPositiveRoot_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jbool SM_com_badlogic_gdx_math_GeometryUtils_colinear_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject SM_com_badlogic_gdx_math_GeometryUtils_triangleCentroid_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jobject SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumcenter_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jfloat SM_com_badlogic_gdx_math_GeometryUtils_triangleCircumradius_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_com_badlogic_gdx_math_GeometryUtils_triangleQuality_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_com_badlogic_gdx_math_GeometryUtils_triangleArea_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject SM_com_badlogic_gdx_math_GeometryUtils_quadrilateralCentroid_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
jobject SM_com_badlogic_gdx_math_GeometryUtils_polygonCentroid_Array1_float_int_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jfloat SM_com_badlogic_gdx_math_GeometryUtils_polygonArea_Array1_float_int_int_R_float(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float(jcontext ctx, jobject param0);
void SM_com_badlogic_gdx_math_GeometryUtils_ensureCCW_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float(jcontext ctx, jobject param0);
void SM_com_badlogic_gdx_math_GeometryUtils_ensureClockwise_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_com_badlogic_gdx_math_GeometryUtils_reverseVertices_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_com_badlogic_gdx_math_GeometryUtils_isCCW_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
