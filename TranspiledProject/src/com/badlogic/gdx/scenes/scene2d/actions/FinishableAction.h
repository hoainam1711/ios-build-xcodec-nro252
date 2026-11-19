#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction
#define HEADER_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_actions_FinishableAction {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_actions_FinishableAction;

extern Class class_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction;


#define INDEX_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction_finish 0
typedef void (*func_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction_finish)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_actions_FinishableAction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
