#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState {
	java_lang_Object parent;
	jref F_text;
	jint F_cursor;
	jint F_selectionStart;
	jbool F_hasSelection;
} com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
