#ifndef HEADER_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds
#define HEADER_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_width;
	jint F_height;
} com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds;

extern Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds;


#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int 11
typedef void (*func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(jcontext ctx, jobject self);
void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
