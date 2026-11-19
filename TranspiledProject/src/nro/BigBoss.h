#ifndef HEADER_nro_BigBoss
#define HEADER_nro_BigBoss

#include "Clearwing.h"
#include "nro/Mob.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BigBoss {
	nro_Mob parent;
	jint F_xTo;
	jbool F_haftBody;
	jint F_xSd;
	jint F_ySd;
	jbool F_isOutMap;
	jint F_wCount;
	jbool F_isShadown;
	jint F_tick;
	jint F_frame;
	jbool F_wy;
	jbool F_flyUp;
	jint F_dy;
	jint F_typeSuperEff;
	jref F_charAttack;
	jref F_dameHP;
	jbyte F_type;
	jref F_stand;
	jref F_stand_1;
	jref F_attack1;
	jref F_attack2;
	jref F_attack3;
	jref F_attack2_1;
	jref F_attack3_1;
	jref F_fly;
	jref F_hitground;
	jbool F_changePos;
} nro_BigBoss;

extern Class class_nro_BigBoss;

extern jobject SF_nro_BigBoss_vMobMove;
extern jobject SF_nro_BigBoss_data;

#define VTABLE_nro_BigBoss_hashCode_R_int 0
typedef jint (*func_nro_BigBoss_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BigBoss_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BigBoss_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BigBoss_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_toString_R_java_lang_String 4
typedef jobject (*func_nro_BigBoss_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_finalize 5
typedef void (*func_nro_BigBoss_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_notify 6
typedef void (*func_nro_BigBoss_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_notifyAll 7
typedef void (*func_nro_BigBoss_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_wait 8
typedef void (*func_nro_BigBoss_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_wait_long 9
typedef void (*func_nro_BigBoss_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BigBoss_wait_long_int 10
typedef void (*func_nro_BigBoss_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_BigBoss_getX_R_int 11
typedef jint (*func_nro_BigBoss_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getY_R_int 12
typedef jint (*func_nro_BigBoss_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getW_R_int 13
typedef jint (*func_nro_BigBoss_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getH_R_int 14
typedef jint (*func_nro_BigBoss_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_stopMoving 15
typedef void (*func_nro_BigBoss_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isInvisible_R_boolean 16
typedef jbool (*func_nro_BigBoss_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isBigBoss_R_boolean 17
typedef jbool (*func_nro_BigBoss_isBigBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getData 18
typedef void (*func_nro_BigBoss_getData)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_setBody_short 19
typedef void (*func_nro_BigBoss_setBody_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_BigBoss_clearBody 20
typedef void (*func_nro_BigBoss_clearBody)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_checkFrameTick_Array1_int 21
typedef void (*func_nro_BigBoss_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss_updateSuperEff 22
typedef void (*func_nro_BigBoss_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_update 23
typedef void (*func_nro_BigBoss_update)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_updateInjure 24
typedef void (*func_nro_BigBoss_updateInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_setAttack_nro_Char 25
typedef void (*func_nro_BigBoss_setAttack_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss_isSpecial_R_boolean 26
typedef jbool (*func_nro_BigBoss_isSpecial_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isNewModStand_R_boolean 27
typedef jbool (*func_nro_BigBoss_isNewModStand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isNewMod_R_boolean 28
typedef jbool (*func_nro_BigBoss_isNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_updateMobAttack 29
typedef void (*func_nro_BigBoss_updateMobAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_updateMobWalk 30
typedef void (*func_nro_BigBoss_updateMobWalk)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getTemplate_R_nro_MobTemplate 31
typedef jobject (*func_nro_BigBoss_getTemplate_R_nro_MobTemplate)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isPaint_R_boolean 32
typedef jbool (*func_nro_BigBoss_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isUpdate_R_boolean 33
typedef jbool (*func_nro_BigBoss_isUpdate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_checkIsBoss_R_boolean 34
typedef jbool (*func_nro_BigBoss_checkIsBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_updateHp_bar 35
typedef void (*func_nro_BigBoss_updateHp_bar)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_paintShadow_lib_mGraphics 36
typedef void (*func_nro_BigBoss_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss_paint_lib_mGraphics 37
typedef void (*func_nro_BigBoss_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss_startDie 38
typedef void (*func_nro_BigBoss_startDie)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_attackOtherMob_nro_Mob 39
typedef void (*func_nro_BigBoss_attackOtherMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BigBoss_removeHoldEff 40
typedef void (*func_nro_BigBoss_removeHoldEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_removeBlindEff 41
typedef void (*func_nro_BigBoss_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_removeSleepEff 42
typedef void (*func_nro_BigBoss_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_GetFrame 43
typedef void (*func_nro_BigBoss_GetFrame)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_isTypeNewMod_R_boolean 44
typedef jbool (*func_nro_BigBoss_isTypeNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getDataB2 45
typedef void (*func_nro_BigBoss_getDataB2)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_getDataB 46
typedef void (*func_nro_BigBoss_getDataB)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_setFly 47
typedef void (*func_nro_BigBoss_setFly)(jcontext ctx, jobject self);
#define VTABLE_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte 48
typedef void (*func_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);

void mark_nro_BigBoss(jobject object, jint mark, jint depth);
void clinit_nro_BigBoss(jcontext ctx);
void M_nro_BigBoss_getDataB2(jcontext ctx, jobject self);
void M_nro_BigBoss_getDataB(jcontext ctx, jobject self);
void M_nro_BigBoss_setBody_short(jcontext ctx, jobject self, jshort param0);
void M_nro_BigBoss_clearBody(jcontext ctx, jobject self);
void init_nro_BigBoss_int_short_short_int_long_long_int(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5, jint param6);
void M_nro_BigBoss_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_nro_BigBoss_update(jcontext ctx, jobject self);
void M_nro_BigBoss_updateInjure(jcontext ctx, jobject self);
void M_nro_BigBoss_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0);
jbool M_nro_BigBoss_isSpecial_R_boolean(jcontext ctx, jobject self);
void M_nro_BigBoss_setFly(jcontext ctx, jobject self);
void M_nro_BigBoss_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
void M_nro_BigBoss_updateMobAttack(jcontext ctx, jobject self);
void M_nro_BigBoss_updateMobWalk(jcontext ctx, jobject self);
jbool M_nro_BigBoss_isPaint_R_boolean(jcontext ctx, jobject self);
jbool M_nro_BigBoss_isUpdate_R_boolean(jcontext ctx, jobject self);
jbool M_nro_BigBoss_checkIsBoss_R_boolean(jcontext ctx, jobject self);
void M_nro_BigBoss_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_BigBoss_startDie(jcontext ctx, jobject self);
void M_nro_BigBoss_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0);
jint M_nro_BigBoss_getX_R_int(jcontext ctx, jobject self);
jint M_nro_BigBoss_getY_R_int(jcontext ctx, jobject self);
jint M_nro_BigBoss_getH_R_int(jcontext ctx, jobject self);
jint M_nro_BigBoss_getW_R_int(jcontext ctx, jobject self);
void M_nro_BigBoss_stopMoving(jcontext ctx, jobject self);
jbool M_nro_BigBoss_isInvisible_R_boolean(jcontext ctx, jobject self);
void M_nro_BigBoss_removeHoldEff(jcontext ctx, jobject self);
void M_nro_BigBoss_removeBlindEff(jcontext ctx, jobject self);
void M_nro_BigBoss_removeSleepEff(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
