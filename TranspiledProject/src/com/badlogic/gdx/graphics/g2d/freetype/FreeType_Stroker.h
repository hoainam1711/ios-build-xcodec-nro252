#ifndef HEADER_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker
#define HEADER_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker

#include "Clearwing.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker {
	com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer parent;
} com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker;

extern Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker;


#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose 11
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_set_int_int_int_int 12
typedef void (*func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_set_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_long(jcontext ctx, jobject self, jlong param0);
void M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_set_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_set_long_int_int_int_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4);
void M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose(jcontext ctx, jobject self);
void SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_done_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
