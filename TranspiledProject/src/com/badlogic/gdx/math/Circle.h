#ifndef HEADER_com_badlogic_gdx_math_Circle
#define HEADER_com_badlogic_gdx_math_Circle

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "com/badlogic/gdx/math/Shape2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Circle {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_radius;
} com_badlogic_gdx_math_Circle;

extern Class class_com_badlogic_gdx_math_Circle;


#define VTABLE_com_badlogic_gdx_math_Circle_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Circle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Circle_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Circle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Circle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Circle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_finalize 5
typedef void (*func_com_badlogic_gdx_math_Circle_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_notify 6
typedef void (*func_com_badlogic_gdx_math_Circle_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Circle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_wait 8
typedef void (*func_com_badlogic_gdx_math_Circle_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Circle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Circle_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Circle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean 12
typedef jbool (*func_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Circle_set_float_float_float 13
typedef void (*func_com_badlogic_gdx_math_Circle_set_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float 14
typedef void (*func_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle 15
typedef void (*func_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2 16
typedef void (*func_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2 17
typedef void (*func_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Circle_setPosition_float_float 18
typedef void (*func_com_badlogic_gdx_math_Circle_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Circle_setX_float 19
typedef void (*func_com_badlogic_gdx_math_Circle_setX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Circle_setY_float 20
typedef void (*func_com_badlogic_gdx_math_Circle_setY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Circle_setRadius_float 21
typedef void (*func_com_badlogic_gdx_math_Circle_setRadius_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean 22
typedef jbool (*func_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean 23
typedef jbool (*func_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Circle_circumference_R_float 24
typedef jfloat (*func_com_badlogic_gdx_math_Circle_circumference_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Circle_area_R_float 25
typedef jfloat (*func_com_badlogic_gdx_math_Circle_area_R_float)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_math_Circle(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Circle(jcontext ctx);
void init_com_badlogic_gdx_math_Circle(jcontext ctx, jobject self);
void init_com_badlogic_gdx_math_Circle_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Circle(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_math_Circle_set_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Circle(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_math_Circle_set_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_math_Circle_setPosition_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_math_Circle_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_math_Circle_setX_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_math_Circle_setY_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_math_Circle_setRadius_float(jcontext ctx, jobject self, jfloat param0);
jbool M_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_math_Circle_contains_com_badlogic_gdx_math_Circle_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Circle_toString_R_java_lang_String(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Circle_circumference_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Circle_area_R_float(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_math_Circle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_math_Circle_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
