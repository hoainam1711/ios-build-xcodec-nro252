#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_Tree$1
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_Tree$1

#include "Clearwing.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_Tree$1 {
	com_badlogic_gdx_scenes_scene2d_utils_Selection parent;
	jref F_this$0;
} com_badlogic_gdx_scenes_scene2d_ui_Tree$1;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_Tree$1;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setDisabled_boolean 11
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_isDisabled_R_boolean 12
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_iterator_R_java_util_Iterator 13
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_forEach_java_util_function_Consumer 14
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_spliterator_R_java_util_Spliterator 15
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setActor_com_badlogic_gdx_scenes_scene2d_Actor 16
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setActor_com_badlogic_gdx_scenes_scene2d_Actor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_choose_java_lang_Object 17
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_choose_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_hasItems_R_boolean 18
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_hasItems_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_notEmpty_R_boolean 19
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_isEmpty_R_boolean 20
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_size_R_int 21
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_items_R_com_badlogic_gdx_utils_OrderedSet 22
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_items_R_com_badlogic_gdx_utils_OrderedSet)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_first_R_java_lang_Object 23
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_snapshot 24
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_snapshot)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_revert 25
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_revert)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_cleanup 26
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_cleanup)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_set_java_lang_Object 27
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setAll_com_badlogic_gdx_utils_Array 28
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_add_java_lang_Object 29
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_addAll_com_badlogic_gdx_utils_Array 30
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_addAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_remove_java_lang_Object 31
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_remove_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_removeAll_com_badlogic_gdx_utils_Array 32
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_removeAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_clear 33
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed 34
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_fireChangeEvent_R_boolean 35
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_fireChangeEvent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_contains_java_lang_Object_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getLastSelected_R_java_lang_Object 37
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getLastSelected_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_toArray_R_com_badlogic_gdx_utils_Array 38
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_toArray_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array 39
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getToggle_R_boolean 40
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getToggle_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setToggle_boolean 41
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setToggle_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getMultiple_R_boolean 42
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getMultiple_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setMultiple_boolean 43
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setMultiple_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getRequired_R_boolean 44
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getRequired_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setRequired_boolean 45
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setRequired_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setProgrammaticChangeEvents_boolean 46
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_setProgrammaticChangeEvents_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getProgrammaticChangeEvents_R_boolean 47
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_getProgrammaticChangeEvents_R_boolean)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$1(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$1(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_com_badlogic_gdx_scenes_scene2d_ui_Tree(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
