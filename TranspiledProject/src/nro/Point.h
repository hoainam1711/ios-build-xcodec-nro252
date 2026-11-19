#ifndef HEADER_nro_Point
#define HEADER_nro_Point

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Point {
	java_lang_Object parent;
	jbyte F_type;
	jint F_x;
	jint F_y;
	jint F_g;
	jint F_v;
	jint F_vMax;
	jint F_w;
	jint F_h;
	jint F_color;
	jint F_limitY;
	jint F_vx;
	jint F_id;
	jbool F_isRemove;
	jbool F_isSmall;
	jbool F_isPaint;
	jref F_fraImgEff;
	jref F_fraImgEff_2;
	jref F_mpaintone_Arrow;
	jref F_mImageArrow;
	jref F_mXoayArrow;
} nro_Point;

extern Class class_nro_Point;


#define VTABLE_nro_Point_hashCode_R_int 0
typedef jint (*func_nro_Point_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Point_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Point_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Point_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Point_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_toString_R_java_lang_String 4
typedef jobject (*func_nro_Point_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_finalize 5
typedef void (*func_nro_Point_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_notify 6
typedef void (*func_nro_Point_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_notifyAll 7
typedef void (*func_nro_Point_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_wait 8
typedef void (*func_nro_Point_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_wait_long 9
typedef void (*func_nro_Point_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Point_wait_long_int 10
typedef void (*func_nro_Point_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Point_update 11
typedef void (*func_nro_Point_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Point_setFrameAngle_int_R_int 12
typedef jint (*func_nro_Point_setFrameAngle_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean 13
typedef void (*func_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);

void mark_nro_Point(jobject object, jint mark, jint depth);
void clinit_nro_Point(jcontext ctx);
void init_nro_Point(jcontext ctx, jobject self);
void M_nro_Point_update(jcontext ctx, jobject self);
jint M_nro_Point_setFrameAngle_int_R_int(jcontext ctx, jobject self, jint param0);
void M_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);

#ifdef __cplusplus
}
#endif

#endif
