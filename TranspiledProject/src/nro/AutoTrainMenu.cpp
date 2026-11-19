#include "nro/AutoTrainMenu.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "lib/input/TField.h"
#include "java/util/Vector.h"
#include "nro/IActionListener.h"
#include "nro/AutoTrainMenu.h"
#include "com/badlogic/gdx/Application.h"
#include "nro/SmallImage.h"
#include "nro/Menu.h"
#include "nro/Paint.h"
#include "nro/ItemMap.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/sound/SoundMn.h"
#include "nro/PopUp.h"
#include "nro/ItemTime.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "java/util/Locale.h"
#include "nro/TileMap.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "nro/SkillTemplate.h"
#include "nro/ISession.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "nro/ItemTemplate.h"
#include "nro/ServerEffect.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/NumberFormatException.h"
#include "nro/Res.h"
#include "nro/Skill.h"
#include "nro/ShowBoss.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "nro/GameScr.h"
#include "java/lang/Boolean.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "java/lang/Float.h"
#include "nro/AutoTrainMenu_AutoItem.h"
#include "nro/ChooseCharScr.h"
#include "nro/StaticObj.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/InfoMe.h"
#include "nro/Controller.h"
#include "nro/ItemTemplates.h"
#include "nro/PlayerDart.h"
#include "lib/mSystem.h"
#include "java/lang/Math.h"
#include "lib/mFont.h"
#include "nro/ServerScr.h"
#include "nro/MovePoint.h"
#include "java/util/Hashtable.h"
#include "nro/InfoDlg.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "nro/MobTemplate.h"
#include "nro/Npc.h"
#include "nro/MsgDlg.h"
#include "nro/Item.h"
#include "nro/LoginScr.h"
#include "nro/SkillPaint.h"

extern "C" {

jobject SF_nro_AutoTrainMenu_instance;
jbool SF_nro_AutoTrainMenu_isShow;
jint SF_nro_AutoTrainMenu_currentTab;
jbool SF_nro_AutoTrainMenu_isAutoAttack;
volatile jbool SF_nro_AutoTrainMenu_isStandAutoAttack;
jbool SF_nro_AutoTrainMenu_isSkipSuperMob;
jbool SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob;
jbool SF_nro_AutoTrainMenu_isAttackByHp;
jlong SF_nro_AutoTrainMenu_hpQuaiOn;
jlong SF_nro_AutoTrainMenu_hpQuaiDuoi;
jbool SF_nro_AutoTrainMenu_isAutoPick;
jbool SF_nro_AutoTrainMenu_isAutoPea;
jint SF_nro_AutoTrainMenu_hpPeaPercent;
jint SF_nro_AutoTrainMenu_mpPeaPercent;
jbool SF_nro_AutoTrainMenu_isAutoPeanPet;
jint SF_nro_AutoTrainMenu_petPeaPercent;
jint SF_nro_AutoTrainMenu_petHpPeaPercent;
jint SF_nro_AutoTrainMenu_petMpPeaPercent;
jint SF_nro_AutoTrainMenu_petStaminaPeaPercent;
jlong SF_nro_AutoTrainMenu_lastPeanPetTime;
jlong SF_nro_AutoTrainMenu_lastPetInfoSyncTime;
jbool SF_nro_AutoTrainMenu_isAutoWakeUp;
jlong SF_nro_AutoTrainMenu_lastAutoWakeUpTime;
jbool SF_nro_AutoTrainMenu_isAutoLogin;
jlong SF_nro_AutoTrainMenu_lastAutoLoginAttempt;
jbool SF_nro_AutoTrainMenu_isWaitingAutoLogin;
jlong SF_nro_AutoTrainMenu_dialogDismissTimer;
jint SF_nro_AutoTrainMenu_autoLoginRetryCount;
jint SF_nro_AutoTrainMenu_MAX_AUTOLOGIN_RETRIES;
jint SF_nro_AutoTrainMenu_lastCountdownSec;
jobject SF_nro_AutoTrainMenu_initialDialogMsg;
jint SF_nro_AutoTrainMenu_autoScrollY;
jobject SF_nro_AutoTrainMenu_PICK_NAMES;
jobject SF_nro_AutoTrainMenu_isCheckPick;
jbool SF_nro_AutoTrainMenu_isPickOnlyMine;
jobject SF_nro_AutoTrainMenu_strIdNhat;
jobject SF_nro_AutoTrainMenu_strIdLoaiTru;
jobject SF_nro_AutoTrainMenu_strIdVutBo;
jint SF_nro_AutoTrainMenu_pickScrollY;
jint SF_nro_AutoTrainMenu_focusedInput;
jbool SF_nro_AutoTrainMenu_isFirstInput;
jobject SF_nro_AutoTrainMenu_currentTargetMob;
jlong SF_nro_AutoTrainMenu_targetStartTime;
jlong SF_nro_AutoTrainMenu_lastHitTime;
jlong SF_nro_AutoTrainMenu_lastTargetHp;
jobject SF_nro_AutoTrainMenu_unreachableMobIds;
jlong SF_nro_AutoTrainMenu_lastBossDieTime;
jint SF_nro_AutoTrainMenu_lastBossDieX;
jint SF_nro_AutoTrainMenu_lastBossDieY;
jlong SF_nro_AutoTrainMenu_lastStandAttackTime;
volatile jbool SF_nro_AutoTrainMenu_isAutoChat;
volatile jobject SF_nro_AutoTrainMenu_textAutoChat;
jlong SF_nro_AutoTrainMenu_lastAutoChatTime;
volatile jbool SF_nro_AutoTrainMenu_isAutoChatTG;
volatile jobject SF_nro_AutoTrainMenu_textAutoChatTG;
jlong SF_nro_AutoTrainMenu_lastAutoChatTGTime;
jobject SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT;
jlong SF_nro_AutoTrainMenu_AUTO_BUY_INTERVAL_MS;
volatile jbool SF_nro_AutoTrainMenu_isAutoBuy;
jbyte SF_nro_AutoTrainMenu_autoBuyType;
jint SF_nro_AutoTrainMenu_autoBuyItemId;
jobject SF_nro_AutoTrainMenu_autoBuyItemName;
jlong SF_nro_AutoTrainMenu_autoBuyUnitPrice;
jint SF_nro_AutoTrainMenu_autoBuyTotal;
jint SF_nro_AutoTrainMenu_autoBuyRemaining;
jint SF_nro_AutoTrainMenu_autoBuyBought;
jlong SF_nro_AutoTrainMenu_lastAutoBuyTime;
jobject SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT;
jobject SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT;
volatile jbool SF_nro_AutoTrainMenu_isAutoUse;
jint SF_nro_AutoTrainMenu_autoUseItemId;
jobject SF_nro_AutoTrainMenu_autoUseItemName;
jint SF_nro_AutoTrainMenu_autoUseTotal;
jint SF_nro_AutoTrainMenu_autoUseRemaining;
jint SF_nro_AutoTrainMenu_autoUseUsed;
jlong SF_nro_AutoTrainMenu_autoUseDelayMs;
jlong SF_nro_AutoTrainMenu_lastAutoUseTime;
jbool SF_nro_AutoTrainMenu_isAllMob;
jobject SF_nro_AutoTrainMenu_listMobNames;
jobject SF_nro_AutoTrainMenu_selectedMobs;
jint SF_nro_AutoTrainMenu_tab0ScrollY;
jobject SF_nro_AutoTrainMenu_isSkillSelected;
jobject SF_nro_AutoTrainMenu_imgArrow;
jobject SF_nro_AutoTrainMenu_imgArrow2;
jobject SF_nro_AutoTrainMenu_imgCheck;
jobject SF_nro_AutoTrainMenu_imgBtX;
jobject SF_nro_AutoTrainMenu_autoItems;
jint SF_nro_AutoTrainMenu_itemScrollY;
jlong SF_nro_AutoTrainMenu_lastPeaTime;
jlong SF_nro_AutoTrainMenu_lastZoneChangeTime;
jlong SF_nro_AutoTrainMenu_lastAttackTime;
jlong SF_nro_AutoTrainMenu_lastTimeAutoDropTrash;
jbool SF_nro_AutoTrainMenu_isRMSLoaded;
jbool SF_nro_AutoTrainMenu_isDragging;
jint SF_nro_AutoTrainMenu_lastPointerY;
jint SF_nro_AutoTrainMenu_totalDragDist;
jint SF_nro_AutoTrainMenu_lastMapId;
jlong SF_nro_AutoTrainMenu_lastTimePick;
jlong SF_nro_AutoTrainMenu_lastTeleportTime;
jint SF_nro_AutoTrainMenu_skillSlotRoundRobin;

void mark_nro_AutoTrainMenu(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_AutoTrainMenu_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_instance)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_instance, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_initialDialogMsg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_initialDialogMsg)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_initialDialogMsg, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_PICK_NAMES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_PICK_NAMES)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_PICK_NAMES, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_isCheckPick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_isCheckPick)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_isCheckPick, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_strIdNhat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_strIdNhat)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_strIdNhat, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_strIdLoaiTru)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_strIdLoaiTru)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_strIdLoaiTru, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_strIdVutBo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_strIdVutBo)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_strIdVutBo, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_currentTargetMob)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_currentTargetMob)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_currentTargetMob, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_unreachableMobIds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_unreachableMobIds)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_unreachableMobIds, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_textAutoChat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_textAutoChat)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_textAutoChat, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_textAutoChatTG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_textAutoChatTG)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_textAutoChatTG, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_autoBuyItemName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_autoBuyItemName)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_autoBuyItemName, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_autoUseItemName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_autoUseItemName)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_autoUseItemName, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_listMobNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_listMobNames)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_listMobNames, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_selectedMobs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_selectedMobs)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_selectedMobs, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_isSkillSelected)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_isSkillSelected)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_isSkillSelected, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_imgArrow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_imgArrow)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_imgArrow, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_imgArrow2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_imgArrow2)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_imgArrow2, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_imgCheck)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_imgCheck)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_imgCheck, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_imgBtX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_imgBtX)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_imgBtX, mark, depth + 1);
		if (SF_nro_AutoTrainMenu_autoItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_AutoTrainMenu_autoItems)->clazz)->markFunction)((jobject) SF_nro_AutoTrainMenu_autoItems, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_AutoTrainMenu *) object;
}

void init_nro_AutoTrainMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_AutoTrainMenu_gI_R_nro_AutoTrainMenu(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(18);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(19);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_AutoTrainMenu);
	init_nro_AutoTrainMenu(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(21);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_AutoTrainMenu_show(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:show", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isRMSLoaded) != 0) goto label_1;
	}
	LINE_NUMBER(26);
	SM_nro_AutoTrainMenu_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(27);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isShow = (jint(1));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getDialogW_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getDialogW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (16)), (340));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getDialogH_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getDialogH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (16)), (245));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getDialogX_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getDialogX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(187);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_w;
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getDialogW_R_int(ctx);
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getDialogY_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getDialogY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(191);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_h;
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getDialogH_R_int(ctx);
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getTriggerBtnW_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getTriggerBtnW", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (18);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getTriggerBtnH_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getTriggerBtnH", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (28);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getTriggerBtnX_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getTriggerBtnX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(204);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_w;
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnW_R_int(ctx);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getTriggerBtnY_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getTriggerBtnY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(208);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2));
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnH_R_int(ctx);
	popStackFrame(ctx);
	return (temp0 - (temp1 / (jint(2))));
	}

	popStackFrame(ctx);
}

jobject SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:ai", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(218);
	clinit_nro_AutoTrainMenu$AutoItem(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_AutoTrainMenu$AutoItem);
	init_nro_AutoTrainMenu$AutoItem_java_lang_String_int_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_initAutoItems(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:initAutoItems", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)createArray(ctx, &class_nro_AutoTrainMenu$AutoItem, (25));
	jint temp0 = jint(0);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng luy\u1ec7n t\u1eadp"_j));
	jint temp1 = 521;
	jint temp2 = 4387;
	jint temp3 = 4387;
	LINE_NUMBER(224);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp1, temp2, temp3);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp4 = jint(1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u00f9a x2 tn,sm \u0111\u1ec7 t\u1eed"_j));
	jint temp5 = 1628;
	jint temp6 = 13540;
	jint temp7 = 13540;
	LINE_NUMBER(225);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp5, temp6, temp7);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp8 = jint(2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cu\u1ed3ng n\u1ed9"_j));
	jint temp9 = 381;
	jint temp10 = 2754;
	jint temp11 = 2754;
	LINE_NUMBER(227);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp9, temp10, temp11);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp12 = jint(3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cu\u1ed3ng n\u1ed9 2"_j));
	jint temp13 = 1150;
	jint temp14 = 10716;
	jint temp15 = 10716;
	LINE_NUMBER(228);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp13, temp14, temp15);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp16 = jint(4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Gi\u00e1p X\u00ean b\u1ecd hung"_j));
	jint temp17 = 384;
	jint temp18 = 2757;
	jint temp19 = 2757;
	LINE_NUMBER(230);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp17, temp18, temp19);
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp20 = jint(5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Gi\u00e1p X\u00ean b\u1ecd hung 2"_j));
	jint temp21 = 1153;
	jint temp22 = 10712;
	jint temp23 = 10712;
	LINE_NUMBER(231);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp21, temp22, temp23);
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp24 = 6;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u1ed5 huy\u1ebft"_j));
	jint temp25 = 382;
	jint temp26 = 2755;
	jint temp27 = 2755;
	LINE_NUMBER(233);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp25, temp26, temp27);
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp28 = 7;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u1ed5 huy\u1ebft 2"_j));
	jint temp29 = 1152;
	jint temp30 = 10714;
	jint temp31 = 10714;
	LINE_NUMBER(234);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp29, temp30, temp31);
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp32 = 8;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u1ed5 kh\u00ed"_j));
	jint temp33 = 383;
	jint temp34 = 2756;
	jint temp35 = 2756;
	LINE_NUMBER(236);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp33, temp34, temp35);
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp36 = 9;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u1ed5 kh\u00ed 2"_j));
	jint temp37 = 1151;
	jint temp38 = 10715;
	jint temp39 = 10715;
	LINE_NUMBER(237);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp37, temp38, temp39);
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp40 = 10;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"S\u00e1t th\u01b0\u01a1ng chu\u1ea9n"_j));
	jint temp41 = 1517;
	jint temp42 = 12766;
	jint temp43 = 12766;
	LINE_NUMBER(239);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp41, temp42, temp43);
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp44 = 11;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"S\u00e1t th\u01b0\u01a1ng chu\u1ea9n 2"_j));
	jint temp45 = 1518;
	jint temp46 = 12767;
	jint temp47 = 12767;
	LINE_NUMBER(240);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp45, temp46, temp47);
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp48 = 12;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u00e1nh Pudding"_j));
	jint temp49 = 663;
	jint temp50 = 6324;
	jint temp51 = 6324;
	LINE_NUMBER(242);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp49, temp50, temp51);
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp52 = 13;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"X\u00fac x\u00edch"_j));
	jint temp53 = 664;
	jint temp54 = 6325;
	jint temp55 = 6325;
	LINE_NUMBER(243);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp53, temp54, temp55);
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp56 = 14;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Kem d\u00e2u"_j));
	jint temp57 = 665;
	jint temp58 = 6326;
	jint temp59 = 6326;
	LINE_NUMBER(245);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp57, temp58, temp59);
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp60 = 15;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"M\u00ec ly"_j));
	jint temp61 = 666;
	jint temp62 = 6327;
	jint temp63 = 6327;
	LINE_NUMBER(246);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp61, temp62, temp63);
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp64 = 16;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Sushi"_j));
	jint temp65 = 667;
	jint temp66 = 6328;
	jint temp67 = 6328;
	LINE_NUMBER(248);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp65, temp66, temp67);
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp68 = 17;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Cua rang me"_j));
	jint temp69 = 880;
	jint temp70 = 8060;
	jint temp71 = 8060;
	LINE_NUMBER(249);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp69, temp70, temp71);
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp72 = 18;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B\u1ea1ch tu\u1ed9c n\u01b0\u1edbng"_j));
	jint temp73 = 881;
	jint temp74 = 8061;
	jint temp75 = 8061;
	LINE_NUMBER(251);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp73, temp74, temp75);
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp76 = 19;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"T\u00f4m t\u1ea9m b\u1ed9t chi\u00ean x\u00f9"_j));
	jint temp77 = 882;
	jint temp78 = 8062;
	jint temp79 = 8062;
	LINE_NUMBER(252);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp77, temp78, temp79);
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	jint temp80 = 20;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\u1ea8n danh"_j));
	jint temp81 = 385;
	jint temp82 = 2760;
	jint temp83 = 2760;
	LINE_NUMBER(254);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp81, temp82, temp83);
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp84 = 21;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\u1ea8n danh 2"_j));
	jint temp85 = 1154;
	jint temp86 = 10717;
	jint temp87 = 10717;
	LINE_NUMBER(255);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp85, temp86, temp87);
	ARRAY_ACCESS(jobject, sp[0].o, temp84) = sp[1].o;
	jint temp88 = 22;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Nho t\u00edm"_j));
	jint temp89 = 211;
	jint temp90 = 1394;
	jint temp91 = jint(-1);
	LINE_NUMBER(257);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp89, temp90, temp91);
	ARRAY_ACCESS(jobject, sp[0].o, temp88) = sp[1].o;
	jint temp92 = 23;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Nho xanh"_j));
	jint temp93 = 212;
	jint temp94 = 1395;
	jint temp95 = jint(-1);
	LINE_NUMBER(258);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp93, temp94, temp95);
	ARRAY_ACCESS(jobject, sp[0].o, temp92) = sp[1].o;
	jint temp96 = 24;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Phi\u1ebfu sao v\u00e0ng may m\u1eafn"_j));
	jint temp97 = jint(-1);
	jint temp98 = 4030;
	jint temp99 = jint(-1);
	LINE_NUMBER(260);
	sp[1].o = (jobject)SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem(ctx, sp[1].o, temp97, temp98, temp99);
	ARRAY_ACCESS(jobject, sp[0].o, temp96) = sp[1].o;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoItems = sp[0].o;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_initAssets(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:initAssets", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(265);
	SM_nro_PopUp_loadBg(ctx);
	LINE_NUMBER(266);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgArrow;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2darrow.png"_j))));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_imgArrow = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(268);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgArrow2;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2darrow2.png"_j))));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_imgArrow2 = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(270);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgCheck;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dcheck.png"_j))));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_imgCheck = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(272);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgBtX;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dbtX.png"_j))));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_imgBtX = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(274);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_imgHP;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmobHP.png"_j))));
	clinit_nro_Mob(ctx);
	SF_nro_Mob_imgHP = sp[0].o;
	}
label_10:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isAnyAutoActive_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isAnyAutoActive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(279);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) != 0) goto label_1;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isStandAutoAttack;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoPick;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoPea;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoWakeUp;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoPeanPet;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoLogin;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(282);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(283);
	frame[0].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(284);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))) == nullptr) goto label_7;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_enabled) == 0) goto label_7;
	}
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(283);
	INST_IINC(0, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_loadAutoTrainConfig(jcontext ctx) {
	FrameInfo frameInfo { "nro/AutoTrainMenu:loadAutoTrainConfig", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(292);
	SM_nro_AutoTrainMenu_loadRMS(ctx);
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_saveAutoTrainConfig(jcontext ctx) {
	FrameInfo frameInfo { "nro/AutoTrainMenu:saveAutoTrainConfig", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(296);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_loadRMS(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:loadRMS", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(300);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isRMSLoaded) == 0) goto label_13;
	}
	LINE_NUMBER(301);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(302);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isRMSLoaded = (jint(1));
	LINE_NUMBER(303);
	SM_nro_AutoTrainMenu_initAssets(ctx);
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_att"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(306);
	if ((frame[0].i) == (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(307);
	if ((frame[0].i) != (jint(1))) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoAttack = (--sp)->i;
label_17:;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_skip_super"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(310);
	if ((frame[0].i) == (jint(-1))) goto label_22;
	}
	{
	LINE_NUMBER(311);
	if ((frame[0].i) != (jint(1))) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isSkipSuperMob = (--sp)->i;
label_22:;
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_chg_zone"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(314);
	if ((frame[0].i) == (jint(-1))) goto label_27;
	}
	{
	LINE_NUMBER(315);
	if ((frame[0].i) != (jint(1))) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob = (--sp)->i;
label_27:;
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_att_hp"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(318);
	if ((frame[0].i) == (jint(-1))) goto label_32;
	}
	{
	LINE_NUMBER(319);
	if ((frame[0].i) != (jint(1))) goto label_34;
	}
	INST_ICONST(1);
	goto label_35;
label_34:;
	INST_ICONST(0);
label_35:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAttackByHp = (--sp)->i;
label_32:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_hp_on"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(322);
	if ((frame[1].o) == nullptr) goto label_37;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_37;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(324);
	jlong temp0 = jlong(0);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jlong temp1 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, temp1);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiOn = temp2;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(326);
	goto label_37;
label_2:;
	LINE_NUMBER(325);
	INST_ASTORE(2);
label_37:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_hp_duoi"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(330);
	if ((frame[2].o) == nullptr) goto label_39;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_39;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(332);
	jlong temp0 = jlong(0);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jlong temp1 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[0].o);
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, temp1);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiDuoi = temp2;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(334);
	goto label_39;
label_6:;
	LINE_NUMBER(333);
	INST_ASTORE(3);
label_39:;
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_pick"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(338);
	if ((frame[0].i) == (jint(-1))) goto label_41;
	}
	{
	LINE_NUMBER(339);
	if ((frame[0].i) != (jint(1))) goto label_43;
	}
	INST_ICONST(1);
	goto label_44;
label_43:;
	INST_ICONST(0);
label_44:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (--sp)->i;
label_41:;
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pick_mine"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(342);
	if ((frame[0].i) == (jint(-1))) goto label_46;
	}
	{
	LINE_NUMBER(343);
	if ((frame[0].i) != (jint(1))) goto label_48;
	}
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isPickOnlyMine = (--sp)->i;
label_46:;
	{
	LINE_NUMBER(345);
	frame[3].i = (jint(0));
	}
label_50:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_51;
	}
	{
	LINE_NUMBER(346);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nro_pick_m_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[0].i = temp0;
	LINE_NUMBER(347);
	if ((frame[0].i) == (jint(-1))) goto label_54;
	}
	{
	LINE_NUMBER(348);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	jint temp0 = frame[3].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[0].i) != (jint(1))) goto label_56;
	}
	INST_ICONST(1);
	goto label_57;
label_56:;
	INST_ICONST(0);
label_57:;
	INST_BASTORE();
label_54:;
	{
	LINE_NUMBER(345);
	INST_IINC(3, 1);
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(350);
	SM_nro_AutoTrainMenu_syncPickFlags(ctx);
	LINE_NUMBER(352);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_id_nhat"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(353);
	if ((frame[3].o) == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(354);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdNhat = (frame[3].o);
	}
label_60:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_id_loai"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(357);
	if ((frame[4].o) == nullptr) goto label_63;
	}
	{
	LINE_NUMBER(358);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdLoaiTru = (frame[4].o);
	}
label_63:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_id_vut"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(361);
	if ((frame[5].o) == nullptr) goto label_66;
	}
	{
	LINE_NUMBER(362);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdVutBo = (frame[5].o);
	}
label_66:;
	{
	LINE_NUMBER(364);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_pea"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(365);
	if ((frame[0].i) == (jint(-1))) goto label_69;
	}
	{
	LINE_NUMBER(366);
	if ((frame[0].i) != (jint(1))) goto label_71;
	}
	INST_ICONST(1);
	goto label_72;
label_71:;
	INST_ICONST(0);
label_72:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPea = (--sp)->i;
label_69:;
	{
	LINE_NUMBER(368);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pea_hp"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(369);
	if ((frame[0].i) == (jint(-1))) goto label_74;
	}
	{
	LINE_NUMBER(370);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpPeaPercent = (frame[0].i);
	}
label_74:;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pea_mp"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(373);
	if ((frame[0].i) == (jint(-1))) goto label_77;
	}
	{
	LINE_NUMBER(374);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_mpPeaPercent = (frame[0].i);
	}
label_77:;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_pean_pet"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(377);
	if ((frame[0].i) == (jint(-1))) goto label_80;
	}
	{
	LINE_NUMBER(378);
	if ((frame[0].i) != (jint(1))) goto label_82;
	}
	INST_ICONST(1);
	goto label_83;
label_82:;
	INST_ICONST(0);
label_83:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (--sp)->i;
label_80:;
	{
	LINE_NUMBER(380);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pean_pet_pct"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(381);
	if ((frame[0].i) == (jint(-1))) goto label_85;
	}
	{
	LINE_NUMBER(382);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petPeaPercent = (frame[0].i);
	LINE_NUMBER(383);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = (frame[0].i);
	LINE_NUMBER(384);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = (frame[0].i);
	}
label_85:;
	{
	LINE_NUMBER(387);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pet_hp"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(388);
	if ((frame[0].i) == (jint(-1))) goto label_90;
	}
	{
	LINE_NUMBER(389);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = (frame[0].i);
	}
label_90:;
	{
	LINE_NUMBER(391);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pet_mp"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(392);
	if ((frame[0].i) == (jint(-1))) goto label_93;
	}
	{
	LINE_NUMBER(393);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = (frame[0].i);
	}
label_93:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pet_sta"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(396);
	if ((frame[0].i) == (jint(-1))) goto label_96;
	}
	{
	LINE_NUMBER(397);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = (frame[0].i);
	}
label_96:;
	{
	LINE_NUMBER(399);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_hs"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(400);
	if ((frame[0].i) == (jint(-1))) goto label_99;
	}
	{
	LINE_NUMBER(401);
	if ((frame[0].i) != (jint(1))) goto label_101;
	}
	INST_ICONST(1);
	goto label_102;
label_101:;
	INST_ICONST(0);
label_102:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoWakeUp = (--sp)->i;
label_99:;
	{
	LINE_NUMBER(403);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_login"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(404);
	if ((frame[0].i) == (jint(-1))) goto label_104;
	}
	{
	LINE_NUMBER(405);
	if ((frame[0].i) != (jint(1))) goto label_106;
	}
	INST_ICONST(1);
	goto label_107;
label_106:;
	INST_ICONST(0);
label_107:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (--sp)->i;
label_104:;
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_all_mob"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(408);
	if ((frame[0].i) == (jint(-1))) goto label_109;
	}
	{
	LINE_NUMBER(409);
	if ((frame[0].i) != (jint(1))) goto label_111;
	}
	INST_ICONST(1);
	goto label_112;
label_111:;
	INST_ICONST(0);
label_112:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = (--sp)->i;
label_109:;
	{
	LINE_NUMBER(411);
	frame[6].i = (jint(0));
	}
label_113:;
	{
	if ((frame[6].i) >= (10)) goto label_114;
	}
	{
	LINE_NUMBER(412);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nro_sk_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[0].i = temp0;
	LINE_NUMBER(413);
	if ((frame[0].i) == (jint(-1))) goto label_117;
	}
	{
	LINE_NUMBER(414);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	jint temp0 = frame[6].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[0].i) != (jint(1))) goto label_119;
	}
	INST_ICONST(1);
	goto label_120;
label_119:;
	INST_ICONST(0);
label_120:;
	INST_BASTORE();
label_117:;
	{
	LINE_NUMBER(411);
	INST_IINC(6, 1);
	goto label_113;
	}
label_114:;
	{
	LINE_NUMBER(417);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(418);
	frame[6].i = (jint(0));
	}
label_122:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(419);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))))->F_templateId) != (521)) goto label_124;
	}
	{
	LINE_NUMBER(420);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp += 1;
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay) != 0) goto label_126;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (4387));
	if (temp0 == 0) goto label_127;
	}
label_126:;
	INST_ICONST(1);
	goto label_128;
label_127:;
	INST_ICONST(0);
label_128:;
	sp -= 2;
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(sp[0].o))->F_enabled = sp[1].i;
	goto label_129;
label_124:;
	{
	LINE_NUMBER(422);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nro_it_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[0].i = temp0;
	LINE_NUMBER(423);
	if ((frame[0].i) == (jint(-1))) goto label_129;
	}
	{
	LINE_NUMBER(424);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	sp += 1;
	if ((frame[0].i) != (jint(1))) goto label_132;
	}
	INST_ICONST(1);
	goto label_133;
label_132:;
	INST_ICONST(0);
label_133:;
	sp -= 2;
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(sp[0].o))->F_enabled = sp[1].i;
label_129:;
	{
	LINE_NUMBER(418);
	INST_IINC(6, 1);
	goto label_122;
	}
label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(429);
	goto label_134;
label_10:;
	LINE_NUMBER(428);
	INST_ASTORE(0);
label_134:;
	LINE_NUMBER(430);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_saveRMS(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:saveRMS", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(433);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	if (sp[0].o != nullptr) goto label_0;
	}
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(436);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_att"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(437);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_skip_super"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isSkipSuperMob) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(438);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_chg_zone"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob) == 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(439);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_att_hp"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAttackByHp) == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(440);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_hp_on"_j));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiOn));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(441);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_hp_duoi"_j));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiDuoi));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(442);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_pick"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick) == 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(443);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_pick_mine"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isPickOnlyMine) == 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(444);
	frame[0].i = (jint(0));
	}
label_26:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_27;
	}
	{
	LINE_NUMBER(445);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nro_pick_m_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[0].i))) == 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(444);
	INST_IINC(0, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(447);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_id_nhat"_j));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_strIdNhat;
	sp += 1;
	if (sp[0].o == nullptr) goto label_32;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdNhat;
	goto label_33;
label_32:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_33:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_id_loai"_j));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_strIdLoaiTru;
	sp += 1;
	if (sp[0].o == nullptr) goto label_35;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdLoaiTru;
	goto label_36;
label_35:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_36:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(449);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_id_vut"_j));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_strIdVutBo;
	sp += 1;
	if (sp[0].o == nullptr) goto label_38;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdVutBo;
	goto label_39;
label_38:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_39:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(450);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_pea"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPea) == 0) goto label_41;
	}
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(451);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pea_hp"_j))), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_hpPeaPercent));
	LINE_NUMBER(452);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pea_mp"_j))), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_mpPeaPercent));
	LINE_NUMBER(453);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_pean_pet"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPeanPet) == 0) goto label_46;
	}
	INST_ICONST(1);
	goto label_47;
label_46:;
	INST_ICONST(0);
label_47:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(454);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pean_pet_pct"_j))), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent));
	LINE_NUMBER(455);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pet_hp"_j))), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent));
	LINE_NUMBER(456);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pet_mp"_j))), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petMpPeaPercent));
	LINE_NUMBER(457);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pet_sta"_j))), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent));
	LINE_NUMBER(458);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_hs"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoWakeUp) == 0) goto label_53;
	}
	INST_ICONST(1);
	goto label_54;
label_53:;
	INST_ICONST(0);
label_54:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(459);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_login"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoLogin) == 0) goto label_56;
	}
	INST_ICONST(1);
	goto label_57;
label_56:;
	INST_ICONST(0);
label_57:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(460);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_all_mob"_j));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAllMob) == 0) goto label_59;
	}
	INST_ICONST(1);
	goto label_60;
label_59:;
	INST_ICONST(0);
label_60:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(461);
	frame[0].i = (jint(0));
	}
label_62:;
	{
	if ((frame[0].i) >= (10)) goto label_63;
	}
	{
	LINE_NUMBER(462);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nro_sk_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[0].i))) == 0) goto label_65;
	}
	INST_ICONST(1);
	goto label_66;
label_65:;
	INST_ICONST(0);
label_66:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(461);
	INST_IINC(0, 1);
	goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(464);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_68;
	}
	{
	LINE_NUMBER(465);
	frame[0].i = (jint(0));
	}
label_70:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_68;
	}
	{
	LINE_NUMBER(466);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nro_it_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	sp += 1;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_enabled) == 0) goto label_72;
	}
	INST_ICONST(1);
	goto label_73;
label_72:;
	INST_ICONST(0);
label_73:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(465);
	INST_IINC(0, 1);
	goto label_70;
	}
label_68:;
	LINE_NUMBER(469);
	SM_nro_AutoTrainMenu_saveMobSelection(ctx);
	popExceptionFrame(frameRef);
	LINE_NUMBER(471);
	goto label_75;
label_2:;
	LINE_NUMBER(470);
	INST_ASTORE(0);
label_75:;
	LINE_NUMBER(472);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_syncPickFlags(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:syncPickFlags", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(475);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick) != 0) goto label_1;
	}
	{
	LINE_NUMBER(476);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	LINE_NUMBER(477);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(478);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	LINE_NUMBER(479);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(481);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	LINE_NUMBER(482);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) != 0) goto label_6;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) != 0) goto label_6;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(483);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	}
label_6:;
	LINE_NUMBER(486);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_saveMobSelection(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:saveMobSelection", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(490);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) < 0) goto label_1;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(491);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(492);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(493);
	frame[1].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_9;
	}
	{
	LINE_NUMBER(494);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(495);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(496);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAllMob;
label_14:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(497);
	if ((frame[1].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (59));
	}
label_16:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (58));
	sp += 1;
	if ((frame[4].i) == 0) goto label_18;
	}
	INST_BIPUSH(49);
	goto label_19;
label_18:;
	INST_BIPUSH(48);
label_19:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(493);
	INST_IINC(1, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(501);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoTrainMobSel_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(503);
	goto label_21;
label_2:;
	LINE_NUMBER(502);
	INST_ASTORE(0);
label_21:;
	LINE_NUMBER(504);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_loadMobSelection_int(jcontext ctx, jint param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:loadMobSelection", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(508);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoTrainMobSel_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(509);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(510);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(512);
	frame[3].i = (jint(1));
	LINE_NUMBER(513);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(514);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), (58));
	frame[5].i = temp0;
	LINE_NUMBER(515);
	if ((frame[5].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(517);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"1"_j));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), ((frame[5].i) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(518);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(519);
	if ((frame[7].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(520);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(513);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(523);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	jint temp0 = (jint)((func_java_util_Hashtable_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(524);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = (frame[3].i);
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(527);
	goto label_21;
label_2:;
	LINE_NUMBER(526);
	INST_ASTORE(1);
label_21:;
	LINE_NUMBER(528);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_reset(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(531);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoAttack = (jint(0));
	LINE_NUMBER(532);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isStandAutoAttack = (jint(0));
	LINE_NUMBER(533);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isSkipSuperMob = (jint(1));
	LINE_NUMBER(534);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob = (jint(0));
	LINE_NUMBER(535);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAttackByHp = (jint(0));
	LINE_NUMBER(536);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiOn = (jlong(0));
	LINE_NUMBER(537);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiDuoi = (jlong(0));
	LINE_NUMBER(538);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (jint(1));
	LINE_NUMBER(539);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isPickOnlyMine = (jint(1));
	LINE_NUMBER(540);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	LINE_NUMBER(541);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	LINE_NUMBER(542);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(543);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	LINE_NUMBER(544);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdNhat = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(545);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdLoaiTru = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(546);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdVutBo = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(547);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPea = (jint(0));
	LINE_NUMBER(548);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpPeaPercent = (50);
	LINE_NUMBER(549);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_mpPeaPercent = (50);
	LINE_NUMBER(550);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (jint(0));
	LINE_NUMBER(551);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petPeaPercent = (30);
	LINE_NUMBER(552);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = (30);
	LINE_NUMBER(553);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = (30);
	LINE_NUMBER(554);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = (20);
	LINE_NUMBER(555);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoWakeUp = (jint(0));
	LINE_NUMBER(556);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (jint(0));
	LINE_NUMBER(557);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(558);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = (jint(1));
	LINE_NUMBER(559);
	frame[0].i = (jint(0));
	}
label_29:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_30;
	}
	{
	LINE_NUMBER(560);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	sp[1].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	clinit_java_lang_Boolean(ctx);
	sp[2].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(559);
	INST_IINC(0, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(562);
	frame[0].i = (jint(0));
	}
label_33:;
	{
	if ((frame[0].i) >= (10)) goto label_34;
	}
	{
	LINE_NUMBER(563);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	jint temp0 = frame[0].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[0].i) >= (jint(2))) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(562);
	INST_IINC(0, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(564);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(565);
	frame[0].i = (jint(0));
	}
label_41:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_39;
	}
	{
	LINE_NUMBER(566);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_enabled) == 0) goto label_43;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_templateId) != (521)) goto label_43;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->i = SF_nro_GameScr_canAutoPlay;
	if ((--sp)->i != 0) goto label_44;
	{
	jint temp0 = 4387;
	LINE_NUMBER(567);
	jint temp1 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(568);
	jint temp0 = 521;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	sp[0].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_name;
	SM_nro_AutoTrainMenu_useBagItemByTemplate_int_java_lang_String(ctx, temp0, sp[0].o);
	LINE_NUMBER(569);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAutoPlay = (jint(0));
	}
label_43:;
	{
	LINE_NUMBER(571);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_enabled = (jint(0));
	LINE_NUMBER(565);
	INST_IINC(0, 1);
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(574);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = (jint(0));
	LINE_NUMBER(575);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = (jint(0));
	LINE_NUMBER(576);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = (jint(0));
	LINE_NUMBER(577);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = (jint(0));
	LINE_NUMBER(578);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(579);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(580);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateMapMobList(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateMapMobList", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(588);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	if (sp[0].o != nullptr) goto label_1;
	}
	LINE_NUMBER(589);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(590);
	frame[0].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID);
	LINE_NUMBER(591);
	if ((frame[0].i) == (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_lastMapId)) goto label_4;
	}
	{
	LINE_NUMBER(592);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastMapId = (frame[0].i);
	LINE_NUMBER(593);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(594);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	((func_java_util_Hashtable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_clear])(ctx, sp[0].o);
	LINE_NUMBER(595);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_unreachableMobIds;
	((func_java_util_Hashtable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_clear])(ctx, sp[0].o);
	LINE_NUMBER(596);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTargetMob = (jobject(nullptr));
	LINE_NUMBER(597);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = (jint(1));
	LINE_NUMBER(598);
	SM_nro_AutoTrainMenu_loadMobSelection_int(ctx, (frame[0].i));
	}
label_4:;
	{
	LINE_NUMBER(600);
	frame[1].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_13;
	}
	{
	LINE_NUMBER(601);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(602);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[2].o));
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_isMobMe) != 0) goto label_16;
	}
	{
	LINE_NUMBER(603);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isSkipSuperMob) == 0) goto label_18;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_isBoss) != 0) goto label_16;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_level) > 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_nro_Mob_checkIsBoss_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Mob_checkIsBoss_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_nro_Mob_isBigBoss_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Mob_isBigBoss_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	LINE_NUMBER(604);
	goto label_16;
label_18:;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[2].o));
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(606);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_16;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(607);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(608);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	jint temp0 = (jint)((func_java_util_Hashtable_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(609);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAllMob));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_16:;
	{
	LINE_NUMBER(600);
	INST_IINC(1, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(614);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getCounterpartBuffIconId_int_R_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getCounterpartBuffIconId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(617);
	switch((frame[0].i)) {
		case 381: goto label_1;
		case 382: goto label_2;
		case 383: goto label_3;
		case 384: goto label_4;
		case 385: goto label_5;
		case 1150: goto label_6;
		case 1151: goto label_7;
		case 1152: goto label_8;
		case 1153: goto label_9;
		case 1154: goto label_10;
		case 1517: goto label_11;
		case 1518: goto label_12;
		default: goto label_13;
	}
	}
label_1:;
	{
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (10716);
	}
label_6:;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (2754);
	}
label_2:;
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return (10714);
	}
label_8:;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (2755);
	}
label_3:;
	{
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (10715);
	}
label_7:;
	{
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return (2756);
	}
label_4:;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return (10712);
	}
label_9:;
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return (2757);
	}
label_5:;
	{
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return (10717);
	}
label_10:;
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (2760);
	}
label_11:;
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return (12767);
	}
label_12:;
	{
	LINE_NUMBER(641);
	popStackFrame(ctx);
	return (12766);
	}
label_13:;
	{
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isItemBuffActive_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isItemBuffActive", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(648);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(649);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(650);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId) != (521)) goto label_3;
	}
	{
	LINE_NUMBER(651);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay) != 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (4387));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(653);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId) == (211)) goto label_8;
	}
	{
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId) != (212)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(654);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMaxStamina) <= 0) goto label_10;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cStamina) <= ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMaxStamina) * (20)) / (100))) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(656);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_buffIconId) <= 0) goto label_12;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_buffIconId));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistMessage_int_R_boolean(ctx, ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_buffIconId));
	if (temp0 == 0) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(659);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (jshort(((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(661);
	if ((frame[2].o) == nullptr) goto label_17;
	}
	{
	if (((jint)((nro_ItemTemplate *) NULL_CHECK((frame[2].o)))->F_iconID) <= 0) goto label_17;
	}
	{
	jint temp0 = (jint)((nro_ItemTemplate *) NULL_CHECK((frame[2].o)))->F_iconID;
	LINE_NUMBER(662);
	jint temp1 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_19;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistMessage_int_R_boolean(ctx, ((jint)((nro_ItemTemplate *) NULL_CHECK((frame[2].o)))->F_iconID));
	if (temp0 == 0) goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(663);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getCounterpartBuffIconId_int_R_int(ctx, ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId));
	frame[3].i = temp0;
	LINE_NUMBER(666);
	if ((frame[3].i) <= 0) goto label_14;
	}
	{
	jint temp0 = frame[3].i;
	LINE_NUMBER(667);
	jint temp1 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_22;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistMessage_int_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_14;
	}
label_22:;
	{
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_findBagItemIndex_nro_Char_nro_AutoTrainMenu$AutoItem_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:findBagItemIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(675);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(677);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(679);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(680);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId) <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) != ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId)) goto label_9;
	}
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_9:;
	{
	LINE_NUMBER(683);
	sp[0].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_name;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_name;
	LINE_NUMBER(684);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_11:;
	{
	LINE_NUMBER(687);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_templateId) != (jint(-1))) goto label_7;
	}
	{
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_iconId) <= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_iconID) != ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[1].o)))->F_iconId)) goto label_7;
	}
	{
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_7:;
	{
	LINE_NUMBER(677);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_hasItemInBag_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:hasItemInBag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(696);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findBagItemIndex_nro_Char_nro_AutoTrainMenu$AutoItem_R_int(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateAutoTrain(jcontext ctx) {
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateAutoTrain", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(700);
	SM_nro_AutoTrainMenu_update(ctx);
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_resetSessionCommands(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:resetSessionCommands", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(704);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isStandAutoAttack = (jint(0));
	LINE_NUMBER(705);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChat = (jint(0));
	LINE_NUMBER(706);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	LINE_NUMBER(707);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastStandAttackTime = (jlong(0));
	LINE_NUMBER(708);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTime = (jlong(0));
	LINE_NUMBER(709);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTGTime = (jlong(0));
	LINE_NUMBER(710);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(711);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_addInfo_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:addInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(715);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_info1;
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(716);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, (frame[0].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(718);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_ensureRMSLoaded(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:ensureRMSLoaded", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(721);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isRMSLoaded) != 0) goto label_1;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_files;
	if ((--sp)->o == nullptr) goto label_1;
	LINE_NUMBER(722);
	SM_nro_AutoTrainMenu_loadRMS(ctx);
label_1:;
	LINE_NUMBER(724);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_update(jcontext ctx) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:update", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(727);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isRMSLoaded) != 0) goto label_1;
	}
	LINE_NUMBER(728);
	SM_nro_AutoTrainMenu_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(729);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(730);
	SM_nro_AutoTrainMenu_updateAutoChat_long(ctx, (frame[0].l));
	LINE_NUMBER(731);
	SM_nro_AutoTrainMenu_updateAutoBuy_long(ctx, (frame[0].l));
	LINE_NUMBER(732);
	SM_nro_AutoTrainMenu_updateAutoUse_long(ctx, (frame[0].l));
	LINE_NUMBER(733);
	SM_nro_AutoTrainMenu_updateAutoWakeUp_long(ctx, (frame[0].l));
	LINE_NUMBER(735);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(736);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_isLoadingMap;
	if ((--sp)->i != 0) goto label_9;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) == (14)) goto label_9;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) == (jint(5))) goto label_9;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isDie) != 0) goto label_9;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHP), (jlong(0)))) > 0) goto label_10;
	}
label_9:;
	LINE_NUMBER(738);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(740);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isCharge) != 0) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isFlyAndCharge) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isUseChargeSkill_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Char_isUseChargeSkill_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isStandAndCharge) != 0) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isWaitMonkey) == 0) goto label_12;
	}
label_11:;
	LINE_NUMBER(742);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(745);
	SM_nro_AutoTrainMenu_updateMapMobList(ctx);
	LINE_NUMBER(748);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_14;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_14;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_templateId) != (521)) goto label_14;
	}
	{
	LINE_NUMBER(749);
	jlong temp0 = frame[0].l;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if ((longCompare((temp0 - ((jlong)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_lastUseTime)), (jlong(2500ll)))) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(750);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay) != 0) goto label_17;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (4387));
	if (temp0 == 0) goto label_18;
	}
label_17:;
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(751);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_enabled) == (frame[3].i)) goto label_14;
	}
	{
	LINE_NUMBER(752);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_enabled = (frame[3].i);
	}
label_14:;
	{
	LINE_NUMBER(758);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPea) == 0) goto label_22;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastPeaTime)), (jlong(1500ll)))) < 0) goto label_22;
	}
	{
	LINE_NUMBER(759);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_hpPeaPercent) <= 0) goto label_24;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHPFull), (jlong(0)))) <= 0) goto label_24;
	}
	{
	if ((longCompare(((((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHP) * (jlong(100ll))) / ((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHPFull)), (jlong((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_hpPeaPercent))))) >= 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(761);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_mpPeaPercent) <= 0) goto label_27;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cMPFull), (jlong(0)))) <= 0) goto label_27;
	}
	{
	if ((longCompare(((((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cMP) * (jlong(100ll))) / ((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cMPFull)), (jlong((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_mpPeaPercent))))) >= 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(763);
	if ((frame[3].i) != 0) goto label_30;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_22;
label_30:;
	{
	LINE_NUMBER(764);
	jint temp0 = (jint)((func_nro_Char_doUsePotion_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Char_doUsePotion_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(765);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPeaTime = (frame[0].l);
	goto label_22;
	}
label_31:;
	{
	LINE_NUMBER(766);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (100)) != 0) goto label_22;
	}
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestPean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestPean])(ctx, sp[0].o);
	}
label_22:;
	{
	LINE_NUMBER(773);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPeanPet) == 0) goto label_34;
	}
	{
	LINE_NUMBER(774);
	sp[0].o = (jobject)SM_nro_Char_myPetz_R_nro_Char(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(775);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_havePet) == 0) goto label_37;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_38;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cMaxStamina) <= 0) goto label_38;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastPetInfoSyncTime)), (jlong(30000ll)))) < 0) goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(776);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastPetInfoSyncTime)), (jlong(10000ll)))) < 0) goto label_37;
	}
	{
	LINE_NUMBER(777);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPetInfoSyncTime = (frame[0].l);
	LINE_NUMBER(778);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_petInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_petInfo])(ctx, sp[0].o);
	}
label_37:;
	{
	LINE_NUMBER(782);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastPeanPetTime)), (jlong(2000ll)))) < 0) goto label_34;
	}
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (-((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_charID)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(784);
	if ((frame[3].o) == nullptr) goto label_43;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[3].o)))->F_isDie) != 0) goto label_44;
	}
label_43:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_45;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[4].o)))->F_isDie) == 0) goto label_45;
	}
label_44:;
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(785);
	if ((frame[5].i) != 0) goto label_34;
	}
	{
	LINE_NUMBER(786);
	frame[6].i = (jint(0));
	LINE_NUMBER(787);
	if ((frame[3].o) == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(789);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent) <= 0) goto label_52;
	}
	{
	LINE_NUMBER(790);
	if (((jint)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cMaxStamina) <= 0) goto label_54;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cMaxStamina;
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	INST_SIPUSH(1250);
label_55:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(791);
	frame[8].i = ((jint)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cStamina);
	LINE_NUMBER(792);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent) > (100)) goto label_58;
	}
	{
	LINE_NUMBER(793);
	if ((((frame[8].i) * (100)) / (frame[7].i)) >= (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent)) goto label_52;
	}
	{
	LINE_NUMBER(794);
	frame[6].i = (jint(1));
	goto label_52;
	}
label_58:;
	{
	LINE_NUMBER(797);
	if ((frame[8].i) >= (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent)) goto label_52;
	}
	{
	LINE_NUMBER(798);
	frame[6].i = (jint(1));
	}
label_52:;
	{
	LINE_NUMBER(803);
	if ((frame[6].i) != 0) goto label_62;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_petHpPeaPercent;
	if ((--sp)->i <= 0) goto label_62;
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cHPFull), (jlong(0)))) <= 0) goto label_62;
	}
	{
	LINE_NUMBER(804);
	if ((longCompare(((((jlong)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cHP) * (jlong(100ll))) / ((jlong)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cHPFull)), (jlong((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent))))) >= 0) goto label_62;
	}
	{
	LINE_NUMBER(805);
	frame[6].i = (jint(1));
	}
label_62:;
	{
	LINE_NUMBER(809);
	if ((frame[6].i) != 0) goto label_50;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_petMpPeaPercent;
	if ((--sp)->i <= 0) goto label_50;
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cMPFull), (jlong(0)))) <= 0) goto label_50;
	}
	{
	LINE_NUMBER(810);
	if ((longCompare(((((jlong)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cMP) * (jlong(100ll))) / ((jlong)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cMPFull)), (jlong((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petMpPeaPercent))))) >= 0) goto label_50;
	}
	{
	LINE_NUMBER(811);
	frame[6].i = (jint(1));
	}
label_50:;
	{
	LINE_NUMBER(816);
	if ((frame[6].i) != 0) goto label_67;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_67;
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[4].o)))->F_cHPFull), (jlong(0)))) <= 0) goto label_67;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_petHpPeaPercent;
	if ((--sp)->i <= 0) goto label_67;
	{
	LINE_NUMBER(817);
	if ((longCompare(((((jlong)((nro_Char *) NULL_CHECK((frame[4].o)))->F_cHP) * (jlong(100ll))) / ((jlong)((nro_Char *) NULL_CHECK((frame[4].o)))->F_cHPFull)), (jlong((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent))))) >= 0) goto label_67;
	}
	{
	LINE_NUMBER(818);
	frame[6].i = (jint(1));
	}
label_67:;
	{
	LINE_NUMBER(821);
	if ((frame[6].i) == 0) goto label_34;
	}
	{
	LINE_NUMBER(822);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_eatPeaForPet_long_R_boolean(ctx, (frame[0].l));
	}
label_34:;
	{
	LINE_NUMBER(830);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (30)) != 0) goto label_71;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_autoItems;
	if ((--sp)->o == nullptr) goto label_71;
	{
	LINE_NUMBER(831);
	frame[3].i = (jint(0));
	}
label_73:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_71;
	}
	{
	LINE_NUMBER(832);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(833);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[4].o)))->F_enabled) == 0) goto label_76;
	}
	{
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[4].o)))->F_templateId) != (521)) goto label_77;
	}
	LINE_NUMBER(834);
	goto label_76;
label_77:;
	{
	LINE_NUMBER(835);
	if ((longCompare(((frame[0].l) - ((jlong)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[4].o)))->F_lastUseTime)), (jlong(5000ll)))) >= 0) goto label_79;
	}
	LINE_NUMBER(836);
	goto label_76;
label_79:;
	{
	LINE_NUMBER(838);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isItemBuffActive_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(ctx, (frame[2].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(839);
	if ((frame[5].i) != 0) goto label_76;
	}
	{
	LINE_NUMBER(840);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findBagItemIndex_nro_Char_nro_AutoTrainMenu$AutoItem_R_int(ctx, (frame[2].o), (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(841);
	if ((frame[6].i) == (jint(-1))) goto label_84;
	}
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_useItem_byte_byte_byte_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_useItem_byte_byte_byte_short])(ctx, sp[0].o, (jint(0)), (jint(1)), (jbyte((frame[6].i))), (jint(-1)));
	LINE_NUMBER(843);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[4].o)))->F_lastUseTime = (frame[0].l);
	goto label_76;
	}
label_84:;
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	if (sp[0].o == nullptr) goto label_76;
	}
	{
	LINE_NUMBER(845);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[4].o)))->F_enabled = (jint(0));
	LINE_NUMBER(846);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 h\u1ebft "_j))));
	sp[2].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" trong h\u00e0nh trang"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(847);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	}
label_76:;
	{
	LINE_NUMBER(831);
	INST_IINC(3, 1);
	goto label_73;
	}
label_71:;
	{
	LINE_NUMBER(854);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_strIdVutBo;
	if (sp[0].o == nullptr) goto label_90;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_strIdVutBo;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_90;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastTimeAutoDropTrash)), (jlong(2000ll)))) < 0) goto label_90;
	}
	{
	LINE_NUMBER(855);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTimeAutoDropTrash = (frame[0].l);
	LINE_NUMBER(856);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	if (sp[0].o == nullptr) goto label_90;
	}
	{
	LINE_NUMBER(857);
	frame[3].i = (jint(0));
	}
label_94:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_90;
	}
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(859);
	if ((frame[4].o) == nullptr) goto label_97;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	if (sp[0].o == nullptr) goto label_97;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	jint temp0 = (jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_strIdVutBo;
	LINE_NUMBER(860);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_isTemplateIdInList_int_java_lang_String_R_boolean(ctx, temp0, sp[0].o);
	if (temp1 == 0) goto label_97;
	}
	{
	LINE_NUMBER(861);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_useItem_byte_byte_byte_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_useItem_byte_byte_byte_short])(ctx, sp[0].o, (jint(1)), (jint(1)), (jbyte((frame[3].i))), (jint(-1)));
	LINE_NUMBER(862);
	goto label_90;
	}
label_97:;
	{
	LINE_NUMBER(857);
	INST_IINC(3, 1);
	goto label_94;
	}
label_90:;
	{
	LINE_NUMBER(870);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick) == 0) goto label_101;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) != 0) goto label_101;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastTimePick)), (jlong(300ll)))) < 0) goto label_101;
	}
	{
	LINE_NUMBER(871);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	if (sp[0].o == nullptr) goto label_101;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp0 = (jint)((func_nro_MyVector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_101;
	}
	{
	LINE_NUMBER(872);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_104;
	}
	INST_SIPUSH(300);
	goto label_105;
label_104:;
	INST_BIPUSH(100);
label_105:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(873);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(874);
	frame[5].i = (jint(2147483647));
	LINE_NUMBER(875);
	frame[6].i = (jint(0));
	}
label_109:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_110;
	}
	{
	LINE_NUMBER(876);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_nro_ItemMap, sp[0].o));
	LINE_NUMBER(877);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isValidAutoPickItem_nro_ItemMap_nro_Char_R_boolean(ctx, (frame[7].o), (frame[2].o));
	if (temp0 == 0) goto label_113;
	}
	{
	LINE_NUMBER(878);
	jint temp0 = (jint)SM_nro_Res_distance_int_int_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), ((jint)((nro_ItemMap *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((nro_ItemMap *) NULL_CHECK((frame[7].o)))->F_y));
	frame[8].i = temp0;
	LINE_NUMBER(879);
	if ((frame[8].i) >= (frame[3].i)) goto label_113;
	}
	{
	if ((frame[8].i) >= (frame[5].i)) goto label_113;
	}
	{
	LINE_NUMBER(880);
	frame[5].i = (frame[8].i);
	LINE_NUMBER(881);
	frame[4].o = (frame[7].o);
	}
label_113:;
	{
	LINE_NUMBER(875);
	INST_IINC(6, 1);
	goto label_109;
	}
label_110:;
	{
	LINE_NUMBER(885);
	if ((frame[4].o) == nullptr) goto label_101;
	}
	{
	LINE_NUMBER(886);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTimePick = (frame[0].l);
	LINE_NUMBER(887);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_x)));
	frame[6].i = temp0;
	LINE_NUMBER(888);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_y)));
	frame[7].i = temp1;
	LINE_NUMBER(889);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_122;
	}
	{
	if ((frame[6].i) > (50)) goto label_123;
	}
	{
	if ((frame[7].i) <= (40)) goto label_122;
	}
label_123:;
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isAutoTraining_R_boolean(ctx);
	if (temp0 == 0) goto label_124;
	}
	{
	LINE_NUMBER(891);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx = ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_x);
	LINE_NUMBER(892);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy = ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(893);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(894);
	sp[0].o = frame[4].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_countAutoPick = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_countAutoPick) + (jint(1)));
	LINE_NUMBER(895);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_pickItem_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_pickItem_int])(ctx, sp[0].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_itemMapID));
	LINE_NUMBER(896);
	popStackFrame(ctx);
	return;
	}
label_124:;
	{
	LINE_NUMBER(897);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_131;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_x);
	LINE_NUMBER(898);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 > (24)) goto label_131;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(899);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 <= (24)) goto label_122;
	}
label_131:;
	{
	LINE_NUMBER(900);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_itemFocus = (jref) (frame[4].o);
	LINE_NUMBER(901);
	sp[0].o = frame[2].o;
	clinit_nro_MovePoint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MovePoint);
	init_nro_MovePoint_int_int(ctx, sp[1].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_y));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) sp[1].o;
	LINE_NUMBER(902);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) <= ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_x)) goto label_136;
	}
	INST_ICONST(-1);
	goto label_137;
label_136:;
	INST_ICONST(1);
label_137:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(903);
	sp[0].o = frame[2].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (checkCast(ctx, &class_nro_IActionListener, (jobject(nullptr)))), (8002), (jobject(nullptr)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_endMovePointCommand = (jref) sp[1].o;
	}
label_122:;
	{
	LINE_NUMBER(907);
	sp[0].o = frame[4].o;
	((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_countAutoPick = (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_countAutoPick) + (jint(1)));
	LINE_NUMBER(908);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_pickItem_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_pickItem_int])(ctx, sp[0].o, ((jint)((nro_ItemMap *) NULL_CHECK((frame[4].o)))->F_itemMapID));
	}
label_101:;
	{
	LINE_NUMBER(914);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_140;
	}
	{
	LINE_NUMBER(915);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isAutoTraining_R_boolean(ctx);
	frame[3].i = temp0;
	LINE_NUMBER(916);
	if ((frame[3].i) == 0) goto label_143;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->i = SF_nro_GameScr_canAutoPlay;
	if ((--sp)->i == 0) goto label_143;
	{
	LINE_NUMBER(917);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAutoPlay = (jint(1));
	}
label_143:;
	{
	LINE_NUMBER(920);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_skillPaint;
	if (sp[0].o != nullptr) goto label_145;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_dart;
	if (sp[0].o == nullptr) goto label_146;
	}
label_145:;
	LINE_NUMBER(921);
	popStackFrame(ctx);
	INST_RETURN();
label_146:;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_mobFocus;
	frame[4].o = sp[0].o;
	LINE_NUMBER(925);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isValidTarget_nro_Mob_R_boolean(ctx, (frame[4].o));
	if (temp0 != 0) goto label_148;
	}
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)SM_nro_AutoTrainMenu_findBestTargetMob_nro_Char_R_nro_Mob(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(927);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_mobFocus = (jref) (frame[4].o);
	LINE_NUMBER(928);
	if ((frame[4].o) == nullptr) goto label_148;
	}
	{
	LINE_NUMBER(929);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(930);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(931);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_npcFocus = (jref) (jobject(nullptr));
	}
label_148:;
	{
	LINE_NUMBER(937);
	sp[0].o = frame[4].o;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_currentTargetMob;
	if (sp[0].o == sp[1].o) goto label_155;
	}
	{
	LINE_NUMBER(938);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTargetMob = (frame[4].o);
	LINE_NUMBER(939);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_targetStartTime = (frame[0].l);
	LINE_NUMBER(940);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastHitTime = (frame[0].l);
	LINE_NUMBER(941);
	if ((frame[4].o) == nullptr) goto label_160;
	}
	{
	jlong temp0 = (jlong)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_cur;
	sp[0].l = temp0;
	sp += 1;
	goto label_161;
	}
label_160:;
	(sp++)->l = jlong(-1ll);
label_161:;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTargetHp = (--sp)->l;
	goto label_162;
label_155:;
	{
	LINE_NUMBER(942);
	if ((frame[4].o) == nullptr) goto label_162;
	}
	{
	LINE_NUMBER(943);
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_cur), (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastTargetHp))) >= 0) goto label_164;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_cur), (jlong(0)))) <= 0) goto label_164;
	}
	{
	LINE_NUMBER(944);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTargetHp = ((jlong)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_cur);
	LINE_NUMBER(945);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastHitTime = (frame[0].l);
	}
label_164:;
	{
	LINE_NUMBER(947);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastHitTime)), (jlong(3500ll)))) > 0) goto label_167;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_targetStartTime)), (jlong(6000ll)))) <= 0) goto label_162;
	}
label_167:;
	{
	LINE_NUMBER(948);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_unreachableMobIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y1));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, ((frame[0].l) + (jlong(10000ll))));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(949);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(950);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(951);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTargetMob = (jobject(nullptr));
	LINE_NUMBER(952);
	sp[0].o = (jobject)SM_nro_AutoTrainMenu_findBestTargetMob_nro_Char_R_nro_Mob(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(953);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_mobFocus = (jref) (frame[4].o);
	LINE_NUMBER(954);
	if ((frame[4].o) == nullptr) goto label_162;
	}
	{
	LINE_NUMBER(955);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(956);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(957);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(958);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTargetMob = (frame[4].o);
	LINE_NUMBER(959);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_targetStartTime = (frame[0].l);
	LINE_NUMBER(960);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastHitTime = (frame[0].l);
	LINE_NUMBER(961);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTargetHp = ((jlong)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_cur);
	}
label_162:;
	{
	LINE_NUMBER(966);
	if ((frame[4].o) != nullptr) goto label_181;
	}
	{
	LINE_NUMBER(967);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob) == 0) goto label_183;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastZoneChangeTime)), (jlong(10000ll)))) < 0) goto label_183;
	}
	{
	LINE_NUMBER(968);
	SM_nro_AutoTrainMenu_autoChangeZone(ctx);
	LINE_NUMBER(969);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastZoneChangeTime = (frame[0].l);
	}
label_183:;
	LINE_NUMBER(971);
	popStackFrame(ctx);
	INST_RETURN();
label_181:;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)SM_nro_AutoTrainMenu_selectSkillToAttack_nro_Char_R_nro_Skill(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(975);
	if ((frame[5].o) != nullptr) goto label_187;
	}
	LINE_NUMBER(976);
	popStackFrame(ctx);
	INST_RETURN();
label_187:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_myskill;
	if (sp[0].o == (frame[5].o)) goto label_189;
	}
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_doSelectSkill_nro_Skill_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_doSelectSkill_nro_Skill_boolean_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)), (jint(1)));
	}
label_189:;
	{
	LINE_NUMBER(981);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[5].o)))->F_template;
	if (sp[0].o == nullptr) goto label_191;
	}
	{
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[5].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_type) == (jint(3))) goto label_192;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isSelectingSkillUseAlone_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Char_isSelectingSkillUseAlone_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_191;
	}
label_192:;
	{
	LINE_NUMBER(982);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAttackTime)), (jlong(400ll)))) < 0) goto label_193;
	}
	{
	LINE_NUMBER(983);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)), (jint(1)));
	LINE_NUMBER(984);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAttackTime = (frame[0].l);
	}
label_193:;
	LINE_NUMBER(986);
	popStackFrame(ctx);
	INST_RETURN();
label_191:;
	{
	LINE_NUMBER(989);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x)));
	frame[6].i = temp0;
	LINE_NUMBER(990);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y)));
	frame[7].i = temp1;
	LINE_NUMBER(991);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (20), ((jint)((nro_Skill *) NULL_CHECK((frame[5].o)))->F_dx));
	frame[8].i = temp2;
	LINE_NUMBER(992);
	jint temp3 = 20;
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((nro_Skill *) NULL_CHECK((frame[5].o)))->F_dy), (30));
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, temp4);
	frame[9].i = temp5;
	LINE_NUMBER(994);
	if ((frame[3].i) == 0) goto label_200;
	}
	{
	LINE_NUMBER(997);
	if ((frame[6].i) > (frame[8].i)) goto label_202;
	}
	{
	if ((frame[7].i) <= (frame[9].i)) goto label_203;
	}
label_202:;
	{
	LINE_NUMBER(998);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastTeleportTime)), (jlong(350ll)))) < 0) goto label_203;
	}
	{
	LINE_NUMBER(999);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x)) goto label_205;
	}
	INST_BIPUSH(20);
	goto label_206;
label_205:;
	INST_BIPUSH(-20);
label_206:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1000);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx = (((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x) + (frame[10].i));
	LINE_NUMBER(1001);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy = ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(1002);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x)) goto label_210;
	}
	INST_ICONST(-1);
	goto label_211;
label_210:;
	INST_ICONST(1);
label_211:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(1003);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1004);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), (jint(2)));
	if (temp0 != 0) goto label_214;
	}
	{
	LINE_NUMBER(1005);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_delayFall = (20);
	LINE_NUMBER(1006);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cvy = (jint(0));
	}
label_214:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(1009);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTeleportTime = (frame[0].l);
	}
label_203:;
	{
	LINE_NUMBER(1012);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), (jint(2)));
	if (temp0 != 0) goto label_218;
	}
	{
	LINE_NUMBER(1013);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_delayFall = (20);
	LINE_NUMBER(1014);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cvy = (jint(0));
	}
label_218:;
	{
	LINE_NUMBER(1016);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAttackTime)), (jlong(400ll)))) < 0) goto label_221;
	}
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)), (jint(1)));
	LINE_NUMBER(1018);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAttackTime = (frame[0].l);
	goto label_221;
	}
label_200:;
	{
	LINE_NUMBER(1023);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y) >= (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) - (24))) goto label_224;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y));
	if (temp0 == 0) goto label_224;
	}
	{
	LINE_NUMBER(1024);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findClearCeilingX_int_int_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y), ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x));
	frame[10].i = temp0;
	LINE_NUMBER(1025);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_227;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) - (frame[10].i);
	LINE_NUMBER(1026);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 > (20)) goto label_227;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) - ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(1027);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 <= (20)) goto label_230;
	}
label_227:;
	{
	LINE_NUMBER(1028);
	sp[0].o = frame[2].o;
	clinit_nro_MovePoint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MovePoint);
	init_nro_MovePoint_int_int(ctx, sp[1].o, (frame[10].i), ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) sp[1].o;
	LINE_NUMBER(1029);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) <= (frame[10].i)) goto label_232;
	}
	INST_ICONST(-1);
	goto label_233;
label_232:;
	INST_ICONST(1);
label_233:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(1030);
	sp[0].o = frame[2].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (checkCast(ctx, &class_nro_IActionListener, (jobject(nullptr)))), (8002), (jobject(nullptr)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_endMovePointCommand = (jref) sp[1].o;
	}
label_230:;
	LINE_NUMBER(1033);
	popStackFrame(ctx);
	INST_RETURN();
label_224:;
	{
	LINE_NUMBER(1036);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y) <= (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) + (24))) goto label_235;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), (jint(2)));
	if (temp0 == 0) goto label_235;
	}
	{
	LINE_NUMBER(1037);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findPlatformDropOffX_int_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x));
	frame[10].i = temp0;
	LINE_NUMBER(1038);
	if ((frame[10].i) == ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx)) goto label_235;
	}
	{
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_239;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) - (frame[10].i);
	LINE_NUMBER(1040);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 > (20)) goto label_239;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) - ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(1041);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 <= (20)) goto label_242;
	}
label_239:;
	{
	LINE_NUMBER(1042);
	sp[0].o = frame[2].o;
	clinit_nro_MovePoint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MovePoint);
	init_nro_MovePoint_int_int(ctx, sp[1].o, (frame[10].i), ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_y));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) sp[1].o;
	LINE_NUMBER(1043);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) <= (frame[10].i)) goto label_244;
	}
	INST_ICONST(-1);
	goto label_245;
label_244:;
	INST_ICONST(1);
label_245:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(1044);
	sp[0].o = frame[2].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (checkCast(ctx, &class_nro_IActionListener, (jobject(nullptr)))), (8002), (jobject(nullptr)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_endMovePointCommand = (jref) sp[1].o;
	}
label_242:;
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	INST_RETURN();
label_235:;
	{
	LINE_NUMBER(1051);
	if ((frame[6].i) > (frame[8].i)) goto label_247;
	}
	{
	if ((frame[7].i) > (frame[9].i)) goto label_247;
	}
	{
	LINE_NUMBER(1052);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[4].o)))->F_x)) goto label_249;
	}
	INST_ICONST(-1);
	goto label_250;
label_249:;
	INST_ICONST(1);
label_250:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(1053);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy), (jint(2)));
	if (temp0 != 0) goto label_247;
	}
	{
	LINE_NUMBER(1054);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_delayFall = (20);
	LINE_NUMBER(1055);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cvy = (jint(0));
	}
label_247:;
	{
	LINE_NUMBER(1059);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAttackTime)), (jlong(400ll)))) < 0) goto label_221;
	}
	{
	LINE_NUMBER(1060);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_doUseSkill_nro_Skill_boolean_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)), (jint(1)));
	LINE_NUMBER(1061);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAttackTime = (frame[0].l);
	}
label_221:;
	LINE_NUMBER(1064);
	goto label_256;
label_140:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isStandAutoAttack;
	if ((--sp)->i == 0) goto label_256;
	{
	LINE_NUMBER(1065);
	SM_nro_AutoTrainMenu_updateStandAutoAttack_nro_Char_long(ctx, (frame[2].o), (frame[0].l));
	}
label_256:;
	LINE_NUMBER(1067);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isSessionConnected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1071);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1073);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1074);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[0].o = (jobject)((nro_Service *) NULL_CHECK(sp[0].o))->F_session;
	frame[0].o = sp[0].o;
	LINE_NUMBER(1077);
	if ((isInstance(ctx, (frame[0].o), &class_lib_network_Session_ME)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1078);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_lib_network_Session_ME, (frame[0].o))))->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, (checkCast(ctx, &class_lib_network_Session_ME, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_6:;
	{
	LINE_NUMBER(1080);
	if ((frame[0].o) == nullptr) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isAutoBuyActive_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isAutoBuyActive", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1084);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoBuy) == 0) goto label_1;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_autoBuyRemaining;
	if ((--sp)->i <= 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoBuyRemaining_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoBuyRemaining", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1088);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyRemaining);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoBuyBought_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoBuyBought", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1092);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoBuyTotal_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoBuyTotal", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1096);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyTotal);
	}

	popStackFrame(ctx);
}

jbyte SM_nro_AutoTrainMenu_getAutoBuyType_R_byte(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoBuyType", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1100);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyType);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoBuyItemId_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoBuyItemId", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1104);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyItemId);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_parseAutoBuyQuantity_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:parseAutoBuyQuantity", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1108);
	if ((frame[0].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1109);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_8:;
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1111);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1112);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(1113);
	frame[2].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_0;
	}
	{
	LINE_NUMBER(1114);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(1115);
	if ((frame[3].i) < (48)) goto label_16;
	}
	{
	if ((frame[3].i) <= (57)) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(1116);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_17:;
	{
	LINE_NUMBER(1113);
	INST_IINC(2, 1);
	goto label_13;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1120);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[1].o));
	frame[2].l = temp0;
	LINE_NUMBER(1121);
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_19;
	}
	{
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_19:;
	LINE_NUMBER(1122);
	INST_ICONST(-1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1124);
	jint temp0 = jint((frame[2].l));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1125);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1126);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jlong SM_nro_AutoTrainMenu_resolveAutoBuyUnitPrice_nro_Item_byte_R_long(jcontext ctx, jobject param0, jbyte param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:resolveAutoBuyUnitPrice", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1131);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1132);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}
label_1:;
	{
	LINE_NUMBER(1133);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1134);
	popStackFrame(ctx);
	return (jlong(((jint)((nro_Item *) NULL_CHECK((frame[0].o)))->F_buyCoin)));
	}
label_3:;
	{
	LINE_NUMBER(1135);
	if ((frame[1].i) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(1136);
	popStackFrame(ctx);
	return (jlong(((jint)((nro_Item *) NULL_CHECK((frame[0].o)))->F_buyGold)));
	}
label_5:;
	{
	LINE_NUMBER(1137);
	if ((frame[1].i) != (jint(3))) goto label_7;
	}
	{
	LINE_NUMBER(1138);
	popStackFrame(ctx);
	return (jlong(((jint)((nro_Item *) NULL_CHECK((frame[0].o)))->F_buySpec)));
	}
label_7:;
	{
	LINE_NUMBER(1139);
	popStackFrame(ctx);
	return (jlong(-1ll));
	}

	popStackFrame(ctx);
}

jobject SM_nro_AutoTrainMenu_checkAutoBuyCurrencyError_nro_Char_byte_long_R_java_lang_String(jcontext ctx, jobject param0, jbyte param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:checkAutoBuyCurrencyError", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(1143);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1144);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng t\u00ecm th\u1ea5y nh\u00e2n v\u1eadt"_j)));
	}
label_1:;
	{
	LINE_NUMBER(1145);
	if ((longCompare((frame[2].l), (jlong(0)))) > 0) goto label_3;
	}
	{
	LINE_NUMBER(1146);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(1147);
	if ((frame[1].i) != 0) goto label_5;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xu), (frame[2].l))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(1148);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng \u0111\u1ee7 v\u00e0ng"_j)));
	}
label_5:;
	{
	LINE_NUMBER(1150);
	if ((frame[1].i) != (jint(1))) goto label_7;
	}
	{
	jint temp0 = (jint)((func_nro_Char_checkLuong_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_checkLuong_R_int])(ctx, (frame[0].o));
	if ((longCompare((jlong(temp0)), (frame[2].l))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1151);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng \u0111\u1ee7 ng\u1ecdc"_j)));
	}
label_7:;
	{
	LINE_NUMBER(1153);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_startAutoBuy_nro_Item_byte_int(jcontext ctx, jobject param0, jbyte param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:startAutoBuy", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1157);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i > 0) goto label_2;
label_1:;
	LINE_NUMBER(1158);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1159);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	if ((frame[1].i) == (jint(1))) goto label_3;
	}
	{
	if ((frame[1].i) == (jint(3))) goto label_3;
	}
	LINE_NUMBER(1160);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1161);
	jlong temp0 = (jlong)SM_nro_AutoTrainMenu_resolveAutoBuyUnitPrice_nro_Item_byte_R_long(ctx, (frame[0].o), (frame[1].i));
	frame[3].l = temp0;
	LINE_NUMBER(1162);
	if ((longCompare((frame[3].l), (jlong(0)))) > 0) goto label_6;
	}
	LINE_NUMBER(1163);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(1166);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1167);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ID "_j))));
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_id));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1168);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1169);
	sp[0].o = (jobject)SM_nro_AutoTrainMenu_checkAutoBuyCurrencyError_nro_Char_byte_long_R_java_lang_String(ctx, (frame[6].o), (frame[1].i), (frame[3].l));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1170);
	if ((frame[7].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1171);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(1172);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" \u0111\u1ec3 mua "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1173);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(1176);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoBuy = (jint(1));
	LINE_NUMBER(1177);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyType = (frame[1].i);
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyItemId = ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id);
	LINE_NUMBER(1179);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyItemName = (frame[5].o);
	LINE_NUMBER(1180);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyUnitPrice = (frame[3].l);
	LINE_NUMBER(1181);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyTotal = (frame[2].i);
	LINE_NUMBER(1182);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyRemaining = (frame[2].i);
	LINE_NUMBER(1183);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyBought = (jint(0));
	LINE_NUMBER(1184);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoBuyTime = (jlong(0));
	LINE_NUMBER(1185);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng mua: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_autoBuyItemName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:stopAutoBuy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1189);
	frame[1].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoBuy);
	LINE_NUMBER(1190);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoBuy = (jint(0));
	LINE_NUMBER(1191);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyType = (jint(-1));
	LINE_NUMBER(1192);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyItemId = (jint(-1));
	LINE_NUMBER(1193);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyItemName = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(1194);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyUnitPrice = (jlong(0));
	LINE_NUMBER(1195);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyTotal = (jint(0));
	LINE_NUMBER(1196);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyRemaining = (jint(0));
	LINE_NUMBER(1197);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyBought = (jint(0));
	LINE_NUMBER(1198);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoBuyTime = (jlong(0));
	LINE_NUMBER(1199);
	if ((frame[1].i) == 0) goto label_11;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_11;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1200);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(1202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_onServerInfoMessage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:onServerInfoMessage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1205);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoBuy) == 0) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1209);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"kh\u00f4ng \u0111\u1ee7"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ch\u1ed7 tr\u1ed1ng"_j));
	LINE_NUMBER(1210);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"h\u00e0nh trang \u0111\u1ea7y"_j));
	LINE_NUMBER(1211);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"h\u00e0nh trang \u0111\u00e3 \u0111\u1ea7y"_j));
	LINE_NUMBER(1212);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\u0111\u1ea7y r\u01b0\u01a1ng"_j));
	LINE_NUMBER(1213);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"kh\u00f4ng th\u1ec3 mua"_j));
	LINE_NUMBER(1214);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"h\u1ebft h\u00e0ng"_j));
	LINE_NUMBER(1215);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"c\u00f2n thi\u1ebfu"_j));
	LINE_NUMBER(1216);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bag is full"_j));
	LINE_NUMBER(1217);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"not enough"_j));
	LINE_NUMBER(1218);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
label_4:;
	{
	LINE_NUMBER(1219);
	frame[2].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought);
	LINE_NUMBER(1220);
	frame[3].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyTotal);
	LINE_NUMBER(1221);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoBuyItemName;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1222);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 mua ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(1224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateAutoBuy_long(jcontext ctx, jlong param0) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateAutoBuy", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1227);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoBuy) != 0) goto label_1;
	}
	LINE_NUMBER(1228);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1229);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyRemaining) <= 0) goto label_3;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_autoBuyItemId;
	if ((--sp)->i >= 0) goto label_4;
label_3:;
	{
	LINE_NUMBER(1230);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(1231);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(1233);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(ctx);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1234);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(1235);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(1237);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1238);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1239);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(1240);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(1242);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_13;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isLoading;
	if ((--sp)->i != 0) goto label_13;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_instance;
	if ((--sp)->o == nullptr) goto label_14;
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mobCapcha;
	if (sp[0].o == nullptr) goto label_14;
	}
label_13:;
	LINE_NUMBER(1244);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(1246);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_meDead) != 0) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) == (14)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) == (jint(5))) goto label_15;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHP), (jlong(0)))) > 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(1247);
	frame[3].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought);
	LINE_NUMBER(1248);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyTotal);
	LINE_NUMBER(1249);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoBuyItemName;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1250);
	if ((frame[3].i) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(1251);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 mua ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"): Nh\u00e2n v\u1eadt ki\u1ec7t s\u1ee9c!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_22;
	}
label_20:;
	LINE_NUMBER(1252);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng th\u1ec3 mua khi \u0111ang ki\u1ec7t s\u1ee9c!"_j));
label_22:;
	{
	sp -= 1;
	LINE_NUMBER(1250);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1253);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(1255);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(1256);
	frame[3].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought);
	LINE_NUMBER(1257);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyTotal);
	LINE_NUMBER(1258);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoBuyItemName;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1259);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 mua ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1260);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(1262);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoBuyTime), (jlong(0)))) == 0) goto label_30;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoBuyTime)), (jlong(200ll)))) >= 0) goto label_30;
	}
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(1265);
	sp[0].o = (jobject)SM_nro_AutoTrainMenu_checkAutoBuyCurrencyError_nro_Char_byte_long_R_java_lang_String(ctx, (frame[2].o), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyType), (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoBuyUnitPrice));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1266);
	if ((frame[3].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(1267);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought);
	LINE_NUMBER(1268);
	frame[5].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyTotal);
	LINE_NUMBER(1269);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoBuyItemName;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1270);
	if ((frame[4].i) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(1271);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 mua ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"): "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(1272);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" \u0111\u1ec3 mua "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_40:;
	{
	sp -= 1;
	LINE_NUMBER(1270);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1273);
	popStackFrame(ctx);
	return;
	}
label_33:;
	{
	LINE_NUMBER(1276);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoBuyTime = (frame[0].l);
	LINE_NUMBER(1277);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyType);
	LINE_NUMBER(1278);
	frame[5].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyItemId);
	LINE_NUMBER(1279);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyRemaining = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyRemaining) - (jint(1)));
	LINE_NUMBER(1280);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyBought = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought) + (jint(1)));
	LINE_NUMBER(1281);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyRemaining) > 0) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1282);
	frame[7].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoBuyBought);
	LINE_NUMBER(1283);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoBuyItemName;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1285);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_buyItem_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_buyItem_byte_int_int])(ctx, sp[0].o, (frame[4].i), (frame[5].i), (jint(0)));
	LINE_NUMBER(1287);
	if ((frame[6].i) == 0) goto label_53;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoBuy;
	if ((--sp)->i == 0) goto label_53;
	{
	LINE_NUMBER(1288);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 mua xong "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String(ctx, sp[0].o);
	}
label_53:;
	LINE_NUMBER(1290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isAutoUseActive_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isAutoUseActive", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1293);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoUse);
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isAutoUseItem_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isAutoUseItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1297);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoUse) == 0) goto label_1;
	}
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseItemId) != (frame[0].i)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoUseItemId_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoUseItemId", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1301);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseItemId);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoUseTotal_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoUseTotal", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1305);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoUseRemaining_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoUseRemaining", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1309);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseRemaining);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getAutoUseUsed_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoUseUsed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1313);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseUsed);
	}

	popStackFrame(ctx);
}

jlong SM_nro_AutoTrainMenu_getAutoUseDelayMs_R_long(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoUseDelayMs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	return (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs);
	}

	popStackFrame(ctx);
}

jobject SM_nro_AutoTrainMenu_getAutoUseDelayFormatted_R_java_lang_String(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getAutoUseDelayFormatted", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1321);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs), (jlong(1000ll)))) < 0) goto label_1;
	}
	{
	if ((longCompare(((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs) % (jlong(1000ll))), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1322);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs) / (jlong(1000ll))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"s"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1324);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs), (jlong(1000ll)))) < 0) goto label_3;
	}
	{
	LINE_NUMBER(1325);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_US;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"%.1fs"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs))) / (jfloat(1000.0f))));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)SM_java_lang_String_format_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1327);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ms"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_parseAutoUseQuantity_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:parseAutoUseQuantity", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1331);
	if ((frame[0].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1332);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_8:;
	{
	LINE_NUMBER(1333);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[^0-9]"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1334);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(1335);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1337);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[1].o));
	frame[2].l = temp0;
	LINE_NUMBER(1338);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1339);
	INST_ICONST(-1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1340);
	if ((longCompare((frame[2].l), (jlong(99999ll)))) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(1341);
	frame[2].l = (jlong(99999ll));
	}
label_14:;
	{
	LINE_NUMBER(1342);
	jint temp0 = jint((frame[2].l));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1343);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1344);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jlong SM_nro_AutoTrainMenu_parseAutoUseDelayMs_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:parseAutoUseDelayMs", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1349);
	if ((frame[0].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1350);
	popStackFrame(ctx);
	return (jlong(1000ll));
	}
label_11:;
	{
	LINE_NUMBER(1351);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"s"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ms"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1352);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(1353);
	popStackFrame(ctx);
	return (jlong(1000ll));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1355);
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(1356);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) > 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1357);
	(sp++)->l = jlong(1000ll);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1358);
	if ((floatCompare((frame[2].f), (jfloat(50.0f)), -1)) <= 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1359);
	frame[3].l = (jlong((frame[2].f)));
	LINE_NUMBER(1360);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (frame[3].l), (jlong(400ll)));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1362);
	frame[3].l = (jlong(((frame[2].f) * (jfloat(1000.0f)))));
	LINE_NUMBER(1363);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (frame[3].l), (jlong(400ll)));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1364);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1365);
	popStackFrame(ctx);
	return (jlong(1000ll));
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_findBagItemIndexByTemplateId_nro_Char_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:findBagItemIndexByTemplateId", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1370);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i >= 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(1371);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(1372);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1374);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) != (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(1375);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_7:;
	{
	LINE_NUMBER(1372);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1378);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_startAutoUse_nro_Item_int_long(jcontext ctx, jobject param0, jint param1, jlong param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:startAutoUse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(1382);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	LINE_NUMBER(1383);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1384);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1385);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	LINE_NUMBER(1386);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1387);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findBagItemIndexByTemplateId_nro_Char_int_R_int(ctx, sp[0].o, ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_id));
	frame[5].i = temp0;
	LINE_NUMBER(1388);
	if ((frame[5].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(1389);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng t\u00ecm th\u1ea5y "_j))));
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[1].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" trong h\u00e0nh trang!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1390);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(1393);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1394);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1395);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ID "_j))));
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_id));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1397);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoUse = (jint(1));
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseItemId = ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id);
	LINE_NUMBER(1399);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseItemName = (frame[6].o);
	LINE_NUMBER(1400);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (jint(0)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseTotal = temp0;
	LINE_NUMBER(1401);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseRemaining = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal);
	LINE_NUMBER(1402);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseUsed = (jint(0));
	LINE_NUMBER(1403);
	jlong temp1 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (frame[2].l), (jlong(400ll)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseDelayMs = temp1;
	LINE_NUMBER(1404);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoUseTime = (jlong(0));
	LINE_NUMBER(1406);
	sp[0].o = (jobject)SM_nro_AutoTrainMenu_getAutoUseDelayFormatted_R_java_lang_String(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1407);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(1408);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"B\u1eaft \u0111\u1ea7u t\u1ef1 d\u00f9ng "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" (delay "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/l\u1ea7n)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(1410);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"B\u1eaft \u0111\u1ea7u t\u1ef1 d\u00f9ng "_j))));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" \u0111\u1ebfn khi h\u1ebft (delay "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/l\u1ea7n)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	}
label_25:;
	LINE_NUMBER(1412);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:stopAutoUse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1415);
	frame[1].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoUse);
	LINE_NUMBER(1416);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoUse = (jint(0));
	LINE_NUMBER(1417);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseItemId = (jint(-1));
	LINE_NUMBER(1418);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseItemName = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(1419);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseTotal = (jint(0));
	LINE_NUMBER(1420);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseRemaining = (jint(0));
	LINE_NUMBER(1421);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseUsed = (jint(0));
	LINE_NUMBER(1422);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseDelayMs = (jlong(1000ll));
	LINE_NUMBER(1423);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoUseTime = (jlong(0));
	LINE_NUMBER(1424);
	if ((frame[1].i) == 0) goto label_10;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_10;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1425);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(1427);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateAutoUse_long(jcontext ctx, jlong param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateAutoUse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1430);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoUse) != 0) goto label_1;
	}
	LINE_NUMBER(1431);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1432);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal) <= 0) goto label_3;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_autoUseRemaining;
	if ((--sp)->i > 0) goto label_3;
	{
	LINE_NUMBER(1433);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u00f9ng xong "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1434);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(1436);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(ctx);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1437);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(1438);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1441);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1442);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, (jobject(nullptr)));
	LINE_NUMBER(1443);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(1445);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_13;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isLoading;
	if ((--sp)->i != 0) goto label_13;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_instance;
	if ((--sp)->o == nullptr) goto label_14;
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mobCapcha;
	if (sp[0].o == nullptr) goto label_14;
	}
label_13:;
	LINE_NUMBER(1447);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(1449);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_meDead) != 0) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) == (14)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) == (jint(5))) goto label_15;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHP), (jlong(0)))) > 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(1450);
	frame[3].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseUsed);
	LINE_NUMBER(1451);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal);
	LINE_NUMBER(1452);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1453);
	if ((frame[3].i) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(1454);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 d\u00f9ng ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp += 1;
	if ((frame[4].i) <= 0) goto label_22;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_23;
	}
label_22:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_23:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"): Nh\u00e2n v\u1eadt ki\u1ec7t s\u1ee9c!"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_24;
	}
label_20:;
	LINE_NUMBER(1456);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng th\u1ec3 d\u00f9ng khi \u0111ang ki\u1ec7t s\u1ee9c!"_j));
label_24:;
	{
	sp -= 1;
	LINE_NUMBER(1453);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1457);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(1459);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(1460);
	frame[3].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseUsed);
	LINE_NUMBER(1461);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal);
	LINE_NUMBER(1462);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1463);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 d\u00f9ng ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp += 1;
	if ((frame[4].i) <= 0) goto label_31;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_32;
	}
label_31:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_32:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1464);
	popStackFrame(ctx);
	return;
	}
label_26:;
	{
	LINE_NUMBER(1466);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoUseTime), (jlong(0)))) == 0) goto label_34;
	}
	{
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoUseTime)), (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_autoUseDelayMs))) >= 0) goto label_34;
	}
	LINE_NUMBER(1467);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
	{
	LINE_NUMBER(1470);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findBagItemIndexByTemplateId_nro_Char_int_R_int(ctx, (frame[2].o), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseItemId));
	frame[3].i = temp0;
	LINE_NUMBER(1471);
	if ((frame[3].i) != (jint(-1))) goto label_37;
	}
	{
	LINE_NUMBER(1472);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseUsed);
	LINE_NUMBER(1473);
	frame[5].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal);
	LINE_NUMBER(1474);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1475);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 h\u1ebft "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" trong h\u00e0nh trang! (\u0110\u00e3 d\u00f9ng "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(1476);
	sp += 1;
	if ((frame[5].i) <= 0) goto label_43;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_44;
	}
label_43:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_44:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(1475);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1477);
	popStackFrame(ctx);
	return;
	}
label_37:;
	{
	LINE_NUMBER(1480);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoUseTime = (frame[0].l);
	LINE_NUMBER(1481);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseUsed = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseUsed) + (jint(1)));
	LINE_NUMBER(1482);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal) <= 0) goto label_49;
	}
	{
	LINE_NUMBER(1483);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseRemaining = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseRemaining) - (jint(1)));
	}
label_49:;
	{
	LINE_NUMBER(1485);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal) <= 0) goto label_51;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_autoUseRemaining;
	if ((--sp)->i > 0) goto label_51;
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1486);
	frame[5].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoUseTotal);
	LINE_NUMBER(1487);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoUseItemName;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1489);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_useItem_byte_byte_byte_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_useItem_byte_byte_byte_short])(ctx, sp[0].o, (jint(0)), (jint(1)), (jbyte((frame[3].i))), (jint(-1)));
	LINE_NUMBER(1491);
	if ((frame[4].i) == 0) goto label_57;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoUse;
	if ((--sp)->i == 0) goto label_57;
	{
	LINE_NUMBER(1492);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 s\u1eed d\u1ee5ng xong "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, sp[0].o);
	}
label_57:;
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateAutoChat_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateAutoChat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1497);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoChat) != 0) goto label_1;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoChatTG;
	if ((--sp)->i != 0) goto label_1;
	LINE_NUMBER(1498);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1499);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_3;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_isLoadingMap;
	if ((--sp)->i == 0) goto label_4;
label_3:;
	LINE_NUMBER(1500);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1501);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(ctx);
	if (temp0 != 0) goto label_5;
	}
	LINE_NUMBER(1502);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1504);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoChat) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1505);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_textAutoChat;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_textAutoChat;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(1506);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChat = (jint(0));
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(1507);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoChatTime)), (jlong(4000ll)))) < 0) goto label_7;
	}
	{
	LINE_NUMBER(1508);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTime = (frame[0].l);
	LINE_NUMBER(1509);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_textAutoChat;
	((func_nro_Service_chat_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_chat_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1513);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoChatTG) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1514);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_textAutoChatTG;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_textAutoChatTG;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(1515);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	goto label_13;
	}
label_16:;
	{
	LINE_NUMBER(1516);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoChatTGTime)), (jlong(30000ll)))) < 0) goto label_13;
	}
	{
	LINE_NUMBER(1517);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((func_nro_Char_checkLuong_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_checkLuong_R_int])(ctx, sp[0].o);
	if (temp0 >= (jint(5))) goto label_18;
	}
	{
	LINE_NUMBER(1518);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	LINE_NUMBER(1519);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng \u0111\u1ee7 5 ng\u1ecdc, \u0111\u00e3 d\u1eebng Auto chat th\u1ebf gi\u1edbi!"_j))));
	goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(1521);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTGTime = (frame[0].l);
	LINE_NUMBER(1522);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_textAutoChatTG;
	((func_nro_Service_chatGlobal_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_chatGlobal_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	LINE_NUMBER(1526);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateAutoWakeUp_long(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateAutoWakeUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1529);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoWakeUp) != 0) goto label_1;
	}
	LINE_NUMBER(1530);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1531);
	if ((longCompare(((frame[0].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoWakeUpTime)), (jlong(1000ll)))) >= 0) goto label_3;
	}
	LINE_NUMBER(1532);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1533);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1534);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_isLoadingMap;
	if ((--sp)->i == 0) goto label_7;
label_6:;
	LINE_NUMBER(1535);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(1536);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHP), (jlong(0)))) <= 0) goto label_8;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_meDead) != 0) goto label_8;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isDie) != 0) goto label_8;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_statusMe) != (14)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(1537);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoWakeUpTime = (frame[0].l);
	LINE_NUMBER(1538);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(ctx);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1539);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_wakeUpFromDead) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_wakeUpFromDead])(ctx, sp[0].o);
	LINE_NUMBER(1540);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1541);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu = (jint(0));
	}
label_9:;
	LINE_NUMBER(1545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateAutoLogin(jcontext ctx) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateAutoLogin", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1548);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(1549);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoLogin) != 0) goto label_2;
	}
	LINE_NUMBER(1550);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1551);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1552);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	LINE_NUMBER(1553);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1554);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = (jint(0));
	LINE_NUMBER(1555);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(1556);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(1559);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ServerListScreen)) != 0) goto label_10;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ServerScr)) != 0) goto label_10;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_LoginScr)) != 0) goto label_10;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ChooseCharScr)) == 0) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[0].i = sp[0].i;
	LINE_NUMBER(1563);
	if ((frame[0].i) != 0) goto label_14;
	}
	LINE_NUMBER(1564);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(1567);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isLoading) == 0) goto label_16;
	}
	LINE_NUMBER(1568);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(1569);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(1571);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount) < (jint(5))) goto label_19;
	}
	{
	LINE_NUMBER(1572);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (jint(0));
	LINE_NUMBER(1573);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	LINE_NUMBER(1574);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1575);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = (jint(0));
	LINE_NUMBER(1576);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(1577);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1578);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1579);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(1580);
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 th\u1eed t\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp 5 l\u1ea7n th\u1ea5t b\u1ea1i. Vui l\u00f2ng ki\u1ec3m tra l\u1ea1i m\u1ea1ng!"_j))));
	LINE_NUMBER(1581);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(1584);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1585);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_MsgDlg)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(1586);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	frame[3].o = (checkCast(ctx, &class_nro_MsgDlg, sp[0].o));
	LINE_NUMBER(1587);
	if (((jint)((nro_MsgDlg *) NULL_CHECK((frame[3].o)))->F_isWait) == 0) goto label_35;
	}
	{
	LINE_NUMBER(1588);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_dialogDismissTimer), (jlong(0)))) != 0) goto label_37;
	}
	{
	LINE_NUMBER(1589);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (frame[1].l);
	}
label_37:;
	{
	LINE_NUMBER(1591);
	if ((longCompare(((frame[1].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_dialogDismissTimer)), (jlong(12000ll)))) >= 0) goto label_39;
	}
	LINE_NUMBER(1592);
	popStackFrame(ctx);
	INST_RETURN();
label_39:;
	{
	LINE_NUMBER(1594);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(1595);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1596);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoLoginAttempt = (frame[1].l);
	LINE_NUMBER(1597);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount) + (jint(1)));
	LINE_NUMBER(1598);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7 ph\u1ea3n h\u1ed3i ch\u1eadm, th\u1eed l\u1ea1i ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (60));
	LINE_NUMBER(1600);
	popStackFrame(ctx);
	return;
	}
label_35:;
	{
	LINE_NUMBER(1603);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1604);
	sp[0].o = (jobject)((func_nro_MsgDlg_getInfo_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String])(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(1605);
	sp[0].o = (jobject)((func_nro_MsgDlg_getInfo_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_49:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_47;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1606);
	if ((frame[8].o) == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(1607);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	}
label_51:;
	{
	LINE_NUMBER(1605);
	INST_IINC(7, 1);
	goto label_49;
	}
label_47:;
	{
	LINE_NUMBER(1610);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1611);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"m\u1eadt kh\u1ea9u"_j))));
	if (temp0 != 0) goto label_54;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"mat khau"_j))));
	if (temp0 != 0) goto label_54;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ch\u00ednh x\u00e1c"_j));
	LINE_NUMBER(1612);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_54;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"chinh xac"_j))));
	if (temp0 != 0) goto label_54;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"kh\u00f3a"_j));
	LINE_NUMBER(1613);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_54;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"khoa"_j))));
	if (temp0 != 0) goto label_54;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"t\u1ed3n t\u1ea1i"_j));
	LINE_NUMBER(1614);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_54;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"ton tai"_j))));
	if (temp0 != 0) goto label_54;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\u0111\u0103ng k\u00fd"_j));
	LINE_NUMBER(1615);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_54;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"dang ky"_j))));
	if (temp0 == 0) goto label_32;
	}
label_54:;
	{
	LINE_NUMBER(1616);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (jint(0));
	LINE_NUMBER(1617);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	LINE_NUMBER(1618);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1619);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = (jint(0));
	LINE_NUMBER(1620);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(1621);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1622);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1623);
	popStackFrame(ctx);
	return;
	}
label_32:;
	{
	LINE_NUMBER(1627);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_dialogDismissTimer), (jlong(0)))) != 0) goto label_66;
	}
	{
	LINE_NUMBER(1628);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (frame[1].l);
	LINE_NUMBER(1629);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(1630);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_initialDialogMsg = (jobject(nullptr));
	LINE_NUMBER(1631);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_MsgDlg)) == 0) goto label_71;
	}
	{
	LINE_NUMBER(1632);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	frame[3].o = (checkCast(ctx, &class_nro_MsgDlg, sp[0].o));
	LINE_NUMBER(1633);
	sp[0].o = (jobject)((func_nro_MsgDlg_getInfo_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String])(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_nro_MsgDlg_getInfo_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String])(ctx, (frame[3].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_nro_MsgDlg_getInfo_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String])(ctx, (frame[3].o));
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_71;
	}
	{
	LINE_NUMBER(1634);
	sp[0].o = (jobject)((func_nro_MsgDlg_getInfo_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String])(ctx, (frame[3].o));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_initialDialogMsg = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_71:;
	{
	LINE_NUMBER(1637);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_initialDialogMsg;
	if (sp[0].o == nullptr) goto label_75;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_initialDialogMsg;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_66;
	}
label_75:;
	{
	LINE_NUMBER(1638);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_initialDialogMsg = (((jobject) createStringLiteral(ctx, u8"M\u1ea5t k\u1ebft n\u1ed1i v\u1edbi m\u00e1y ch\u1ee7"_j)));
	}
label_66:;
	{
	LINE_NUMBER(1641);
	frame[3].l = ((frame[1].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_dialogDismissTimer));
	LINE_NUMBER(1642);
	jint temp0 = jint(0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, ((jdouble(((jlong(3000ll)) - (frame[3].l)))) / (jdouble(1000.0))));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(temp1)));
	frame[5].i = temp2;
	LINE_NUMBER(1643);
	if ((frame[5].i) == (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_lastCountdownSec)) goto label_78;
	}
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_78;
	{
	LINE_NUMBER(1644);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (frame[5].i);
	LINE_NUMBER(1645);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 k\u1ebft n\u1ed1i l\u1ea1i sau "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"s... (L\u1ea7n "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1646);
	SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"M\u1ea5t k\u1ebft n\u1ed1i"_j))), (frame[6].o), (50));
	LINE_NUMBER(1647);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_MsgDlg)) == 0) goto label_78;
	}
	{
	LINE_NUMBER(1648);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	frame[7].o = (checkCast(ctx, &class_nro_MsgDlg, sp[0].o));
	LINE_NUMBER(1649);
	sp[0].o = frame[7].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_AutoTrainMenu(ctx);
	sp[2].o = (jobject)SF_nro_AutoTrainMenu_initialDialogMsg;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_MsgDlg_setInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_78:;
	{
	LINE_NUMBER(1653);
	if ((longCompare((frame[3].l), (jlong(3000ll)))) < 0) goto label_85;
	}
	{
	LINE_NUMBER(1654);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(1655);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1656);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1657);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(1658);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_initialDialogMsg = (jobject(nullptr));
	LINE_NUMBER(1659);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoLoginAttempt = (jlong(0));
	LINE_NUMBER(1660);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	}
label_85:;
	LINE_NUMBER(1662);
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(1664);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1666);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isWaitingAutoLogin) == 0) goto label_94;
	}
	{
	LINE_NUMBER(1667);
	if ((longCompare(((frame[1].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoLoginAttempt)), (jlong(8000ll)))) >= 0) goto label_96;
	}
	LINE_NUMBER(1668);
	popStackFrame(ctx);
	INST_RETURN();
label_96:;
	{
	LINE_NUMBER(1670);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	LINE_NUMBER(1671);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount) + (jint(1)));
	}
label_94:;
	{
	LINE_NUMBER(1673);
	if ((longCompare(((frame[1].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastAutoLoginAttempt)), (jlong(1500ll)))) >= 0) goto label_99;
	}
	LINE_NUMBER(1674);
	popStackFrame(ctx);
	INST_RETURN();
label_99:;
	{
	LINE_NUMBER(1677);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (sp[0].o == nullptr) goto label_101;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_101;
	}
	{
	LINE_NUMBER(1678);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect) < 0) goto label_103;
	}
	{
	clinit_nro_ServerListScreen(ctx);
	jint temp0 = (jint)SF_nro_ServerListScreen_ipSelect;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_101;
	}
label_103:;
	{
	LINE_NUMBER(1679);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))));
	frame[3].i = temp0;
	LINE_NUMBER(1680);
	if ((frame[3].i) < 0) goto label_105;
	}
	{
	jint temp0 = frame[3].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_105;
	}
	{
	LINE_NUMBER(1681);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ipSelect = (frame[3].i);
	goto label_101;
	}
label_105:;
	{
	LINE_NUMBER(1683);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_RMS_svselect;
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(1684);
	if ((frame[4].i) < 0) goto label_108;
	}
	{
	jint temp0 = frame[4].i;
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_nameServer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_108;
	}
	{
	LINE_NUMBER(1685);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ipSelect = (frame[4].i);
	goto label_101;
	}
label_108:;
	{
	LINE_NUMBER(1687);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_ipSelect = (jint(0));
	}
label_101:;
	{
	LINE_NUMBER(1693);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ServerScr)) == 0) goto label_110;
	}
	{
	LINE_NUMBER(1694);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))));
	frame[3].i = temp0;
	LINE_NUMBER(1695);
	if ((frame[3].i) >= 0) goto label_113;
	}
	{
	LINE_NUMBER(1696);
	frame[3].i = (jint(0));
	}
label_113:;
	{
	LINE_NUMBER(1698);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, (frame[3].i), (jint(0)));
	LINE_NUMBER(1699);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o != nullptr) goto label_116;
	}
	{
	LINE_NUMBER(1700);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerListScreen);
	init_nro_ServerListScreen(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScreen = sp[0].o;
	}
label_116:;
	{
	LINE_NUMBER(1702);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_selectServer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_selectServer])(ctx, sp[0].o);
	LINE_NUMBER(1703);
	SM_nro_ServerListScreen_ConnectIP(ctx);
	LINE_NUMBER(1704);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(1705);
	popStackFrame(ctx);
	return;
	}
label_110:;
	{
	LINE_NUMBER(1708);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ServerListScreen)) == 0) goto label_121;
	}
	{
	LINE_NUMBER(1709);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_isGetData) != 0) goto label_123;
	}
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_loadScreen;
	if ((--sp)->i != 0) goto label_124;
label_123:;
	LINE_NUMBER(1710);
	popStackFrame(ctx);
	INST_RETURN();
label_124:;
	{
	LINE_NUMBER(1712);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1713);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1714);
	if ((frame[3].o) == nullptr) goto label_127;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_127;
	}
	{
	LINE_NUMBER(1715);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"acc"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_127:;
	{
	LINE_NUMBER(1717);
	if ((frame[4].o) == nullptr) goto label_129;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_129;
	}
	{
	LINE_NUMBER(1718);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pass"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_129:;
	{
	LINE_NUMBER(1720);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o == nullptr) goto label_131;
	}
	{
	LINE_NUMBER(1721);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_selectServer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_selectServer])(ctx, sp[0].o);
	}
label_131:;
	{
	LINE_NUMBER(1723);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount) + (jint(1)));
	LINE_NUMBER(1724);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(1));
	LINE_NUMBER(1725);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoLoginAttempt = (frame[1].l);
	LINE_NUMBER(1726);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\u0110ang k\u1ebft n\u1ed1i v\u00e0o game ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (80));
	LINE_NUMBER(1728);
	SM_nro_ServerListScreen_Login_New(ctx);
	LINE_NUMBER(1729);
	popStackFrame(ctx);
	return;
	}
label_121:;
	{
	LINE_NUMBER(1732);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_LoginScr)) == 0) goto label_138;
	}
	{
	LINE_NUMBER(1733);
	if ((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_isUpdateAll) == 0) goto label_140;
	}
	LINE_NUMBER(1734);
	popStackFrame(ctx);
	INST_RETURN();
label_140:;
	{
	LINE_NUMBER(1736);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	frame[3].o = (checkCast(ctx, &class_nro_LoginScr, sp[0].o));
	LINE_NUMBER(1737);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_143;
	}
	{
	LINE_NUMBER(1738);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = (frame[3].o);
	}
label_143:;
	{
	LINE_NUMBER(1740);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1741);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1742);
	if ((frame[4].o) == nullptr) goto label_147;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_148;
	}
label_147:;
	{
	LINE_NUMBER(1743);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	frame[4].o = sp[0].o;
	}
label_148:;
	{
	LINE_NUMBER(1745);
	if ((frame[5].o) == nullptr) goto label_149;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_150;
	}
label_149:;
	{
	LINE_NUMBER(1746);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	frame[5].o = sp[0].o;
	}
label_150:;
	{
	LINE_NUMBER(1749);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect) < 0) goto label_151;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_152;
	}
label_151:;
	LINE_NUMBER(1750);
	INST_ACONST_NULL();
label_152:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1751);
	if ((frame[6].o) == nullptr) goto label_154;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_154;
	}
	INST_ICONST(1);
	goto label_155;
label_154:;
	INST_ICONST(0);
label_155:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1752);
	if ((frame[4].o) == nullptr) goto label_157;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_157;
	}
	INST_ICONST(1);
	goto label_158;
label_157:;
	INST_ICONST(0);
label_158:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(1753);
	if ((frame[5].o) == nullptr) goto label_160;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_160;
	}
	INST_ICONST(1);
	goto label_161;
label_160:;
	INST_ICONST(0);
label_161:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(1755);
	if ((frame[7].i) != 0) goto label_163;
	}
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_164;
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_163;
label_164:;
	LINE_NUMBER(1756);
	popStackFrame(ctx);
	INST_RETURN();
label_163:;
	{
	LINE_NUMBER(1759);
	if ((frame[8].i) == 0) goto label_165;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_165;
	{
	LINE_NUMBER(1760);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"acc"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1761);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pass"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1762);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[3].o)))->F_tfUser;
	if (sp[0].o == nullptr) goto label_169;
	}
	{
	LINE_NUMBER(1763);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[3].o)))->F_tfUser;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[4].o));
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_169:;
	{
	LINE_NUMBER(1765);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[3].o)))->F_tfPass;
	if (sp[0].o == nullptr) goto label_165;
	}
	{
	LINE_NUMBER(1766);
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK((frame[3].o)))->F_tfPass;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_165:;
	{
	LINE_NUMBER(1770);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_172;
	}
	{
	LINE_NUMBER(1771);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(1772);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_setClientType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_setClientType])(ctx, sp[0].o);
	}
label_172:;
	{
	LINE_NUMBER(1775);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount) + (jint(1)));
	LINE_NUMBER(1776);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isDisconnected = (jint(0));
	LINE_NUMBER(1777);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(1));
	LINE_NUMBER(1778);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoLoginAttempt = (frame[1].l);
	LINE_NUMBER(1779);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\u0110ang \u0111\u0103ng nh\u1eadp ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoLoginRetryCount));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")..."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, (80));
	LINE_NUMBER(1781);
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, (frame[3].o));
	LINE_NUMBER(1782);
	popStackFrame(ctx);
	return;
	}
label_138:;
	{
	LINE_NUMBER(1785);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ChooseCharScr)) == 0) goto label_181;
	}
	{
	LINE_NUMBER(1786);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	frame[3].o = (checkCast(ctx, &class_nro_ChooseCharScr, sp[0].o));
	LINE_NUMBER(1787);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_chooseCharScr;
	if (sp[0].o != nullptr) goto label_184;
	}
	{
	LINE_NUMBER(1788);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_chooseCharScr = (frame[3].o);
	}
label_184:;
	{
	LINE_NUMBER(1790);
	clinit_nro_ChooseCharScr(ctx);
	sp[0].o = (jobject)SF_nro_ChooseCharScr_playerData;
	if (sp[0].o == nullptr) goto label_186;
	}
	{
	clinit_nro_ChooseCharScr(ctx);
	sp[0].o = (jobject)SF_nro_ChooseCharScr_playerData;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_186;
	}
	{
	LINE_NUMBER(1791);
	if (((jint)((nro_ChooseCharScr *) NULL_CHECK((frame[3].o)))->F_focus) < 0) goto label_188;
	}
	{
	jint temp0 = (jint)((nro_ChooseCharScr *) NULL_CHECK((frame[3].o)))->F_focus;
	clinit_nro_ChooseCharScr(ctx);
	sp[0].o = (jobject)SF_nro_ChooseCharScr_playerData;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_189;
	}
label_188:;
	{
	LINE_NUMBER(1792);
	((nro_ChooseCharScr *) NULL_CHECK((frame[3].o)))->F_focus = (jint(0));
	}
label_189:;
	{
	LINE_NUMBER(1794);
	SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp"_j))), (((jobject) createStringLiteral(ctx, u8"\u0110ang ch\u1ecdn nh\u00e2n v\u1eadt v\u00e0o game..."_j))), (80));
	LINE_NUMBER(1795);
	((func_nro_ChooseCharScr_perform_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_ChooseCharScr_perform_int_java_lang_Object])(ctx, (frame[3].o), (jint(1)), (jobject(nullptr)));
	LINE_NUMBER(1796);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoLoginAttempt = (frame[1].l);
	}
label_186:;
	LINE_NUMBER(1798);
	popStackFrame(ctx);
	INST_RETURN();
label_181:;
	LINE_NUMBER(1800);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_onEnterGame(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:onEnterGame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1803);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	LINE_NUMBER(1804);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(1805);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = (jint(0));
	LINE_NUMBER(1806);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(1807);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(1808);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isDisconnected = (jint(0));
	LINE_NUMBER(1809);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoLogin) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1810);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(1811);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1812);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
label_11:;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_loginScr;
	if ((--sp)->o == nullptr) goto label_12;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1814);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(1816);
	if ((frame[0].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1817);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1818);
	if ((frame[1].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(1819);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(1821);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))), (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	}
label_7:;
	LINE_NUMBER(1824);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleAutoPeanPet(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleAutoPeanPet", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1827);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(1828);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPeanPet) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = sp[0].i;
	LINE_NUMBER(1829);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1830);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto \u0111\u1eadu \u0111\u1ec7 t\u1eed (atd): "_j))));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPeanPet) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1831);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_eatPeaForPet_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:eatPeaForPet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1834);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1835);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_stone) != 0) goto label_2;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_blindEff) != 0) goto label_2;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_holdEffID) <= 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1836);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1837);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPeanPetTime = (frame[0].l);
	LINE_NUMBER(1838);
	jint temp0 = (jint)((func_nro_Char_doUsePotion_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Char_doUsePotion_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1839);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (11), (frame[2].o), (jint(5)));
	LINE_NUMBER(1840);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (104), (frame[2].o), (jint(4)));
	LINE_NUMBER(1841);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_eatPeans) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_eatPeans])(ctx, sp[0].o);
	LINE_NUMBER(1842);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1843);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (100)) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1844);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestPean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestPean])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(1846);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_onCharChat_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:onCharChat", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1850);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPeanPet) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	LINE_NUMBER(1851);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1852);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1853);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	LINE_NUMBER(1854);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1855);
	if ((frame[0].i) != (-((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_charID))) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1856);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1857);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[0].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1858);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[4].o)))->F_cName;
	if (sp[0].o == nullptr) goto label_9;
	}
	sp->o = (jobject)SM_nro_Char_myPetz_R_nro_Char(ctx);
	sp++;
	if ((--sp)->o == nullptr) goto label_9;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[4].o)))->F_cName;
	sp[1].o = (jobject)SM_nro_Char_myPetz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_cName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1859);
	frame[3].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(1862);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1863);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(1864);
	if ((longCompare(((frame[4].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastPeanPetTime)), (jlong(1000ll)))) < 0) goto label_13;
	}
	{
	LINE_NUMBER(1865);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_eatPeaForPet_long_R_boolean(ctx, (frame[4].l));
	}
label_13:;
	LINE_NUMBER(1868);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleAutoWakeUp(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleAutoWakeUp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1871);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(1872);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoWakeUp) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoWakeUp = sp[0].i;
	LINE_NUMBER(1873);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1874);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng h\u1ed3i sinh: "_j))));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoWakeUp) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1875);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleAutoLogin(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleAutoLogin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(1878);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(1879);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoLogin) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = sp[0].i;
	LINE_NUMBER(1880);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoLogin) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1881);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(1882);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1883);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
label_9:;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_loginScr;
	if ((--sp)->o == nullptr) goto label_10;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1885);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1887);
	if ((frame[1].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1888);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1889);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(1890);
	frame[1].o = (frame[2].o);
	}
label_13:;
	{
	LINE_NUMBER(1893);
	if ((frame[0].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(1894);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1895);
	if ((frame[2].o) == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(1896);
	frame[0].o = (frame[2].o);
	}
label_17:;
	{
	LINE_NUMBER(1900);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect) < 0) goto label_20;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"userAo"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_21;
	}
label_20:;
	LINE_NUMBER(1901);
	INST_ACONST_NULL();
label_21:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1902);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1904);
	if ((frame[3].i) != 0) goto label_26;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_27;
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(1905);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a l\u01b0u m\u1eadt kh\u1ea9u! Vui l\u00f2ng t\u00edch 'Ghi nh\u1edb' khi \u0111\u0103ng nh\u1eadp ho\u1eb7c chat: alogin [tk] [mk]"_j))));
	}
label_26:;
	{
	LINE_NUMBER(1908);
	if ((frame[0].o) == nullptr) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(1909);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1910);
	if ((frame[1].o) == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(1911);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(1913);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))), (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(1914);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp: B\u1eacT ("_j))));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	goto label_34;
	}
label_28:;
	{
	LINE_NUMBER(1915);
	if ((frame[3].i) == 0) goto label_35;
	}
	{
	LINE_NUMBER(1916);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))), (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(1917);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp: B\u1eacT (Ch\u01a1i m\u1edbi)"_j))));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1919);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp: B\u1eacT"_j))));
	}
label_34:;
	LINE_NUMBER(1921);
	goto label_38;
label_5:;
	{
	LINE_NUMBER(1922);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u0103ng nh\u1eadp: T\u1eaeT"_j))));
	}
label_38:;
	{
	LINE_NUMBER(1924);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1925);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_setAutoLoginAccount_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:setAutoLoginAccount", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1928);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1929);
	SM_nro_AutoTrainMenu_toggleAutoLogin(ctx);
	LINE_NUMBER(1930);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1932);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(1933);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1934);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) < (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(1935);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1936);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1937);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j))), (frame[2].o));
	LINE_NUMBER(1938);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j))), (frame[3].o));
	LINE_NUMBER(1939);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))), (frame[2].o));
	LINE_NUMBER(1940);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))), (frame[3].o));
	LINE_NUMBER(1941);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))), (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(1942);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (jint(1));
	LINE_NUMBER(1943);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1944);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto Login: B\u1eacT ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1945);
	goto label_18;
	}
label_6:;
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (jint(1))) goto label_18;
	}
	{
	LINE_NUMBER(1946);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1947);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"pass"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1948);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
label_22:;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_loginScr;
	if ((--sp)->o == nullptr) goto label_23;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1950);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(1952);
	if ((frame[3].o) == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(1953);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j))));
	frame[3].o = sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(1955);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j))), (frame[2].o));
	LINE_NUMBER(1956);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))), (frame[2].o));
	LINE_NUMBER(1957);
	if ((frame[3].o) == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_29;
	}
	{
	LINE_NUMBER(1958);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_alogin_pass"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1959);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pass"_j));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(1961);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a c\u00f3 m\u1eadt kh\u1ea9u! Vui l\u00f2ng chat: alogin "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" [m\u1eadt kh\u1ea9u]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	}
label_32:;
	{
	LINE_NUMBER(1963);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_sv"_j))), (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect));
	LINE_NUMBER(1964);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (jint(1));
	LINE_NUMBER(1965);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(1966);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto Login: B\u1eacT ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	}
label_18:;
	LINE_NUMBER(1968);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_updateStandAutoAttack_nro_Char_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateStandAutoAttack", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(1971);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stone) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_meDead) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_blindEff) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_sleepEff) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holdEffID) <= 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(1972);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1974);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mobCapcha;
	if (sp[0].o == nullptr) goto label_3;
	}
	LINE_NUMBER(1975);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1977);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (112)) goto label_5;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (113)) goto label_6;
	}
label_5:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != 0) goto label_6;
	}
	LINE_NUMBER(1978);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1980);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1981);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (sp[0].o != nullptr) goto label_10;
	}
label_9:;
	LINE_NUMBER(1982);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(1984);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_type) != (jint(1))) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) == (10)) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) == (11)) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1985);
	jint temp0 = (jint)((func_nro_Char_isSelectingSkillUseAlone_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isSelectingSkillUseAlone_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
label_11:;
	LINE_NUMBER(1986);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(1988);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_maxPoint) <= 0) goto label_14;
	}
	{
	if (((jint)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_point) != 0) goto label_14;
	}
	LINE_NUMBER(1989);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(1991);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) != (jint(2))) goto label_16;
	}
	INST_LCONST(1);
	goto label_17;
label_16:;
	{
	LINE_NUMBER(1992);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) != (jint(1))) goto label_18;
	}
	{
	jlong temp0 = ((jlong(((jint)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_manaUse))) * ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull)) / (jlong(100ll));
	sp[0].l = temp0;
	sp += 1;
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1993);
	jlong temp0 = jlong(((jint)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_manaUse));
	sp[0].l = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[4].l = sp[0].l;
	LINE_NUMBER(1994);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), (frame[4].l))) >= 0) goto label_20;
	}
	LINE_NUMBER(1995);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(1997);
	if ((longCompare(((frame[1].l) - ((jlong)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_lastTimeUseThisSkill)), (jlong(((jint)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_coolDown))))) < 0) goto label_22;
	}
	{
	if ((longCompare(((frame[1].l) - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastStandAttackTime)), (jlong(500ll)))) >= 0) goto label_23;
	}
label_22:;
	LINE_NUMBER(1998);
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
	{
	LINE_NUMBER(2001);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (40), (((jint)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_dx) * (jint(2))));
	frame[6].i = temp0;
	LINE_NUMBER(2002);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (50), (((jint)((nro_Skill *) NULL_CHECK((frame[3].o)))->F_dy) * (jint(2))));
	frame[7].i = temp1;
	LINE_NUMBER(2003);
	frame[8].i = (jint(0));
	LINE_NUMBER(2005);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(2006);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2007);
	jint temp0 = (jint)((func_nro_Mob_getX_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Mob_getX_R_int])(ctx, (frame[9].o));
	frame[10].i = temp0;
	LINE_NUMBER(2008);
	jint temp1 = (jint)((func_nro_Mob_getY_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Mob_getY_R_int])(ctx, (frame[9].o));
	frame[11].i = temp1;
	LINE_NUMBER(2009);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[9].o)))->F_status) == 0) goto label_32;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[9].o)))->F_status) == (jint(1))) goto label_32;
	}
	{
	jint temp0 = (jint)((func_nro_Mob_isBigBoss_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_Mob_isBigBoss_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_33;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[9].o)))->F_status) == (jint(4))) goto label_32;
	}
label_33:;
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[9].o)))->F_cur), (jlong(0)))) <= 0) goto label_32;
	}
	{
	sp[0].o = frame[9].o;
	LINE_NUMBER(2011);
	jint temp0 = (jint)SM_nro_GameScr_isMeCanAttackMob_nro_Mob_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_32;
	}
	{
	jint temp0 = (frame[10].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(2012);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 >= (frame[6].i)) goto label_32;
	}
	{
	jint temp0 = (frame[11].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(2013);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 >= (frame[7].i)) goto label_32;
	}
	{
	LINE_NUMBER(2014);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) <= (frame[10].i)) goto label_38;
	}
	INST_ICONST(-1);
	goto label_39;
label_38:;
	INST_ICONST(1);
label_39:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(2015);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vMob"_j))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2016);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[12].o), (frame[9].o));
	LINE_NUMBER(2017);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = frame[12].o;
	clinit_nro_MyVector(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"vChar"_j))));
	((func_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(2018);
	frame[8].i = (jint(1));
	}
label_32:;
	LINE_NUMBER(2020);
	goto label_44;
label_27:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(2021);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2022);
	jint temp0 = (jint)((func_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean])(ctx, (frame[0].o), (frame[9].o));
	if (temp0 == 0) goto label_44;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[9].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(2023);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 >= (frame[6].i)) goto label_44;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[9].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(2024);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp0);
	if (temp1 >= (frame[7].i)) goto label_44;
	}
	{
	LINE_NUMBER(2025);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) <= ((jint)((nro_Char *) NULL_CHECK((frame[9].o)))->F_cx)) goto label_50;
	}
	INST_ICONST(-1);
	goto label_51;
label_50:;
	INST_ICONST(1);
label_51:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(2026);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vChar"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2027);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[10].o), (frame[9].o));
	LINE_NUMBER(2028);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vMob"_j))));
	((func_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int])(ctx, sp[0].o, sp[1].o, (frame[10].o), (jint(2)));
	LINE_NUMBER(2029);
	frame[8].i = (jint(1));
	}
label_44:;
	{
	LINE_NUMBER(2033);
	if ((frame[8].i) == 0) goto label_56;
	}
	{
	LINE_NUMBER(2034);
	((nro_Skill *) NULL_CHECK((frame[3].o)))->F_paintCanNotUseSkill = (jint(1));
	LINE_NUMBER(2035);
	((nro_Skill *) NULL_CHECK((frame[3].o)))->F_lastTimeUseThisSkill = (frame[1].l);
	LINE_NUMBER(2036);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastStandAttackTime = (frame[1].l);
	}
label_56:;
	LINE_NUMBER(2038);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_autoChangeZone(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:autoChangeZone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2041);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(2042);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_numPlayer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_numPlayer;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(2043);
	frame[1].i = (jint(-1));
	LINE_NUMBER(2044);
	frame[2].i = (jint(2147483647));
	LINE_NUMBER(2045);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_numPlayer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(2046);
	if ((frame[3].i) == (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_zoneID)) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_maxPlayer;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_maxPlayer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_numPlayer;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_maxPlayer;
	if (temp0 >= ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)))) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_numPlayer;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(2048);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK((frame[0].o)))->F_numPlayer;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	LINE_NUMBER(2049);
	frame[1].i = (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(2045);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2052);
	if ((frame[1].i) == (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(2053);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestChangeZone_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestChangeZone_int])(ctx, sp[0].o, (frame[1].i));
	}
label_12:;
	LINE_NUMBER(2055);
	goto label_14;
label_2:;
	{
	LINE_NUMBER(2056);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_openUIZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_openUIZone])(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(2058);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_useBagItemByTemplate_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:useBagItemByTemplate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2061);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(ctx);
	if (temp0 != 0) goto label_1;
	}
	LINE_NUMBER(2062);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2063);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2064);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	if (sp[0].o != nullptr) goto label_5;
	}
label_4:;
	LINE_NUMBER(2065);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(2066);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(2067);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_arrItemBag;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(2068);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2069);
	if ((frame[0].i) <= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) == (frame[0].i)) goto label_13;
	}
label_12:;
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_14;
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = frame[1].o;
	LINE_NUMBER(2070);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
label_13:;
	INST_ICONST(1);
	goto label_16;
label_14:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2071);
	if ((frame[5].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2072);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_useItem_byte_byte_byte_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_useItem_byte_byte_byte_short])(ctx, sp[0].o, (jint(0)), (jint(1)), (jbyte((frame[3].i))), (jint(-1)));
	LINE_NUMBER(2073);
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(2066);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(2077);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_setAutoAttack_boolean(jcontext ctx, jbool param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:setAutoAttack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2080);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoAttack = (frame[0].i);
	LINE_NUMBER(2081);
	if ((frame[0].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2082);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isStandAutoAttack = (jint(0));
	LINE_NUMBER(2083);
	frame[1].i = (jint(0));
	LINE_NUMBER(2084);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(2085);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(2086);
	frame[1].i = (jint(1));
	LINE_NUMBER(2087);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(2084);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2090);
	if ((frame[1].i) != 0) goto label_12;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(2091);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	}
label_12:;
	LINE_NUMBER(2093);
	goto label_14;
label_2:;
	sp->o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp++;
	if ((--sp)->o == nullptr) goto label_14;
	{
	LINE_NUMBER(2094);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(2096);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2097);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleAutoAttack(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleAutoAttack", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2100);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(2101);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	SM_nro_AutoTrainMenu_setAutoAttack_boolean(ctx, sp[0].i);
	LINE_NUMBER(2102);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u00e1nh: "_j))));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eadt"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaft"_j));
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleStandAutoAttack(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleStandAutoAttack", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2106);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isStandAutoAttack) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isStandAutoAttack = sp[0].i;
	LINE_NUMBER(2107);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isStandAutoAttack) == 0) goto label_4;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAutoAttack;
	if ((--sp)->i == 0) goto label_4;
	{
	LINE_NUMBER(2108);
	SM_nro_AutoTrainMenu_setAutoAttack_boolean(ctx, (jint(0)));
	}
label_4:;
	{
	LINE_NUMBER(2110);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u00e1nh: "_j))));
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isStandAutoAttack) == 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eadt"_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaft"_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleAutoPickAll(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleAutoPickAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2114);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(2115);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick) == 0) goto label_2;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) == 0) goto label_2;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[0].i = sp[0].i;
	LINE_NUMBER(2116);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (frame[0].i);
	LINE_NUMBER(2117);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (frame[0].i);
	LINE_NUMBER(2118);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	LINE_NUMBER(2119);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(2120);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	jint temp0 = jint(3);
	sp[1].i = temp0;
	sp += 2;
	if ((frame[0].i) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(2121);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2122);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Nh\u1eb7t t\u1ea5t c\u1ea3: "_j))));
	sp += 1;
	if ((frame[0].i) == 0) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eadt"_j));
	goto label_15;
label_14:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaft"_j));
label_15:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_toggleTdlt(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:toggleTdlt", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2126);
	SM_nro_AutoTrainMenu_ensureRMSLoaded(ctx);
	LINE_NUMBER(2127);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_2;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) != nullptr) goto label_3;
	}
label_2:;
	LINE_NUMBER(2128);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2129);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	frame[0].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(2130);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2131);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	LINE_NUMBER(2132);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(2133);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_hasItemInBag_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(ctx, (frame[1].o), (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(2134);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay) != 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (4387));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(2135);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_13;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_14;
label_13:;
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2136);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(2138);
	if ((frame[4].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(2139);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2140);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(0));
	LINE_NUMBER(2141);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAutoPlay = (jint(0));
	LINE_NUMBER(2142);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng c\u00f3 T\u1ef1 \u0111\u1ed9ng luy\u1ec7n t\u1eadp trong h\u00e0nh trang!"_j))));
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(2144);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(2145);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_lastUseTime = (frame[5].l);
	LINE_NUMBER(2146);
	jint temp0 = 521;
	sp[0].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_name;
	SM_nro_AutoTrainMenu_useBagItemByTemplate_int_java_lang_String(ctx, temp0, sp[0].o);
	LINE_NUMBER(2147);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAutoPlay = (jint(1));
	LINE_NUMBER(2148);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng luy\u1ec7n t\u1eadp: B\u1eadt"_j))));
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(2151);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(0));
	LINE_NUMBER(2152);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_lastUseTime = (frame[5].l);
	LINE_NUMBER(2153);
	if ((frame[3].i) == 0) goto label_31;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_31;
	{
	LINE_NUMBER(2154);
	jint temp0 = 521;
	sp[0].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_name;
	SM_nro_AutoTrainMenu_useBagItemByTemplate_int_java_lang_String(ctx, temp0, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(2156);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isAutoPlay = (jint(0));
	LINE_NUMBER(2157);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng luy\u1ec7n t\u1eadp: T\u1eaft"_j))));
	}
label_24:;
	{
	LINE_NUMBER(2159);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_parseZoneCommand_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:parseZoneCommand", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2167);
	if ((frame[0].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(2168);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(2169);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2170);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(2171);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_8:;
	{
	LINE_NUMBER(2172);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[2].i = temp0;
	LINE_NUMBER(2173);
	if ((frame[2].i) == (107)) goto label_11;
	}
	{
	if ((frame[2].i) == (75)) goto label_11;
	}
	{
	LINE_NUMBER(2174);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(2175);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2176);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(2177);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(2178);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_0;
	}
	{
	LINE_NUMBER(2179);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(2180);
	if ((frame[5].i) < (48)) goto label_19;
	}
	{
	if ((frame[5].i) <= (57)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(2181);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_20:;
	{
	LINE_NUMBER(2178);
	INST_IINC(4, 1);
	goto label_16;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2185);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2186);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2187);
	popStackFrame(ctx);
	return (-2);
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_handleChatCommand_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:handleChatCommand", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2192);
	if ((frame[0].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(2193);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2194);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2195);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(2196);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(2197);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2199);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"dauto"_j))));
	if (temp0 != 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"stopauto"_j))));
	if (temp0 != 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ditem"_j))));
	if (temp0 == 0) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(2200);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoUse) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2201);
	SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u1eebng t\u1ef1 d\u00f9ng v\u1eadt ph\u1ea9m!"_j))));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(2203);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Hi\u1ec7n kh\u00f4ng c\u00f3 v\u1eadt ph\u1ea9m n\u00e0o \u0111ang auto!"_j))));
	}
label_25:;
	{
	LINE_NUMBER(2205);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(2208);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"anhat"_j))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(2209);
	SM_nro_AutoTrainMenu_toggleAutoPickAll(ctx);
	LINE_NUMBER(2210);
	popStackFrame(ctx);
	return (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(2212);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ak"_j))));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(2213);
	SM_nro_AutoTrainMenu_toggleStandAutoAttack(ctx);
	LINE_NUMBER(2214);
	popStackFrame(ctx);
	return (jint(1));
	}
label_29:;
	{
	LINE_NUMBER(2216);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ts"_j))));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(2217);
	SM_nro_AutoTrainMenu_toggleAutoAttack(ctx);
	LINE_NUMBER(2218);
	popStackFrame(ctx);
	return (jint(1));
	}
label_32:;
	{
	LINE_NUMBER(2220);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"tdlt"_j))));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(2221);
	SM_nro_AutoTrainMenu_toggleTdlt(ctx);
	LINE_NUMBER(2222);
	popStackFrame(ctx);
	return (jint(1));
	}
label_35:;
	{
	LINE_NUMBER(2225);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ahs"_j))));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(2226);
	SM_nro_AutoTrainMenu_toggleAutoWakeUp(ctx);
	LINE_NUMBER(2227);
	popStackFrame(ctx);
	return (jint(1));
	}
label_38:;
	{
	LINE_NUMBER(2230);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"alogin"_j))));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(2231);
	SM_nro_AutoTrainMenu_toggleAutoLogin(ctx);
	LINE_NUMBER(2232);
	popStackFrame(ctx);
	return (jint(1));
	}
label_41:;
	{
	LINE_NUMBER(2235);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"alogin "_j))));
	if (temp0 != 0) goto label_44;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"alogin\t"_j))));
	if (temp0 == 0) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(2236);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (6));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2237);
	SM_nro_AutoTrainMenu_setAutoLoginAccount_java_lang_String(ctx, (frame[3].o));
	LINE_NUMBER(2238);
	popStackFrame(ctx);
	return (jint(1));
	}
label_45:;
	{
	LINE_NUMBER(2241);
	jint temp0 = (jint)SM_nro_ShowBoss_handleChatCommand_java_lang_String_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_48;
	}
	{
	LINE_NUMBER(2242);
	popStackFrame(ctx);
	return (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(2245);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"wasd"_j))));
	if (temp0 != 0) goto label_50;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"asdw"_j))));
	if (temp0 != 0) goto label_50;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"move"_j))));
	if (temp0 != 0) goto label_50;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"dichuyen"_j))));
	if (temp0 == 0) goto label_51;
	}
label_50:;
	{
	LINE_NUMBER(2246);
	SM_main_GameCanvas_cycleMoveMode(ctx);
	LINE_NUMBER(2247);
	popStackFrame(ctx);
	return (jint(1));
	}
label_51:;
	{
	LINE_NUMBER(2250);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atd"_j))));
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(2251);
	SM_nro_AutoTrainMenu_toggleAutoPeanPet(ctx);
	LINE_NUMBER(2252);
	popStackFrame(ctx);
	return (jint(1));
	}
label_53:;
	{
	LINE_NUMBER(2255);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atd "_j))));
	if (temp0 != 0) goto label_56;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atd\t"_j))));
	if (temp0 == 0) goto label_57;
	}
label_56:;
	{
	LINE_NUMBER(2256);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(3)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2257);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2258);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) < (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(2259);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2261);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	frame[6].i = temp0;
	LINE_NUMBER(2262);
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"hp"_j))));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(2263);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (100), (frame[6].i));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = temp2;
	LINE_NUMBER(2264);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (jint(1));
	LINE_NUMBER(2265);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2266);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto \u0111\u1eadu \u0111\u1ec7 t\u1eed: B\u1eacT (HP < "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"%)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2267);
	jint temp3 = jint(1);
	sp[0].i = temp3;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2268);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"ki"_j))));
	if (temp0 != 0) goto label_67;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"mp"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_67:;
	{
	LINE_NUMBER(2269);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (100), (frame[6].i));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = temp2;
	LINE_NUMBER(2270);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (jint(1));
	LINE_NUMBER(2271);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2272);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto \u0111\u1eadu \u0111\u1ec7 t\u1eed: B\u1eacT (KI < "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petMpPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"%)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2273);
	jint temp3 = jint(1);
	sp[0].i = temp3;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2274);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"tl"_j))));
	if (temp0 != 0) goto label_72;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"sta"_j))));
	if (temp0 != 0) goto label_72;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"theluc"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_73; }
	}
label_72:;
	{
	LINE_NUMBER(2275);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (1250), (frame[6].i));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = temp2;
	LINE_NUMBER(2276);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (jint(1));
	LINE_NUMBER(2277);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2278);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent) > (100)) goto label_77;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"%"_j));
	goto label_78;
label_77:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" \u0111i\u1ec3m"_j));
label_78:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(2279);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto \u0111\u1eadu \u0111\u1ec7 t\u1eed: B\u1eacT (Th\u1ec3 l\u1ef1c < "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2280);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_73:;
	LINE_NUMBER(2283);
	goto label_81;
label_2:;
	LINE_NUMBER(2282);
	INST_ASTORE(6);
label_81:;
	LINE_NUMBER(2284);
	goto label_82;
label_10:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(2286);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(2287);
	if ((frame[5].i) <= 0) { popExceptionFrames(frameRef, 1); goto label_84; }
	}
	{
	if ((frame[5].i) > (1250)) { popExceptionFrames(frameRef, 1); goto label_84; }
	}
	{
	LINE_NUMBER(2288);
	if ((frame[5].i) > (100)) goto label_86;
	}
	{
	LINE_NUMBER(2289);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = (frame[5].i);
	LINE_NUMBER(2290);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = (frame[5].i);
	LINE_NUMBER(2291);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petPeaPercent = (frame[5].i);
	goto label_90;
	}
label_86:;
	{
	LINE_NUMBER(2293);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = (frame[5].i);
	}
label_90:;
	{
	LINE_NUMBER(2295);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (jint(1));
	LINE_NUMBER(2296);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2297);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto \u0111\u1eadu \u0111\u1ec7 t\u1eed: B\u1eacT ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp += 1;
	if ((frame[5].i) > (100)) goto label_93;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"%"_j));
	goto label_94;
label_93:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" th\u1ec3 l\u1ef1c"_j));
label_94:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2298);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_84:;
	LINE_NUMBER(2301);
	goto label_82;
label_12:;
	LINE_NUMBER(2300);
	INST_ASTORE(5);
label_82:;
	{
	LINE_NUMBER(2303);
	SM_nro_AutoTrainMenu_toggleAutoPeanPet(ctx);
	LINE_NUMBER(2304);
	popStackFrame(ctx);
	return (jint(1));
	}
label_57:;
	{
	LINE_NUMBER(2307);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"help"_j))));
	if (temp0 != 0) goto label_97;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"lenh"_j))));
	if (temp0 != 0) goto label_97;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"menu"_j))));
	if (temp0 == 0) goto label_98;
	}
label_97:;
	{
	LINE_NUMBER(2308);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"L\u1ec7nh: anhat, ak, ts, tdlt, ahs, alogin, sb, atd, k[khu], atc, atctg"_j))));
	LINE_NUMBER(2309);
	popStackFrame(ctx);
	return (jint(1));
	}
label_98:;
	{
	LINE_NUMBER(2312);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_parseZoneCommand_java_lang_String_R_int(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(2313);
	if ((frame[3].i) == (jint(-1))) goto label_101;
	}
	{
	LINE_NUMBER(2314);
	if ((frame[3].i) < 0) goto label_103;
	}
	{
	if ((frame[3].i) <= (127)) goto label_104;
	}
label_103:;
	{
	LINE_NUMBER(2315);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Khu kh\u00f4ng h\u1ee3p l\u1ec7 (0 - 127)!"_j))));
	LINE_NUMBER(2316);
	popStackFrame(ctx);
	return (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(2318);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2319);
	if ((frame[4].o) == nullptr) goto label_107;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[4].o)))->F_statusMe) == (14)) goto label_108;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[4].o)))->F_cHP), (jlong(0)))) > 0) goto label_107;
	}
label_108:;
	{
	LINE_NUMBER(2320);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_can_not_do_when_die;
	if (sp[0].o == nullptr) goto label_109;
	}
	{
	LINE_NUMBER(2321);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_can_not_do_when_die;
	sp += 1;
	goto label_111;
	}
label_109:;
	LINE_NUMBER(2322);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng th\u1ec3 th\u1ef1c hi\u1ec7n khi \u0111ang ch\u1ebft!"_j));
label_111:;
	{
	sp -= 1;
	LINE_NUMBER(2320);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2323);
	popStackFrame(ctx);
	return (jint(1));
	}
label_107:;
	{
	LINE_NUMBER(2325);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isSessionConnected_R_boolean(ctx);
	if (temp0 == 0) goto label_113;
	}
	{
	LINE_NUMBER(2326);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestChangeZone_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestChangeZone_int])(ctx, sp[0].o, (frame[3].i));
	}
label_113:;
	{
	LINE_NUMBER(2328);
	popStackFrame(ctx);
	return (jint(1));
	}
label_101:;
	{
	LINE_NUMBER(2331);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atctg"_j))));
	if (temp0 == 0) goto label_115;
	}
	{
	LINE_NUMBER(2332);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoChatTG);
	LINE_NUMBER(2333);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	LINE_NUMBER(2334);
	if ((frame[4].i) == 0) goto label_119;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Auto chat th\u1ebf gi\u1edbi: D\u1eebng"_j));
	goto label_120;
label_119:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Auto chat th\u1ebf gi\u1edbi: \u0110\u00e3 t\u1eaft (nh\u1eadp: atctg n\u1ed9i dung)"_j));
label_120:;
	{
	sp -= 1;
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2335);
	popStackFrame(ctx);
	return (jint(1));
	}
label_115:;
	{
	LINE_NUMBER(2337);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atctg "_j))));
	if (temp0 != 0) goto label_122;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atctg\t"_j))));
	if (temp0 == 0) goto label_123;
	}
label_122:;
	{
	LINE_NUMBER(2338);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2339);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_125;
	}
	{
	LINE_NUMBER(2340);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	LINE_NUMBER(2341);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Auto chat th\u1ebf gi\u1edbi: D\u1eebng"_j))));
	LINE_NUMBER(2342);
	popStackFrame(ctx);
	return (jint(1));
	}
label_125:;
	{
	LINE_NUMBER(2344);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2345);
	if ((frame[5].o) == nullptr) goto label_130;
	}
	{
	jint temp0 = (jint)((func_nro_Char_checkLuong_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_Char_checkLuong_R_int])(ctx, (frame[5].o));
	if (temp0 >= (jint(5))) goto label_130;
	}
	{
	LINE_NUMBER(2346);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	LINE_NUMBER(2347);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_not_enough_luong_world_channel;
	if (sp[0].o == nullptr) goto label_133;
	}
	{
	LINE_NUMBER(2348);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_not_enough_luong_world_channel;
	sp += 1;
	goto label_135;
	}
label_133:;
	LINE_NUMBER(2349);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng \u0111\u1ee7 5 ng\u1ecdc \u0111\u1ec3 chat th\u1ebf gi\u1edbi!"_j));
label_135:;
	{
	sp -= 1;
	LINE_NUMBER(2347);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2350);
	popStackFrame(ctx);
	return (jint(1));
	}
label_130:;
	{
	LINE_NUMBER(2352);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_textAutoChatTG = (frame[4].o);
	LINE_NUMBER(2353);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(1));
	LINE_NUMBER(2354);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTGTime = (jlong(0));
	LINE_NUMBER(2355);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto chat th\u1ebf gi\u1edbi: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2356);
	popStackFrame(ctx);
	return (jint(1));
	}
label_123:;
	{
	LINE_NUMBER(2359);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atc"_j))));
	if (temp0 == 0) goto label_141;
	}
	{
	LINE_NUMBER(2360);
	frame[4].i = (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoChat);
	LINE_NUMBER(2361);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChat = (jint(0));
	LINE_NUMBER(2362);
	if ((frame[4].i) == 0) goto label_145;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Auto chat: D\u1eebng"_j));
	goto label_146;
label_145:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Auto chat: \u0110\u00e3 t\u1eaft (nh\u1eadp: atc n\u1ed9i dung)"_j));
label_146:;
	{
	sp -= 1;
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2363);
	popStackFrame(ctx);
	return (jint(1));
	}
label_141:;
	{
	LINE_NUMBER(2365);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atc "_j))));
	if (temp0 != 0) goto label_148;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"atc\t"_j))));
	if (temp0 == 0) goto label_149;
	}
label_148:;
	{
	LINE_NUMBER(2366);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(3)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2367);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_151;
	}
	{
	LINE_NUMBER(2368);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChat = (jint(0));
	LINE_NUMBER(2369);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Auto chat: D\u1eebng"_j))));
	LINE_NUMBER(2370);
	popStackFrame(ctx);
	return (jint(1));
	}
label_151:;
	{
	LINE_NUMBER(2372);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_textAutoChat = (frame[4].o);
	LINE_NUMBER(2373);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChat = (jint(1));
	LINE_NUMBER(2374);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTime = (jlong(0));
	LINE_NUMBER(2375);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Auto chat: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_AutoTrainMenu_addInfo_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2376);
	popStackFrame(ctx);
	return (jint(1));
	}
label_149:;
	{
	LINE_NUMBER(2379);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_stopAutoAttack(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:stopAutoAttack", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2383);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2384);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoAttack = (jint(0));
	LINE_NUMBER(2385);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2386);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_4:;
	LINE_NUMBER(2388);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
label_1:;
	LINE_NUMBER(2390);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_onBossDie_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:onBossDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2393);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastBossDieTime = temp0;
	LINE_NUMBER(2394);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastBossDieX = (frame[0].i);
	LINE_NUMBER(2395);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastBossDieY = (frame[1].i);
	LINE_NUMBER(2396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isNearRecentBossDeath_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isNearRecentBossDeath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2399);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_lastBossDieTime)), (jlong(5000ll)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(2400);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[0].i) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_lastBossDieX)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_lastBossDieY)));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(2401);
	if ((frame[2].i) >= (250)) goto label_1;
	}
	{
	LINE_NUMBER(2402);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2404);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isAutoTraining_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isAutoTraining", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2408);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) == nullptr) goto label_1;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_enabled) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2409);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2411);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_canAutoPlay) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2412);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(2414);
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (4387));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2415);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(2417);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isBlackOrNamekDragonBall_nro_ItemMap_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isBlackOrNamekDragonBall", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2421);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2422);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2423);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	frame[1].i = ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id);
	LINE_NUMBER(2424);
	if ((frame[1].i) < (353)) goto label_4;
	}
	{
	if ((frame[1].i) > (360)) goto label_4;
	}
	{
	LINE_NUMBER(2425);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(2426);
	if ((frame[1].i) != (362)) goto label_6;
	}
	{
	LINE_NUMBER(2427);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(2428);
	if ((frame[1].i) < (372)) goto label_8;
	}
	{
	if ((frame[1].i) > (378)) goto label_8;
	}
	{
	LINE_NUMBER(2429);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(2430);
	if ((frame[1].i) < (807)) goto label_10;
	}
	{
	if ((frame[1].i) > (813)) goto label_10;
	}
	{
	LINE_NUMBER(2431);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(2432);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(2433);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2434);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"namek"_j))));
	if (temp0 != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"nam\u1ebfc"_j))));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(2435);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(2436);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\u0111en"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ng\u1ecdc"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"r\u1ed3ng"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"th\u1ea7n"_j))));
	if (temp0 != 0) goto label_17;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sao"_j));
	LINE_NUMBER(2437);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(2438);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(2440);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isExcludedItem_nro_ItemMap_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isExcludedItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2444);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2445);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2446);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) != (673)) goto label_3;
	}
	{
	LINE_NUMBER(2447);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(2448);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) != (22)) goto label_5;
	}
	{
	LINE_NUMBER(2449);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(2450);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isBlackOrNamekDragonBall_nro_ItemMap_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2451);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(2452);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isTemplateIdInList_int_java_lang_String_R_boolean(jcontext ctx, jint param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isTemplateIdInList", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2456);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2457);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2458);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(2459);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 > temp1) goto label_9;
	}
	{
	LINE_NUMBER(2460);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_BIPUSH(44);
label_12:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2461);
	if ((frame[4].i) == (44)) goto label_14;
	}
	{
	if ((frame[4].i) == (59)) goto label_14;
	}
	{
	if ((frame[4].i) == (32)) goto label_14;
	}
	{
	if ((frame[4].i) != (124)) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(2462);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_16;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2464);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	if (temp0 != (frame[0].i)) { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	LINE_NUMBER(2465);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	LINE_NUMBER(2468);
	goto label_19;
label_2:;
	LINE_NUMBER(2467);
	INST_ASTORE(5);
label_19:;
	{
	LINE_NUMBER(2469);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(2472);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(2459);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2475);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isValidAutoPickItem_nro_ItemMap_nro_Char_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isValidAutoPickItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2479);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2480);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2481);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2482);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2483);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick) == 0) goto label_5;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2484);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2485);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_countAutoPick) < (20)) goto label_7;
	}
	{
	LINE_NUMBER(2486);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2487);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isExcludedItem_nro_ItemMap_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(2488);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(2489);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_isBossDrop) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2490);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(2491);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isNearRecentBossDeath_int_int_R_boolean(ctx, ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(2492);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(2494);
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_template;
	frame[2].i = ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id);
	LINE_NUMBER(2495);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_16;
	}
	{
	jint temp0 = frame[2].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_strIdLoaiTru;
	jint temp1 = (jint)SM_nro_AutoTrainMenu_isTemplateIdInList_int_java_lang_String_R_boolean(ctx, temp0, sp[0].o);
	if (temp1 == 0) goto label_16;
	}
	{
	LINE_NUMBER(2496);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(2498);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) == 0) goto label_18;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdNhat;
	if ((--sp)->o == nullptr) goto label_18;
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_strIdNhat;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(2499);
	jint temp0 = frame[2].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_strIdNhat;
	jint temp1 = (jint)SM_nro_AutoTrainMenu_isTemplateIdInList_int_java_lang_String_R_boolean(ctx, temp0, sp[0].o);
	if (temp1 != 0) goto label_20;
	}
	{
	LINE_NUMBER(2500);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(2502);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) != 0) goto label_20;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2503);
	popStackFrame(ctx);
	return (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(2506);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isPickOnlyMine) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2507);
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_isPlayerMobDrop) != 0) goto label_25;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_playerId) == (jint(-1))) goto label_26;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_playerId) == ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_charID)) goto label_25;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[0].o)))->F_playerId) != (-((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_charID))) goto label_26;
	}
label_25:;
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(2509);
	if ((frame[3].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(2510);
	popStackFrame(ctx);
	return (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(2513);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:hasCeilingAbove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2517);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(2518);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2519);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(2520);
	frame[4].i = ((frame[1].i) - (12));
	}
label_4:;
	{
	if ((frame[4].i) < (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(2521);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (frame[0].i), (frame[4].i), (8192));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2522);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(2520);
	INST_IINC(4, -12);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2525);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_findClearCeilingX_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:findClearCeilingX", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2529);
	frame[4].i = (24);
	LINE_NUMBER(2530);
	frame[5].i = (480);
	LINE_NUMBER(2531);
	frame[6].i = (jint(-1));
	LINE_NUMBER(2532);
	frame[7].i = (jint(-1));
	LINE_NUMBER(2534);
	frame[8].i = (frame[4].i);
	}
label_5:;
	{
	if ((frame[8].i) > (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(2535);
	frame[9].i = ((frame[0].i) - (frame[8].i));
	LINE_NUMBER(2536);
	if ((frame[9].i) > (12)) goto label_9;
	}
	LINE_NUMBER(2537);
	goto label_6;
label_9:;
	{
	LINE_NUMBER(2538);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(ctx, (frame[9].i), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(2539);
	frame[6].i = (frame[9].i);
	LINE_NUMBER(2540);
	goto label_6;
	}
label_11:;
	{
	LINE_NUMBER(2534);
	frame[8].i = ((frame[8].i) + (frame[4].i));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2544);
	frame[8].i = (frame[4].i);
	}
label_14:;
	{
	if ((frame[8].i) > (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(2545);
	frame[9].i = ((frame[0].i) + (frame[8].i));
	LINE_NUMBER(2546);
	if ((frame[9].i) < ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (12))) goto label_18;
	}
	LINE_NUMBER(2547);
	goto label_15;
label_18:;
	{
	LINE_NUMBER(2548);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(ctx, (frame[9].i), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(2549);
	frame[7].i = (frame[9].i);
	LINE_NUMBER(2550);
	goto label_15;
	}
label_20:;
	{
	LINE_NUMBER(2544);
	frame[8].i = ((frame[8].i) + (frame[4].i));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(2554);
	if ((frame[6].i) == (jint(-1))) goto label_23;
	}
	{
	if ((frame[7].i) == (jint(-1))) goto label_23;
	}
	{
	LINE_NUMBER(2555);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[6].i) - (frame[3].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[7].i) - (frame[3].i)));
	if (temp0 > temp1) goto label_25;
	}
	INST_ILOAD(6);
	goto label_26;
label_25:;
	INST_ILOAD(7);
label_26:;
	popStackFrame(ctx);
	INST_IRETURN();
label_23:;
	{
	LINE_NUMBER(2556);
	if ((frame[6].i) == (jint(-1))) goto label_27;
	}
	{
	LINE_NUMBER(2557);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_27:;
	{
	LINE_NUMBER(2558);
	if ((frame[7].i) == (jint(-1))) goto label_29;
	}
	{
	LINE_NUMBER(2559);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_29:;
	{
	LINE_NUMBER(2561);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_findPlatformDropOffX_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:findPlatformDropOffX", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2565);
	frame[3].i = (24);
	LINE_NUMBER(2566);
	frame[4].i = (480);
	LINE_NUMBER(2567);
	frame[5].i = (jint(-1));
	LINE_NUMBER(2568);
	frame[6].i = (jint(-1));
	LINE_NUMBER(2570);
	frame[7].i = (frame[3].i);
	}
label_5:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(2571);
	frame[8].i = ((frame[0].i) - (frame[7].i));
	LINE_NUMBER(2572);
	if ((frame[8].i) > (12)) goto label_9;
	}
	LINE_NUMBER(2573);
	goto label_6;
label_9:;
	{
	LINE_NUMBER(2574);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (frame[8].i), ((frame[1].i) - (12)), (8));
	if (temp0 == 0) goto label_11;
	}
	LINE_NUMBER(2575);
	goto label_6;
label_11:;
	{
	LINE_NUMBER(2576);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (frame[8].i), (frame[1].i), (jint(2)));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(2577);
	frame[5].i = (frame[8].i);
	LINE_NUMBER(2578);
	goto label_6;
	}
label_13:;
	{
	LINE_NUMBER(2570);
	frame[7].i = ((frame[7].i) + (frame[3].i));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2582);
	frame[7].i = (frame[3].i);
	}
label_16:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(2583);
	frame[8].i = ((frame[0].i) + (frame[7].i));
	LINE_NUMBER(2584);
	if ((frame[8].i) < ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (12))) goto label_20;
	}
	LINE_NUMBER(2585);
	goto label_17;
label_20:;
	{
	LINE_NUMBER(2586);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (frame[8].i), ((frame[1].i) - (12)), (jint(4)));
	if (temp0 == 0) goto label_22;
	}
	LINE_NUMBER(2587);
	goto label_17;
label_22:;
	{
	LINE_NUMBER(2588);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (frame[8].i), (frame[1].i), (jint(2)));
	if (temp0 != 0) goto label_24;
	}
	{
	LINE_NUMBER(2589);
	frame[6].i = (frame[8].i);
	LINE_NUMBER(2590);
	goto label_17;
	}
label_24:;
	{
	LINE_NUMBER(2582);
	frame[7].i = ((frame[7].i) + (frame[3].i));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(2594);
	if ((frame[5].i) == (jint(-1))) goto label_27;
	}
	{
	if ((frame[6].i) == (jint(-1))) goto label_27;
	}
	{
	LINE_NUMBER(2595);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[5].i) - (frame[2].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[6].i) - (frame[2].i)));
	if (temp0 > temp1) goto label_29;
	}
	INST_ILOAD(5);
	goto label_30;
label_29:;
	INST_ILOAD(6);
label_30:;
	popStackFrame(ctx);
	INST_IRETURN();
label_27:;
	{
	LINE_NUMBER(2596);
	if ((frame[5].i) == (jint(-1))) goto label_31;
	}
	{
	LINE_NUMBER(2597);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_31:;
	{
	LINE_NUMBER(2598);
	if ((frame[6].i) == (jint(-1))) goto label_33;
	}
	{
	LINE_NUMBER(2599);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_33:;
	{
	LINE_NUMBER(2601);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isValidTarget_nro_Mob_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isValidTarget", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2605);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_1;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMobMe) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2606);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(2607);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isSkipSuperMob) == 0) goto label_3;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBoss) != 0) goto label_4;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_level) > 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_nro_Mob_checkIsBoss_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_checkIsBoss_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_nro_Mob_isBigBoss_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isBigBoss_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2608);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2610);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAttackByHp) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2611);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiOn), (jlong(0)))) <= 0) goto label_7;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiOn))) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(2612);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(2613);
	if ((longCompare((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiDuoi), (jlong(0)))) <= 0) goto label_5;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiDuoi))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(2614);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(2617);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_unreachableMobIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1));
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_java_lang_Long, sp[0].o));
	LINE_NUMBER(2618);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2619);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	jlong temp1 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (frame[1].o));
	if ((longCompare(temp0, temp1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(2620);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(2622);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_unreachableMobIds;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1));
	sp[0].o = (jobject)((func_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(2626);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAllMob) != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(2627);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[1].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(2628);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_15;
	}
label_18:;
	{
	LINE_NUMBER(2629);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2631);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_nro_AutoTrainMenu_findBestTargetMob_nro_Char_R_nro_Mob(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:findBestTargetMob", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2635);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp0 = (jint)((func_nro_MyVector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2636);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(2638);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(2639);
	frame[2].l = (jlong(9223372036854775807ll));
	LINE_NUMBER(2641);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(2642);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(2643);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isValidTarget_nro_Mob_R_boolean(ctx, (frame[5].o));
	if (temp0 != 0) goto label_9;
	}
	LINE_NUMBER(2644);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(2646);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAttackByHp) == 0) goto label_12;
	}
	{
	jlong temp0 = (jlong)((nro_Mob *) NULL_CHECK((frame[5].o)))->F_cur;
	sp[0].l = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	jint temp0 = (jint)SM_nro_Res_distance_int_int_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), ((jint)((nro_Mob *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[5].o)))->F_y));
	jlong temp1 = jlong(temp0);
	sp[0].l = temp1;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[6].l = sp[0].l;
	LINE_NUMBER(2647);
	if ((longCompare((frame[6].l), (frame[2].l))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(2648);
	frame[2].l = (frame[6].l);
	LINE_NUMBER(2649);
	frame[1].o = (frame[5].o);
	}
label_11:;
	{
	LINE_NUMBER(2641);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2653);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_AutoTrainMenu_selectSkillToAttack_nro_Char_R_nro_Skill(jcontext ctx, jobject param0) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:selectSkillToAttack", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2659);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_1;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_onScreenSkill;
	goto label_2;
label_1:;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_keySkill;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2660);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2661);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(2663);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[2].l = temp0;
	LINE_NUMBER(2664);
	jint temp1 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[4].i = temp2;
	LINE_NUMBER(2665);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(2666);
	frame[6].i = (((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_skillSlotRoundRobin) + (frame[5].i)) % (frame[4].i));
	LINE_NUMBER(2667);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[6].i))) == 0) goto label_12;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i))) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(2668);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(2669);
	if (((jint)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_paintCanNotUseSkill) != 0) goto label_12;
	}
	{
	if ((longCompare(((frame[2].l) - ((jlong)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_lastTimeUseThisSkill)), (jlong(((jint)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_coolDown))))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(2670);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) != (jint(2))) goto label_16;
	}
	INST_LCONST(1);
	goto label_17;
label_16:;
	{
	LINE_NUMBER(2671);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) != (jint(1))) goto label_18;
	}
	{
	jlong temp0 = ((jlong(((jint)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_manaUse))) * ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull)) / (jlong(100ll));
	sp[0].l = temp0;
	sp += 1;
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(2672);
	jlong temp0 = jlong(((jint)((nro_Skill *) NULL_CHECK((frame[7].o)))->F_manaUse));
	sp[0].l = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[8].l = sp[0].l;
	LINE_NUMBER(2673);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), (frame[8].l))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(2674);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_skillSlotRoundRobin = (((frame[6].i) + (jint(1))) % (frame[4].i));
	LINE_NUMBER(2675);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_12:;
	{
	LINE_NUMBER(2665);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2681);
	frame[5].i = (jint(0));
	}
label_22:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_23;
	}
	{
	LINE_NUMBER(2682);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[5].i))) == 0) goto label_25;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))) == nullptr) goto label_25;
	}
	{
	if (((jint)((nro_Skill *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)))))->F_paintCanNotUseSkill) != 0) goto label_25;
	}
	{
	LINE_NUMBER(2683);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i)));
	}
label_25:;
	{
	LINE_NUMBER(2681);
	INST_IINC(5, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(2687);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_onScrolled_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:onScrolled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2691);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) != 0) goto label_1;
	}
	LINE_NUMBER(2692);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2693);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getDialogH_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(2694);
	frame[2].i = (32);
	LINE_NUMBER(2695);
	if ((frame[0].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(2696);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_7;
	}
	{
	LINE_NUMBER(2697);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int(ctx, (frame[1].i));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = temp1;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(2698);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(2699);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int(ctx, (frame[1].i));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = temp1;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(2700);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_12;
	}
	{
	LINE_NUMBER(2701);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int(ctx, (frame[1].i));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = temp1;
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(2703);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int(ctx, (frame[1].i));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = temp1;
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(2705);
	if ((frame[0].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(2706);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_15;
	}
	{
	LINE_NUMBER(2707);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY) - (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = temp0;
	goto label_9;
	}
label_15:;
	{
	LINE_NUMBER(2708);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(2709);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY) - (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = temp0;
	goto label_9;
	}
label_17:;
	{
	LINE_NUMBER(2710);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_19;
	}
	{
	LINE_NUMBER(2711);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY) - (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = temp0;
	goto label_9;
	}
label_19:;
	{
	LINE_NUMBER(2713);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY) - (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = temp0;
	}
label_9:;
	LINE_NUMBER(2716);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_isInputFocused_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:isInputFocused", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2719);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) goto label_1;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_focusedInput;
	if ((--sp)->i == 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_finishFocusedInput(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:finishFocusedInput", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2723);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2724);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(2725);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(2726);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(2727);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	}
label_1:;
	LINE_NUMBER(2729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_handleTypedChar_char(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:handleTypedChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2732);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) goto label_1;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_focusedInput;
	if ((--sp)->i != 0) goto label_2;
label_1:;
	LINE_NUMBER(2733);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2735);
	if ((frame[0].i) == (8)) goto label_3;
	}
	{
	if ((frame[0].i) == (8)) goto label_3;
	}
	{
	if ((frame[0].i) != (127)) goto label_4;
	}
label_3:;
	INST_BIPUSH(-8);
	goto label_5;
label_4:;
	INST_ILOAD(0);
label_5:;
	{
	sp -= 1;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = sp[0].i;
	LINE_NUMBER(2736);
	SM_nro_AutoTrainMenu_handleFocusedKeyInput(ctx);
	LINE_NUMBER(2737);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_pasteText_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:pasteText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2740);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) goto label_1;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_focusedInput;
	if ((--sp)->i == 0) goto label_1;
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(2741);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2743);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(2744);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(2745);
	if ((frame[2].i) < (32)) goto label_7;
	}
	{
	if ((frame[2].i) == (127)) goto label_7;
	}
	{
	LINE_NUMBER(2746);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (frame[2].i);
	LINE_NUMBER(2747);
	SM_nro_AutoTrainMenu_handleFocusedKeyInput(ctx);
	}
label_7:;
	{
	LINE_NUMBER(2743);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(2750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_handleFocusedKeyInput(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:handleFocusedKeyInput", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2753);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) == 0) goto label_1;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_keyAsciiPress;
	if ((--sp)->i != 0) goto label_2;
label_1:;
	LINE_NUMBER(2754);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2755);
	frame[0].i = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_keyAsciiPress);
	LINE_NUMBER(2757);
	if ((frame[0].i) == (10)) goto label_4;
	}
	{
	if ((frame[0].i) != (13)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(2758);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(2759);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(2760);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(2761);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2762);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(2765);
	if ((frame[0].i) == (-8)) goto label_10;
	}
	{
	if ((frame[0].i) == (8)) goto label_10;
	}
	{
	if ((frame[0].i) != (204)) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(2767);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) < (jint(1))) goto label_14;
	}
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) <= (jint(4))) goto label_15;
	}
label_14:;
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) < (8)) goto label_16;
	}
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) > (10)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(2768);
	if ((frame[0].i) < (48)) goto label_17;
	}
	{
	if ((frame[0].i) > (57)) goto label_17;
	}
	{
	LINE_NUMBER(2769);
	frame[2].i = ((frame[0].i) - (48));
	LINE_NUMBER(2770);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isFirstInput) == 0) goto label_20;
	}
	{
	LINE_NUMBER(2771);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(2772);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpPeaPercent = (frame[2].i);
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(2773);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(2))) goto label_25;
	}
	{
	LINE_NUMBER(2774);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_mpPeaPercent = (frame[2].i);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(2775);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(3))) goto label_27;
	}
	{
	LINE_NUMBER(2776);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiDuoi = (jlong((frame[2].i)));
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(2777);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(4))) goto label_29;
	}
	{
	LINE_NUMBER(2778);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiOn = (jlong((frame[2].i)));
	goto label_24;
	}
label_29:;
	{
	LINE_NUMBER(2779);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (8)) goto label_31;
	}
	{
	LINE_NUMBER(2780);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = (frame[2].i);
	goto label_24;
	}
label_31:;
	{
	LINE_NUMBER(2781);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (9)) goto label_33;
	}
	{
	LINE_NUMBER(2782);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = (frame[2].i);
	goto label_24;
	}
label_33:;
	{
	LINE_NUMBER(2783);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (10)) goto label_24;
	}
	{
	LINE_NUMBER(2784);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = (frame[2].i);
	}
label_24:;
	{
	LINE_NUMBER(2785);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	goto label_36;
	}
label_20:;
	{
	LINE_NUMBER(2787);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(1))) goto label_37;
	}
	{
	LINE_NUMBER(2788);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (100), (((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_hpPeaPercent) * (10)) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpPeaPercent = temp0;
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(2789);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(2))) goto label_39;
	}
	{
	LINE_NUMBER(2790);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (100), (((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_mpPeaPercent) * (10)) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_mpPeaPercent = temp0;
	goto label_36;
	}
label_39:;
	{
	LINE_NUMBER(2791);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(3))) goto label_41;
	}
	{
	LINE_NUMBER(2792);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (jlong(999999999999ll)), (((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiDuoi) * (jlong(10ll))) + (jlong((frame[2].i)))));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiDuoi = temp0;
	goto label_36;
	}
label_41:;
	{
	LINE_NUMBER(2793);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(4))) goto label_43;
	}
	{
	LINE_NUMBER(2794);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (jlong(999999999999ll)), (((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiOn) * (jlong(10ll))) + (jlong((frame[2].i)))));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiOn = temp0;
	goto label_36;
	}
label_43:;
	{
	LINE_NUMBER(2795);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (8)) goto label_45;
	}
	{
	LINE_NUMBER(2796);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (100), (((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent) * (10)) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = temp0;
	goto label_36;
	}
label_45:;
	{
	LINE_NUMBER(2797);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (9)) goto label_47;
	}
	{
	LINE_NUMBER(2798);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (100), (((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petMpPeaPercent) * (10)) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = temp0;
	goto label_36;
	}
label_47:;
	{
	LINE_NUMBER(2799);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (10)) goto label_36;
	}
	{
	LINE_NUMBER(2800);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (1250), (((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent) * (10)) + (frame[2].i)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = temp0;
	}
label_36:;
	{
	LINE_NUMBER(2803);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(2804);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2805);
	goto label_52;
	}
label_17:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_52;
	{
	LINE_NUMBER(2806);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	LINE_NUMBER(2807);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(1))) goto label_55;
	}
	{
	LINE_NUMBER(2808);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpPeaPercent = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_hpPeaPercent) / (10));
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(2809);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(2))) goto label_58;
	}
	{
	LINE_NUMBER(2810);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_mpPeaPercent = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_mpPeaPercent) / (10));
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(2811);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(3))) goto label_60;
	}
	{
	LINE_NUMBER(2812);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiDuoi = ((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiDuoi) / (jlong(10ll)));
	goto label_57;
	}
label_60:;
	{
	LINE_NUMBER(2813);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(4))) goto label_62;
	}
	{
	LINE_NUMBER(2814);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiOn = ((clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiOn) / (jlong(10ll)));
	goto label_57;
	}
label_62:;
	{
	LINE_NUMBER(2815);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (8)) goto label_64;
	}
	{
	LINE_NUMBER(2816);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent) / (10));
	goto label_57;
	}
label_64:;
	{
	LINE_NUMBER(2817);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (9)) goto label_66;
	}
	{
	LINE_NUMBER(2818);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petMpPeaPercent) / (10));
	goto label_57;
	}
label_66:;
	{
	LINE_NUMBER(2819);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (10)) goto label_57;
	}
	{
	LINE_NUMBER(2820);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent) / (10));
	}
label_57:;
	{
	LINE_NUMBER(2821);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(2822);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	goto label_52;
	}
label_16:;
	{
	LINE_NUMBER(2824);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) < (jint(5))) goto label_52;
	}
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) > (7)) goto label_52;
	}
	{
	LINE_NUMBER(2825);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(5))) goto label_71;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdNhat;
	goto label_72;
label_71:;
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (6)) goto label_73;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdLoaiTru;
	goto label_72;
label_73:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_strIdVutBo;
label_72:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2826);
	if ((frame[2].o) != nullptr) goto label_75;
	}
	{
	LINE_NUMBER(2827);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_75:;
	{
	LINE_NUMBER(2828);
	if ((frame[0].i) < (48)) goto label_77;
	}
	{
	if ((frame[0].i) <= (57)) goto label_78;
	}
label_77:;
	{
	if ((frame[0].i) == (44)) goto label_78;
	}
	{
	if ((frame[0].i) == (59)) goto label_78;
	}
	{
	if ((frame[0].i) != (32)) goto label_79;
	}
label_78:;
	{
	LINE_NUMBER(2829);
	if ((frame[0].i) == (59)) goto label_80;
	}
	{
	if ((frame[0].i) != (32)) goto label_81;
	}
label_80:;
	INST_BIPUSH(44);
	goto label_82;
label_81:;
	INST_ILOAD(0);
	INST_I2C();
label_82:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(2830);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= (64)) goto label_84;
	}
	{
	LINE_NUMBER(2831);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_84:;
	{
	LINE_NUMBER(2833);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	LINE_NUMBER(2834);
	goto label_87;
	}
label_79:;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_87;
	{
	LINE_NUMBER(2835);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	LINE_NUMBER(2836);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_87;
	}
	{
	LINE_NUMBER(2837);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[2].o = sp[0].o;
	}
label_87:;
	{
	LINE_NUMBER(2840);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(5))) goto label_91;
	}
	{
	LINE_NUMBER(2841);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdNhat = (frame[2].o);
	goto label_93;
	}
label_91:;
	{
	LINE_NUMBER(2842);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (6)) goto label_94;
	}
	{
	LINE_NUMBER(2843);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdLoaiTru = (frame[2].o);
	goto label_93;
	}
label_94:;
	{
	LINE_NUMBER(2844);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (7)) goto label_93;
	}
	{
	LINE_NUMBER(2845);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdVutBo = (frame[2].o);
	}
label_93:;
	{
	LINE_NUMBER(2846);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(2847);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	}
label_52:;
	LINE_NUMBER(2849);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_updateKey_R_boolean(jcontext ctx) {
	jtype frame[28];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateKey", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(2852);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isRMSLoaded) != 0) goto label_1;
	}
	LINE_NUMBER(2853);
	SM_nro_AutoTrainMenu_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(2855);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnX_R_int(ctx);
	frame[0].i = temp0;
	LINE_NUMBER(2856);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnY_R_int(ctx);
	frame[1].i = temp1;
	LINE_NUMBER(2857);
	jint temp2 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnW_R_int(ctx);
	frame[2].i = temp2;
	LINE_NUMBER(2858);
	jint temp3 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnH_R_int(ctx);
	frame[3].i = temp3;
	LINE_NUMBER(2861);
	jint temp4 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[0].i) - (jint(4))), ((frame[1].i) - (jint(4))), ((frame[2].i) + (8)), ((frame[3].i) + (8)));
	if (temp4 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2862);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_7;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_7;
	{
	LINE_NUMBER(2863);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isShow = sp[0].i;
	LINE_NUMBER(2864);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2865);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2866);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(2870);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) != 0) goto label_15;
	}
	{
	LINE_NUMBER(2871);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2873);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getDialogW_R_int(ctx);
	frame[4].i = temp0;
	LINE_NUMBER(2874);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getDialogH_R_int(ctx);
	frame[5].i = temp1;
	LINE_NUMBER(2875);
	jint temp2 = (jint)SM_nro_AutoTrainMenu_getDialogX_R_int(ctx);
	frame[6].i = temp2;
	LINE_NUMBER(2876);
	jint temp3 = (jint)SM_nro_AutoTrainMenu_getDialogY_R_int(ctx);
	frame[7].i = temp3;
	LINE_NUMBER(2879);
	SM_nro_AutoTrainMenu_handleFocusedKeyInput(ctx);
	LINE_NUMBER(2882);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_22;
	}
	{
	LINE_NUMBER(2883);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isDragging) != 0) goto label_24;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (6)), ((frame[7].i) + (58)), ((frame[4].i) - (12)), ((frame[5].i) - (64)));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(2884);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isDragging = (jint(1));
	LINE_NUMBER(2885);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPointerY = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(2886);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_totalDragDist = (jint(0));
	goto label_28;
	}
label_24:;
	{
	LINE_NUMBER(2887);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isDragging) == 0) goto label_28;
	}
	{
	LINE_NUMBER(2888);
	frame[8].i = ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_lastPointerY) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py));
	LINE_NUMBER(2889);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPointerY = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(2890);
	clinit_nro_AutoTrainMenu(ctx);
	jint temp0 = (jint)SF_nro_AutoTrainMenu_totalDragDist;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[8].i));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_totalDragDist = (temp0 + temp1);
	LINE_NUMBER(2891);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_33;
	}
	{
	LINE_NUMBER(2892);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int(ctx, (frame[5].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY) + (frame[8].i)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp2);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = temp3;
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(2893);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_36;
	}
	{
	LINE_NUMBER(2894);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int(ctx, (frame[5].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY) + (frame[8].i)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp2);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = temp3;
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(2895);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_38;
	}
	{
	LINE_NUMBER(2896);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int(ctx, (frame[5].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY) + (frame[8].i)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp2);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = temp3;
	goto label_35;
	}
label_38:;
	{
	LINE_NUMBER(2898);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int(ctx, (frame[5].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY) + (frame[8].i)));
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp2);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = temp3;
	}
label_35:;
	LINE_NUMBER(2900);
	goto label_28;
label_22:;
	{
	LINE_NUMBER(2902);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isDragging = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(2905);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_40;
	}
	{
	LINE_NUMBER(2906);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_totalDragDist) <= (8)) goto label_42;
	}
	{
	LINE_NUMBER(2907);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_totalDragDist = (jint(0));
	LINE_NUMBER(2908);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2909);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2910);
	popStackFrame(ctx);
	return (jint(1));
	}
label_42:;
	{
	LINE_NUMBER(2912);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_totalDragDist = (jint(0));
	LINE_NUMBER(2915);
	frame[8].i = (((frame[6].i) + (frame[4].i)) - (26));
	LINE_NUMBER(2916);
	frame[9].i = ((frame[7].i) + (8));
	LINE_NUMBER(2917);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[8].i) - (jint(3))), ((frame[9].i) - (jint(3))), (24), (24));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(2918);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isShow = (jint(0));
	LINE_NUMBER(2919);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(2920);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(2921);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2922);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2923);
	popStackFrame(ctx);
	return (jint(1));
	}
label_50:;
	{
	LINE_NUMBER(2927);
	frame[10].i = ((frame[6].i) + (12));
	LINE_NUMBER(2928);
	frame[11].i = ((frame[7].i) + (8));
	LINE_NUMBER(2929);
	frame[12].i = (48);
	LINE_NUMBER(2930);
	frame[13].i = (20);
	LINE_NUMBER(2931);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[10].i) - (jint(2))), ((frame[11].i) - (jint(2))), ((frame[12].i) + (jint(4))), ((frame[13].i) + (jint(4))));
	if (temp0 == 0) goto label_61;
	}
	{
	LINE_NUMBER(2932);
	SM_nro_AutoTrainMenu_reset(ctx);
	LINE_NUMBER(2933);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2934);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2935);
	popStackFrame(ctx);
	return (jint(1));
	}
label_61:;
	{
	LINE_NUMBER(2939);
	frame[14].i = ((frame[7].i) + (32));
	LINE_NUMBER(2940);
	frame[15].i = (10);
	LINE_NUMBER(2941);
	frame[16].i = (jint(3));
	LINE_NUMBER(2942);
	frame[17].i = (jint(4));
	LINE_NUMBER(2943);
	frame[18].i = ((((frame[4].i) - ((frame[15].i) * (jint(2)))) - ((frame[16].i) * ((frame[17].i) - (jint(1))))) / (frame[17].i));
	LINE_NUMBER(2944);
	frame[19].i = (20);
	LINE_NUMBER(2945);
	frame[20].i = (jint(0));
	}
label_72:;
	{
	if ((frame[20].i) >= (frame[17].i)) goto label_73;
	}
	{
	LINE_NUMBER(2946);
	frame[21].i = (((frame[6].i) + (frame[15].i)) + ((frame[20].i) * ((frame[18].i) + (frame[16].i))));
	LINE_NUMBER(2947);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[21].i), (frame[14].i), (frame[18].i), (frame[19].i));
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(2948);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTab = (frame[20].i);
	LINE_NUMBER(2949);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(2950);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2951);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2952);
	popStackFrame(ctx);
	return (jint(1));
	}
label_76:;
	{
	LINE_NUMBER(2945);
	INST_IINC(20, 1);
	goto label_72;
	}
label_73:;
	{
	LINE_NUMBER(2957);
	frame[20].i = (((frame[6].i) + (frame[4].i)) - (22));
	LINE_NUMBER(2958);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_83;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int(ctx, (frame[5].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_84;
	}
label_83:;
	{
	LINE_NUMBER(2959);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_85;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int(ctx, (frame[5].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_84;
	}
label_85:;
	{
	LINE_NUMBER(2960);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_86;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int(ctx, (frame[5].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_84;
	}
label_86:;
	INST_ILOAD(5);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int(ctx, sp[0].i);
	sp++;
label_84:;
	{
	sp -= 1;
	frame[21].i = sp[0].i;
	LINE_NUMBER(2961);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_88;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_tab0ScrollY;
	goto label_89;
label_88:;
	{
	LINE_NUMBER(2962);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_90;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_itemScrollY;
	goto label_89;
label_90:;
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_91;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_pickScrollY;
	goto label_89;
label_91:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_autoScrollY;
label_89:;
	{
	sp -= 1;
	frame[22].i = sp[0].i;
	LINE_NUMBER(2965);
	if ((frame[22].i) <= 0) goto label_93;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[20].i) - (8)), ((frame[7].i) + (58)), (26), (22));
	if (temp0 == 0) goto label_93;
	}
	{
	LINE_NUMBER(2966);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_95;
	}
	{
	LINE_NUMBER(2967);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY) - (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = temp0;
	goto label_97;
	}
label_95:;
	{
	LINE_NUMBER(2968);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_98;
	}
	{
	LINE_NUMBER(2969);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY) - (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = temp0;
	goto label_97;
	}
label_98:;
	{
	LINE_NUMBER(2970);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_100;
	}
	{
	LINE_NUMBER(2971);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY) - (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = temp0;
	goto label_97;
	}
label_100:;
	{
	LINE_NUMBER(2973);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY) - (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = temp0;
	}
label_97:;
	{
	LINE_NUMBER(2974);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2975);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2976);
	popStackFrame(ctx);
	return (jint(1));
	}
label_93:;
	{
	LINE_NUMBER(2980);
	if ((frame[22].i) >= (frame[21].i)) goto label_104;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[20].i) - (8)), (((frame[7].i) + (frame[5].i)) - (26)), (26), (22));
	if (temp0 == 0) goto label_104;
	}
	{
	LINE_NUMBER(2981);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_106;
	}
	{
	LINE_NUMBER(2982);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[21].i), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY) + (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = temp0;
	goto label_108;
	}
label_106:;
	{
	LINE_NUMBER(2983);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_109;
	}
	{
	LINE_NUMBER(2984);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[21].i), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY) + (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = temp0;
	goto label_108;
	}
label_109:;
	{
	LINE_NUMBER(2985);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_111;
	}
	{
	LINE_NUMBER(2986);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[21].i), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY) + (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = temp0;
	goto label_108;
	}
label_111:;
	{
	LINE_NUMBER(2988);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[21].i), ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY) + (48)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = temp0;
	}
label_108:;
	{
	LINE_NUMBER(2989);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2990);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2991);
	popStackFrame(ctx);
	return (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(2994);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_115;
	}
	{
	LINE_NUMBER(2995);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_updateKeyTab0_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_117;
	}
	{
	LINE_NUMBER(2996);
	popStackFrame(ctx);
	return (jint(1));
	}
label_115:;
	{
	LINE_NUMBER(2997);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_119;
	}
	{
	LINE_NUMBER(2998);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_updateKeyTab1_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_117;
	}
	{
	LINE_NUMBER(2999);
	popStackFrame(ctx);
	return (jint(1));
	}
label_119:;
	{
	LINE_NUMBER(3000);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_122;
	}
	{
	LINE_NUMBER(3001);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_updateKeyTab2_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_117;
	}
	{
	LINE_NUMBER(3002);
	popStackFrame(ctx);
	return (jint(1));
	}
label_122:;
	{
	LINE_NUMBER(3004);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_updateKeyTab3_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_117;
	}
	{
	LINE_NUMBER(3005);
	popStackFrame(ctx);
	return (jint(1));
	}
label_117:;
	{
	LINE_NUMBER(3008);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(3009);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3010);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3011);
	popStackFrame(ctx);
	return (jint(1));
	}
label_40:;
	{
	LINE_NUMBER(3015);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getMaxTab0Scroll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(3019);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	jint temp1 = ((temp0 - (jint(1))) / (jint(2))) + (jint(1));
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(3020);
	frame[2].i = ((((((156) + ((frame[1].i) * (24))) + (8)) + (16)) + (88)) + (10));
	LINE_NUMBER(3021);
	frame[3].i = ((frame[0].i) - (68));
	LINE_NUMBER(3022);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[2].i) - (frame[3].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int(jcontext ctx, jint param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getMaxItemScroll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(3026);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3027);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(3028);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	frame[1].i = (((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))) / (jint(2)));
	LINE_NUMBER(3029);
	frame[2].i = (((frame[1].i) * (25)) + (10));
	LINE_NUMBER(3030);
	frame[3].i = ((frame[0].i) - (68));
	LINE_NUMBER(3031);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[2].i) - (frame[3].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getMaxPickScroll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(3035);
	frame[1].i = (220);
	LINE_NUMBER(3036);
	frame[2].i = ((frame[0].i) - (68));
	LINE_NUMBER(3037);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[1].i) - (frame[2].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:getMaxAutoScroll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(3041);
	frame[1].i = (220);
	LINE_NUMBER(3042);
	frame[2].i = ((frame[0].i) - (68));
	LINE_NUMBER(3043);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[1].i) - (frame[2].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_updateKeyTab0_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[25];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateKeyTab0", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3047);
	frame[4].i = ((frame[1].i) + (64));
	LINE_NUMBER(3048);
	frame[5].i = ((frame[4].i) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY));
	LINE_NUMBER(3049);
	frame[6].i = ((frame[0].i) + (16));
	LINE_NUMBER(3050);
	frame[7].i = ((frame[0].i) + (176));
	LINE_NUMBER(3053);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[5].i), (140), (22));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(3054);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	SM_nro_AutoTrainMenu_setAutoAttack_boolean(ctx, sp[0].i);
	LINE_NUMBER(3055);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3056);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3057);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3058);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(3060);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[7].i), (frame[5].i), (140), (22));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(3061);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isSkipSuperMob) != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isSkipSuperMob = sp[0].i;
	LINE_NUMBER(3062);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3063);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3064);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3065);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3066);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(3070);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), ((frame[5].i) + (26)), (140), (22));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(3071);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob) != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob = sp[0].i;
	LINE_NUMBER(3072);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3073);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3074);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3075);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3076);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(3078);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[7].i), ((frame[5].i) + (26)), (140), (22));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(3079);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAttackByHp) != 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAttackByHp = sp[0].i;
	LINE_NUMBER(3080);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3081);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3082);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3083);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3084);
	popStackFrame(ctx);
	return (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(3088);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), ((frame[5].i) + (52)), (105), (22));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(3089);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick) != 0) goto label_42;
	}
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = sp[0].i;
	LINE_NUMBER(3090);
	SM_nro_AutoTrainMenu_syncPickFlags(ctx);
	LINE_NUMBER(3091);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3092);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3093);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3094);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3095);
	popStackFrame(ctx);
	return (jint(1));
	}
label_40:;
	{
	LINE_NUMBER(3098);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (114)), ((frame[5].i) + (50)), (88), (22));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(3099);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(3));
	LINE_NUMBER(3100);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3101);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3102);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3103);
	popStackFrame(ctx);
	return (jint(1));
	}
label_50:;
	{
	LINE_NUMBER(3106);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (208)), ((frame[5].i) + (50)), (96), (22));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(3107);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(4));
	LINE_NUMBER(3108);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3109);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3110);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3111);
	popStackFrame(ctx);
	return (jint(1));
	}
label_56:;
	{
	LINE_NUMBER(3115);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), ((frame[5].i) + (78)), (100), (22));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(3116);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPea) != 0) goto label_64;
	}
	INST_ICONST(1);
	goto label_65;
label_64:;
	INST_ICONST(0);
label_65:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPea = sp[0].i;
	LINE_NUMBER(3117);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3118);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3119);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3120);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3121);
	popStackFrame(ctx);
	return (jint(1));
	}
label_62:;
	{
	LINE_NUMBER(3123);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (102)), ((frame[5].i) + (76)), (56), (22));
	if (temp0 == 0) goto label_71;
	}
	{
	LINE_NUMBER(3124);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(1));
	LINE_NUMBER(3125);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3126);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3127);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3128);
	popStackFrame(ctx);
	return (jint(1));
	}
label_71:;
	{
	LINE_NUMBER(3130);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (170)), ((frame[5].i) + (76)), (56), (22));
	if (temp0 == 0) goto label_77;
	}
	{
	LINE_NUMBER(3131);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(2));
	LINE_NUMBER(3132);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3133);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3134);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3135);
	popStackFrame(ctx);
	return (jint(1));
	}
label_77:;
	{
	LINE_NUMBER(3139);
	frame[8].i = ((frame[5].i) + (104));
	LINE_NUMBER(3140);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (114)), ((frame[8].i) - (jint(2))), (64), (22));
	if (temp0 == 0) goto label_84;
	}
	{
	LINE_NUMBER(3141);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAllMob) != 0) goto label_86;
	}
	INST_ICONST(1);
	goto label_87;
label_86:;
	INST_ICONST(0);
label_87:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = sp[0].i;
	LINE_NUMBER(3142);
	frame[9].i = (jint(0));
	}
label_89:;
	{
	jint temp0 = frame[9].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_90;
	}
	{
	LINE_NUMBER(3143);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	sp[1].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAllMob));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(3142);
	INST_IINC(9, 1);
	goto label_89;
	}
label_90:;
	{
	LINE_NUMBER(3145);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3146);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3147);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3148);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3149);
	popStackFrame(ctx);
	return (jint(1));
	}
label_84:;
	{
	LINE_NUMBER(3153);
	frame[9].i = ((frame[8].i) + (24));
	LINE_NUMBER(3154);
	frame[10].i = (jint(0));
	}
label_98:;
	{
	jint temp0 = frame[10].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_99;
	}
	{
	LINE_NUMBER(3155);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	frame[11].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(3156);
	if (((frame[10].i) % (jint(2))) != 0) goto label_102;
	}
	INST_ILOAD(6);
	goto label_103;
label_102:;
	INST_ILOAD(7);
label_103:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(3157);
	frame[13].i = ((frame[9].i) + (((frame[10].i) / (jint(2))) * (24)));
	LINE_NUMBER(3158);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[12].i), (frame[13].i), (140), (22));
	if (temp0 == 0) goto label_106;
	}
	{
	LINE_NUMBER(3159);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[11].o));
	frame[14].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(3160);
	if ((frame[14].o) == nullptr) goto label_109;
	}
	{
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[14].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_110;
	}
label_109:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAllMob;
label_110:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(3161);
	if ((frame[15].i) != 0) goto label_112;
	}
	INST_ICONST(1);
	goto label_113;
label_112:;
	INST_ICONST(0);
label_113:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(3162);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[16].i));
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(3164);
	frame[17].i = (jint(1));
	LINE_NUMBER(3165);
	frame[18].i = (jint(0));
	}
label_117:;
	{
	jint temp0 = frame[18].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_118;
	}
	{
	LINE_NUMBER(3166);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	sp[1].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[18].i));
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[19].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(3167);
	if ((frame[19].o) == nullptr) goto label_121;
	}
	{
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[19].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_122;
	}
label_121:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAllMob;
label_122:;
	{
	sp -= 1;
	frame[20].i = sp[0].i;
	LINE_NUMBER(3168);
	if ((frame[20].i) != 0) goto label_124;
	}
	{
	LINE_NUMBER(3169);
	frame[17].i = (jint(0));
	LINE_NUMBER(3170);
	goto label_118;
	}
label_124:;
	{
	LINE_NUMBER(3165);
	INST_IINC(18, 1);
	goto label_117;
	}
label_118:;
	{
	LINE_NUMBER(3173);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = (frame[17].i);
	LINE_NUMBER(3175);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3176);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3177);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3178);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3179);
	popStackFrame(ctx);
	return (jint(1));
	}
label_106:;
	{
	LINE_NUMBER(3154);
	INST_IINC(10, 1);
	goto label_98;
	}
label_99:;
	{
	LINE_NUMBER(3184);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_132;
	}
	INST_ICONST(1);
	goto label_133;
label_132:;
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	jint temp1 = ((temp0 - (jint(1))) / (jint(2))) + (jint(1));
	sp[0].i = temp1;
	sp += 1;
	}
label_133:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(3185);
	frame[11].i = (((frame[9].i) + ((frame[10].i) * (24))) + (8));
	LINE_NUMBER(3186);
	frame[12].i = (60);
	LINE_NUMBER(3187);
	frame[13].i = (jint(0));
	}
label_137:;
	{
	if ((frame[13].i) >= (10)) goto label_138;
	}
	{
	LINE_NUMBER(3188);
	frame[14].i = ((frame[13].i) % (jint(5)));
	LINE_NUMBER(3189);
	frame[15].i = ((frame[13].i) / (jint(5)));
	LINE_NUMBER(3190);
	frame[16].i = ((frame[6].i) + ((frame[14].i) * (frame[12].i)));
	LINE_NUMBER(3191);
	frame[17].i = (((frame[11].i) + (16)) + ((frame[15].i) * (44)));
	LINE_NUMBER(3192);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[16].i) - (jint(2))), ((frame[17].i) + (jint(1))), (24), (24));
	if (temp0 == 0) goto label_144;
	}
	{
	LINE_NUMBER(3193);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	jint temp0 = frame[13].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)ARRAY_ACCESS(jbyte, temp1, (frame[13].i))) != 0) goto label_146;
	}
	INST_ICONST(1);
	goto label_147;
label_146:;
	INST_ICONST(0);
label_147:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(3194);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3195);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3196);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3197);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3198);
	popStackFrame(ctx);
	return (jint(1));
	}
label_144:;
	{
	LINE_NUMBER(3187);
	INST_IINC(13, 1);
	goto label_137;
	}
label_138:;
	{
	LINE_NUMBER(3201);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_updateKeyTab1_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateKeyTab1", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3205);
	frame[4].i = ((frame[1].i) + (64));
	LINE_NUMBER(3206);
	frame[5].i = ((frame[4].i) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY));
	LINE_NUMBER(3207);
	frame[6].i = ((frame[0].i) + (16));
	LINE_NUMBER(3208);
	frame[7].i = ((frame[0].i) + (176));
	LINE_NUMBER(3209);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3210);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3211);
	frame[9].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[9].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3212);
	if (((frame[9].i) % (jint(2))) != 0) goto label_10;
	}
	INST_ILOAD(6);
	goto label_11;
label_10:;
	INST_ILOAD(7);
label_11:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(3213);
	frame[11].i = ((frame[5].i) + (((frame[9].i) / (jint(2))) * (25)));
	LINE_NUMBER(3214);
	if ((frame[11].i) < ((frame[4].i) - (10))) goto label_14;
	}
	{
	if ((frame[11].i) > (((frame[1].i) + (frame[3].i)) - (18))) goto label_14;
	}
	{
	LINE_NUMBER(3215);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[10].i) - (jint(2))), (frame[11].i), (24), (24));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(3216);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)));
	LINE_NUMBER(3217);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_templateId) != (521)) goto label_18;
	}
	{
	LINE_NUMBER(3218);
	SM_nro_AutoTrainMenu_toggleTdlt(ctx);
	LINE_NUMBER(3219);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3220);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3221);
	popStackFrame(ctx);
	return (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(3224);
	frame[13].i = ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_enabled);
	LINE_NUMBER(3225);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[14].l = temp0;
	LINE_NUMBER(3226);
	if ((frame[13].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(3227);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_findBagItemIndex_nro_Char_nro_AutoTrainMenu$AutoItem_R_int(ctx, (frame[8].o), (frame[12].o));
	frame[16].i = temp0;
	LINE_NUMBER(3228);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_isItemBuffActive_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean(ctx, (frame[8].o), (frame[12].o));
	frame[17].i = temp1;
	LINE_NUMBER(3229);
	if ((frame[16].i) != (jint(-1))) goto label_29;
	}
	INST_ILOAD(17);
	if ((--sp)->i != 0) goto label_29;
	{
	LINE_NUMBER(3230);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng c\u00f3 "_j))));
	sp[2].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" trong h\u00e0nh trang!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(3231);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_enabled = (jint(0));
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(3233);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_enabled = (jint(1));
	LINE_NUMBER(3234);
	if ((frame[17].i) != 0) goto label_32;
	}
	{
	if ((frame[16].i) == (jint(-1))) goto label_32;
	}
	{
	LINE_NUMBER(3235);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_useItem_byte_byte_byte_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_useItem_byte_byte_byte_short])(ctx, sp[0].o, (jint(0)), (jint(1)), (jbyte((frame[16].i))), (jint(-1)));
	LINE_NUMBER(3236);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_lastUseTime = (frame[14].l);
	}
label_32:;
	LINE_NUMBER(3239);
	goto label_36;
label_25:;
	{
	LINE_NUMBER(3240);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[12].o)))->F_enabled = (jint(0));
	}
label_36:;
	{
	LINE_NUMBER(3243);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3244);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3245);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3246);
	popStackFrame(ctx);
	return (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(3211);
	INST_IINC(9, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(3251);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_updateKeyTab2_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateKeyTab2", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3255);
	frame[4].i = (((frame[1].i) + (64)) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY));
	LINE_NUMBER(3256);
	frame[5].i = ((frame[0].i) + (16));
	LINE_NUMBER(3257);
	frame[6].i = ((frame[0].i) + (176));
	LINE_NUMBER(3260);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_PICK_NAMES;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(3261);
	if (((frame[7].i) % (jint(2))) != 0) goto label_7;
	}
	INST_ILOAD(5);
	goto label_8;
label_7:;
	INST_ILOAD(6);
label_8:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(3262);
	frame[9].i = ((frame[4].i) + (((frame[7].i) / (jint(2))) * (26)));
	LINE_NUMBER(3263);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[8].i), (frame[9].i), (140), (22));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(3264);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	jint temp0 = frame[7].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)ARRAY_ACCESS(jbyte, temp1, (frame[7].i))) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(3265);
	if ((frame[7].i) != (jint(3))) goto label_16;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(3266);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (jint(0));
	LINE_NUMBER(3267);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(3268);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	LINE_NUMBER(3269);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(3270);
	if ((frame[7].i) >= (jint(3))) goto label_22;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[7].i))) == 0) goto label_22;
	}
	{
	LINE_NUMBER(3271);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	LINE_NUMBER(3272);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (jint(1));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(3273);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) != 0) goto label_21;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) != 0) goto label_21;
	}
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(3274);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	LINE_NUMBER(3275);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(3277);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3278);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3279);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3280);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3281);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(3260);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3286);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[5].i), ((frame[4].i) + (52)), (200), (22));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(3287);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isPickOnlyMine) != 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isPickOnlyMine = sp[0].i;
	LINE_NUMBER(3288);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3289);
	SM_nro_AutoTrainMenu_saveRMS(ctx);
	LINE_NUMBER(3290);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3291);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3292);
	popStackFrame(ctx);
	return (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(3295);
	frame[7].i = ((frame[2].i) - (32));
	LINE_NUMBER(3297);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[5].i), ((frame[4].i) + (88)), (frame[7].i), (24));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(3298);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(5));
	LINE_NUMBER(3299);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	LINE_NUMBER(3300);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3301);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3302);
	popStackFrame(ctx);
	return (jint(1));
	}
label_41:;
	{
	LINE_NUMBER(3305);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[5].i), ((frame[4].i) + (130)), (frame[7].i), (24));
	if (temp0 == 0) goto label_47;
	}
	{
	LINE_NUMBER(3306);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (6);
	LINE_NUMBER(3307);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	LINE_NUMBER(3308);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3309);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3310);
	popStackFrame(ctx);
	return (jint(1));
	}
label_47:;
	{
	LINE_NUMBER(3313);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[5].i), ((frame[4].i) + (172)), (frame[7].i), (24));
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(3314);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (7);
	LINE_NUMBER(3315);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(0));
	LINE_NUMBER(3316);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3317);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3318);
	popStackFrame(ctx);
	return (jint(1));
	}
label_53:;
	{
	LINE_NUMBER(3321);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_AutoTrainMenu_updateKeyTab3_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:updateKeyTab3", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3325);
	frame[4].i = ((frame[1].i) + (64));
	LINE_NUMBER(3326);
	frame[5].i = ((frame[4].i) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY));
	LINE_NUMBER(3327);
	frame[6].i = ((frame[0].i) + (16));
	LINE_NUMBER(3330);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[5].i), (220), (22));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(3331);
	SM_nro_AutoTrainMenu_toggleAutoPeanPet(ctx);
	LINE_NUMBER(3332);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3333);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3334);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3335);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(3339);
	frame[7].i = ((frame[5].i) + (26));
	LINE_NUMBER(3340);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (26)), (frame[7].i), (80), (22));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(3341);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (8);
	LINE_NUMBER(3342);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3343);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3344);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3345);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(3349);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (130)), (frame[7].i), (80), (22));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(3350);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (9);
	LINE_NUMBER(3351);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3352);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3353);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3354);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(3358);
	frame[8].i = ((frame[5].i) + (50));
	LINE_NUMBER(3359);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[6].i) + (26)), (frame[8].i), (130), (22));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(3360);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (10);
	LINE_NUMBER(3361);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(3362);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3363);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3364);
	popStackFrame(ctx);
	return (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(3368);
	frame[9].i = ((frame[5].i) + (98));
	LINE_NUMBER(3369);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[9].i), (200), (22));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(3370);
	SM_nro_AutoTrainMenu_toggleAutoWakeUp(ctx);
	LINE_NUMBER(3371);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3372);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3373);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3374);
	popStackFrame(ctx);
	return (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(3378);
	frame[10].i = ((frame[9].i) + (48));
	LINE_NUMBER(3379);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[10].i), (200), (22));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(3380);
	SM_nro_AutoTrainMenu_toggleAutoLogin(ctx);
	LINE_NUMBER(3381);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(3382);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3383);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3384);
	popStackFrame(ctx);
	return (jint(1));
	}
label_38:;
	{
	LINE_NUMBER(3387);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paint_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3391);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isRMSLoaded) != 0) goto label_1;
	}
	LINE_NUMBER(3392);
	SM_nro_AutoTrainMenu_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(3393);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(3394);
	SM_nro_AutoTrainMenu_paintTriggerButton_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(3395);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3396);
	SM_nro_AutoTrainMenu_paintAutoDialog_lib_mGraphics(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(3398);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintTriggerButton_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintTriggerButton", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3401);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnX_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(3402);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnY_R_int(ctx);
	frame[2].i = temp1;
	LINE_NUMBER(3403);
	jint temp2 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnW_R_int(ctx);
	frame[3].i = temp2;
	LINE_NUMBER(3404);
	jint temp3 = (jint)SM_nro_AutoTrainMenu_getTriggerBtnH_R_int(ctx);
	frame[4].i = temp3;
	LINE_NUMBER(3406);
	jint temp4 = (jint)SM_nro_AutoTrainMenu_isAnyAutoActive_R_boolean(ctx);
	frame[5].i = temp4;
	LINE_NUMBER(3407);
	if ((frame[5].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(3408);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(1793568)));
	LINE_NUMBER(3409);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(3410);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(4431943)));
	LINE_NUMBER(3411);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), ((frame[2].i) + (jint(1))), ((frame[3].i) - (jint(1))), ((frame[4].i) - (jint(2))));
	LINE_NUMBER(3412);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(8505220)));
	LINE_NUMBER(3413);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))), ((frame[2].i) + (jint(2))), ((frame[3].i) - (jint(2))), (jint(2)));
	goto label_13;
	}
label_6:;
	{
	LINE_NUMBER(3415);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(4068867)));
	LINE_NUMBER(3416);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(3417);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(14173464)));
	LINE_NUMBER(3418);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), ((frame[2].i) + (jint(1))), ((frame[3].i) - (jint(1))), ((frame[4].i) - (jint(2))));
	LINE_NUMBER(3419);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16011550)));
	LINE_NUMBER(3420);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))), ((frame[2].i) + (jint(2))), ((frame[3].i) - (jint(2))), (jint(2)));
	}
label_13:;
	{
	LINE_NUMBER(3423);
	if ((frame[5].i) == 0) goto label_19;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_imgArrow2;
	if ((--sp)->o == nullptr) goto label_20;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_imgArrow2;
	goto label_21;
label_20:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_imgArrow;
	goto label_21;
label_19:;
	{
	LINE_NUMBER(3424);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgArrow;
	if (sp[0].o == nullptr) goto label_22;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_imgArrow;
	goto label_21;
label_22:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->o = SF_nro_AutoTrainMenu_imgArrow2;
label_21:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(3425);
	if ((frame[6].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(3426);
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(3427);
	jint temp1 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[6].o));
	frame[8].i = temp1;
	LINE_NUMBER(3428);
	frame[9].i = (((frame[1].i) + (((frame[3].i) - (frame[7].i)) / (jint(2)))) + (jint(1)));
	LINE_NUMBER(3429);
	frame[10].i = ((frame[2].i) + (((frame[4].i) - (frame[8].i)) / (jint(2))));
	LINE_NUMBER(3430);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) != 0) goto label_30;
	}
	{
	LINE_NUMBER(3431);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[6].o), (jint(0)), (jint(0)), (frame[7].i), (frame[8].i), (jint(2)), (frame[9].i), (frame[10].i), (jint(0)));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(3433);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, (frame[0].o), (frame[6].o), (frame[9].i), (frame[10].i), (jint(0)));
	}
label_32:;
	LINE_NUMBER(3435);
	goto label_33;
label_24:;
	{
	LINE_NUMBER(3436);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16777215)));
	LINE_NUMBER(3437);
	frame[7].i = ((frame[2].i) + ((frame[4].i) / (jint(2))));
	LINE_NUMBER(3438);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) != 0) goto label_36;
	}
	{
	LINE_NUMBER(3439);
	frame[8].i = (jint(0));
	}
label_38:;
	{
	if ((frame[8].i) >= (6)) goto label_39;
	}
	{
	LINE_NUMBER(3440);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (((frame[1].i) + (12)) - (frame[8].i)), ((frame[7].i) - (frame[8].i)), (jint(2)), (((frame[8].i) * (jint(2))) + (jint(1))));
	LINE_NUMBER(3439);
	INST_IINC(8, 1);
	goto label_38;
	}
label_39:;
	goto label_33;
label_36:;
	{
	LINE_NUMBER(3443);
	frame[8].i = (jint(0));
	}
label_42:;
	{
	if ((frame[8].i) >= (6)) goto label_33;
	}
	{
	LINE_NUMBER(3444);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (((frame[1].i) + (6)) + (frame[8].i)), ((frame[7].i) - (frame[8].i)), (jint(2)), (((frame[8].i) * (jint(2))) + (jint(1))));
	LINE_NUMBER(3443);
	INST_IINC(8, 1);
	goto label_42;
	}
label_33:;
	LINE_NUMBER(3448);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintAutoDialog_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[31];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintAutoDialog", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3451);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getDialogW_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(3452);
	jint temp1 = (jint)SM_nro_AutoTrainMenu_getDialogH_R_int(ctx);
	frame[2].i = temp1;
	LINE_NUMBER(3453);
	jint temp2 = (jint)SM_nro_AutoTrainMenu_getDialogX_R_int(ctx);
	frame[3].i = temp2;
	LINE_NUMBER(3454);
	jint temp3 = (jint)SM_nro_AutoTrainMenu_getDialogY_R_int(ctx);
	frame[4].i = temp3;
	LINE_NUMBER(3457);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(0)), (jfloat(0.4f)));
	LINE_NUMBER(3458);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(3461);
	SM_nro_Paint_paintFrameSimple_int_int_int_int_lib_mGraphics(ctx, (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(3464);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0110\u1ed9ng"_j))), ((frame[3].i) + ((frame[1].i) / (jint(2)))), ((frame[4].i) + (8)), (jint(2)));
	LINE_NUMBER(3467);
	frame[5].i = ((frame[3].i) + (12));
	LINE_NUMBER(3468);
	frame[6].i = ((frame[4].i) + (8));
	LINE_NUMBER(3469);
	frame[7].i = (48);
	LINE_NUMBER(3470);
	frame[8].i = (20);
	LINE_NUMBER(3471);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(14181688)));
	LINE_NUMBER(3472);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i));
	LINE_NUMBER(3473);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_whiteSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Reset"_j))), ((frame[5].i) + ((frame[7].i) / (jint(2)))), ((frame[6].i) + (jint(4))), (jint(2)));
	LINE_NUMBER(3476);
	frame[9].i = (((frame[3].i) + (frame[1].i)) - (26));
	LINE_NUMBER(3477);
	frame[10].i = ((frame[4].i) + (8));
	LINE_NUMBER(3478);
	frame[11].i = (18);
	LINE_NUMBER(3479);
	frame[12].i = (18);
	LINE_NUMBER(3480);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgBtX;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(3481);
	sp[0].o = frame[0].o;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_imgBtX;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[9].i), (frame[10].i), (jint(0)));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(3483);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(4068629)));
	LINE_NUMBER(3484);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[0].o), (frame[9].i), (frame[10].i), (frame[11].i), (frame[12].i));
	LINE_NUMBER(3485);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(13840175)));
	LINE_NUMBER(3486);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[9].i) + (jint(1))), ((frame[10].i) + (jint(1))), ((frame[11].i) - (jint(2))), ((frame[12].i) - (jint(2))));
	LINE_NUMBER(3487);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_whiteSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"X"_j))), ((frame[9].i) + ((frame[11].i) / (jint(2)))), ((frame[10].i) + (jint(4))), (jint(2)));
	}
label_22:;
	{
	LINE_NUMBER(3491);
	frame[13].i = ((frame[4].i) + (32));
	LINE_NUMBER(3492);
	frame[14].i = (10);
	LINE_NUMBER(3493);
	frame[15].i = (jint(3));
	LINE_NUMBER(3494);
	frame[16].i = (jint(4));
	LINE_NUMBER(3495);
	frame[17].i = ((((frame[1].i) - ((frame[14].i) * (jint(2)))) - ((frame[15].i) * ((frame[16].i) - (jint(1))))) / (frame[16].i));
	LINE_NUMBER(3496);
	frame[18].i = (20);
	LINE_NUMBER(3497);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Luy\u1ec7n T\u1eadp"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"V\u1eadt Ph\u1ea9m"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Nh\u1eb7t \u0110\u1ed3"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0110\u1ed9ng"_j)));
	frame[19].o = sp[0].o;
	LINE_NUMBER(3498);
	frame[20].i = (jint(0));
	}
label_34:;
	{
	if ((frame[20].i) >= (frame[16].i)) goto label_35;
	}
	{
	LINE_NUMBER(3499);
	frame[21].i = (((frame[3].i) + (frame[14].i)) + ((frame[20].i) * ((frame[17].i) + (frame[15].i))));
	LINE_NUMBER(3500);
	sp[0].o = frame[0].o;
	jint temp0 = frame[21].i;
	jint temp1 = frame[13].i;
	jint temp2 = frame[17].i;
	jint temp3 = frame[18].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp += 5;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (frame[20].i)) goto label_38;
	}
	INST_ICONST(1);
	goto label_39;
label_38:;
	INST_ICONST(0);
label_39:;
	{
	sp -= 6;
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(1)));
	LINE_NUMBER(3501);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (frame[20].i)) goto label_41;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_green2;
	goto label_42;
label_41:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_grey;
label_42:;
	{
	sp -= 1;
	frame[22].o = sp[0].o;
	LINE_NUMBER(3502);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[22].o), (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[19].o), (frame[20].i))), ((frame[21].i) + ((frame[17].i) / (jint(2)))), ((frame[13].i) + (jint(4))), (jint(2)));
	LINE_NUMBER(3498);
	INST_IINC(20, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(3505);
	frame[20].i = ((frame[3].i) + (6));
	LINE_NUMBER(3506);
	frame[21].i = ((frame[4].i) + (60));
	LINE_NUMBER(3507);
	frame[22].i = ((frame[1].i) - (12));
	LINE_NUMBER(3508);
	frame[23].i = ((frame[2].i) - (66));
	LINE_NUMBER(3509);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[0].o), (frame[20].i), (frame[21].i), (frame[22].i), (frame[23].i));
	LINE_NUMBER(3511);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_50;
	}
	{
	LINE_NUMBER(3512);
	SM_nro_AutoTrainMenu_paintTabLuyenTap_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	goto label_52;
	}
label_50:;
	{
	LINE_NUMBER(3513);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_53;
	}
	{
	LINE_NUMBER(3514);
	SM_nro_AutoTrainMenu_paintTabVatPham_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(3515);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_55;
	}
	{
	LINE_NUMBER(3516);
	SM_nro_AutoTrainMenu_paintTabNhatDo_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	goto label_52;
	}
label_55:;
	{
	LINE_NUMBER(3518);
	SM_nro_AutoTrainMenu_paintTabAuto_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	}
label_52:;
	{
	LINE_NUMBER(3521);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(3522);
	SM_nro_AutoTrainMenu_paintScrollArrows_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	LINE_NUMBER(3523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintScrollArrows_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintScrollArrows", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3526);
	frame[5].i = (((frame[1].i) + (frame[3].i)) - (22));
	LINE_NUMBER(3527);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int(ctx, (frame[4].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(3528);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_4;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int(ctx, (frame[4].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3529);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_5;
	}
	{
	jint temp0 = (jint)SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int(ctx, (frame[4].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_5:;
	INST_ILOAD(4);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int(ctx, sp[0].i);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(3530);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != 0) goto label_7;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_tab0ScrollY;
	goto label_8;
label_7:;
	{
	LINE_NUMBER(3531);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(1))) goto label_9;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_itemScrollY;
	goto label_8;
label_9:;
	{
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_currentTab) != (jint(2))) goto label_10;
	}
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_pickScrollY;
	goto label_8;
label_10:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_autoScrollY;
label_8:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(3533);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_imgHP;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(3534);
	if ((frame[7].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(3535);
	sp[0].o = frame[0].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (9), (6), (jint(1)), (frame[5].i), ((frame[2].i) + (62)), (jint(0)));
	}
label_14:;
	{
	LINE_NUMBER(3537);
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(3538);
	sp[0].o = frame[0].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (9), (6), (jint(0)), (frame[5].i), (((frame[2].i) + (frame[4].i)) - (18)), (jint(0)));
	}
label_12:;
	LINE_NUMBER(3541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintCheckbox", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3544);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_imgCheck;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3545);
	sp[0].o = frame[0].o;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_imgCheck;
	jint temp0 = jint(0);
	sp[2].i = temp0;
	sp += 3;
	if ((frame[3].i) == 0) goto label_3;
	}
	INST_BIPUSH(36);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 4;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, (20), (18), (jint(0)), (frame[1].i), (frame[2].i), (jint(0)));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(3547);
	frame[4].i = (18);
	LINE_NUMBER(3548);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(9066540)));
	LINE_NUMBER(3549);
	((func_lib_mGraphics_drawRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRoundRect_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[4].i), (frame[4].i), (jint(4)), (jint(4)));
	LINE_NUMBER(3550);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(15058068)));
	LINE_NUMBER(3551);
	((func_lib_mGraphics_fillRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), ((frame[2].i) + (jint(1))), ((frame[4].i) - (jint(2))), ((frame[4].i) - (jint(2))), (jint(3)), (jint(3)));
	LINE_NUMBER(3552);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3553);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(4201736)));
	LINE_NUMBER(3554);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))), ((frame[2].i) + (8)), (jint(3)), (jint(4)));
	LINE_NUMBER(3555);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(5))), ((frame[2].i) + (10)), (jint(3)), (jint(4)));
	LINE_NUMBER(3556);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (7)), ((frame[2].i) + (8)), (jint(3)), (jint(5)));
	LINE_NUMBER(3557);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (9)), ((frame[2].i) + (jint(5))), (jint(3)), (6));
	LINE_NUMBER(3558);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (11)), ((frame[2].i) + (jint(3))), (jint(3)), (6));
	}
label_5:;
	LINE_NUMBER(3561);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintTabLuyenTap_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[35];
	auto stack = &frame[29];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintTabLuyenTap", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3564);
	frame[5].i = (((frame[2].i) + (64)) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_tab0ScrollY));
	LINE_NUMBER(3565);
	frame[6].i = ((frame[1].i) + (16));
	LINE_NUMBER(3566);
	frame[7].i = ((frame[1].i) + (176));
	LINE_NUMBER(3569);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), (frame[5].i), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack));
	LINE_NUMBER(3570);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng \u0111\u00e1nh"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3572);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[7].i), (frame[5].i), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isSkipSuperMob));
	LINE_NUMBER(3573);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"B\u1ecf Qua Si\u00eau Qu\u00e1i"_j))), ((frame[7].i) + (26)), ((frame[5].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3576);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), ((frame[5].i) + (26)), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob));
	LINE_NUMBER(3577);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed5i Khu Khi H\u1ebft Qu\u00e1i"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (30)), (jint(0)));
	LINE_NUMBER(3579);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[7].i), ((frame[5].i) + (26)), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAttackByHp));
	LINE_NUMBER(3580);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\u0110\u00e1nh Theo HP"_j))), ((frame[7].i) + (26)), ((frame[5].i) + (30)), (jint(0)));
	LINE_NUMBER(3583);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), ((frame[5].i) + (52)), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPick));
	LINE_NUMBER(3584);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0110\u1ed9ng Nh\u1eb7t"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (56)), (jint(0)));
	LINE_NUMBER(3586);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"HP>="_j))), ((frame[6].i) + (114)), ((frame[5].i) + (56)), (jint(0)));
	LINE_NUMBER(3587);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiDuoi));
	frame[8].o = sp[0].o;
	LINE_NUMBER(3588);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[8].o), ((frame[6].i) + (168)), ((frame[5].i) + (56)), (jint(2)));
	LINE_NUMBER(3589);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(3))) goto label_17;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_17;
	}
	{
	LINE_NUMBER(3590);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3591);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (194)), ((frame[5].i) + (57)), (jint(1)), (10));
	}
label_17:;
	{
	LINE_NUMBER(3593);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(3))) goto label_20;
	}
	(sp++)->i = jint(13295804);
	goto label_21;
label_20:;
	(sp++)->i = jint(3679762);
label_21:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3594);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (142)), ((frame[5].i) + (67)), (54), (jint(1)));
	LINE_NUMBER(3596);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"<="_j))), ((frame[6].i) + (204)), ((frame[5].i) + (56)), (jint(0)));
	LINE_NUMBER(3597);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (clinit_nro_AutoTrainMenu(ctx), (jlong)SF_nro_AutoTrainMenu_hpQuaiOn));
	frame[9].o = sp[0].o;
	LINE_NUMBER(3598);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[9].o), ((frame[6].i) + (250)), ((frame[5].i) + (56)), (jint(2)));
	LINE_NUMBER(3599);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(4))) goto label_27;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_27;
	}
	{
	LINE_NUMBER(3600);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3601);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (278)), ((frame[5].i) + (57)), (jint(1)), (10));
	}
label_27:;
	{
	LINE_NUMBER(3603);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(4))) goto label_30;
	}
	(sp++)->i = jint(13295804);
	goto label_31;
label_30:;
	(sp++)->i = jint(3679762);
label_31:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3604);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (220)), ((frame[5].i) + (67)), (60), (jint(1)));
	LINE_NUMBER(3607);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), ((frame[5].i) + (78)), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPea));
	LINE_NUMBER(3608);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 d\u00f9ng \u0111\u1eadu:"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (82)), (jint(0)));
	LINE_NUMBER(3610);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"HP <"_j))), ((frame[6].i) + (102)), ((frame[5].i) + (82)), (jint(0)));
	LINE_NUMBER(3611);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_hpPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(3612);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[10].o), ((frame[6].i) + (138)), ((frame[5].i) + (82)), (jint(2)));
	LINE_NUMBER(3613);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(1))) goto label_39;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_39;
	}
	{
	LINE_NUMBER(3614);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3615);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (148)), ((frame[5].i) + (83)), (jint(1)), (10));
	}
label_39:;
	{
	LINE_NUMBER(3617);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(1))) goto label_42;
	}
	(sp++)->i = jint(13295804);
	goto label_43;
label_42:;
	(sp++)->i = jint(3679762);
label_43:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3618);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (126)), ((frame[5].i) + (93)), (24), (jint(1)));
	LINE_NUMBER(3619);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"%"_j))), ((frame[6].i) + (154)), ((frame[5].i) + (82)), (jint(0)));
	LINE_NUMBER(3621);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"MP <"_j))), ((frame[6].i) + (170)), ((frame[5].i) + (82)), (jint(0)));
	LINE_NUMBER(3622);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_mpPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(3623);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[11].o), ((frame[6].i) + (206)), ((frame[5].i) + (82)), (jint(2)));
	LINE_NUMBER(3624);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(2))) goto label_50;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_50;
	}
	{
	LINE_NUMBER(3625);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3626);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (216)), ((frame[5].i) + (83)), (jint(1)), (10));
	}
label_50:;
	{
	LINE_NUMBER(3628);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(2))) goto label_53;
	}
	(sp++)->i = jint(13295804);
	goto label_54;
label_53:;
	(sp++)->i = jint(3679762);
label_54:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3629);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (194)), ((frame[5].i) + (93)), (24), (jint(1)));
	LINE_NUMBER(3630);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"%"_j))), ((frame[6].i) + (222)), ((frame[5].i) + (82)), (jint(0)));
	LINE_NUMBER(3633);
	frame[12].i = ((frame[5].i) + (104));
	LINE_NUMBER(3634);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn Qu\u00e1i Theo T\u00ean:"_j))), (frame[6].i), ((frame[12].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3636);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), ((frame[6].i) + (114)), (frame[12].i), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAllMob));
	LINE_NUMBER(3637);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ea5t c\u1ea3"_j))), ((frame[6].i) + (138)), ((frame[12].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3640);
	frame[13].i = ((frame[12].i) + (24));
	LINE_NUMBER(3641);
	frame[14].i = (jint(0));
	}
label_63:;
	{
	jint temp0 = frame[14].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_64;
	}
	{
	LINE_NUMBER(3642);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[14].i));
	frame[15].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(3643);
	if (((frame[14].i) % (jint(2))) != 0) goto label_67;
	}
	INST_ILOAD(6);
	goto label_68;
label_67:;
	INST_ILOAD(7);
label_68:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(3644);
	frame[17].i = ((frame[13].i) + (((frame[14].i) / (jint(2))) * (24)));
	LINE_NUMBER(3646);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_selectedMobs;
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[15].o));
	frame[18].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(3647);
	if ((frame[18].o) == nullptr) goto label_72;
	}
	{
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[18].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_73;
	}
label_72:;
	clinit_nro_AutoTrainMenu(ctx);
	(sp++)->i = SF_nro_AutoTrainMenu_isAllMob;
label_73:;
	{
	sp -= 1;
	frame[19].i = sp[0].i;
	LINE_NUMBER(3648);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[16].i), (frame[17].i), (frame[19].i));
	LINE_NUMBER(3649);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[15].o), ((frame[16].i) + (26)), ((frame[17].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3641);
	INST_IINC(14, 1);
	goto label_63;
	}
label_64:;
	{
	LINE_NUMBER(3653);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_77;
	}
	INST_ICONST(1);
	goto label_78;
label_77:;
	{
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_listMobNames;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	jint temp1 = ((temp0 - (jint(1))) / (jint(2))) + (jint(1));
	sp[0].i = temp1;
	sp += 1;
	}
label_78:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(3654);
	frame[15].i = (((frame[13].i) + ((frame[14].i) * (24))) + (8));
	LINE_NUMBER(3655);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Danh S\u00e1ch Skill T\u1ef1 \u0110\u00e1nh:"_j))), (frame[6].i), (frame[15].i), (jint(0)));
	LINE_NUMBER(3657);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_keySkill;
	if (sp[0].o == nullptr) goto label_82;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_keySkill;
	goto label_83;
label_82:;
	{
	LINE_NUMBER(3658);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_84;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_onScreenSkill;
	goto label_83;
label_84:;
	INST_ACONST_NULL();
label_83:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(3659);
	frame[17].i = ((frame[15].i) + (16));
	LINE_NUMBER(3660);
	frame[18].i = (60);
	LINE_NUMBER(3662);
	frame[19].i = (jint(0));
	}
label_88:;
	{
	if ((frame[19].i) >= (10)) goto label_89;
	}
	{
	LINE_NUMBER(3663);
	frame[20].i = ((frame[19].i) % (jint(5)));
	LINE_NUMBER(3664);
	frame[21].i = ((frame[19].i) / (jint(5)));
	LINE_NUMBER(3665);
	frame[22].i = ((frame[6].i) + ((frame[20].i) * (frame[18].i)));
	LINE_NUMBER(3666);
	frame[23].i = ((frame[17].i) + ((frame[21].i) * (44)));
	LINE_NUMBER(3668);
	sp[0].o = frame[0].o;
	jint temp0 = frame[22].i;
	jint temp1 = (frame[23].i) + (jint(4));
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, sp[0].o, temp0, temp1, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[19].i))));
	LINE_NUMBER(3670);
	frame[24].i = ((frame[22].i) + (22));
	LINE_NUMBER(3671);
	frame[25].i = (frame[23].i);
	LINE_NUMBER(3673);
	if ((frame[16].o) == nullptr) goto label_98;
	}
	{
	if ((frame[19].i) >= (((jarray) nullCheck(ctx, (frame[16].o)))->length)) goto label_98;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[16].o), (frame[19].i))) == nullptr) goto label_98;
	}
	{
	LINE_NUMBER(3674);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_98;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[16].o), (frame[19].i));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_myskill;
	if (sp[0].o != sp[1].o) goto label_98;
	}
	INST_ICONST(1);
	goto label_100;
label_98:;
	INST_ICONST(0);
label_100:;
	{
	sp -= 1;
	frame[26].i = sp[0].i;
	LINE_NUMBER(3676);
	if ((frame[26].i) == 0) goto label_102;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgSkill2;
	goto label_103;
label_102:;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgSkill;
label_103:;
	{
	sp -= 1;
	frame[27].o = sp[0].o;
	LINE_NUMBER(3677);
	if ((frame[27].o) == nullptr) goto label_105;
	}
	{
	LINE_NUMBER(3678);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, (frame[0].o), (frame[27].o), ((frame[24].i) - (jint(1))), ((frame[25].i) - (jint(1))), (jint(0)));
	goto label_107;
	}
label_105:;
	{
	LINE_NUMBER(3680);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[26].i) == 0) goto label_108;
	}
	(sp++)->i = jint(4431943);
	goto label_109;
label_108:;
	(sp++)->i = jint(16011550);
label_109:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3681);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[0].o), (frame[24].i), (frame[25].i), (26), (26));
	LINE_NUMBER(3682);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[0].o), ((frame[24].i) + (jint(1))), ((frame[25].i) + (jint(1))), (24), (24));
	}
label_107:;
	{
	LINE_NUMBER(3685);
	if ((frame[16].o) == nullptr) goto label_112;
	}
	{
	if ((frame[19].i) >= (((jarray) nullCheck(ctx, (frame[16].o)))->length)) goto label_112;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[16].o), (frame[19].i))) == nullptr) goto label_112;
	}
	{
	LINE_NUMBER(3686);
	frame[28].o = ((jobject)ARRAY_ACCESS(jobject, (frame[16].o), (frame[19].i)));
	LINE_NUMBER(3687);
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((frame[28].o)))->F_template;
	if (sp[0].o == nullptr) goto label_112;
	}
	{
	LINE_NUMBER(3688);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Skill *) NULL_CHECK((frame[28].o)))->F_template;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_SkillTemplate *) NULL_CHECK(sp[1].o))->F_iconId), ((frame[24].i) + (13)), ((frame[25].i) + (13)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_112:;
	{
	LINE_NUMBER(3662);
	INST_IINC(19, 1);
	goto label_88;
	}
label_89:;
	LINE_NUMBER(3693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintTabVatPham_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintTabVatPham", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3696);
	frame[5].i = (((frame[2].i) + (64)) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_itemScrollY));
	LINE_NUMBER(3697);
	frame[6].i = ((frame[1].i) + (16));
	LINE_NUMBER(3698);
	frame[7].i = ((frame[1].i) + (176));
	LINE_NUMBER(3700);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(3701);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[8].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(3702);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_autoItems;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(3703);
	if (((frame[8].i) % (jint(2))) != 0) goto label_9;
	}
	INST_ILOAD(6);
	goto label_10;
label_9:;
	INST_ILOAD(7);
label_10:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(3704);
	frame[11].i = ((frame[5].i) + (((frame[8].i) / (jint(2))) * (25)));
	LINE_NUMBER(3706);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[10].i), ((frame[11].i) + (jint(2))), ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[9].o)))->F_enabled));
	LINE_NUMBER(3708);
	frame[12].i = ((frame[10].i) + (24));
	LINE_NUMBER(3709);
	frame[13].i = (jint(0));
	LINE_NUMBER(3710);
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[9].o)))->F_templateId) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(3711);
	sp[0].o = (jobject)SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(ctx, (jshort(((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[9].o)))->F_templateId))));
	frame[14].o = sp[0].o;
	LINE_NUMBER(3712);
	if ((frame[14].o) == nullptr) goto label_16;
	}
	{
	if (((jint)((nro_ItemTemplate *) NULL_CHECK((frame[14].o)))->F_iconID) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(3713);
	frame[13].i = ((jint)((nro_ItemTemplate *) NULL_CHECK((frame[14].o)))->F_iconID);
	}
label_16:;
	{
	LINE_NUMBER(3716);
	if ((frame[13].i) > 0) goto label_20;
	}
	{
	if (((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[9].o)))->F_iconId) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(3717);
	frame[13].i = ((jint)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[9].o)))->F_iconId);
	}
label_20:;
	{
	LINE_NUMBER(3719);
	if ((frame[13].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(3720);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[0].o), (frame[13].i), ((frame[12].i) + (10)), ((frame[11].i) + (11)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_22:;
	{
	LINE_NUMBER(3723);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[9].o)))->F_name;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[12].i) + (24)), ((frame[11].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3701);
	INST_IINC(8, 1);
	goto label_6;
	}
label_4:;
	LINE_NUMBER(3726);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintTabNhatDo_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintTabNhatDo", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3729);
	frame[5].i = (((frame[2].i) + (64)) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_pickScrollY));
	LINE_NUMBER(3730);
	frame[6].i = ((frame[1].i) + (16));
	LINE_NUMBER(3731);
	frame[7].i = ((frame[1].i) + (176));
	LINE_NUMBER(3734);
	frame[8].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[8].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_PICK_NAMES;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(3735);
	if (((frame[8].i) % (jint(2))) != 0) goto label_7;
	}
	INST_ILOAD(6);
	goto label_8;
label_7:;
	INST_ILOAD(7);
label_8:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(3736);
	frame[10].i = ((frame[5].i) + (((frame[8].i) / (jint(2))) * (26)));
	LINE_NUMBER(3737);
	sp[0].o = frame[0].o;
	jint temp0 = frame[9].i;
	jint temp1 = frame[10].i;
	clinit_nro_AutoTrainMenu(ctx);
	sp[1].o = (jobject)SF_nro_AutoTrainMenu_isCheckPick;
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, sp[0].o, temp0, temp1, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (frame[8].i))));
	LINE_NUMBER(3738);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	sp[1].o = frame[0].o;
	clinit_nro_AutoTrainMenu(ctx);
	sp[2].o = (jobject)SF_nro_AutoTrainMenu_PICK_NAMES;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[8].i))), ((frame[9].i) + (26)), ((frame[10].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3734);
	INST_IINC(8, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3742);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), ((frame[5].i) + (52)), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isPickOnlyMine));
	LINE_NUMBER(3743);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Ch\u1ec9 nh\u1eb7t v\u1eadt ph\u1ea9m c\u1ee7a m\u00ecnh"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (56)), (jint(0)));
	LINE_NUMBER(3745);
	frame[8].i = ((frame[3].i) - (32));
	LINE_NUMBER(3746);
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	jint temp1 = (frame[5].i) + (76);
	jint temp2 = frame[8].i;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DS ID nh\u1eb7t (c\u00e1ch nhau d\u1ea5u ,):"_j));
	clinit_nro_AutoTrainMenu(ctx);
	sp[2].o = (jobject)SF_nro_AutoTrainMenu_strIdNhat;
	jobject temp3 = sp[1].o;
	sp[1].i = temp0;
	jobject temp4 = sp[2].o;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].o = temp3;
	sp[5].o = temp4;
	sp += 6;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (jint(5))) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 7;
	SM_nro_AutoTrainMenu_paintTextFieldBox_lib_mGraphics_int_int_int_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].o, sp[5].o, sp[6].i);
	LINE_NUMBER(3748);
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	jint temp1 = (frame[5].i) + (118);
	jint temp2 = frame[8].i;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DS ID lo\u1ea1i tr\u1eeb (c\u00e1ch nhau d\u1ea5u ,):"_j));
	clinit_nro_AutoTrainMenu(ctx);
	sp[2].o = (jobject)SF_nro_AutoTrainMenu_strIdLoaiTru;
	jobject temp3 = sp[1].o;
	sp[1].i = temp0;
	jobject temp4 = sp[2].o;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].o = temp3;
	sp[5].o = temp4;
	sp += 6;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (6)) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 7;
	SM_nro_AutoTrainMenu_paintTextFieldBox_lib_mGraphics_int_int_int_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].o, sp[5].o, sp[6].i);
	LINE_NUMBER(3750);
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	jint temp1 = (frame[5].i) + (160);
	jint temp2 = frame[8].i;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DS ID t\u1ef1 v\u1ee9t b\u1ecf (c\u00e1ch nhau d\u1ea5u ,):"_j));
	clinit_nro_AutoTrainMenu(ctx);
	sp[2].o = (jobject)SF_nro_AutoTrainMenu_strIdVutBo;
	jobject temp3 = sp[1].o;
	sp[1].i = temp0;
	jobject temp4 = sp[2].o;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].o = temp3;
	sp[5].o = temp4;
	sp += 6;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (7)) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 7;
	SM_nro_AutoTrainMenu_paintTextFieldBox_lib_mGraphics_int_int_int_java_lang_String_java_lang_String_boolean(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].o, sp[5].o, sp[6].i);
	LINE_NUMBER(3752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintTextFieldBox_lib_mGraphics_int_int_int_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jbool param6) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintTextFieldBox", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(3756);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[4].o), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(3757);
	frame[7].i = ((frame[2].i) + (13));
	LINE_NUMBER(3758);
	frame[8].i = (20);
	LINE_NUMBER(3759);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_4;
	}
	(sp++)->i = jint(3046706);
	goto label_5;
label_4:;
	(sp++)->i = jint(9066540);
label_5:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3760);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[7].i), (frame[3].i), (frame[8].i));
	LINE_NUMBER(3761);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) == 0) goto label_8;
	}
	(sp++)->i = jint(15857897);
	goto label_9;
label_8:;
	(sp++)->i = jint(15058068);
label_9:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3762);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), ((frame[7].i) + (jint(1))), ((frame[3].i) - (jint(1))), ((frame[8].i) - (jint(1))));
	LINE_NUMBER(3764);
	if ((frame[5].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_12;
	}
	INST_ALOAD(5);
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_13:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(3765);
	frame[10].o = (frame[9].o);
	LINE_NUMBER(3766);
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_16;
	}
	{
	LINE_NUMBER(3767);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(3769);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_18;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_18;
	{
	LINE_NUMBER(3770);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5n \u0111\u1ec3 nh\u1eadp ID..."_j))), ((frame[1].i) + (6)), ((frame[7].i) + (jint(4))), (jint(0)));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(3772);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[10].o), ((frame[1].i) + (6)), ((frame[7].i) + (jint(4))), (jint(0)));
	}
label_20:;
	LINE_NUMBER(3774);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_AutoTrainMenu_paintTabAuto_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:paintTabAuto", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3777);
	frame[5].i = (((frame[2].i) + (64)) - (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_autoScrollY));
	LINE_NUMBER(3778);
	frame[6].i = ((frame[1].i) + (16));
	LINE_NUMBER(3781);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), (frame[5].i), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoPeanPet));
	LINE_NUMBER(3782);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 d\u00f9ng \u0111\u1eadu cho \u0111\u1ec7 t\u1eed (atd)"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3785);
	frame[7].i = ((frame[5].i) + (28));
	LINE_NUMBER(3786);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"HP \u0111\u1ec7 <"_j))), ((frame[6].i) + (26)), (frame[7].i), (jint(0)));
	LINE_NUMBER(3787);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petHpPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3788);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[8].o), ((frame[6].i) + (86)), (frame[7].i), (jint(2)));
	LINE_NUMBER(3789);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (8)) goto label_9;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_9;
	}
	{
	LINE_NUMBER(3790);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3791);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (96)), ((frame[7].i) + (jint(1))), (jint(1)), (10));
	}
label_9:;
	{
	LINE_NUMBER(3793);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (8)) goto label_12;
	}
	(sp++)->i = jint(13295804);
	goto label_13;
label_12:;
	(sp++)->i = jint(3679762);
label_13:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3794);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (74)), ((frame[7].i) + (11)), (24), (jint(1)));
	LINE_NUMBER(3795);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"%"_j))), ((frame[6].i) + (102)), (frame[7].i), (jint(0)));
	LINE_NUMBER(3797);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"KI \u0111\u1ec7 <"_j))), ((frame[6].i) + (130)), (frame[7].i), (jint(0)));
	LINE_NUMBER(3798);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petMpPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(3799);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[9].o), ((frame[6].i) + (190)), (frame[7].i), (jint(2)));
	LINE_NUMBER(3800);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (9)) goto label_20;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_20;
	}
	{
	LINE_NUMBER(3801);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3802);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (200)), ((frame[7].i) + (jint(1))), (jint(1)), (10));
	}
label_20:;
	{
	LINE_NUMBER(3804);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (9)) goto label_23;
	}
	(sp++)->i = jint(13295804);
	goto label_24;
label_23:;
	(sp++)->i = jint(3679762);
label_24:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3805);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (178)), ((frame[7].i) + (11)), (24), (jint(1)));
	LINE_NUMBER(3806);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"%"_j))), ((frame[6].i) + (206)), (frame[7].i), (jint(0)));
	LINE_NUMBER(3809);
	frame[10].i = ((frame[5].i) + (52));
	LINE_NUMBER(3810);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Th\u1ec3 l\u1ef1c \u0111\u1ec7 <"_j))), ((frame[6].i) + (26)), (frame[10].i), (jint(0)));
	LINE_NUMBER(3811);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(3812);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[11].o), ((frame[6].i) + (116)), (frame[10].i), (jint(2)));
	LINE_NUMBER(3813);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (10)) goto label_32;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) >= (10)) goto label_32;
	}
	{
	LINE_NUMBER(3814);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(3679762)));
	LINE_NUMBER(3815);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (128)), ((frame[10].i) + (jint(1))), (jint(1)), (10));
	}
label_32:;
	{
	LINE_NUMBER(3817);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_focusedInput) != (10)) goto label_35;
	}
	(sp++)->i = jint(13295804);
	goto label_36;
label_35:;
	(sp++)->i = jint(3679762);
label_36:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(3818);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (100)), ((frame[10].i) + (11)), (32), (jint(1)));
	LINE_NUMBER(3819);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_petStaminaPeaPercent) > (100)) goto label_39;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"% (Max 1250)"_j));
	goto label_40;
label_39:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\u0111i\u1ec3m (Max 1250)"_j));
label_40:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(3820);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[12].o), ((frame[6].i) + (136)), (frame[10].i), (jint(0)));
	LINE_NUMBER(3823);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"- T\u1ef1 buff khi \u0111\u1ec7 k\u00eau \u0111\u00f3i (\"S\u01b0 ph\u1ee5 \u01a1i...\")"_j))), ((frame[6].i) + (26)), ((frame[5].i) + (74)), (jint(0)));
	LINE_NUMBER(3826);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(13676672)));
	LINE_NUMBER(3827);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[5].i) + (90)), ((frame[3].i) - (32)), (jint(1)));
	LINE_NUMBER(3830);
	frame[13].i = ((frame[5].i) + (98));
	LINE_NUMBER(3831);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), (frame[13].i), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoWakeUp));
	LINE_NUMBER(3832);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0110\u1ed9ng H\u1ed3i Sinh (ahs)"_j))), ((frame[6].i) + (26)), ((frame[13].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3833);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"- T\u1ef1 h\u1ed3i sinh t\u1ea1i ch\u1ed7 b\u1eb1ng ng\u1ecdc khi ki\u1ec7t s\u1ee9c"_j))), ((frame[6].i) + (26)), ((frame[13].i) + (24)), (jint(0)));
	LINE_NUMBER(3836);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(13676672)));
	LINE_NUMBER(3837);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[13].i) + (40)), ((frame[3].i) - (32)), (jint(1)));
	LINE_NUMBER(3840);
	frame[14].i = ((frame[13].i) + (48));
	LINE_NUMBER(3841);
	SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[6].i), (frame[14].i), (clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoLogin));
	LINE_NUMBER(3842);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0110\u0103ng Nh\u1eadp (alogin)"_j))), ((frame[6].i) + (26)), ((frame[14].i) + (jint(4))), (jint(0)));
	LINE_NUMBER(3844);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"nro_alogin_acc"_j))));
	frame[15].o = sp[0].o;
	LINE_NUMBER(3845);
	if ((frame[15].o) == nullptr) goto label_56;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_57;
	}
label_56:;
	{
	LINE_NUMBER(3846);
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"acc"_j))));
	frame[15].o = sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(3847);
	if ((frame[15].o) == nullptr) goto label_58;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[15].o));
	if (temp0 != 0) goto label_58;
	}
	INST_ALOAD(15);
	goto label_59;
label_58:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(ch\u01b0a c\u00e0i \u0111\u1eb7t)"_j));
label_59:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(3848);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"- T\u00e0i kho\u1ea3n: "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[16].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" (T\u1ef1 v\u00e0o l\u1ea1i khi m\u1ea5t m\u1ea1ng)"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[6].i) + (26)), ((frame[14].i) + (24)), (jint(0)));
	LINE_NUMBER(3850);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"- L\u1ec7nh: alogin [tk] [mk] [sv] \u0111\u1ec3 \u0111\u1ed5i t\u00e0i kho\u1ea3n"_j))), ((frame[6].i) + (26)), ((frame[14].i) + (40)), (jint(0)));
	LINE_NUMBER(3851);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_AutoTrainMenu(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_nro_AutoTrainMenu_MAX_AUTOLOGIN_RETRIES = jint(5);
	SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp s\u1ed1 l\u01b0\u1ee3ng mu\u1ed1n mua"_j));
	SF_nro_AutoTrainMenu_AUTO_BUY_INTERVAL_MS = jlong(200ll);
	SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp s\u1ed1 l\u01b0\u1ee3ng mu\u1ed1n d\u00f9ng"_j));
	SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp th\u1eddi gian delay (gi\u00e2y)"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu(ctx);
	{
	LINE_NUMBER(30);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isShow = (jint(0));
	LINE_NUMBER(32);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTab = (jint(0));
	LINE_NUMBER(35);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoAttack = (jint(0));
	LINE_NUMBER(36);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isStandAutoAttack = (jint(0));
	LINE_NUMBER(37);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isSkipSuperMob = (jint(1));
	LINE_NUMBER(38);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob = (jint(0));
	LINE_NUMBER(39);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAttackByHp = (jint(0));
	LINE_NUMBER(40);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiOn = (jlong(0));
	LINE_NUMBER(41);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpQuaiDuoi = (jlong(0));
	LINE_NUMBER(42);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPick = (jint(1));
	LINE_NUMBER(43);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPea = (jint(0));
	LINE_NUMBER(44);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_hpPeaPercent = (50);
	LINE_NUMBER(45);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_mpPeaPercent = (50);
	LINE_NUMBER(48);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoPeanPet = (jint(0));
	LINE_NUMBER(49);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petPeaPercent = (30);
	LINE_NUMBER(50);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petHpPeaPercent = (30);
	LINE_NUMBER(51);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petMpPeaPercent = (30);
	LINE_NUMBER(52);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_petStaminaPeaPercent = (20);
	LINE_NUMBER(53);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPeanPetTime = (jlong(0));
	LINE_NUMBER(54);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPetInfoSyncTime = (jlong(0));
	LINE_NUMBER(55);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoWakeUp = (jint(0));
	LINE_NUMBER(56);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoWakeUpTime = (jlong(0));
	LINE_NUMBER(57);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoLogin = (jint(0));
	LINE_NUMBER(58);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoLoginAttempt = (jlong(0));
	LINE_NUMBER(59);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isWaitingAutoLogin = (jint(0));
	LINE_NUMBER(60);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_dialogDismissTimer = (jlong(0));
	LINE_NUMBER(61);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoLoginRetryCount = (jint(0));
	LINE_NUMBER(63);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastCountdownSec = (jint(-1));
	LINE_NUMBER(64);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_initialDialogMsg = (jobject(nullptr));
	LINE_NUMBER(65);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoScrollY = (jint(0));
	LINE_NUMBER(68);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Nh\u1eb7t t\u1ea5t c\u1ea3"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Nh\u1eb7t theo ID"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Lo\u1ea1i tr\u1eeb ID"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng nh\u1eb7t"_j)));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_PICK_NAMES = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(4)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isCheckPick = sp[0].o;
	LINE_NUMBER(75);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isPickOnlyMine = (jint(1));
	LINE_NUMBER(76);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdNhat = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(77);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdLoaiTru = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(78);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_strIdVutBo = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(79);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_pickScrollY = (jint(0));
	LINE_NUMBER(88);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_focusedInput = (jint(0));
	LINE_NUMBER(89);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isFirstInput = (jint(1));
	LINE_NUMBER(91);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_currentTargetMob = (jobject(nullptr));
	LINE_NUMBER(92);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_targetStartTime = (jlong(0));
	LINE_NUMBER(93);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastHitTime = (jlong(0));
	LINE_NUMBER(94);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTargetHp = (jlong(-1ll));
	LINE_NUMBER(95);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_unreachableMobIds = sp[0].o;
	LINE_NUMBER(96);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastBossDieTime = (jlong(0));
	LINE_NUMBER(97);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastBossDieX = (jint(0));
	LINE_NUMBER(98);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastBossDieY = (jint(0));
	LINE_NUMBER(100);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastStandAttackTime = (jlong(0));
	LINE_NUMBER(101);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChat = (jint(0));
	LINE_NUMBER(102);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_textAutoChat = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(103);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTime = (jlong(0));
	LINE_NUMBER(104);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoChatTG = (jint(0));
	LINE_NUMBER(105);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_textAutoChatTG = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(106);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoChatTGTime = (jlong(0));
	LINE_NUMBER(110);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoBuy = (jint(0));
	LINE_NUMBER(111);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyType = (jint(-1));
	LINE_NUMBER(112);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyItemId = (jint(-1));
	LINE_NUMBER(113);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyItemName = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(114);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyUnitPrice = (jlong(0));
	LINE_NUMBER(115);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyTotal = (jint(0));
	LINE_NUMBER(116);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyRemaining = (jint(0));
	LINE_NUMBER(117);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoBuyBought = (jint(0));
	LINE_NUMBER(118);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoBuyTime = (jlong(0));
	LINE_NUMBER(123);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAutoUse = (jint(0));
	LINE_NUMBER(124);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseItemId = (jint(-1));
	LINE_NUMBER(125);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseItemName = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(126);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseTotal = (jint(0));
	LINE_NUMBER(127);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseRemaining = (jint(0));
	LINE_NUMBER(128);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseUsed = (jint(0));
	LINE_NUMBER(129);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_autoUseDelayMs = (jlong(1000ll));
	LINE_NUMBER(130);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAutoUseTime = (jlong(0));
	LINE_NUMBER(132);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isAllMob = (jint(1));
	LINE_NUMBER(133);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_listMobNames = sp[0].o;
	LINE_NUMBER(134);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_selectedMobs = sp[0].o;
	LINE_NUMBER(135);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_tab0ScrollY = (jint(0));
	LINE_NUMBER(136);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (10));
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isSkillSelected = sp[0].o;
	LINE_NUMBER(163);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_itemScrollY = (jint(0));
	LINE_NUMBER(166);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPeaTime = (jlong(0));
	LINE_NUMBER(167);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastZoneChangeTime = (jlong(0));
	LINE_NUMBER(168);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastAttackTime = (jlong(0));
	LINE_NUMBER(169);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTimeAutoDropTrash = (jlong(0));
	LINE_NUMBER(170);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isRMSLoaded = (jint(0));
	LINE_NUMBER(173);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_isDragging = (jint(0));
	LINE_NUMBER(174);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastPointerY = (jint(0));
	LINE_NUMBER(175);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_totalDragDist = (jint(0));
	LINE_NUMBER(212);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	LINE_NUMBER(213);
	clinit_nro_AutoTrainMenu(ctx);
	sp[0].o = (jobject)SF_nro_AutoTrainMenu_isSkillSelected;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	LINE_NUMBER(214);
	SM_nro_AutoTrainMenu_initAutoItems(ctx);
	LINE_NUMBER(583);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastMapId = (jint(-1));
	LINE_NUMBER(584);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTimePick = (jlong(0));
	LINE_NUMBER(585);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_lastTeleportTime = (jlong(0));
	LINE_NUMBER(2656);
	clinit_nro_AutoTrainMenu(ctx);
	SF_nro_AutoTrainMenu_skillSlotRoundRobin = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_AutoTrainMenu[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_nro_AutoTrainMenu_show,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "show", "()V" },
};

static jclass innerClasses[] {
	&class_nro_AutoTrainMenu$AutoItem,
};

static FieldMetadata fields[] {
	{ "instance", &class_nro_AutoTrainMenu, (intptr_t) &SF_nro_AutoTrainMenu_instance, "Lnro/AutoTrainMenu;", 10 },
	{ "isShow", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isShow, "Z", 9 },
	{ "currentTab", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_currentTab, "I", 9 },
	{ "isAutoAttack", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoAttack, "Z", 9 },
	{ "isStandAutoAttack", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isStandAutoAttack, "Z", 73 },
	{ "isSkipSuperMob", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isSkipSuperMob, "Z", 9 },
	{ "isChangeZoneWhenNoMob", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isChangeZoneWhenNoMob, "Z", 9 },
	{ "isAttackByHp", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAttackByHp, "Z", 9 },
	{ "hpQuaiOn", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_hpQuaiOn, "J", 9 },
	{ "hpQuaiDuoi", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_hpQuaiDuoi, "J", 9 },
	{ "isAutoPick", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoPick, "Z", 9 },
	{ "isAutoPea", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoPea, "Z", 9 },
	{ "hpPeaPercent", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_hpPeaPercent, "I", 9 },
	{ "mpPeaPercent", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_mpPeaPercent, "I", 9 },
	{ "isAutoPeanPet", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoPeanPet, "Z", 9 },
	{ "petPeaPercent", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_petPeaPercent, "I", 9 },
	{ "petHpPeaPercent", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_petHpPeaPercent, "I", 9 },
	{ "petMpPeaPercent", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_petMpPeaPercent, "I", 9 },
	{ "petStaminaPeaPercent", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_petStaminaPeaPercent, "I", 9 },
	{ "lastPeanPetTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastPeanPetTime, "J", 10 },
	{ "lastPetInfoSyncTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastPetInfoSyncTime, "J", 10 },
	{ "isAutoWakeUp", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoWakeUp, "Z", 9 },
	{ "lastAutoWakeUpTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAutoWakeUpTime, "J", 10 },
	{ "isAutoLogin", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoLogin, "Z", 9 },
	{ "lastAutoLoginAttempt", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAutoLoginAttempt, "J", 10 },
	{ "isWaitingAutoLogin", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isWaitingAutoLogin, "Z", 10 },
	{ "dialogDismissTimer", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_dialogDismissTimer, "J", 10 },
	{ "autoLoginRetryCount", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoLoginRetryCount, "I", 9 },
	{ "MAX_AUTOLOGIN_RETRIES", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_MAX_AUTOLOGIN_RETRIES, "I", 25 },
	{ "lastCountdownSec", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_lastCountdownSec, "I", 10 },
	{ "initialDialogMsg", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_initialDialogMsg, "Ljava/lang/String;", 10 },
	{ "autoScrollY", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoScrollY, "I", 9 },
	{ "PICK_NAMES", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_AutoTrainMenu_PICK_NAMES, "[Ljava/lang/String;", 25 },
	{ "isCheckPick", getArrayClass(&class_boolean, 1), (intptr_t) &SF_nro_AutoTrainMenu_isCheckPick, "[Z", 9 },
	{ "isPickOnlyMine", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isPickOnlyMine, "Z", 9 },
	{ "strIdNhat", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_strIdNhat, "Ljava/lang/String;", 9 },
	{ "strIdLoaiTru", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_strIdLoaiTru, "Ljava/lang/String;", 9 },
	{ "strIdVutBo", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_strIdVutBo, "Ljava/lang/String;", 9 },
	{ "pickScrollY", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_pickScrollY, "I", 9 },
	{ "focusedInput", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_focusedInput, "I", 9 },
	{ "isFirstInput", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isFirstInput, "Z", 10 },
	{ "currentTargetMob", &class_nro_Mob, (intptr_t) &SF_nro_AutoTrainMenu_currentTargetMob, "Lnro/Mob;", 10 },
	{ "targetStartTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_targetStartTime, "J", 10 },
	{ "lastHitTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastHitTime, "J", 10 },
	{ "lastTargetHp", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastTargetHp, "J", 10 },
	{ "unreachableMobIds", &class_java_util_Hashtable, (intptr_t) &SF_nro_AutoTrainMenu_unreachableMobIds, "Ljava/util/Hashtable;", 10 },
	{ "lastBossDieTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastBossDieTime, "J", 10 },
	{ "lastBossDieX", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_lastBossDieX, "I", 10 },
	{ "lastBossDieY", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_lastBossDieY, "I", 10 },
	{ "lastStandAttackTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastStandAttackTime, "J", 10 },
	{ "isAutoChat", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoChat, "Z", 73 },
	{ "textAutoChat", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_textAutoChat, "Ljava/lang/String;", 73 },
	{ "lastAutoChatTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAutoChatTime, "J", 10 },
	{ "isAutoChatTG", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoChatTG, "Z", 73 },
	{ "textAutoChatTG", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_textAutoChatTG, "Ljava/lang/String;", 73 },
	{ "lastAutoChatTGTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAutoChatTGTime, "J", 10 },
	{ "AUTO_BUY_PROMPT", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_AUTO_BUY_PROMPT, "Ljava/lang/String;", 25 },
	{ "AUTO_BUY_INTERVAL_MS", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_AUTO_BUY_INTERVAL_MS, "J", 26 },
	{ "isAutoBuy", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoBuy, "Z", 73 },
	{ "autoBuyType", &class_byte, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyType, "B", 10 },
	{ "autoBuyItemId", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyItemId, "I", 10 },
	{ "autoBuyItemName", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyItemName, "Ljava/lang/String;", 10 },
	{ "autoBuyUnitPrice", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyUnitPrice, "J", 10 },
	{ "autoBuyTotal", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyTotal, "I", 10 },
	{ "autoBuyRemaining", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyRemaining, "I", 10 },
	{ "autoBuyBought", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoBuyBought, "I", 10 },
	{ "lastAutoBuyTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAutoBuyTime, "J", 10 },
	{ "AUTO_USE_QTY_PROMPT", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_AUTO_USE_QTY_PROMPT, "Ljava/lang/String;", 25 },
	{ "AUTO_USE_DELAY_PROMPT", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_AUTO_USE_DELAY_PROMPT, "Ljava/lang/String;", 25 },
	{ "isAutoUse", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAutoUse, "Z", 73 },
	{ "autoUseItemId", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoUseItemId, "I", 10 },
	{ "autoUseItemName", &class_java_lang_String, (intptr_t) &SF_nro_AutoTrainMenu_autoUseItemName, "Ljava/lang/String;", 10 },
	{ "autoUseTotal", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoUseTotal, "I", 10 },
	{ "autoUseRemaining", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoUseRemaining, "I", 10 },
	{ "autoUseUsed", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_autoUseUsed, "I", 10 },
	{ "autoUseDelayMs", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_autoUseDelayMs, "J", 10 },
	{ "lastAutoUseTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAutoUseTime, "J", 10 },
	{ "isAllMob", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isAllMob, "Z", 9 },
	{ "listMobNames", &class_java_util_Vector, (intptr_t) &SF_nro_AutoTrainMenu_listMobNames, "Ljava/util/Vector;", 9 },
	{ "selectedMobs", &class_java_util_Hashtable, (intptr_t) &SF_nro_AutoTrainMenu_selectedMobs, "Ljava/util/Hashtable;", 9 },
	{ "tab0ScrollY", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_tab0ScrollY, "I", 9 },
	{ "isSkillSelected", getArrayClass(&class_boolean, 1), (intptr_t) &SF_nro_AutoTrainMenu_isSkillSelected, "[Z", 9 },
	{ "imgArrow", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_AutoTrainMenu_imgArrow, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgArrow2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_AutoTrainMenu_imgArrow2, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgCheck", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_AutoTrainMenu_imgCheck, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgBtX", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_AutoTrainMenu_imgBtX, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "autoItems", getArrayClass(&class_nro_AutoTrainMenu$AutoItem, 1), (intptr_t) &SF_nro_AutoTrainMenu_autoItems, "[Lnro/AutoTrainMenu$AutoItem;", 9 },
	{ "itemScrollY", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_itemScrollY, "I", 9 },
	{ "lastPeaTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastPeaTime, "J", 10 },
	{ "lastZoneChangeTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastZoneChangeTime, "J", 10 },
	{ "lastAttackTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastAttackTime, "J", 10 },
	{ "lastTimeAutoDropTrash", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastTimeAutoDropTrash, "J", 10 },
	{ "isRMSLoaded", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isRMSLoaded, "Z", 10 },
	{ "isDragging", &class_boolean, (intptr_t) &SF_nro_AutoTrainMenu_isDragging, "Z", 10 },
	{ "lastPointerY", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_lastPointerY, "I", 10 },
	{ "totalDragDist", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_totalDragDist, "I", 10 },
	{ "lastMapId", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_lastMapId, "I", 10 },
	{ "lastTimePick", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastTimePick, "J", 10 },
	{ "lastTeleportTime", &class_long, (intptr_t) &SF_nro_AutoTrainMenu_lastTeleportTime, "J", 10 },
	{ "skillSlotRoundRobin", &class_int, (intptr_t) &SF_nro_AutoTrainMenu_skillSlotRoundRobin, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_AutoTrainMenu, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_AutoTrainMenu_gI_R_nro_AutoTrainMenu, 0, "()Lnro/AutoTrainMenu;", 9 },
	{ "show", (intptr_t) M_nro_AutoTrainMenu_show, VTABLE_nro_AutoTrainMenu_show, "()V", 1 },
	{ "getDialogW", (intptr_t) SM_nro_AutoTrainMenu_getDialogW_R_int, 0, "()I", 9 },
	{ "getDialogH", (intptr_t) SM_nro_AutoTrainMenu_getDialogH_R_int, 0, "()I", 9 },
	{ "getDialogX", (intptr_t) SM_nro_AutoTrainMenu_getDialogX_R_int, 0, "()I", 9 },
	{ "getDialogY", (intptr_t) SM_nro_AutoTrainMenu_getDialogY_R_int, 0, "()I", 9 },
	{ "getTriggerBtnW", (intptr_t) SM_nro_AutoTrainMenu_getTriggerBtnW_R_int, 0, "()I", 9 },
	{ "getTriggerBtnH", (intptr_t) SM_nro_AutoTrainMenu_getTriggerBtnH_R_int, 0, "()I", 9 },
	{ "getTriggerBtnX", (intptr_t) SM_nro_AutoTrainMenu_getTriggerBtnX_R_int, 0, "()I", 9 },
	{ "getTriggerBtnY", (intptr_t) SM_nro_AutoTrainMenu_getTriggerBtnY_R_int, 0, "()I", 9 },
	{ "ai", (intptr_t) SM_nro_AutoTrainMenu_ai_java_lang_String_int_int_int_R_nro_AutoTrainMenu$AutoItem, 0, "(Ljava/lang/String;III)Lnro/AutoTrainMenu$AutoItem;", 10 },
	{ "initAutoItems", (intptr_t) SM_nro_AutoTrainMenu_initAutoItems, 0, "()V", 10 },
	{ "initAssets", (intptr_t) SM_nro_AutoTrainMenu_initAssets, 0, "()V", 9 },
	{ "isAnyAutoActive", (intptr_t) SM_nro_AutoTrainMenu_isAnyAutoActive_R_boolean, 0, "()Z", 9 },
	{ "loadAutoTrainConfig", (intptr_t) SM_nro_AutoTrainMenu_loadAutoTrainConfig, 0, "()V", 9 },
	{ "saveAutoTrainConfig", (intptr_t) SM_nro_AutoTrainMenu_saveAutoTrainConfig, 0, "()V", 9 },
	{ "loadRMS", (intptr_t) SM_nro_AutoTrainMenu_loadRMS, 0, "()V", 9 },
	{ "saveRMS", (intptr_t) SM_nro_AutoTrainMenu_saveRMS, 0, "()V", 9 },
	{ "syncPickFlags", (intptr_t) SM_nro_AutoTrainMenu_syncPickFlags, 0, "()V", 10 },
	{ "saveMobSelection", (intptr_t) SM_nro_AutoTrainMenu_saveMobSelection, 0, "()V", 9 },
	{ "loadMobSelection", (intptr_t) SM_nro_AutoTrainMenu_loadMobSelection_int, 0, "(I)V", 9 },
	{ "reset", (intptr_t) SM_nro_AutoTrainMenu_reset, 0, "()V", 9 },
	{ "updateMapMobList", (intptr_t) SM_nro_AutoTrainMenu_updateMapMobList, 0, "()V", 10 },
	{ "getCounterpartBuffIconId", (intptr_t) SM_nro_AutoTrainMenu_getCounterpartBuffIconId_int_R_int, 0, "(I)I", 10 },
	{ "isItemBuffActive", (intptr_t) SM_nro_AutoTrainMenu_isItemBuffActive_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean, 0, "(Lnro/Char;Lnro/AutoTrainMenu$AutoItem;)Z", 9 },
	{ "findBagItemIndex", (intptr_t) SM_nro_AutoTrainMenu_findBagItemIndex_nro_Char_nro_AutoTrainMenu$AutoItem_R_int, 0, "(Lnro/Char;Lnro/AutoTrainMenu$AutoItem;)I", 9 },
	{ "hasItemInBag", (intptr_t) SM_nro_AutoTrainMenu_hasItemInBag_nro_Char_nro_AutoTrainMenu$AutoItem_R_boolean, 0, "(Lnro/Char;Lnro/AutoTrainMenu$AutoItem;)Z", 9 },
	{ "updateAutoTrain", (intptr_t) SM_nro_AutoTrainMenu_updateAutoTrain, 0, "()V", 9 },
	{ "resetSessionCommands", (intptr_t) SM_nro_AutoTrainMenu_resetSessionCommands, 0, "()V", 9 },
	{ "addInfo", (intptr_t) SM_nro_AutoTrainMenu_addInfo_java_lang_String, 0, "(Ljava/lang/String;)V", 10 },
	{ "ensureRMSLoaded", (intptr_t) SM_nro_AutoTrainMenu_ensureRMSLoaded, 0, "()V", 10 },
	{ "update", (intptr_t) SM_nro_AutoTrainMenu_update, 0, "()V", 9 },
	{ "isSessionConnected", (intptr_t) SM_nro_AutoTrainMenu_isSessionConnected_R_boolean, 0, "()Z", 10 },
	{ "isAutoBuyActive", (intptr_t) SM_nro_AutoTrainMenu_isAutoBuyActive_R_boolean, 0, "()Z", 9 },
	{ "getAutoBuyRemaining", (intptr_t) SM_nro_AutoTrainMenu_getAutoBuyRemaining_R_int, 0, "()I", 9 },
	{ "getAutoBuyBought", (intptr_t) SM_nro_AutoTrainMenu_getAutoBuyBought_R_int, 0, "()I", 9 },
	{ "getAutoBuyTotal", (intptr_t) SM_nro_AutoTrainMenu_getAutoBuyTotal_R_int, 0, "()I", 9 },
	{ "getAutoBuyType", (intptr_t) SM_nro_AutoTrainMenu_getAutoBuyType_R_byte, 0, "()B", 9 },
	{ "getAutoBuyItemId", (intptr_t) SM_nro_AutoTrainMenu_getAutoBuyItemId_R_int, 0, "()I", 9 },
	{ "parseAutoBuyQuantity", (intptr_t) SM_nro_AutoTrainMenu_parseAutoBuyQuantity_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "resolveAutoBuyUnitPrice", (intptr_t) SM_nro_AutoTrainMenu_resolveAutoBuyUnitPrice_nro_Item_byte_R_long, 0, "(Lnro/Item;B)J", 9 },
	{ "checkAutoBuyCurrencyError", (intptr_t) SM_nro_AutoTrainMenu_checkAutoBuyCurrencyError_nro_Char_byte_long_R_java_lang_String, 0, "(Lnro/Char;BJ)Ljava/lang/String;", 9 },
	{ "startAutoBuy", (intptr_t) SM_nro_AutoTrainMenu_startAutoBuy_nro_Item_byte_int, 0, "(Lnro/Item;BI)V", 9 },
	{ "stopAutoBuy", (intptr_t) SM_nro_AutoTrainMenu_stopAutoBuy_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "onServerInfoMessage", (intptr_t) SM_nro_AutoTrainMenu_onServerInfoMessage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "updateAutoBuy", (intptr_t) SM_nro_AutoTrainMenu_updateAutoBuy_long, 0, "(J)V", 9 },
	{ "isAutoUseActive", (intptr_t) SM_nro_AutoTrainMenu_isAutoUseActive_R_boolean, 0, "()Z", 9 },
	{ "isAutoUseItem", (intptr_t) SM_nro_AutoTrainMenu_isAutoUseItem_int_R_boolean, 0, "(I)Z", 9 },
	{ "getAutoUseItemId", (intptr_t) SM_nro_AutoTrainMenu_getAutoUseItemId_R_int, 0, "()I", 9 },
	{ "getAutoUseTotal", (intptr_t) SM_nro_AutoTrainMenu_getAutoUseTotal_R_int, 0, "()I", 9 },
	{ "getAutoUseRemaining", (intptr_t) SM_nro_AutoTrainMenu_getAutoUseRemaining_R_int, 0, "()I", 9 },
	{ "getAutoUseUsed", (intptr_t) SM_nro_AutoTrainMenu_getAutoUseUsed_R_int, 0, "()I", 9 },
	{ "getAutoUseDelayMs", (intptr_t) SM_nro_AutoTrainMenu_getAutoUseDelayMs_R_long, 0, "()J", 9 },
	{ "getAutoUseDelayFormatted", (intptr_t) SM_nro_AutoTrainMenu_getAutoUseDelayFormatted_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "parseAutoUseQuantity", (intptr_t) SM_nro_AutoTrainMenu_parseAutoUseQuantity_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "parseAutoUseDelayMs", (intptr_t) SM_nro_AutoTrainMenu_parseAutoUseDelayMs_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 9 },
	{ "findBagItemIndexByTemplateId", (intptr_t) SM_nro_AutoTrainMenu_findBagItemIndexByTemplateId_nro_Char_int_R_int, 0, "(Lnro/Char;I)I", 9 },
	{ "startAutoUse", (intptr_t) SM_nro_AutoTrainMenu_startAutoUse_nro_Item_int_long, 0, "(Lnro/Item;IJ)V", 9 },
	{ "stopAutoUse", (intptr_t) SM_nro_AutoTrainMenu_stopAutoUse_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "updateAutoUse", (intptr_t) SM_nro_AutoTrainMenu_updateAutoUse_long, 0, "(J)V", 9 },
	{ "updateAutoChat", (intptr_t) SM_nro_AutoTrainMenu_updateAutoChat_long, 0, "(J)V", 10 },
	{ "updateAutoWakeUp", (intptr_t) SM_nro_AutoTrainMenu_updateAutoWakeUp_long, 0, "(J)V", 9 },
	{ "updateAutoLogin", (intptr_t) SM_nro_AutoTrainMenu_updateAutoLogin, 0, "()V", 9 },
	{ "onEnterGame", (intptr_t) SM_nro_AutoTrainMenu_onEnterGame, 0, "()V", 9 },
	{ "toggleAutoPeanPet", (intptr_t) SM_nro_AutoTrainMenu_toggleAutoPeanPet, 0, "()V", 9 },
	{ "eatPeaForPet", (intptr_t) SM_nro_AutoTrainMenu_eatPeaForPet_long_R_boolean, 0, "(J)Z", 9 },
	{ "onCharChat", (intptr_t) SM_nro_AutoTrainMenu_onCharChat_int_java_lang_String, 0, "(ILjava/lang/String;)V", 9 },
	{ "toggleAutoWakeUp", (intptr_t) SM_nro_AutoTrainMenu_toggleAutoWakeUp, 0, "()V", 9 },
	{ "toggleAutoLogin", (intptr_t) SM_nro_AutoTrainMenu_toggleAutoLogin, 0, "()V", 9 },
	{ "setAutoLoginAccount", (intptr_t) SM_nro_AutoTrainMenu_setAutoLoginAccount_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "updateStandAutoAttack", (intptr_t) SM_nro_AutoTrainMenu_updateStandAutoAttack_nro_Char_long, 0, "(Lnro/Char;J)V", 10 },
	{ "autoChangeZone", (intptr_t) SM_nro_AutoTrainMenu_autoChangeZone, 0, "()V", 10 },
	{ "useBagItemByTemplate", (intptr_t) SM_nro_AutoTrainMenu_useBagItemByTemplate_int_java_lang_String, 0, "(ILjava/lang/String;)V", 9 },
	{ "setAutoAttack", (intptr_t) SM_nro_AutoTrainMenu_setAutoAttack_boolean, 0, "(Z)V", 9 },
	{ "toggleAutoAttack", (intptr_t) SM_nro_AutoTrainMenu_toggleAutoAttack, 0, "()V", 9 },
	{ "toggleStandAutoAttack", (intptr_t) SM_nro_AutoTrainMenu_toggleStandAutoAttack, 0, "()V", 9 },
	{ "toggleAutoPickAll", (intptr_t) SM_nro_AutoTrainMenu_toggleAutoPickAll, 0, "()V", 9 },
	{ "toggleTdlt", (intptr_t) SM_nro_AutoTrainMenu_toggleTdlt, 0, "()V", 9 },
	{ "parseZoneCommand", (intptr_t) SM_nro_AutoTrainMenu_parseZoneCommand_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "handleChatCommand", (intptr_t) SM_nro_AutoTrainMenu_handleChatCommand_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "stopAutoAttack", (intptr_t) SM_nro_AutoTrainMenu_stopAutoAttack, 0, "()V", 9 },
	{ "onBossDie", (intptr_t) SM_nro_AutoTrainMenu_onBossDie_int_int, 0, "(II)V", 9 },
	{ "isNearRecentBossDeath", (intptr_t) SM_nro_AutoTrainMenu_isNearRecentBossDeath_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "isAutoTraining", (intptr_t) SM_nro_AutoTrainMenu_isAutoTraining_R_boolean, 0, "()Z", 9 },
	{ "isBlackOrNamekDragonBall", (intptr_t) SM_nro_AutoTrainMenu_isBlackOrNamekDragonBall_nro_ItemMap_R_boolean, 0, "(Lnro/ItemMap;)Z", 9 },
	{ "isExcludedItem", (intptr_t) SM_nro_AutoTrainMenu_isExcludedItem_nro_ItemMap_R_boolean, 0, "(Lnro/ItemMap;)Z", 9 },
	{ "isTemplateIdInList", (intptr_t) SM_nro_AutoTrainMenu_isTemplateIdInList_int_java_lang_String_R_boolean, 0, "(ILjava/lang/String;)Z", 9 },
	{ "isValidAutoPickItem", (intptr_t) SM_nro_AutoTrainMenu_isValidAutoPickItem_nro_ItemMap_nro_Char_R_boolean, 0, "(Lnro/ItemMap;Lnro/Char;)Z", 9 },
	{ "hasCeilingAbove", (intptr_t) SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean, 0, "(III)Z", 9 },
	{ "findClearCeilingX", (intptr_t) SM_nro_AutoTrainMenu_findClearCeilingX_int_int_int_int_R_int, 0, "(IIII)I", 10 },
	{ "findPlatformDropOffX", (intptr_t) SM_nro_AutoTrainMenu_findPlatformDropOffX_int_int_int_R_int, 0, "(III)I", 10 },
	{ "isValidTarget", (intptr_t) SM_nro_AutoTrainMenu_isValidTarget_nro_Mob_R_boolean, 0, "(Lnro/Mob;)Z", 9 },
	{ "findBestTargetMob", (intptr_t) SM_nro_AutoTrainMenu_findBestTargetMob_nro_Char_R_nro_Mob, 0, "(Lnro/Char;)Lnro/Mob;", 9 },
	{ "selectSkillToAttack", (intptr_t) SM_nro_AutoTrainMenu_selectSkillToAttack_nro_Char_R_nro_Skill, 0, "(Lnro/Char;)Lnro/Skill;", 9 },
	{ "onScrolled", (intptr_t) SM_nro_AutoTrainMenu_onScrolled_int, 0, "(I)V", 9 },
	{ "isInputFocused", (intptr_t) SM_nro_AutoTrainMenu_isInputFocused_R_boolean, 0, "()Z", 9 },
	{ "finishFocusedInput", (intptr_t) SM_nro_AutoTrainMenu_finishFocusedInput, 0, "()V", 9 },
	{ "handleTypedChar", (intptr_t) SM_nro_AutoTrainMenu_handleTypedChar_char, 0, "(C)V", 9 },
	{ "pasteText", (intptr_t) SM_nro_AutoTrainMenu_pasteText_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "handleFocusedKeyInput", (intptr_t) SM_nro_AutoTrainMenu_handleFocusedKeyInput, 0, "()V", 10 },
	{ "updateKey", (intptr_t) SM_nro_AutoTrainMenu_updateKey_R_boolean, 0, "()Z", 9 },
	{ "getMaxTab0Scroll", (intptr_t) SM_nro_AutoTrainMenu_getMaxTab0Scroll_int_R_int, 0, "(I)I", 10 },
	{ "getMaxItemScroll", (intptr_t) SM_nro_AutoTrainMenu_getMaxItemScroll_int_R_int, 0, "(I)I", 10 },
	{ "getMaxPickScroll", (intptr_t) SM_nro_AutoTrainMenu_getMaxPickScroll_int_R_int, 0, "(I)I", 10 },
	{ "getMaxAutoScroll", (intptr_t) SM_nro_AutoTrainMenu_getMaxAutoScroll_int_R_int, 0, "(I)I", 10 },
	{ "updateKeyTab0", (intptr_t) SM_nro_AutoTrainMenu_updateKeyTab0_int_int_int_int_R_boolean, 0, "(IIII)Z", 10 },
	{ "updateKeyTab1", (intptr_t) SM_nro_AutoTrainMenu_updateKeyTab1_int_int_int_int_R_boolean, 0, "(IIII)Z", 10 },
	{ "updateKeyTab2", (intptr_t) SM_nro_AutoTrainMenu_updateKeyTab2_int_int_int_int_R_boolean, 0, "(IIII)Z", 10 },
	{ "updateKeyTab3", (intptr_t) SM_nro_AutoTrainMenu_updateKeyTab3_int_int_int_int_R_boolean, 0, "(IIII)Z", 10 },
	{ "paint", (intptr_t) SM_nro_AutoTrainMenu_paint_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paintTriggerButton", (intptr_t) SM_nro_AutoTrainMenu_paintTriggerButton_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "paintAutoDialog", (intptr_t) SM_nro_AutoTrainMenu_paintAutoDialog_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "paintScrollArrows", (intptr_t) SM_nro_AutoTrainMenu_paintScrollArrows_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "paintCheckbox", (intptr_t) SM_nro_AutoTrainMenu_paintCheckbox_lib_mGraphics_int_int_boolean, 0, "(Llib/mGraphics;IIZ)V", 9 },
	{ "paintTabLuyenTap", (intptr_t) SM_nro_AutoTrainMenu_paintTabLuyenTap_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "paintTabVatPham", (intptr_t) SM_nro_AutoTrainMenu_paintTabVatPham_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "paintTabNhatDo", (intptr_t) SM_nro_AutoTrainMenu_paintTabNhatDo_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "paintTextFieldBox", (intptr_t) SM_nro_AutoTrainMenu_paintTextFieldBox_lib_mGraphics_int_int_int_java_lang_String_java_lang_String_boolean, 0, "(Llib/mGraphics;IIILjava/lang/String;Ljava/lang/String;Z)V", 10 },
	{ "paintTabAuto", (intptr_t) SM_nro_AutoTrainMenu_paintTabAuto_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "<clinit>", (intptr_t) clinit_nro_AutoTrainMenu, 0, "()V", 8 },
};

Class class_nro_AutoTrainMenu{
		.nativeName = (intptr_t) "nro/AutoTrainMenu",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_AutoTrainMenu),
		.classVtable = (intptr_t) vtable_nro_AutoTrainMenu,
		.staticInitializer = (intptr_t) clinit_nro_AutoTrainMenu,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_AutoTrainMenu,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 100,
		.nativeFields = (intptr_t) fields,
		.methodCount = 121,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_AutoTrainMenu = registerClass(&class_nro_AutoTrainMenu);

}

