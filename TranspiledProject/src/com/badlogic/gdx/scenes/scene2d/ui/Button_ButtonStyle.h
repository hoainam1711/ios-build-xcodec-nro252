#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle {
	java_lang_Object parent;
	jref F_up;
	jref F_down;
	jref F_over;
	jref F_focused;
	jref F_disabled;
	jref F_checked;
	jref F_checkedOver;
	jref F_checkedDown;
	jref F_checkedFocused;
	jfloat F_pressedOffsetX;
	jfloat F_pressedOffsetY;
	jfloat F_unpressedOffsetX;
	jfloat F_unpressedOffsetY;
	jfloat F_checkedOffsetX;
	jfloat F_checkedOffsetY;
} com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jcontext ctx, jobject self);
void init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
