#ifndef HEADER_nro_Effect2
#define HEADER_nro_Effect2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Effect2 {
	java_lang_Object parent;
} nro_Effect2;

extern Class class_nro_Effect2;

extern jobject SF_nro_Effect2_vEffect3;
extern jobject SF_nro_Effect2_vEffect2;
extern jobject SF_nro_Effect2_vRemoveEffect2;
extern jobject SF_nro_Effect2_vEffect2Outside;
extern jobject SF_nro_Effect2_vAnimateEffect;
extern jobject SF_nro_Effect2_vEffectFeet;

#define VTABLE_nro_Effect2_hashCode_R_int 0
typedef jint (*func_nro_Effect2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Effect2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Effect2_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Effect2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Effect2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_toString_R_java_lang_String 4
typedef jobject (*func_nro_Effect2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_finalize 5
typedef void (*func_nro_Effect2_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_notify 6
typedef void (*func_nro_Effect2_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_notifyAll 7
typedef void (*func_nro_Effect2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_wait 8
typedef void (*func_nro_Effect2_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_wait_long 9
typedef void (*func_nro_Effect2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Effect2_wait_long_int 10
typedef void (*func_nro_Effect2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Effect2_update 11
typedef void (*func_nro_Effect2_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect2_paint_lib_mGraphics 12
typedef void (*func_nro_Effect2_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_Effect2(jobject object, jint mark, jint depth);
void clinit_nro_Effect2(jcontext ctx);
void init_nro_Effect2(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
