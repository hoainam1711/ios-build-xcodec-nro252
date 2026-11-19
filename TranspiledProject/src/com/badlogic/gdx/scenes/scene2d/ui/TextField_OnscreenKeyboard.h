#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard;


#define INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField 0
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_close 1
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_close)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
