#ifndef HEADER_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun
#define HEADER_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun {
	java_lang_Object parent;
	jref F_glyphs;
	jref F_xAdvances;
	jfloat F_x;
	jfloat F_y;
	jfloat F_width;
	jref F_wrapState;
} com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun;

extern Class class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun;


#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset 11
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun 12
typedef void (*func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
