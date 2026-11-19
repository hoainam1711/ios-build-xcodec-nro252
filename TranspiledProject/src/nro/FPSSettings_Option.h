#ifndef HEADER_nro_FPSSettings$Option
#define HEADER_nro_FPSSettings$Option

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_FPSSettings$Option {
	java_lang_Object parent;
	jref F_label;
	jint F_fpsValue;
	jint F_col;
	jint F_row;
} nro_FPSSettings$Option;

extern Class class_nro_FPSSettings$Option;


#define VTABLE_nro_FPSSettings$Option_hashCode_R_int 0
typedef jint (*func_nro_FPSSettings$Option_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_FPSSettings$Option_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_FPSSettings$Option_clone_R_java_lang_Object 2
typedef jobject (*func_nro_FPSSettings$Option_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_FPSSettings$Option_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_toString_R_java_lang_String 4
typedef jobject (*func_nro_FPSSettings$Option_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_finalize 5
typedef void (*func_nro_FPSSettings$Option_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_notify 6
typedef void (*func_nro_FPSSettings$Option_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_notifyAll 7
typedef void (*func_nro_FPSSettings$Option_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_wait 8
typedef void (*func_nro_FPSSettings$Option_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings$Option_wait_long 9
typedef void (*func_nro_FPSSettings$Option_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_FPSSettings$Option_wait_long_int 10
typedef void (*func_nro_FPSSettings$Option_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_FPSSettings$Option(jobject object, jint mark, jint depth);
void clinit_nro_FPSSettings$Option(jcontext ctx);
void init_nro_FPSSettings$Option_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
