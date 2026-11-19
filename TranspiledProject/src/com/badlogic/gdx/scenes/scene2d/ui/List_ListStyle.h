#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle {
	java_lang_Object parent;
	jref F_font;
	jref F_fontColorSelected;
	jref F_fontColorUnselected;
	jref F_selection;
	jref F_down;
	jref F_over;
	jref F_background;
} com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self);
void init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
