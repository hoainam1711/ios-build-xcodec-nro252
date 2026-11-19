#ifndef HEADER_nro_EffecMn
#define HEADER_nro_EffecMn

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_EffecMn {
	java_lang_Object parent;
} nro_EffecMn;

extern Class class_nro_EffecMn;

extern jobject SF_nro_EffecMn_effId;

#define VTABLE_nro_EffecMn_hashCode_R_int 0
typedef jint (*func_nro_EffecMn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_EffecMn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffecMn_clone_R_java_lang_Object 2
typedef jobject (*func_nro_EffecMn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_EffecMn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_toString_R_java_lang_String 4
typedef jobject (*func_nro_EffecMn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_finalize 5
typedef void (*func_nro_EffecMn_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_notify 6
typedef void (*func_nro_EffecMn_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_notifyAll 7
typedef void (*func_nro_EffecMn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_wait 8
typedef void (*func_nro_EffecMn_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_EffecMn_wait_long 9
typedef void (*func_nro_EffecMn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_EffecMn_wait_long_int 10
typedef void (*func_nro_EffecMn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_EffecMn(jobject object, jint mark, jint depth);
void clinit_nro_EffecMn(jcontext ctx);
void init_nro_EffecMn(jcontext ctx, jobject self);
void SM_nro_EffecMn_addEff_nro_Effect(jcontext ctx, jobject param0);
void SM_nro_EffecMn_removeEff_int(jcontext ctx, jint param0);
jobject SM_nro_EffecMn_getEffById_int_R_nro_Effect(jcontext ctx, jint param0);
void SM_nro_EffecMn_paintBackGroundUnderLayer_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_nro_EffecMn_paintLayer1_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_EffecMn_paintLayer2_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_EffecMn_paintLayer3_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_EffecMn_paintLayer4_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_EffecMn_update(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
