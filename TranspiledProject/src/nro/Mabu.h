#ifndef HEADER_nro_Mabu
#define HEADER_nro_Mabu

#include "Clearwing.h"
#include "nro/Char.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Mabu {
	nro_Char parent;
	jint F_tick;
	jint F_lastDir;
	jbool F_addFoot;
	jref F_effEat;
	jref F_focus;
	jint F_xTo;
	jint F_yTo;
	jref F_charAttack;
	jref F_damageAttack;
	jint F_xdis;
	jref F_skill1;
	jref F_skill2;
	jref F_skill3;
	jref F_skill4;
	jref F_skills;
	jbyte F_skillID;
	jint F_frame;
	jint F_pIndex;
} nro_Mabu;

extern Class class_nro_Mabu;

extern jobject SF_nro_Mabu_data1;
extern jobject SF_nro_Mabu_data2;

#define VTABLE_nro_Mabu_hashCode_R_int 0
typedef jint (*func_nro_Mabu_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Mabu_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Mabu_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Mabu_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_toString_R_java_lang_String 4
typedef jobject (*func_nro_Mabu_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_finalize 5
typedef void (*func_nro_Mabu_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_notify 6
typedef void (*func_nro_Mabu_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_notifyAll 7
typedef void (*func_nro_Mabu_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_wait 8
typedef void (*func_nro_Mabu_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_wait_long 9
typedef void (*func_nro_Mabu_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Mabu_wait_long_int 10
typedef void (*func_nro_Mabu_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Mabu_getX_R_int 11
typedef jint (*func_nro_Mabu_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getY_R_int 12
typedef jint (*func_nro_Mabu_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getW_R_int 13
typedef jint (*func_nro_Mabu_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getH_R_int 14
typedef jint (*func_nro_Mabu_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_stopMoving 15
typedef void (*func_nro_Mabu_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isInvisible_R_boolean 16
typedef jbool (*func_nro_Mabu_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_applyCharLevelPercent 17
typedef void (*func_nro_Mabu_applyCharLevelPercent)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getdxSkill_R_int 18
typedef jint (*func_nro_Mabu_getdxSkill_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getdySkill_R_int 19
typedef jint (*func_nro_Mabu_getdySkill_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getStrLevel_R_java_lang_String 20
typedef jobject (*func_nro_Mabu_getStrLevel_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_avatarz_R_int 21
typedef jint (*func_nro_Mabu_avatarz_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setPowerInfo_java_lang_String_short_short_short 22
typedef void (*func_nro_Mabu_setPowerInfo_java_lang_String_short_short_short)(jcontext ctx, jobject self, jobject param0, jshort param1, jshort param2, jshort param3);
#define VTABLE_nro_Mabu_addInfo_java_lang_String 23
typedef void (*func_nro_Mabu_addInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_boxSort 24
typedef void (*func_nro_Mabu_boxSort)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getSkill_nro_SkillTemplate_R_nro_Skill 25
typedef jobject (*func_nro_Mabu_getSkill_nro_SkillTemplate_R_nro_Skill)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_isInEnterOfflinePoint_R_nro_Waypoint 26
typedef jobject (*func_nro_Mabu_isInEnterOfflinePoint_R_nro_Waypoint)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isInEnterOnlinePoint_R_nro_Waypoint 27
typedef jobject (*func_nro_Mabu_isInEnterOnlinePoint_R_nro_Waypoint)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isInWaypoint_R_boolean 28
typedef jbool (*func_nro_Mabu_isInWaypoint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_soundUpdate 29
typedef void (*func_nro_Mabu_soundUpdate)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_update 30
typedef void (*func_nro_Mabu_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateEffect 31
typedef void (*func_nro_Mabu_updateEffect)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_checkPerformEndMovePointAction 32
typedef void (*func_nro_Mabu_checkPerformEndMovePointAction)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_checkHideCharName 33
typedef void (*func_nro_Mabu_checkHideCharName)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateSkillPaint 34
typedef void (*func_nro_Mabu_updateSkillPaint)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_SetNum_int_int 35
typedef void (*func_nro_Mabu_SetNum_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Mabu_updateCharDeadFly 36
typedef void (*func_nro_Mabu_updateCharDeadFly)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateResetPoint 37
typedef void (*func_nro_Mabu_updateResetPoint)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateSkillStand 38
typedef void (*func_nro_Mabu_updateSkillStand)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharAutoJump 39
typedef void (*func_nro_Mabu_updateCharAutoJump)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_hide 40
typedef void (*func_nro_Mabu_hide)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_show 41
typedef void (*func_nro_Mabu_show)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharStand 42
typedef void (*func_nro_Mabu_updateCharStand)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateSuperEff 43
typedef void (*func_nro_Mabu_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getSoundVolumn_R_float 44
typedef jfloat (*func_nro_Mabu_getSoundVolumn_R_float)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharRun 45
typedef void (*func_nro_Mabu_updateCharRun)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_stop 46
typedef void (*func_nro_Mabu_stop)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharJump 47
typedef void (*func_nro_Mabu_updateCharJump)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setCharFallFromJump 48
typedef void (*func_nro_Mabu_setCharFallFromJump)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharFall 49
typedef void (*func_nro_Mabu_updateCharFall)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharFly 50
typedef void (*func_nro_Mabu_updateCharFly)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateMount 51
typedef void (*func_nro_Mabu_updateMount)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_checkFrameTick_Array1_int 52
typedef void (*func_nro_Mabu_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_paintMount2_lib_mGraphics 53
typedef void (*func_nro_Mabu_paintMount2_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_setMountIsStart 54
typedef void (*func_nro_Mabu_setMountIsStart)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_checkDelayFallIfTooHigh 55
typedef void (*func_nro_Mabu_checkDelayFallIfTooHigh)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setDefaultPart 56
typedef void (*func_nro_Mabu_setDefaultPart)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setDefaultWeapon 57
typedef void (*func_nro_Mabu_setDefaultWeapon)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setDefaultBody 58
typedef void (*func_nro_Mabu_setDefaultBody)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setDefaultLeg 59
typedef void (*func_nro_Mabu_setDefaultLeg)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isSelectingSkillUseAlone_R_boolean 60
typedef jbool (*func_nro_Mabu_isSelectingSkillUseAlone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_x_R_boolean 61
typedef jbool (*func_nro_Mabu_x_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isSelectingSkillBuffToPlayer_R_boolean 62
typedef jbool (*func_nro_Mabu_isSelectingSkillBuffToPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isUseChargeSkill_R_boolean 63
typedef jbool (*func_nro_Mabu_isUseChargeSkill_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setSkillPaint_nro_SkillPaint_int 64
typedef void (*func_nro_Mabu_setSkillPaint_nro_SkillPaint_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Mabu_sendUseChargeSkill 65
typedef void (*func_nro_Mabu_sendUseChargeSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_stopUseChargeSkill 66
typedef void (*func_nro_Mabu_stopUseChargeSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_useChargeSkill_boolean 67
typedef void (*func_nro_Mabu_useChargeSkill_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Mabu_setAutoSkillPaint_nro_SkillPaint_int 68
typedef void (*func_nro_Mabu_setAutoSkillPaint_nro_SkillPaint_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Mabu_skillInfoPaint_R_Array1_nro_SkillInfoPaint 69
typedef jobject (*func_nro_Mabu_skillInfoPaint_R_Array1_nro_SkillInfoPaint)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setAttack 70
typedef void (*func_nro_Mabu_setAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isOutX_R_boolean 71
typedef jbool (*func_nro_Mabu_isOutX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isPaint_R_boolean 72
typedef jbool (*func_nro_Mabu_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_createShadow_int_int_int 73
typedef void (*func_nro_Mabu_createShadow_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_Mabu_setMabuHold_boolean 74
typedef void (*func_nro_Mabu_setMabuHold_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Mabu_paint_lib_mGraphics 75
typedef void (*func_nro_Mabu_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_paintEff_Pet_lib_mGraphics 76
typedef void (*func_nro_Mabu_paintEff_Pet_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_paintEffect_lib_mGraphics 77
typedef void (*func_nro_Mabu_paintEffect_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_paintHp_lib_mGraphics_int_int 78
typedef void (*func_nro_Mabu_paintHp_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Mabu_paintShadow_lib_mGraphics 79
typedef void (*func_nro_Mabu_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_updateShadown 80
typedef void (*func_nro_Mabu_updateShadown)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_paintCharWithoutSkill_lib_mGraphics 81
typedef void (*func_nro_Mabu_paintCharWithoutSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean 82
typedef void (*func_nro_Mabu_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_nro_Mabu_isCharBodyImageID_int_R_boolean 83
typedef jbool (*func_nro_Mabu_isCharBodyImageID_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_paint_lib_mGraphics_int_int_int 84
typedef void (*func_nro_Mabu_paint_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Mabu_paintHeadWithXY_lib_mGraphics_int_int_int 85
typedef void (*func_nro_Mabu_paintHeadWithXY_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Mabu_paintCharBody_lib_mGraphics_int_int_int_int_boolean 86
typedef void (*func_nro_Mabu_paintCharBody_lib_mGraphics_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_nro_Mabu_paintCharWithSkill_lib_mGraphics 87
typedef void (*func_nro_Mabu_paintCharWithSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_moveTo_int_int_int 88
typedef void (*func_nro_Mabu_moveTo_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_Mabu_searchFocus 89
typedef void (*func_nro_Mabu_searchFocus)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_clearFocus_int 90
typedef void (*func_nro_Mabu_clearFocus_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_isAttacPlayerStatus_R_boolean 91
typedef jbool (*func_nro_Mabu_isAttacPlayerStatus_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setHoldChar_nro_Char 92
typedef void (*func_nro_Mabu_setHoldChar_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_setHoldMob_nro_Mob 93
typedef void (*func_nro_Mabu_setHoldMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_findNextFocusByKey 94
typedef void (*func_nro_Mabu_findNextFocusByKey)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_deFocusNPC 95
typedef void (*func_nro_Mabu_deFocusNPC)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_updateCharInBridge 96
typedef void (*func_nro_Mabu_updateCharInBridge)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_doInjure_long_long_boolean_boolean 97
typedef void (*func_nro_Mabu_doInjure_long_long_boolean_boolean)(jcontext ctx, jobject self, jlong param0, jlong param1, jbool param2, jbool param3);
#define VTABLE_nro_Mabu_doInjure 98
typedef void (*func_nro_Mabu_doInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_startDie_short_short 99
typedef void (*func_nro_Mabu_startDie_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_Mabu_waitToDie_short_short 100
typedef void (*func_nro_Mabu_waitToDie_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_Mabu_liveFromDead 101
typedef void (*func_nro_Mabu_liveFromDead)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_doUsePotion_R_boolean 102
typedef jbool (*func_nro_Mabu_doUsePotion_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_isMeCanAttackOtherPlayer_nro_Char_R_boolean 103
typedef jbool (*func_nro_Mabu_isMeCanAttackOtherPlayer_nro_Char_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_focusManualTo_java_lang_Object 104
typedef void (*func_nro_Mabu_focusManualTo_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_focusToAttack_R_boolean 105
typedef jbool (*func_nro_Mabu_focusToAttack_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_addDustEff_int 106
typedef void (*func_nro_Mabu_addDustEff_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_removeHoleEff 107
typedef void (*func_nro_Mabu_removeHoleEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_removeProtectEff 108
typedef void (*func_nro_Mabu_removeProtectEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_removeBlindEff 109
typedef void (*func_nro_Mabu_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_removeEffect 110
typedef void (*func_nro_Mabu_removeEffect)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setPos_short_short_byte 111
typedef void (*func_nro_Mabu_setPos_short_short_byte)(jcontext ctx, jobject self, jshort param0, jshort param1, jbyte param2);
#define VTABLE_nro_Mabu_removeHuytSao 112
typedef void (*func_nro_Mabu_removeHuytSao)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_fusionComplete 113
typedef void (*func_nro_Mabu_fusionComplete)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setFusion_byte 114
typedef void (*func_nro_Mabu_setFusion_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Mabu_removeSleepEff 115
typedef void (*func_nro_Mabu_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_setPartOld 116
typedef void (*func_nro_Mabu_setPartOld)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_addServerEffect_int_int_int_int 117
typedef void (*func_nro_Mabu_addServerEffect_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Mabu_resetPartTemp 118
typedef void (*func_nro_Mabu_resetPartTemp)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getEffById_int_R_nro_Effect 119
typedef jobject (*func_nro_Mabu_getEffById_int_R_nro_Effect)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_addEffChar_nro_Effect 120
typedef void (*func_nro_Mabu_addEffChar_nro_Effect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_removeEffChar_int_int 121
typedef void (*func_nro_Mabu_removeEffChar_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Mabu_paintEffBehind_lib_mGraphics 122
typedef void (*func_nro_Mabu_paintEffBehind_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_paintEffFront_lib_mGraphics 123
typedef void (*func_nro_Mabu_paintEffFront_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Mabu_updEffChar 124
typedef void (*func_nro_Mabu_updEffChar)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_checkLuong_R_int 125
typedef jint (*func_nro_Mabu_checkLuong_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_paintRedEye_lib_mGraphics_int_int_int_int 126
typedef void (*func_nro_Mabu_paintRedEye_lib_mGraphics_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_nro_Mabu_updateFHead 127
typedef void (*func_nro_Mabu_updateFHead)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_getFHead_int_R_int 128
typedef jint (*func_nro_Mabu_getFHead_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_paintHat_behind_lib_mGraphics_int_int 129
typedef void (*func_nro_Mabu_paintHat_behind_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Mabu_sendNewAttack_short 130
typedef void (*func_nro_Mabu_sendNewAttack_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Mabu_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte 131
typedef void (*func_nro_Mabu_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte)(jcontext ctx, jobject self, jshort param0, jbool param1, jbyte param2, jbyte param3, jbyte param4, jshort param5, jbyte param6);
#define VTABLE_nro_Mabu_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte 132
typedef void (*func_nro_Mabu_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte)(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jshort param3, jshort param4, jbyte param5, jobject param6, jbyte param7);
#define VTABLE_nro_Mabu_clone_R_nro_Char 133
typedef jobject (*func_nro_Mabu_clone_R_nro_Char)(jcontext ctx, jobject self);
#define VTABLE_nro_Mabu_containsCaiTrang_int_R_boolean 134
typedef jbool (*func_nro_Mabu_containsCaiTrang_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_eat_int 135
typedef void (*func_nro_Mabu_eat_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long 136
typedef void (*func_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long)(jcontext ctx, jobject self, jbyte param0, jshort param1, jshort param2, jobject param3, jobject param4);

void mark_nro_Mabu(jobject object, jint mark, jint depth);
void clinit_nro_Mabu(jcontext ctx);
void M_nro_Mabu_eat_int(jcontext ctx, jobject self, jint param0);
void M_nro_Mabu_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void init_nro_Mabu(jcontext ctx, jobject self);
void M_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long(jcontext ctx, jobject self, jbyte param0, jshort param1, jshort param2, jobject param3, jobject param4);
void M_nro_Mabu_update(jcontext ctx, jobject self);
void M_nro_Mabu_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
