#ifndef HEADER_nro_Char
#define HEADER_nro_Char

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Char {
	java_lang_Object parent;
	jref F_xuStr;
	jref F_luongStr;
	jref F_luongKhoaStr;
	jbool F_meLive;
	jbool F_isTeleport;
	jbool F_isTeleport1;
	jint F_shadowX;
	jint F_shadowY;
	jint F_shadowLife;
	jbool F_isNhapThe;
	jref F_petFollow;
	jint F_rank;
	jlong F_cPower;
	jref F_chatInfo;
	jbyte F_petStatus;
	jint F_cx;
	jint F_cy;
	jint F_cvx;
	jint F_cvy;
	jint F_cp1;
	jint F_cp2;
	jint F_cp3;
	jint F_statusMe;
	jint F_cdir;
	jint F_charID;
	jint F_cgender;
	jint F_ctaskId;
	jint F_menuSelect;
	jint F_cBonusSpeed;
	jint F_cspeed;
	jint F_cCriticalFull;
	jint F_clevel;
	jint F_cyStartFall;
	jint F_eff5BuffHp;
	jint F_eff5BuffMp;
	jlong F_cMP;
	jlong F_cHP;
	jlong F_cHPFull;
	jlong F_cMPFull;
	jlong F_cDamFull;
	jlong F_cDefull;
	jlong F_cLevelPercent;
	jlong F_cTiemNang;
	jlong F_cNangdong;
	jlong F_damHP;
	jbool F_isMob;
	jbool F_isCrit;
	jbool F_isDie;
	jref F_cName;
	jint F_clanID;
	jref F_clan;
	jbyte F_role;
	jint F_cw;
	jint F_ch;
	jint F_chw;
	jint F_chh;
	jref F_cmdMenu;
	jbool F_canFly;
	jbool F_cmtoChar;
	jbool F_me;
	jbool F_isSoundJump;
	jbool F_isAttack;
	jint F_cf;
	jint F_tick;
	jlong F_xu;
	jint F_au;
	jint F_luong;
	jint F_luongKhoa;
	jref F_nClass;
	jref F_endMovePointCommand;
	jref F_vSkill;
	jref F_vSkillFight;
	jref F_vEff;
	jref F_myskill;
	jref F_taskMaint;
	jbool F_paintName;
	jref F_arrArchive;
	jref F_arrItemBag;
	jref F_arrItemBox;
	jref F_arrItemBody;
	jref F_arrPetSkill;
	jref F_arrItemShop;
	jref F_infoSpeacialSkill;
	jref F_imgSpeacialSkill;
	jbyte F_cPk;
	jbyte F_cTypePk;
	jint F_avatar;
	jint F_skillTemplateId;
	jref F_mobFocus;
	jref F_mobMe;
	jint F_tMobMeBorn;
	jref F_npcFocus;
	jref F_charFocus;
	jref F_itemFocus;
	jref F_focus;
	jref F_attMobs;
	jref F_attChars;
	jref F_moveFast;
	jint F_testCharId;
	jint F_killCharId;
	jbyte F_resultTest;
	jbool F_isInvisiblez;
	jbool F_isShadown;
	jref F_taskOrders;
	jint F_cStamina;
	jref F_strLevel;
	jref F_currStrLevel;
	jbool F_isFreez;
	jbool F_isCharge;
	jint F_seconds;
	jint F_freezSeconds;
	jlong F_last;
	jlong F_cur;
	jlong F_lastFreez;
	jbool F_isFlyUp;
	jshort F_idMount;
	jint F_cdirSend;
	jint F_cactFirst;
	jbool F_isHaveMount;
	jbool F_isMountVip;
	jbool F_isEventMount;
	jbool F_isSpeacialMount;
	jref F_FrameMount;
	jint F_frameMount;
	jint F_frameNewMount;
	jint F_transMount;
	jint F_genderMount;
	jint F_idcharMount;
	jint F_xChar;
	jint F_xMount;
	jint F_yMount;
	jint F_dxMount;
	jint F_dyMount;
	jint F_xdis;
	jbool F_isStartMount;
	jbool F_isMount;
	jbool F_isEndMount;
	jbyte F_cFlag;
	jint F_flagImage;
	jshort F_x_hint;
	jshort F_y_hint;
	jint F_cvyJump;
	jint F_cxSend;
	jint F_cySend;
	jref F_vMovePoints;
	jbool F_isLockMove;
	jref F_strInfo;
	jshort F_powerPoint;
	jshort F_maxPowerPoint;
	jshort F_secondPower;
	jlong F_lastS;
	jlong F_currS;
	jbool F_havePet;
	jref F_currentMovePoint;
	jint F_delayFall;
	jref F_eProtect;
	jref F_eDanhHieu;
	jint F_twHp;
	jbool F_isInjureHp;
	jbool F_changePos;
	jbool F_isHide;
	jbool F_wy;
	jint F_wt;
	jint F_fy;
	jint F_ty;
	jint F_t;
	jint F_fM;
	jref F_move;
	jref F_strMount;
	jint F_headICON;
	jint F_head;
	jint F_leg;
	jint F_body;
	jint F_bag;
	jint F_wp;
	jint F_indexEff;
	jint F_indexEffTask;
	jref F_eff;
	jref F_effTask;
	jint F_indexSkill;
	jint F_i0;
	jint F_i1;
	jint F_i2;
	jint F_dx0;
	jint F_dx1;
	jint F_dx2;
	jint F_dy0;
	jint F_dy1;
	jint F_dy2;
	jref F_eff0;
	jref F_eff1;
	jref F_eff2;
	jref F_arr;
	jref F_dart;
	jbool F_isCreateDark;
	jref F_skillPaint;
	jref F_skillPaintRandomPaint;
	jref F_effPaints;
	jint F_sType;
	jbyte F_isInjure;
	jbool F_isUseSkillAfterCharge;
	jbool F_isFlyAndCharge;
	jbool F_isStandAndCharge;
	jint F_posDisY;
	jint F_chargeCount;
	jbool F_isJump;
	jbool F_isMabuHold;
	jlong F_timeBlue;
	jint F_tBlue;
	jbool F_IsAddDust1;
	jbool F_IsAddDust2;
	jint F_len;
	jint F_w_hp_bar;
	jref F_imgHPtem;
	jbool F_isPet;
	jbool F_isMiniPet;
	jint F_xSd;
	jint F_ySd;
	jint F_fBag;
	jref F_ph;
	jref F_pl;
	jref F_pb;
	jint F_cH_new;
	jint F_statusBeforeNothing;
	jint F_timeFocusToMob;
	jref F_charHold;
	jref F_mobHold;
	jshort F_wdx;
	jshort F_wdy;
	jint F_cDamGoc;
	jlong F_cHPGoc;
	jlong F_cMPGoc;
	jint F_cDefGoc;
	jint F_cCriticalGoc;
	jlong F_cGiamST;
	jint F_cCritDameFull;
	jbyte F_Rank;
	jlong F_cHPNew;
	jint F_xuInBox;
	jbyte F_hpFrom1000TiemNang;
	jbyte F_mpFrom1000TiemNang;
	jbyte F_damFrom1000TiemNang;
	jbyte F_defFrom1000TiemNang;
	jbyte F_criticalFrom1000Tiemnang;
	jshort F_cMaxStamina;
	jshort F_expForOneAdd;
	jbyte F_isMonkey;
	jbool F_isCopy;
	jbool F_isWaitMonkey;
	jbool F_meDead;
	jint F_holdEffID;
	jbool F_holder;
	jbool F_protectEff;
	jbool F_danhHieuEff;
	jbool F_isSetPos;
	jint F_tpos;
	jshort F_xPos;
	jshort F_yPos;
	jbyte F_typePos;
	jbool F_isFusion;
	jint F_tFusion;
	jbool F_huytSao;
	jbool F_blindEff;
	jbool F_telePortSkill;
	jbool F_sleepEff;
	jbool F_stone;
	jint F_perCentMp;
	jlong F_dHP;
	jint F_headTemp;
	jint F_bodyTemp;
	jint F_legTemp;
	jint F_bagTemp;
	jref F_vEffChar;
	jint F_fChopmat;
	jlong F_timeAddChopmat;
	jref F_frChopNhanh;
	jref F_frChopCham;
	jref F_frEye;
	jint F_fHead;
	jref F_strEffAura;
	jshort F_idAuraEff;
	jref F_fraEff;
	jref F_fraEffSub;
	jref F_strEff_Set_Item;
	jshort F_idEff_Set_Item;
	jref F_fraHat_behind;
	jref F_fraHat_font;
	jref F_fraHat_behind_2;
	jref F_fraHat_font_2;
	jref F_strHat_behind;
	jref F_strHat_font;
	jref F_strNgang;
	jshort F_idHat;
	jbool F_isPaintNewSkill;
	jbool F_isFly;
	jlong F_timeReset_newSkill;
	jbyte F_typeFrame;
	jshort F_idskillPaint;
	jref F_fr_start;
	jref F_fr_atk;
	jref F_fr_end;
	jint F_count_NEW;
	jint F_stt;
	jref F_targetDame;
	jlong F_timeDame;
	jbool F_isMafuba;
	jshort F_countMafuba;
	jint F_xMFB;
	jint F_yMFB;
	jref F_fraDanhHieu;
} nro_Char;

extern Class class_nro_Char;

extern jobject SF_nro_Char_chatPopup;
extern jobject SF_nro_Char_idHead;
extern jobject SF_nro_Char_idAvatar;
extern jobject SF_nro_Char_eyeTraiDat;
extern jobject SF_nro_Char_eyeNamek;
extern jobject SF_nro_Char_vItemTime;
extern jshort SF_nro_Char_ID_NEW_MOUNT;
extern jobject SF_nro_Char_imgMount_TD;
extern jobject SF_nro_Char_imgMount_NM;
extern jobject SF_nro_Char_imgMount_NM_1;
extern jobject SF_nro_Char_imgMount_XD;
extern jobject SF_nro_Char_imgMount_TD_VIP;
extern jobject SF_nro_Char_imgMount_NM_VIP;
extern jobject SF_nro_Char_imgMount_NM_1_VIP;
extern jobject SF_nro_Char_imgMount_XD_VIP;
extern jobject SF_nro_Char_imgEventMount;
extern jobject SF_nro_Char_imgEventMountWing;
extern jobject SF_nro_Char_CharInfo;
extern jobject SF_nro_Char_myChar;
extern jobject SF_nro_Char_myPet;
extern jbool SF_nro_Char_ischangingMap;
extern jbool SF_nro_Char_isLockKey;
extern jbool SF_nro_Char_isLoadingMap;
extern jbool SF_nro_Char_isManualFocus;
extern jobject SF_nro_Char_fraRedEye;
extern jobject SF_nro_Char_Arr_Head_2Fr;
extern jbool SF_nro_Char_isPaintAura;
extern jbool SF_nro_Char_isPaintAura2;
extern jobject SF_nro_Char_hatInfo;
extern jobject SF_nro_Char_Arr_Head_FlyMove;

#define VTABLE_nro_Char_hashCode_R_int 0
typedef jint (*func_nro_Char_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Char_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Char_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Char_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_toString_R_java_lang_String 4
typedef jobject (*func_nro_Char_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_finalize 5
typedef void (*func_nro_Char_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_notify 6
typedef void (*func_nro_Char_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_notifyAll 7
typedef void (*func_nro_Char_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_wait 8
typedef void (*func_nro_Char_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_wait_long 9
typedef void (*func_nro_Char_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Char_wait_long_int 10
typedef void (*func_nro_Char_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Char_getX_R_int 11
typedef jint (*func_nro_Char_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getY_R_int 12
typedef jint (*func_nro_Char_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getW_R_int 13
typedef jint (*func_nro_Char_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getH_R_int 14
typedef jint (*func_nro_Char_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_stopMoving 15
typedef void (*func_nro_Char_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isInvisible_R_boolean 16
typedef jbool (*func_nro_Char_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_applyCharLevelPercent 17
typedef void (*func_nro_Char_applyCharLevelPercent)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getdxSkill_R_int 18
typedef jint (*func_nro_Char_getdxSkill_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getdySkill_R_int 19
typedef jint (*func_nro_Char_getdySkill_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getStrLevel_R_java_lang_String 20
typedef jobject (*func_nro_Char_getStrLevel_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_avatarz_R_int 21
typedef jint (*func_nro_Char_avatarz_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setPowerInfo_java_lang_String_short_short_short 22
typedef void (*func_nro_Char_setPowerInfo_java_lang_String_short_short_short)(jcontext ctx, jobject self, jobject param0, jshort param1, jshort param2, jshort param3);
#define VTABLE_nro_Char_addInfo_java_lang_String 23
typedef void (*func_nro_Char_addInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_boxSort 24
typedef void (*func_nro_Char_boxSort)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill 25
typedef jobject (*func_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint 26
typedef jobject (*func_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint 27
typedef jobject (*func_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isInWaypoint_R_boolean 28
typedef jbool (*func_nro_Char_isInWaypoint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_soundUpdate 29
typedef void (*func_nro_Char_soundUpdate)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_update 30
typedef void (*func_nro_Char_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateEffect 31
typedef void (*func_nro_Char_updateEffect)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_checkPerformEndMovePointAction 32
typedef void (*func_nro_Char_checkPerformEndMovePointAction)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_checkHideCharName 33
typedef void (*func_nro_Char_checkHideCharName)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateSkillPaint 34
typedef void (*func_nro_Char_updateSkillPaint)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_SetNum_int_int 35
typedef void (*func_nro_Char_SetNum_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Char_updateCharDeadFly 36
typedef void (*func_nro_Char_updateCharDeadFly)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateResetPoint 37
typedef void (*func_nro_Char_updateResetPoint)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateSkillStand 38
typedef void (*func_nro_Char_updateSkillStand)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharAutoJump 39
typedef void (*func_nro_Char_updateCharAutoJump)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_hide 40
typedef void (*func_nro_Char_hide)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_show 41
typedef void (*func_nro_Char_show)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharStand 42
typedef void (*func_nro_Char_updateCharStand)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateSuperEff 43
typedef void (*func_nro_Char_updateSuperEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getSoundVolumn_R_float 44
typedef jfloat (*func_nro_Char_getSoundVolumn_R_float)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharRun 45
typedef void (*func_nro_Char_updateCharRun)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_stop 46
typedef void (*func_nro_Char_stop)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharJump 47
typedef void (*func_nro_Char_updateCharJump)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setCharFallFromJump 48
typedef void (*func_nro_Char_setCharFallFromJump)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharFall 49
typedef void (*func_nro_Char_updateCharFall)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharFly 50
typedef void (*func_nro_Char_updateCharFly)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateMount 51
typedef void (*func_nro_Char_updateMount)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_checkFrameTick_Array1_int 52
typedef void (*func_nro_Char_checkFrameTick_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_paintMount2_lib_mGraphics 53
typedef void (*func_nro_Char_paintMount2_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_setMountIsStart 54
typedef void (*func_nro_Char_setMountIsStart)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_checkDelayFallIfTooHigh 55
typedef void (*func_nro_Char_checkDelayFallIfTooHigh)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setDefaultPart 56
typedef void (*func_nro_Char_setDefaultPart)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setDefaultWeapon 57
typedef void (*func_nro_Char_setDefaultWeapon)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setDefaultBody 58
typedef void (*func_nro_Char_setDefaultBody)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setDefaultLeg 59
typedef void (*func_nro_Char_setDefaultLeg)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isSelectingSkillUseAlone_R_boolean 60
typedef jbool (*func_nro_Char_isSelectingSkillUseAlone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_x_R_boolean 61
typedef jbool (*func_nro_Char_x_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isSelectingSkillBuffToPlayer_R_boolean 62
typedef jbool (*func_nro_Char_isSelectingSkillBuffToPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isUseChargeSkill_R_boolean 63
typedef jbool (*func_nro_Char_isUseChargeSkill_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int 64
typedef void (*func_nro_Char_setSkillPaint_nro_SkillPaint_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Char_sendUseChargeSkill 65
typedef void (*func_nro_Char_sendUseChargeSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_stopUseChargeSkill 66
typedef void (*func_nro_Char_stopUseChargeSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_useChargeSkill_boolean 67
typedef void (*func_nro_Char_useChargeSkill_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int 68
typedef void (*func_nro_Char_setAutoSkillPaint_nro_SkillPaint_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint 69
typedef jobject (*func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setAttack 70
typedef void (*func_nro_Char_setAttack)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isOutX_R_boolean 71
typedef jbool (*func_nro_Char_isOutX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isPaint_R_boolean 72
typedef jbool (*func_nro_Char_isPaint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_createShadow_int_int_int 73
typedef void (*func_nro_Char_createShadow_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_Char_setMabuHold_boolean 74
typedef void (*func_nro_Char_setMabuHold_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Char_paint_lib_mGraphics 75
typedef void (*func_nro_Char_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_paintEff_Pet_lib_mGraphics 76
typedef void (*func_nro_Char_paintEff_Pet_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_paintEffect_lib_mGraphics 77
typedef void (*func_nro_Char_paintEffect_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_paintHp_lib_mGraphics_int_int 78
typedef void (*func_nro_Char_paintHp_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Char_paintShadow_lib_mGraphics 79
typedef void (*func_nro_Char_paintShadow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_updateShadown 80
typedef void (*func_nro_Char_updateShadown)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_paintCharWithoutSkill_lib_mGraphics 81
typedef void (*func_nro_Char_paintCharWithoutSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean 82
typedef void (*func_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_nro_Char_isCharBodyImageID_int_R_boolean 83
typedef jbool (*func_nro_Char_isCharBodyImageID_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Char_paint_lib_mGraphics_int_int_int 84
typedef void (*func_nro_Char_paint_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int 85
typedef void (*func_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean 86
typedef void (*func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_nro_Char_paintCharWithSkill_lib_mGraphics 87
typedef void (*func_nro_Char_paintCharWithSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_moveTo_int_int_int 88
typedef void (*func_nro_Char_moveTo_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_Char_searchFocus 89
typedef void (*func_nro_Char_searchFocus)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_clearFocus_int 90
typedef void (*func_nro_Char_clearFocus_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Char_isAttacPlayerStatus_R_boolean 91
typedef jbool (*func_nro_Char_isAttacPlayerStatus_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setHoldChar_nro_Char 92
typedef void (*func_nro_Char_setHoldChar_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_setHoldMob_nro_Mob 93
typedef void (*func_nro_Char_setHoldMob_nro_Mob)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_findNextFocusByKey 94
typedef void (*func_nro_Char_findNextFocusByKey)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_deFocusNPC 95
typedef void (*func_nro_Char_deFocusNPC)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_updateCharInBridge 96
typedef void (*func_nro_Char_updateCharInBridge)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_doInjure_long_long_boolean_boolean 97
typedef void (*func_nro_Char_doInjure_long_long_boolean_boolean)(jcontext ctx, jobject self, jlong param0, jlong param1, jbool param2, jbool param3);
#define VTABLE_nro_Char_doInjure 98
typedef void (*func_nro_Char_doInjure)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_startDie_short_short 99
typedef void (*func_nro_Char_startDie_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_Char_waitToDie_short_short 100
typedef void (*func_nro_Char_waitToDie_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_nro_Char_liveFromDead 101
typedef void (*func_nro_Char_liveFromDead)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_doUsePotion_R_boolean 102
typedef jbool (*func_nro_Char_doUsePotion_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean 103
typedef jbool (*func_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_focusManualTo_java_lang_Object 104
typedef void (*func_nro_Char_focusManualTo_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_focusToAttack_R_boolean 105
typedef jbool (*func_nro_Char_focusToAttack_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_addDustEff_int 106
typedef void (*func_nro_Char_addDustEff_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Char_removeHoleEff 107
typedef void (*func_nro_Char_removeHoleEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_removeProtectEff 108
typedef void (*func_nro_Char_removeProtectEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_removeBlindEff 109
typedef void (*func_nro_Char_removeBlindEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_removeEffect 110
typedef void (*func_nro_Char_removeEffect)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setPos_short_short_byte 111
typedef void (*func_nro_Char_setPos_short_short_byte)(jcontext ctx, jobject self, jshort param0, jshort param1, jbyte param2);
#define VTABLE_nro_Char_removeHuytSao 112
typedef void (*func_nro_Char_removeHuytSao)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_fusionComplete 113
typedef void (*func_nro_Char_fusionComplete)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setFusion_byte 114
typedef void (*func_nro_Char_setFusion_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Char_removeSleepEff 115
typedef void (*func_nro_Char_removeSleepEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_setPartOld 116
typedef void (*func_nro_Char_setPartOld)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_addServerEffect_int_int_int_int 117
typedef void (*func_nro_Char_addServerEffect_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Char_resetPartTemp 118
typedef void (*func_nro_Char_resetPartTemp)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getEffById_int_R_nro_Effect 119
typedef jobject (*func_nro_Char_getEffById_int_R_nro_Effect)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Char_addEffChar_nro_Effect 120
typedef void (*func_nro_Char_addEffChar_nro_Effect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_removeEffChar_int_int 121
typedef void (*func_nro_Char_removeEffChar_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Char_paintEffBehind_lib_mGraphics 122
typedef void (*func_nro_Char_paintEffBehind_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_paintEffFront_lib_mGraphics 123
typedef void (*func_nro_Char_paintEffFront_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Char_updEffChar 124
typedef void (*func_nro_Char_updEffChar)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_checkLuong_R_int 125
typedef jint (*func_nro_Char_checkLuong_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int 126
typedef void (*func_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_nro_Char_updateFHead 127
typedef void (*func_nro_Char_updateFHead)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_getFHead_int_R_int 128
typedef jint (*func_nro_Char_getFHead_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Char_paintHat_behind_lib_mGraphics_int_int 129
typedef void (*func_nro_Char_paintHat_behind_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Char_sendNewAttack_short 130
typedef void (*func_nro_Char_sendNewAttack_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte 131
typedef void (*func_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte)(jcontext ctx, jobject self, jshort param0, jbool param1, jbyte param2, jbyte param3, jbyte param4, jshort param5, jbyte param6);
#define VTABLE_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte 132
typedef void (*func_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte)(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jshort param3, jshort param4, jbyte param5, jobject param6, jbyte param7);
#define VTABLE_nro_Char_clone_R_nro_Char 133
typedef jobject (*func_nro_Char_clone_R_nro_Char)(jcontext ctx, jobject self);
#define VTABLE_nro_Char_containsCaiTrang_int_R_boolean 134
typedef jbool (*func_nro_Char_containsCaiTrang_int_R_boolean)(jcontext ctx, jobject self, jint param0);

void mark_nro_Char(jobject object, jint mark, jint depth);
void clinit_nro_Char(jcontext ctx);
void M_nro_Char_applyCharLevelPercent(jcontext ctx, jobject self);
jint M_nro_Char_getdxSkill_R_int(jcontext ctx, jobject self);
jint M_nro_Char_getdySkill_R_int(jcontext ctx, jobject self);
void SM_nro_Char_taskAction_boolean(jcontext ctx, jbool param0);
jobject M_nro_Char_getStrLevel_R_java_lang_String(jcontext ctx, jobject self);
jint M_nro_Char_avatarz_R_int(jcontext ctx, jobject self);
void M_nro_Char_setPowerInfo_java_lang_String_short_short_short(jcontext ctx, jobject self, jobject param0, jshort param1, jshort param2, jshort param3);
void M_nro_Char_addInfo_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_nro_Char(jcontext ctx, jobject self);
jobject SM_nro_Char_myCharz_R_nro_Char(jcontext ctx);
jobject SM_nro_Char_myPetz_R_nro_Char(jcontext ctx);
void SM_nro_Char_clearMyChar(jcontext ctx);
void M_nro_Char_boxSort(jcontext ctx, jobject self);
jobject M_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill(jcontext ctx, jobject self, jobject param0);
jobject M_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint(jcontext ctx, jobject self);
jobject M_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint(jcontext ctx, jobject self);
jbool M_nro_Char_isInWaypoint_R_boolean(jcontext ctx, jobject self);
void M_nro_Char_soundUpdate(jcontext ctx, jobject self);
void M_nro_Char_update(jcontext ctx, jobject self);
void M_nro_Char_updateEffect(jcontext ctx, jobject self);
void M_nro_Char_checkPerformEndMovePointAction(jcontext ctx, jobject self);
void M_nro_Char_checkHideCharName(jcontext ctx, jobject self);
void M_nro_Char_updateSkillPaint(jcontext ctx, jobject self);
void M_nro_Char_SetNum_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_Char_updateCharDeadFly(jcontext ctx, jobject self);
void M_nro_Char_updateResetPoint(jcontext ctx, jobject self);
void M_nro_Char_updateSkillStand(jcontext ctx, jobject self);
void M_nro_Char_updateCharAutoJump(jcontext ctx, jobject self);
void M_nro_Char_hide(jcontext ctx, jobject self);
void M_nro_Char_show(jcontext ctx, jobject self);
void M_nro_Char_updateCharStand(jcontext ctx, jobject self);
void M_nro_Char_updateSuperEff(jcontext ctx, jobject self);
jfloat M_nro_Char_getSoundVolumn_R_float(jcontext ctx, jobject self);
void M_nro_Char_updateCharRun(jcontext ctx, jobject self);
void M_nro_Char_stop(jcontext ctx, jobject self);
jint SM_nro_Char_abs_int_R_int(jcontext ctx, jint param0);
void M_nro_Char_updateCharJump(jcontext ctx, jobject self);
void M_nro_Char_setCharFallFromJump(jcontext ctx, jobject self);
void M_nro_Char_updateCharFall(jcontext ctx, jobject self);
void M_nro_Char_updateCharFly(jcontext ctx, jobject self);
void M_nro_Char_updateMount(jcontext ctx, jobject self);
void SM_nro_Char_getMountData(jcontext ctx);
void M_nro_Char_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_paintMount2_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_setMountIsStart(jcontext ctx, jobject self);
void M_nro_Char_checkDelayFallIfTooHigh(jcontext ctx, jobject self);
void M_nro_Char_setDefaultPart(jcontext ctx, jobject self);
void M_nro_Char_setDefaultWeapon(jcontext ctx, jobject self);
void M_nro_Char_setDefaultBody(jcontext ctx, jobject self);
void M_nro_Char_setDefaultLeg(jcontext ctx, jobject self);
jbool M_nro_Char_isSelectingSkillUseAlone_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Char_x_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Char_isSelectingSkillBuffToPlayer_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Char_isUseChargeSkill_R_boolean(jcontext ctx, jobject self);
void M_nro_Char_setSkillPaint_nro_SkillPaint_int(jcontext ctx, jobject self, jobject param0, jint param1);
void SM_nro_Char_useSkillNotFocus(jcontext ctx);
void M_nro_Char_sendUseChargeSkill(jcontext ctx, jobject self);
void M_nro_Char_stopUseChargeSkill(jcontext ctx, jobject self);
void M_nro_Char_useChargeSkill_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Char_setAutoSkillPaint_nro_SkillPaint_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint(jcontext ctx, jobject self);
void M_nro_Char_setAttack(jcontext ctx, jobject self);
jbool M_nro_Char_isOutX_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Char_isPaint_R_boolean(jcontext ctx, jobject self);
void M_nro_Char_createShadow_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_nro_Char_setMabuHold_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Char_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_paintEff_Pet_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_paintEffect_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_paintHp_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_Char_paintShadow_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_updateShadown(jcontext ctx, jobject self);
void M_nro_Char_paintCharWithoutSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5);
jbool M_nro_Char_isCharBodyImageID_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_nro_Char_paint_lib_mGraphics_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
void M_nro_Char_paintCharWithSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_moveTo_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_nro_Char_searchFocus(jcontext ctx, jobject self);
void M_nro_Char_clearFocus_int(jcontext ctx, jobject self, jint param0);
jbool SM_nro_Char_isCharInScreen_nro_Char_R_boolean(jcontext ctx, jobject param0);
jbool M_nro_Char_isAttacPlayerStatus_R_boolean(jcontext ctx, jobject self);
void M_nro_Char_setHoldChar_nro_Char(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_setHoldMob_nro_Mob(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_findNextFocusByKey(jcontext ctx, jobject self);
void M_nro_Char_deFocusNPC(jcontext ctx, jobject self);
void M_nro_Char_updateCharInBridge(jcontext ctx, jobject self);
void M_nro_Char_doInjure_long_long_boolean_boolean(jcontext ctx, jobject self, jlong param0, jlong param1, jbool param2, jbool param3);
void M_nro_Char_doInjure(jcontext ctx, jobject self);
void M_nro_Char_startDie_short_short(jcontext ctx, jobject self, jshort param0, jshort param1);
void M_nro_Char_waitToDie_short_short(jcontext ctx, jobject self, jshort param0, jshort param1);
void M_nro_Char_liveFromDead(jcontext ctx, jobject self);
jbool M_nro_Char_doUsePotion_R_boolean(jcontext ctx, jobject self);
jbool SM_nro_Char_isLang_R_boolean(jcontext ctx);
jbool M_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean(jcontext ctx, jobject self, jobject param0);
void SM_nro_Char_clearTask(jcontext ctx);
jint M_nro_Char_getX_R_int(jcontext ctx, jobject self);
jint M_nro_Char_getY_R_int(jcontext ctx, jobject self);
jint M_nro_Char_getH_R_int(jcontext ctx, jobject self);
jint M_nro_Char_getW_R_int(jcontext ctx, jobject self);
void M_nro_Char_focusManualTo_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_stopMoving(jcontext ctx, jobject self);
jbool M_nro_Char_isInvisible_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Char_focusToAttack_R_boolean(jcontext ctx, jobject self);
void M_nro_Char_addDustEff_int(jcontext ctx, jobject self, jint param0);
jbool SM_nro_Char_isGetFlagImage_byte_R_boolean(jcontext ctx, jbyte param0);
void M_nro_Char_removeHoleEff(jcontext ctx, jobject self);
void M_nro_Char_removeProtectEff(jcontext ctx, jobject self);
void M_nro_Char_removeBlindEff(jcontext ctx, jobject self);
void M_nro_Char_removeEffect(jcontext ctx, jobject self);
void M_nro_Char_setPos_short_short_byte(jcontext ctx, jobject self, jshort param0, jshort param1, jbyte param2);
void M_nro_Char_removeHuytSao(jcontext ctx, jobject self);
void M_nro_Char_fusionComplete(jcontext ctx, jobject self);
void M_nro_Char_setFusion_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Char_removeSleepEff(jcontext ctx, jobject self);
void M_nro_Char_setPartOld(jcontext ctx, jobject self);
void M_nro_Char_addServerEffect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_nro_Char_resetPartTemp(jcontext ctx, jobject self);
jobject M_nro_Char_getEffById_int_R_nro_Effect(jcontext ctx, jobject self, jint param0);
void M_nro_Char_addEffChar_nro_Effect(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_removeEffChar_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_Char_paintEffBehind_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_paintEffFront_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Char_updEffChar(jcontext ctx, jobject self);
jint M_nro_Char_checkLuong_R_int(jcontext ctx, jobject self);
void M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
jbool SM_nro_Char_isHead_2Fr_int_R_boolean(jcontext ctx, jint param0);
void M_nro_Char_updateFHead(jcontext ctx, jobject self);
jint M_nro_Char_getFHead_int_R_int(jcontext ctx, jobject self, jint param0);
void M_nro_Char_paintHat_behind_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool SM_nro_Char_i_int_R_boolean(jcontext ctx, jint param0);
void M_nro_Char_sendNewAttack_short(jcontext ctx, jobject self, jshort param0);
void M_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte(jcontext ctx, jobject self, jshort param0, jbool param1, jbyte param2, jbyte param3, jbyte param4, jshort param5, jbyte param6);
void M_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jshort param3, jshort param4, jbyte param5, jobject param6, jbyte param7);
jobject M_nro_Char_clone_R_nro_Char(jcontext ctx, jobject self);
jbool M_nro_Char_containsCaiTrang_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_nro_Char_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
