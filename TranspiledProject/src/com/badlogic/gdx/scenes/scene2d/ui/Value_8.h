#ifndef HEADER_com_badlogic_gdx_scenes_scene2d_ui_Value$8
#define HEADER_com_badlogic_gdx_scenes_scene2d_ui_Value$8

#include "Clearwing.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_scenes_scene2d_ui_Value$8 {
	com_badlogic_gdx_scenes_scene2d_ui_Value parent;
	jfloat F_val$percent;
} com_badlogic_gdx_scenes_scene2d_ui_Value$8;

extern Class class_com_badlogic_gdx_scenes_scene2d_ui_Value$8;


#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_finalize 5
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_notify 6
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_notifyAll 7
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_wait 8
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_wait_long 9
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_wait_long_int 10
typedef void (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_R_float 11
typedef jfloat (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float 12
typedef jfloat (*func_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_scenes_scene2d_ui_Value$8(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$8(jcontext ctx);
void init_com_badlogic_gdx_scenes_scene2d_ui_Value$8_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
