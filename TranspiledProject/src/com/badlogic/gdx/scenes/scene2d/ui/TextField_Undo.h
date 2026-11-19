#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo {
	java_lang_Object parent;
	jint F_max;
	jref F_states;
	jint F_index;
	jlong F_lastChangeTime;
} com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int 11
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int 12
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean 13
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState 15
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState 16
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int 17
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo 18
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo 19
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear 20
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_store_java_lang_String_int_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_keyTyped_java_lang_String_int_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canUndo_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_canRedo_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_undo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_redo_java_lang_String_int_boolean_int_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$UndoState(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_storeCurrent_java_lang_String_int_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jint param3);
void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelUndo(jcontext ctx, jobject self);
void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_cancelRedo(jcontext ctx, jobject self);
void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$Undo_clear(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
