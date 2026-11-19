#ifndef HEADER_com_badlogic_gdx_graphics_g3d_RenderableProvider
#define HEADER_com_badlogic_gdx_graphics_g3d_RenderableProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_RenderableProvider {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_g3d_RenderableProvider;

extern Class class_com_badlogic_gdx_graphics_g3d_RenderableProvider;


#define INDEX_com_badlogic_gdx_graphics_g3d_RenderableProvider_getRenderables_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool 0
typedef void (*func_com_badlogic_gdx_graphics_g3d_RenderableProvider_getRenderables_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_graphics_g3d_RenderableProvider(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_RenderableProvider(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
