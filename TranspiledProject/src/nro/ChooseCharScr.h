#ifndef HEADER_nro_ChooseCharScr
#define HEADER_nro_ChooseCharScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ChooseCharScr {
	nro_mScreen parent;
	jref F_vc_players;
	jint F_cf;
	jref F_cx;
	jint F_focus;
	jref F_cy;
	jref F_rectPanel;
	jint F_offsetY;
	jint F_offsetX;
} nro_ChooseCharScr;

extern Class class_nro_ChooseCharScr;

extern jobject SF_nro_ChooseCharScr_playerData;

#define VTABLE_nro_ChooseCharScr_hashCode_R_int 0
typedef jint (*func_nro_ChooseCharScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ChooseCharScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ChooseCharScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ChooseCharScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ChooseCharScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_ChooseCharScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_finalize 5
typedef void (*func_nro_ChooseCharScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_notify 6
typedef void (*func_nro_ChooseCharScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_notifyAll 7
typedef void (*func_nro_ChooseCharScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_wait 8
typedef void (*func_nro_ChooseCharScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_wait_long 9
typedef void (*func_nro_ChooseCharScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ChooseCharScr_wait_long_int 10
typedef void (*func_nro_ChooseCharScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ChooseCharScr_switchToMe 11
typedef void (*func_nro_ChooseCharScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_keyPress_int 12
typedef void (*func_nro_ChooseCharScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_ChooseCharScr_update 13
typedef void (*func_nro_ChooseCharScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_updateKey 14
typedef void (*func_nro_ChooseCharScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_ChooseCharScr_paint_lib_mGraphics 15
typedef void (*func_nro_ChooseCharScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ChooseCharScr_perform_int_java_lang_Object 16
typedef void (*func_nro_ChooseCharScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_ChooseCharScr_updateChooseCharacter_byte 17
typedef void (*func_nro_ChooseCharScr_updateChooseCharacter_byte)(jcontext ctx, jobject self, jbyte param0);

void mark_nro_ChooseCharScr(jobject object, jint mark, jint depth);
void clinit_nro_ChooseCharScr(jcontext ctx);
void M_nro_ChooseCharScr_switchToMe(jcontext ctx, jobject self);
void init_nro_ChooseCharScr(jcontext ctx, jobject self);
void M_nro_ChooseCharScr_update(jcontext ctx, jobject self);
void M_nro_ChooseCharScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_ChooseCharScr_updateChooseCharacter_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_ChooseCharScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
