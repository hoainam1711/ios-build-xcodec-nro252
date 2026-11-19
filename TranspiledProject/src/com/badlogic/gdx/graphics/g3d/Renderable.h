#ifndef HEADER_com_badlogic_gdx_graphics_g3d_Renderable
#define HEADER_com_badlogic_gdx_graphics_g3d_Renderable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_Renderable {
	java_lang_Object parent;
	jref F_worldTransform;
	jref F_meshPart;
	jref F_material;
	jref F_environment;
	jref F_bones;
	jref F_shader;
	jref F_userData;
} com_badlogic_gdx_graphics_g3d_Renderable;

extern Class class_com_badlogic_gdx_graphics_g3d_Renderable;


#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g3d_Renderable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g3d_Renderable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_Renderable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_Renderable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_Renderable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g3d_Renderable_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g3d_Renderable_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g3d_Renderable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g3d_Renderable_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g3d_Renderable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g3d_Renderable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable 11
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_graphics_g3d_Renderable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx);
void init_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g3d_Renderable_set_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
