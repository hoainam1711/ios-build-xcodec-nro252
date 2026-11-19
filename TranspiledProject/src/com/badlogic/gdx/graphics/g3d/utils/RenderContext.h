#ifndef HEADER_com_badlogic_gdx_graphics_g3d_utils_RenderContext
#define HEADER_com_badlogic_gdx_graphics_g3d_utils_RenderContext

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g3d_utils_RenderContext {
	java_lang_Object parent;
	jref F_textureBinder;
	jbool F_blending;
	jint F_blendSourceRgbFactor;
	jint F_blendDestRgbFactor;
	jint F_blendSourceAlphaFactor;
	jint F_blendDestAlphaFactor;
	jint F_depthFunc;
	jfloat F_depthRangeNear;
	jfloat F_depthRangeFar;
	jbool F_depthMask;
	jint F_cullFace;
} com_badlogic_gdx_graphics_g3d_utils_RenderContext;

extern Class class_com_badlogic_gdx_graphics_g3d_utils_RenderContext;


#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin 11
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end 12
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean 13
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int 14
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float 15
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int 16
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int)(jcontext ctx, jobject self, jbool param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int 17
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int)(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int 18
typedef void (*func_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int)(jcontext ctx, jobject self, jint param0);

void mark_com_badlogic_gdx_graphics_g3d_utils_RenderContext(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g3d_utils_RenderContext(jcontext ctx);
void init_com_badlogic_gdx_graphics_g3d_utils_RenderContext_com_badlogic_gdx_graphics_g3d_utils_TextureBinder(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_begin(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_end(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthMask_boolean(jcontext ctx, jobject self, jbool param0);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setDepthTest_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int(jcontext ctx, jobject self, jbool param0, jint param1, jint param2);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setBlending_boolean_int_int_int_int(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jint param3, jint param4);
void M_com_badlogic_gdx_graphics_g3d_utils_RenderContext_setCullFace_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
