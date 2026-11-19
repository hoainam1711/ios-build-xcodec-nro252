#ifndef HEADER_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page
#define HEADER_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page {
	java_lang_Object parent;
	jref F_name;
	jref F_textureFile;
	jref F_texture;
	jfloat F_width;
	jfloat F_height;
	jbool F_useMipMaps;
	jref F_format;
	jref F_minFilter;
	jref F_magFilter;
	jref F_uWrap;
	jref F_vWrap;
	jbool F_pma;
} com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page;

extern Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page;


#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
