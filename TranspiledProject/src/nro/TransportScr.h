#ifndef HEADER_nro_TransportScr
#define HEADER_nro_TransportScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_TransportScr {
	nro_mScreen parent;
	jbyte F_type;
	jint F_speed;
	jref F_posX;
	jref F_posY;
	jref F_posX2;
	jref F_posY2;
	jint F_cmx;
	jint F_n;
	jshort F_time;
	jshort F_maxTime;
	jlong F_last;
	jlong F_curr;
	jbool F_isSpeed;
	jbool F_transNow;
	jint F_currSpeed;
} nro_TransportScr;

extern Class class_nro_TransportScr;

extern jobject SF_nro_TransportScr_instance;
extern jobject SF_nro_TransportScr_ship;
extern jobject SF_nro_TransportScr_taungam;

#define VTABLE_nro_TransportScr_hashCode_R_int 0
typedef jint (*func_nro_TransportScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_TransportScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TransportScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_TransportScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_TransportScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_TransportScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_finalize 5
typedef void (*func_nro_TransportScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_notify 6
typedef void (*func_nro_TransportScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_notifyAll 7
typedef void (*func_nro_TransportScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_wait 8
typedef void (*func_nro_TransportScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_wait_long 9
typedef void (*func_nro_TransportScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_TransportScr_wait_long_int 10
typedef void (*func_nro_TransportScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_TransportScr_switchToMe 11
typedef void (*func_nro_TransportScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_keyPress_int 12
typedef void (*func_nro_TransportScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_TransportScr_update 13
typedef void (*func_nro_TransportScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_updateKey 14
typedef void (*func_nro_TransportScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_TransportScr_paint_lib_mGraphics 15
typedef void (*func_nro_TransportScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TransportScr_perform_int_java_lang_Object 16
typedef void (*func_nro_TransportScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_nro_TransportScr(jobject object, jint mark, jint depth);
void clinit_nro_TransportScr(jcontext ctx);
void init_nro_TransportScr(jcontext ctx, jobject self);
jobject SM_nro_TransportScr_gI_R_nro_TransportScr(jcontext ctx);
void M_nro_TransportScr_switchToMe(jcontext ctx, jobject self);
void M_nro_TransportScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_TransportScr_update(jcontext ctx, jobject self);
void M_nro_TransportScr_updateKey(jcontext ctx, jobject self);
void M_nro_TransportScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
