#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_Styleable
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_Styleable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_Styleable {
	java_lang_Object parent;
} com_badlogic_gdx_scenes_scene2d_ui_Styleable;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_Styleable;


#define INDEX_com_badlogic_gdx_scenes_scene2d_ui_Styleable_getStyle_R_java_lang_Object 0
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Styleable_getStyle_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_scenes_scene2d_ui_Styleable_setStyle_java_lang_Object 1
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Styleable_setStyle_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_scenes_scene2d_ui_Styleable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_Styleable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
