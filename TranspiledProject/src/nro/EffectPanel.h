#ifndef HEADER_nro_EffectPanel
#define HEADER_nro_EffectPanel

#include "Clearwing.h"
#include "nro/Effect2.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_EffectPanel {
	nro_Effect2 parent;
	jref F_eff;
	jint F_i0;
	jint F_dx0;
	jint F_dy0;
	jshort F_loopCount;
	jlong F_endTime;
} nro_EffectPanel;

extern Class class_nro_EffectPanel;


#define VTABLE_nro_EffectPanel_hashCode_R_int 0
typedef jint (*func_nro_EffectPanel_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_EffectPanel_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_EffectPanel_clone_R_java_lang_Object 2
typedef jobject (*func_nro_EffectPanel_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_EffectPanel_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_toString_R_java_lang_String 4
typedef jobject (*func_nro_EffectPanel_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_finalize 5
typedef void (*func_nro_EffectPanel_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_notify 6
typedef void (*func_nro_EffectPanel_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_notifyAll 7
typedef void (*func_nro_EffectPanel_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_wait 8
typedef void (*func_nro_EffectPanel_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_wait_long 9
typedef void (*func_nro_EffectPanel_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_EffectPanel_wait_long_int 10
typedef void (*func_nro_EffectPanel_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_EffectPanel_update 11
typedef void (*func_nro_EffectPanel_update)(jcontext ctx, jobject self);
#define VTABLE_nro_EffectPanel_paint_lib_mGraphics 12
typedef void (*func_nro_EffectPanel_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_EffectPanel(jobject object, jint mark, jint depth);
void clinit_nro_EffectPanel(jcontext ctx);
void init_nro_EffectPanel(jcontext ctx, jobject self);
void SM_nro_EffectPanel_addServerEffect_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void M_nro_EffectPanel_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_EffectPanel_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
