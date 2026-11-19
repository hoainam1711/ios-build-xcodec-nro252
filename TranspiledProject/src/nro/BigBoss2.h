#ifndef HEADER_nro_BigBoss2
#define HEADER_nro_BigBoss2

#include "Clearwing.h"
#include "nro/Mob.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BigBoss2 {
	nro_Mob parent;
	jint F_xTo;
	jint F_yTo;
	jint F_xSd;
	jint F_ySd;
	jbool F_isOutMap;
	jint F_wCount;
	jbool F_isShadown;
	jint F_tick;
	jint F_frame;
	jint F_fy;
	jbool F_flyUp;
	jbool F_flyDown;
	jint F_dy;
	jint F_tShock;
	jbool F_isBusyAttackSomeOne;
	jref F_charAttack;
	jref F_dameHP;
	jbyte F_type;
	jref F_stand;
	jref F_attack1;
	jref F_attack2;
	jref F_fly;
	jref F_hitground;
	jbool F_shock;
} nro_BigBoss2;

extern Class class_nro_BigBoss2;

extern jobject SF_nro_BigBoss2_shadowBig;
extern jobject SF_nro_BigBoss2_data;

#define VTABLE_nro_BigBoss2_hashCode_R_int 0
typedef jint (*func_nro_BigBoss2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BigBoss2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss2_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BigBoss2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BigBoss2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_toString_R_java_lang_String 4
typedef jobject (*func_nro_BigBoss2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_finalize 5
typedef void (*func_nro_BigBoss2_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_notify 6
typedef void (*func_nro_BigBoss2_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_notifyAll 7
typedef void (*func_nro_BigBoss2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_wait 8
typedef void (*func_nro_BigBoss2_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_wait_long 9
typedef void (*func_nro_BigBoss2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BigBoss2_wait_long_int 10
typedef void (*func_nro_BigBoss2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_BigBoss2_getX_R_int 11
typedef jint (*func_nro_BigBoss2_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getY_R_int 12
typedef jint (*func_nro_BigBoss2_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getW_R_int 13
typedef jint (*func_nro_BigBoss2_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getH_R_int 14
typedef jint (*func_nro_BigBoss2_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_stopMoving 15
typedef void (*func_nro_BigBoss2_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isInvisible_R_boolean 16
typedef jbool (*func_nro_BigBoss2_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isBigBoss_R_boolean 17
typedef jbool (*func_nro_BigBoss2_isBigBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getData 18
typedef void (*func_nro_BigBoss2_getData)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_setBody_short 19
typedef void (*func_nro_BigBoss2_setBody_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_BigBoss2_clearBody 20
typedef void (*func_nro_BigBoss2_clearBody)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_checkFrameTick_Array1_int 21
typedef void (*func_nro_BigBoss2_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss2_updateSuperEff 22
typedef void (*func_nro_BigBoss2_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_update 23
typedef void (*func_nro_BigBoss2_update)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateInjure 24
typedef void (*func_nro_BigBoss2_updateInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_setAttack_nro_Char 25
typedef void (*func_nro_BigBoss2_setAttack_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss2_isSpecial_R_boolean 26
typedef jbool (*func_nro_BigBoss2_isSpecial_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isNewModStand_R_boolean 27
typedef jbool (*func_nro_BigBoss2_isNewModStand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isNewMod_R_boolean 28
typedef jbool (*func_nro_BigBoss2_isNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateMobAttack 29
typedef void (*func_nro_BigBoss2_updateMobAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateMobWalk 30
typedef void (*func_nro_BigBoss2_updateMobWalk)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getTemplate_R_nro_MobTemplate 31
typedef jobject (*func_nro_BigBoss2_getTemplate_R_nro_MobTemplate)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isPaint_R_boolean 32
typedef jbool (*func_nro_BigBoss2_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isUpdate_R_boolean 33
typedef jbool (*func_nro_BigBoss2_isUpdate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_checkIsBoss_R_boolean 34
typedef jbool (*func_nro_BigBoss2_checkIsBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateHp_bar 35
typedef void (*func_nro_BigBoss2_updateHp_bar)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_paintShadow_lib_mGraphics 36
typedef void (*func_nro_BigBoss2_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss2_paint_lib_mGraphics 37
typedef void (*func_nro_BigBoss2_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss2_startDie 38
typedef void (*func_nro_BigBoss2_startDie)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_attackOtherMob_nro_Mob 39
typedef void (*func_nro_BigBoss2_attackOtherMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss2_removeHoldEff 40
typedef void (*func_nro_BigBoss2_removeHoldEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_removeBlindEff 41
typedef void (*func_nro_BigBoss2_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_removeSleepEff 42
typedef void (*func_nro_BigBoss2_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_GetFrame 43
typedef void (*func_nro_BigBoss2_GetFrame)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_isTypeNewMod_R_boolean 44
typedef jbool (*func_nro_BigBoss2_isTypeNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_getDataB 45
typedef void (*func_nro_BigBoss2_getDataB)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateShadown 46
typedef void (*func_nro_BigBoss2_updateShadown)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateDead 47
typedef void (*func_nro_BigBoss2_updateDead)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateMobFly 48
typedef void (*func_nro_BigBoss2_updateMobFly)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_updateMobStandWait 49
typedef void (*func_nro_BigBoss2_updateMobStandWait)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_setFly 50
typedef void (*func_nro_BigBoss2_setFly)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte 51
typedef void (*func_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
#define VTABLE_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte 52
typedef void (*func_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
#define VTABLE_nro_BigBoss2_getHPColor_R_int 53
typedef jint (*func_nro_BigBoss2_getHPColor_R_int)(jcontext ctx, jobject self);

void mark_nro_BigBoss2(jobject object, jint mark, jint depth);
void clinit_nro_BigBoss2(jcontext ctx);
void init_nro_BigBoss2_int_short_short_int_long_long_int(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5, jint param6);
void init_nro_BigBoss2_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5);
void M_nro_BigBoss2_getDataB(jcontext ctx, jobject self);
void M_nro_BigBoss2_setBody_short(jcontext ctx, jobject self, jshort param0);
void M_nro_BigBoss2_clearBody(jcontext ctx, jobject self);
void M_nro_BigBoss2_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_nro_BigBoss2_updateShadown(jcontext ctx, jobject self);
void M_nro_BigBoss2_paintShadow_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_BigBoss2_update(jcontext ctx, jobject self);
void M_nro_BigBoss2_updateDead(jcontext ctx, jobject self);
void M_nro_BigBoss2_updateMobFly(jcontext ctx, jobject self);
void M_nro_BigBoss2_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0);
void M_nro_BigBoss2_updateMobStandWait(jcontext ctx, jobject self);
void M_nro_BigBoss2_setFly(jcontext ctx, jobject self);
void M_nro_BigBoss2_setAttack_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
void M_nro_BigBoss2_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
void M_nro_BigBoss2_updateMobAttack(jcontext ctx, jobject self);
jbool M_nro_BigBoss2_isPaint_R_boolean(jcontext ctx, jobject self);
jbool M_nro_BigBoss2_isUpdate_R_boolean(jcontext ctx, jobject self);
jbool M_nro_BigBoss2_checkIsBoss_R_boolean(jcontext ctx, jobject self);
void M_nro_BigBoss2_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
jint M_nro_BigBoss2_getHPColor_R_int(jcontext ctx, jobject self);
void M_nro_BigBoss2_startDie(jcontext ctx, jobject self);
void M_nro_BigBoss2_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0);
jint M_nro_BigBoss2_getX_R_int(jcontext ctx, jobject self);
jint M_nro_BigBoss2_getY_R_int(jcontext ctx, jobject self);
jint M_nro_BigBoss2_getH_R_int(jcontext ctx, jobject self);
jint M_nro_BigBoss2_getW_R_int(jcontext ctx, jobject self);
void M_nro_BigBoss2_stopMoving(jcontext ctx, jobject self);
jbool M_nro_BigBoss2_isInvisible_R_boolean(jcontext ctx, jobject self);
void M_nro_BigBoss2_removeHoldEff(jcontext ctx, jobject self);
void M_nro_BigBoss2_removeBlindEff(jcontext ctx, jobject self);
void M_nro_BigBoss2_removeSleepEff(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
