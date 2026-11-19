#ifndef HEADER_nro_Panel
#define HEADER_nro_Panel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"
#include "nro/IChatable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Panel {
	java_lang_Object parent;
	jbool F_isShow;
	jint F_X;
	jint F_Y;
	jint F_W;
	jint F_H;
	jint F_ITEM_HEIGHT;
	jint F_TAB_W;
	jint F_TAB_W_NEW;
	jint F_cmtoY;
	jint F_cmy;
	jint F_cmdy;
	jint F_cmvy;
	jint F_cmyLim;
	jref F_cmyLast;
	jint F_cmtoX;
	jint F_cmx;
	jint F_cmxMap;
	jint F_cmxLim;
	jint F_xc1;
	jint F_cmyMap;
	jint F_cmxMapLim;
	jref F_tabIcon;
	jref F_vItemCombine;
	jint F_moneyGD;
	jint F_friendMoneyGD;
	jbool F_isLock;
	jbool F_isFriendLock;
	jbool F_isAccept;
	jref F_topName;
	jref F_chatTField;
	jref F_left;
	jint F_type;
	jint F_currentTabIndex;
	jint F_startTabPos;
	jref F_lastTabIndex;
	jref F_currentTabName;
	jref F_currClanOption;
	jref F_mainTabName;
	jref F_shopTabPos;
	jref F_boxTabPos;
	jref F_shopTabName;
	jref F_maxPageShop;
	jref F_currPageShop;
	jref F_tabName;
	jint F_hasUse;
	jint F_currentListLength;
	jref F_lastSelect;
	jref F_currItem;
	jref F_currClan;
	jref F_currMess;
	jref F_currMem;
	jref F_clans;
	jref F_member;
	jref F_myMember;
	jref F_logChat;
	jref F_vPlayerMenu;
	jref F_vFriend;
	jref F_vFriendGD;
	jref F_vMyGD;
	jref F_vTop;
	jref F_vEnemy;
	jref F_vFlag;
	jref F_vPlayerMenu_id;
	jref F_cmdClose;
	jint F_position;
	jref F_charMenu;
	jbool F_bI;
	jint F_typeShop;
	jint F_indexBoss;
	jint F_xScroll;
	jint F_yScroll;
	jint F_wScroll;
	jint F_hScroll;
	jref F_cp;
	jint F_idIcon;
	jref F_partID;
	jint F_timeShow;
	jbool F_isBoxClan;
	jint F_selected;
	jint F_cSelected;
	jint F_newSelected;
	jbool F_isClanOption;
	jbool F_isSearchClan;
	jbool F_isMessage;
	jbool F_isViewMember;
	jint F_pointerDownTime;
	jint F_pointerDownFirstX;
	jref F_pointerDownLastX;
	jbool F_pointerIsDowning;
	jbool F_isDownWhenRunning;
	jint F_waitToPerform;
	jint F_cmRun;
	jint F_waitToPerform1;
	jint F_keyTouchLock;
	jbool F_trans;
	jint F_pX;
	jint F_pY;
	jint F_indexMouse;
	jint F_keyTouchMapButton;
	jbool F_justRelease;
	jint F_nTableItem;
	jref F_clansOption;
	jref F_clanInfo;
	jref F_clanReport;
	jref F_scroll;
	jint F_cmvx;
	jint F_cmdx;
	jbool F_isSelectPlayerMenu;
	jref F_strStatus;
	jint F_log;
	jref F_zoneColor;
	jref F_combineInfo;
	jref F_combineTopInfo;
	jint F_sellectInventory;
	jref F_itemInvenNew;
	jint F_xStart;
	jint F_yStart;
	jint F_isUp;
	jint F_compare;
	jint F_indexRowMax;
	jint F_ystart1;
	jint F_yPaint;
	jint F_xMap;
	jint F_yMap;
	jint F_xMove;
	jint F_yMove;
	jbool F_isClose;
	jint F_cmyLimSK;
	jbool F_isViewChatServer;
	jint F_currInfoItem;
	jref F_charInfo;
	jbool F_isChangeZone;
	jbool F_isKiguiXu;
	jbool F_isKiguiLuong;
	jint F_delayKigui;
	jref F_pendingAutoBuyItem;
	jbyte F_pendingAutoBuyType;
	jref F_pendingAutoUseItem;
	jint F_pendingAutoUseQuantity;
	jbyte F_combineSuccess;
	jint F_idNPC;
	jint F_xS;
	jint F_yS;
	jint F_rS;
	jint F_angleS;
	jint F_angleO;
	jint F_iAngleS;
	jint F_iDotS;
	jint F_speed;
	jref F_xArgS;
	jref F_yArgS;
	jref F_xDotS;
	jref F_yDotS;
	jint F_time;
	jint F_typeCombine;
	jint F_countUpdate;
	jint F_countR;
	jint F_countWait;
	jbool F_isSpeedCombine;
	jbool F_isCompleteEffCombine;
	jbool F_isPaintCombine;
	jbool F_isDoneCombine;
	jshort F_iconID1;
	jshort F_iconID3;
	jshort F_iconID2;
	jref F_iconID;
	jref F_speacialTabName;
	jref F_imgo_0;
	jref F_imgo_1;
	jref F_imgo_2;
	jref F_imgo_3;
	jbyte F_size_tab;
	jbool F_isnewInventory;
	jlong F_lastItemActionMs;
	jint F_lastItemActionKey;
} nro_Panel;

extern Class class_nro_Panel;

extern jobject SF_nro_Panel_imgBantay;
extern jobject SF_nro_Panel_imgMap;
extern jobject SF_nro_Panel_specialInfo;
extern jshort SF_nro_Panel_spearcialImage;
extern jobject SF_nro_Panel_imgStar;
extern jobject SF_nro_Panel_imgMaxStar;
extern jobject SF_nro_Panel_imgStar8;
extern jobject SF_nro_Panel_imgStar9;
extern jobject SF_nro_Panel_imgNew;
extern jobject SF_nro_Panel_imgTienHoa;
extern jobject SF_nro_Panel_imgXu;
extern jobject SF_nro_Panel_imgTicket;
extern jobject SF_nro_Panel_imgLuong;
extern jobject SF_nro_Panel_imgUp;
extern jobject SF_nro_Panel_imgDown;
extern jobject SF_nro_Panel_strTool;
extern jobject SF_nro_Panel_strCauhinh;
extern jobject SF_nro_Panel_strAccount;
extern jobject SF_nro_Panel_strAuto;
extern jint SF_nro_Panel_graphics;
extern jobject SF_nro_Panel_boxTabName;
extern jobject SF_nro_Panel_boxCombine;
extern jobject SF_nro_Panel_boxZone;
extern jobject SF_nro_Panel_boxMap;
extern jobject SF_nro_Panel_boxGD;
extern jobject SF_nro_Panel_boxPet;
extern jbyte SF_nro_Panel_BOX_BAG;
extern jbyte SF_nro_Panel_BAG_BOX;
extern jbyte SF_nro_Panel_BOX_BODY;
extern jbyte SF_nro_Panel_BODY_BOX;
extern jbyte SF_nro_Panel_BAG_BODY;
extern jbyte SF_nro_Panel_BODY_BAG;
extern jbyte SF_nro_Panel_BAG_PET;
extern jobject SF_nro_Panel_mapIdTraidat;
extern jobject SF_nro_Panel_mapXTraidat;
extern jobject SF_nro_Panel_mapYTraidat;
extern jobject SF_nro_Panel_mapIdNamek;
extern jobject SF_nro_Panel_mapXNamek;
extern jobject SF_nro_Panel_mapYNamek;
extern jobject SF_nro_Panel_mapIdSaya;
extern jobject SF_nro_Panel_mapXSaya;
extern jobject SF_nro_Panel_mapYSaya;
extern jobject SF_nro_Panel_mapId;
extern jobject SF_nro_Panel_mapX;
extern jobject SF_nro_Panel_mapY;
extern jint SF_nro_Panel_WIDTH_PANEL;
extern jbool SF_nro_Panel_CanNapTien;
extern jobject SF_nro_Panel_t_tiemnang;
extern jobject SF_nro_Panel_strWantToBuy;
extern jbool SF_nro_Panel_isPaintMap;
extern jobject SF_nro_Panel_vGameInfo;
extern jobject SF_nro_Panel_contenInfo;
extern jobject SF_nro_Panel_sizeUpgradeEff;
extern jint SF_nro_Panel_nsize;
extern jobject SF_nro_Panel_colorUpgradeEffect;

#define VTABLE_nro_Panel_hashCode_R_int 0
typedef jint (*func_nro_Panel_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Panel_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Panel_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Panel_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_toString_R_java_lang_String 4
typedef jobject (*func_nro_Panel_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_finalize 5
typedef void (*func_nro_Panel_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_notify 6
typedef void (*func_nro_Panel_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_notifyAll 7
typedef void (*func_nro_Panel_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_wait 8
typedef void (*func_nro_Panel_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_wait_long 9
typedef void (*func_nro_Panel_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Panel_wait_long_int 10
typedef void (*func_nro_Panel_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Panel_perform_int_java_lang_Object 11
typedef void (*func_nro_Panel_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_Panel_onChatFromMe_java_lang_String_java_lang_String 12
typedef void (*func_nro_Panel_onChatFromMe_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Panel_onCancelChat 13
typedef void (*func_nro_Panel_onCancelChat)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabTop 14
typedef void (*func_nro_Panel_setTabTop)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setType_int 15
typedef void (*func_nro_Panel_setType_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Panel_setTypeInfomatioin 16
typedef void (*func_nro_Panel_setTypeInfomatioin)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeMap 17
typedef void (*func_nro_Panel_setTypeMap)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeArchivement 18
typedef void (*func_nro_Panel_setTypeArchivement)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeKiGuiOnly 19
typedef void (*func_nro_Panel_setTypeKiGuiOnly)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabKiGui 20
typedef void (*func_nro_Panel_setTabKiGui)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeBodyOnly 21
typedef void (*func_nro_Panel_setTypeBodyOnly)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_addChatMessage_nro_InfoItem 22
typedef void (*func_nro_Panel_addChatMessage_nro_InfoItem)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_setTabPlayerMenu 23
typedef void (*func_nro_Panel_setTabPlayerMenu)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabFlag 24
typedef void (*func_nro_Panel_setTabFlag)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypePlayerMenu_nro_Char 25
typedef void (*func_nro_Panel_setTypePlayerMenu_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_setTypeFriend 26
typedef void (*func_nro_Panel_setTypeFriend)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeEnemy 27
typedef void (*func_nro_Panel_setTypeEnemy)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeTop_byte 28
typedef void (*func_nro_Panel_setTypeTop_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Panel_setTabFriend 29
typedef void (*func_nro_Panel_setTabFriend)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabEnemy 30
typedef void (*func_nro_Panel_setTabEnemy)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeShop_int 31
typedef void (*func_nro_Panel_setTypeShop_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Panel_setTypeBox 32
typedef void (*func_nro_Panel_setTypeBox)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeCombine 33
typedef void (*func_nro_Panel_setTypeCombine)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabCombine 34
typedef void (*func_nro_Panel_setTabCombine)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeAuto 35
typedef void (*func_nro_Panel_setTypeAuto)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypePetMain 36
typedef void (*func_nro_Panel_setTypePetMain)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeMain 37
typedef void (*func_nro_Panel_setTypeMain)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeZone 38
typedef void (*func_nro_Panel_setTypeZone)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_addItemDetail_nro_Item 39
typedef void (*func_nro_Panel_addItemDetail_nro_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_popUpDetailInit_nro_ChatPopup_java_lang_String 40
typedef void (*func_nro_Panel_popUpDetailInit_nro_ChatPopup_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Panel_addMessageDetail_nro_ClanMessage 41
typedef void (*func_nro_Panel_addMessageDetail_nro_ClanMessage)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_addClanMemberDetail_nro_Member 42
typedef void (*func_nro_Panel_addClanMemberDetail_nro_Member)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_addClanDetail_nro_Clan 43
typedef void (*func_nro_Panel_addClanDetail_nro_Clan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_addSkillDetail_nro_SkillTemplate_nro_Skill_nro_Skill 44
typedef void (*func_nro_Panel_addSkillDetail_nro_SkillTemplate_nro_Skill_nro_Skill)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_nro_Panel_show 45
typedef void (*func_nro_Panel_show)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_chatTFUpdateKey 46
typedef void (*func_nro_Panel_chatTFUpdateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_updateKey 47
typedef void (*func_nro_Panel_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabGiaoDich_boolean 48
typedef void (*func_nro_Panel_setTabGiaoDich_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Panel_setTypeGiaoDich_nro_Char 49
typedef void (*func_nro_Panel_setTypeGiaoDich_nro_Char)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintGiaoDich_lib_mGraphics_boolean 50
typedef void (*func_nro_Panel_paintGiaoDich_lib_mGraphics_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_nro_Panel_getCurrClanOtion 51
typedef void (*func_nro_Panel_getCurrClanOtion)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_checkOptionSelect 52
typedef void (*func_nro_Panel_checkOptionSelect)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_updateKeyScrollView 53
typedef void (*func_nro_Panel_updateKeyScrollView)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabPetStatus 54
typedef void (*func_nro_Panel_setTabPetStatus)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabTool 55
typedef void (*func_nro_Panel_setTabTool)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_initTabClans 56
typedef void (*func_nro_Panel_initTabClans)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabClans 57
typedef void (*func_nro_Panel_setTabClans)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_initLogMessage 58
typedef void (*func_nro_Panel_initLogMessage)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabShop 59
typedef void (*func_nro_Panel_setTabShop)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabSkill 60
typedef void (*func_nro_Panel_setTabSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabZone 61
typedef void (*func_nro_Panel_setTabZone)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabBox 62
typedef void (*func_nro_Panel_setTabBox)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabPetInventory 63
typedef void (*func_nro_Panel_setTabPetInventory)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabInventory_boolean 64
typedef void (*func_nro_Panel_setTabInventory_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Panel_moveCamera 65
typedef void (*func_nro_Panel_moveCamera)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_paintTop_lib_mGraphics 66
typedef void (*func_nro_Panel_paintTop_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paint_lib_mGraphics 67
typedef void (*func_nro_Panel_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintShop_lib_mGraphics 68
typedef void (*func_nro_Panel_paintShop_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintPetStatus_lib_mGraphics 69
typedef void (*func_nro_Panel_paintPetStatus_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintPetInventory_lib_mGraphics 70
typedef void (*func_nro_Panel_paintPetInventory_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintScrollArrow_lib_mGraphics 71
typedef void (*func_nro_Panel_paintScrollArrow_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintTools_lib_mGraphics 72
typedef void (*func_nro_Panel_paintTools_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintGameSubInfo_lib_mGraphics 73
typedef void (*func_nro_Panel_paintGameSubInfo_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintGameInfo_lib_mGraphics 74
typedef void (*func_nro_Panel_paintGameInfo_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintSkill_lib_mGraphics 75
typedef void (*func_nro_Panel_paintSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_k_lib_mGraphics 76
typedef void (*func_nro_Panel_k_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_l_lib_mGraphics 77
typedef void (*func_nro_Panel_l_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintZone_lib_mGraphics 78
typedef void (*func_nro_Panel_paintZone_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintSpeacialSkill_lib_mGraphics 79
typedef void (*func_nro_Panel_paintSpeacialSkill_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintBox_lib_mGraphics 80
typedef void (*func_nro_Panel_paintBox_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_W_R_nro_Member 81
typedef jobject (*func_nro_Panel_W_R_nro_Member)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_X_R_nro_ClanMessage 82
typedef jobject (*func_nro_Panel_X_R_nro_ClanMessage)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_Y_R_nro_Clan 83
typedef jobject (*func_nro_Panel_Y_R_nro_Clan)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_paintLogChat_lib_mGraphics 84
typedef void (*func_nro_Panel_paintLogChat_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintFlagChange_lib_mGraphics 85
typedef void (*func_nro_Panel_paintFlagChange_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintEnemy_lib_mGraphics 86
typedef void (*func_nro_Panel_paintEnemy_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintFriend_lib_mGraphics 87
typedef void (*func_nro_Panel_paintFriend_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintPlayerMenu_lib_mGraphics 88
typedef void (*func_nro_Panel_paintPlayerMenu_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintClans_lib_mGraphics 89
typedef void (*func_nro_Panel_paintClans_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintArchivement_lib_mGraphics 90
typedef void (*func_nro_Panel_paintArchivement_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintCombine_lib_mGraphics 91
typedef void (*func_nro_Panel_paintCombine_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintInventory_lib_mGraphics 92
typedef void (*func_nro_Panel_paintInventory_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintTab_lib_mGraphics 93
typedef void (*func_nro_Panel_paintTab_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintMyInfo_lib_mGraphics 94
typedef void (*func_nro_Panel_paintMyInfo_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintCharInfo_lib_mGraphics_nro_Char 95
typedef void (*func_nro_Panel_paintCharInfo_lib_mGraphics_nro_Char)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Panel_getCompare_nro_Item_R_int 96
typedef jint (*func_nro_Panel_getCompare_nro_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintItemBodyBagInfo_lib_mGraphics 97
typedef void (*func_nro_Panel_paintItemBodyBagInfo_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintItemBodyBagInfo_lib_mGraphics_int_int 98
typedef void (*func_nro_Panel_paintItemBodyBagInfo_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Panel_paintMap_lib_mGraphics 99
typedef void (*func_nro_Panel_paintMap_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintTask_lib_mGraphics 100
typedef void (*func_nro_Panel_paintTask_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_cleanCombine 101
typedef void (*func_nro_Panel_cleanCombine)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_hideNow 102
typedef void (*func_nro_Panel_hideNow)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_hide 103
typedef void (*func_nro_Panel_hide)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_update 104
typedef void (*func_nro_Panel_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_addThachDauDetail 105
typedef void (*func_nro_Panel_addThachDauDetail)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireGiaoDich 106
typedef void (*func_nro_Panel_doFireGiaoDich)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireCombine 107
typedef void (*func_nro_Panel_doFireCombine)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireArchivement 108
typedef void (*func_nro_Panel_doFireArchivement)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireInventory 109
typedef void (*func_nro_Panel_doFireInventory)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doRada 110
typedef void (*func_nro_Panel_doRada)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireTool 111
typedef void (*func_nro_Panel_doFireTool)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeInfoBoss 112
typedef void (*func_nro_Panel_setTypeInfoBoss)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabBossNotification 113
typedef void (*func_nro_Panel_setTabBossNotification)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeBossesInfo 114
typedef void (*func_nro_Panel_setTypeBossesInfo)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabInfoBoss 115
typedef void (*func_nro_Panel_setTabInfoBoss)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setBossType 116
typedef void (*func_nro_Panel_setBossType)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doClickBossTurn 117
typedef void (*func_nro_Panel_doClickBossTurn)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_paintListBosses_lib_mGraphics 118
typedef void (*func_nro_Panel_paintListBosses_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_paintTabBoss_lib_mGraphics 119
typedef void (*func_nro_Panel_paintTabBoss_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_setTypeGameInfo 120
typedef void (*func_nro_Panel_setTypeGameInfo)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_chagenSlogan 121
typedef void (*func_nro_Panel_chagenSlogan)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_changeIcon 122
typedef void (*func_nro_Panel_changeIcon)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_addFriend_nro_InfoItem 123
typedef void (*func_nro_Panel_addFriend_nro_InfoItem)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_doFireEnemy 124
typedef void (*func_nro_Panel_doFireEnemy)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireFriend 125
typedef void (*func_nro_Panel_doFireFriend)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireChangeFlag 126
typedef void (*func_nro_Panel_doFireChangeFlag)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doFireLogMessage 127
typedef void (*func_nro_Panel_doFireLogMessage)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_addSkillDetail2_int 128
typedef void (*func_nro_Panel_addSkillDetail2_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Panel_doFireZone 129
typedef void (*func_nro_Panel_doFireZone)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_SetNum_int_int 130
typedef void (*func_nro_Panel_SetNum_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Panel_doFireBox 131
typedef void (*func_nro_Panel_doFireBox)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_itemRequest_byte_java_lang_String_byte_byte 132
typedef void (*func_nro_Panel_itemRequest_byte_java_lang_String_byte_byte)(jcontext ctx, jobject self, jbyte param0, jobject param1, jbyte param2, jbyte param3);
#define VTABLE_nro_Panel_saleRequest_byte_java_lang_String_short 133
typedef void (*func_nro_Panel_saleRequest_byte_java_lang_String_short)(jcontext ctx, jobject self, jbyte param0, jobject param1, jshort param2);
#define VTABLE_nro_Panel_addAutoBuyMenuCommands_nro_MyVector_nro_Item 134
typedef void (*func_nro_Panel_addAutoBuyMenuCommands_nro_MyVector_nro_Item)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Panel_openAutoBuyPrompt_nro_Item_byte 135
typedef void (*func_nro_Panel_openAutoBuyPrompt_nro_Item_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_nro_Panel_addAutoUseMenuCommands_nro_MyVector_nro_Item 136
typedef void (*func_nro_Panel_addAutoUseMenuCommands_nro_MyVector_nro_Item)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Panel_openAutoUsePrompt_nro_Item 137
typedef void (*func_nro_Panel_openAutoUsePrompt_nro_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_openAutoDelayPrompt_nro_Item 138
typedef void (*func_nro_Panel_openAutoDelayPrompt_nro_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_setCombineEff_int 139
typedef void (*func_nro_Panel_setCombineEff_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Panel_updateCombineEff 140
typedef void (*func_nro_Panel_updateCombineEff)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setDotStar 141
typedef void (*func_nro_Panel_setDotStar)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_addTextCombineNPC_int_java_lang_String 142
typedef void (*func_nro_Panel_addTextCombineNPC_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_Panel_setTypeOption 143
typedef void (*func_nro_Panel_setTypeOption)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_paintOption_lib_mGraphics 144
typedef void (*func_nro_Panel_paintOption_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_doFireOption 145
typedef void (*func_nro_Panel_doFireOption)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeAccount 146
typedef void (*func_nro_Panel_setTypeAccount)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_paintAccount_lib_mGraphics 147
typedef void (*func_nro_Panel_paintAccount_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_doFireAccount 148
typedef void (*func_nro_Panel_doFireAccount)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTypeSpeacialSkill 149
typedef void (*func_nro_Panel_setTypeSpeacialSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_setTabSpeacialSkill 150
typedef void (*func_nro_Panel_setTabSpeacialSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_isTypeShop_R_boolean 151
typedef jbool (*func_nro_Panel_isTypeShop_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_doNotiRuby_int 152
typedef void (*func_nro_Panel_doNotiRuby_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Panel_paintOptItem_lib_mGraphics_int_int_int_int 153
typedef void (*func_nro_Panel_paintOptItem_lib_mGraphics_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_nro_Panel_isDuplicateItemAction_int_int_int_R_boolean 154
typedef jbool (*func_nro_Panel_isDuplicateItemAction_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_Panel_isValidInventorySlot_boolean_int_R_boolean 155
typedef jbool (*func_nro_Panel_isValidInventorySlot_boolean_int_R_boolean)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_nro_Panel_resolveInventorySlot_java_lang_Object_Array1_boolean_R_int 156
typedef jint (*func_nro_Panel_resolveInventorySlot_java_lang_Object_Array1_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Panel_resolveBoxSlot_java_lang_Object_R_int 157
typedef jint (*func_nro_Panel_resolveBoxSlot_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Panel_isTabInven_R_boolean 158
typedef jbool (*func_nro_Panel_isTabInven_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_updateKeyInvenTab 159
typedef void (*func_nro_Panel_updateKeyInvenTab)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_updateKeyInventory 160
typedef void (*func_nro_Panel_updateKeyInventory)(jcontext ctx, jobject self);
#define VTABLE_nro_Panel_checkCurrentListLength_int_R_int 161
typedef jint (*func_nro_Panel_checkCurrentListLength_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Panel_setNewSelected_int_boolean 162
typedef void (*func_nro_Panel_setNewSelected_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);

void mark_nro_Panel(jobject object, jint mark, jint depth);
void clinit_nro_Panel(jcontext ctx);
void init_nro_Panel(jcontext ctx, jobject self);
void M_nro_Panel_setTabTop(jcontext ctx, jobject self);
jint SM_nro_Panel_getXMap_R_int(jcontext ctx);
jint SM_nro_Panel_getYMap_R_int(jcontext ctx);
jint SM_nro_Panel_getXMapTask_R_int(jcontext ctx);
jint SM_nro_Panel_getYMapTask_R_int(jcontext ctx);
void M_nro_Panel_setType_int(jcontext ctx, jobject self, jint param0);
void M_nro_Panel_setTypeInfomatioin(jcontext ctx, jobject self);
void M_nro_Panel_setTypeMap(jcontext ctx, jobject self);
void M_nro_Panel_setTypeArchivement(jcontext ctx, jobject self);
void M_nro_Panel_setTypeKiGuiOnly(jcontext ctx, jobject self);
void M_nro_Panel_setTabKiGui(jcontext ctx, jobject self);
void M_nro_Panel_setTypeBodyOnly(jcontext ctx, jobject self);
void M_nro_Panel_addChatMessage_nro_InfoItem(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_setTabPlayerMenu(jcontext ctx, jobject self);
void M_nro_Panel_setTabFlag(jcontext ctx, jobject self);
void M_nro_Panel_setTypePlayerMenu_nro_Char(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_setTypeFriend(jcontext ctx, jobject self);
void M_nro_Panel_setTypeEnemy(jcontext ctx, jobject self);
void M_nro_Panel_setTypeTop_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Panel_setTabFriend(jcontext ctx, jobject self);
void M_nro_Panel_setTabEnemy(jcontext ctx, jobject self);
void M_nro_Panel_setTypeShop_int(jcontext ctx, jobject self, jint param0);
void M_nro_Panel_setTypeBox(jcontext ctx, jobject self);
void M_nro_Panel_setTypeCombine(jcontext ctx, jobject self);
void M_nro_Panel_setTabCombine(jcontext ctx, jobject self);
void M_nro_Panel_setTypeAuto(jcontext ctx, jobject self);
void M_nro_Panel_setTypePetMain(jcontext ctx, jobject self);
void M_nro_Panel_setTypeMain(jcontext ctx, jobject self);
void M_nro_Panel_setTypeZone(jcontext ctx, jobject self);
void M_nro_Panel_addItemDetail_nro_Item(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_popUpDetailInit_nro_ChatPopup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_Panel_addMessageDetail_nro_ClanMessage(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_addClanMemberDetail_nro_Member(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_addClanDetail_nro_Clan(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_addSkillDetail_nro_SkillTemplate_nro_Skill_nro_Skill(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_nro_Panel_show(jcontext ctx, jobject self);
void M_nro_Panel_chatTFUpdateKey(jcontext ctx, jobject self);
void M_nro_Panel_updateKey(jcontext ctx, jobject self);
void M_nro_Panel_setTabGiaoDich_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Panel_setTypeGiaoDich_nro_Char(jcontext ctx, jobject self, jobject param0);
jint SM_nro_Panel_tradeItemOptionCount_nro_Item_R_int(jcontext ctx, jobject param0);
void M_nro_Panel_paintGiaoDich_lib_mGraphics_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_nro_Panel_getCurrClanOtion(jcontext ctx, jobject self);
void M_nro_Panel_checkOptionSelect(jcontext ctx, jobject self);
void M_nro_Panel_updateKeyScrollView(jcontext ctx, jobject self);
void M_nro_Panel_setTabPetStatus(jcontext ctx, jobject self);
void M_nro_Panel_setTabTool(jcontext ctx, jobject self);
void M_nro_Panel_initTabClans(jcontext ctx, jobject self);
void M_nro_Panel_setTabClans(jcontext ctx, jobject self);
void M_nro_Panel_initLogMessage(jcontext ctx, jobject self);
void M_nro_Panel_setTabShop(jcontext ctx, jobject self);
void M_nro_Panel_setTabSkill(jcontext ctx, jobject self);
void M_nro_Panel_setTabZone(jcontext ctx, jobject self);
void M_nro_Panel_setTabBox(jcontext ctx, jobject self);
void M_nro_Panel_setTabPetInventory(jcontext ctx, jobject self);
void M_nro_Panel_setTabInventory_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Panel_moveCamera(jcontext ctx, jobject self);
void M_nro_Panel_paintTop_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintShop_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintPetStatus_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintPetInventory_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintScrollArrow_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintTools_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintGameSubInfo_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintGameInfo_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_k_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_l_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintZone_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintSpeacialSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintBox_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
jobject M_nro_Panel_W_R_nro_Member(jcontext ctx, jobject self);
jobject M_nro_Panel_X_R_nro_ClanMessage(jcontext ctx, jobject self);
jobject M_nro_Panel_Y_R_nro_Clan(jcontext ctx, jobject self);
void M_nro_Panel_paintLogChat_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintFlagChange_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintEnemy_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintFriend_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintPlayerMenu_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintClans_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintArchivement_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintCombine_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintInventory_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintTab_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void SM_nro_Panel_paintToolInfo_lib_mGraphics(jcontext ctx, jobject param0);
void M_nro_Panel_paintMyInfo_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintCharInfo_lib_mGraphics_nro_Char(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_nro_Panel_getCompare_nro_Item_R_int(jcontext ctx, jobject self, jobject param0);
void SM_nro_Panel_paintMapInfo_lib_mGraphics(jcontext ctx, jobject param0);
void M_nro_Panel_paintItemBodyBagInfo_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintItemBodyBagInfo_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_Panel_paintMap_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintTask_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_cleanCombine(jcontext ctx, jobject self);
void M_nro_Panel_hideNow(jcontext ctx, jobject self);
void M_nro_Panel_hide(jcontext ctx, jobject self);
void M_nro_Panel_update(jcontext ctx, jobject self);
void M_nro_Panel_addThachDauDetail(jcontext ctx, jobject self);
void M_nro_Panel_doFireGiaoDich(jcontext ctx, jobject self);
void M_nro_Panel_doFireCombine(jcontext ctx, jobject self);
void M_nro_Panel_doFireArchivement(jcontext ctx, jobject self);
void M_nro_Panel_doFireInventory(jcontext ctx, jobject self);
void M_nro_Panel_doRada(jcontext ctx, jobject self);
void M_nro_Panel_doFireTool(jcontext ctx, jobject self);
void M_nro_Panel_setTypeInfoBoss(jcontext ctx, jobject self);
void M_nro_Panel_setTabBossNotification(jcontext ctx, jobject self);
void M_nro_Panel_setTypeBossesInfo(jcontext ctx, jobject self);
void M_nro_Panel_setTabInfoBoss(jcontext ctx, jobject self);
void M_nro_Panel_setBossType(jcontext ctx, jobject self);
void M_nro_Panel_doClickBossTurn(jcontext ctx, jobject self);
void M_nro_Panel_paintListBosses_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_paintTabBoss_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_setTypeGameInfo(jcontext ctx, jobject self);
void M_nro_Panel_chagenSlogan(jcontext ctx, jobject self);
void M_nro_Panel_changeIcon(jcontext ctx, jobject self);
void M_nro_Panel_addFriend_nro_InfoItem(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_doFireEnemy(jcontext ctx, jobject self);
void M_nro_Panel_doFireFriend(jcontext ctx, jobject self);
void M_nro_Panel_doFireChangeFlag(jcontext ctx, jobject self);
void M_nro_Panel_doFireLogMessage(jcontext ctx, jobject self);
void M_nro_Panel_addSkillDetail2_int(jcontext ctx, jobject self, jint param0);
void M_nro_Panel_doFireZone(jcontext ctx, jobject self);
void M_nro_Panel_SetNum_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_Panel_doFireBox(jcontext ctx, jobject self);
void M_nro_Panel_itemRequest_byte_java_lang_String_byte_byte(jcontext ctx, jobject self, jbyte param0, jobject param1, jbyte param2, jbyte param3);
void M_nro_Panel_saleRequest_byte_java_lang_String_short(jcontext ctx, jobject self, jbyte param0, jobject param1, jshort param2);
void M_nro_Panel_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_Panel_onChatFromMe_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_Panel_addAutoBuyMenuCommands_nro_MyVector_nro_Item(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_Panel_openAutoBuyPrompt_nro_Item_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_nro_Panel_addAutoUseMenuCommands_nro_MyVector_nro_Item(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_Panel_openAutoUsePrompt_nro_Item(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_openAutoDelayPrompt_nro_Item(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_onCancelChat(jcontext ctx, jobject self);
void M_nro_Panel_setCombineEff_int(jcontext ctx, jobject self, jint param0);
void M_nro_Panel_updateCombineEff(jcontext ctx, jobject self);
void M_nro_Panel_setDotStar(jcontext ctx, jobject self);
void M_nro_Panel_addTextCombineNPC_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_Panel_setTypeOption(jcontext ctx, jobject self);
void M_nro_Panel_paintOption_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_doFireOption(jcontext ctx, jobject self);
void M_nro_Panel_setTypeAccount(jcontext ctx, jobject self);
void M_nro_Panel_paintAccount_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Panel_doFireAccount(jcontext ctx, jobject self);
void M_nro_Panel_setTypeSpeacialSkill(jcontext ctx, jobject self);
void M_nro_Panel_setTabSpeacialSkill(jcontext ctx, jobject self);
jbool M_nro_Panel_isTypeShop_R_boolean(jcontext ctx, jobject self);
void M_nro_Panel_doNotiRuby_int(jcontext ctx, jobject self, jint param0);
jint SM_nro_Panel_GetColor_ItemBg_int_R_int(jcontext ctx, jint param0);
jbyte SM_nro_Panel_GetColor_Item_Upgrade_int_R_byte(jcontext ctx, jint param0);
jobject SM_nro_Panel_GetFont_int_R_lib_mFont(jcontext ctx, jint param0);
void M_nro_Panel_paintOptItem_lib_mGraphics_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_Panel_paintOptSlotItem_lib_mGraphics_int_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
jobject SM_nro_Panel_setTextColor_int_int_R_lib_mFont(jcontext ctx, jint param0, jint param1);
jbool M_nro_Panel_isDuplicateItemAction_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_nro_Panel_isValidInventorySlot_boolean_int_R_boolean(jcontext ctx, jobject self, jbool param0, jint param1);
jint M_nro_Panel_resolveInventorySlot_java_lang_Object_Array1_boolean_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_nro_Panel_resolveBoxSlot_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jbool SM_nro_Panel_GetInventorySelect_isbody_int_int_Array1_nro_Item_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jint SM_nro_Panel_GetInventorySelect_bag_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_nro_Panel_GetInventorySelect_body_int_int_Array1_nro_Item_R_int(jcontext ctx, jint param0, jint param1, jobject param2);
jbool M_nro_Panel_isTabInven_R_boolean(jcontext ctx, jobject self);
void M_nro_Panel_updateKeyInvenTab(jcontext ctx, jobject self);
void M_nro_Panel_updateKeyInventory(jcontext ctx, jobject self);
jint M_nro_Panel_checkCurrentListLength_int_R_int(jcontext ctx, jobject self, jint param0);
void M_nro_Panel_setNewSelected_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
