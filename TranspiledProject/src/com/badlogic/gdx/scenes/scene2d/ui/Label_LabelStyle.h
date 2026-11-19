#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle {
	java_lang_Object parent;
	jref F_font;
	jref F_fontColor;
	jref F_background;
} com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self);
void init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
