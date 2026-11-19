#ifndef HEADER_nro_CrackBallScr
#define HEADER_nro_CrackBallScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_CrackBallScr {
	nro_mScreen parent;
	jref F_listBall;
	jbyte F_step;
	jbyte F_typePrice;
	jint F_rO;
	jint F_xO;
	jint F_yO;
	jint F_angle;
	jint F_iAngle;
	jint F_iDot;
	jint F_yTo;
	jint F_indexSelect;
	jint F_indexSkillSelect;
	jint F_numTicket;
	jint F_xP;
	jint F_yP;
	jint F_wP;
	jint F_hP;
	jint F_price;
	jint F_cost;
	jint F_countFr;
	jint F_countKame;
	jint F_frame;
	jint F_vp;
	jref F_xArg;
	jref F_yArg;
	jref F_xDot;
	jref F_yDot;
	jref F_idItem;
	jlong F_timeStart;
	jlong F_timeKame;
	jbool F_isKame;
	jbool F_isCanSkill;
	jbool F_isSendSv;
	jshort F_idTicket;
	jref F_fr;
	jref F_nFrame;
} nro_CrackBallScr;

extern Class class_nro_CrackBallScr;

extern jobject SF_nro_CrackBallScr_a;
extern jint SF_nro_CrackBallScr_ySkill;
extern jobject SF_nro_CrackBallScr_xSkill;
extern jobject SF_nro_CrackBallScr_fraImgKame;
extern jobject SF_nro_CrackBallScr_fraImgKame_1;
extern jobject SF_nro_CrackBallScr_imgX;
extern jobject SF_nro_CrackBallScr_imgReplay;
extern jbool SF_nro_CrackBallScr_isAutoCrackBall;
extern jbool SF_nro_CrackBallScr_isCallStop;

#define VTABLE_nro_CrackBallScr_hashCode_R_int 0
typedef jint (*func_nro_CrackBallScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_CrackBallScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_CrackBallScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_CrackBallScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_CrackBallScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_CrackBallScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_finalize 5
typedef void (*func_nro_CrackBallScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_notify 6
typedef void (*func_nro_CrackBallScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_notifyAll 7
typedef void (*func_nro_CrackBallScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_wait 8
typedef void (*func_nro_CrackBallScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_wait_long 9
typedef void (*func_nro_CrackBallScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_CrackBallScr_wait_long_int 10
typedef void (*func_nro_CrackBallScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_CrackBallScr_switchToMe 11
typedef void (*func_nro_CrackBallScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_keyPress_int 12
typedef void (*func_nro_CrackBallScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_CrackBallScr_update 13
typedef void (*func_nro_CrackBallScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_updateKey 14
typedef void (*func_nro_CrackBallScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_paint_lib_mGraphics 15
typedef void (*func_nro_CrackBallScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_CrackBallScr_perform_int_java_lang_Object 16
typedef void (*func_nro_CrackBallScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short 17
typedef void (*func_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short)(jcontext ctx, jobject self, jobject param0, jbyte param1, jint param2, jshort param3);
#define VTABLE_nro_CrackBallScr_doClickBall_int 18
typedef void (*func_nro_CrackBallScr_doClickBall_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_CrackBallScr_doClickSkill_int 19
typedef void (*func_nro_CrackBallScr_doClickSkill_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_CrackBallScr_DoneCrackBallScr_Array1_short 20
typedef void (*func_nro_CrackBallScr_DoneCrackBallScr_Array1_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_CrackBallScr_checkTicket_R_byte 21
typedef jbyte (*func_nro_CrackBallScr_checkTicket_R_byte)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_checkNum_R_byte 22
typedef jbyte (*func_nro_CrackBallScr_checkNum_R_byte)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_checkNumTicket 23
typedef void (*func_nro_CrackBallScr_checkNumTicket)(jcontext ctx, jobject self);
#define VTABLE_nro_CrackBallScr_stopAutoCrackBall 24
typedef void (*func_nro_CrackBallScr_stopAutoCrackBall)(jcontext ctx, jobject self);

void mark_nro_CrackBallScr(jobject object, jint mark, jint depth);
void clinit_nro_CrackBallScr(jcontext ctx);
void init_nro_CrackBallScr(jcontext ctx, jobject self);
jobject SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(jcontext ctx);
void M_nro_CrackBallScr_SetCrackBallScr_Array1_short_byte_int_short(jcontext ctx, jobject self, jobject param0, jbyte param1, jint param2, jshort param3);
void M_nro_CrackBallScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_CrackBallScr_update(jcontext ctx, jobject self);
void M_nro_CrackBallScr_updateKey(jcontext ctx, jobject self);
void M_nro_CrackBallScr_doClickBall_int(jcontext ctx, jobject self, jint param0);
void M_nro_CrackBallScr_doClickSkill_int(jcontext ctx, jobject self, jint param0);
void M_nro_CrackBallScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_CrackBallScr_DoneCrackBallScr_Array1_short(jcontext ctx, jobject self, jobject param0);
void M_nro_CrackBallScr_switchToMe(jcontext ctx, jobject self);
jbyte M_nro_CrackBallScr_checkTicket_R_byte(jcontext ctx, jobject self);
jbyte M_nro_CrackBallScr_checkNum_R_byte(jcontext ctx, jobject self);
void M_nro_CrackBallScr_checkNumTicket(jcontext ctx, jobject self);
void M_nro_CrackBallScr_stopAutoCrackBall(jcontext ctx, jobject self);
void SM_nro_CrackBallScr_a_nro_CrackBallScr_int(jcontext ctx, jobject param0, jint param1);
void SM_nro_CrackBallScr_useSkillCrackBall_nro_CrackBallScr(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
