#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 {
	com_badlogic_gdx_utils_Timer$Task parent;
	jref F_this$0;
} com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run 11
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_cancel 12
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_cancel)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_isScheduled_R_boolean 13
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_isScheduled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_getExecuteTimeMillis_R_long 14
typedef jlong (*func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_getExecuteTimeMillis_R_long)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
