#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_utils_Disableable
#define HEADER_com_badlogic_gdx_scenes_scene2d_utils_Disableable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_utils_Disableable {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_utils_Disableable;

extern Class class_com_badlogic_gdx_scenes_scene2d_utils_Disableable;


#define INDEX_com_badlogic_gdx_scenes_scene2d_utils_Disableable_setDisabled_boolean 0
typedef void (*func_com_badlogic_gdx_scenes_scene2d_utils_Disableable_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_com_badlogic_gdx_scenes_scene2d_utils_Disableable_isDisabled_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_utils_Disableable_isDisabled_R_boolean)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_scenes_scene2d_utils_Disableable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_utils_Disableable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
