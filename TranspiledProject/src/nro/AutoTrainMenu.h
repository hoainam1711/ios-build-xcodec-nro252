#ifndef HEADER_nro_AutoTrainMenu
#define HEADER_nro_AutoTrainMenu

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_AutoTrainMenu {
	java_lang_Object parent;
} nro_AutoTrainMenu;

extern Class class_nro_AutoTrainMenu;

extern jobject SF_nro_AutoTrainMenu_instance;
extern jbool SF_nro_AutoTrainMenu_isShow;
extern jint SF_nro_AutoTrainMenu_currentTab;
extern jbool SF_nro_AutoTrainMenu_isAutoAttack;
extern volatile jbool SF_nro_AutoTrainMenu_isStandAutoAttack;
extern jbool SF_nro_AutoTrainMenu_isSkipSuperMob;
extern jbool SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob;
extern jbool SF_nro_AutoTrainMenu_isAttackByHp;
extern jlong SF_nro_AutoTrainMenu_hpQuaiOn;
extern jlong SF_nro_AutoTrainMenu_hpQuaiDuoi;
extern jbool SF_nro_AutoTrainMenu_isAutoPick;
extern jbool SF_nro_AutoTrainMenu_isAutoPea;
extern jint SF_nro_AutoTrainMenu_hpPeaPercent;
extern jint SF_nro_AutoTrainMenu_mpPeaPercent;
extern jbool SF_nro_AutoTrainMenu_isAutoPeanPet;
extern jint SF_nro_AutoTrainMenu_petPeaPercent;
extern jint SF_nro_AutoTrainMenu_petHpPeaPercent;
extern jint SF_nro_AutoTrainMenu_petMpPeaPercent;
extern jint SF_nro_AutoTrainMenu_petStaminaPeaPercent;
extern jlong SF_nro_AutoTrainMenu_lastPeanPetTime;
extern jlong SF_nro_AutoTrainMenu_lastPetInfoSyncTime;
extern jbool SF_nro_AutoTrainMenu_isAutoWakeUp;
extern jlong SF_nro_AutoTrainMenu_lastAutoWakeUpTime;
extern jbool SF_nro_AutoTrainMenu_isAutoLogin;
extern jlong SF_nro_AutoTrainMenu_lastAutoLoginAttempt;
extern jbool SF_nro_AutoTrainMenu_isWaitingAutoLogin;
extern jlong SF_nro_AutoTrainMenu_dialogDismissTimer;
extern jint SF_nro_AutoTrainMenu_autoLoginRetryCount;
extern jint SF_nro_AutoTrainMenu_MAX_AUTOLOGIN_RETRIES;
extern jint SF_nro_AutoTrainMenu_lastCountdownSec;
extern jobject SF_nro_AutoTrainMenu_initialDialogMsg;
extern jint SF_nro_AutoTrainMenu_autoScrollY;
extern jobject SF_nro_AutoTrainMenu_PICK_NAMES;
extern jobject SF_nro_AutoTrainMenu_isCheckPick;
extern jbool SF_nro_AutoTrainMenu_isPickOnlyMine;
extern jobject SF_nro_AutoTrainMenu_strIdNhat;
extern jobject SF_nro_AutoTrainMenu_strIdLoaiTru;
extern jobject SF_nro_AutoTrainMenu_strIdVutBo;
extern jint SF_nro_AutoTrainMenu_pickScrollY;
extern jint SF_nro_AutoTrainMenu_focusedInput;
extern jbool SF_nro_AutoTrainMenu_isFirstInput;
extern jobject SF_nro_AutoTrainMenu_currentTargetMob;
extern jlong SF_nro_AutoTrainMenu_targetStartTime;
extern jlong SF_nro_AutoTrainMenu_lastHitTime;
extern jlong SF_nro_AutoTrainMenu_lastTargetHp;
extern jobject SF_nro_AutoTrainMenu_unreachableMobIds;
extern jlong SF_nro_AutoTrainMenu_lastBossDieTime;
extern jint SF_nro_AutoTrainMenu_lastBossDieX;
extern jint SF_nro_AutoTrainMenu_lastBossDieY;
extern jlong SF_nro_AutoTrainMenu_lastStandAttackTime;
extern volatile jbool SF_nro_AutoTrainMenu_isAutoChat;
extern volatile jobject SF_nro_AutoTrainMenu_textAutoChat;
extern jlong SF_nro_AutoTrainMenu_lastAutoChatTime;
extern volatile jbool SF_nro_AutoTrainMenu_isAutoChatTG;
extern volatile jobject SF_nro_AutoTrainMenu_textAutoChatTG;
extern jlong SF_nro_AutoTrainMenu_lastAutoChatTGTime;
extern jobject SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT;
extern jlong SF_nro_AutoTrainMenu_AUTO_BUY_INTERVAL_MS;
extern volatile jbool SF_nro_AutoTrainMenu_isAutoBuy;
extern jbyte SF_nro_AutoTrainMenu_autoBuyType;
extern jint SF_nro_AutoTrainMenu_autoBuyItemId;
extern jobject SF_nro_AutoTrainMenu_autoBuyItemName;
extern jlong SF_nro_AutoTrainMenu_autoBuyUnitPrice;
extern jint SF_nro_AutoTrainMenu_autoBuyTotal;
extern jint SF_nro_AutoTrainMenu_autoBuyRemaining;
extern jint SF_nro_AutoTrainMenu_autoBuyBought;
extern jlong SF_nro_AutoTrainMenu_lastAutoBuyTime;
extern jobject SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT;
extern jobject SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT;
extern volatile jbool SF_nro_AutoTrainMenu_isAutoUse;
extern jint SF_nro_AutoTrainMenu_autoUseItemId;
extern jobject SF_nro_AutoTrainMenu_autoUseItemName;
extern jint SF_nro_AutoTrainMenu_autoUseTotal;
extern jint SF_nro_AutoTrainMenu_autoUseRemaining;
extern jint SF_nro_AutoTrainMenu_autoUseUsed;
extern jlong SF_nro_AutoTrainMenu_autoUseDelayMs;
extern jlong SF_nro_AutoTrainMenu_lastAutoUseTime;
extern jbool SF_nro_AutoTrainMenu_isAllMob;
extern jobject SF_nro_AutoTrainMenu_listMobNames;
extern jobject SF_nro_AutoTrainMenu_selectedMobs;
extern jint SF_nro_AutoTrainMenu_tab0ScrollY;
extern jobject SF_nro_AutoTrainMenu_isSkillSelected;
extern jobject SF_nro_AutoTrainMenu_imgArrow;
extern jobject SF_nro_AutoTrainMenu_imgArrow2;
extern jobject SF_nro_AutoTrainMenu_imgCheck;
extern jobject SF_nro_AutoTrainMenu_imgBtX;
extern jobject SF_nro_AutoTrainMenu_autoItems;
extern jint SF_nro_AutoTrainMenu_itemScrollY;
extern jlong SF_nro_AutoTrainMenu_lastPeaTime;
extern jlong SF_nro_AutoTrainMenu_lastZoneChangeTime;
extern jlong SF_nro_AutoTrainMenu_lastAttackTime;
extern jlong SF_nro_AutoTrainMenu_lastTimeAutoDropTrash;
extern jbool SF_nro_AutoTrainMenu_isRMSLoaded;
extern jbool SF_nro_AutoTrainMenu_isDragging;
extern jint SF_nro_AutoTrainMenu_lastPointerY;
extern jint SF_nro_AutoTrainMenu_totalDragDist;
extern jint SF_nro_AutoTrainMenu_lastMapId;
extern jlong SF_nro_AutoTrainMenu_lastTimePick;
extern jlong SF_nro_AutoTrainMenu_lastTeleportTime;
extern jint SF_nro_AutoTrainMenu_skillSlotRoundRobin;

#define VTABLE_nro_AutoTrainMenu_hashCode_R_int 0
typedef jint (*func_nro_AutoTrainMenu_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_AutoTrainMenu_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_AutoTrainMenu_clone_R_java_lang_Object 2
typedef jobject (*func_nro_AutoTrainMenu_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_AutoTrainMenu_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_toString_R_java_lang_String 4
typedef jobject (*func_nro_AutoTrainMenu_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_finalize 5
typedef void (*func_nro_AutoTrainMenu_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_notify 6
typedef void (*func_nro_AutoTrainMenu_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_notifyAll 7
typedef void (*func_nro_AutoTrainMenu_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_wait 8
typedef void (*func_nro_AutoTrainMenu_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu_wait_long 9
typedef void (*func_nro_AutoTrainMenu_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_AutoTrainMenu_wait_long_int 10
typedef void (*func_nro_AutoTrainMenu_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_AutoTrainMenu_show 11
typedef void (*func_nro_AutoTrainMenu_show)(jcontext ctx, jobject self);

void mark_nro_AutoTrainMenu(jobject object, jint mark, jint depth);
void clinit_nro_AutoTrainMenu(jcontext ctx);
void init_nro_AutoTrainMenu(jcontext ctx, jobject self);
jobject SM_nro_AutoTrainMenu_gI_R_nro_AutoTrainMenu(jcontext ctx);
void M_nro_AutoTrainMenu_show(jcontext ctx, jobject self);
jint SM_nro_AutoTrainMenu_getDialogW_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getDialogH_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getDialogX_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getDialogY_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getTriggerBtnW_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getTriggerBtnH_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getTriggerBtnX_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getTriggerBtnY_R_int(jcontext ctx);
jobject SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_nro_AutoTrainMenu_initAutoItems(jcontext ctx);
void SM_nro_AutoTrainMenu_initAssets(jcontext ctx);
jbool SM_nro_AutoTrainMenu_isAnyAutoActive_R_boolean(jcontext ctx);
void SM_nro_AutoTrainMenu_loadAutoTrainConfig(jcontext ctx);
void SM_nro_AutoTrainMenu_saveAutoTrainConfig(jcontext ctx);
void SM_nro_AutoTrainMenu_loadRMS(jcontext ctx);
void SM_nro_AutoTrainMenu_saveRMS(jcontext ctx);
void SM_nro_AutoTrainMenu_syncPickFlags(jcontext ctx);
void SM_nro_AutoTrainMenu_saveMobSelection(jcontext ctx);
void SM_nro_AutoTrainMenu_loadMobSelection_int(jcontext ctx, jint param0);
void SM_nro_AutoTrainMenu_reset(jcontext ctx);
void SM_nro_AutoTrainMenu_updateMapMobList(jcontext ctx);
jint SM_nro_AutoTrainMenu_getCounterpartBuffIconId_int_R_int(jcontext ctx, jint param0);
jbool SM_nro_AutoTrainMenu_isItemBuffActive_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint SM_nro_AutoTrainMenu_findBagItemIndex_nro_Char_nro_AutoTrainMenu$AutoItem_R_int(jcontext ctx, jobject param0, jobject param1);
jbool SM_nro_AutoTrainMenu_hasItemInBag_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_nro_AutoTrainMenu_updateAutoTrain(jcontext ctx);
void SM_nro_AutoTrainMenu_resetSessionCommands(jcontext ctx);
void SM_nro_AutoTrainMenu_addInfo_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_ensureRMSLoaded(jcontext ctx);
void SM_nro_AutoTrainMenu_update(jcontext ctx);
jbool SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(jcontext ctx);
jbool SM_nro_AutoTrainMenu_isAutoBuyActive_R_boolean(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoBuyRemaining_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoBuyBought_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoBuyTotal_R_int(jcontext ctx);
jbyte SM_nro_AutoTrainMenu_getAutoBuyType_R_byte(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoBuyItemId_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_parseAutoBuyQuantity_java_lang_String_R_int(jcontext ctx, jobject param0);
jlong SM_nro_AutoTrainMenu_resolveAutoBuyUnitPrice_nro_Item_byte_R_long(jcontext ctx, jobject param0, jbyte param1);
jobject SM_nro_AutoTrainMenu_checkAutoBuyCurrencyError_nro_Char_byte_long_R_java_lang_String(jcontext ctx, jobject param0, jbyte param1, jlong param2);
void SM_nro_AutoTrainMenu_startAutoBuy_nro_Item_byte_int(jcontext ctx, jobject param0, jbyte param1, jint param2);
void SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_onServerInfoMessage_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_updateAutoBuy_long(jcontext ctx, jlong param0);
jbool SM_nro_AutoTrainMenu_isAutoUseActive_R_boolean(jcontext ctx);
jbool SM_nro_AutoTrainMenu_isAutoUseItem_int_R_boolean(jcontext ctx, jint param0);
jint SM_nro_AutoTrainMenu_getAutoUseItemId_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoUseTotal_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoUseRemaining_R_int(jcontext ctx);
jint SM_nro_AutoTrainMenu_getAutoUseUsed_R_int(jcontext ctx);
jlong SM_nro_AutoTrainMenu_getAutoUseDelayMs_R_long(jcontext ctx);
jobject SM_nro_AutoTrainMenu_getAutoUseDelayFormatted_R_java_lang_String(jcontext ctx);
jint SM_nro_AutoTrainMenu_parseAutoUseQuantity_java_lang_String_R_int(jcontext ctx, jobject param0);
jlong SM_nro_AutoTrainMenu_parseAutoUseDelayMs_java_lang_String_R_long(jcontext ctx, jobject param0);
jint SM_nro_AutoTrainMenu_findBagItemIndexByTemplateId_nro_Char_int_R_int(jcontext ctx, jobject param0, jint param1);
void SM_nro_AutoTrainMenu_startAutoUse_nro_Item_int_long(jcontext ctx, jobject param0, jint param1, jlong param2);
void SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_updateAutoUse_long(jcontext ctx, jlong param0);
void SM_nro_AutoTrainMenu_updateAutoChat_long(jcontext ctx, jlong param0);
void SM_nro_AutoTrainMenu_updateAutoWakeUp_long(jcontext ctx, jlong param0);
void SM_nro_AutoTrainMenu_updateAutoLogin(jcontext ctx);
void SM_nro_AutoTrainMenu_onEnterGame(jcontext ctx);
void SM_nro_AutoTrainMenu_toggleAutoPeanPet(jcontext ctx);
jbool SM_nro_AutoTrainMenu_eatPeaForPet_long_R_boolean(jcontext ctx, jlong param0);
void SM_nro_AutoTrainMenu_onCharChat_int_java_lang_String(jcontext ctx, jint param0, jobject param1);
void SM_nro_AutoTrainMenu_toggleAutoWakeUp(jcontext ctx);
void SM_nro_AutoTrainMenu_toggleAutoLogin(jcontext ctx);
void SM_nro_AutoTrainMenu_setAutoLoginAccount_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_updateStandAutoAttack_nro_Char_long(jcontext ctx, jobject param0, jlong param1);
void SM_nro_AutoTrainMenu_autoChangeZone(jcontext ctx);
void SM_nro_AutoTrainMenu_useBagItemByTemplate_int_java_lang_String(jcontext ctx, jint param0, jobject param1);
void SM_nro_AutoTrainMenu_setAutoAttack_boolean(jcontext ctx, jbool param0);
void SM_nro_AutoTrainMenu_toggleAutoAttack(jcontext ctx);
void SM_nro_AutoTrainMenu_toggleStandAutoAttack(jcontext ctx);
void SM_nro_AutoTrainMenu_toggleAutoPickAll(jcontext ctx);
void SM_nro_AutoTrainMenu_toggleTdlt(jcontext ctx);
jint SM_nro_AutoTrainMenu_parseZoneCommand_java_lang_String_R_int(jcontext ctx, jobject param0);
jbool SM_nro_AutoTrainMenu_handleChatCommand_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_stopAutoAttack(jcontext ctx);
void SM_nro_AutoTrainMenu_onBossDie_int_int(jcontext ctx, jint param0, jint param1);
jbool SM_nro_AutoTrainMenu_isNearRecentBossDeath_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
jbool SM_nro_AutoTrainMenu_isAutoTraining_R_boolean(jcontext ctx);
jbool SM_nro_AutoTrainMenu_isBlackOrNamekDragonBall_nro_ItemMap_R_boolean(jcontext ctx, jobject param0);
jbool SM_nro_AutoTrainMenu_isExcludedItem_nro_ItemMap_R_boolean(jcontext ctx, jobject param0);
jbool SM_nro_AutoTrainMenu_isTemplateIdInList_int_java_lang_String_R_boolean(jcontext ctx, jint param0, jobject param1);
jbool SM_nro_AutoTrainMenu_isValidAutoPickItem_nro_ItemMap_nro_Char_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2);
jint SM_nro_AutoTrainMenu_findClearCeilingX_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_nro_AutoTrainMenu_findPlatformDropOffX_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);
jbool SM_nro_AutoTrainMenu_isValidTarget_nro_Mob_R_boolean(jcontext ctx, jobject param0);
jobject SM_nro_AutoTrainMenu_findBestTargetMob_nro_Char_R_nro_Mob(jcontext ctx, jobject param0);
jobject SM_nro_AutoTrainMenu_selectSkillToAttack_nro_Char_R_nro_Skill(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_onScrolled_int(jcontext ctx, jint param0);
jbool SM_nro_AutoTrainMenu_isInputFocused_R_boolean(jcontext ctx);
void SM_nro_AutoTrainMenu_finishFocusedInput(jcontext ctx);
void SM_nro_AutoTrainMenu_handleTypedChar_char(jcontext ctx, jchar param0);
void SM_nro_AutoTrainMenu_pasteText_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_handleFocusedKeyInput(jcontext ctx);
jbool SM_nro_AutoTrainMenu_updateKey_R_boolean(jcontext ctx);
jint SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int(jcontext ctx, jint param0);
jint SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int(jcontext ctx, jint param0);
jint SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int(jcontext ctx, jint param0);
jint SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int(jcontext ctx, jint param0);
jbool SM_nro_AutoTrainMenu_updateKeyTab0_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jbool SM_nro_AutoTrainMenu_updateKeyTab1_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jbool SM_nro_AutoTrainMenu_updateKeyTab2_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jbool SM_nro_AutoTrainMenu_updateKeyTab3_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_nro_AutoTrainMenu_paint_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_paintTriggerButton_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_paintAutoDialog_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_AutoTrainMenu_paintScrollArrows_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
void SM_nro_AutoTrainMenu_paintTabLuyenTap_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_AutoTrainMenu_paintTabVatPham_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_AutoTrainMenu_paintTabNhatDo_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_AutoTrainMenu_paintTextFieldBox_lib_mGraphics_int_int_int_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jbool param6);
void SM_nro_AutoTrainMenu_paintTabAuto_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
