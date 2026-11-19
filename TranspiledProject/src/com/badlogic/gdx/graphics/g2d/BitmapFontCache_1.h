#ifndef HEADER_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1
#define HEADER_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/FlushablePool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_BitmapFontCache$1 {
	com_badlogic_gdx_utils_FlushablePool parent;
	jref F_this$0;
} com_badlogic_gdx_graphics_g2d_BitmapFontCache$1;

extern Class class_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1;


#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object 11
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_obtain_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_obtain_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_free_java_lang_Object 13
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_free_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_fill_int 14
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_fill_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_reset_java_lang_Object 15
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_reset_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_discard_java_lang_Object 16
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_discard_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_freeAll_com_badlogic_gdx_utils_Array 17
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_freeAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_clear 18
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_getFree_R_int 19
typedef jint (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_getFree_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_flush 20
typedef void (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_flush)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout 21
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
