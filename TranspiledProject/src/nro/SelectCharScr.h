#ifndef HEADER_nro_SelectCharScr
#define HEADER_nro_SelectCharScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SelectCharScr {
	nro_mScreen parent;
	jref F_cmdSelectSv;
	jref F_bgID;
	jint F_cx;
	jint F_cy;
	jint F_dy;
	jint F_o;
	jint F_p;
} nro_SelectCharScr;

extern Class class_nro_SelectCharScr;

extern jobject SF_nro_SelectCharScr_instance;
extern jbool SF_nro_SelectCharScr_isWait;
extern jobject SF_nro_SelectCharScr_d;
extern jint SF_nro_SelectCharScr_indexGender;
extern jint SF_nro_SelectCharScr_f;
extern jint SF_nro_SelectCharScr_g;
extern jobject SF_nro_SelectCharScr_h;
extern jobject SF_nro_SelectCharScr_i;
extern jobject SF_nro_SelectCharScr_j;

#define VTABLE_nro_SelectCharScr_hashCode_R_int 0
typedef jint (*func_nro_SelectCharScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SelectCharScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SelectCharScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SelectCharScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SelectCharScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_SelectCharScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_finalize 5
typedef void (*func_nro_SelectCharScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_notify 6
typedef void (*func_nro_SelectCharScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_notifyAll 7
typedef void (*func_nro_SelectCharScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_wait 8
typedef void (*func_nro_SelectCharScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_wait_long 9
typedef void (*func_nro_SelectCharScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SelectCharScr_wait_long_int 10
typedef void (*func_nro_SelectCharScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_SelectCharScr_switchToMe 11
typedef void (*func_nro_SelectCharScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_keyPress_int 12
typedef void (*func_nro_SelectCharScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_SelectCharScr_update 13
typedef void (*func_nro_SelectCharScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_updateKey 14
typedef void (*func_nro_SelectCharScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_paint_lib_mGraphics 15
typedef void (*func_nro_SelectCharScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SelectCharScr_perform_int_java_lang_Object 16
typedef void (*func_nro_SelectCharScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_SelectCharScr_getActiveField_R_lib_input_TField 17
typedef jobject (*func_nro_SelectCharScr_getActiveField_R_lib_input_TField)(jcontext ctx, jobject self);
#define VTABLE_nro_SelectCharScr_doChangeMap 18
typedef void (*func_nro_SelectCharScr_doChangeMap)(jcontext ctx, jobject self);

void mark_nro_SelectCharScr(jobject object, jint mark, jint depth);
void clinit_nro_SelectCharScr(jcontext ctx);
jobject SM_nro_SelectCharScr_gI_R_nro_SelectCharScr(jcontext ctx);
void SM_nro_SelectCharScr_a_Array1_byte(jcontext ctx, jobject param0);
jobject M_nro_SelectCharScr_getActiveField_R_lib_input_TField(jcontext ctx, jobject self);
void M_nro_SelectCharScr_switchToMe(jcontext ctx, jobject self);
void M_nro_SelectCharScr_doChangeMap(jcontext ctx, jobject self);
void init_nro_SelectCharScr(jcontext ctx, jobject self);
void M_nro_SelectCharScr_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_SelectCharScr_update(jcontext ctx, jobject self);
void M_nro_SelectCharScr_updateKey(jcontext ctx, jobject self);
void M_nro_SelectCharScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_SelectCharScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
