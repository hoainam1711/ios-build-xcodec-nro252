#ifndef HEADER_com_badlogic_gdx_Gdx
#define HEADER_com_badlogic_gdx_Gdx

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Gdx {
	java_lang_Object parent;
} com_badlogic_gdx_Gdx;

extern Class class_com_badlogic_gdx_Gdx;

extern jobject SF_com_badlogic_gdx_Gdx_app;
extern jobject SF_com_badlogic_gdx_Gdx_graphics;
extern jobject SF_com_badlogic_gdx_Gdx_audio;
extern jobject SF_com_badlogic_gdx_Gdx_input;
extern jobject SF_com_badlogic_gdx_Gdx_files;
extern jobject SF_com_badlogic_gdx_Gdx_net;
extern jobject SF_com_badlogic_gdx_Gdx_gl;
extern jobject SF_com_badlogic_gdx_Gdx_gl20;
extern jobject SF_com_badlogic_gdx_Gdx_gl30;
extern jobject SF_com_badlogic_gdx_Gdx_gl31;
extern jobject SF_com_badlogic_gdx_Gdx_gl32;

#define VTABLE_com_badlogic_gdx_Gdx_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Gdx_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Gdx_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Gdx_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Gdx_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Gdx_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Gdx_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_finalize 5
typedef void (*func_com_badlogic_gdx_Gdx_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_notify 6
typedef void (*func_com_badlogic_gdx_Gdx_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_notifyAll 7
typedef void (*func_com_badlogic_gdx_Gdx_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_wait 8
typedef void (*func_com_badlogic_gdx_Gdx_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Gdx_wait_long 9
typedef void (*func_com_badlogic_gdx_Gdx_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Gdx_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Gdx_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_Gdx(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Gdx(jcontext ctx);
void init_com_badlogic_gdx_Gdx(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
