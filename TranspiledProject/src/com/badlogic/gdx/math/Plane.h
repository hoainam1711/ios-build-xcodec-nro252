#ifndef HEADER_com_badlogic_gdx_math_Plane
#define HEADER_com_badlogic_gdx_math_Plane

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Plane {
	java_lang_Object parent;
	jref F_normal;
	jfloat F_d;
} com_badlogic_gdx_math_Plane;

extern Class class_com_badlogic_gdx_math_Plane;

extern jlong SF_com_badlogic_gdx_math_Plane_serialVersionUID;

#define VTABLE_com_badlogic_gdx_math_Plane_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Plane_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Plane_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Plane_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Plane_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Plane_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Plane_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_finalize 5
typedef void (*func_com_badlogic_gdx_math_Plane_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_notify 6
typedef void (*func_com_badlogic_gdx_math_Plane_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Plane_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_wait 8
typedef void (*func_com_badlogic_gdx_math_Plane_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Plane_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Plane_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Plane_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3 11
typedef void (*func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_com_badlogic_gdx_math_Plane_set_float_float_float_float 12
typedef void (*func_com_badlogic_gdx_math_Plane_set_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float 13
typedef jfloat (*func_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide 14
typedef jobject (*func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide 15
typedef jobject (*func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean 16
typedef jbool (*func_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3 17
typedef jobject (*func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_getD_R_float 18
typedef jfloat (*func_com_badlogic_gdx_math_Plane_getD_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3 19
typedef void (*func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float 20
typedef void (*func_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane 21
typedef void (*func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_math_Plane(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Plane(jcontext ctx);
void init_com_badlogic_gdx_math_Plane(jcontext ctx, jobject self);
void init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_com_badlogic_gdx_math_Plane_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat M_com_badlogic_gdx_math_Plane_distance_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jbool M_com_badlogic_gdx_math_Plane_isFrontFacing_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Plane_getD_R_float(jcontext ctx, jobject self);
void M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_math_Plane_set_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void M_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Plane(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Plane_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
