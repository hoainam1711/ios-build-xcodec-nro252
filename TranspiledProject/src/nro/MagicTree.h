#ifndef HEADER_nro_MagicTree
#define HEADER_nro_MagicTree

#include "Clearwing.h"
#include "nro/Npc.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MagicTree {
	nro_Npc parent;
	jint F_id;
	jint F_currPeas;
	jint F_shadowLife;
	jint F_maxPeas;
	jref F_name;
	jbool F_isUpdate;
	jref F_peaPostionX;
	jref F_peaPostionY;
	jref F_p;
	jbool F_isUpdateTree;
	jbool F_isPeasEffect;
	jint F_seconds;
	jlong F_last;
	jlong F_cur;
	jbool F_waitToUpdate;
	jint F_delay;
} nro_MagicTree;

extern Class class_nro_MagicTree;

extern jobject SF_nro_MagicTree_pea;
extern jbool SF_nro_MagicTree_isPaint;

#define VTABLE_nro_MagicTree_hashCode_R_int 0
typedef jint (*func_nro_MagicTree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MagicTree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MagicTree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MagicTree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_toString_R_java_lang_String 4
typedef jobject (*func_nro_MagicTree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_finalize 5
typedef void (*func_nro_MagicTree_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_notify 6
typedef void (*func_nro_MagicTree_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_notifyAll 7
typedef void (*func_nro_MagicTree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_wait 8
typedef void (*func_nro_MagicTree_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_wait_long 9
typedef void (*func_nro_MagicTree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MagicTree_wait_long_int 10
typedef void (*func_nro_MagicTree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_MagicTree_getX_R_int 11
typedef jint (*func_nro_MagicTree_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getY_R_int 12
typedef jint (*func_nro_MagicTree_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getW_R_int 13
typedef jint (*func_nro_MagicTree_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getH_R_int 14
typedef jint (*func_nro_MagicTree_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_stopMoving 15
typedef void (*func_nro_MagicTree_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isInvisible_R_boolean 16
typedef jbool (*func_nro_MagicTree_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_applyCharLevelPercent 17
typedef void (*func_nro_MagicTree_applyCharLevelPercent)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getdxSkill_R_int 18
typedef jint (*func_nro_MagicTree_getdxSkill_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getdySkill_R_int 19
typedef jint (*func_nro_MagicTree_getdySkill_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getStrLevel_R_java_lang_String 20
typedef jobject (*func_nro_MagicTree_getStrLevel_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_avatarz_R_int 21
typedef jint (*func_nro_MagicTree_avatarz_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setPowerInfo_java_lang_String_short_short_short 22
typedef void (*func_nro_MagicTree_setPowerInfo_java_lang_String_short_short_short)(jcontext ctx, jobject self, jobject param0, jshort param1, jshort param2, jshort param3);
#define VTABLE_nro_MagicTree_addInfo_java_lang_String 23
typedef void (*func_nro_MagicTree_addInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_boxSort 24
typedef void (*func_nro_MagicTree_boxSort)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getSkill_nro_SkillTemplate_R_nro_Skill 25
typedef jobject (*func_nro_MagicTree_getSkill_nro_SkillTemplate_R_nro_Skill)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_isInEnterOfflinePoint_R_nro_Waypoint 26
typedef jobject (*func_nro_MagicTree_isInEnterOfflinePoint_R_nro_Waypoint)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isInEnterOnlinePoint_R_nro_Waypoint 27
typedef jobject (*func_nro_MagicTree_isInEnterOnlinePoint_R_nro_Waypoint)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isInWaypoint_R_boolean 28
typedef jbool (*func_nro_MagicTree_isInWaypoint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_soundUpdate 29
typedef void (*func_nro_MagicTree_soundUpdate)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_update 30
typedef void (*func_nro_MagicTree_update)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateEffect 31
typedef void (*func_nro_MagicTree_updateEffect)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_checkPerformEndMovePointAction 32
typedef void (*func_nro_MagicTree_checkPerformEndMovePointAction)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_checkHideCharName 33
typedef void (*func_nro_MagicTree_checkHideCharName)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateSkillPaint 34
typedef void (*func_nro_MagicTree_updateSkillPaint)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_SetNum_int_int 35
typedef void (*func_nro_MagicTree_SetNum_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MagicTree_updateCharDeadFly 36
typedef void (*func_nro_MagicTree_updateCharDeadFly)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateResetPoint 37
typedef void (*func_nro_MagicTree_updateResetPoint)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateSkillStand 38
typedef void (*func_nro_MagicTree_updateSkillStand)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharAutoJump 39
typedef void (*func_nro_MagicTree_updateCharAutoJump)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_hide 40
typedef void (*func_nro_MagicTree_hide)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_show 41
typedef void (*func_nro_MagicTree_show)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharStand 42
typedef void (*func_nro_MagicTree_updateCharStand)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateSuperEff 43
typedef void (*func_nro_MagicTree_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getSoundVolumn_R_float 44
typedef jfloat (*func_nro_MagicTree_getSoundVolumn_R_float)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharRun 45
typedef void (*func_nro_MagicTree_updateCharRun)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_stop 46
typedef void (*func_nro_MagicTree_stop)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharJump 47
typedef void (*func_nro_MagicTree_updateCharJump)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setCharFallFromJump 48
typedef void (*func_nro_MagicTree_setCharFallFromJump)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharFall 49
typedef void (*func_nro_MagicTree_updateCharFall)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharFly 50
typedef void (*func_nro_MagicTree_updateCharFly)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateMount 51
typedef void (*func_nro_MagicTree_updateMount)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_checkFrameTick_Array1_int 52
typedef void (*func_nro_MagicTree_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_paintMount2_lib_mGraphics 53
typedef void (*func_nro_MagicTree_paintMount2_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_setMountIsStart 54
typedef void (*func_nro_MagicTree_setMountIsStart)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_checkDelayFallIfTooHigh 55
typedef void (*func_nro_MagicTree_checkDelayFallIfTooHigh)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setDefaultPart 56
typedef void (*func_nro_MagicTree_setDefaultPart)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setDefaultWeapon 57
typedef void (*func_nro_MagicTree_setDefaultWeapon)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setDefaultBody 58
typedef void (*func_nro_MagicTree_setDefaultBody)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setDefaultLeg 59
typedef void (*func_nro_MagicTree_setDefaultLeg)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isSelectingSkillUseAlone_R_boolean 60
typedef jbool (*func_nro_MagicTree_isSelectingSkillUseAlone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_x_R_boolean 61
typedef jbool (*func_nro_MagicTree_x_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isSelectingSkillBuffToPlayer_R_boolean 62
typedef jbool (*func_nro_MagicTree_isSelectingSkillBuffToPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isUseChargeSkill_R_boolean 63
typedef jbool (*func_nro_MagicTree_isUseChargeSkill_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setSkillPaint_nro_SkillPaint_int 64
typedef void (*func_nro_MagicTree_setSkillPaint_nro_SkillPaint_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_MagicTree_sendUseChargeSkill 65
typedef void (*func_nro_MagicTree_sendUseChargeSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_stopUseChargeSkill 66
typedef void (*func_nro_MagicTree_stopUseChargeSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_useChargeSkill_boolean 67
typedef void (*func_nro_MagicTree_useChargeSkill_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_MagicTree_setAutoSkillPaint_nro_SkillPaint_int 68
typedef void (*func_nro_MagicTree_setAutoSkillPaint_nro_SkillPaint_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_MagicTree_skillInfoPaint_R_Array1_nro_SkillInfoPaint 69
typedef jobject (*func_nro_MagicTree_skillInfoPaint_R_Array1_nro_SkillInfoPaint)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setAttack 70
typedef void (*func_nro_MagicTree_setAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isOutX_R_boolean 71
typedef jbool (*func_nro_MagicTree_isOutX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isPaint_R_boolean 72
typedef jbool (*func_nro_MagicTree_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_createShadow_int_int_int 73
typedef void (*func_nro_MagicTree_createShadow_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_MagicTree_setMabuHold_boolean 74
typedef void (*func_nro_MagicTree_setMabuHold_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_MagicTree_paint_lib_mGraphics 75
typedef void (*func_nro_MagicTree_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_paintEff_Pet_lib_mGraphics 76
typedef void (*func_nro_MagicTree_paintEff_Pet_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_paintEffect_lib_mGraphics 77
typedef void (*func_nro_MagicTree_paintEffect_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_paintHp_lib_mGraphics_int_int 78
typedef void (*func_nro_MagicTree_paintHp_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_MagicTree_paintShadow_lib_mGraphics 79
typedef void (*func_nro_MagicTree_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_updateShadown 80
typedef void (*func_nro_MagicTree_updateShadown)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_paintCharWithoutSkill_lib_mGraphics 81
typedef void (*func_nro_MagicTree_paintCharWithoutSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean 82
typedef void (*func_nro_MagicTree_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_nro_MagicTree_isCharBodyImageID_int_R_boolean 83
typedef jbool (*func_nro_MagicTree_isCharBodyImageID_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MagicTree_paint_lib_mGraphics_int_int_int 84
typedef void (*func_nro_MagicTree_paint_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_MagicTree_paintHeadWithXY_lib_mGraphics_int_int_int 85
typedef void (*func_nro_MagicTree_paintHeadWithXY_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_MagicTree_paintCharBody_lib_mGraphics_int_int_int_int_boolean 86
typedef void (*func_nro_MagicTree_paintCharBody_lib_mGraphics_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_nro_MagicTree_paintCharWithSkill_lib_mGraphics 87
typedef void (*func_nro_MagicTree_paintCharWithSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_moveTo_int_int_int 88
typedef void (*func_nro_MagicTree_moveTo_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_MagicTree_searchFocus 89
typedef void (*func_nro_MagicTree_searchFocus)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_clearFocus_int 90
typedef void (*func_nro_MagicTree_clearFocus_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MagicTree_isAttacPlayerStatus_R_boolean 91
typedef jbool (*func_nro_MagicTree_isAttacPlayerStatus_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setHoldChar_nro_Char 92
typedef void (*func_nro_MagicTree_setHoldChar_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_setHoldMob_nro_Mob 93
typedef void (*func_nro_MagicTree_setHoldMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_findNextFocusByKey 94
typedef void (*func_nro_MagicTree_findNextFocusByKey)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_deFocusNPC 95
typedef void (*func_nro_MagicTree_deFocusNPC)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_updateCharInBridge 96
typedef void (*func_nro_MagicTree_updateCharInBridge)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_doInjure_long_long_boolean_boolean 97
typedef void (*func_nro_MagicTree_doInjure_long_long_boolean_boolean)(jcontext ctx, jobject self, jlong param0, jlong param1, jbool param2, jbool param3);
#define VTABLE_nro_MagicTree_doInjure 98
typedef void (*func_nro_MagicTree_doInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_startDie_short_short 99
typedef void (*func_nro_MagicTree_startDie_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_MagicTree_waitToDie_short_short 100
typedef void (*func_nro_MagicTree_waitToDie_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_MagicTree_liveFromDead 101
typedef void (*func_nro_MagicTree_liveFromDead)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_doUsePotion_R_boolean 102
typedef jbool (*func_nro_MagicTree_doUsePotion_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_isMeCanAttackOtherPlayer_nro_Char_R_boolean 103
typedef jbool (*func_nro_MagicTree_isMeCanAttackOtherPlayer_nro_Char_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_focusManualTo_java_lang_Object 104
typedef void (*func_nro_MagicTree_focusManualTo_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_focusToAttack_R_boolean 105
typedef jbool (*func_nro_MagicTree_focusToAttack_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_addDustEff_int 106
typedef void (*func_nro_MagicTree_addDustEff_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MagicTree_removeHoleEff 107
typedef void (*func_nro_MagicTree_removeHoleEff)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_removeProtectEff 108
typedef void (*func_nro_MagicTree_removeProtectEff)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_removeBlindEff 109
typedef void (*func_nro_MagicTree_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_removeEffect 110
typedef void (*func_nro_MagicTree_removeEffect)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setPos_short_short_byte 111
typedef void (*func_nro_MagicTree_setPos_short_short_byte)(jcontext ctx, jobject self, jshort param0, jshort param1, jbyte param2);
#define VTABLE_nro_MagicTree_removeHuytSao 112
typedef void (*func_nro_MagicTree_removeHuytSao)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_fusionComplete 113
typedef void (*func_nro_MagicTree_fusionComplete)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setFusion_byte 114
typedef void (*func_nro_MagicTree_setFusion_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_MagicTree_removeSleepEff 115
typedef void (*func_nro_MagicTree_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_setPartOld 116
typedef void (*func_nro_MagicTree_setPartOld)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_addServerEffect_int_int_int_int 117
typedef void (*func_nro_MagicTree_addServerEffect_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_MagicTree_resetPartTemp 118
typedef void (*func_nro_MagicTree_resetPartTemp)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getEffById_int_R_nro_Effect 119
typedef jobject (*func_nro_MagicTree_getEffById_int_R_nro_Effect)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MagicTree_addEffChar_nro_Effect 120
typedef void (*func_nro_MagicTree_addEffChar_nro_Effect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_removeEffChar_int_int 121
typedef void (*func_nro_MagicTree_removeEffChar_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_MagicTree_paintEffBehind_lib_mGraphics 122
typedef void (*func_nro_MagicTree_paintEffBehind_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_paintEffFront_lib_mGraphics 123
typedef void (*func_nro_MagicTree_paintEffFront_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_updEffChar 124
typedef void (*func_nro_MagicTree_updEffChar)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_checkLuong_R_int 125
typedef jint (*func_nro_MagicTree_checkLuong_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_paintRedEye_lib_mGraphics_int_int_int_int 126
typedef void (*func_nro_MagicTree_paintRedEye_lib_mGraphics_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_nro_MagicTree_updateFHead 127
typedef void (*func_nro_MagicTree_updateFHead)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_getFHead_int_R_int 128
typedef jint (*func_nro_MagicTree_getFHead_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MagicTree_paintHat_behind_lib_mGraphics_int_int 129
typedef void (*func_nro_MagicTree_paintHat_behind_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_MagicTree_sendNewAttack_short 130
typedef void (*func_nro_MagicTree_sendNewAttack_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_MagicTree_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte 131
typedef void (*func_nro_MagicTree_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte)(jcontext ctx, jobject self, jshort param0, jbool param1, jbyte param2, jbyte param3, jbyte param4, jshort param5, jbyte param6);
#define VTABLE_nro_MagicTree_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte 132
typedef void (*func_nro_MagicTree_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte)(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jshort param3, jshort param4, jbyte param5, jobject param6, jbyte param7);
#define VTABLE_nro_MagicTree_clone_R_nro_Char 133
typedef jobject (*func_nro_MagicTree_clone_R_nro_Char)(jcontext ctx, jobject self);
#define VTABLE_nro_MagicTree_containsCaiTrang_int_R_boolean 134
typedef jbool (*func_nro_MagicTree_containsCaiTrang_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MagicTree_setStatus_byte_int 135
typedef void (*func_nro_MagicTree_setStatus_byte_int)(jcontext ctx, jobject self, jbyte param0, jint param1);
#define VTABLE_nro_MagicTree_paintName_lib_mGraphics 136
typedef void (*func_nro_MagicTree_paintName_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MagicTree_perform_int_java_lang_Object 137
typedef void (*func_nro_MagicTree_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_nro_MagicTree(jobject object, jint mark, jint depth);
void clinit_nro_MagicTree(jcontext ctx);
void init_nro_MagicTree_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void M_nro_MagicTree_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_MagicTree_update(jcontext ctx, jobject self);
void M_nro_MagicTree_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
