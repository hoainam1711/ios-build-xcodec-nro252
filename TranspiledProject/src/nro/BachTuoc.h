#ifndef HEADER_nro_BachTuoc
#define HEADER_nro_BachTuoc

#include "Clearwing.h"
#include "nro/Mob.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BachTuoc {
	nro_Mob parent;
	jint F_xTo;
	jint F_yTo;
	jint F_wCount;
	jint F_ySd;
	jbool F_isOutMap;
	jbool F_isShadown;
	jint F_tick;
	jint F_frame;
	jref F_charAttack;
	jref F_dameHP;
	jbyte F_type;
	jref F_stand;
	jref F_movee;
	jref F_attack1;
	jref F_attack2;
} nro_BachTuoc;

extern Class class_nro_BachTuoc;

extern jobject SF_nro_BachTuoc_shadowBig;
extern jobject SF_nro_BachTuoc_data;

#define VTABLE_nro_BachTuoc_hashCode_R_int 0
typedef jint (*func_nro_BachTuoc_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BachTuoc_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BachTuoc_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BachTuoc_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BachTuoc_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_toString_R_java_lang_String 4
typedef jobject (*func_nro_BachTuoc_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_finalize 5
typedef void (*func_nro_BachTuoc_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_notify 6
typedef void (*func_nro_BachTuoc_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_notifyAll 7
typedef void (*func_nro_BachTuoc_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_wait 8
typedef void (*func_nro_BachTuoc_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_wait_long 9
typedef void (*func_nro_BachTuoc_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BachTuoc_wait_long_int 10
typedef void (*func_nro_BachTuoc_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_BachTuoc_getX_R_int 11
typedef jint (*func_nro_BachTuoc_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_getY_R_int 12
typedef jint (*func_nro_BachTuoc_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_getW_R_int 13
typedef jint (*func_nro_BachTuoc_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_getH_R_int 14
typedef jint (*func_nro_BachTuoc_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_stopMoving 15
typedef void (*func_nro_BachTuoc_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isInvisible_R_boolean 16
typedef jbool (*func_nro_BachTuoc_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isBigBoss_R_boolean 17
typedef jbool (*func_nro_BachTuoc_isBigBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_getData 18
typedef void (*func_nro_BachTuoc_getData)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_setBody_short 19
typedef void (*func_nro_BachTuoc_setBody_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_BachTuoc_clearBody 20
typedef void (*func_nro_BachTuoc_clearBody)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_checkFrameTick_Array1_int 21
typedef void (*func_nro_BachTuoc_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BachTuoc_updateSuperEff 22
typedef void (*func_nro_BachTuoc_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_update 23
typedef void (*func_nro_BachTuoc_update)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_updateInjure 24
typedef void (*func_nro_BachTuoc_updateInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_setAttack_nro_Char 25
typedef void (*func_nro_BachTuoc_setAttack_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BachTuoc_isSpecial_R_boolean 26
typedef jbool (*func_nro_BachTuoc_isSpecial_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isNewModStand_R_boolean 27
typedef jbool (*func_nro_BachTuoc_isNewModStand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isNewMod_R_boolean 28
typedef jbool (*func_nro_BachTuoc_isNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_updateMobAttack 29
typedef void (*func_nro_BachTuoc_updateMobAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_updateMobWalk 30
typedef void (*func_nro_BachTuoc_updateMobWalk)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_getTemplate_R_nro_MobTemplate 31
typedef jobject (*func_nro_BachTuoc_getTemplate_R_nro_MobTemplate)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isPaint_R_boolean 32
typedef jbool (*func_nro_BachTuoc_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isUpdate_R_boolean 33
typedef jbool (*func_nro_BachTuoc_isUpdate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_checkIsBoss_R_boolean 34
typedef jbool (*func_nro_BachTuoc_checkIsBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_updateHp_bar 35
typedef void (*func_nro_BachTuoc_updateHp_bar)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_paintShadow_lib_mGraphics 36
typedef void (*func_nro_BachTuoc_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BachTuoc_paint_lib_mGraphics 37
typedef void (*func_nro_BachTuoc_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BachTuoc_startDie 38
typedef void (*func_nro_BachTuoc_startDie)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_attackOtherMob_nro_Mob 39
typedef void (*func_nro_BachTuoc_attackOtherMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BachTuoc_removeHoldEff 40
typedef void (*func_nro_BachTuoc_removeHoldEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_removeBlindEff 41
typedef void (*func_nro_BachTuoc_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_removeSleepEff 42
typedef void (*func_nro_BachTuoc_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_GetFrame 43
typedef void (*func_nro_BachTuoc_GetFrame)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_isTypeNewMod_R_boolean 44
typedef jbool (*func_nro_BachTuoc_isTypeNewMod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte 45
typedef void (*func_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
#define VTABLE_nro_BachTuoc_move_short 46
typedef void (*func_nro_BachTuoc_move_short)(jcontext ctx, jobject self, jshort param0);

void mark_nro_BachTuoc(jobject object, jint mark, jint depth);
void clinit_nro_BachTuoc(jcontext ctx);
void M_nro_BachTuoc_setBody_short(jcontext ctx, jobject self, jshort param0);
void M_nro_BachTuoc_clearBody(jcontext ctx, jobject self);
void init_nro_BachTuoc_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5);
void M_nro_BachTuoc_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_nro_BachTuoc_updateSuperEff(jcontext ctx, jobject self);
void M_nro_BachTuoc_update(jcontext ctx, jobject self);
void M_nro_BachTuoc_updateInjure(jcontext ctx, jobject self);
void M_nro_BachTuoc_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0);
jbool M_nro_BachTuoc_isSpecial_R_boolean(jcontext ctx, jobject self);
void M_nro_BachTuoc_a_Array1_nro_Char_Array1_long_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2);
void M_nro_BachTuoc_updateMobAttack(jcontext ctx, jobject self);
void M_nro_BachTuoc_updateMobWalk(jcontext ctx, jobject self);
jbool M_nro_BachTuoc_isPaint_R_boolean(jcontext ctx, jobject self);
jbool M_nro_BachTuoc_isUpdate_R_boolean(jcontext ctx, jobject self);
jbool M_nro_BachTuoc_checkIsBoss_R_boolean(jcontext ctx, jobject self);
void M_nro_BachTuoc_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_BachTuoc_startDie(jcontext ctx, jobject self);
void M_nro_BachTuoc_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0);
jint M_nro_BachTuoc_getX_R_int(jcontext ctx, jobject self);
jint M_nro_BachTuoc_getY_R_int(jcontext ctx, jobject self);
jint M_nro_BachTuoc_getH_R_int(jcontext ctx, jobject self);
jint M_nro_BachTuoc_getW_R_int(jcontext ctx, jobject self);
void M_nro_BachTuoc_stopMoving(jcontext ctx, jobject self);
jbool M_nro_BachTuoc_isInvisible_R_boolean(jcontext ctx, jobject self);
void M_nro_BachTuoc_removeHoldEff(jcontext ctx, jobject self);
void M_nro_BachTuoc_removeBlindEff(jcontext ctx, jobject self);
void M_nro_BachTuoc_removeSleepEff(jcontext ctx, jobject self);
void M_nro_BachTuoc_move_short(jcontext ctx, jobject self, jshort param0);

#ifdef __cplusplus
}
#endif

#endif
