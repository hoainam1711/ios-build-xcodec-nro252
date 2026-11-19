#ifndef HEADER_nro_Effect
#define HEADER_nro_Effect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Effect {
	java_lang_Object parent;
	jint F_effId;
	jint F_typeEff;
	jint F_indexFrom;
	jint F_indexTo;
	jbool F_o;
	jref F_c;
	jint F_t;
	jint F_currFrame;
	jint F_x;
	jint F_y;
	jint F_loop;
	jint F_tLoop;
	jint F_tLoopCount;
	jbool F_isPaint;
	jint F_layer;
	jint F_isStand;
	jint F_trans;
	jlong F_timeExist;
	jref F_khangia1;
	jref F_khangia2;
	jref F_khangia3;
	jref F_khangia4;
	jref F_khangia5;
	jbool F_isGetTime;
	jref F_data;
} nro_Effect;

extern Class class_nro_Effect;

extern jobject SF_nro_Effect_vEffData;
extern jobject SF_nro_Effect_lastEff;
extern jobject SF_nro_Effect_newEff;
extern jobject SF_nro_Effect_dowloadEff;

#define VTABLE_nro_Effect_hashCode_R_int 0
typedef jint (*func_nro_Effect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Effect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Effect_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Effect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Effect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_toString_R_java_lang_String 4
typedef jobject (*func_nro_Effect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_finalize 5
typedef void (*func_nro_Effect_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_notify 6
typedef void (*func_nro_Effect_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_notifyAll 7
typedef void (*func_nro_Effect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_wait 8
typedef void (*func_nro_Effect_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_wait_long 9
typedef void (*func_nro_Effect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Effect_wait_long_int 10
typedef void (*func_nro_Effect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Effect_b_R_boolean 11
typedef jbool (*func_nro_Effect_b_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_a_lib_mGraphics_int_int 12
typedef void (*func_nro_Effect_a_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Effect_paint_lib_mGraphics 13
typedef void (*func_nro_Effect_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Effect_update 14
typedef void (*func_nro_Effect_update)(jcontext ctx, jobject self);

void mark_nro_Effect(jobject object, jint mark, jint depth);
void clinit_nro_Effect(jcontext ctx);
void SM_nro_Effect_removeEffData_int(jcontext ctx, jint param0);
jobject SM_nro_Effect_getEffDataById_int_R_nro_EffectData(jcontext ctx, jint param0);
void init_nro_Effect(jcontext ctx, jobject self);
void init_nro_Effect_int_nro_Char_int_int_int_byte(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jbyte param5);
void init_nro_Effect_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jbool SM_nro_Effect_a_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool M_nro_Effect_b_R_boolean(jcontext ctx, jobject self);
void M_nro_Effect_a_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_Effect_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Effect_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
