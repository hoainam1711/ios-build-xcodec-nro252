#ifndef HEADER_nro_EffectPaint
#define HEADER_nro_EffectPaint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_EffectPaint {
	java_lang_Object parent;
	jint F_index;
	jref F_eMob;
	jref F_eChar;
	jref F_arrEfInfo;
	jbool F_isFly;
} nro_EffectPaint;

extern Class class_nro_EffectPaint;


#define VTABLE_nro_EffectPaint_hashCode_R_int 0
typedef jint (*func_nro_EffectPaint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_EffectPaint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectPaint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_EffectPaint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_EffectPaint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_toString_R_java_lang_String 4
typedef jobject (*func_nro_EffectPaint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_finalize 5
typedef void (*func_nro_EffectPaint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_notify 6
typedef void (*func_nro_EffectPaint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_notifyAll 7
typedef void (*func_nro_EffectPaint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_wait 8
typedef void (*func_nro_EffectPaint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPaint_wait_long 9
typedef void (*func_nro_EffectPaint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_EffectPaint_wait_long_int 10
typedef void (*func_nro_EffectPaint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_EffectPaint_getImgId_R_int 11
typedef jint (*func_nro_EffectPaint_getImgId_R_int)(jcontext ctx, jobject self);

void mark_nro_EffectPaint(jobject object, jint mark, jint depth);
void clinit_nro_EffectPaint(jcontext ctx);
void init_nro_EffectPaint(jcontext ctx, jobject self);
jint M_nro_EffectPaint_getImgId_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
