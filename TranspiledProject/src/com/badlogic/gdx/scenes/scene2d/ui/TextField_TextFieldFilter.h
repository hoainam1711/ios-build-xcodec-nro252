#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter;


#define INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);

void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
