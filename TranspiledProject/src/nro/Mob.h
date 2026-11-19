#ifndef HEADER_nro_Mob
#define HEADER_nro_Mob

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Mob {
	java_lang_Object parent;
	jbool F_changBody;
	jshort F_smallBody;
	jbool F_f;
	jbool F_flystring;
	jint F_flyx;
	jlong F_last;
	jint F_holdEffID;
	jlong F_cur;
	jlong F_maxHp;
	jint F_x;
	jint F_y;
	jint F_dir;
	jint F_a;
	jint F_status;
	jint F_p1;
	jint F_p2;
	jint F_p3;
	jint F_xFirst;
	jint F_yFirst;
	jint F_v;
	jint F_h;
	jint F_timeStatus;
	jint F_y1;
	jbool F_isDontMove;
	jbool F_isy;
	jbool F_isDisable;
	jbool F_isDie;
	jref F_vMobMove;
	jint F_templateId;
	jref F_cFocus;
	jlong F_dame;
	jlong F_dameMp;
	jint F_sys;
	jbyte F_level;
	jbool F_isBoss;
	jbool F_isMobMe;
	jbool F_isMafuba;
	jint F_xMFB;
	jint F_yMFB;
	jint F_xSd;
	jint F_ySd;
	jbool F_isOutMap;
	jint F_wCount;
	jbool F_isShadown;
	jint F_tick;
	jint F_frame;
	jbool F_wy;
	jint F_wt;
	jint F_fy;
	jint F_ty;
	jint F_typeSuperEff;
	jbool F_isBusyAttackSomeOne;
	jref F_stand;
	jref F_move;
	jref F_moveFast;
	jref F_attack1;
	jref F_attack2;
	jref F_hurt;
	jint F_len;
	jint F_w_hp_bar;
	jint F_per;
	jint F_per_tem;
	jint F_color;
	jint F_w;
	jref F_imgHPtem;
	jint F_offset;
	jbool F_isHide;
	jref F_injureBy;
	jbool F_injureThenDie;
	jref F_mobToAttack;
	jint F_av;
	jbool F_blindEff;
	jbool F_sleepEff;
	jref F_frameArr;
	jbool F_isGetFr;
} nro_Mob;

extern Class class_nro_Mob;

extern jobject SF_nro_Mob_arrMobTemplate;
extern jobject SF_nro_Mob_lastMob;
extern jobject SF_nro_Mob_newMob;
extern jobject SF_nro_Mob_imgHP;
extern jobject SF_nro_Mob_lastTimeRequestTemplate;

#define VTABLE_nro_Mob_hashCode_R_int 0
typedef jint (*func_nro_Mob_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Mob_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mob_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Mob_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Mob_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_toString_R_java_lang_String 4
typedef jobject (*func_nro_Mob_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_finalize 5
typedef void (*func_nro_Mob_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_notify 6
typedef void (*func_nro_Mob_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_notifyAll 7
typedef void (*func_nro_Mob_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_wait 8
typedef void (*func_nro_Mob_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_wait_long 9
typedef void (*func_nro_Mob_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Mob_wait_long_int 10
typedef void (*func_nro_Mob_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Mob_getX_R_int 11
typedef jint (*func_nro_Mob_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_getY_R_int 12
typedef jint (*func_nro_Mob_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_getW_R_int 13
typedef jint (*func_nro_Mob_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_getH_R_int 14
typedef jint (*func_nro_Mob_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_stopMoving 15
typedef void (*func_nro_Mob_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isInvisible_R_boolean 16
typedef jbool (*func_nro_Mob_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isBigBoss_R_boolean 17
typedef jbool (*func_nro_Mob_isBigBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_getData 18
typedef void (*func_nro_Mob_getData)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_setBody_short 19
typedef void (*func_nro_Mob_setBody_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Mob_clearBody 20
typedef void (*func_nro_Mob_clearBody)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_checkFrameTick_Array1_int 21
typedef void (*func_nro_Mob_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mob_updateSuperEff 22
typedef void (*func_nro_Mob_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_update 23
typedef void (*func_nro_Mob_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_updateInjure 24
typedef void (*func_nro_Mob_updateInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_setAttack_nro_Char 25
typedef void (*func_nro_Mob_setAttack_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mob_isSpecial_R_boolean 26
typedef jbool (*func_nro_Mob_isSpecial_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isNewModStand_R_boolean 27
typedef jbool (*func_nro_Mob_isNewModStand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isNewMod_R_boolean 28
typedef jbool (*func_nro_Mob_isNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_updateMobAttack 29
typedef void (*func_nro_Mob_updateMobAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_updateMobWalk 30
typedef void (*func_nro_Mob_updateMobWalk)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate 31
typedef jobject (*func_nro_Mob_getTemplate_R_nro_MobTemplate)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isPaint_R_boolean 32
typedef jbool (*func_nro_Mob_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isUpdate_R_boolean 33
typedef jbool (*func_nro_Mob_isUpdate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_checkIsBoss_R_boolean 34
typedef jbool (*func_nro_Mob_checkIsBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_updateHp_bar 35
typedef void (*func_nro_Mob_updateHp_bar)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_paintShadow_lib_mGraphics 36
typedef void (*func_nro_Mob_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mob_paint_lib_mGraphics 37
typedef void (*func_nro_Mob_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mob_startDie 38
typedef void (*func_nro_Mob_startDie)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_attackOtherMob_nro_Mob 39
typedef void (*func_nro_Mob_attackOtherMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mob_removeHoldEff 40
typedef void (*func_nro_Mob_removeHoldEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_removeBlindEff 41
typedef void (*func_nro_Mob_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_removeSleepEff 42
typedef void (*func_nro_Mob_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_GetFrame 43
typedef void (*func_nro_Mob_GetFrame)(jcontext ctx, jobject self);
#define VTABLE_nro_Mob_isTypeNewMod_R_boolean 44
typedef jbool (*func_nro_Mob_isTypeNewMod_R_boolean)(jcontext ctx, jobject self);

void mark_nro_Mob(jobject object, jint mark, jint depth);
void clinit_nro_Mob(jcontext ctx);
jbool SM_nro_Mob_canRequestTemplate_int_R_boolean(jcontext ctx, jint param0);
jbool SM_nro_Mob_isTemplateActiveInMap_int_R_boolean(jcontext ctx, jint param0);
jbool M_nro_Mob_isBigBoss_R_boolean(jcontext ctx, jobject self);
void init_nro_Mob(jcontext ctx, jobject self);
void M_nro_Mob_getData(jcontext ctx, jobject self);
void M_nro_Mob_setBody_short(jcontext ctx, jobject self, jshort param0);
void M_nro_Mob_clearBody(jcontext ctx, jobject self);
void init_nro_Mob_int_boolean_boolean_boolean_boolean_boolean_int_int_long_byte_long_short_short_byte_byte(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jbool param3, jbool param4, jbool param5, jint param6, jint param7, jlong param8, jbyte param9, jlong param10, jshort param11, jshort param12, jbyte param13, jbyte param14);
jbool SM_nro_Mob_isExistNewMob_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_nro_Mob_removeBigBoss(jcontext ctx);
void M_nro_Mob_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_nro_Mob_updateSuperEff(jcontext ctx, jobject self);
void M_nro_Mob_update(jcontext ctx, jobject self);
void M_nro_Mob_updateInjure(jcontext ctx, jobject self);
jobject SM_nro_Mob_getBigBoss_R_nro_BigBoss(jcontext ctx);
jobject SM_nro_Mob_x_R_nro_BachTuoc2(jcontext ctx);
jobject SM_nro_Mob_getBigBoss2_R_nro_BigBoss2(jcontext ctx);
jobject SM_nro_Mob_getBachTuoc_R_nro_BachTuoc(jcontext ctx);
jobject SM_nro_Mob_getBigBoss2_byte_R_nro_NewBoss(jcontext ctx, jbyte param0);
void M_nro_Mob_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0);
jbool M_nro_Mob_isSpecial_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Mob_isNewModStand_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Mob_isNewMod_R_boolean(jcontext ctx, jobject self);
void M_nro_Mob_updateMobAttack(jcontext ctx, jobject self);
void M_nro_Mob_updateMobWalk(jcontext ctx, jobject self);
jobject M_nro_Mob_getTemplate_R_nro_MobTemplate(jcontext ctx, jobject self);
jbool M_nro_Mob_isPaint_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Mob_isUpdate_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Mob_checkIsBoss_R_boolean(jcontext ctx, jobject self);
void M_nro_Mob_updateHp_bar(jcontext ctx, jobject self);
void M_nro_Mob_paintShadow_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Mob_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Mob_startDie(jcontext ctx, jobject self);
void M_nro_Mob_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0);
jint M_nro_Mob_getX_R_int(jcontext ctx, jobject self);
jint M_nro_Mob_getY_R_int(jcontext ctx, jobject self);
jint M_nro_Mob_getH_R_int(jcontext ctx, jobject self);
jint M_nro_Mob_getW_R_int(jcontext ctx, jobject self);
void M_nro_Mob_stopMoving(jcontext ctx, jobject self);
jbool M_nro_Mob_isInvisible_R_boolean(jcontext ctx, jobject self);
void M_nro_Mob_removeHoldEff(jcontext ctx, jobject self);
void M_nro_Mob_removeBlindEff(jcontext ctx, jobject self);
void M_nro_Mob_removeSleepEff(jcontext ctx, jobject self);
void M_nro_Mob_GetFrame(jcontext ctx, jobject self);
jbool M_nro_Mob_isTypeNewMod_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
