#ifndef HEADER_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph
#define HEADER_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph {
	java_lang_Object parent;
	jint F_id;
	jint F_srcX;
	jint F_srcY;
	jint F_width;
	jint F_height;
	jfloat F_u;
	jfloat F_v;
	jfloat F_u2;
	jfloat F_v2;
	jint F_xoffset;
	jint F_yoffset;
	jint F_xadvance;
	jref F_kerning;
	jbool F_fixedWidth;
	jint F_page;
} com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph;

extern Class class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph;


#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getKerning_char_R_int 11
typedef jint (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getKerning_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int 12
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getKerning_char_R_int(jcontext ctx, jobject self, jchar param0);
void M_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
