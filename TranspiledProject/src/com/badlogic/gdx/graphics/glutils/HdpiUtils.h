#ifndef HEADER_com_badlogic_gdx_graphics_glutils_HdpiUtils
#define HEADER_com_badlogic_gdx_graphics_glutils_HdpiUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_glutils_HdpiUtils {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_glutils_HdpiUtils;

extern Class class_com_badlogic_gdx_graphics_glutils_HdpiUtils;

extern jobject SF_com_badlogic_gdx_graphics_glutils_HdpiUtils_mode;

#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_notify 6
typedef void (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_wait 8
typedef void (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_glutils_HdpiUtils_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_glutils_HdpiUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_graphics_glutils_HdpiUtils(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_glutils_HdpiUtils(jcontext ctx);
void init_com_badlogic_gdx_graphics_glutils_HdpiUtils(jcontext ctx, jobject self);
void SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_setMode_com_badlogic_gdx_graphics_glutils_HdpiMode(jcontext ctx, jobject param0);
void SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glScissor_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_glViewport_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toLogicalX_int_R_int(jcontext ctx, jint param0);
jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toLogicalY_int_R_int(jcontext ctx, jint param0);
jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferX_int_R_int(jcontext ctx, jint param0);
jint SM_com_badlogic_gdx_graphics_glutils_HdpiUtils_toBackBufferY_int_R_int(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
