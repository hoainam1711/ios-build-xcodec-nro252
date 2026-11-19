#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_EventListener
#define HEADER_com_badlogic_gdx_scenes_scene2d_EventListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_EventListener {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_EventListener;

extern Class class_com_badlogic_gdx_scenes_scene2d_EventListener;


#define INDEX_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_EventListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_scenes_scene2d_EventListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_EventListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
