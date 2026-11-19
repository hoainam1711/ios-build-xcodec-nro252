#ifndef HEADER_com_badlogic_gdx_graphics_g3d_model_Animation
#define HEADER_com_badlogic_gdx_graphics_g3d_model_Animation

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_model_Animation {
	java_lang_Object parent;
	jref F_id;
	jfloat F_duration;
	jref F_nodeAnimations;
} com_badlogic_gdx_graphics_g3d_model_Animation;

extern Class class_com_badlogic_gdx_graphics_g3d_model_Animation;


#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g3d_model_Animation_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g3d_model_Animation_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_model_Animation_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_model_Animation_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_model_Animation_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g3d_model_Animation_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g3d_model_Animation_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g3d_model_Animation_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g3d_model_Animation_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g3d_model_Animation_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_model_Animation_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g3d_model_Animation_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_graphics_g3d_model_Animation(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx);
void init_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
