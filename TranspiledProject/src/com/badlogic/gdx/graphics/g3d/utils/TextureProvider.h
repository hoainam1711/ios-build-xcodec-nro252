#ifndef HEADER_com_badlogic_gdx_graphics_g3d_utils_TextureProvider
#define HEADER_com_badlogic_gdx_graphics_g3d_utils_TextureProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_utils_TextureProvider {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_g3d_utils_TextureProvider;

extern Class class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider;


#define INDEX_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture 0
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_utils_TextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
