#ifndef HEADER_com_badlogic_gdx_graphics_Camera
#define HEADER_com_badlogic_gdx_graphics_Camera

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_Camera {
	java_lang_Object parent;
	jref F_position;
	jref F_direction;
	jref F_up;
	jref F_projection;
	jref F_view;
	jref F_combined;
	jref F_invProjectionView;
	jfloat F_near;
	jfloat F_far;
	jfloat F_viewportWidth;
	jfloat F_viewportHeight;
	jref F_frustum;
	jref F_tmpVec;
	jref F_ray;
} com_badlogic_gdx_graphics_Camera;

extern Class class_com_badlogic_gdx_graphics_Camera;


#define VTABLE_com_badlogic_gdx_graphics_Camera_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_Camera_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_Camera_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_Camera_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_notify 6
typedef void (*func_com_badlogic_gdx_graphics_Camera_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_Camera_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_wait 8
typedef void (*func_com_badlogic_gdx_graphics_Camera_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_Camera_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_Camera_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_Camera_update 11
typedef void (*func_com_badlogic_gdx_graphics_Camera_update)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_update_boolean 12
typedef void (*func_com_badlogic_gdx_graphics_Camera_update_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float 13
typedef void (*func_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3 14
typedef void (*func_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_normalizeUp 15
typedef void (*func_com_badlogic_gdx_graphics_Camera_normalizeUp)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float 16
typedef void (*func_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float 17
typedef void (*func_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4 18
typedef void (*func_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion 19
typedef void (*func_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float 20
typedef void (*func_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4 21
typedef void (*func_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_translate_float_float_float 22
typedef void (*func_com_badlogic_gdx_graphics_Camera_translate_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3 23
typedef void (*func_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3 24
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3 25
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3 26
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3 27
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray 28
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray 29
typedef jobject (*func_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_com_badlogic_gdx_graphics_Camera(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_Camera(jcontext ctx);
void init_com_badlogic_gdx_graphics_Camera(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_Camera_lookAt_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_com_badlogic_gdx_graphics_Camera_lookAt_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_Camera_normalizeUp(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_Camera_rotate_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_Camera_rotate_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_Camera_rotateAround_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_com_badlogic_gdx_graphics_Camera_transform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_Camera_translate_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_com_badlogic_gdx_graphics_Camera_translate_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_com_badlogic_gdx_graphics_Camera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_graphics_Camera_project_com_badlogic_gdx_math_Vector3_float_float_float_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_com_badlogic_gdx_graphics_Camera_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
