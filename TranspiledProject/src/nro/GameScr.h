#ifndef HEADER_nro_GameScr
#define HEADER_nro_GameScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IChatable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_GameScr {
	nro_mScreen parent;
	jbool F_isWaitingDoubleClick;
	jlong F_timeStartDblClick;
	jlong F_timeEndDblClick;
	jref F_cmdFocus;
	jref F_iOptionTemplates;
	jref F_sOptionTemplates;
	jint F_tMenuDelay;
	jref F_zones;
	jref F_pts;
	jref F_numPlayer;
	jref F_maxPlayer;
	jref F_rank1;
	jref F_rank2;
	jref F_rankName1;
	jref F_rankName2;
	jint F_typeTrade;
	jint F_typeTradeOrder;
	jint F_indexItemUse;
	jbool F_isLockKey;
	jref F_mobCapcha;
	jref F_magicTree;
	jint F_dR;
	jref F_cmdDoiCo;
	jref F_cmdLogOut;
	jref F_cmdChatTheGioi;
	jref F_cmdshowInfo;
	jref F_cmdMenu;
	jbool F_isPointerDowning;
	jbool F_isChangingCameraMode;
	jint F_ptLastDownX;
	jint F_ptLastDownY;
	jint F_ptFirstDownX;
	jint F_ptFirstDownY;
	jint F_ptDownTime;
	jbool F_disableSingleClick;
	jlong F_lastSingleClick;
	jbool F_clickMoving;
	jbool F_clickOnTileTop;
	jint F_clickToX;
	jint F_clickToY;
	jint F_lastClickCMX;
	jint F_lastClickCMY;
	jlong F_lastFire;
	jlong F_lastUsePotion;
	jint F_auto;
	jint F_dem;
	jbool F_isFreez;
	jbool F_isUseFreez;
	jbool F_isRongThanXuatHien;
	jbool F_isRongNamek;
	jbool F_isSuperPower;
	jint F_tPower;
	jint F_xPower;
	jint F_yPower;
	jint F_dxPower;
	jbool F_activeRongThan;
	jbool F_isMeCallRongThan;
	jint F_mautroi;
	jint F_mapRID;
	jint F_yR;
	jint F_bgRID;
	jint F_tam;
	jint F_timeSkill;
	jint F_nSkill;
	jint F_selectedIndexSkill;
	jref F_lastSkill;
	jref F_strCapcha;
	jbool F_flareFindFocus;
	jint F_flareTime;
	jint F_keyTouchSkill;
	jint F_runArrow;
	jref F_keyCapcha;
	jref F_keyInput;
	jint F_eL;
	jlong F_dMP;
	jlong F_twMp;
	jbool F_isInjureMp;
	jlong F_dHP;
	jlong F_twHp;
	jbool F_isInjureHp;
	jlong F_curr;
	jlong F_last;
	jint F_secondVS;
	jint F_imgScrW;
	jref F_cmdDead;
	jref F_popUpYesNo;
	jbool F_isFireWorks;
	jref F_winnumber;
	jref F_randomNumber;
	jref F_tMove;
	jref F_moveCount;
	jref F_delayMove;
	jint F_moveIndex;
	jref F_strFinish;
	jint F_tShow;
	jint F_xChatVip;
	jint F_currChatWidth;
	jbool F_startChat;
	jbyte F_percentMabu;
	jbool F_mabuEff;
	jint F_tMabuEff;
	jref F_yourNumber;
	jref F_strPaint;
} nro_GameScr;

extern Class class_nro_GameScr;

extern jbool SF_nro_GameScr_isPaintOther;
extern jbool SF_nro_GameScr_isLoadAllData;
extern jobject SF_nro_GameScr_instance;
extern jint SF_nro_GameScr_gW;
extern jint SF_nro_GameScr_gH;
extern jint SF_nro_GameScr_gW2;
extern jint SF_nro_GameScr_gssw;
extern jint SF_nro_GameScr_gssh;
extern jint SF_nro_GameScr_gH23;
extern jint SF_nro_GameScr_gW23;
extern jint SF_nro_GameScr_gH2;
extern jint SF_nro_GameScr_gW34;
extern jint SF_nro_GameScr_gH34;
extern jint SF_nro_GameScr_gW6;
extern jint SF_nro_GameScr_cmx;
extern jint SF_nro_GameScr_cmy;
extern jint SF_nro_GameScr_cmvx;
extern jint SF_nro_GameScr_cmvy;
extern jint SF_nro_GameScr_cmdx;
extern jint SF_nro_GameScr_cmdy;
extern jint SF_nro_GameScr_cmtoX;
extern jint SF_nro_GameScr_cmtoY;
extern jint SF_nro_GameScr_cmxLim;
extern jint SF_nro_GameScr_cmyLim;
extern jint SF_nro_GameScr_gssx;
extern jint SF_nro_GameScr_gssy;
extern jint SF_nro_GameScr_gssxe;
extern jint SF_nro_GameScr_gssye;
extern jint SF_nro_GameScr_hpPotion;
extern jobject SF_nro_GameScr_sks;
extern jobject SF_nro_GameScr_arrs;
extern jobject SF_nro_GameScr_darts;
extern jobject SF_nro_GameScr_parts;
extern jobject SF_nro_GameScr_efs;
extern jint SF_nro_GameScr_lockTick;
extern jobject SF_nro_GameScr_vClan;
extern jobject SF_nro_GameScr_vFriend;
extern jobject SF_nro_GameScr_vEnemies;
extern jobject SF_nro_GameScr_vCharInMap;
extern jobject SF_nro_GameScr_vItemMap;
extern jobject SF_nro_GameScr_vMobAttack;
extern jobject SF_nro_GameScr_vMob;
extern jobject SF_nro_GameScr_vNpc;
extern jobject SF_nro_GameScr_vFlag;
extern jobject SF_nro_GameScr_nClasss;
extern jint SF_nro_GameScr_indexSize;
extern jint SF_nro_GameScr_indexRow;
extern jint SF_nro_GameScr_indexMenu;
extern jobject SF_nro_GameScr_scrInfo;
extern jobject SF_nro_GameScr_scrMain;
extern jint SF_nro_GameScr_indexMenu1;
extern jbool SF_nro_GameScr_isTypeXu;
extern jbool SF_nro_GameScr_isViewNext;
extern jbool SF_nro_GameScr_isViewClanMemOnline;
extern jbool SF_nro_GameScr_isViewClanInvite;
extern jbool SF_nro_GameScr_isChop;
extern jbool SF_nro_GameScr_titleInputText;
extern jbool SF_nro_GameScr_tickMove;
extern jbool SF_nro_GameScr_isHaveSelectSkill;
extern jbool SF_nro_GameScr_isPaintTask;
extern jbool SF_nro_GameScr_isPaintItemInfo;
extern jbool SF_nro_GameScr_isHaveSelectSkill1;
extern jbool SF_nro_GameScr_isPaintSkill;
extern jbool SF_nro_GameScr_isPaintInfoMe;
extern jbool SF_nro_GameScr_isPaintStore;
extern jbool SF_nro_GameScr_isPaintNonNam;
extern jbool SF_nro_GameScr_isPaintNonNu;
extern jbool SF_nro_GameScr_isPaintAoNam;
extern jbool SF_nro_GameScr_isPaintAoNu;
extern jbool SF_nro_GameScr_isPaintGangTayNam;
extern jbool SF_nro_GameScr_isPaintGangTayNu;
extern jbool SF_nro_GameScr_isPaintQuanNam;
extern jbool SF_nro_GameScr_isPaintQuanNu;
extern jbool SF_nro_GameScr_isPaintGiayNam;
extern jbool SF_nro_GameScr_isPaintGiayNu;
extern jbool SF_nro_GameScr_isPaintLien;
extern jbool SF_nro_GameScr_isPaintNhan;
extern jbool SF_nro_GameScr_isPaintNgocBoi;
extern jbool SF_nro_GameScr_isPaintPhu;
extern jbool SF_nro_GameScr_isPaintWeapon;
extern jbool SF_nro_GameScr_isPaintStack;
extern jbool SF_nro_GameScr_isPaintStackLock;
extern jbool SF_nro_GameScr_isPaintGrocery;
extern jbool SF_nro_GameScr_isPaintGroceryLock;
extern jbool SF_nro_GameScr_isPaintUpGrade;
extern jbool SF_nro_GameScr_isPaintConvert;
extern jbool SF_nro_GameScr_isPaintUpGradeGold;
extern jbool SF_nro_GameScr_isPaintUpPearl;
extern jbool SF_nro_GameScr_isPaintBox;
extern jbool SF_nro_GameScr_isPaintSplit;
extern jobject SF_nro_GameScr_currentCharViewInfo;
extern jobject SF_nro_GameScr_exps;
extern jobject SF_nro_GameScr_tasks;
extern jobject SF_nro_GameScr_mapTasks;
extern jobject SF_nro_GameScr_imgRoomStat;
extern jobject SF_nro_GameScr_frBarPow0;
extern jobject SF_nro_GameScr_frBarPow1;
extern jobject SF_nro_GameScr_frBarPow2;
extern jobject SF_nro_GameScr_frBarPow20;
extern jobject SF_nro_GameScr_frBarPow21;
extern jobject SF_nro_GameScr_frBarPow22;
extern jbyte SF_nro_GameScr_vcData;
extern jbyte SF_nro_GameScr_vcMap;
extern jbyte SF_nro_GameScr_vcSkill;
extern jbyte SF_nro_GameScr_vcItem;
extern jbyte SF_nro_GameScr_vsData;
extern jbyte SF_nro_GameScr_vsMap;
extern jbyte SF_nro_GameScr_vsSkill;
extern jbyte SF_nro_GameScr_vsItem;
extern jobject SF_nro_GameScr_imgChat;
extern jobject SF_nro_GameScr_imgChat2;
extern jobject SF_nro_GameScr_imgMenu;
extern jobject SF_nro_GameScr_imgFocus;
extern jobject SF_nro_GameScr_imgFocus2;
extern jobject SF_nro_GameScr_imgSkill;
extern jobject SF_nro_GameScr_imgSkill2;
extern jobject SF_nro_GameScr_imgHP1;
extern jobject SF_nro_GameScr_imgHP2;
extern jobject SF_nro_GameScr_imgHP3;
extern jobject SF_nro_GameScr_imgHP4;
extern jobject SF_nro_GameScr_imgFire0;
extern jobject SF_nro_GameScr_imgFire1;
extern jobject SF_nro_GameScr_imgNR1;
extern jobject SF_nro_GameScr_imgNR2;
extern jobject SF_nro_GameScr_imgNR3;
extern jobject SF_nro_GameScr_imgNR4;
extern jobject SF_nro_GameScr_imgLbtn;
extern jobject SF_nro_GameScr_imgLbtnFocus;
extern jobject SF_nro_GameScr_imgLbtnFocus2;
extern jobject SF_nro_GameScr_imgLbtn2;
extern jobject SF_nro_GameScr_imgAnalog1;
extern jobject SF_nro_GameScr_imgAnalog2;
extern jbyte SF_nro_GameScr_typeActive;
extern jobject SF_nro_GameScr_info1;
extern jobject SF_nro_GameScr_info2;
extern jobject SF_nro_GameScr_imgPanel;
extern jobject SF_nro_GameScr_imgPanel2;
extern jobject SF_nro_GameScr_imgHP;
extern jobject SF_nro_GameScr_imgMP;
extern jobject SF_nro_GameScr_imgSP;
extern jobject SF_nro_GameScr_imgHPLost;
extern jobject SF_nro_GameScr_imgMPLost;
extern jobject SF_nro_GameScr_imgHP_tm_do;
extern jobject SF_nro_GameScr_imgHP_tm_vang;
extern jobject SF_nro_GameScr_imgHP_tm_xam;
extern jobject SF_nro_GameScr_imgHP_tm_xanh;
extern jint SF_nro_GameScr_countEff;
extern jobject SF_nro_GameScr_gamePad;
extern jint SF_nro_GameScr_isAnalog;
extern jobject SF_nro_GameScr_img_ct_bar_0;
extern jobject SF_nro_GameScr_keySkill;
extern jobject SF_nro_GameScr_onScreenSkill;
extern jint SF_nro_GameScr_wSkill;
extern jlong SF_nro_GameScr_deltaTime;
extern jbool SF_nro_GameScr_isNewClanMessage;
extern jobject SF_nro_GameScr_imgTrans;
extern jint SF_nro_GameScr_shock_scr1;
extern jbool SF_nro_GameScr_isAutoPlay;
extern jbool SF_nro_GameScr_canAutoPlay;
extern jbool SF_nro_GameScr_isChangeZone;
extern jlong SF_nro_GameScr_lastTick;
extern jlong SF_nro_GameScr_currTick;
extern jlong SF_nro_GameScr_lastXS;
extern jlong SF_nro_GameScr_currXS;
extern jint SF_nro_GameScr_secondXS;
extern jint SF_nro_GameScr_isPaintRada;
extern jobject SF_nro_GameScr_imgNut;
extern jobject SF_nro_GameScr_imgNutF;
extern jobject SF_nro_GameScr_imgCapcha;
extern jint SF_nro_GameScr_disXC;
extern jbool SF_nro_GameScr_isPaint;
extern jint SF_nro_GameScr_shock_scr;
extern jobject SF_nro_GameScr_shock_x;
extern jobject SF_nro_GameScr_shock_y;
extern jobject SF_nro_GameScr_textTime;
extern jobject SF_nro_GameScr_arrow;
extern jint SF_nro_GameScr_yTouchBar;
extern jint SF_nro_GameScr_xC;
extern jint SF_nro_GameScr_yC;
extern jint SF_nro_GameScr_xF;
extern jint SF_nro_GameScr_yF;
extern jint SF_nro_GameScr_xHP;
extern jint SF_nro_GameScr_yHP;
extern jint SF_nro_GameScr_xTG;
extern jint SF_nro_GameScr_yTG;
extern jobject SF_nro_GameScr_xS;
extern jobject SF_nro_GameScr_yS;
extern jint SF_nro_GameScr_xSkill;
extern jint SF_nro_GameScr_ySkill;
extern jobject SF_nro_GameScr_bF;
extern jobject SF_nro_GameScr_flyTextX;
extern jobject SF_nro_GameScr_flyTextY;
extern jobject SF_nro_GameScr_flyTextYTo;
extern jobject SF_nro_GameScr_flyTextDx;
extern jobject SF_nro_GameScr_flyTextDy;
extern jobject SF_nro_GameScr_flyTextState;
extern jobject SF_nro_GameScr_flyTextColor;
extern jobject SF_nro_GameScr_flyTime;
extern jobject SF_nro_GameScr_splashX;
extern jobject SF_nro_GameScr_splashY;
extern jobject SF_nro_GameScr_splashState;
extern jobject SF_nro_GameScr_splashF;
extern jobject SF_nro_GameScr_splashDir;
extern jobject SF_nro_GameScr_imgSplash;
extern jint SF_nro_GameScr_cmdBarX;
extern jint SF_nro_GameScr_cmdBarY;
extern jlong SF_nro_GameScr_hpBarW;
extern jint SF_nro_GameScr_popupX;
extern jint SF_nro_GameScr_popupY;
extern jint SF_nro_GameScr_popupW;
extern jint SF_nro_GameScr_popupH;
extern jint SF_nro_GameScr_cmySK;
extern jint SF_nro_GameScr_cmtoYSK;
extern jint SF_nro_GameScr_cmdySK;
extern jint SF_nro_GameScr_cmvySK;
extern jbool SF_nro_GameScr_notPaint;
extern jbool SF_nro_GameScr_isPing;
extern jobject SF_nro_GameScr_vChatVip;
extern jbool SF_nro_GameScr_isPaintChatVip;
extern jbyte SF_nro_GameScr_mabuPercent;
extern jbyte SF_nro_GameScr_isNewMember;
extern jobject SF_nro_GameScr_imgHP_NEW;
extern jobject SF_nro_GameScr_phuban_Info;
extern jobject SF_nro_GameScr_fra_PVE_Bar_0;
extern jobject SF_nro_GameScr_fra_PVE_Bar_1;
extern jobject SF_nro_GameScr_imgVS;
extern jobject SF_nro_GameScr_imgBall;
extern jobject SF_nro_GameScr_imgKhung;
extern jobject SF_nro_GameScr_imgBgIOS;
extern jint SF_nro_GameScr_nCT_TeamB;
extern jint SF_nro_GameScr_nCT_TeamA;
extern jlong SF_nro_GameScr_nCT_timeBallte;
extern jobject SF_nro_GameScr_nCT_team;
extern jint SF_nro_GameScr_nCT_nBoyBaller;
extern jbool SF_nro_GameScr_isPaint_CT;
extern jbyte SF_nro_GameScr_nCT_floor;
extern jobject SF_nro_GameScr_res_CT;
extern jint SF_nro_GameScr_nTop;
extern jbool SF_nro_GameScr_isPickNgocRong;
extern jint SF_nro_GameScr_nUSER_CT;
extern jint SF_nro_GameScr_nUSER_MAX_CT;
extern jbool SF_nro_GameScr_isudungCapsun4;
extern jbool SF_nro_GameScr_isudungCapsun3;

#define VTABLE_nro_GameScr_hashCode_R_int 0
typedef jint (*func_nro_GameScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_GameScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_GameScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_GameScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_GameScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_finalize 5
typedef void (*func_nro_GameScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_notify 6
typedef void (*func_nro_GameScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_notifyAll 7
typedef void (*func_nro_GameScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_wait 8
typedef void (*func_nro_GameScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_wait_long 9
typedef void (*func_nro_GameScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_GameScr_wait_long_int 10
typedef void (*func_nro_GameScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_GameScr_switchToMe 11
typedef void (*func_nro_GameScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_keyPress_int 12
typedef void (*func_nro_GameScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_GameScr_update 13
typedef void (*func_nro_GameScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_updateKey 14
typedef void (*func_nro_GameScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_paint_lib_mGraphics 15
typedef void (*func_nro_GameScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_onChatFromMe_java_lang_String_java_lang_String 16
typedef void (*func_nro_GameScr_onChatFromMe_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_GameScr_onCancelChat 17
typedef void (*func_nro_GameScr_onCancelChat)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_readPart 18
typedef void (*func_nro_GameScr_readPart)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_onOSkill_Array1_byte 19
typedef void (*func_nro_GameScr_onOSkill_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_onKSkill_Array1_byte 20
typedef void (*func_nro_GameScr_onKSkill_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_onCSkill_Array1_byte 21
typedef void (*func_nro_GameScr_onCSkill_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_loadGameScr 22
typedef void (*func_nro_GameScr_loadGameScr)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_clanInvite_java_lang_String_int_int 23
typedef void (*func_nro_GameScr_clanInvite_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_GameScr_playerMenu 24
typedef void (*func_nro_GameScr_playerMenu)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_checkSkillValid_R_boolean 25
typedef jbool (*func_nro_GameScr_checkSkillValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_checkSkillValid_boolean_R_boolean 26
typedef jbool (*func_nro_GameScr_checkSkillValid_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_GameScr_resetButton 27
typedef void (*func_nro_GameScr_resetButton)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_canSwitchTargetByKey_R_boolean 28
typedef jbool (*func_nro_GameScr_canSwitchTargetByKey_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_findClickToItem_int_int_R_nro_IMapObject 29
typedef jobject (*func_nro_GameScr_findClickToItem_int_int_R_nro_IMapObject)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_GameScr_checkClickToBotton_nro_IMapObject_R_boolean 30
typedef jbool (*func_nro_GameScr_checkClickToBotton_nro_IMapObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_doDoubleClickToObj_nro_IMapObject 31
typedef void (*func_nro_GameScr_doDoubleClickToObj_nro_IMapObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_doDoubleClickToObj_nro_IMapObject_boolean 32
typedef void (*func_nro_GameScr_doDoubleClickToObj_nro_IMapObject_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_nro_GameScr_checkClipTopChatPopUp_int_int_R_boolean 33
typedef jbool (*func_nro_GameScr_checkClipTopChatPopUp_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_GameScr_checkClickToPopup_int_int_R_boolean 34
typedef jbool (*func_nro_GameScr_checkClickToPopup_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_GameScr_checkClickMoveTo_int_int 35
typedef void (*func_nro_GameScr_checkClickMoveTo_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_GameScr_doUseHP 36
typedef void (*func_nro_GameScr_doUseHP)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_usePorata 37
typedef void (*func_nro_GameScr_usePorata)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_activeSuperPower_int_int 38
typedef void (*func_nro_GameScr_activeSuperPower_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_GameScr_activeRongThanEff_boolean 39
typedef void (*func_nro_GameScr_activeRongThanEff_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_GameScr_hideRongThanEff 40
typedef void (*func_nro_GameScr_hideRongThanEff)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_doiMauTroi 41
typedef void (*func_nro_GameScr_doiMauTroi)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_callRongThan_int_int 42
typedef void (*func_nro_GameScr_callRongThan_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_GameScr_doFire_boolean_boolean 43
typedef void (*func_nro_GameScr_doFire_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_nro_GameScr_doFire_boolean_boolean_boolean 44
typedef void (*func_nro_GameScr_doFire_boolean_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2);
#define VTABLE_nro_GameScr_pickItem 45
typedef void (*func_nro_GameScr_pickItem)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_pickItem_boolean 46
typedef void (*func_nro_GameScr_pickItem_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_GameScr_isCharging_R_boolean 47
typedef jbool (*func_nro_GameScr_isCharging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_doSelectSkill_nro_Skill_boolean 48
typedef void (*func_nro_GameScr_doSelectSkill_nro_Skill_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_nro_GameScr_doSelectSkill_nro_Skill_boolean_boolean 49
typedef void (*func_nro_GameScr_doSelectSkill_nro_Skill_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
#define VTABLE_nro_GameScr_doUseSkill_nro_Skill_boolean 50
typedef void (*func_nro_GameScr_doUseSkill_nro_Skill_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean 51
typedef void (*func_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
#define VTABLE_nro_GameScr_doUseSkillNotFocus_nro_Skill_boolean 52
typedef void (*func_nro_GameScr_doUseSkillNotFocus_nro_Skill_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_nro_GameScr_updateKeyTouchCapcha 53
typedef void (*func_nro_GameScr_updateKeyTouchCapcha)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_isRongThanMenu_R_boolean 54
typedef jbool (*func_nro_GameScr_isRongThanMenu_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_paintXoSo_lib_mGraphics 55
typedef void (*func_nro_GameScr_paintXoSo_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_paintImageBarRight_lib_mGraphics_nro_Char 56
typedef void (*func_nro_GameScr_paintImageBarRight_lib_mGraphics_nro_Char)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_GameScr_paintImageBar_lib_mGraphics_boolean_nro_Char 57
typedef void (*func_nro_GameScr_paintImageBar_lib_mGraphics_boolean_nro_Char)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_nro_GameScr_starVS 58
typedef void (*func_nro_GameScr_starVS)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_findCharVS2_R_nro_Char 59
typedef jobject (*func_nro_GameScr_findCharVS2_R_nro_Char)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_paintInfoBar_lib_mGraphics 60
typedef void (*func_nro_GameScr_paintInfoBar_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_isVS_R_boolean 61
typedef jbool (*func_nro_GameScr_isVS_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_paintSelectedSkill_lib_mGraphics 62
typedef void (*func_nro_GameScr_paintSelectedSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_isNotPaintTouchControl_R_boolean 63
typedef jbool (*func_nro_GameScr_isNotPaintTouchControl_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_GameScr_openUIZone_nro_Message 64
typedef void (*func_nro_GameScr_openUIZone_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_startYesNoPopUp_java_lang_String_nro_Command_nro_Command 65
typedef void (*func_nro_GameScr_startYesNoPopUp_java_lang_String_nro_Command_nro_Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_nro_GameScr_player_vs_player_int_java_lang_String_byte 66
typedef void (*func_nro_GameScr_player_vs_player_int_java_lang_String_byte)(jcontext ctx, jobject self, jint param0, jobject param1, jbyte param2);
#define VTABLE_nro_GameScr_giaodich_int 67
typedef void (*func_nro_GameScr_giaodich_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_GameScr_perform_int_java_lang_Object 68
typedef void (*func_nro_GameScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_GameScr_showWinNumber_java_lang_String_java_lang_String 69
typedef void (*func_nro_GameScr_showWinNumber_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_GameScr_chatVip_java_lang_String 70
typedef void (*func_nro_GameScr_chatVip_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_showYourNumber_java_lang_String 71
typedef void (*func_nro_GameScr_showYourNumber_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_GameScr_paint_CT_lib_mGraphics_int_int 72
typedef void (*func_nro_GameScr_paint_CT_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_nro_GameScr(jobject object, jint mark, jint depth);
void clinit_nro_GameScr(jcontext ctx);
void M_nro_GameScr_readPart(jcontext ctx, jobject self);
void SM_nro_GameScr_paintOngMauPercent_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_float_float_int_float_lib_mGraphics(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jint param5, jfloat param6, jobject param7);
jbool SM_nro_GameScr_isMapDocNhan_R_boolean(jcontext ctx);
jbool SM_nro_GameScr_isMapFize_R_boolean(jcontext ctx);
void M_nro_GameScr_switchToMe(jcontext ctx, jobject self);
void SM_nro_GameScr_resetAllvector(jcontext ctx);
void M_nro_GameScr_onOSkill_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_onKSkill_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_onCSkill_Array1_byte(jcontext ctx, jobject self, jobject param0);
void SM_nro_GameScr_doSetOnScreenSkill_nro_SkillTemplate(jcontext ctx, jobject param0);
void SM_nro_GameScr_doSetKeySkill_nro_SkillTemplate(jcontext ctx, jobject param0);
void SM_nro_GameScr_saveonScreenSkillToRMS(jcontext ctx);
void SM_nro_GameScr_saveKeySkillToRMS(jcontext ctx);
jbool SM_nro_GameScr_isBagFull_R_boolean(jcontext ctx);
void SM_nro_GameScr_createMenu_Array1_java_lang_String_nro_Npc(jcontext ctx, jobject param0, jobject param1);
void SM_nro_GameScr_readEfect(jcontext ctx);
void SM_nro_GameScr_readArrow(jcontext ctx);
void SM_nro_GameScr_readDart(jcontext ctx);
void SM_nro_GameScr_readSkill(jcontext ctx);
void SM_nro_GameScr_readOk(jcontext ctx);
jobject SM_nro_GameScr_gI_R_nro_GameScr(jcontext ctx);
void SM_nro_GameScr_clearGameScr(jcontext ctx);
void M_nro_GameScr_loadGameScr(jcontext ctx, jobject self);
void init_nro_GameScr(jcontext ctx, jobject self);
void SM_nro_GameScr_SetNum_int_int(jcontext ctx, jint param0, jint param1);
void SM_nro_GameScr_setSkillBarPosition(jcontext ctx);
void M_nro_GameScr_clanInvite_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_GameScr_playerMenu(jcontext ctx, jobject self);
jbool SM_nro_GameScr_isMeCanAttackMob_nro_Mob_R_boolean(jcontext ctx, jobject param0);
jbool M_nro_GameScr_checkSkillValid_R_boolean(jcontext ctx, jobject self);
jbool M_nro_GameScr_checkSkillValid_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
void SM_nro_GameScr_clearInputIfManual_boolean(jcontext ctx, jbool param0);
void M_nro_GameScr_resetButton(jcontext ctx, jobject self);
jbool M_nro_GameScr_canSwitchTargetByKey_R_boolean(jcontext ctx, jobject self);
void M_nro_GameScr_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_GameScr_updateKey(jcontext ctx, jobject self);
jobject M_nro_GameScr_findClickToItem_int_int_R_nro_IMapObject(jcontext ctx, jobject self, jint param0, jint param1);
jbool SM_nro_GameScr_inRectangle_int_int_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jbool M_nro_GameScr_checkClickToBotton_nro_IMapObject_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_doDoubleClickToObj_nro_IMapObject(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_doDoubleClickToObj_nro_IMapObject_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_nro_GameScr_checkClipTopChatPopUp_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_nro_GameScr_checkClickToPopup_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_GameScr_checkClickMoveTo_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_GameScr_doUseHP(jcontext ctx, jobject self);
jobject SM_nro_GameScr_getPorataItem_R_nro_Item(jcontext ctx);
void M_nro_GameScr_usePorata(jcontext ctx, jobject self);
void M_nro_GameScr_activeSuperPower_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_GameScr_activeRongThanEff_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_GameScr_hideRongThanEff(jcontext ctx, jobject self);
void M_nro_GameScr_doiMauTroi(jcontext ctx, jobject self);
void M_nro_GameScr_callRongThan_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_GameScr_doFire_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_nro_GameScr_doFire_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2);
void M_nro_GameScr_pickItem(jcontext ctx, jobject self);
void M_nro_GameScr_pickItem_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_nro_GameScr_isCharging_R_boolean(jcontext ctx, jobject self);
void M_nro_GameScr_doSelectSkill_nro_Skill_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_nro_GameScr_doSelectSkill_nro_Skill_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
void M_nro_GameScr_doUseSkill_nro_Skill_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
void M_nro_GameScr_doUseSkillNotFocus_nro_Skill_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void SM_nro_GameScr_sortSkill(jcontext ctx);
void M_nro_GameScr_updateKeyTouchCapcha(jcontext ctx, jobject self);
void M_nro_GameScr_update(jcontext ctx, jobject self);
jbool M_nro_GameScr_isRongThanMenu_R_boolean(jcontext ctx, jobject self);
void SM_nro_GameScr_paintEffect_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_GameScr_paintBgItem_lib_mGraphics_int(jcontext ctx, jobject param0, jint param1);
void SM_nro_GameScr_paintBlackSky_lib_mGraphics(jcontext ctx, jobject param0);
void M_nro_GameScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_paintXoSo_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
jobject SM_nro_GameScr_findNPCInMap_short_R_nro_Npc(jcontext ctx, jshort param0);
jobject SM_nro_GameScr_findCharInMap_int_R_nro_Char(jcontext ctx, jint param0);
jobject SM_nro_GameScr_findMobInMap_int_R_nro_Mob(jcontext ctx, jint param0);
jobject SM_nro_GameScr_findMobInMap_byte_R_nro_Mob(jcontext ctx, jbyte param0);
jobject SM_nro_GameScr_getNpcTask_R_nro_Npc(jcontext ctx);
void SM_nro_GameScr_paintArrowPointToNPC_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_GameScr_resetTranslate_lib_mGraphics(jcontext ctx, jobject param0);
void M_nro_GameScr_paintImageBarRight_lib_mGraphics_nro_Char(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_GameScr_paintImageBar_lib_mGraphics_boolean_nro_Char(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
void M_nro_GameScr_starVS(jcontext ctx, jobject self);
jobject SM_nro_GameScr_findCharVS1_R_nro_Char(jcontext ctx);
jobject M_nro_GameScr_findCharVS2_R_nro_Char(jcontext ctx, jobject self);
void M_nro_GameScr_paintInfoBar_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
jbool M_nro_GameScr_isVS_R_boolean(jcontext ctx, jobject self);
void M_nro_GameScr_paintSelectedSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void SM_nro_GameScr_startFlyText_java_lang_String_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jbool SM_nro_GameScr_startSplash_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2);
void SM_nro_GameScr_paintSplash_lib_mGraphics(jcontext ctx, jobject param0);
jbool M_nro_GameScr_isNotPaintTouchControl_R_boolean(jcontext ctx, jobject self);
void SM_nro_GameScr_setPopupSize_int_int(jcontext ctx, jint param0, jint param1);
void SM_nro_GameScr_loadImg(jcontext ctx);
jint SM_nro_GameScr_getTaskMapId_R_int(jcontext ctx);
jbyte SM_nro_GameScr_getTaskNpcId_R_byte(jcontext ctx);
void M_nro_GameScr_onChatFromMe_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_GameScr_onCancelChat(jcontext ctx, jobject self);
void M_nro_GameScr_openUIZone_nro_Message(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_startYesNoPopUp_java_lang_String_nro_Command_nro_Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_nro_GameScr_player_vs_player_int_java_lang_String_byte(jcontext ctx, jobject self, jint param0, jobject param1, jbyte param2);
void M_nro_GameScr_giaodich_int(jcontext ctx, jobject self, jint param0);
void SM_nro_GameScr_getFlagImage_int_byte(jcontext ctx, jint param0, jbyte param1);
void M_nro_GameScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_GameScr_showWinNumber_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_GameScr_chatVip_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_GameScr_showYourNumber_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool SM_nro_GameScr_ispaintPhubangBar_R_boolean(jcontext ctx);
void SM_nro_GameScr_paintPhuBanBar_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_nro_GameScr_paintChienTruong_Life_lib_mGraphics_int_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jshort param7, jobject param8);
void SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(jcontext ctx, jint param0, jint param1, jint param2, jobject param3, jobject param4, jint param5, jshort param6, jshort param7);
void SM_nro_GameScr_addEffect2Vector_nro_Effect_End(jcontext ctx, jobject param0);
void SM_nro_GameScr_paint_xp_bar_lib_mGraphics(jcontext ctx, jobject param0);
void M_nro_GameScr_paint_CT_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void SM_nro_GameScr_paint_board_CT_lib_mGraphics_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
