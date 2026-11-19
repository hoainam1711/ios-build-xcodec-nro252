#ifndef HEADER_nro_CrackBallEffect
#define HEADER_nro_CrackBallEffect

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_CrackBallEffect {
	java_lang_Object parent;
	jint F_a;
	jbool F_b;
	jref F_c;
} nro_CrackBallEffect;

extern Class class_nro_CrackBallEffect;


#define VTABLE_nro_CrackBallEffect_hashCode_R_int 0
typedef jint (*func_nro_CrackBallEffect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_CrackBallEffect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_CrackBallEffect_clone_R_java_lang_Object 2
typedef jobject (*func_nro_CrackBallEffect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_CrackBallEffect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_toString_R_java_lang_String 4
typedef jobject (*func_nro_CrackBallEffect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_finalize 5
typedef void (*func_nro_CrackBallEffect_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_notify 6
typedef void (*func_nro_CrackBallEffect_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_notifyAll 7
typedef void (*func_nro_CrackBallEffect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_wait 8
typedef void (*func_nro_CrackBallEffect_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallEffect_wait_long 9
typedef void (*func_nro_CrackBallEffect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_CrackBallEffect_wait_long_int 10
typedef void (*func_nro_CrackBallEffect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_CrackBallEffect_run 11
typedef void (*func_nro_CrackBallEffect_run)(jcontext ctx, jobject self);

void mark_nro_CrackBallEffect(jobject object, jint mark, jint depth);
void clinit_nro_CrackBallEffect(jcontext ctx);
void init_nro_CrackBallEffect_nro_CrackBallScr(jcontext ctx, jobject self, jobject param0);
void M_nro_CrackBallEffect_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
