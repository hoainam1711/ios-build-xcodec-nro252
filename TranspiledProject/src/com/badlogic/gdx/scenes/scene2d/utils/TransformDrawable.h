#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable
#define HEADER_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable;

extern Class class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable;


#define INDEX_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float 0
typedef void (*func_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);

void mark_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
