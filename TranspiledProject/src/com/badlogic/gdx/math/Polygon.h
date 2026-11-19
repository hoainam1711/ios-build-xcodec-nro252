#ifndef HEADER_com_badlogic_gdx_math_Polygon
#define HEADER_com_badlogic_gdx_math_Polygon

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Shape2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Polygon {
	java_lang_Object parent;
	jref F_localVertices;
	jref F_worldVertices;
	jfloat F_x;
	jfloat F_y;
	jfloat F_originX;
	jfloat F_originY;
	jfloat F_rotation;
	jfloat F_scaleX;
	jfloat F_scaleY;
	jbool F_dirty;
	jref F_bounds;
} com_badlogic_gdx_math_Polygon;

extern Class class_com_badlogic_gdx_math_Polygon;


#define VTABLE_com_badlogic_gdx_math_Polygon_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Polygon_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Polygon_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Polygon_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Polygon_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Polygon_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_finalize 5
typedef void (*func_com_badlogic_gdx_math_Polygon_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_notify 6
typedef void (*func_com_badlogic_gdx_math_Polygon_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Polygon_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_wait 8
typedef void (*func_com_badlogic_gdx_math_Polygon_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Polygon_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Polygon_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean 12
typedef jbool (*func_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float 13
typedef jobject (*func_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float 14
typedef jobject (*func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_setOrigin_float_float 15
typedef void (*func_com_badlogic_gdx_math_Polygon_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_setPosition_float_float 16
typedef void (*func_com_badlogic_gdx_math_Polygon_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_setVertices_Array1_float 17
typedef void (*func_com_badlogic_gdx_math_Polygon_setVertices_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_setVertex_int_float_float 18
typedef void (*func_com_badlogic_gdx_math_Polygon_setVertex_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_math_Polygon_translate_float_float 19
typedef void (*func_com_badlogic_gdx_math_Polygon_translate_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_setRotation_float 20
typedef void (*func_com_badlogic_gdx_math_Polygon_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_rotate_float 21
typedef void (*func_com_badlogic_gdx_math_Polygon_rotate_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_setScale_float_float 22
typedef void (*func_com_badlogic_gdx_math_Polygon_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_scale_float 23
typedef void (*func_com_badlogic_gdx_math_Polygon_scale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_dirty 24
typedef void (*func_com_badlogic_gdx_math_Polygon_dirty)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_area_R_float 25
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_area_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getVertexCount_R_int 26
typedef jint (*func_com_badlogic_gdx_math_Polygon_getVertexCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2 27
typedef jobject (*func_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2 28
typedef jobject (*func_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle 29
typedef jobject (*func_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getX_R_float 30
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getY_R_float 31
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getOriginX_R_float 32
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getOriginX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getOriginY_R_float 33
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getOriginY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getRotation_R_float 34
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getScaleX_R_float 35
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_getScaleY_R_float 36
typedef jfloat (*func_com_badlogic_gdx_math_Polygon_getScaleY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Polygon_resetTransformations 37
typedef void (*func_com_badlogic_gdx_math_Polygon_resetTransformations)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_math_Polygon(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Polygon(jcontext ctx);
void init_com_badlogic_gdx_math_Polygon(jcontext ctx, jobject self);
void init_com_badlogic_gdx_math_Polygon_Array1_float(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float(jcontext ctx, jobject self);
void M_com_badlogic_gdx_math_Polygon_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_math_Polygon_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_math_Polygon_setVertices_Array1_float(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_math_Polygon_setVertex_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_com_badlogic_gdx_math_Polygon_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_math_Polygon_setRotation_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_math_Polygon_rotate_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_math_Polygon_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_math_Polygon_scale_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_math_Polygon_dirty(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_area_R_float(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_math_Polygon_getVertexCount_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_com_badlogic_gdx_math_Polygon_getX_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_getY_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_getOriginX_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_getOriginY_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_getRotation_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_getScaleX_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_Polygon_getScaleY_R_float(jcontext ctx, jobject self);
void M_com_badlogic_gdx_math_Polygon_resetTransformations(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
