#ifndef HEADER_com_badlogic_gdx_graphics_g3d_Shader
#define HEADER_com_badlogic_gdx_graphics_g3d_Shader

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_Shader {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_g3d_Shader;

extern Class class_com_badlogic_gdx_graphics_g3d_Shader;


#define INDEX_com_badlogic_gdx_graphics_g3d_Shader_init 0
typedef void (*func_com_badlogic_gdx_graphics_g3d_Shader_init)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_graphics_g3d_Shader_compareTo_com_badlogic_gdx_graphics_g3d_Shader_R_int 1
typedef jint (*func_com_badlogic_gdx_graphics_g3d_Shader_compareTo_com_badlogic_gdx_graphics_g3d_Shader_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_graphics_g3d_Shader_canRender_com_badlogic_gdx_graphics_g3d_Renderable_R_boolean 2
typedef jbool (*func_com_badlogic_gdx_graphics_g3d_Shader_canRender_com_badlogic_gdx_graphics_g3d_Renderable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_graphics_g3d_Shader_begin_com_badlogic_gdx_graphics_Camera_com_badlogic_gdx_graphics_g3d_utils_RenderContext 3
typedef void (*func_com_badlogic_gdx_graphics_g3d_Shader_begin_com_badlogic_gdx_graphics_Camera_com_badlogic_gdx_graphics_g3d_utils_RenderContext)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_com_badlogic_gdx_graphics_g3d_Shader_render_com_badlogic_gdx_graphics_g3d_Renderable 4
typedef void (*func_com_badlogic_gdx_graphics_g3d_Shader_render_com_badlogic_gdx_graphics_g3d_Renderable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_graphics_g3d_Shader_end 5
typedef void (*func_com_badlogic_gdx_graphics_g3d_Shader_end)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_graphics_g3d_Shader(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_Shader(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
