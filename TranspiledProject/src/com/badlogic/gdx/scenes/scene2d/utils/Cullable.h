#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_utils_Cullable
#define HEADER_com_badlogic_gdx_scenes_scene2d_utils_Cullable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_utils_Cullable {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_utils_Cullable;

extern Class class_com_badlogic_gdx_scenes_scene2d_utils_Cullable;


#define INDEX_com_badlogic_gdx_scenes_scene2d_utils_Cullable_setCullingArea_com_badlogic_gdx_math_Rectangle 0
typedef void (*func_com_badlogic_gdx_scenes_scene2d_utils_Cullable_setCullingArea_com_badlogic_gdx_math_Rectangle)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_scenes_scene2d_utils_Cullable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_utils_Cullable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
