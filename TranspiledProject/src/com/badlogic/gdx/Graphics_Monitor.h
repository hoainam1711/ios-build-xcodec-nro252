#ifndef HEADER_com_badlogic_gdx_Graphics$Monitor
#define HEADER_com_badlogic_gdx_Graphics$Monitor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Graphics$Monitor {
	java_lang_Object parent;
	jint F_virtualX;
	jint F_virtualY;
	jref F_name;
} com_badlogic_gdx_Graphics$Monitor;

extern Class class_com_badlogic_gdx_Graphics$Monitor;


#define VTABLE_com_badlogic_gdx_Graphics$Monitor_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_Graphics$Monitor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_Graphics$Monitor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_Graphics$Monitor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_Graphics$Monitor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_Graphics$Monitor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_finalize 5
typedef void (*func_com_badlogic_gdx_Graphics$Monitor_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_notify 6
typedef void (*func_com_badlogic_gdx_Graphics$Monitor_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_notifyAll 7
typedef void (*func_com_badlogic_gdx_Graphics$Monitor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_wait 8
typedef void (*func_com_badlogic_gdx_Graphics$Monitor_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_wait_long 9
typedef void (*func_com_badlogic_gdx_Graphics$Monitor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_Graphics$Monitor_wait_long_int 10
typedef void (*func_com_badlogic_gdx_Graphics$Monitor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_Graphics$Monitor(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Graphics$Monitor(jcontext ctx);
void init_com_badlogic_gdx_Graphics$Monitor_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
