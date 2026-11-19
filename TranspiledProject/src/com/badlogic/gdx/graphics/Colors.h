#ifndef HEADER_com_badlogic_gdx_graphics_Colors
#define HEADER_com_badlogic_gdx_graphics_Colors

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_Colors {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_Colors;

extern Class class_com_badlogic_gdx_graphics_Colors;

extern jobject SF_com_badlogic_gdx_graphics_Colors_map;

#define VTABLE_com_badlogic_gdx_graphics_Colors_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_Colors_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_Colors_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_Colors_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_Colors_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_Colors_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_Colors_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_Colors_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_notify 6
typedef void (*func_com_badlogic_gdx_graphics_Colors_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_Colors_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_wait 8
typedef void (*func_com_badlogic_gdx_graphics_Colors_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_Colors_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_Colors_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_Colors_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_Colors_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_graphics_Colors(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_Colors(jcontext ctx);
jobject SM_com_badlogic_gdx_graphics_Colors_getColors_R_com_badlogic_gdx_utils_ObjectMap(jcontext ctx);
jobject SM_com_badlogic_gdx_graphics_Colors_get_java_lang_String_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_graphics_Colors_put_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject param0, jobject param1);
void SM_com_badlogic_gdx_graphics_Colors_reset(jcontext ctx);
void init_com_badlogic_gdx_graphics_Colors(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
