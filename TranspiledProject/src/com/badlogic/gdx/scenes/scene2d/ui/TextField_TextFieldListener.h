#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener;


#define INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener_keyTyped_com_badlogic_gdx_scenes_scene2d_ui_TextField_char 0
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener_keyTyped_com_badlogic_gdx_scenes_scene2d_ui_TextField_char)(jcontext ctx, jobject self, jobject param0, jchar param1);

void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
