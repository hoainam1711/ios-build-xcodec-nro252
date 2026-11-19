#ifndef HEADER_nro_NewBoss
#define HEADER_nro_NewBoss

#include "Clearwing.h"
#include "nro/Mob.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_NewBoss {
	nro_Mob parent;
	jint F_a;
	jint F_isDontMove;
	jint F_isOutMap;
	jint F_wCount;
	jbool F_isShadown;
	jint F_tick;
	jint F_frame;
	jref F_wy;
	jref F_wt;
	jbyte F_fy;
	jint F_ty;
	jint F_stand;
	jint F_move;
	jint F_moveFast;
	jref F_attack1;
} nro_NewBoss;

extern Class class_nro_NewBoss;

extern jobject SF_nro_NewBoss_vMobMove;

#define VTABLE_nro_NewBoss_hashCode_R_int 0
typedef jint (*func_nro_NewBoss_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_NewBoss_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NewBoss_clone_R_java_lang_Object 2
typedef jobject (*func_nro_NewBoss_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_NewBoss_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_toString_R_java_lang_String 4
typedef jobject (*func_nro_NewBoss_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_finalize 5
typedef void (*func_nro_NewBoss_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_notify 6
typedef void (*func_nro_NewBoss_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_notifyAll 7
typedef void (*func_nro_NewBoss_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_wait 8
typedef void (*func_nro_NewBoss_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_wait_long 9
typedef void (*func_nro_NewBoss_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_NewBoss_wait_long_int 10
typedef void (*func_nro_NewBoss_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_NewBoss_getX_R_int 11
typedef jint (*func_nro_NewBoss_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_getY_R_int 12
typedef jint (*func_nro_NewBoss_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_getW_R_int 13
typedef jint (*func_nro_NewBoss_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_getH_R_int 14
typedef jint (*func_nro_NewBoss_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_stopMoving 15
typedef void (*func_nro_NewBoss_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isInvisible_R_boolean 16
typedef jbool (*func_nro_NewBoss_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isBigBoss_R_boolean 17
typedef jbool (*func_nro_NewBoss_isBigBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_getData 18
typedef void (*func_nro_NewBoss_getData)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_setBody_short 19
typedef void (*func_nro_NewBoss_setBody_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_NewBoss_clearBody 20
typedef void (*func_nro_NewBoss_clearBody)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_checkFrameTick_Array1_int 21
typedef void (*func_nro_NewBoss_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NewBoss_updateSuperEff 22
typedef void (*func_nro_NewBoss_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_update 23
typedef void (*func_nro_NewBoss_update)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_updateInjure 24
typedef void (*func_nro_NewBoss_updateInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_setAttack_nro_Char 25
typedef void (*func_nro_NewBoss_setAttack_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NewBoss_isSpecial_R_boolean 26
typedef jbool (*func_nro_NewBoss_isSpecial_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isNewModStand_R_boolean 27
typedef jbool (*func_nro_NewBoss_isNewModStand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isNewMod_R_boolean 28
typedef jbool (*func_nro_NewBoss_isNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_updateMobAttack 29
typedef void (*func_nro_NewBoss_updateMobAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_updateMobWalk 30
typedef void (*func_nro_NewBoss_updateMobWalk)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_getTemplate_R_nro_MobTemplate 31
typedef jobject (*func_nro_NewBoss_getTemplate_R_nro_MobTemplate)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isPaint_R_boolean 32
typedef jbool (*func_nro_NewBoss_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isUpdate_R_boolean 33
typedef jbool (*func_nro_NewBoss_isUpdate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_checkIsBoss_R_boolean 34
typedef jbool (*func_nro_NewBoss_checkIsBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_updateHp_bar 35
typedef void (*func_nro_NewBoss_updateHp_bar)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_paintShadow_lib_mGraphics 36
typedef void (*func_nro_NewBoss_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NewBoss_paint_lib_mGraphics 37
typedef void (*func_nro_NewBoss_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NewBoss_startDie 38
typedef void (*func_nro_NewBoss_startDie)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_attackOtherMob_nro_Mob 39
typedef void (*func_nro_NewBoss_attackOtherMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NewBoss_removeHoldEff 40
typedef void (*func_nro_NewBoss_removeHoldEff)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_removeBlindEff 41
typedef void (*func_nro_NewBoss_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_removeSleepEff 42
typedef void (*func_nro_NewBoss_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_GetFrame 43
typedef void (*func_nro_NewBoss_GetFrame)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_isTypeNewMod_R_boolean 44
typedef jbool (*func_nro_NewBoss_isTypeNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_removeBigBoss 45
typedef void (*func_nro_NewBoss_removeBigBoss)(jcontext ctx, jobject self);
#define VTABLE_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte 46
typedef void (*func_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2, jbyte param3);
#define VTABLE_nro_NewBoss_a_short_short 47
typedef void (*func_nro_NewBoss_a_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_NewBoss_onCancelChat 48
typedef void (*func_nro_NewBoss_onCancelChat)(jcontext ctx, jobject self);

void mark_nro_NewBoss(jobject object, jint mark, jint depth);
void clinit_nro_NewBoss(jcontext ctx);
void M_nro_NewBoss_setBody_short(jcontext ctx, jobject self, jshort param0);
void M_nro_NewBoss_clearBody(jcontext ctx, jobject self);
void init_nro_NewBoss_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5);
void M_nro_NewBoss_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_nro_NewBoss_updateSuperEff(jcontext ctx, jobject self);
void M_nro_NewBoss_update(jcontext ctx, jobject self);
void M_nro_NewBoss_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0);
void M_nro_NewBoss_removeBigBoss(jcontext ctx, jobject self);
void M_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2, jbyte param3);
void M_nro_NewBoss_updateMobAttack(jcontext ctx, jobject self);
void M_nro_NewBoss_updateMobWalk(jcontext ctx, jobject self);
jbool M_nro_NewBoss_isPaint_R_boolean(jcontext ctx, jobject self);
jbool M_nro_NewBoss_isUpdate_R_boolean(jcontext ctx, jobject self);
jbool M_nro_NewBoss_checkIsBoss_R_boolean(jcontext ctx, jobject self);
void M_nro_NewBoss_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_NewBoss_startDie(jcontext ctx, jobject self);
void M_nro_NewBoss_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0);
jint M_nro_NewBoss_getX_R_int(jcontext ctx, jobject self);
jint M_nro_NewBoss_getY_R_int(jcontext ctx, jobject self);
jint M_nro_NewBoss_getH_R_int(jcontext ctx, jobject self);
jint M_nro_NewBoss_getW_R_int(jcontext ctx, jobject self);
void M_nro_NewBoss_stopMoving(jcontext ctx, jobject self);
jbool M_nro_NewBoss_isInvisible_R_boolean(jcontext ctx, jobject self);
void M_nro_NewBoss_removeHoldEff(jcontext ctx, jobject self);
void M_nro_NewBoss_removeBlindEff(jcontext ctx, jobject self);
void M_nro_NewBoss_removeSleepEff(jcontext ctx, jobject self);
void M_nro_NewBoss_a_short_short(jcontext ctx, jobject self, jshort param0, jshort param1);
void M_nro_NewBoss_GetFrame(jcontext ctx, jobject self);
void M_nro_NewBoss_onCancelChat(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
