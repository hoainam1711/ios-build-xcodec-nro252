#include "main/GameCanvas.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "lib/input/TField.h"
#include "lib/network/Session_ME.h"
#include "java/util/Random.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "nro/AutoTrainMenu.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/Menu.h"
#include "nro/Paint.h"
#include "nro/ItemMap.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/sound/SoundMn.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "java/lang/Exception.h"
#include "nro/ServerListScreen.h"
#include "nro/BgItem.h"
#include "nro/Dialog.h"
#include "nro/NpcTemplate.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/CreateCharScr.h"
#include "nro/Firework.h"
#include "nro/Position.h"
#include "nro/mResources.h"
#include "nro/ClientDiagLogger.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Waypoint.h"
#include "nro/NinjaUtil.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "nro/GameScr.h"
#include "nro/InputDlg.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/Panel.h"
#include "nro/StaticObj.h"
#include "nro/ChooseCharScr.h"
#include "java/lang/Short.h"
#include "nro/CrackBallScr.h"
#include "nro/PopUpYesNo.h"
#include "java/lang/String.h"
#include "nro/SelectCharScr.h"
#include "nro/InfoMe.h"
#include "nro/Info.h"
#include "nro/Effect2.h"
#include "nro/Controller.h"
#include "nro/SplashScr.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "java/lang/Math.h"
#include "nro/ServerScr.h"
#include "nro/Hint.h"
#include "nro/InfoDlg.h"
#include "com/badlogic/gdx/graphics/g2d/SpriteBatch.h"
#include "nro/mHashTable.h"
#include "com/badlogic/gdx/Gdx.h"
#include "nro/Scroll.h"
#include "nro/Effect.h"
#include "nro/ClanMessage.h"
#include "nro/TabClanIcon.h"
#include "com/badlogic/gdx/Input.h"
#include "lib/input/ChatTextField.h"
#include "nro/BackgroudEffect.h"
#include "nro/ClientInput.h"
#include "nro/RegisterScreen.h"
#include "nro/Npc.h"
#include "nro/MoneyCharge.h"
#include "main/GameMidlet.h"
#include "nro/MsgDlg.h"
#include "nro/Small.h"
#include "nro/MotherCanvas.h"
#include "java/lang/Class.h"
#include "nro/LoginScr.h"
#include "nro/Item.h"

extern "C" {

jbool SF_main_GameCanvas_isPlaySound;
jbool SF_main_GameCanvas_lowGraphic;
jlong SF_main_GameCanvas_timeNow;
jbool SF_main_GameCanvas_isMoveNumberPad;
jint SF_main_GameCanvas_moveMode;
jbool SF_main_GameCanvas_isMoveWASD;
jbool SF_main_GameCanvas_isMoveArrows;
jbool SF_main_GameCanvas_isLoading;
jbool SF_main_GameCanvas_isTouch;
jbool SF_main_GameCanvas_isTouchControl;
jbool SF_main_GameCanvas_isTouchControlSmallScreen;
jobject SF_main_GameCanvas_instance;
jobject SF_main_GameCanvas_keyPressed;
jobject SF_main_GameCanvas_keyReleased;
jobject SF_main_GameCanvas_keyHold;
jbool SF_main_GameCanvas_keyTabPressed;
jbool SF_main_GameCanvas_isPointerDown;
jbool SF_main_GameCanvas_isPointerClick;
jbool SF_main_GameCanvas_isPointerJustRelease;
jbool SF_main_GameCanvas_isPointerSelect;
jbool SF_main_GameCanvas_isPointerMove;
jint SF_main_GameCanvas_px;
jint SF_main_GameCanvas_py;
jint SF_main_GameCanvas_pxFirst;
jint SF_main_GameCanvas_pyFirst;
jint SF_main_GameCanvas_pxLast;
jint SF_main_GameCanvas_pyLast;
jobject SF_main_GameCanvas_arrPos;
jint SF_main_GameCanvas_gameTick;
jint SF_main_GameCanvas_taskTick;
jint SF_main_GameCanvas_aq;
jbool SF_main_GameCanvas_isEff1;
jbool SF_main_GameCanvas_isEff2;
jlong SF_main_GameCanvas_timeTickEff1;
jlong SF_main_GameCanvas_timeTickEff2;
jint SF_main_GameCanvas_w;
jint SF_main_GameCanvas_h;
jint SF_main_GameCanvas_hw;
jint SF_main_GameCanvas_hh;
jobject SF_main_GameCanvas_currentScreen;
jobject SF_main_GameCanvas_menu;
jobject SF_main_GameCanvas_panel;
jobject SF_main_GameCanvas_panel2;
jobject SF_main_GameCanvas_loginScr;
jobject SF_main_GameCanvas_registerScr;
jobject SF_main_GameCanvas_currentDialog;
jobject SF_main_GameCanvas_msgdlg;
jobject SF_main_GameCanvas_paintz;
jobject SF_main_GameCanvas_imgBG;
jint SF_main_GameCanvas_skyColor;
jint SF_main_GameCanvas_curPos;
jobject SF_main_GameCanvas_bgW;
jobject SF_main_GameCanvas_bgH;
jobject SF_main_GameCanvas_imgBlue;
jobject SF_main_GameCanvas_imgViolet;
jobject SF_main_GameCanvas_imgBlack;
jobject SF_main_GameCanvas_danhHieu;
jobject SF_main_GameCanvas_messageServer;
jobject SF_main_GameCanvas_debugUpdate;
jobject SF_main_GameCanvas_debugPaint;
jobject SF_main_GameCanvas_debugSession;
jbool SF_main_GameCanvas_isFocusPanel2;
jint SF_main_GameCanvas_isRequestMapID;
jlong SF_main_GameCanvas_waitingTimeChangeMap;
jint SF_main_GameCanvas_dir_;
jbool SF_main_GameCanvas_paintBG;
jobject SF_main_GameCanvas_imgSun;
jobject SF_main_GameCanvas_imgSun2;
jobject SF_main_GameCanvas_imgBorder;
jobject SF_main_GameCanvas_imgSunSpec;
jobject SF_main_GameCanvas_cloudX;
jobject SF_main_GameCanvas_cloudY;
jint SF_main_GameCanvas_sunX;
jint SF_main_GameCanvas_sunY;
jint SF_main_GameCanvas_sunX2;
jint SF_main_GameCanvas_sunY2;
jobject SF_main_GameCanvas_layerSpeed;
jobject SF_main_GameCanvas_moveX;
jobject SF_main_GameCanvas_moveXSpeed;
jbool SF_main_GameCanvas_isBoltEff;
jbool SF_main_GameCanvas_boltActive;
jint SF_main_GameCanvas_tBolt;
jint SF_main_GameCanvas_typeBg;
jint SF_main_GameCanvas_transY;
jobject SF_main_GameCanvas_yb;
jobject SF_main_GameCanvas_colorTop;
jobject SF_main_GameCanvas_colorBotton;
jint SF_main_GameCanvas_nBg;
jobject SF_main_GameCanvas_bgRain;
jobject SF_main_GameCanvas_imgCaycot;
jobject SF_main_GameCanvas_tam;
jbool SF_main_GameCanvas_isLoadBGok;
jlong SF_main_GameCanvas_lastTimePress;
jint SF_main_GameCanvas_keyAsciiPress;
jobject SF_main_GameCanvas_img18;
jint SF_main_GameCanvas_currentFPS;
jint SF_main_GameCanvas_fps;
jint SF_main_GameCanvas_up;
jobject SF_main_GameCanvas_thongBaoTest;
jint SF_main_GameCanvas_xThongBaoTranslate;
jobject SF_main_GameCanvas_flyTexts;
jbool SF_main_GameCanvas_isPointerJustDown;
jobject SF_main_GameCanvas_wsState;
jobject SF_main_GameCanvas_imgWS;
jobject SF_main_GameCanvas_imgShuriken;
jobject SF_main_GameCanvas_imgDust;
jbool SF_main_GameCanvas_isResume;
jobject SF_main_GameCanvas_serverScreen;
jobject SF_main_GameCanvas_chooseCharScr;
jobject SF_main_GameCanvas_serverScr;
jobject SF_main_GameCanvas__SelectCharScr;
jbool SF_main_GameCanvas_open3Hour;
jlong SF_main_GameCanvas_TIMEOUT;
jint SF_main_GameCanvas_timeLoading;
jbool SF_main_GameCanvas_isPreloadStarted;

void mark_main_GameCanvas(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_main_GameCanvas_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_instance)->clazz)->markFunction)((jobject) SF_main_GameCanvas_instance, mark, depth + 1);
		if (SF_main_GameCanvas_keyPressed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_keyPressed)->clazz)->markFunction)((jobject) SF_main_GameCanvas_keyPressed, mark, depth + 1);
		if (SF_main_GameCanvas_keyReleased)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_keyReleased)->clazz)->markFunction)((jobject) SF_main_GameCanvas_keyReleased, mark, depth + 1);
		if (SF_main_GameCanvas_keyHold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_keyHold)->clazz)->markFunction)((jobject) SF_main_GameCanvas_keyHold, mark, depth + 1);
		if (SF_main_GameCanvas_arrPos)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_arrPos)->clazz)->markFunction)((jobject) SF_main_GameCanvas_arrPos, mark, depth + 1);
		if (SF_main_GameCanvas_currentScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_currentScreen)->clazz)->markFunction)((jobject) SF_main_GameCanvas_currentScreen, mark, depth + 1);
		if (SF_main_GameCanvas_menu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_menu)->clazz)->markFunction)((jobject) SF_main_GameCanvas_menu, mark, depth + 1);
		if (SF_main_GameCanvas_panel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_panel)->clazz)->markFunction)((jobject) SF_main_GameCanvas_panel, mark, depth + 1);
		if (SF_main_GameCanvas_panel2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_panel2)->clazz)->markFunction)((jobject) SF_main_GameCanvas_panel2, mark, depth + 1);
		if (SF_main_GameCanvas_loginScr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_loginScr)->clazz)->markFunction)((jobject) SF_main_GameCanvas_loginScr, mark, depth + 1);
		if (SF_main_GameCanvas_registerScr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_registerScr)->clazz)->markFunction)((jobject) SF_main_GameCanvas_registerScr, mark, depth + 1);
		if (SF_main_GameCanvas_currentDialog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_currentDialog)->clazz)->markFunction)((jobject) SF_main_GameCanvas_currentDialog, mark, depth + 1);
		if (SF_main_GameCanvas_msgdlg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_msgdlg)->clazz)->markFunction)((jobject) SF_main_GameCanvas_msgdlg, mark, depth + 1);
		if (SF_main_GameCanvas_paintz)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_paintz)->clazz)->markFunction)((jobject) SF_main_GameCanvas_paintz, mark, depth + 1);
		if (SF_main_GameCanvas_imgBG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgBG)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgBG, mark, depth + 1);
		if (SF_main_GameCanvas_bgW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_bgW)->clazz)->markFunction)((jobject) SF_main_GameCanvas_bgW, mark, depth + 1);
		if (SF_main_GameCanvas_bgH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_bgH)->clazz)->markFunction)((jobject) SF_main_GameCanvas_bgH, mark, depth + 1);
		if (SF_main_GameCanvas_imgBlue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgBlue)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgBlue, mark, depth + 1);
		if (SF_main_GameCanvas_imgViolet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgViolet)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgViolet, mark, depth + 1);
		if (SF_main_GameCanvas_imgBlack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgBlack)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgBlack, mark, depth + 1);
		if (SF_main_GameCanvas_danhHieu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_danhHieu)->clazz)->markFunction)((jobject) SF_main_GameCanvas_danhHieu, mark, depth + 1);
		if (SF_main_GameCanvas_messageServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_messageServer)->clazz)->markFunction)((jobject) SF_main_GameCanvas_messageServer, mark, depth + 1);
		if (SF_main_GameCanvas_debugUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_debugUpdate)->clazz)->markFunction)((jobject) SF_main_GameCanvas_debugUpdate, mark, depth + 1);
		if (SF_main_GameCanvas_debugPaint)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_debugPaint)->clazz)->markFunction)((jobject) SF_main_GameCanvas_debugPaint, mark, depth + 1);
		if (SF_main_GameCanvas_debugSession)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_debugSession)->clazz)->markFunction)((jobject) SF_main_GameCanvas_debugSession, mark, depth + 1);
		if (SF_main_GameCanvas_imgSun)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgSun)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgSun, mark, depth + 1);
		if (SF_main_GameCanvas_imgSun2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgSun2)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgSun2, mark, depth + 1);
		if (SF_main_GameCanvas_imgBorder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgBorder)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgBorder, mark, depth + 1);
		if (SF_main_GameCanvas_imgSunSpec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgSunSpec)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgSunSpec, mark, depth + 1);
		if (SF_main_GameCanvas_cloudX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_cloudX)->clazz)->markFunction)((jobject) SF_main_GameCanvas_cloudX, mark, depth + 1);
		if (SF_main_GameCanvas_cloudY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_cloudY)->clazz)->markFunction)((jobject) SF_main_GameCanvas_cloudY, mark, depth + 1);
		if (SF_main_GameCanvas_layerSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_layerSpeed)->clazz)->markFunction)((jobject) SF_main_GameCanvas_layerSpeed, mark, depth + 1);
		if (SF_main_GameCanvas_moveX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_moveX)->clazz)->markFunction)((jobject) SF_main_GameCanvas_moveX, mark, depth + 1);
		if (SF_main_GameCanvas_moveXSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_moveXSpeed)->clazz)->markFunction)((jobject) SF_main_GameCanvas_moveXSpeed, mark, depth + 1);
		if (SF_main_GameCanvas_yb)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_yb)->clazz)->markFunction)((jobject) SF_main_GameCanvas_yb, mark, depth + 1);
		if (SF_main_GameCanvas_colorTop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_colorTop)->clazz)->markFunction)((jobject) SF_main_GameCanvas_colorTop, mark, depth + 1);
		if (SF_main_GameCanvas_colorBotton)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_colorBotton)->clazz)->markFunction)((jobject) SF_main_GameCanvas_colorBotton, mark, depth + 1);
		if (SF_main_GameCanvas_bgRain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_bgRain)->clazz)->markFunction)((jobject) SF_main_GameCanvas_bgRain, mark, depth + 1);
		if (SF_main_GameCanvas_imgCaycot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgCaycot)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgCaycot, mark, depth + 1);
		if (SF_main_GameCanvas_tam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_tam)->clazz)->markFunction)((jobject) SF_main_GameCanvas_tam, mark, depth + 1);
		if (SF_main_GameCanvas_img18)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_img18)->clazz)->markFunction)((jobject) SF_main_GameCanvas_img18, mark, depth + 1);
		if (SF_main_GameCanvas_thongBaoTest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_thongBaoTest)->clazz)->markFunction)((jobject) SF_main_GameCanvas_thongBaoTest, mark, depth + 1);
		if (SF_main_GameCanvas_flyTexts)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_flyTexts)->clazz)->markFunction)((jobject) SF_main_GameCanvas_flyTexts, mark, depth + 1);
		if (SF_main_GameCanvas_wsState)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_wsState)->clazz)->markFunction)((jobject) SF_main_GameCanvas_wsState, mark, depth + 1);
		if (SF_main_GameCanvas_imgWS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgWS)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgWS, mark, depth + 1);
		if (SF_main_GameCanvas_imgShuriken)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgShuriken)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgShuriken, mark, depth + 1);
		if (SF_main_GameCanvas_imgDust)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_imgDust)->clazz)->markFunction)((jobject) SF_main_GameCanvas_imgDust, mark, depth + 1);
		if (SF_main_GameCanvas_serverScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_serverScreen)->clazz)->markFunction)((jobject) SF_main_GameCanvas_serverScreen, mark, depth + 1);
		if (SF_main_GameCanvas_chooseCharScr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_chooseCharScr)->clazz)->markFunction)((jobject) SF_main_GameCanvas_chooseCharScr, mark, depth + 1);
		if (SF_main_GameCanvas_serverScr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas_serverScr)->clazz)->markFunction)((jobject) SF_main_GameCanvas_serverScr, mark, depth + 1);
		if (SF_main_GameCanvas__SelectCharScr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameCanvas__SelectCharScr)->clazz)->markFunction)((jobject) SF_main_GameCanvas__SelectCharScr, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_MotherCanvas(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (main_GameCanvas *) object;
	if (self->F_g)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_g)->clazz)->markFunction)((jobject) self->F_g, mark, depth + 1);
	if (self->F_dustX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dustX)->clazz)->markFunction)((jobject) self->F_dustX, mark, depth + 1);
	if (self->F_dustY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dustY)->clazz)->markFunction)((jobject) self->F_dustY, mark, depth + 1);
	if (self->F_dustState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dustState)->clazz)->markFunction)((jobject) self->F_dustState, mark, depth + 1);
}

void SM_main_GameCanvas_applyMoveMode(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:applyMoveMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(26);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_moveMode) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(27);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveWASD = (jint(1));
	LINE_NUMBER(28);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveArrows = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(29);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_moveMode) != (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(30);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveWASD = (jint(0));
	LINE_NUMBER(31);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveArrows = (jint(1));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(33);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveWASD = (jint(1));
	LINE_NUMBER(34);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveArrows = (jint(1));
	}
label_4:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_cycleMoveMode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:cycleMoveMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(39);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveMode = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_moveMode) + (jint(1))) % (jint(3)));
	LINE_NUMBER(40);
	SM_main_GameCanvas_applyMoveMode(ctx);
	LINE_NUMBER(41);
	SM_main_GameCanvas_saveMoveModeRMS(ctx);
	LINE_NUMBER(42);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(43);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_moveMode) != 0) goto label_5;
	}
	{
	LINE_NUMBER(44);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"C\u1ea3 WASD & M\u0169i t\u00ean"_j)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(45);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_moveMode) != (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(46);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"Ch\u1ec9 ASDW (WASD)"_j)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(48);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"Ch\u1ec9 M\u0169i t\u00ean"_j)));
	}
label_7:;
	{
	LINE_NUMBER(49);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(50);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Di chuy\u1ec3n PC: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_10:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_setMoveMode_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:setMoveMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(55);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveMode = ((((frame[0].i) % (jint(3))) + (jint(3))) % (jint(3)));
	LINE_NUMBER(56);
	SM_main_GameCanvas_applyMoveMode(ctx);
	LINE_NUMBER(57);
	SM_main_GameCanvas_saveMoveModeRMS(ctx);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_loadMoveModeRMS(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:loadMoveModeRMS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pc_move_mode"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(63);
	if ((frame[0].i) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(64);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveMode = (frame[0].i);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(67);
	goto label_6;
label_2:;
	LINE_NUMBER(66);
	INST_ASTORE(0);
label_6:;
	{
	LINE_NUMBER(68);
	SM_main_GameCanvas_applyMoveMode(ctx);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_saveMoveModeRMS(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:saveMoveModeRMS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(73);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_pc_move_mode"_j))), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_moveMode));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(75);
	goto label_4;
label_2:;
	LINE_NUMBER(74);
	INST_ASTORE(0);
label_4:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_main_GameCanvas_getActiveTextField_R_lib_input_TField(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:getActiveTextField", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	clinit_main_GameCanvas(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(80);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(81);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(87);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(89);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(90);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(92);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(94);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(95);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(97);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(98);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_InputDlg)) == 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(99);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	frame[0].o = (checkCast(ctx, &class_nro_InputDlg, sp[0].o));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(104);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(106);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	LINE_NUMBER(107);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(109);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_loginScr;
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 1); goto label_28; }
	{
	LINE_NUMBER(110);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfUser;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfUser;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(111);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfUser;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(113);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus) == 0) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(114);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	sp[0].o = (jobject)((nro_LoginScr *) NULL_CHECK(sp[0].o))->F_tfPass;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(116);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ClientInput)) == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_33; } // goto label_58
	}
	{
	LINE_NUMBER(117);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_nro_ClientInput_getActiveField_R_lib_input_TField) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_ClientInput, sp[0].o)))->vtable)[VTABLE_nro_ClientInput_getActiveField_R_lib_input_TField])(ctx, (checkCast(ctx, &class_nro_ClientInput, sp[0].o)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(118);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	LINE_NUMBER(119);
	INST_ALOAD(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_58; }
	LINE_NUMBER(121);
	{ popExceptionFrames(frameRef, 1); goto label_40; }
label_58:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_SelectCharScr)) == 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_36; } // goto label_62
	}
	{
	LINE_NUMBER(122);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_nro_SelectCharScr_getActiveField_R_lib_input_TField) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_SelectCharScr, sp[0].o)))->vtable)[VTABLE_nro_SelectCharScr_getActiveField_R_lib_input_TField])(ctx, (checkCast(ctx, &class_nro_SelectCharScr, sp[0].o)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	LINE_NUMBER(124);
	INST_ALOAD(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_62; }
	LINE_NUMBER(126);
	{ popExceptionFrames(frameRef, 1); goto label_40; }
label_62:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_MoneyCharge)) == 0) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_39; } // goto label_66
	}
	{
	LINE_NUMBER(127);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_nro_MoneyCharge_getActiveField_R_lib_input_TField) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_MoneyCharge, sp[0].o)))->vtable)[VTABLE_nro_MoneyCharge_getActiveField_R_lib_input_TField])(ctx, (checkCast(ctx, &class_nro_MoneyCharge, sp[0].o)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(128);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_37; }
	}
	LINE_NUMBER(129);
	INST_ALOAD(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_66; }
	LINE_NUMBER(131);
	{ popExceptionFrames(frameRef, 1); goto label_40; }
label_66:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_RegisterScreen)) == 0) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(132);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_nro_RegisterScreen_getActiveField_R_lib_input_TField) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_RegisterScreen, sp[0].o)))->vtable)[VTABLE_nro_RegisterScreen_getActiveField_R_lib_input_TField])(ctx, (checkCast(ctx, &class_nro_RegisterScreen, sp[0].o)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(133);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	LINE_NUMBER(134);
	INST_ALOAD(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(137);
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_focusedTField;
	frame[0].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[0].o) == nullptr) goto label_74;
	}
	{
	if (((jint)((lib_input_TField *) NULL_CHECK((frame[0].o)))->F_isFocus) == 0) goto label_74;
	}
	INST_ALOAD(0);
	goto label_41;
label_74:;
	INST_ACONST_NULL();
label_41:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(139);
	frame[0].o = sp[0].o;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_cycleFocusedTextField_boolean_R_boolean(jcontext ctx, jbool param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:cycleFocusedTextField", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(146);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(147);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	jint temp0 = isInstance(ctx, sp[0].o, &class_nro_InputDlg);
	sp[0].i = temp0;
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
	LINE_NUMBER(149);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_loginScr;
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	{
	LINE_NUMBER(150);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_keyPress_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_keyPress_int])(ctx, sp[0].o, (-26));
	LINE_NUMBER(151);
	jint temp0 = jint(1);
	sp[0].i = temp0;
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
	LINE_NUMBER(153);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_ClientInput)) == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(154);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	((func_nro_ClientInput_cycleFocus_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_ClientInput, sp[0].o)))->vtable)[VTABLE_nro_ClientInput_cycleFocus_boolean])(ctx, (checkCast(ctx, &class_nro_ClientInput, sp[0].o)), (frame[0].i));
	LINE_NUMBER(155);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(157);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_MoneyCharge)) == 0) { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(158);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	((func_nro_MoneyCharge_cycleFocus) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_MoneyCharge, sp[0].o)))->vtable)[VTABLE_nro_MoneyCharge_cycleFocus])(ctx, (checkCast(ctx, &class_nro_MoneyCharge, sp[0].o)));
	LINE_NUMBER(159);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	LINE_NUMBER(162);
	goto label_21;
label_2:;
	LINE_NUMBER(161);
	INST_ASTORE(1);
label_21:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_isChatOrInputActive_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:isChatOrInputActive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)SM_main_GameCanvas_getActiveTextField_R_lib_input_TField(ctx);
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(169);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isInputFocused_R_boolean(ctx);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	LINE_NUMBER(172);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(174);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	LINE_NUMBER(175);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	LINE_NUMBER(178);
	goto label_14;
label_2:;
	LINE_NUMBER(177);
	INST_ASTORE(0);
label_14:;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:isRawKeyPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(184);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_1;
label_4:;
	INST_ICONST(0);
label_1:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(185);
	frame[1].o = sp[0].o;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_main_GameCanvas_hasPointerEvents_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:hasPointerEvents", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void init_main_GameCanvas(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(340);
	init_nro_MotherCanvas(ctx, (frame[0].o));
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	clinit_lib_mGraphics(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_mGraphics);
	init_lib_mGraphics(ctx, sp[1].o);
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_g = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_timefps = (temp0 + (jlong(1000ll)));
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_timeup = (temp1 + (jlong(1000ll)));
	LINE_NUMBER(288);
	((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_count = (12);
	LINE_NUMBER(341);
	jint temp2 = (jint)((func_main_GameCanvas_getY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_main_GameCanvas_getY_R_int])(ctx, (frame[0].o));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_w = temp2;
	LINE_NUMBER(342);
	jint temp3 = (jint)((func_main_GameCanvas_getH_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_main_GameCanvas_getH_R_int])(ctx, (frame[0].o));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_h = temp3;
	LINE_NUMBER(343);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_instance = (frame[0].o);
	LINE_NUMBER(344);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp0 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_BIPUSH(12);
label_10:;
	{
	sp -= 1;
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_ITEM_HEIGHT = (sp[0].i + (8));
	LINE_NUMBER(345);
	clinit_nro_Menu(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Menu);
	init_nro_Menu(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_menu = sp[0].o;
	LINE_NUMBER(346);
	clinit_nro_Panel(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Panel);
	init_nro_Panel(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_panel = sp[0].o;
	LINE_NUMBER(347);
	SM_main_GameCanvas_loadMoveModeRMS(ctx);
	LINE_NUMBER(348);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vCurrPopup"_j))));
	LINE_NUMBER(349);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_hw = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(350);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_hh = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2)));
	LINE_NUMBER(351);
	jint temp0 = (jint)((func_main_GameCanvas_hasPointerEvents_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_main_GameCanvas_hasPointerEvents_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(352);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isTouch = (jint(1));
	LINE_NUMBER(353);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) < (240)) goto label_21;
	}
	{
	LINE_NUMBER(354);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isTouchControl = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(357);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (320)) goto label_18;
	}
	{
	LINE_NUMBER(358);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isTouchControlSmallScreen = (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(362);
	clinit_nro_MsgDlg(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MsgDlg);
	init_nro_MsgDlg(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_msgdlg = sp[0].o;
	LINE_NUMBER(363);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) > (160)) goto label_25;
	}
	{
	LINE_NUMBER(364);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_hTab = (15);
	LINE_NUMBER(365);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_cmdH = (17);
	}
label_25:;
	{
	LINE_NUMBER(367);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(368);
	clinit_nro_Paint(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Paint);
	init_nro_Paint(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_paintz = sp[0].o;
	LINE_NUMBER(369);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_30;
	}
	{
	LINE_NUMBER(370);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgDust;
	if (sp[0].o != nullptr) goto label_32;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)createMultiArray(ctx, &class_javax_microedition_lcdui_Image, {(jint(2)), (jint(5))});
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgDust = sp[0].o;
	LINE_NUMBER(373);
	frame[1].i = (jint(0));
	}
label_35:;
	{
	if ((frame[1].i) >= (jint(2))) goto label_32;
	}
	{
	LINE_NUMBER(374);
	frame[2].i = (jint(0));
	}
label_37:;
	{
	if ((frame[2].i) >= (jint(5))) goto label_38;
	}
	{
	LINE_NUMBER(375);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgDust;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/e/d"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(374);
	INST_IINC(2, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(373);
	INST_IINC(1, 1);
	goto label_35;
	}
label_32:;
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_dustX = (jref) sp[1].o;
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_dustY = (jref) sp[1].o;
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_dustState = (jref) sp[1].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	jint temp1 = jint(1);
	jint temp2 = jint(-1);
	ARRAY_ACCESS(jint, sp[1].o, temp1) = temp2;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	}
label_30:;
	{
	LINE_NUMBER(386);
	SM_main_GameCanvas_loadWaterSplash(ctx);
	LINE_NUMBER(387);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2df.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgShuriken = sp[0].o;
	LINE_NUMBER(389);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"clienttype"_j))));
	frame[1].i = temp0;
	if (temp0 == (jint(-1))) goto label_47;
	}
	{
	LINE_NUMBER(390);
	if ((frame[1].i) <= (7)) goto label_49;
	}
	{
	LINE_NUMBER(391);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"clienttype"_j))), (clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec));
	goto label_47;
	}
label_49:;
	{
	LINE_NUMBER(393);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_clientTypec = (frame[1].i);
	}
label_47:;
	{
	LINE_NUMBER(397);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (7)) goto label_51;
	}
	{
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"fake"_j))));
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	sp[0].o = (jobject)SM_nro_Rms_loadRMSString_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"fake"_j))));
	if (sp[0].o != (((jobject) createStringLiteral(ctx, u8""_j)))) goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/wait.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgShuriken = sp[0].o;
	}
label_51:;
	{
	LINE_NUMBER(401);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vDebugUpdate"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_debugUpdate = sp[0].o;
	LINE_NUMBER(402);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vDeBugPait"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_debugPaint = sp[0].o;
	LINE_NUMBER(403);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vDebugSesion"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_debugSession = sp[0].o;
	LINE_NUMBER(405);
	frame[1].i = (jint(0));
	}
label_56:;
	{
	if ((frame[1].i) >= (jint(3))) goto label_57;
	}
	{
	LINE_NUMBER(406);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBorder;
	jint temp0 = frame[1].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dbd"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(405);
	INST_IINC(1, 1);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(409);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBorder;
	jint temp0 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	LINE_NUMBER(410);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBorder;
	jint temp1 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	LINE_NUMBER(411);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBorder;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))));
	LINE_NUMBER(412);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBorder;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))));
	LINE_NUMBER(413);
	jint temp4 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))));
	clinit_nro_Panel(ctx);
	SF_nro_Panel_graphics = temp4;
	LINE_NUMBER(414);
	jint temp5 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"lowGraphic"_j))));
	if (temp5 != (jint(1))) goto label_65;
	}
	INST_ICONST(1);
	goto label_66;
label_65:;
	INST_ICONST(0);
label_66:;
	{
	sp -= 1;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_lowGraphic = sp[0].i;
	LINE_NUMBER(415);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"serverchat"_j))));
	if (temp0 == (jint(1))) goto label_68;
	}
	INST_ICONST(1);
	goto label_69;
label_68:;
	INST_ICONST(0);
label_69:;
	{
	sp -= 1;
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintChatVip = sp[0].i;
	LINE_NUMBER(416);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPaintAura"_j))));
	if (temp0 != (jint(1))) goto label_71;
	}
	INST_ICONST(1);
	goto label_72;
label_71:;
	INST_ICONST(0);
label_72:;
	{
	sp -= 1;
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura = sp[0].i;
	LINE_NUMBER(417);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPaintAura2"_j))));
	if (temp0 != (jint(1))) goto label_74;
	}
	INST_ICONST(1);
	goto label_75;
label_74:;
	INST_ICONST(0);
label_75:;
	{
	sp -= 1;
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura2 = sp[0].i;
	LINE_NUMBER(418);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPlaySound"_j))));
	if (temp0 == (jint(-1))) goto label_77;
	}
	{
	LINE_NUMBER(419);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"isPlaySound"_j))));
	if (temp0 != (jint(1))) goto label_79;
	}
	INST_ICONST(1);
	goto label_80;
label_79:;
	INST_ICONST(0);
label_80:;
	{
	sp -= 1;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPlaySound = sp[0].i;
	LINE_NUMBER(420);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isResume = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound);
	LINE_NUMBER(421);
	clinit_lib_sound_SoundMn(ctx);
	SF_lib_sound_SoundMn_isSound = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPlaySound);
	}
label_77:;
	{
	LINE_NUMBER(423);
	SM_nro_Res_init(ctx);
	LINE_NUMBER(424);
	SM_nro_SmallImage_loadBigImage(ctx);
	LINE_NUMBER(425);
	SM_nro_PopUp_loadBg(ctx);
	LINE_NUMBER(426);
	clinit_nro_Panel(ctx);
	SF_nro_Panel_WIDTH_PANEL = (176);
	LINE_NUMBER(427);
	if ((176) <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) goto label_87;
	}
	{
	LINE_NUMBER(428);
	clinit_nro_Panel(ctx);
	SF_nro_Panel_WIDTH_PANEL = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	}
label_87:;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/18+.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_img18 = sp[0].o;
	LINE_NUMBER(433);
	frame[1].i = (jint(0));
	}
label_90:;
	{
	if ((frame[1].i) >= (7)) goto label_91;
	}
	{
	LINE_NUMBER(434);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBlue;
	jint temp0 = frame[1].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/blue/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(435);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgViolet;
	jint temp1 = frame[1].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/violet/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(436);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBlack;
	jint temp2 = frame[1].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/black/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(433);
	INST_IINC(1, 1);
	goto label_90;
	}
label_91:;
	{
	LINE_NUMBER(439);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerListScreen);
	init_nro_ServerListScreen(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScreen = sp[0].o;
	LINE_NUMBER(440);
	clinit_nro_ServerScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerScr);
	init_nro_ServerScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScr = sp[0].o;
	LINE_NUMBER(441);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	LINE_NUMBER(442);
	clinit_nro_CreateCharScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_CreateCharScr);
	init_nro_CreateCharScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas__SelectCharScr = sp[0].o;
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_main_GameCanvas_gI_R_main_GameCanvas(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:gI", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(447);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_connect(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:connect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	clinit_main_GameMidlet(ctx);
	sp[1].o = (jobject)SF_main_GameMidlet_IP;
	((func_lib_network_Session_ME_connect_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_connect_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameMidlet(ctx), (jint)SF_main_GameMidlet_PORT));
	}
label_1:;
	LINE_NUMBER(455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_connect2(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:connect2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(459);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IP2= "_j))));
	clinit_main_GameMidlet(ctx);
	sp[1].o = (jobject)SF_main_GameMidlet_IP2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" PORT 2= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_main_GameMidlet(ctx), (jint)SF_main_GameMidlet_PORT2));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(460);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	clinit_main_GameMidlet(ctx);
	sp[1].o = (jobject)SF_main_GameMidlet_IP2;
	((func_lib_network_Session_ME_connect_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_connect_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameMidlet(ctx), (jint)SF_main_GameMidlet_PORT2));
	}
label_1:;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_resetTrans_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:resetTrans", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(467);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_resetTransGameScr_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:resetTransGameScr", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(472);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(473);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(474);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)));
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameCanvas_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isRequestMapID) != (jint(1))) goto label_1;
	}
	{
	clinit_main_GameCanvas(ctx);
	jlong temp0 = (jlong)SF_main_GameCanvas_waitingTimeChangeMap;
	jlong temp1 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, temp1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(479);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_waitingTimeChangeMap = temp0;
	LINE_NUMBER(480);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isRequestMapID = (jint(-1));
	LINE_NUMBER(481);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(482);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(483);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(484);
	SM_lib_mSystem_onConnectionFail_boolean(ctx, (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(487);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isRequestMapID) != (jint(2))) goto label_8;
	}
	{
	clinit_main_GameCanvas(ctx);
	jlong temp0 = (jlong)SF_main_GameCanvas_waitingTimeChangeMap;
	jlong temp1 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, temp1)) >= 0) goto label_8;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_8;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_currentScreen;
	if ((--sp)->o == nullptr) goto label_8;
	{
	LINE_NUMBER(489);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(490);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) == 0) goto label_12;
	}
	{
	LINE_NUMBER(491);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(494);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_waitToLogin) == 0) goto label_10;
	}
	{
	LINE_NUMBER(495);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_waitToLogin = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(499);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_vt_images_watingDowload;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_15;
	}
	{
	LINE_NUMBER(500);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_vt_images_watingDowload;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[1].o = (checkCast(ctx, &class_nro_Small, sp[0].o));
	LINE_NUMBER(501);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestIcon_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestIcon_int])(ctx, sp[0].o, ((jint)((nro_Small *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(502);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_vt_images_watingDowload;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	}
label_15:;
	{
	LINE_NUMBER(505);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_dowloadEff;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(508);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, ((jlong)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_timefps))) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_timefps = (temp0 + (jlong(1000ll)));
	LINE_NUMBER(511);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_fps = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(514);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_fps = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_fps) + (jint(1)));
	LINE_NUMBER(515);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_messageServer;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_23;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_thongBaoTest;
	if ((--sp)->o != nullptr) goto label_23;
	{
	LINE_NUMBER(516);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_messageServer;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_thongBaoTest = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(517);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_xThongBaoTranslate = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (60));
	LINE_NUMBER(518);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_dir_ = (jint(-1));
	LINE_NUMBER(519);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_messageServer;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	}
label_23:;
	{
	LINE_NUMBER(522);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_28;
	}
	{
	LINE_NUMBER(523);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeNow = temp0;
	}
label_28:;
	{
	LINE_NUMBER(526);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, ((jlong)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_timeup))) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_timeup = (((jlong)((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_timeup) + (jlong(1000ll)));
	LINE_NUMBER(528);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_up = (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(531);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_up = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_up) + (jint(1)));
	LINE_NUMBER(532);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_debugUpdate;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(533);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(534);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isPing) == 0) goto label_36;
	}
	LINE_NUMBER(535);
	SM_nro_Res_updateOnScreenDebug(ctx);
label_36:;
	{
	LINE_NUMBER(538);
	if ((longCompare(((frame[1].l) - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeTickEff1)), (jlong(780ll)))) < 0) goto label_38;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isEff1;
	if ((--sp)->i != 0) goto label_38;
	{
	LINE_NUMBER(539);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeTickEff1 = (frame[1].l);
	LINE_NUMBER(540);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isEff1 = (jint(1));
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(542);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isEff1 = (jint(0));
	}
label_41:;
	{
	LINE_NUMBER(545);
	if ((longCompare(((frame[1].l) - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeTickEff2)), (jlong(7800ll)))) < 0) goto label_42;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isEff2;
	if ((--sp)->i != 0) goto label_42;
	{
	LINE_NUMBER(546);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeTickEff2 = (frame[1].l);
	LINE_NUMBER(547);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isEff2 = (jint(1));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(549);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isEff2 = (jint(0));
	}
label_45:;
	{
	LINE_NUMBER(552);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_taskTick) <= 0) goto label_46;
	}
	{
	LINE_NUMBER(553);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_taskTick = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_taskTick) - (jint(1)));
	}
label_46:;
	{
	LINE_NUMBER(556);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) + (jint(1));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_gameTick = temp0;
	if (temp0 <= (10000)) goto label_48;
	}
	{
	LINE_NUMBER(557);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) != 0) goto label_50;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_lastTimePress)), (jlong(20000ll)))) <= 0) goto label_50;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != sp[1].o) goto label_50;
	}
	{
	LINE_NUMBER(559);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_exit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_exit])(ctx, sp[0].o);
	}
label_50:;
	{
	LINE_NUMBER(562);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_gameTick = (jint(0));
	}
label_48:;
	{
	LINE_NUMBER(565);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	LINE_NUMBER(566);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(567);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((func_nro_ChatPopup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_update])(ctx, sp[0].o);
	LINE_NUMBER(568);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((func_nro_ChatPopup_updateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_updateKey])(ctx, sp[0].o);
	goto label_57;
	}
label_54:;
	{
	LINE_NUMBER(569);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o == nullptr) goto label_58;
	}
	{
	LINE_NUMBER(570);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	((func_nro_ChatPopup_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_update])(ctx, sp[0].o);
	LINE_NUMBER(571);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	((func_nro_ChatPopup_updateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_updateKey])(ctx, sp[0].o);
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(572);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_61;
	}
	{
	LINE_NUMBER(573);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	((func_nro_Dialog_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Dialog_update])(ctx, sp[0].o);
	goto label_57;
	}
label_61:;
	{
	LINE_NUMBER(574);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) goto label_63;
	}
	{
	LINE_NUMBER(575);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_updateMenu) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_updateMenu])(ctx, sp[0].o);
	LINE_NUMBER(576);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_updateMenuKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_updateMenuKey])(ctx, sp[0].o);
	goto label_57;
	}
label_63:;
	{
	LINE_NUMBER(577);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_57;
	}
	{
	LINE_NUMBER(578);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_update])(ctx, sp[0].o);
	LINE_NUMBER(579);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp0 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_X;
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp2 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_W;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp3 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_H));
	if (temp3 == 0) goto label_68;
	}
	{
	LINE_NUMBER(580);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isFocusPanel2 = (jint(0));
	}
label_68:;
	{
	LINE_NUMBER(583);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_70;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_70;
	}
	{
	LINE_NUMBER(584);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((func_nro_Panel_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_update])(ctx, sp[0].o);
	LINE_NUMBER(585);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	jint temp0 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_X;
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	jint temp2 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_W;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	jint temp3 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_H));
	if (temp3 == 0) goto label_70;
	}
	{
	LINE_NUMBER(586);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isFocusPanel2 = (jint(1));
	}
label_70:;
	{
	LINE_NUMBER(590);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_74;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_74;
	}
	{
	LINE_NUMBER(591);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_chatTFUpdateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_chatTFUpdateKey])(ctx, sp[0].o);
	goto label_76;
	}
label_74:;
	{
	LINE_NUMBER(592);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_77;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_77;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_77;
	}
	{
	LINE_NUMBER(593);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((func_nro_Panel_chatTFUpdateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_chatTFUpdateKey])(ctx, sp[0].o);
	goto label_76;
	}
label_77:;
	{
	LINE_NUMBER(594);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_79;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_79;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isFocusPanel2;
	if ((--sp)->i == 0) goto label_79;
	{
	LINE_NUMBER(595);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((func_nro_Panel_updateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_updateKey])(ctx, sp[0].o);
	goto label_76;
	}
label_79:;
	{
	LINE_NUMBER(597);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_updateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_updateKey])(ctx, sp[0].o);
	}
label_76:;
	{
	LINE_NUMBER(600);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp0 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_X;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp1 = temp0 + ((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_W);
	jint temp2 = jint(0);
	clinit_main_GameCanvas(ctx);
	jint temp3 = (jint)SF_main_GameCanvas_w;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp4 = temp3 - (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_W) << (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp5 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, temp1, temp2, temp4, ((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_H));
	if (temp5 == 0) goto label_57;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_57;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isDoneCombine) == 0) goto label_57;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_81;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_57;
	}
label_81:;
	{
	LINE_NUMBER(602);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_hide])(ctx, sp[0].o);
	}
label_57:;
	{
	LINE_NUMBER(606);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isLoading) != 0) goto label_82;
	}
	{
	LINE_NUMBER(607);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	((func_nro_mScreen_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mScreen_update])(ctx, sp[0].o);
	}
label_82:;
	{
	LINE_NUMBER(610);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_84;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_serverChatPopUp;
	if ((--sp)->o != nullptr) goto label_84;
	{
	LINE_NUMBER(611);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	((func_nro_mScreen_updateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mScreen_updateKey])(ctx, sp[0].o);
	}
label_84:;
	{
	LINE_NUMBER(614);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyTabPressed = (jint(0));
	LINE_NUMBER(615);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(619);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_88;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_88;
	}
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	frame[3].i = ((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId);
	LINE_NUMBER(621);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	frame[4].i = ((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index);
	LINE_NUMBER(622);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(0));
	LINE_NUMBER(623);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_trans = (jint(0));
	LINE_NUMBER(624);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_type = (jint(0));
	LINE_NUMBER(625);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(1));
	LINE_NUMBER(626);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isCamera = (jint(1));
	LINE_NUMBER(627);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) goto label_97;
	}
	INST_ILOAD(3);
	if ((--sp)->i <= 0) goto label_97;
	{
	LINE_NUMBER(628);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_97:;
	{
	LINE_NUMBER(631);
	switch((frame[3].i)) {
		case 0: goto label_99;
		case 1: goto label_100;
		case 2: goto label_101;
		case 3: goto label_102;
		default: goto label_103;
	}
	}
label_99:;
	{
	LINE_NUMBER(633);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_104;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_104;
	}
	{
	LINE_NUMBER(634);
	if ((frame[4].i) != 0) goto label_106;
	}
	{
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_106;
	}
	{
	LINE_NUMBER(635);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Waypoint *) NULL_CHECK((checkCast(ctx, &class_nro_Waypoint, sp[0].o))))->F_minX) - (100));
	LINE_NUMBER(636);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Waypoint *) NULL_CHECK((checkCast(ctx, &class_nro_Waypoint, sp[0].o))))->F_minY) + (40));
	LINE_NUMBER(637);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(1));
	}
label_106:;
	{
	LINE_NUMBER(640);
	if ((frame[4].i) != (jint(1))) goto label_110;
	}
	{
	LINE_NUMBER(641);
	SM_nro_Hint_nextMap_int(ctx, (jint(0)));
	}
label_110:;
	{
	LINE_NUMBER(644);
	if ((frame[4].i) != (jint(2))) goto label_112;
	}
	LINE_NUMBER(645);
	SM_nro_Hint_clickNpc(ctx);
label_112:;
	{
	LINE_NUMBER(648);
	if ((frame[4].i) != (jint(3))) goto label_114;
	}
	{
	LINE_NUMBER(649);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_116;
	}
	{
	LINE_NUMBER(650);
	SM_nro_Hint_clickNpc(ctx);
	goto label_114;
	}
label_116:;
	{
	LINE_NUMBER(651);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_currentTabIndex) != 0) goto label_118;
	}
	{
	LINE_NUMBER(652);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o != nullptr) goto label_120;
	}
	{
	LINE_NUMBER(653);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp0 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_xScroll;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (temp0 + (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_wScroll) / (jint(2))));
	LINE_NUMBER(654);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_yScroll) + (20));
	goto label_114;
	}
label_120:;
	{
	LINE_NUMBER(655);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_tDelay) == 0) goto label_114;
	}
	{
	LINE_NUMBER(656);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_xScroll) + (25));
	LINE_NUMBER(657);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_yScroll) + (60));
	goto label_114;
	}
label_118:;
	{
	LINE_NUMBER(659);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_currentTabIndex) != (jint(1))) goto label_114;
	}
	{
	LINE_NUMBER(660);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_startTabPos) + (10));
	LINE_NUMBER(661);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (65);
	}
label_114:;
	{
	LINE_NUMBER(665);
	if ((frame[4].i) != (jint(4))) goto label_127;
	}
	{
	LINE_NUMBER(666);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_129;
	}
	{
	LINE_NUMBER(667);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmdClose;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x) + (jint(5)));
	LINE_NUMBER(668);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmdClose;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) + (jint(5)));
	goto label_127;
	}
label_129:;
	{
	LINE_NUMBER(669);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) goto label_132;
	}
	{
	LINE_NUMBER(670);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(671);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20));
	goto label_127;
	}
label_132:;
	LINE_NUMBER(673);
	SM_nro_Hint_clickNpc(ctx);
label_127:;
	{
	LINE_NUMBER(677);
	if ((frame[4].i) != (jint(5))) goto label_135;
	}
	{
	LINE_NUMBER(678);
	SM_nro_Hint_clickNpc(ctx);
	goto label_135;
	}
label_104:;
	{
	LINE_NUMBER(683);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(684);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (15));
	LINE_NUMBER(685);
	goto label_135;
	}
label_100:;
	{
	LINE_NUMBER(687);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_139;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_139;
	}
	{
	LINE_NUMBER(688);
	if ((frame[4].i) != 0) goto label_141;
	}
	{
	LINE_NUMBER(689);
	jint temp0 = (jint)SM_nro_TileMap_isOfflineMap_R_boolean(ctx);
	if (temp0 == 0) goto label_143;
	}
	{
	LINE_NUMBER(690);
	SM_nro_Hint_nextMap_int(ctx, (jint(0)));
	goto label_141;
	}
label_143:;
	LINE_NUMBER(692);
	SM_nro_Hint_clickMob(ctx);
label_141:;
	{
	LINE_NUMBER(696);
	if ((frame[4].i) != (jint(1))) goto label_135;
	}
	{
	LINE_NUMBER(697);
	jint temp0 = (jint)SM_nro_TileMap_isOfflineMap_R_boolean(ctx);
	if (temp0 != 0) goto label_146;
	}
	{
	LINE_NUMBER(698);
	SM_nro_Hint_nextMap_int(ctx, (jint(1)));
	goto label_135;
	}
label_146:;
	{
	LINE_NUMBER(700);
	SM_nro_Hint_clickNpc(ctx);
	goto label_135;
	}
label_139:;
	{
	LINE_NUMBER(706);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(707);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (15));
	LINE_NUMBER(708);
	goto label_135;
	}
label_101:;
	{
	LINE_NUMBER(710);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_150;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) != (14)) goto label_151;
	}
label_150:;
	{
	LINE_NUMBER(711);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(712);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (15));
	LINE_NUMBER(713);
	goto label_135;
	}
label_151:;
	{
	LINE_NUMBER(716);
	if ((frame[4].i) != 0) goto label_154;
	}
	{
	LINE_NUMBER(717);
	jint temp0 = (jint)SM_nro_TileMap_isOfflineMap_R_boolean(ctx);
	if (temp0 != 0) goto label_156;
	}
	{
	LINE_NUMBER(718);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_activeClick = (jint(1));
	}
label_156:;
	{
	LINE_NUMBER(721);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_158;
	}
	{
	LINE_NUMBER(722);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_activeClick) != 0) goto label_160;
	}
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_cmdMenu;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(724);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_cmdMenu;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) + (13));
	LINE_NUMBER(725);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_trans = (jint(1));
	goto label_164;
	}
label_160:;
	{
	LINE_NUMBER(727);
	jint temp0 = (jint)SM_nro_GameScr_getTaskMapId_R_int(ctx);
	if (temp0 != (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID)) goto label_165;
	}
	{
	LINE_NUMBER(728);
	jint temp0 = (jint)SM_nro_Hint_isHaveItem_R_boolean(ctx);
	if (temp0 != 0) goto label_167;
	}
	{
	LINE_NUMBER(729);
	SM_nro_Hint_clickMob(ctx);
	goto label_167;
	}
label_165:;
	{
	LINE_NUMBER(732);
	SM_nro_Hint_nextMap_int(ctx, (jint(0)));
	}
label_167:;
	{
	LINE_NUMBER(735);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_activeClick) == 0) goto label_164;
	}
	{
	LINE_NUMBER(736);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewMap = (jint(1));
	goto label_164;
	}
label_158:;
	{
	LINE_NUMBER(739);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_activeClick) != 0) goto label_170;
	}
	{
	LINE_NUMBER(740);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_currentTabIndex) != 0) goto label_172;
	}
	{
	LINE_NUMBER(741);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) <= (300)) goto label_174;
	}
	INST_BIPUSH(15);
	goto label_175;
label_174:;
	INST_BIPUSH(10);
label_175:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(742);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp0 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_xScroll;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (temp0 + (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_wScroll) / (jint(2))));
	LINE_NUMBER(743);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	jint temp1 = (jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_yScroll;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((temp1 + ((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_hScroll)) - (frame[3].i));
	goto label_164;
	}
label_172:;
	{
	LINE_NUMBER(745);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_startTabPos) + (10));
	LINE_NUMBER(746);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (65);
	goto label_164;
	}
label_170:;
	{
	LINE_NUMBER(748);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isViewMap) != 0) goto label_179;
	}
	{
	LINE_NUMBER(749);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmdClose;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x) + (jint(5)));
	LINE_NUMBER(750);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmdClose;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) + (jint(5)));
	goto label_164;
	}
label_179:;
	{
	LINE_NUMBER(752);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_164:;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP), (jlong(0)))) > 0) goto label_154;
	}
	{
	LINE_NUMBER(756);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_xHP) + (jint(5)));
	LINE_NUMBER(757);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_yHP) + (13));
	LINE_NUMBER(758);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(0));
	}
label_154:;
	{
	LINE_NUMBER(762);
	if ((frame[4].i) == (jint(1))) goto label_88;
	}
	LINE_NUMBER(763);
	goto label_135;
label_102:;
	{
	LINE_NUMBER(767);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_186;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_186;
	}
	{
	LINE_NUMBER(768);
	if ((frame[4].i) != 0) goto label_188;
	}
	{
	LINE_NUMBER(769);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_190;
	}
	{
	LINE_NUMBER(770);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isCloseMap) != 0) goto label_192;
	}
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_cmdMenu;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(772);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_cmdMenu;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) + (13));
	LINE_NUMBER(773);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_trans = (jint(1));
	goto label_196;
	}
label_192:;
	{
	LINE_NUMBER(775);
	jint temp0 = (jint)SM_nro_GameScr_getTaskMapId_R_int(ctx);
	if (temp0 != (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID)) goto label_197;
	}
	{
	LINE_NUMBER(776);
	jint temp0 = (jint)SM_nro_Hint_isHaveItem_R_boolean(ctx);
	if (temp0 != 0) goto label_199;
	}
	{
	LINE_NUMBER(777);
	SM_nro_Hint_clickMob(ctx);
	goto label_199;
	}
label_197:;
	{
	LINE_NUMBER(780);
	SM_nro_Hint_nextMap_int(ctx, (jint(0)));
	}
label_199:;
	{
	LINE_NUMBER(783);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_activeClick) == 0) goto label_196;
	}
	{
	LINE_NUMBER(784);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewMap = (jint(1));
	goto label_196;
	}
label_190:;
	{
	LINE_NUMBER(787);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isCloseMap) != 0) goto label_202;
	}
	{
	LINE_NUMBER(788);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_xScroll) + (10)) + (108)) - (18));
	LINE_NUMBER(789);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (65);
	goto label_196;
	}
label_202:;
	{
	LINE_NUMBER(790);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isViewMap) != 0) goto label_205;
	}
	{
	LINE_NUMBER(791);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmdClose;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x) + (jint(5)));
	LINE_NUMBER(792);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmdClose;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) + (jint(5)));
	goto label_196;
	}
label_205:;
	{
	LINE_NUMBER(794);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_196:;
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP), (jlong(0)))) > 0) goto label_135;
	}
	{
	LINE_NUMBER(798);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_xHP) + (jint(5)));
	LINE_NUMBER(799);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_yHP) + (13));
	LINE_NUMBER(800);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(0));
	goto label_135;
	}
label_188:;
	{
	LINE_NUMBER(803);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	LINE_NUMBER(804);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isCamera = (jint(0));
	LINE_NUMBER(806);
	goto label_135;
	}
label_186:;
	{
	LINE_NUMBER(809);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(810);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (15));
	LINE_NUMBER(811);
	goto label_135;
	}
label_103:;
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) != (9)) goto label_215;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) != (jint(2))) goto label_215;
	}
	{
	LINE_NUMBER(814);
	frame[3].i = (jint(0));
	}
label_217:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_215;
	}
	{
	LINE_NUMBER(816);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_PopUp, sp[0].o);
	frame[5].o = sp[0].o;
	if (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cy) > (24)) goto label_220;
	}
	{
	LINE_NUMBER(817);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_PopUp *) NULL_CHECK((frame[5].o)))->F_cx) + (((jint)((nro_PopUp *) NULL_CHECK((frame[5].o)))->F_sayWidth) / (jint(2))));
	LINE_NUMBER(818);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_PopUp *) NULL_CHECK((frame[5].o)))->F_cy) + (30));
	LINE_NUMBER(819);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(1));
	LINE_NUMBER(820);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	LINE_NUMBER(821);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isCamera = (jint(1));
	LINE_NUMBER(822);
	goto label_135;
	}
label_220:;
	{
	LINE_NUMBER(814);
	INST_IINC(3, 1);
	goto label_217;
	}
label_215:;
	{
	LINE_NUMBER(827);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	LINE_NUMBER(828);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isCamera = (jint(0));
	LINE_NUMBER(829);
	goto label_135;
	}
label_88:;
	{
	LINE_NUMBER(833);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	LINE_NUMBER(834);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isCamera = (jint(0));
	}
label_135:;
	{
	LINE_NUMBER(837);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_trans) != 0) goto label_230;
	}
	INST_ICONST(2);
	goto label_231;
label_230:;
	INST_BIPUSH(-2);
label_231:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(838);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isShow) != 0) goto label_233;
	}
	{
	LINE_NUMBER(839);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(0));
	LINE_NUMBER(840);
	jint temp0 = (clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) + (jint(1));
	clinit_nro_Hint(ctx);
	SF_nro_Hint_t = temp0;
	if (temp0 != (50)) goto label_236;
	}
	{
	LINE_NUMBER(841);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_t = (jint(0));
	LINE_NUMBER(842);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isShow = (jint(1));
	goto label_236;
	}
label_233:;
	{
	LINE_NUMBER(845);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_t = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) + (jint(1)));
	LINE_NUMBER(846);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_type) != 0) goto label_240;
	}
	{
	LINE_NUMBER(847);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (jint(2))) goto label_242;
	}
	{
	LINE_NUMBER(848);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) + ((frame[3].i) * (jint(2))));
	LINE_NUMBER(849);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) - (jint(4)));
	LINE_NUMBER(850);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(1));
	}
label_242:;
	{
	LINE_NUMBER(853);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (jint(4))) goto label_246;
	}
	{
	LINE_NUMBER(854);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) - ((frame[3].i) * (jint(2))));
	LINE_NUMBER(855);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) + (jint(4)));
	LINE_NUMBER(856);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isShow = (jint(0));
	LINE_NUMBER(857);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(0));
	LINE_NUMBER(858);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_t = (jint(0));
	}
label_246:;
	{
	LINE_NUMBER(861);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) <= (jint(4))) goto label_240;
	}
	{
	LINE_NUMBER(862);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isShow = (jint(0));
	}
label_240:;
	{
	LINE_NUMBER(866);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_type) != (jint(1))) goto label_236;
	}
	{
	LINE_NUMBER(867);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (jint(2))) goto label_254;
	}
	{
	LINE_NUMBER(868);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_256;
	}
	{
	LINE_NUMBER(869);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_press_twice;
	SM_nro_GameScr_startFlyText_java_lang_String_int_int_int_int_int(ctx, sp[0].o, (clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x), ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) + (10)), (jint(0)), (20), (7));
	}
label_256:;
	{
	LINE_NUMBER(872);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(1));
	LINE_NUMBER(873);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) + ((frame[3].i) * (jint(2))));
	LINE_NUMBER(874);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) - (jint(4)));
	}
label_254:;
	{
	LINE_NUMBER(877);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (jint(4))) goto label_260;
	}
	{
	LINE_NUMBER(878);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(0));
	LINE_NUMBER(879);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) - (frame[3].i));
	LINE_NUMBER(880);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) + (jint(2)));
	}
label_260:;
	{
	LINE_NUMBER(883);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (6)) goto label_264;
	}
	{
	LINE_NUMBER(884);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(1));
	LINE_NUMBER(885);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) + (frame[3].i));
	LINE_NUMBER(886);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) - (jint(2)));
	}
label_264:;
	{
	LINE_NUMBER(889);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (8)) goto label_268;
	}
	{
	LINE_NUMBER(890);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_paintFlare = (jint(0));
	LINE_NUMBER(891);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) - (frame[3].i));
	LINE_NUMBER(892);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) + (jint(2)));
	}
label_268:;
	{
	LINE_NUMBER(895);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_t) != (10)) goto label_236;
	}
	{
	LINE_NUMBER(896);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) - (frame[3].i));
	LINE_NUMBER(897);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) + (jint(2)));
	LINE_NUMBER(898);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isShow = (jint(0));
	LINE_NUMBER(899);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_t = (jint(0));
	}
label_236:;
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	}
label_52:;
	{
	LINE_NUMBER(907);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	LINE_NUMBER(908);
	SM_nro_InfoDlg_update(ctx);
	LINE_NUMBER(909);
	if (((jint)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_resetToLoginScr) == 0) goto label_278;
	}
	{
	LINE_NUMBER(910);
	((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_resetToLoginScr = (jint(0));
	LINE_NUMBER(911);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
	}
label_278:;
	{
	LINE_NUMBER(914);
	SM_nro_AutoTrainMenu_updateAutoLogin(ctx);
	LINE_NUMBER(916);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_282;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) == 0) goto label_282;
	}
	{
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_xThongBaoTranslate) + ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_dir_) << (jint(1)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_xThongBaoTranslate = temp0;
	clinit_nro_Panel(ctx);
	sp[0].o = (jobject)SF_nro_Panel_imgNew;
	LINE_NUMBER(917);
	jint temp3 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[0].o);
	if ((temp0 - temp3) > (60)) goto label_282;
	}
	{
	LINE_NUMBER(918);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_dir_ = (jint(0));
	LINE_NUMBER(919);
	sp[0].o = frame[0].o;
	((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_tickWaitThongBao = (((jint)((main_GameCanvas *) NULL_CHECK(sp[0].o))->F_tickWaitThongBao) + (jint(1)));
	LINE_NUMBER(920);
	if (((jint)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_tickWaitThongBao) <= (150)) goto label_282;
	}
	{
	LINE_NUMBER(921);
	((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_tickWaitThongBao = (jint(0));
	LINE_NUMBER(922);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_thongBaoTest = (jobject(nullptr));
	}
label_282:;
	{
	LINE_NUMBER(926);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_289;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_289;
	}
	{
	LINE_NUMBER(927);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_291;
	}
	{
	LINE_NUMBER(928);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((func_nro_InfoMe_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_update])(ctx, sp[0].o);
	}
label_291:;
	{
	LINE_NUMBER(931);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	if (sp[0].o == nullptr) goto label_289;
	}
	{
	LINE_NUMBER(932);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	((func_nro_InfoMe_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_update])(ctx, sp[0].o);
	}
label_289:;
	{
	LINE_NUMBER(936);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerMove = (jint(0));
	LINE_NUMBER(937);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_doResetToLoginScr(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:doResetToLoginScr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(940);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"GAME_CANVAS_DO_RESET"_j));
	jint temp0 = 401;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ERR_SESSION_RESET"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"DO_RESET_TO_LOGIN_SCR"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"currentScreen="_j))));
	LINE_NUMBER(945);
	clinit_main_GameCanvas(ctx);
	sp[4].o = (jobject)SF_main_GameCanvas_currentScreen;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	jobject temp3 = sp[3].o;
	sp[3].o = temp2;
	jobject temp4 = sp[4].o;
	sp[4].o = temp3;
	sp += 5;
	if (temp4 == nullptr) goto label_6;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
label_7:;
	{
	sp -= 6;
	sp[4].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[4].o);
	LINE_NUMBER(940);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].i, sp[2].o, sp[3].o, sp[4].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(947);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(0));
	LINE_NUMBER(948);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(0));
	LINE_NUMBER(949);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	LINE_NUMBER(950);
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_isContinueToLogin = (jint(0));
	LINE_NUMBER(951);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bgType = (jint(0));
	LINE_NUMBER(952);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastType = (jint(0));
	LINE_NUMBER(953);
	SM_nro_Char_clearMyChar(ctx);
	LINE_NUMBER(954);
	SM_nro_GameScr_clearGameScr(ctx);
	LINE_NUMBER(955);
	SM_nro_AutoTrainMenu_resetSessionCommands(ctx);
	LINE_NUMBER(956);
	SM_nro_GameScr_resetAllvector(ctx);
	LINE_NUMBER(957);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(958);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	((func_nro_Info_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_hide])(ctx, sp[0].o);
	LINE_NUMBER(959);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	((func_nro_Info_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_hide])(ctx, sp[0].o);
	LINE_NUMBER(960);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdChat = (jref) (jobject(nullptr));
	LINE_NUMBER(961);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_currChatPopup = (jobject(nullptr));
	LINE_NUMBER(962);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isStopReadMessage = (jint(0));
	LINE_NUMBER(963);
	SM_nro_GameScr_SetNum_int_int(ctx, (jint(-1)), (jint(-1)));
	LINE_NUMBER(964);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_textTime;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(965);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = (100);
	LINE_NUMBER(966);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_currentTabIndex = (jint(0));
	LINE_NUMBER(967);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp += 1;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_29;
	}
	INST_ICONST(-1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 2;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_selected = sp[1].i;
	LINE_NUMBER(968);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTabTop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabTop])(ctx, sp[0].o);
	LINE_NUMBER(969);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_panel2 = (jobject(nullptr));
	LINE_NUMBER(970);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaint = (jint(1));
	LINE_NUMBER(971);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(972);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vClan;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(973);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vFriend;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(974);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vEnemies;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(975);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vCurrItem;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(976);
	SM_nro_BgItem_clearHashTable(ctx);
	LINE_NUMBER(977);
	clinit_nro_BackgroudEffect(ctx);
	sp[0].o = (jobject)SF_nro_BackgroudEffect_vBgEffect;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(978);
	clinit_nro_EffecMn(ctx);
	sp[0].o = (jobject)SF_nro_EffecMn_effId;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(979);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_newEff;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(980);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu = (jint(0));
	LINE_NUMBER(981);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow = (jint(0));
	LINE_NUMBER(982);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_vItemCombine;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(983);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_tabIcon;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(984);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_tabIcon;
	((nro_TabClanIcon *) NULL_CHECK(sp[0].o))->F_isShow = (jint(0));
	}
label_47:;
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(988);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(990);
	goto label_50;
label_2:;
	LINE_NUMBER(989);
	INST_ASTORE(0);
label_50:;
	{
	LINE_NUMBER(992);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isAutoConect = (jint(1));
	LINE_NUMBER(993);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(-1));
	LINE_NUMBER(994);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(995);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_ipSelect) != (jint(-1))) goto label_54;
	}
	{
	LINE_NUMBER(996);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	((func_nro_ServerScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerScr_switchToMe])(ctx, sp[0].o);
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(998);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o != nullptr) goto label_57;
	}
	{
	LINE_NUMBER(999);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerListScreen);
	init_nro_ServerListScreen(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScreen = sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(1002);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	}
label_56:;
	{
	LINE_NUMBER(1004);
	SM_nro_ServerListScreen_ConnectIP(ctx);
	LINE_NUMBER(1005);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:fillRect", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1008);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1009);
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmy;
	frame[1].i = temp0;
	if (temp0 <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_2;
	}
	{
	LINE_NUMBER(1010);
	frame[1].i = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	}
label_2:;
	{
	LINE_NUMBER(1013);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = frame[3].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[6].i) == 0) goto label_4;
	}
	{
	jint temp0 = (frame[1].i) >> (frame[6].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	jint temp0 = sp[0].i - sp[1].i;
	jint temp1 = frame[4].i;
	jint temp2 = frame[5].i;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp += 3;
	if ((frame[6].i) == 0) goto label_6;
	}
	{
	jint temp0 = (frame[1].i) >> (frame[6].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 6;
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, (sp[4].i + sp[5].i));
	LINE_NUMBER(1014);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:paintBackgroundtLayer", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1019);
	jint temp0 = (frame[1].i) - (jint(1));
	frame[5].i = temp0;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isRongThanXuatHien) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isFireWorks) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
label_8:;
	{
	LINE_NUMBER(1020);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, ((jint)((nro_GameScr *) NULL_CHECK(sp[1].o))->F_mautroi));
	LINE_NUMBER(1021);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(1022);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) == (jint(2))) goto label_11;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) == (jint(4))) goto label_11;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (7)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1023);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1024);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(1027);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isFireWorks) == 0) goto label_1;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(1028);
	SM_nro_Firework_paint_lib_mGraphics(ctx, (frame[0].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1031);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1034);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) == nullptr) { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	{
	LINE_NUMBER(1035);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_moveX;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) == 0) goto label_17;
	}
	{
	LINE_NUMBER(1036);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_moveX;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1037);
	sp[0].o = frame[6].o;
	jint temp0 = frame[5].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_moveXSpeed;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i))));
	}
label_17:;
	{
	LINE_NUMBER(1041);
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmy;
	frame[6].i = temp0;
	if (temp0 <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_21;
	}
	{
	LINE_NUMBER(1042);
	frame[6].i = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	}
label_21:;
	{
	LINE_NUMBER(1045);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW));
	frame[7].i = temp0;
	LINE_NUMBER(1046);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH));
	frame[8].i = temp1;
	LINE_NUMBER(1049);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_layerSpeed;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))) == 0) goto label_25;
	}
	{
	LINE_NUMBER(1050);
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmx;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_moveX;
	jint temp1 = temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_layerSpeed;
	jint temp2 = temp1 >> ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	frame[9].i = (-(temp2 % ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)))));
	}
label_27:;
	{
	LINE_NUMBER(1051);
	if ((frame[9].i) >= (frame[7].i)) goto label_28;
	}
	{
	LINE_NUMBER(1052);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i));
	jint temp0 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if ((frame[2].i) <= 0) goto label_30;
	}
	{
	jint temp0 = (frame[6].i) >> (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_ICONST(0);
label_31:;
	{
	sp -= 5;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, (sp[3].i - sp[4].i), (jint(0)));
	LINE_NUMBER(1051);
	jint temp0 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	frame[9].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(1055);
	frame[9].i = (jint(0));
	}
label_33:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_28;
	}
	{
	LINE_NUMBER(1056);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i));
	jint temp0 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[5].i));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if ((frame[2].i) <= 0) goto label_35;
	}
	{
	jint temp0 = (frame[6].i) >> (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_36;
	}
label_35:;
	INST_ICONST(0);
label_36:;
	{
	sp -= 5;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, (sp[3].i - sp[4].i), (jint(0)));
	LINE_NUMBER(1055);
	jint temp0 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	frame[9].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))));
	goto label_33;
	}
label_28:;
	{
	LINE_NUMBER(1060);
	if ((frame[3].i) == (jint(-1))) goto label_38;
	}
	{
	LINE_NUMBER(1061);
	if ((frame[5].i) != ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg) - (jint(1)))) goto label_40;
	}
	{
	LINE_NUMBER(1062);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = jint(0);
	jint temp2 = -((frame[6].i) >> (frame[2].i));
	jint temp3 = frame[7].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i))), (frame[2].i));
	goto label_38;
	}
label_40:;
	{
	LINE_NUMBER(1064);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) - (jint(1))));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp3 = temp2 + ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) - (jint(1)))));
	jint temp4 = frame[7].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) - (jint(1))));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, temp4, (temp5 - (temp6 + ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) - (jint(1))))))), (frame[2].i));
	}
label_38:;
	{
	LINE_NUMBER(1069);
	if ((frame[4].i) == (jint(-1))) goto label_42;
	}
	{
	LINE_NUMBER(1070);
	if ((frame[5].i) != 0) goto label_44;
	}
	{
	LINE_NUMBER(1071);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp3 = temp2 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i)));
	jint temp4 = frame[7].i;
	jint temp5 = frame[8].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, temp4, (temp5 - (temp6 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i))))), (frame[2].i));
	goto label_42;
	}
label_44:;
	{
	LINE_NUMBER(1073);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp3 = temp2 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i)));
	jint temp4 = frame[7].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) - (jint(1))));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, temp4, ((temp5 - (temp6 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i))))) + (80)), (frame[2].i));
	}
label_42:;
	{
	LINE_NUMBER(1078);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_46;
	}
	{
	LINE_NUMBER(1079);
	if ((frame[1].i) != (jint(1))) goto label_48;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (11)) goto label_48;
	}
	clinit_nro_TileMap(ctx);
	(sp++)->i = SF_nro_TileMap_bgType;
	if ((--sp)->i != 0) goto label_48;
	{
	LINE_NUMBER(1080);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgSun2;
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmx;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_layerSpeed;
	jint temp1 = (-(temp0 >> ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))))) + (400);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp1, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))) + (30)) - ((frame[6].i) >> (jint(2)))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	}
label_48:;
	{
	LINE_NUMBER(1084);
	if ((frame[1].i) != (jint(1))) goto label_50;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (13)) goto label_50;
	}
	{
	LINE_NUMBER(1085);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)));
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmx;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_layerSpeed;
	jint temp1 = (-(temp0 >> ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))))) + (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24)) / (jint(4)));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp1, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))) - ((frame[6].i) >> (jint(3)))) + (30)), (jint(0)));
	LINE_NUMBER(1087);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)));
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_bgW;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)));
	jint temp6 = jint(2);
	clinit_nro_GameScr(ctx);
	jint temp7 = (jint)SF_nro_GameScr_cmx;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_layerSpeed;
	jint temp8 = (-(temp7 >> ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))))) + (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (24)) / (jint(4)));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_bgW;
	jint temp9 = temp8 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1))));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp5, temp6, temp9, ((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)))) - ((frame[6].i) >> (jint(3)))) + (30)), (jint(0)));
	}
label_50:;
	{
	LINE_NUMBER(1091);
	if ((frame[1].i) != (jint(3))) goto label_46;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (jint(1))) goto label_46;
	}
	{
	LINE_NUMBER(1092);
	frame[9].i = (jint(0));
	}
label_54:;
	{
	jint temp0 = frame[9].i;
	clinit_nro_TileMap(ctx);
	jint temp1 = (jint)SF_nro_TileMap_pxh;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgCaycot;
	jint temp2 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	if (temp0 >= (temp1 / temp2)) goto label_46;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgCaycot;
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmx;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_layerSpeed;
	jint temp1 = (-(temp0 >> ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(2)))))) + (300);
	jint temp2 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgCaycot;
	LINE_NUMBER(1094);
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp4 = (temp2 * temp3) - ((frame[6].i) >> (jint(3)));
	jint temp5 = jint(0);
	LINE_NUMBER(1093);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp1, temp4, temp5);
	LINE_NUMBER(1092);
	INST_IINC(9, 1);
	goto label_54;
	}
label_46:;
	{
	LINE_NUMBER(1099);
	clinit_nro_GameScr(ctx);
	jint temp0 = (jint)SF_nro_GameScr_cmx;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_moveX;
	jint temp1 = temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_layerSpeed;
	frame[9].i = (-(temp1 >> ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)))));
	LINE_NUMBER(1100);
	sp[0].o = frame[0].o;
	jint temp2 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	SM_nro_EffecMn_paintBackGroundUnderLayer_lib_mGraphics_int_int_int(ctx, sp[0].o, temp2, ((temp3 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[5].i)))) - ((frame[6].i) >> (frame[2].i))), (frame[5].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1101);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	LINE_NUMBER(1105);
	goto label_60;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1103);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1104);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
label_60:;
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_drawSun1_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:drawSun1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1110);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSun;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1111);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgSun;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunX), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunY), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(1114);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isBoltEff) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1115);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (200)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1116);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_boltActive = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1119);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_boltActive) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1120);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_tBolt) + (jint(1));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_tBolt = temp0;
	if (temp0 != (10)) goto label_8;
	}
	{
	LINE_NUMBER(1121);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_tBolt = (jint(0));
	LINE_NUMBER(1122);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_boltActive = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1125);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_tBolt) % (jint(2))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1126);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16777215)));
	LINE_NUMBER(1127);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_3:;
	LINE_NUMBER(1132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_drawSun2_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:drawSun2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1135);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSun2;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1136);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgSun2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunX2), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunY2), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:paintBGGameScr", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1142);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isLoadBGok) != 0) goto label_65;
	}
	{
	LINE_NUMBER(1143);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1144);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_65:;
	{
	LINE_NUMBER(1147);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_68;
	}
	{
	LINE_NUMBER(1148);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW));
	frame[1].i = temp0;
	LINE_NUMBER(1149);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp2 = -temp1;
	jint temp3 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp2, (-temp3));
	LINE_NUMBER(1150);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1151);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1155);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_paintBG) == 0) { popExceptionFrames(frameRef, 1); goto label_61; }
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) { popExceptionFrames(frameRef, 1); goto label_61; }
	{
	LINE_NUMBER(1156);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1157);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (172)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (137)) goto label_75;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (115)) goto label_75;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (117)) goto label_75;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (118)) goto label_75;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (120)) goto label_75;
	}
	clinit_nro_TileMap(ctx);
	(sp++)->i = SF_nro_TileMap_isMapDouble;
	if ((--sp)->i == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
label_75:;
	{
	LINE_NUMBER(1159);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1160);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1164);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (138)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1165);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(6776679)));
	LINE_NUMBER(1166);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1167);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1171);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1172);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 6;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1173);
	sp[0].o = frame[0].o;
	jint temp3 = jint(3);
	jint temp4 = jint(4);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1174);
	sp[0].o = frame[0].o;
	jint temp6 = jint(2);
	jint temp7 = jint(3);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1175);
	sp[0].o = frame[0].o;
	jint temp9 = jint(1);
	jint temp10 = jint(2);
	jint temp11 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp9, temp10, temp11, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1176);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1179);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(1180);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(4)), (6), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1181);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(3)), (jint(3)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1182);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	jint temp1 = jint(0);
	jint temp2 = -((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(5)));
	jint temp3 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))), (jint(5)));
	LINE_NUMBER(1183);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	jint temp5 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp4, temp5, ((temp6 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(3)))), (frame[1].i), (70), (jint(3)));
	LINE_NUMBER(1184);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(2)), (jint(2)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1185);
	sp[0].o = frame[0].o;
	jint temp7 = jint(1);
	jint temp8 = jint(1);
	jint temp9 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp7, temp8, temp9, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1186);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1189);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(2))) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(1190);
	sp[0].o = frame[0].o;
	jint temp0 = jint(5);
	jint temp1 = 10;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)))));
	LINE_NUMBER(1191);
	sp[0].o = frame[0].o;
	jint temp3 = jint(4);
	jint temp4 = 8;
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1192);
	sp[0].o = frame[0].o;
	jint temp6 = jint(3);
	jint temp7 = jint(5);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1193);
	sp[0].o = frame[0].o;
	jint temp9 = jint(2);
	jint temp10 = jint(2);
	jint temp11 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp9, temp10, temp11, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1194);
	sp[0].o = frame[0].o;
	jint temp12 = jint(1);
	jint temp13 = jint(1);
	jint temp14 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp12, temp13, temp14, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1195);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1198);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(3))) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(1199);
	frame[2].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - ((325) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23)));
	LINE_NUMBER(1200);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (jint(0)), (-(frame[2].i)));
	LINE_NUMBER(1201);
	sp[0].o = frame[0].o;
	LINE_NUMBER(1202);
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp += 1;
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isRongThanXuatHien) != 0) goto label_98;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isFireWorks) != 0) goto label_98;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	goto label_99;
	}
label_98:;
	{
	LINE_NUMBER(1203);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mautroi;
	sp[0].i = temp0;
	sp += 1;
	}
label_99:;
	{
	sp -= 2;
	jint temp0 = jint(0);
	jint temp1 = (frame[2].i) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(3)));
	jint temp2 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = ((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(2)))) - (frame[2].i)) + ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(3)))) + (100);
	jint temp4 = jint(2);
	LINE_NUMBER(1201);
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, sp[1].i, temp0, temp1, temp2, temp3, temp4);
	LINE_NUMBER(1205);
	sp[0].o = frame[0].o;
	jint temp5 = jint(3);
	jint temp6 = jint(2);
	jint temp7 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp5, temp6, temp7, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1206);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(2)), (jint(0)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1207);
	sp[0].o = frame[0].o;
	jint temp8 = jint(1);
	jint temp9 = jint(0);
	jint temp10 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp8, temp9, temp10, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	LINE_NUMBER(1208);
	sp[0].o = frame[0].o;
	jint temp11 = jint(0);
	jint temp12 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp11, (-temp12));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1209);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1212);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(4))) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(1213);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 7;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))), (jint(-1)));
	LINE_NUMBER(1214);
	sp[0].o = frame[0].o;
	jint temp2 = jint(3);
	jint temp3 = jint(3);
	jint temp4 = jint(-1);
	sp[1].i = temp2;
	sp[2].i = temp3;
	sp[3].i = temp4;
	sp += 4;
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) <= (jint(1))) goto label_107;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorBotton;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	goto label_108;
	}
label_107:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_108:;
	{
	sp -= 5;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i);
	LINE_NUMBER(1215);
	sp[0].o = frame[0].o;
	jint temp0 = jint(2);
	jint temp1 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1216);
	sp[0].o = frame[0].o;
	jint temp3 = jint(1);
	jint temp4 = jint(1);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1217);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1220);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(5))) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(1221);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 15;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))), (jint(-1)));
	LINE_NUMBER(1222);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1223);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (100), (10));
	LINE_NUMBER(1224);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1225);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (-100), (-10));
	LINE_NUMBER(1226);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1227);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(3)), (10), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1228);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(2)), (6), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1229);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(1)), (jint(4)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1230);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (jint(0)), (27));
	LINE_NUMBER(1231);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(1)), (jint(2)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1232);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (jint(0)), (20));
	LINE_NUMBER(1233);
	sp[0].o = frame[0].o;
	jint temp2 = jint(1);
	jint temp3 = jint(2);
	jint temp4 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp2, temp3, temp4, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	LINE_NUMBER(1234);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp6 = -temp5;
	jint temp7 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp6, (-temp7));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1235);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1238);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (6)) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(1239);
	sp[0].o = frame[0].o;
	jint temp0 = jint(5);
	jint temp1 = 10;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)))));
	LINE_NUMBER(1240);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1241);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1242);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (60), (40));
	LINE_NUMBER(1243);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1244);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (-60), (-40));
	LINE_NUMBER(1245);
	sp[0].o = frame[0].o;
	jint temp3 = jint(4);
	jint temp4 = 7;
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1246);
	SM_nro_BackgroudEffect_paintFar_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1247);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(3)), (jint(4)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1248);
	sp[0].o = frame[0].o;
	jint temp6 = jint(2);
	jint temp7 = jint(3);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1249);
	sp[0].o = frame[0].o;
	jint temp9 = jint(1);
	jint temp10 = jint(2);
	jint temp11 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp9, temp10, temp11, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1250);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1253);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (7)) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(1254);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 6;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1255);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(3)), (jint(5)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1256);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(2)), (jint(4)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1257);
	sp[0].o = frame[0].o;
	jint temp3 = jint(1);
	jint temp4 = jint(3);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1258);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1261);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) == (8)) { popExceptionFrames(frameRef, 1); goto label_58; }
	}
	{
	LINE_NUMBER(1262);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (9)) { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	LINE_NUMBER(1263);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 8;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1264);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1265);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1266);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (-80), (20));
	LINE_NUMBER(1267);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1268);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (80), (-20));
	LINE_NUMBER(1269);
	SM_nro_BackgroudEffect_paintFar_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1270);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(3)), (jint(5)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1271);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(2)), (jint(3)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1272);
	sp[0].o = frame[0].o;
	jint temp3 = jint(1);
	jint temp4 = jint(2);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1273);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1276);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (10)) { popExceptionFrames(frameRef, 1); goto label_37; }
	}
	{
	LINE_NUMBER(1277);
	frame[2].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - ((380) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23)));
	LINE_NUMBER(1278);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[0].o), (jint(0)), (-(frame[2].i)));
	LINE_NUMBER(1279);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp += 1;
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isRongThanXuatHien) == 0) goto label_154;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mautroi;
	sp[0].i = temp0;
	sp += 1;
	goto label_155;
	}
label_154:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_155:;
	{
	sp -= 2;
	jint temp0 = jint(0);
	jint temp1 = (frame[2].i) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(2)));
	jint temp2 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_yb;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, sp[1].i, temp0, temp1, temp2, (((((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)))) - (frame[2].i)) + ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(2)))) + (100)), (jint(2)));
	LINE_NUMBER(1281);
	sp[0].o = frame[0].o;
	jint temp3 = jint(2);
	jint temp4 = jint(2);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1282);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1283);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1284);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(1)), (jint(0)), (jint(-1)), (jint(-1)));
	LINE_NUMBER(1285);
	sp[0].o = frame[0].o;
	jint temp6 = jint(0);
	jint temp7 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp6, (-temp7));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1286);
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1289);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (11)) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(1290);
	sp[0].o = frame[0].o;
	jint temp0 = jint(3);
	jint temp1 = 6;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1291);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1292);
	sp[0].o = frame[0].o;
	jint temp3 = jint(2);
	jint temp4 = jint(3);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1293);
	sp[0].o = frame[0].o;
	jint temp6 = jint(1);
	jint temp7 = jint(2);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1294);
	popStackFrame(ctx);
	INST_RETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1297);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (12)) { popExceptionFrames(frameRef, 1); goto label_43; }
	}
	{
	LINE_NUMBER(1298);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(9161471)));
	LINE_NUMBER(1299);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(1300);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(3)), (jint(4)), (jint(-1)), (jint(14417919)));
	LINE_NUMBER(1301);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(2)), (jint(3)), (jint(-1)), (jint(14417919)));
	LINE_NUMBER(1302);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(1)), (jint(2)), (jint(-1)), (jint(14417919)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1303);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
label_45: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1306);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (13)) { popExceptionFrames(frameRef, 1); goto label_46; }
	}
	{
	LINE_NUMBER(1307);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(15268088)));
	LINE_NUMBER(1308);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(1309);
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (jint(1)), (jint(5)), (jint(-1)), (jint(15268088)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1310);
	popStackFrame(ctx);
	INST_RETURN();
label_46:;
label_48: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1313);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (15)) { popExceptionFrames(frameRef, 1); goto label_49; }
	}
	{
	LINE_NUMBER(1314);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(2631752)));
	LINE_NUMBER(1315);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(1316);
	sp[0].o = frame[0].o;
	jint temp0 = jint(2);
	jint temp1 = jint(3);
	jint temp2 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1317);
	sp[0].o = frame[0].o;
	jint temp3 = jint(1);
	jint temp4 = jint(2);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1318);
	popStackFrame(ctx);
	INST_RETURN();
label_49:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1321);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) == (16)) { popExceptionFrames(frameRef, 1); goto label_55; }
	}
	{
	LINE_NUMBER(1322);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (19)) { popExceptionFrames(frameRef, 1); goto label_52; }
	}
	{
	LINE_NUMBER(1323);
	sp[0].o = frame[0].o;
	jint temp0 = jint(5);
	jint temp1 = 10;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)))));
	LINE_NUMBER(1324);
	sp[0].o = frame[0].o;
	jint temp3 = jint(4);
	jint temp4 = 8;
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1325);
	sp[0].o = frame[0].o;
	jint temp6 = jint(3);
	jint temp7 = jint(5);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1326);
	sp[0].o = frame[0].o;
	jint temp9 = jint(2);
	jint temp10 = jint(2);
	jint temp11 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp9, temp10, temp11, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1327);
	sp[0].o = frame[0].o;
	jint temp12 = jint(1);
	jint temp13 = jint(1);
	jint temp14 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp12, temp13, temp14, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1328);
	popStackFrame(ctx);
	INST_RETURN();
label_52:;
label_54: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1331);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp3 = temp2 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))));
	jint temp4 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, temp4, (temp5 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))), (6));
	LINE_NUMBER(1332);
	sp[0].o = frame[0].o;
	jint temp6 = jint(4);
	jint temp7 = 6;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp8 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1333);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1334);
	sp[0].o = frame[0].o;
	jint temp9 = jint(3);
	jint temp10 = jint(4);
	jint temp11 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp9, temp10, temp11, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1335);
	sp[0].o = frame[0].o;
	jint temp12 = jint(2);
	jint temp13 = jint(3);
	jint temp14 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp12, temp13, temp14, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1336);
	sp[0].o = frame[0].o;
	jint temp15 = jint(1);
	jint temp16 = jint(2);
	jint temp17 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp15, temp16, temp17, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1337);
	popStackFrame(ctx);
	INST_RETURN();
label_55:;
label_57: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1340);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 6;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1342);
	frame[2].i = (jint(0));
	}
label_189:;
	{
	jint temp0 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_190;
	}
	{
	LINE_NUMBER(1343);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_cloudX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_cloudY;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))), (33));
	LINE_NUMBER(1342);
	INST_IINC(2, 1);
	goto label_189;
	}
label_190:;
	{
	LINE_NUMBER(1346);
	sp[0].o = frame[0].o;
	jint temp0 = jint(3);
	jint temp1 = jint(4);
	jint temp2 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1347);
	sp[0].o = frame[0].o;
	jint temp3 = jint(2);
	jint temp4 = jint(3);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1348);
	sp[0].o = frame[0].o;
	jint temp6 = jint(1);
	jint temp7 = jint(2);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1349);
	popStackFrame(ctx);
	INST_RETURN();
label_58:;
label_60: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1352);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jint temp1 = 8;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(1353);
	SM_main_GameCanvas_drawSun1_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1354);
	SM_main_GameCanvas_drawSun2_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(1355);
	sp[0].o = frame[0].o;
	jint temp3 = jint(3);
	jint temp4 = jint(4);
	jint temp5 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp3, temp4, temp5, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	LINE_NUMBER(1356);
	sp[0].o = frame[0].o;
	jint temp6 = jint(2);
	jint temp7 = jint(2);
	jint temp8 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp6, temp7, temp8, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1357);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) < (92)) goto label_200;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) <= (96)) goto label_201;
	}
label_200:;
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (51)) goto label_201;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (52)) goto label_202;
	}
label_201:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_203; }
	}
label_202:;
	{
	LINE_NUMBER(1359);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = jint(1);
	jint temp2 = jint(-1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_colorBotton;
	SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1360);
	popStackFrame(ctx);
	INST_RETURN();
label_61:;
label_63: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1363);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(2315859)));
	LINE_NUMBER(1364);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(1365);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_tam;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_203; }
	}
	{
	LINE_NUMBER(1366);
	jint temp0 = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) >> (jint(2));
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_tam;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = (-(temp0 % temp1));
	}
label_207:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_208;
	}
	{
	LINE_NUMBER(1368);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_tam;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), ((((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(3))) + ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2)))) - (50)), (jint(0)));
	LINE_NUMBER(1366);
	jint temp0 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_tam;
	LINE_NUMBER(1367);
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = (temp0 + temp1);
	goto label_207;
	}
label_208:;
	{
	LINE_NUMBER(1371);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(5084791)));
	LINE_NUMBER(1372);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) >> (jint(3))) + ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2)))) - (50);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_tam;
	jint temp2 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, sp[0].o, temp0, (temp1 + temp2), (frame[1].i), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1373);
	popStackFrame(ctx);
	INST_RETURN();
label_203:;
	LINE_NUMBER(1379);
	goto label_68;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1376);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1377);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1378);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_68:;
	LINE_NUMBER(1382);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_getYBackground_int(jcontext ctx, jint param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:getYBackground", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1386);
	frame[1].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23);
	LINE_NUMBER(1387);
	switch((frame[0].i)) {
		case 0: goto label_56;
		case 1: { popExceptionFrames(frameRef, 1); goto label_4; }
		case 2: { popExceptionFrames(frameRef, 1); goto label_7; }
		case 3: { popExceptionFrames(frameRef, 1); goto label_10; }
		case 4: { popExceptionFrames(frameRef, 1); goto label_13; }
		case 5: { popExceptionFrames(frameRef, 1); goto label_16; }
		case 6: { popExceptionFrames(frameRef, 1); goto label_19; }
		case 7: { popExceptionFrames(frameRef, 1); goto label_22; }
		case 8: { popExceptionFrames(frameRef, 1); goto label_25; }
		case 9: { popExceptionFrames(frameRef, 1); goto label_28; }
		case 10: { popExceptionFrames(frameRef, 1); goto label_31; }
		case 11: { popExceptionFrames(frameRef, 1); goto label_34; }
		case 12: { popExceptionFrames(frameRef, 1); goto label_37; }
		case 13: { popExceptionFrames(frameRef, 1); goto label_40; }
		case 14: { popExceptionFrames(frameRef, 1); goto label_43; }
		case 15: { popExceptionFrames(frameRef, 1); goto label_46; }
		case 16: { popExceptionFrames(frameRef, 1); goto label_49; }
		case 17: { popExceptionFrames(frameRef, 1); goto label_43; }
		case 18: { popExceptionFrames(frameRef, 1); goto label_43; }
		case 19: { popExceptionFrames(frameRef, 1); goto label_52; }
		default: { bypasses[1] = true; goto label_43; } // goto label_43
	}
	}
label_56:;
	{
	LINE_NUMBER(1389);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (70));
	LINE_NUMBER(1390);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (20));
	LINE_NUMBER(1391);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (30));
	LINE_NUMBER(1392);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) + (50));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1393);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1395);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (120));
	LINE_NUMBER(1396);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (40));
	LINE_NUMBER(1397);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))) - (90));
	LINE_NUMBER(1398);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp5) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) - (25));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1401);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (150));
	LINE_NUMBER(1402);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) - (60));
	LINE_NUMBER(1403);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (40));
	LINE_NUMBER(1404);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) - (10));
	LINE_NUMBER(1405);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp8 = jint(4);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp9 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp8) = (temp9 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1406);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1408);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (10));
	LINE_NUMBER(1409);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))) + (80));
	LINE_NUMBER(1410);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = ((temp4 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (10));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1411);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1413);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (130));
	LINE_NUMBER(1414);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	LINE_NUMBER(1415);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (20));
	LINE_NUMBER(1416);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (80));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1417);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1419);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (40));
	LINE_NUMBER(1420);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (10));
	LINE_NUMBER(1421);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (15));
	LINE_NUMBER(1422);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) + (50));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1423);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1425);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (100));
	LINE_NUMBER(1426);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) - (30));
	LINE_NUMBER(1427);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (10));
	LINE_NUMBER(1428);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) + (15));
	LINE_NUMBER(1429);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp8 = jint(4);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp9 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp8) = ((temp9 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4))))) + (15));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1430);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1432);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (20));
	LINE_NUMBER(1433);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (15));
	LINE_NUMBER(1434);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (20));
	LINE_NUMBER(1435);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (10));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1436);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1438);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (((frame[1].i) - (103)) + (150));
	LINE_NUMBER(1439);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (103)) goto label_83;
	}
	{
	LINE_NUMBER(1440);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1441);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (100));
	}
label_83:;
	{
	LINE_NUMBER(1444);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) - (10));
	LINE_NUMBER(1445);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (40));
	LINE_NUMBER(1446);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) + (10));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1447);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1449);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (100));
	LINE_NUMBER(1450);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (22));
	LINE_NUMBER(1451);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (50));
	LINE_NUMBER(1452);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = (temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1453);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1455);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) - (45));
	LINE_NUMBER(1456);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) - (10));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1457);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1459);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (60));
	LINE_NUMBER(1460);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (jint(5)));
	LINE_NUMBER(1461);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (15));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1462);
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1464);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((frame[1].i) + (40));
	LINE_NUMBER(1465);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))) - (40));
	LINE_NUMBER(1466);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp1 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))) - (40));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1467);
	popStackFrame(ctx);
	INST_RETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1469);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((frame[1].i) - (80));
	LINE_NUMBER(1470);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1471);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
label_45: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1476);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (75));
	LINE_NUMBER(1477);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (50));
	LINE_NUMBER(1478);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (50));
	LINE_NUMBER(1479);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) + (90));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1480);
	popStackFrame(ctx);
	INST_RETURN();
label_46:;
label_48: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1482);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((frame[1].i) - (20));
	LINE_NUMBER(1483);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))) - (80));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1484);
	popStackFrame(ctx);
	INST_RETURN();
label_49:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1486);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (75));
	LINE_NUMBER(1487);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (50));
	LINE_NUMBER(1488);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) + (50));
	LINE_NUMBER(1489);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) + (90));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1490);
	popStackFrame(ctx);
	INST_RETURN();
label_52:;
label_54: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1492);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp0 = jint(0);
	jint temp1 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))))) + (150));
	LINE_NUMBER(1493);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp2 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((temp3 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) - (60));
	LINE_NUMBER(1494);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp4 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp5 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((temp5 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))))) - (40));
	LINE_NUMBER(1495);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp6 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp7 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((temp7 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))))) - (10));
	LINE_NUMBER(1496);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	jint temp8 = jint(4);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	jint temp9 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)));
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_bgH;
	ARRAY_ACCESS(jint, sp[0].o, temp8) = (temp9 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4)))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1503);
	goto label_108;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1498);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1499);
	frame[0].i = (jint(0));
	}
label_110:;
	{
	jint temp0 = frame[0].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_108;
	}
	{
	LINE_NUMBER(1500);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)) = (jint(1));
	LINE_NUMBER(1499);
	INST_IINC(0, 1);
	goto label_110;
	}
label_108:;
	LINE_NUMBER(1504);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_loadBG_int(jcontext ctx, jint param0) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:loadBG", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1508);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isLoadBGok = (jint(1));
	LINE_NUMBER(1509);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (12)) goto label_15;
	}
	{
	LINE_NUMBER(1510);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_yfog = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) - (100));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(1512);
	clinit_nro_BackgroudEffect(ctx);
	SF_nro_BackgroudEffect_yfog = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) - (160));
	}
label_17:;
	{
	LINE_NUMBER(1515);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"load bg id= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"map ID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1516);
	SM_nro_BackgroudEffect_clearImage(ctx);
	LINE_NUMBER(1517);
	SM_main_GameCanvas_randomRaintEff_int(ctx, (frame[0].i));
	LINE_NUMBER(1518);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_lastBgID) != (frame[0].i)) goto label_21;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_lastType) != (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType)) goto label_21;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_imgBG;
	if ((--sp)->o == nullptr) goto label_21;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_21;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))) != nullptr) goto label_5;
	}
label_21:;
	{
	if ((frame[0].i) != (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1520);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1523);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_transY = (12);
	LINE_NUMBER(1524);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastBgID = (jbyte((frame[0].i)));
	LINE_NUMBER(1525);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastType = (jbyte((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType)));
	LINE_NUMBER(1526);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (8);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_layerSpeed = sp[0].o;
	LINE_NUMBER(1527);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1528);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1529);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_typeBg = (frame[0].i);
	LINE_NUMBER(1530);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isBoltEff = (jint(0));
	LINE_NUMBER(1531);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1532);
	frame[1].i = (jint(0));
	}
label_32:;
	{
	jint temp0 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_30;
	}
	{
	LINE_NUMBER(1533);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	LINE_NUMBER(1534);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(1532);
	INST_IINC(1, 1);
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(1537);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(1538);
	frame[1].i = (jint(0));
	}
label_38:;
	{
	jint temp0 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_36;
	}
	{
	LINE_NUMBER(1539);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	LINE_NUMBER(1540);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(1538);
	INST_IINC(1, 1);
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(1543);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSun;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(1544);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSun2;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(1545);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgCaycot;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(1546);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_tam;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(1547);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterfall;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(1548);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterfall = (jobject(nullptr));
	LINE_NUMBER(1549);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgBG = (jobject(nullptr));
	LINE_NUMBER(1550);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = (jobject(nullptr));
	LINE_NUMBER(1551);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = (jobject(nullptr));
	LINE_NUMBER(1552);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgCaycot = (jobject(nullptr));
	LINE_NUMBER(1553);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_tam = (jobject(nullptr));
	LINE_NUMBER(1554);
	switch((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg)) {
		case 0: goto label_53;
		case 1: goto label_54;
		case 2: goto label_55;
		case 3: goto label_56;
		case 4: goto label_57;
		case 5: goto label_58;
		case 6: goto label_59;
		case 7: goto label_60;
		case 8: goto label_61;
		case 9: goto label_62;
		case 10: goto label_63;
		case 11: goto label_64;
		case 12: goto label_65;
		case 13: goto label_66;
		case 14: goto label_67;
		case 15: goto label_68;
		case 16: goto label_69;
		case 17: goto label_67;
		case 18: goto label_67;
		case 19: goto label_70;
		default: goto label_67;
	}
	}
label_53:;
	{
	LINE_NUMBER(1556);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/caycot.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgCaycot = sp[0].o;
	LINE_NUMBER(1557);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_layerSpeed = sp[0].o;
	LINE_NUMBER(1558);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1559);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != (jint(2))) goto label_74;
	}
	{
	LINE_NUMBER(1560);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_transY = (8);
	goto label_74;
	}
label_54:;
	{
	LINE_NUMBER(1564);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_transY = (7);
	LINE_NUMBER(1565);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1566);
	goto label_74;
	}
label_55:;
	{
	LINE_NUMBER(1568);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1569);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1570);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(5));
	LINE_NUMBER(1571);
	goto label_74;
	}
label_56:;
	{
	LINE_NUMBER(1573);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(3));
	LINE_NUMBER(1574);
	goto label_74;
	}
label_57:;
	{
	LINE_NUMBER(1576);
	SM_nro_BackgroudEffect_addEffect_int(ctx, (jint(3)));
	LINE_NUMBER(1577);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1578);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1579);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1580);
	goto label_74;
	}
label_58:;
	{
	LINE_NUMBER(1582);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1583);
	goto label_74;
	}
label_59:;
	{
	LINE_NUMBER(1585);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1586);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1587);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(5));
	LINE_NUMBER(1588);
	goto label_74;
	}
label_60:;
	{
	LINE_NUMBER(1590);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1591);
	goto label_74;
	}
label_61:;
	{
	LINE_NUMBER(1593);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_transY = (8);
	LINE_NUMBER(1594);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1595);
	goto label_74;
	}
label_62:;
	{
	LINE_NUMBER(1597);
	SM_nro_BackgroudEffect_addEffect_int(ctx, (9));
	LINE_NUMBER(1598);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1599);
	goto label_74;
	}
label_63:;
	{
	LINE_NUMBER(1601);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(2));
	LINE_NUMBER(1602);
	goto label_74;
	}
label_64:;
	{
	LINE_NUMBER(1604);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_transY = (7);
	LINE_NUMBER(1605);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_layerSpeed;
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(1606);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(3));
	LINE_NUMBER(1607);
	goto label_74;
	}
label_65:;
	{
	LINE_NUMBER(1609);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1610);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1611);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(3));
	LINE_NUMBER(1612);
	goto label_74;
	}
label_66:;
	{
	LINE_NUMBER(1614);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(2));
	LINE_NUMBER(1615);
	goto label_74;
	}
label_67:;
	{
	LINE_NUMBER(1620);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_layerSpeed = sp[0].o;
	LINE_NUMBER(1621);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1622);
	goto label_74;
	}
label_68:;
	{
	LINE_NUMBER(1624);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"HELL"_j))));
	LINE_NUMBER(1625);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(2));
	LINE_NUMBER(1626);
	goto label_74;
	}
label_69:;
	{
	LINE_NUMBER(1628);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_layerSpeed = sp[0].o;
	LINE_NUMBER(1629);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(4));
	LINE_NUMBER(1630);
	goto label_74;
	}
label_70:;
	{
	LINE_NUMBER(1632);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1633);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1634);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(5));
	}
label_74:;
	{
	LINE_NUMBER(1638);
	if ((frame[0].i) > (16)) goto label_0;
	}
	{
	LINE_NUMBER(1639);
	clinit_nro_StaticObj(ctx);
	sp[0].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_skyColor = ((jint)ARRAY_ACCESS(jint, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg)));
	goto label_112;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1642);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/b"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1643);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) == 0) goto label_114;
	}
	{
	LINE_NUMBER(1644);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/b"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_114:;
	{
	LINE_NUMBER(1647);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1648);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1649);
	if ((frame[3].o) == nullptr) goto label_118;
	}
	{
	LINE_NUMBER(1650);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(ctx, (frame[3].o));
	((func_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, (temp2 / (jint(2))), (jint(0)), (jint(1)), (jint(1)));
	LINE_NUMBER(1651);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_skyColor = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(1652);
	((func_javax_microedition_lcdui_Image_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_dispose])(ctx, (frame[3].o));
	goto label_1;
	}
label_118:;
	{
	LINE_NUMBER(1654);
	clinit_nro_StaticObj(ctx);
	sp[0].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	clinit_nro_StaticObj(ctx);
	sp[1].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_skyColor = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)))));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1658);
	goto label_112;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1656);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1657);
	clinit_nro_StaticObj(ctx);
	sp[0].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	clinit_nro_StaticObj(ctx);
	sp[1].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_skyColor = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)))));
	}
label_112:;
	{
	LINE_NUMBER(1661);
	clinit_nro_StaticObj(ctx);
	sp[0].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_colorTop = sp[0].o;
	LINE_NUMBER(1662);
	clinit_nro_StaticObj(ctx);
	sp[0].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_colorBotton = sp[0].o;
	LINE_NUMBER(1665);
	frame[2].i = (jint(0));
	}
label_125:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_StaticObj(ctx);
	sp[0].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_126;
	}
	{
	LINE_NUMBER(1666);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorTop;
	jint temp0 = frame[2].i;
	clinit_nro_StaticObj(ctx);
	sp[1].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	LINE_NUMBER(1667);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorBotton;
	jint temp1 = frame[2].i;
	clinit_nro_StaticObj(ctx);
	sp[1].o = (jobject)SF_nro_StaticObj_SKYCOLOR;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	LINE_NUMBER(1665);
	INST_IINC(2, 1);
	goto label_125;
	}
label_126:;
	{
	LINE_NUMBER(1670);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) == 0) { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	{
	LINE_NUMBER(1671);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/b63.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_tam = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1672);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1675);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgBG = sp[0].o;
	LINE_NUMBER(1676);
	sp[0].o = (jobject) createArray(ctx, &class_int, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_bgW = sp[0].o;
	LINE_NUMBER(1677);
	sp[0].o = (jobject) createArray(ctx, &class_int, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_bgH = sp[0].o;
	LINE_NUMBER(1678);
	sp[0].o = (jobject) createArray(ctx, &class_int, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_colorBotton = sp[0].o;
	LINE_NUMBER(1679);
	sp[0].o = (jobject) createArray(ctx, &class_int, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_colorTop = sp[0].o;
	LINE_NUMBER(1680);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != (100)) goto label_136;
	}
	{
	LINE_NUMBER(1681);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp0 = jint(0);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/b100.png"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1682);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp1 = jint(1);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/b100.png"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1683);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp2 = jint(2);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/b82-1.png"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(1684);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp3 = jint(3);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/b93.png"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	LINE_NUMBER(1686);
	frame[2].i = (jint(0));
	}
label_142:;
	{
	if ((frame[2].i) >= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg)) goto label_143;
	}
	{
	LINE_NUMBER(1687);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_145;
	}
	{
	LINE_NUMBER(1688);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1689);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp2 = (jint)SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	((func_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, (temp2 / (jint(2))), (jint(0)), (jint(1)), (jint(1)));
	LINE_NUMBER(1690);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorTop;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(1691);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1692);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	jint temp3 = jint(0);
	jint temp4 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp5 = (jint)SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	jint temp6 = temp5 / (jint(2));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i));
	LINE_NUMBER(1693);
	jint temp7 = (jint)SM_lib_mGraphics_getRealImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp8 = temp7 - (jint(1));
	jint temp9 = jint(1);
	jint temp10 = jint(1);
	LINE_NUMBER(1692);
	((func_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp3, temp4, temp6, temp8, temp9, temp10);
	LINE_NUMBER(1694);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorBotton;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(1695);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	jint temp11 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp12 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp11) = temp12;
	LINE_NUMBER(1696);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp13 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp14 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp13) = temp14;
	goto label_156;
	}
label_145:;
	{
	LINE_NUMBER(1697);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg) <= (jint(1))) goto label_156;
	}
	{
	LINE_NUMBER(1698);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp0 = frame[2].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/bg/b"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"0.png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1699);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	jint temp1 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp1) = temp2;
	LINE_NUMBER(1700);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp3 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp4 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp3) = temp4;
	}
label_156:;
	{
	LINE_NUMBER(1686);
	INST_IINC(2, 1);
	goto label_142;
	}
label_136:;
	{
	LINE_NUMBER(1704);
	frame[2].i = (jint(0));
	}
label_160:;
	{
	if ((frame[2].i) >= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg)) goto label_143;
	}
	{
	LINE_NUMBER(1705);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/b"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1706);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) == 0) goto label_163;
	}
	{
	LINE_NUMBER(1707);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/b"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_163:;
	{
	LINE_NUMBER(1710);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1711);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_166;
	}
	{
	LINE_NUMBER(1712);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1713);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp2 = (jint)SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	((func_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, (temp2 / (jint(2))), (jint(0)), (jint(1)), (jint(1)));
	LINE_NUMBER(1714);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorTop;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0))));
	LINE_NUMBER(1715);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1716);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[4].o;
	jint temp3 = jint(0);
	jint temp4 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp5 = (jint)SM_lib_mGraphics_getRealImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	jint temp6 = temp5 / (jint(2));
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_imgBG;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i));
	LINE_NUMBER(1717);
	jint temp7 = (jint)SM_lib_mGraphics_getRealImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp8 = temp7 - (jint(1));
	jint temp9 = jint(1);
	jint temp10 = jint(1);
	LINE_NUMBER(1716);
	((func_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getRGB_Array1_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp3, temp4, temp6, temp8, temp9, temp10);
	LINE_NUMBER(1718);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_colorBotton;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0))));
	LINE_NUMBER(1719);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	jint temp11 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp12 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp11) = temp12;
	LINE_NUMBER(1720);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp13 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp14 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp13) = temp14;
	LINE_NUMBER(1721);
	goto label_178;
	}
label_166:;
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_nBg) <= (jint(1))) goto label_178;
	}
	{
	LINE_NUMBER(1722);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp0 = frame[2].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/bg/b"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"0.png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1723);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgW;
	jint temp1 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp1) = temp2;
	LINE_NUMBER(1724);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgH;
	jint temp3 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBG;
	jint temp4 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jint, sp[0].o, temp3) = temp4;
	}
label_178:;
	{
	LINE_NUMBER(1704);
	INST_IINC(2, 1);
	goto label_160;
	}
label_143:;
	{
	LINE_NUMBER(1729);
	SM_main_GameCanvas_getYBackground_int(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	LINE_NUMBER(1730);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"5"_j))));
	LINE_NUMBER(1731);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (40));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) + (40));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (100));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (80));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (120));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_cloudX = sp[0].o;
	LINE_NUMBER(1733);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (130);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (100);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (150);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (140);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (80);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_cloudY = sp[0].o;
	LINE_NUMBER(1734);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSunSpec = (jobject(nullptr));
	LINE_NUMBER(1735);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) == 0) goto label_187;
	}
	{
	LINE_NUMBER(1736);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(2))) goto label_189;
	}
	{
	LINE_NUMBER(1737);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/sun0.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1738);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) + (50));
	LINE_NUMBER(1739);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) - (40));
	LINE_NUMBER(1740);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/wts"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterfall = sp[0].o;
	goto label_187;
	}
label_189:;
	{
	LINE_NUMBER(1741);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (19)) goto label_194;
	}
	{
	LINE_NUMBER(1742);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/water_flow_32"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterfall = sp[0].o;
	goto label_187;
	}
label_194:;
	{
	LINE_NUMBER(1743);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(4))) goto label_196;
	}
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/sun2.png"_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1745);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) + (30));
	LINE_NUMBER(1746);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3))));
	goto label_187;
	}
label_196:;
	{
	LINE_NUMBER(1747);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (7)) goto label_200;
	}
	{
	LINE_NUMBER(1748);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun3"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_202;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_203;
label_202:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_203:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1749);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun4"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_205;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_206;
label_205:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_206:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1750);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(3))));
	LINE_NUMBER(1751);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) - (80));
	LINE_NUMBER(1752);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX2 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunX) - (100));
	LINE_NUMBER(1753);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY2 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) - (30));
	goto label_187;
	}
label_200:;
	{
	LINE_NUMBER(1754);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (6)) goto label_211;
	}
	{
	LINE_NUMBER(1755);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun5"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_213;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_214;
label_213:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_214:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1756);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun6"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_216;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_217;
label_216:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_217:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1757);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(3))));
	LINE_NUMBER(1758);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4))));
	LINE_NUMBER(1759);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX2 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunX) - (100));
	LINE_NUMBER(1760);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY2 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) + (20));
	goto label_187;
	}
label_211:;
	{
	LINE_NUMBER(1761);
	if ((frame[0].i) != (jint(5))) goto label_222;
	}
	{
	LINE_NUMBER(1762);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun8"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_224;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_225;
label_224:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_225:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1763);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun7"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_227;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_228;
label_227:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_228:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1764);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (50));
	LINE_NUMBER(1765);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) + (20));
	LINE_NUMBER(1766);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX2 = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) + (20));
	LINE_NUMBER(1767);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY2 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) - (30));
	goto label_187;
	}
label_222:;
	{
	LINE_NUMBER(1768);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (8)) goto label_233;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) >= (90)) goto label_233;
	}
	{
	LINE_NUMBER(1769);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun9"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_235;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_236;
label_235:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_236:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1770);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun10"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_238;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_239;
label_238:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_239:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1771);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (30));
	LINE_NUMBER(1772);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) + (60));
	LINE_NUMBER(1773);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX2 = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) + (20));
	LINE_NUMBER(1774);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY2 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) + (10));
	goto label_187;
	}
label_233:;
	{
	LINE_NUMBER(1775);
	if ((frame[0].i) != (9)) goto label_244;
	}
	{
	LINE_NUMBER(1776);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun11"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_246;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_247;
label_246:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_247:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1777);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun12"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_249;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_250;
label_249:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_250:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1778);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(3))));
	LINE_NUMBER(1779);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) + (20));
	LINE_NUMBER(1780);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX2 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunX) - (80));
	LINE_NUMBER(1781);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY2 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) + (40));
	goto label_187;
	}
label_244:;
	{
	LINE_NUMBER(1782);
	if ((frame[0].i) != (10)) goto label_255;
	}
	{
	LINE_NUMBER(1783);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun13"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_257;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_258;
label_257:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_258:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1784);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun14"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_260;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_261;
label_260:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_261:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1785);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(3))));
	LINE_NUMBER(1786);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) - (30));
	LINE_NUMBER(1787);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX2 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_sunX) - (80));
	LINE_NUMBER(1788);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY2 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))));
	goto label_187;
	}
label_255:;
	{
	LINE_NUMBER(1789);
	if ((frame[0].i) != (11)) goto label_266;
	}
	{
	LINE_NUMBER(1790);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun15"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_268;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_269;
label_268:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_269:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1791);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/b113"_j))));
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_271;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_272;
label_271:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_272:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = sp[0].o;
	LINE_NUMBER(1792);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2))) - (30));
	LINE_NUMBER(1793);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))) - (30));
	goto label_187;
	}
label_266:;
	{
	LINE_NUMBER(1794);
	if ((frame[0].i) != (12)) goto label_275;
	}
	{
	LINE_NUMBER(1795);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (200);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (170);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (220);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (150);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (250);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_cloudY = sp[0].o;
	goto label_187;
	}
label_275:;
	{
	LINE_NUMBER(1796);
	if ((frame[0].i) == (16)) goto label_277;
	}
	{
	LINE_NUMBER(1797);
	if ((frame[0].i) != (19)) goto label_279;
	}
	{
	LINE_NUMBER(1798);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveX = sp[0].o;
	LINE_NUMBER(1799);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveXSpeed = sp[0].o;
	LINE_NUMBER(1800);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(5));
	goto label_187;
	}
label_279:;
	{
	LINE_NUMBER(1802);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = (jobject(nullptr));
	LINE_NUMBER(1803);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun2 = (jobject(nullptr));
	LINE_NUMBER(1804);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/bg/sun"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(1805);
	sp += 1;
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType) != 0) goto label_286;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_287;
label_286:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_bgType));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_287:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSun = sp[0].o;
	LINE_NUMBER(1806);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/tWater/water_flow_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1807);
	if ((frame[3].o) == nullptr) goto label_290;
	}
	{
	LINE_NUMBER(1808);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterfall;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(1809);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterfall = (frame[3].o);
	}
label_290:;
	{
	LINE_NUMBER(1812);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(3))));
	LINE_NUMBER(1813);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_yb;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_sunY = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))) - (30));
	LINE_NUMBER(1814);
	goto label_187;
	}
label_277:;
	{
	LINE_NUMBER(1816);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (90);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (170);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (250);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (320);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (400);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (450);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (500);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_cloudX = sp[0].o;
	LINE_NUMBER(1817);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	jint temp0 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) + (jint(5)));
	jint temp1 = jint(1);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) - (20));
	jint temp2 = jint(2);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) - (50));
	jint temp3 = jint(3);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) - (30));
	jint temp4 = jint(4);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) - (50));
	jint temp5 = jint(5);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp5) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))));
	jint temp6 = 6;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_yb;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))) - (40));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_cloudY = sp[0].o;
	LINE_NUMBER(1818);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (7));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSunSpec = sp[0].o;
	LINE_NUMBER(1819);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/sun160.png"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1820);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/sun161.png"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1822);
	frame[2].i = (jint(0));
	}
label_300:;
	{
	jint temp0 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_187;
	}
	{
	LINE_NUMBER(1823);
	if ((frame[2].i) == (jint(1))) goto label_302;
	}
	{
	if ((frame[2].i) != (jint(3))) goto label_303;
	}
label_302:;
	{
	LINE_NUMBER(1824);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[4].o);
	goto label_304;
	}
label_303:;
	{
	LINE_NUMBER(1826);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgSunSpec;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	}
label_304:;
	{
	LINE_NUMBER(1822);
	INST_IINC(2, 1);
	goto label_300;
	}
label_187:;
	{
	LINE_NUMBER(1832);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_paintBG = (jint(0));
	LINE_NUMBER(1834);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_paintBG = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1835);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1837);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1838);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isLoadBGok = (jint(0));
	LINE_NUMBER(1841);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_randomRaintEff_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:randomRaintEff", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1844);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgRain;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1845);
	jint temp0 = frame[0].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_bgRain;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)))) goto label_4;
	}
	{
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(2)));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1846);
	SM_nro_BackgroudEffect_addEffect_int(ctx, (jint(0)));
	LINE_NUMBER(1847);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(1844);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1851);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameCanvas_keyPressed_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:keyPressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1854);
	SM_main_GameCanvas_handleKeyPressed_int(ctx, (frame[1].i));
	LINE_NUMBER(1855);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_handleKeyPressed_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:handleKeyPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1858);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_lastTimePress = temp0;
	LINE_NUMBER(1859);
	if ((frame[0].i) < (32)) goto label_2;
	}
	{
	if ((frame[0].i) <= (255)) goto label_3;
	}
label_2:;
	{
	if ((frame[0].i) == (10)) goto label_3;
	}
	{
	if ((frame[0].i) == (8)) goto label_3;
	}
	{
	if ((frame[0].i) == (-8)) goto label_3;
	}
	{
	if ((frame[0].i) == (13)) goto label_3;
	}
	{
	if ((frame[0].i) != (-5)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1860);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (frame[0].i);
	}
label_4:;
	{
	LINE_NUMBER(1863);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1864);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	((func_nro_Dialog_keyPress_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Dialog_keyPress_int])(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(1865);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1867);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1868);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	((func_nro_mScreen_keyPress_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mScreen_keyPress_int])(ctx, sp[0].o, (frame[0].i));
	}
label_9:;
	{
	LINE_NUMBER(1870);
	switch((frame[0].i)) {
		case -39: goto label_11;
		case -38: goto label_12;
		case -37: goto label_13;
		case -36: goto label_13;
		case -35: goto label_13;
		case -34: goto label_13;
		case -33: goto label_13;
		case -32: goto label_13;
		case -31: goto label_13;
		case -30: goto label_13;
		case -29: goto label_13;
		case -28: goto label_13;
		case -27: goto label_13;
		case -26: goto label_14;
		case -25: goto label_13;
		case -24: goto label_13;
		case -23: goto label_13;
		case -22: goto label_15;
		case -21: goto label_16;
		case -20: goto label_13;
		case -19: goto label_13;
		case -18: goto label_13;
		case -17: goto label_13;
		case -16: goto label_13;
		case -15: goto label_13;
		case -14: goto label_13;
		case -13: goto label_13;
		case -12: goto label_13;
		case -11: goto label_13;
		case -10: goto label_13;
		case -9: goto label_13;
		case -8: goto label_13;
		case -7: goto label_15;
		case -6: goto label_16;
		case -5: goto label_17;
		case -4: goto label_18;
		case -3: goto label_19;
		case -2: goto label_11;
		case -1: goto label_12;
		case 0: goto label_13;
		case 1: goto label_13;
		case 2: goto label_13;
		case 3: goto label_13;
		case 4: goto label_13;
		case 5: goto label_13;
		case 6: goto label_13;
		case 7: goto label_13;
		case 8: goto label_13;
		case 9: goto label_13;
		case 10: goto label_17;
		case 11: goto label_13;
		case 12: goto label_13;
		case 13: goto label_13;
		case 14: goto label_13;
		case 15: goto label_13;
		case 16: goto label_13;
		case 17: goto label_13;
		case 18: goto label_13;
		case 19: goto label_13;
		case 20: goto label_13;
		case 21: goto label_13;
		case 22: goto label_13;
		case 23: goto label_13;
		case 24: goto label_13;
		case 25: goto label_13;
		case 26: goto label_13;
		case 27: goto label_13;
		case 28: goto label_13;
		case 29: goto label_13;
		case 30: goto label_13;
		case 31: goto label_13;
		case 32: goto label_13;
		case 33: goto label_13;
		case 34: goto label_13;
		case 35: goto label_20;
		case 36: goto label_13;
		case 37: goto label_13;
		case 38: goto label_13;
		case 39: goto label_13;
		case 40: goto label_13;
		case 41: goto label_13;
		case 42: goto label_21;
		case 43: goto label_13;
		case 44: goto label_13;
		case 45: goto label_13;
		case 46: goto label_13;
		case 47: goto label_13;
		case 48: goto label_22;
		case 49: goto label_23;
		case 50: goto label_24;
		case 51: goto label_25;
		case 52: goto label_26;
		case 53: goto label_27;
		case 54: goto label_28;
		case 55: goto label_29;
		case 56: goto label_30;
		case 57: goto label_31;
		case 58: goto label_13;
		case 59: goto label_13;
		case 60: goto label_13;
		case 61: goto label_13;
		case 62: goto label_13;
		case 63: goto label_13;
		case 64: goto label_13;
		case 65: goto label_32;
		case 66: goto label_13;
		case 67: goto label_13;
		case 68: goto label_33;
		case 69: goto label_13;
		case 70: goto label_34;
		case 71: goto label_13;
		case 72: goto label_13;
		case 73: goto label_13;
		case 74: goto label_13;
		case 75: goto label_13;
		case 76: goto label_13;
		case 77: goto label_13;
		case 78: goto label_13;
		case 79: goto label_13;
		case 80: goto label_13;
		case 81: goto label_13;
		case 82: goto label_13;
		case 83: goto label_35;
		case 84: goto label_13;
		case 85: goto label_13;
		case 86: goto label_13;
		case 87: goto label_36;
		case 88: goto label_13;
		case 89: goto label_13;
		case 90: goto label_13;
		case 91: goto label_13;
		case 92: goto label_13;
		case 93: goto label_13;
		case 94: goto label_13;
		case 95: goto label_13;
		case 96: goto label_13;
		case 97: goto label_32;
		case 98: goto label_13;
		case 99: goto label_13;
		case 100: goto label_33;
		case 101: goto label_13;
		case 102: goto label_34;
		case 103: goto label_13;
		case 104: goto label_13;
		case 105: goto label_13;
		case 106: goto label_13;
		case 107: goto label_13;
		case 108: goto label_13;
		case 109: goto label_13;
		case 110: goto label_13;
		case 111: goto label_13;
		case 112: goto label_13;
		case 113: goto label_13;
		case 114: goto label_13;
		case 115: goto label_35;
		case 116: goto label_13;
		case 117: goto label_13;
		case 118: goto label_13;
		case 119: goto label_36;
		default: goto label_13;
	}
	}
label_11:;
	{
	LINE_NUMBER(1873);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_37;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_panel;
	if ((--sp)->o == nullptr) goto label_38;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_38;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_37;
	}
label_38:;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_panel2;
	if ((--sp)->o == nullptr) goto label_39;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_39;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_39;
	}
label_37:;
	LINE_NUMBER(1876);
	popStackFrame(ctx);
	INST_RETURN();
label_39:;
	{
	LINE_NUMBER(1877);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_40;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(1878);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_41:;
	{
	LINE_NUMBER(1881);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(1882);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(1883);
	popStackFrame(ctx);
	return;
	}
label_12:;
	{
	LINE_NUMBER(1886);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_44;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_44;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_panel;
	if ((--sp)->o == nullptr) goto label_45;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_45;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_44;
	}
label_45:;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_panel2;
	if ((--sp)->o == nullptr) goto label_46;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_46;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_46;
	}
label_44:;
	LINE_NUMBER(1889);
	popStackFrame(ctx);
	INST_RETURN();
label_46:;
	{
	LINE_NUMBER(1890);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_47;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_48;
	}
label_47:;
	{
	LINE_NUMBER(1891);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_48:;
	{
	LINE_NUMBER(1894);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(1895);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(1896);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(1898);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyTabPressed = (jint(1));
	LINE_NUMBER(1899);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(1902);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	LINE_NUMBER(1903);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	LINE_NUMBER(1904);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(1907);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	LINE_NUMBER(1908);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	LINE_NUMBER(1909);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(1912);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_56;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_57;
	}
label_56:;
	{
	LINE_NUMBER(1913);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_57:;
	{
	LINE_NUMBER(1916);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	LINE_NUMBER(1917);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	LINE_NUMBER(1918);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(1920);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_60;
	}
	sp->i = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_61;
label_60:;
	LINE_NUMBER(1921);
	popStackFrame(ctx);
	INST_RETURN();
label_61:;
	{
	LINE_NUMBER(1922);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_62;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_63;
	}
label_62:;
	{
	LINE_NUMBER(1923);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_63:;
	{
	LINE_NUMBER(1926);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(1927);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(1928);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(1930);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_66;
	}
	sp->i = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_67;
label_66:;
	LINE_NUMBER(1931);
	popStackFrame(ctx);
	INST_RETURN();
label_67:;
	{
	LINE_NUMBER(1932);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_68;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_69;
	}
label_68:;
	{
	LINE_NUMBER(1933);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_69:;
	{
	LINE_NUMBER(1936);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(1937);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(1938);
	popStackFrame(ctx);
	return;
	}
label_36:;
	{
	LINE_NUMBER(1941);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_8;
	}
	sp->i = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(1942);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_73;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_74;
	}
label_73:;
	{
	LINE_NUMBER(1943);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_74:;
	{
	LINE_NUMBER(1945);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(1946);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(1947);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(1948);
	popStackFrame(ctx);
	return;
	}
label_35:;
	{
	LINE_NUMBER(1953);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_8;
	}
	sp->i = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(1954);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_79;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_80;
	}
label_79:;
	{
	LINE_NUMBER(1955);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_80:;
	{
	LINE_NUMBER(1957);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(1958);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(1959);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(1960);
	popStackFrame(ctx);
	return;
	}
label_32:;
	{
	LINE_NUMBER(1965);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_8;
	}
	sp->i = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(1966);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_85;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_86;
	}
label_85:;
	{
	LINE_NUMBER(1967);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_86:;
	{
	LINE_NUMBER(1969);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(1970);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(1971);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(1972);
	popStackFrame(ctx);
	return;
	}
label_33:;
	{
	LINE_NUMBER(1977);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_8;
	}
	sp->i = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(1978);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) != 0) goto label_91;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_CrackBallScr)) == 0) goto label_92;
	}
label_91:;
	{
	LINE_NUMBER(1979);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	}
label_92:;
	{
	LINE_NUMBER(1981);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(1982);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(1983);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(1984);
	popStackFrame(ctx);
	return;
	}
label_34:;
	{
	LINE_NUMBER(1989);
	jint temp0 = (jint)SM_main_GameCanvas_isChatOrInputActive_R_boolean(ctx);
	if (temp0 != 0) goto label_8;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1990);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_usePorata) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_usePorata])(ctx, sp[0].o);
	LINE_NUMBER(1991);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(1992);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(1996);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_99;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_100;
	}
label_99:;
	{
	LINE_NUMBER(1997);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	LINE_NUMBER(1998);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	}
label_100:;
	LINE_NUMBER(2000);
	popStackFrame(ctx);
	INST_RETURN();
label_21:;
	{
	LINE_NUMBER(2002);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_102;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_103;
	}
label_102:;
	{
	LINE_NUMBER(2003);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(1));
	LINE_NUMBER(2004);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(1));
	}
label_103:;
	LINE_NUMBER(2006);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(2008);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_105;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_106;
	}
label_105:;
	{
	LINE_NUMBER(2009);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	LINE_NUMBER(2010);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	}
label_106:;
	LINE_NUMBER(2012);
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
	{
	LINE_NUMBER(2014);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_108;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_109;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_109;
	{
	LINE_NUMBER(2015);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_109;
	}
label_108:;
	{
	LINE_NUMBER(2016);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	LINE_NUMBER(2017);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	}
label_109:;
	LINE_NUMBER(2020);
	popStackFrame(ctx);
	INST_RETURN();
label_24:;
	{
	LINE_NUMBER(2022);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_112;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_113;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_113;
	{
	LINE_NUMBER(2023);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_113;
	}
label_112:;
	{
	LINE_NUMBER(2024);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(2025);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	}
label_113:;
	LINE_NUMBER(2028);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
	{
	LINE_NUMBER(2030);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_116;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_117;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_117;
	{
	LINE_NUMBER(2031);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_117;
	}
label_116:;
	{
	LINE_NUMBER(2032);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	LINE_NUMBER(2033);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	}
label_117:;
	LINE_NUMBER(2036);
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	{
	LINE_NUMBER(2038);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_120;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_121;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_121;
	{
	LINE_NUMBER(2039);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_121;
	}
label_120:;
	{
	LINE_NUMBER(2040);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	LINE_NUMBER(2041);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	}
label_121:;
	LINE_NUMBER(2044);
	popStackFrame(ctx);
	INST_RETURN();
label_27:;
	{
	LINE_NUMBER(2046);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_124;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(2047);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_13;
	}
label_124:;
	{
	LINE_NUMBER(2048);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	LINE_NUMBER(2049);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	}
label_13:;
	LINE_NUMBER(2052);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
	{
	LINE_NUMBER(2054);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_127;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_128;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_128;
	{
	LINE_NUMBER(2055);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_128;
	}
label_127:;
	{
	LINE_NUMBER(2056);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	LINE_NUMBER(2057);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	}
label_128:;
	LINE_NUMBER(2060);
	popStackFrame(ctx);
	INST_RETURN();
label_29:;
	{
	LINE_NUMBER(2062);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_131;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_132;
	}
label_131:;
	{
	LINE_NUMBER(2063);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	LINE_NUMBER(2064);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	}
label_132:;
	LINE_NUMBER(2066);
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(2068);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) goto label_134;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_135;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_135;
	{
	LINE_NUMBER(2069);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_135;
	}
label_134:;
	{
	LINE_NUMBER(2070);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(2071);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	}
label_135:;
	LINE_NUMBER(2074);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
	{
	LINE_NUMBER(2076);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_138;
	}
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_8;
	}
label_138:;
	{
	LINE_NUMBER(2077);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	LINE_NUMBER(2078);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	}
label_8:;
	LINE_NUMBER(2082);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameCanvas_keyTyped_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2086);
	if ((frame[1].i) == (8)) goto label_1;
	}
	{
	if ((frame[1].i) != (8)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2087);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (-8);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2089);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (frame[1].i);
	}
label_3:;
	LINE_NUMBER(2091);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameCanvas_keyReleased_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:keyReleased", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2094);
	SM_main_GameCanvas_handleKeyReleased_int(ctx, (frame[1].i));
	LINE_NUMBER(2095);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_handleKeyReleased_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:handleKeyReleased", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2098);
	switch((frame[0].i)) {
		case -39: goto label_1;
		case -38: goto label_2;
		case -22: goto label_3;
		case -21: goto label_4;
		case -7: goto label_3;
		case -6: goto label_4;
		case -5: goto label_5;
		case -4: goto label_6;
		case -3: goto label_7;
		case -2: goto label_1;
		case -1: goto label_2;
		case 10: goto label_5;
		case 35: goto label_8;
		case 42: goto label_9;
		case 48: goto label_10;
		case 49: goto label_11;
		case 50: goto label_12;
		case 51: goto label_13;
		case 52: goto label_14;
		case 53: goto label_15;
		case 54: goto label_16;
		case 55: goto label_17;
		case 56: goto label_18;
		case 57: goto label_19;
		case 65: goto label_20;
		case 68: goto label_21;
		case 83: goto label_22;
		case 87: goto label_23;
		case 97: goto label_20;
		case 100: goto label_21;
		case 115: goto label_22;
		case 119: goto label_23;
		default: goto label_24;
	}
	}
label_1:;
	{
	LINE_NUMBER(2101);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_25;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (47));
	if (temp0 != 0) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(2102);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	}
label_26:;
	LINE_NUMBER(2104);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2107);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_27;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (51));
	if (temp0 != 0) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(2108);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	}
label_28:;
	LINE_NUMBER(2110);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2113);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	LINE_NUMBER(2114);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	LINE_NUMBER(2115);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(2118);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	LINE_NUMBER(2119);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	LINE_NUMBER(2120);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(2123);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(2124);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	LINE_NUMBER(2125);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(2127);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_35;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (32));
	if (temp0 != 0) goto label_36;
	}
label_35:;
	{
	LINE_NUMBER(2128);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	}
label_36:;
	LINE_NUMBER(2130);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(2132);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_37;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (29));
	if (temp0 != 0) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(2133);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	}
label_38:;
	LINE_NUMBER(2135);
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
	{
	LINE_NUMBER(2138);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_39;
	}
	{
	LINE_NUMBER(2139);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_41;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (19));
	if (temp0 != 0) goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(2140);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	}
label_39:;
	LINE_NUMBER(2143);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(2146);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_42;
	}
	{
	LINE_NUMBER(2147);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_44;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (20));
	if (temp0 != 0) goto label_42;
	}
label_44:;
	{
	LINE_NUMBER(2148);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	}
label_42:;
	LINE_NUMBER(2151);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(2154);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_45;
	}
	{
	LINE_NUMBER(2155);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_47;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (21));
	if (temp0 != 0) goto label_45;
	}
label_47:;
	{
	LINE_NUMBER(2156);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	}
label_45:;
	LINE_NUMBER(2159);
	popStackFrame(ctx);
	INST_RETURN();
label_21:;
	{
	LINE_NUMBER(2162);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveWASD) == 0) goto label_48;
	}
	{
	LINE_NUMBER(2163);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isMoveArrows) == 0) goto label_50;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(ctx, (22));
	if (temp0 != 0) goto label_48;
	}
label_50:;
	{
	LINE_NUMBER(2164);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	}
label_48:;
	LINE_NUMBER(2167);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(2169);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(0));
	LINE_NUMBER(2170);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	LINE_NUMBER(2171);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(2173);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(0));
	LINE_NUMBER(2174);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(1));
	LINE_NUMBER(2175);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(2177);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(2178);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	LINE_NUMBER(2179);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(2181);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_57;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_57;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_57;
	}
	{
	LINE_NUMBER(2182);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	LINE_NUMBER(2183);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	}
label_57:;
	LINE_NUMBER(2186);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(2188);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_60;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_60;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_60;
	}
	{
	LINE_NUMBER(2189);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(2190);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	}
label_60:;
	LINE_NUMBER(2193);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(2195);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_63;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_63;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_63;
	}
	{
	LINE_NUMBER(2196);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(0));
	LINE_NUMBER(2197);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	}
label_63:;
	LINE_NUMBER(2200);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(2202);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_66;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_66;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_66;
	}
	{
	LINE_NUMBER(2203);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	LINE_NUMBER(2204);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(1));
	}
label_66:;
	LINE_NUMBER(2207);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(2209);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_24;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_24;
	}
	{
	LINE_NUMBER(2210);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(2211);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	}
label_24:;
	LINE_NUMBER(2214);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
	{
	LINE_NUMBER(2216);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_71;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_71;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_71;
	}
	{
	LINE_NUMBER(2217);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(0));
	LINE_NUMBER(2218);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(1));
	}
label_71:;
	LINE_NUMBER(2221);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(2223);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(0));
	LINE_NUMBER(2224);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	LINE_NUMBER(2225);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(2227);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_76;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isMoveNumberPad;
	if ((--sp)->i == 0) goto label_76;
	{
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_76;
	}
	{
	LINE_NUMBER(2228);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	LINE_NUMBER(2229);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	}
label_76:;
	LINE_NUMBER(2232);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(2234);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(0));
	LINE_NUMBER(2235);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyReleased;
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	LINE_NUMBER(2237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameCanvas_onPointerDragged_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:onPointerDragged", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2240);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerMove = (jint(0));
	LINE_NUMBER(2241);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[1].i) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_pxLast)));
	if (temp0 >= (10)) goto label_2;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_pyLast)));
	if (temp0 < (10)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2242);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2243);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerDown = (jint(1));
	LINE_NUMBER(2244);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerSelect = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(2247);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_px = (frame[1].i);
	LINE_NUMBER(2248);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_py = (frame[2].i);
	LINE_NUMBER(2249);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_curPos) + (jint(1));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_curPos = temp0;
	if (temp0 <= (jint(3))) goto label_8;
	}
	{
	LINE_NUMBER(2250);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_curPos = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(2253);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_arrPos;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_curPos;
	clinit_nro_Position(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Position);
	init_nro_Position_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameCanvas_onPointerPressed_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:onPointerPressed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2257);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerMove = (jint(0));
	LINE_NUMBER(2258);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2259);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustDown = (jint(1));
	LINE_NUMBER(2260);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerDown = (jint(1));
	LINE_NUMBER(2261);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(2262);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerSelect = (jint(0));
	LINE_NUMBER(2263);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_lastTimePress = temp0;
	LINE_NUMBER(2264);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_pxFirst = (frame[1].i);
	LINE_NUMBER(2265);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_pyFirst = (frame[2].i);
	LINE_NUMBER(2266);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_pxLast = (frame[1].i);
	LINE_NUMBER(2267);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_pyLast = (frame[2].i);
	LINE_NUMBER(2268);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_px = (frame[1].i);
	LINE_NUMBER(2269);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_py = (frame[2].i);
	LINE_NUMBER(2270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameCanvas_onPointerReleased_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:onPointerReleased", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2273);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerSelect) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2274);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerMove = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2277);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerDown = (jint(0));
	LINE_NUMBER(2278);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(1));
	LINE_NUMBER(2279);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerSelect = (jint(0));
	LINE_NUMBER(2280);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(1));
	LINE_NUMBER(2281);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(2282);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_px = (frame[1].i);
	LINE_NUMBER(2283);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_py = (frame[2].i);
	LINE_NUMBER(2284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:isPointerHoldIn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2287);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) != 0) goto label_1;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(2288);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2290);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) < (frame[0].i)) goto label_3;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) > ((frame[0].i) + (frame[2].i))) goto label_3;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) < (frame[1].i)) goto label_3;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) > ((frame[1].i) + (frame[3].i))) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_clearKeyPressed(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:clearKeyPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(2295);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(2296);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[0].i)) = (jint(0));
	LINE_NUMBER(2295);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2299);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyTabPressed = (jint(0));
	LINE_NUMBER(2300);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(2301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_clearKeyHold(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:clearKeyHold", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(2304);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(2305);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[0].i)) = (jint(0));
	LINE_NUMBER(2304);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(2308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameCanvas_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:paint", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2311);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	sp[1].o = (jobject)((lib_mGraphics *) NULL_CHECK((frame[1].o)))->F_g;
	((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_g = (jref) sp[1].o;
	LINE_NUMBER(2312);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_debugPaint;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(2313);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2314);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_mScreen_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mScreen_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(2317);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, sp[1].o);
	jint temp1 = -temp0;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, sp[1].o);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(2318);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, sp[0].o, (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(2319);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2320);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_Panel_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2321);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_14;
	}
	{
	LINE_NUMBER(2322);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_Panel_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(2325);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2326);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_input_ChatTextField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(2329);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2330);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_input_ChatTextField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(2334);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isPing) == 0) goto label_19;
	}
	{
	LINE_NUMBER(2335);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	SM_nro_Res_paintOnScreenDebug_lib_mGraphics(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(2338);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(2339);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_Dialog_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Dialog_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(2340);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2341);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, sp[0].o);
	LINE_NUMBER(2342);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_Menu_paintMenu_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_paintMenu_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(2345);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	SM_nro_InfoDlg_paint_lib_mGraphics(ctx, sp[0].o);
	LINE_NUMBER(2347);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_InfoMe_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2348);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info2;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_InfoMe_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2349);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_popUpYesNo;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(2350);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_popUpYesNo;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_PopUpYesNo_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PopUpYesNo_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_29:;
	{
	LINE_NUMBER(2353);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(2354);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_ChatPopup_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(2357);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2358);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	if (sp[0].o != nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport1) != 0) goto label_34;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport) != 0) goto label_34;
	}
	{
	LINE_NUMBER(2359);
	frame[3].o = (frame[2].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2362);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isCamera) == 0) goto label_1;
	}
	{
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) <= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_36;
	}
	{
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) >= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_36;
	}
	{
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) <= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_36;
	}
	{
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y) < ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH))) goto label_1;
	}
label_36:;
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) < (jint(5))) goto label_1;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_currChatPopup;
	if ((--sp)->o != nullptr) goto label_1;
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_serverChatPopUp;
	if ((--sp)->o != nullptr) goto label_1;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_1;
	}
	clinit_nro_Hint(ctx);
	(sp++)->i = SF_nro_Hint_isPaint;
	if ((--sp)->i == 0) goto label_1;
	{
	LINE_NUMBER(2367);
	clinit_nro_Hint(ctx);
	jint temp0 = (jint)SF_nro_Hint_x;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx));
	LINE_NUMBER(2368);
	clinit_nro_Hint(ctx);
	jint temp1 = (jint)SF_nro_Hint_y;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (temp1 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy));
	LINE_NUMBER(2369);
	frame[6].i = (jint(0));
	LINE_NUMBER(2370);
	frame[7].i = (jint(0));
	LINE_NUMBER(2371);
	frame[8].i = (jint(0));
	LINE_NUMBER(2372);
	if ((frame[4].i) <= 0) goto label_43;
	}
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_43;
	{
	LINE_NUMBER(2373);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[4].i));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	if (temp0 < temp1) goto label_45;
	}
	{
	LINE_NUMBER(2374);
	frame[6].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - (10));
	LINE_NUMBER(2375);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (30));
	LINE_NUMBER(2376);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_49;
	}
	{
	LINE_NUMBER(2377);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (10));
	}
label_49:;
	{
	LINE_NUMBER(2380);
	frame[8].i = (jint(0));
	goto label_51;
	}
label_45:;
	{
	LINE_NUMBER(2382);
	frame[6].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2)));
	LINE_NUMBER(2383);
	frame[7].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) - (10));
	LINE_NUMBER(2384);
	frame[8].i = (jint(5));
	goto label_51;
	}
label_43:;
	{
	LINE_NUMBER(2386);
	if ((frame[4].i) < 0) goto label_51;
	}
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_51;
	{
	LINE_NUMBER(2387);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[4].i));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	if (temp0 < temp1) goto label_55;
	}
	{
	LINE_NUMBER(2388);
	frame[6].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) - (10));
	LINE_NUMBER(2389);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (30));
	LINE_NUMBER(2390);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_59;
	}
	{
	LINE_NUMBER(2391);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (10));
	}
label_59:;
	{
	LINE_NUMBER(2394);
	frame[8].i = (jint(0));
	goto label_51;
	}
label_55:;
	{
	LINE_NUMBER(2396);
	frame[6].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2)));
	LINE_NUMBER(2397);
	frame[7].i = (10);
	LINE_NUMBER(2398);
	frame[8].i = (6);
	}
label_51:;
	{
	LINE_NUMBER(2402);
	if ((frame[4].i) >= 0) goto label_63;
	}
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_63;
	{
	LINE_NUMBER(2403);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[4].i));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	if (temp0 < temp1) goto label_65;
	}
	{
	LINE_NUMBER(2404);
	frame[6].i = (10);
	LINE_NUMBER(2405);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (30));
	LINE_NUMBER(2406);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_69;
	}
	{
	LINE_NUMBER(2407);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (10));
	}
label_69:;
	{
	LINE_NUMBER(2410);
	frame[8].i = (jint(3));
	goto label_71;
	}
label_65:;
	{
	LINE_NUMBER(2412);
	frame[6].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2)));
	LINE_NUMBER(2413);
	frame[7].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) - (10));
	LINE_NUMBER(2414);
	frame[8].i = (jint(5));
	goto label_71;
	}
label_63:;
	{
	LINE_NUMBER(2416);
	if ((frame[4].i) > 0) goto label_71;
	}
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_71;
	{
	LINE_NUMBER(2417);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[4].i));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	if (temp0 < temp1) goto label_75;
	}
	{
	LINE_NUMBER(2418);
	frame[6].i = (10);
	LINE_NUMBER(2419);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (30));
	LINE_NUMBER(2420);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_79;
	}
	{
	LINE_NUMBER(2421);
	frame[7].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) / (jint(2))) + (10));
	}
label_79:;
	{
	LINE_NUMBER(2424);
	frame[8].i = (jint(3));
	goto label_71;
	}
label_75:;
	{
	LINE_NUMBER(2426);
	frame[6].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW) / (jint(2)));
	LINE_NUMBER(2427);
	frame[7].i = (10);
	LINE_NUMBER(2428);
	frame[8].i = (6);
	}
label_71:;
	{
	LINE_NUMBER(2432);
	SM_nro_GameScr_resetTranslate_lib_mGraphics(ctx, (frame[3].o));
	LINE_NUMBER(2433);
	sp[0].o = frame[3].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (13), (16), (frame[8].i), (frame[6].i), (frame[7].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(2436);
	goto label_84;
label_2:;
	LINE_NUMBER(2435);
	INST_ASTORE(4);
label_84:;
	{
	LINE_NUMBER(2438);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_tDelay) != 0) goto label_34;
	}
	clinit_nro_Hint(ctx);
	(sp++)->i = SF_nro_Hint_isViewPotential;
	if ((--sp)->i == 0) goto label_34;
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_scr;
	if ((--sp)->o != nullptr) goto label_34;
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_ischangingMap;
	if ((--sp)->i != 0) goto label_34;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	LINE_NUMBER(2439);
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o != sp[1].o) goto label_34;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_86;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cmx) != 0) goto label_34;
	}
label_86:;
	{
	LINE_NUMBER(2440);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_isPaint) == 0) goto label_87;
	}
	{
	LINE_NUMBER(2441);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[2].o), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)));
	}
label_87:;
	{
	LINE_NUMBER(2444);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_trans) != 0) goto label_89;
	}
	{
	LINE_NUMBER(2445);
	sp[0].o = frame[2].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgBantay;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) - (15)), (clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y), (jint(0)));
	}
label_89:;
	{
	LINE_NUMBER(2448);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_trans) != (jint(1))) goto label_91;
	}
	{
	LINE_NUMBER(2449);
	sp[0].o = frame[2].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgBantay;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (14), (16), (jint(2)), ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x) + (15)), (clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_RIGHT));
	}
label_91:;
	{
	LINE_NUMBER(2452);
	if ((clinit_nro_Hint(ctx), (jint)SF_nro_Hint_paintFlare) == 0) goto label_93;
	}
	{
	LINE_NUMBER(2453);
	sp[0].o = frame[2].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageFlare;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_nro_Hint(ctx), (jint)SF_nro_Hint_x), (clinit_nro_Hint(ctx), (jint)SF_nro_Hint_y), (jint(3)));
	}
label_93:;
	{
	LINE_NUMBER(2456);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[2].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[2].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	}
label_34:;
	{
	LINE_NUMBER(2460);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	if (sp[0].o == nullptr) goto label_95;
	}
	{
	LINE_NUMBER(2461);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_ChatPopup_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_95:;
	{
	LINE_NUMBER(2465);
	frame[3].i = (jint(0));
	}
label_97:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_98;
	}
	{
	LINE_NUMBER(2467);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect2, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_nro_ChatPopup)) == 0) goto label_101;
	}
	{
	sp[0].o = frame[4].o;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	LINE_NUMBER(2468);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_101;
	}
	{
	sp[0].o = frame[4].o;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_101;
	}
	{
	LINE_NUMBER(2469);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_Effect2_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Effect2_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_101:;
	{
	LINE_NUMBER(2465);
	INST_IINC(3, 1);
	goto label_97;
	}
label_98:;
	{
	LINE_NUMBER(2473);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_104;
	}
	{
	LINE_NUMBER(2474);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_nro_Dialog_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Dialog_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
label_104:;
	{
	LINE_NUMBER(2477);
	jint temp0 = (jint)SM_main_GameCanvas_isWait_R_boolean(ctx);
	if (temp0 == 0) goto label_106;
	}
	{
	LINE_NUMBER(2478);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2479);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(2480);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[2].o));
	LINE_NUMBER(2481);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(2482);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[2].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(2483);
	sp[0].o = frame[2].o;
	clinit_nro_LoginScr(ctx);
	sp[1].o = (jobject)SF_nro_LoginScr_imgTitle;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) - (24)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	LINE_NUMBER(2484);
	SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))) + (24)), (frame[2].o));
	LINE_NUMBER(2485);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_PLEASEWAIT;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(2486);
	sp += 3;
	if ((clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_timeLogin) <= 0) goto label_116;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_LoginScr(ctx), (jint)SF_nro_LoginScr_timeLogin));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"s"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_117;
	}
label_116:;
	INST_ALOAD(4);
label_117:;
	{
	sp -= 4;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	jint temp1 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2));
	jint temp2 = jint(2);
	LINE_NUMBER(2485);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2);
	LINE_NUMBER(2488);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_timeLoading) <= 0) goto label_106;
	}
	clinit_nro_LoginScr(ctx);
	(sp++)->i = SF_nro_LoginScr_timeLogin;
	if ((--sp)->i > 0) goto label_106;
	{
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_TIMEOUT)), (jlong(1000ll)))) < 0) goto label_106;
	}
	{
	LINE_NUMBER(2489);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_timeLoading) - (jint(1));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeLoading = temp0;
	if (temp0 != 0) goto label_121;
	}
	{
	LINE_NUMBER(2490);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeLoading = (15);
	}
label_121:;
	{
	LINE_NUMBER(2493);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_TIMEOUT = temp0;
	}
label_106:;
	{
	LINE_NUMBER(2497);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, sp[0].o);
	LINE_NUMBER(2498);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	SM_nro_EffecMn_paintLayer4_lib_mGraphics(ctx, sp[0].o);
	LINE_NUMBER(2499);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_open3Hour) == 0) goto label_125;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isLoading;
	if ((--sp)->i != 0) goto label_125;
	{
	LINE_NUMBER(2500);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o == sp[1].o) goto label_127;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_serverScreen;
	if (sp[0].o == sp[1].o) goto label_127;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_serverScr;
	if (sp[0].o != sp[1].o) goto label_128;
	}
label_127:;
	{
	LINE_NUMBER(2501);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_img18;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(5)), (jint(5)), (jint(0)));
	}
label_128:;
	{
	LINE_NUMBER(2504);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_SelectCharScr(ctx);
	sp[1].o = (jobject)SF_nro_SelectCharScr_instance;
	if (sp[0].o != sp[1].o) goto label_125;
	}
	{
	LINE_NUMBER(2505);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_img18;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(5)), (20), (jint(0)));
	}
label_125:;
	{
	LINE_NUMBER(2509);
	frame[3].i = (jint(0));
	}
label_130:;
	{
	jint temp0 = frame[3].i;
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_flyTexts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_131;
	}
	{
	LINE_NUMBER(2510);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_flyTexts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(2511);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[4].o), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - ((jint)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_count)) - ((frame[3].i) * ((jint)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_count))), (jint(1)));
	LINE_NUMBER(2512);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[4].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(1))), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - ((jint)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_count)) - ((frame[3].i) * ((jint)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_count))) - (jint(1))), (jint(1)));
	LINE_NUMBER(2509);
	INST_IINC(3, 1);
	goto label_130;
	}
label_131:;
	{
	LINE_NUMBER(2515);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, sp[0].o);
	LINE_NUMBER(2516);
	frame[3].i = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(4)));
	LINE_NUMBER(2517);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_138;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if ((isInstance(ctx, sp[0].o, &class_nro_GameScr)) == 0) goto label_138;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_thongBaoTest;
	if ((--sp)->o == nullptr) goto label_138;
	{
	LINE_NUMBER(2518);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	jint temp0 = 60;
	jint temp1 = frame[3].i;
	jint temp2 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (120);
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7_white;
	jint temp3 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[1].o);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, (temp3 + (jint(2))));
	LINE_NUMBER(2519);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_thongBaoTest;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_xThongBaoTranslate), ((frame[3].i) + (jint(1))), (jint(0)));
	LINE_NUMBER(2520);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	clinit_main_GameCanvas(ctx);
	sp[2].o = (jobject)SF_main_GameCanvas_thongBaoTest;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_xThongBaoTranslate), (frame[3].i), (jint(0)));
	LINE_NUMBER(2521);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, sp[0].o, (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_138:;
	LINE_NUMBER(2524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_endDlg(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:endDlg", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(2527);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2528);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2529);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_startOKDlg_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startOKDlg", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2532);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	sp[1].o = frame[0].o;
	sp[2].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[3].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[4].o = (jobject)SF_nro_mResources_OK;
	clinit_main_GameCanvas(ctx);
	sp[5].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, (8882), (jobject(nullptr)));
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))));
	LINE_NUMBER(2533);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = sp[0].o;
	LINE_NUMBER(2534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_startWaitDlg_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startWaitDlg", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2537);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	sp[1].o = frame[0].o;
	sp[2].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[3].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[4].o = (jobject)SF_nro_mResources_CANCEL;
	clinit_main_GameCanvas(ctx);
	sp[5].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, (8882), (jobject(nullptr)));
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))));
	LINE_NUMBER(2539);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = sp[0].o;
	LINE_NUMBER(2540);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_isWait = (jint(1));
	LINE_NUMBER(2541);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_startOKDlg1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startOKDlg1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2544);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	sp[1].o = frame[0].o;
	sp[2].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[3].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[4].o = (jobject)SF_nro_mResources_CANCEL;
	clinit_main_GameCanvas(ctx);
	sp[5].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, (8882), (jobject(nullptr)));
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))));
	LINE_NUMBER(2546);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = sp[0].o;
	LINE_NUMBER(2547);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((nro_MsgDlg *) NULL_CHECK(sp[0].o))->F_isWait = (jint(1));
	LINE_NUMBER(2548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_startWaitDlg(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startWaitDlg", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(2551);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLoadingMap = (jint(1));
	LINE_NUMBER(2552);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startOK", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2555);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	sp[1].o = frame[0].o;
	sp[2].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[3].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[4].o = (jobject)SF_nro_mResources_OK;
	clinit_main_GameCanvas(ctx);
	sp[5].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, (frame[1].i), (jobject(nullptr)));
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))));
	LINE_NUMBER(2556);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((func_nro_MsgDlg_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_show])(ctx, sp[0].o);
	LINE_NUMBER(2557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startYesNoDlg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2560);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))), (frame[2].o));
	LINE_NUMBER(2561);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((func_nro_MsgDlg_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_show])(ctx, sp[0].o);
	LINE_NUMBER(2562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameCanvas_sizeChanged_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:sizeChanged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2565);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_w = (frame[1].i);
	LINE_NUMBER(2566);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_h = (frame[2].i);
	LINE_NUMBER(2567);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_hw = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(2568);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_hh = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2)));
	LINE_NUMBER(2569);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_xThongBaoTranslate = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (60));
	LINE_NUMBER(2570);
	SM_nro_GameScr_SetNum_int_int(ctx, (jint(-1)), (jint(-1)));
	LINE_NUMBER(2571);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(2572);
	jint temp0 = jint(0);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = temp0;
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmx = temp0;
	LINE_NUMBER(2573);
	jint temp3 = jint(0);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoY = temp3;
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmy = temp3;
	}
label_7:;
	{
	LINE_NUMBER(2575);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBG;
	if (sp[0].o == nullptr) goto label_10;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_bgH;
	if ((--sp)->o == nullptr) goto label_10;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_yb;
	if ((--sp)->o == nullptr) goto label_10;
	{
	LINE_NUMBER(2576);
	SM_main_GameCanvas_getYBackground_int(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	}
label_10:;
	LINE_NUMBER(2578);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_main_GameCanvas_startDust_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:startDust", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2581);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2582);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2584);
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	INST_ICONST(1);
label_4:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(2585);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(2586);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2588);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(0));
	LINE_NUMBER(2589);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(2590);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[3].i);
	LINE_NUMBER(2591);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_main_GameCanvas_loadWaterSplash(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:loadWaterSplash", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(2597);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2598);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(3)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgWS = sp[0].o;
	LINE_NUMBER(2600);
	frame[0].i = (jint(0));
	}
label_4:;
	{
	if ((frame[0].i) >= (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(2601);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgWS;
	jint temp0 = frame[0].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/e/w"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2600);
	INST_IINC(0, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2604);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_wsState = sp[0].o;
	jint temp0 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_wsState;
	jint temp1 = jint(1);
	jint temp2 = jint(-1);
	ARRAY_ACCESS(jint, sp[1].o, temp1) = temp2;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	}
label_1:;
	LINE_NUMBER(2606);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameCanvas_updateDust(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:updateDust", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2609);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2611);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	if ((frame[1].i) >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(2612);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(2613);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	jint temp0 = frame[1].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[2].i = temp3;
	LINE_NUMBER(2614);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) < (jint(5))) goto label_11;
	}
	{
	LINE_NUMBER(2615);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustState;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(2618);
	if ((frame[1].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(2619);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustX;
	jint temp0 = frame[1].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 - (jint(1)));
	frame[2].i = temp3;
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(2621);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustX;
	jint temp0 = frame[1].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (jint(1)));
	frame[2].i = temp3;
	}
label_15:;
	{
	LINE_NUMBER(2624);
	sp[0].o = (jobject)((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_dustY;
	jint temp0 = frame[1].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 - (jint(1)));
	frame[2].i = temp3;
	}
label_8:;
	{
	LINE_NUMBER(2611);
	INST_IINC(1, 1);
	goto label_6;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(2629);
	goto label_5;
label_2:;
	LINE_NUMBER(2628);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(2631);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_isPaint_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:isPaint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2634);
	if ((frame[0].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(2635);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2636);
	if ((frame[0].i) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	{
	LINE_NUMBER(2637);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2638);
	if ((frame[1].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_5;
	}
	{
	LINE_NUMBER(2639);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(2641);
	if ((frame[1].i) > (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:paintShukiren", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2646);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_aq;
	sp[0].i = temp0;
	sp += 1;
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (7)) goto label_1;
	}
	INST_BIPUSH(8);
	goto label_2;
label_1:;
	INST_BIPUSH(9);
label_2:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i % sp[1].i);
	LINE_NUMBER(2647);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_aq) + (jint(1));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_aq = temp0;
	if (temp0 != (1000)) goto label_4;
	}
	{
	LINE_NUMBER(2648);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_aq = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2651);
	sp[0].o = frame[2].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgShuriken;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((frame[3].i) << (jint(4))), (16), (16), (jint(0)), (frame[0].i), (frame[1].i), (jint(3)));
	LINE_NUMBER(2652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameCanvas_resetToLoginScrz(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:resetToLoginScrz", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2655);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"GAME_CANVAS_SCHEDULE_RESET"_j));
	jint temp0 = 401;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ERR_SCHEDULE_RESET"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"RESET_TO_LOGIN_SCRZ"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"currentScreen="_j))));
	LINE_NUMBER(2660);
	clinit_main_GameCanvas(ctx);
	sp[4].o = (jobject)SF_main_GameCanvas_currentScreen;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	jobject temp3 = sp[3].o;
	sp[3].o = temp2;
	jobject temp4 = sp[4].o;
	sp[4].o = temp3;
	sp += 5;
	if (temp4 == nullptr) goto label_2;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
label_3:;
	{
	sp -= 6;
	sp[4].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[4].o, sp[5].o);
	sp[4].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[4].o);
	LINE_NUMBER(2655);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].i, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2661);
	((main_GameCanvas *) NULL_CHECK((frame[0].o)))->F_resetToLoginScr = (jint(1));
	LINE_NUMBER(2662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:isPointer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2665);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) != 0) goto label_1;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(2666);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2668);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) < (frame[0].i)) goto label_3;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) > ((frame[0].i) + (frame[2].i))) goto label_3;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) < (frame[1].i)) goto label_3;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) > ((frame[1].i) + (frame[3].i))) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_main_GameCanvas_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:perform", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2675);
	switch((frame[1].i)) {
		case 999: goto label_17;
		case 8881: goto label_18;
		case 8882: goto label_19;
		case 8884: goto label_20;
		case 8885: goto label_21;
		case 8886: goto label_22;
		case 8887: goto label_23;
		case 8888: goto label_24;
		case 8889: goto label_25;
		case 9000: goto label_26;
		case 9999: goto label_27;
		case 10000: goto label_28;
		case 10001: goto label_29;
		case 88810: goto label_30;
		case 88811: goto label_31;
		case 88814: goto label_32;
		case 88815: goto label_33;
		case 88817: goto label_34;
		case 88818: goto label_35;
		case 88819: goto label_36;
		case 88820: goto label_37;
		case 88821: goto label_38;
		case 88822: goto label_39;
		case 88823: goto label_40;
		case 88824: goto label_41;
		case 88825: goto label_42;
		case 88826: goto label_43;
		case 88827: goto label_44;
		case 88828: goto label_45;
		case 88829: goto label_46;
		case 88836: goto label_47;
		case 88837: goto label_48;
		case 88839: goto label_49;
		case 100001: goto label_50;
		case 100002: goto label_51;
		case 100003: goto label_52;
		case 100004: goto label_53;
		case 100005: goto label_54;
		case 100006: goto label_55;
		case 100016: goto label_56;
		case 101024: goto label_57;
		case 101025: goto label_58;
		case 101026: goto label_59;
		case 888361: goto label_60;
		case 888391: goto label_61;
		case 888392: goto label_62;
		case 888393: goto label_63;
		case 888394: goto label_64;
		case 888395: goto label_65;
		case 888396: goto label_66;
		case 888397: goto label_67;
		default: goto label_68;
	}
	}
label_17:;
	{
	LINE_NUMBER(2677);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2678);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2679);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(2681);
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2684);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2687);
	goto label_71;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2685);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2686);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
label_71:;
	{
	LINE_NUMBER(2689);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2690);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(2692);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2693);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2694);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_isAutoConect = (jint(0));
	LINE_NUMBER(2695);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(2697);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2698);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2699);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	if (sp[0].o != nullptr) goto label_79;
	}
	{
	LINE_NUMBER(2700);
	clinit_nro_ServerScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerScr);
	init_nro_ServerScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_serverScr = sp[0].o;
	}
label_79:;
	{
	LINE_NUMBER(2703);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScr;
	((func_nro_ServerScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerScr_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(2704);
	popStackFrame(ctx);
	return;
	}
label_21:;
	{
	LINE_NUMBER(2706);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_82;
	}
	{
	LINE_NUMBER(2707);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2708);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2709);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
	goto label_86;
	}
label_82:;
	{
	LINE_NUMBER(2711);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_exit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_exit])(ctx, sp[0].o);
	}
label_86:;
	LINE_NUMBER(2713);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
	{
	LINE_NUMBER(2715);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2716);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2717);
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	LINE_NUMBER(2718);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_addFriend_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_addFriend_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(2719);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(2721);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2722);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2723);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	frame[1].i = temp0;
	LINE_NUMBER(2724);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_addPartyAccept_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_addPartyAccept_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(2725);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(2727);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	frame[1].i = temp0;
	LINE_NUMBER(2728);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_addPartyCancel_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_addPartyCancel_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(2729);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2730);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2731);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(2733);
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	LINE_NUMBER(2734);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2735);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2736);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_acceptPleaseParty_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_acceptPleaseParty_java_lang_String])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(2737);
	popStackFrame(ctx);
	return;
	}
label_26:;
	{
	LINE_NUMBER(2739);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2740);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2741);
	clinit_nro_SplashScr(ctx);
	SF_nro_SplashScr_imgLogo = (jobject(nullptr));
	LINE_NUMBER(2742);
	SM_nro_SmallImage_loadBigRMS(ctx);
	LINE_NUMBER(2743);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(2744);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_bigOk = (jint(1));
	LINE_NUMBER(2745);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_loadScreen = (jint(1));
	LINE_NUMBER(2746);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_loadGameScr) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_loadGameScr])(ctx, sp[0].o);
	LINE_NUMBER(2747);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o == sp[1].o) goto label_68;
	}
	{
	LINE_NUMBER(2748);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe2])(ctx, sp[0].o);
	LINE_NUMBER(2749);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(2753);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2754);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2755);
	SM_main_GameCanvas_connect(ctx);
	LINE_NUMBER(2756);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_setClientType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_setClientType])(ctx, sp[0].o);
	LINE_NUMBER(2757);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, sp[0].o);
	LINE_NUMBER(2758);
	popStackFrame(ctx);
	return;
	}
label_28:;
	{
	LINE_NUMBER(2760);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2761);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2762);
	popStackFrame(ctx);
	return;
	}
label_29:;
	{
	LINE_NUMBER(2764);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2765);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2766);
	popStackFrame(ctx);
	return;
	}
label_30:;
	{
	LINE_NUMBER(2768);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	frame[1].i = temp0;
	LINE_NUMBER(2769);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2770);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2771);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_acceptInviteTrade_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_acceptInviteTrade_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(2772);
	popStackFrame(ctx);
	return;
	}
label_31:;
	{
	LINE_NUMBER(2774);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2775);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2776);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_cancelInviteTrade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_cancelInviteTrade])(ctx, sp[0].o);
	LINE_NUMBER(2777);
	popStackFrame(ctx);
	return;
	}
label_32:;
	{
	LINE_NUMBER(2779);
	frame[5].o = (checkCast(ctx, getArrayClass(&class_nro_Item, 1), (frame[2].o)));
	LINE_NUMBER(2780);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2781);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2782);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_crystalCollectLock_Array1_nro_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_crystalCollectLock_Array1_nro_Item])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(2783);
	popStackFrame(ctx);
	return;
	}
label_33:;
	LINE_NUMBER(2785);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
	{
	LINE_NUMBER(2787);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp0 = jint(1);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(2788);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK(sp[1].o))->F_template;
	jint temp1 = (jint)((nro_NpcTemplate *) NULL_CHECK(sp[1].o))->F_npcTemplateId;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Service_menu_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_menu_int_int_int])(ctx, sp[0].o, temp1, ((jint)((nro_Menu *) NULL_CHECK(sp[1].o))->F_menuSelectedItem), (jint(0)));
	LINE_NUMBER(2790);
	popStackFrame(ctx);
	return;
	}
label_35:;
	{
	LINE_NUMBER(2792);
	jint temp0 = (jint)((func_java_lang_Short_shortValue_R_short) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Short, (frame[2].o))))->vtable)[VTABLE_java_lang_Short_shortValue_R_short])(ctx, (checkCast(ctx, &class_java_lang_Short, (frame[2].o))));
	frame[4].i = temp0;
	LINE_NUMBER(2793);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp1 = frame[4].i;
	sp[1].o = (jobject)((nro_InputDlg *) NULL_CHECK((checkCast(ctx, &class_nro_InputDlg, (jobject(nullptr))))))->F_tfInput;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_Service_textBoxId_short_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_textBoxId_short_java_lang_String])(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(2794);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2795);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2796);
	popStackFrame(ctx);
	return;
	}
label_36:;
	{
	LINE_NUMBER(2798);
	jint temp0 = (jint)((func_java_lang_Short_shortValue_R_short) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Short, (frame[2].o))))->vtable)[VTABLE_java_lang_Short_shortValue_R_short])(ctx, (checkCast(ctx, &class_java_lang_Short, (frame[2].o))));
	frame[4].i = temp0;
	LINE_NUMBER(2799);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_menuId_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_menuId_short])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(2800);
	popStackFrame(ctx);
	return;
	}
label_37:;
	{
	LINE_NUMBER(2802);
	frame[6].o = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), (frame[2].o)));
	LINE_NUMBER(2803);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o != nullptr) goto label_142;
	}
	LINE_NUMBER(2804);
	popStackFrame(ctx);
	INST_RETURN();
label_142:;
	{
	LINE_NUMBER(2807);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2808);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) > (jint(1))) goto label_145;
	}
	{
	LINE_NUMBER(2809);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp0 = jint(1);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(2810);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK(sp[1].o))->F_template;
	jint temp1 = (jint)((nro_NpcTemplate *) NULL_CHECK(sp[1].o))->F_npcTemplateId;
	jint temp2 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[7].o));
	((func_nro_Service_menu_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_menu_int_int_int])(ctx, sp[0].o, temp1, temp2, (jint(0)));
	LINE_NUMBER(2811);
	popStackFrame(ctx);
	return;
	}
label_145:;
	{
	LINE_NUMBER(2814);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vSub"_j))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2816);
	frame[9].i = (jint(0));
	}
label_150:;
	{
	if ((frame[9].i) >= ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)))) goto label_151;
	}
	{
	LINE_NUMBER(2817);
	sp[0].o = frame[8].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, (frame[6].o), ((frame[9].i) + (jint(1))));
	clinit_main_GameCanvas(ctx);
	sp[3].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(88821)), (frame[7].o));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2816);
	INST_IINC(9, 1);
	goto label_150;
	}
label_151:;
	{
	LINE_NUMBER(2820);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(2821);
	popStackFrame(ctx);
	return;
	}
label_38:;
	{
	LINE_NUMBER(2823);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	frame[9].i = temp0;
	LINE_NUMBER(2824);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp1 = jint(1);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(2825);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK(sp[1].o))->F_template;
	jint temp2 = (jint)((nro_NpcTemplate *) NULL_CHECK(sp[1].o))->F_npcTemplateId;
	jint temp3 = frame[9].i;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Service_menu_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_menu_int_int_int])(ctx, sp[0].o, temp2, temp3, ((jint)((nro_Menu *) NULL_CHECK(sp[1].o))->F_menuSelectedItem));
	LINE_NUMBER(2826);
	popStackFrame(ctx);
	return;
	}
label_39:;
	{
	LINE_NUMBER(2828);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8""_j));
	jint temp0 = jint(1);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(2829);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_npcFocus;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK(sp[1].o))->F_template;
	jint temp1 = (jint)((nro_NpcTemplate *) NULL_CHECK(sp[1].o))->F_npcTemplateId;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Service_menu_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_menu_int_int_int])(ctx, sp[0].o, temp1, ((jint)((nro_Menu *) NULL_CHECK(sp[1].o))->F_menuSelectedItem), (jint(0)));
	LINE_NUMBER(2831);
	popStackFrame(ctx);
	return;
	}
label_40:;
	{
	LINE_NUMBER(2833);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_SENTMSG;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2834);
	popStackFrame(ctx);
	return;
	}
label_41:;
	{
	LINE_NUMBER(2836);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_NOSENDMSG;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2837);
	popStackFrame(ctx);
	return;
	}
label_42:;
	{
	LINE_NUMBER(2839);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_sendMsgSuccess;
	SM_main_GameCanvas_startOKDlg1_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2840);
	popStackFrame(ctx);
	return;
	}
label_43:;
	{
	LINE_NUMBER(2842);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_cannotSendMsg;
	SM_main_GameCanvas_startOKDlg1_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2843);
	popStackFrame(ctx);
	return;
	}
label_44:;
	{
	LINE_NUMBER(2845);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_sendGuessMsgSuccess;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2846);
	popStackFrame(ctx);
	return;
	}
label_45:;
	{
	LINE_NUMBER(2848);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_sendMsgFail;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2849);
	popStackFrame(ctx);
	return;
	}
label_46:;
	{
	LINE_NUMBER(2852);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((checkCast(ctx, &class_nro_InputDlg, (jobject(nullptr))))))->F_tfInput;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_167;
	}
	LINE_NUMBER(2853);
	popStackFrame(ctx);
	INST_RETURN();
label_167:;
	{
	LINE_NUMBER(2856);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = frame[10].o;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	((func_nro_Service_changeName_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_changeName_java_lang_String_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(2857);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(2858);
	popStackFrame(ctx);
	return;
	}
label_47:;
	{
	LINE_NUMBER(2860);
	clinit_nro_InputDlg(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_InputDlg);
	init_nro_InputDlg(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(2861);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[11].o)))->F_tfInput;
	((func_lib_input_TField_setMaxTextLenght_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setMaxTextLenght_int])(ctx, sp[0].o, (6));
	LINE_NUMBER(2862);
	sp[0].o = frame[11].o;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_INPUT_PRIVATE_PASS;
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_ACCEPT;
	clinit_main_GameCanvas(ctx);
	sp[4].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, sp[4].o, (jint(888361)), (jobject(nullptr)));
	((func_nro_InputDlg_show_java_lang_String_nro_Command_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InputDlg_show_java_lang_String_nro_Command_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(2863);
	popStackFrame(ctx);
	return;
	}
label_48:;
	{
	LINE_NUMBER(2865);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((checkCast(ctx, &class_nro_InputDlg, (jobject(nullptr))))))->F_tfInput;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2866);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2867);
	SM_nro_InfoDlg_hide(ctx);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(2870);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((func_nro_Service_openLockAccProtect_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_openLockAccProtect_int])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2871);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(2872);
	frame[12].o = sp[0].o;
	LINE_NUMBER(2873);
	popStackFrame(ctx);
	return;
	}
label_49:;
	{
	LINE_NUMBER(2876);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((checkCast(ctx, &class_nro_InputDlg, (jobject(nullptr))))))->F_tfInput;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2877);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2878);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2879);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 < (6)) goto label_180;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_180;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(2881);
	frame[12].o = (frame[3].o);
	LINE_NUMBER(2882);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2883);
	frame[13].i = (jint(1));
	LINE_NUMBER(2884);
	frame[14].o = (frame[12].o);
	LINE_NUMBER(2885);
	frame[1].i = (jint(888391));
	LINE_NUMBER(2886);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_cancelAccountProtection;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2887);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	sp[1].o = frame[3].o;
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_YES;
	clinit_main_GameCanvas(ctx);
	sp[4].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, sp[4].o, (jint(888391)), (frame[14].o));
	clinit_nro_Command(ctx);
	sp[3].o = gcAlloc(ctx, &class_nro_Command);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_main_GameCanvas(ctx);
	sp[5].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[3].o, sp[4].o, sp[5].o, (jint(888391)), (frame[14].o));
	clinit_nro_Command(ctx);
	sp[4].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[5].o = (jobject)SF_nro_mResources_NO;
	clinit_main_GameCanvas(ctx);
	sp[6].o = (jobject)SF_main_GameCanvas_instance;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[4].o, sp[5].o, sp[6].o, (8882), (jobject(nullptr)));
	((func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(2890);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_msgdlg;
	((func_nro_MsgDlg_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MsgDlg_show])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2891);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(2892);
	frame[12].o = sp[0].o;
	LINE_NUMBER(2893);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_ALERT_PRIVATE_PASS_2;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2894);
	popStackFrame(ctx);
	return;
	}
label_180:;
	{
	LINE_NUMBER(2898);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_ALERT_PRIVATE_PASS_1;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2899);
	popStackFrame(ctx);
	return;
	}
label_50:;
	{
	LINE_NUMBER(2901);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getFlag_byte_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getFlag_byte_byte])(ctx, sp[0].o, (jint(0)), (jint(-1)));
	LINE_NUMBER(2902);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(2903);
	popStackFrame(ctx);
	return;
	}
label_51:;
	{
	LINE_NUMBER(2905);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	if (sp[0].o != nullptr) goto label_193;
	}
	{
	LINE_NUMBER(2906);
	clinit_nro_LoginScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_LoginScr);
	init_nro_LoginScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_loginScr = sp[0].o;
	}
label_193:;
	{
	LINE_NUMBER(2909);
	SM_nro_LoginScr_backToRegister(ctx);
	LINE_NUMBER(2910);
	popStackFrame(ctx);
	return;
	}
label_52:;
	LINE_NUMBER(2912);
	popStackFrame(ctx);
	INST_RETURN();
label_53:;
	LINE_NUMBER(2914);
	popStackFrame(ctx);
	INST_RETURN();
label_54:;
	{
	LINE_NUMBER(2916);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) != (14)) goto label_196;
	}
	{
	LINE_NUMBER(2917);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_can_not_do_when_die;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2918);
	popStackFrame(ctx);
	return;
	}
label_196:;
	{
	LINE_NUMBER(2921);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_openUIZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_openUIZone])(ctx, sp[0].o);
	LINE_NUMBER(2922);
	popStackFrame(ctx);
	return;
	}
label_55:;
	{
	LINE_NUMBER(2924);
	SM_lib_mSystem_onDisconnected_boolean(ctx, (jint(1)));
	LINE_NUMBER(2925);
	popStackFrame(ctx);
	return;
	}
label_56:;
	{
	LINE_NUMBER(2927);
	SM_nro_ServerListScreen_SetIpSelect_int_boolean(ctx, (17), (jint(0)));
	LINE_NUMBER(2928);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
	LINE_NUMBER(2929);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_waitToLogin = (jint(1));
	LINE_NUMBER(2930);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2931);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2932);
	goto label_68;
	}
label_57:;
	{
	LINE_NUMBER(2934);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2935);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2936);
	popStackFrame(ctx);
	return;
	}
label_58:;
	{
	LINE_NUMBER(2938);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2939);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2940);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_loadScreen) == 0) goto label_210;
	}
	{
	LINE_NUMBER(2941);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	LINE_NUMBER(2942);
	popStackFrame(ctx);
	return;
	}
label_210:;
	{
	LINE_NUMBER(2945);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_init])(ctx, sp[0].o);
	LINE_NUMBER(2946);
	popStackFrame(ctx);
	return;
	}
label_59:;
	{
	LINE_NUMBER(2948);
	SM_lib_mSystem_onDisconnected_boolean(ctx, (jint(1)));
	LINE_NUMBER(2949);
	popStackFrame(ctx);
	return;
	}
label_60:;
	{
	LINE_NUMBER(2951);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((checkCast(ctx, &class_nro_InputDlg, (jobject(nullptr))))))->F_tfInput;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2952);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2953);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2954);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 < (6)) goto label_218;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_218;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(2956);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[3].o));
	((func_nro_Service_activeAccProtect_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_activeAccProtect_int])(ctx, sp[0].o, temp0);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2957);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(2958);
	frame[12].o = sp[0].o;
	LINE_NUMBER(2959);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_ALERT_PRIVATE_PASS_2;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2960);
	popStackFrame(ctx);
	return;
	}
label_218:;
	{
	LINE_NUMBER(2964);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_ALERT_PRIVATE_PASS_1;
	SM_main_GameCanvas_startOKDlg_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2965);
	popStackFrame(ctx);
	return;
	}
label_61:;
	{
	LINE_NUMBER(2967);
	frame[3].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	LINE_NUMBER(2968);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2969);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2970);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[3].o));
	((func_nro_Service_clearAccProtect_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_clearAccProtect_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2971);
	popStackFrame(ctx);
	return;
	}
label_62:;
	{
	LINE_NUMBER(2973);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = jint(4);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Service_menu_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_menu_int_int_int])(ctx, sp[0].o, temp0, ((jint)((nro_Menu *) NULL_CHECK(sp[1].o))->F_menuSelectedItem), (jint(0)));
	LINE_NUMBER(2974);
	popStackFrame(ctx);
	return;
	}
label_63:;
	{
	LINE_NUMBER(2976);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_doLogin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_doLogin])(ctx, sp[0].o);
	LINE_NUMBER(2977);
	popStackFrame(ctx);
	return;
	}
label_64:;
	{
	LINE_NUMBER(2979);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2980);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2981);
	popStackFrame(ctx);
	return;
	}
label_65:;
	{
	LINE_NUMBER(2983);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_SplashScr(ctx);
	sp[1].o = (jobject)SF_nro_SplashScr_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_230;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_serverScreen;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_230;
	}
	{
	LINE_NUMBER(2984);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_loginScr;
	((func_nro_LoginScr_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_LoginScr_switchToMe])(ctx, sp[0].o);
	goto label_232;
	}
label_230:;
	{
	LINE_NUMBER(2986);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_serverScreen;
	((func_nro_ServerListScreen_switchToMe) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ServerListScreen_switchToMe])(ctx, sp[0].o);
	}
label_232:;
	{
	LINE_NUMBER(2989);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2990);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2991);
	popStackFrame(ctx);
	return;
	}
label_66:;
	{
	LINE_NUMBER(2993);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2994);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2995);
	popStackFrame(ctx);
	return;
	}
label_67:;
	{
	LINE_NUMBER(2997);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (jobject(nullptr));
	LINE_NUMBER(2998);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2999);
	popStackFrame(ctx);
	return;
	}
label_68:;
	LINE_NUMBER(3002);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_main_GameCanvas_clearAllPointerEvent(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:clearAllPointerEvent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(3005);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(3006);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerDown = (jint(0));
	LINE_NUMBER(3007);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustDown = (jint(0));
	LINE_NUMBER(3008);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(3009);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerMove = (jint(0));
	LINE_NUMBER(3010);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_lastSingleClick = (jlong(0));
	LINE_NUMBER(3011);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isPointerDowning = (jint(0));
	LINE_NUMBER(3012);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_main_GameCanvas_isWait_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:isWait", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(3015);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	clinit_nro_LoginScr(ctx);
	(sp++)->i = SF_nro_LoginScr_isContinueToLogin;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_waitToLogin;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_isWait;
	if ((--sp)->i != 0) goto label_1;
	clinit_nro_CreateCharScr(ctx);
	(sp++)->i = SF_nro_CreateCharScr_isCreateChar;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_main_GameCanvas(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_MotherCanvas(ctx);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameCanvas:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameCanvas(ctx);
	{
	LINE_NUMBER(17);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPlaySound = (jint(1));
	LINE_NUMBER(18);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_lowGraphic = (jint(0));
	LINE_NUMBER(19);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeNow = (jlong(0));
	LINE_NUMBER(20);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveNumberPad = (jint(0));
	LINE_NUMBER(21);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_moveMode = (jint(0));
	LINE_NUMBER(22);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveWASD = (jint(1));
	LINE_NUMBER(23);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isMoveArrows = (jint(1));
	LINE_NUMBER(191);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isTouch = (jint(0));
	LINE_NUMBER(195);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (15));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyPressed = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (15));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyReleased = sp[0].o;
	LINE_NUMBER(197);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (15));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyHold = sp[0].o;
	LINE_NUMBER(198);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyTabPressed = (jint(0));
	LINE_NUMBER(210);
	sp[0].o = (jobject)createArray(ctx, &class_nro_Position, (jint(4)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_arrPos = sp[0].o;
	LINE_NUMBER(280);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentFPS = (60);
	LINE_NUMBER(309);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(310);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_curPos = (jint(0));
	LINE_NUMBER(311);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (7));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgBlue = sp[0].o;
	LINE_NUMBER(312);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (7));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgViolet = sp[0].o;
	LINE_NUMBER(313);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (7));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgBlack = sp[0].o;
	LINE_NUMBER(314);
	clinit_nro_mHashTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_mHashTable);
	init_nro_mHashTable_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_danhHieu = sp[0].o;
	LINE_NUMBER(315);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_messageServer = sp[0].o;
	LINE_NUMBER(316);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isRequestMapID = (jint(-1));
	LINE_NUMBER(317);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_dir_ = (jint(-1));
	LINE_NUMBER(318);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(3)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgBorder = sp[0].o;
	LINE_NUMBER(319);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(3)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_imgSunSpec = sp[0].o;
	LINE_NUMBER(320);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_typeBg = (jint(-1));
	LINE_NUMBER(321);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_yb = sp[0].o;
	LINE_NUMBER(322);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_nBg = (jint(0));
	LINE_NUMBER(323);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (11);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_bgRain = sp[0].o;
	LINE_NUMBER(324);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(-1));
	frame[0].o = sp[0].o;
	LINE_NUMBER(325);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_lastTimePress = (jlong(0));
	LINE_NUMBER(326);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vFlyText"_j))));
	LINE_NUMBER(327);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_fps = (jint(0));
	LINE_NUMBER(328);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_xThongBaoTranslate = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (60));
	LINE_NUMBER(329);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_flyTexts = sp[0].o;
	LINE_NUMBER(330);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustDown = (jint(0));
	LINE_NUMBER(331);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	LINE_NUMBER(332);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isResume = (jint(1));
	LINE_NUMBER(333);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_timeLoading = (15);
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_main_GameCanvas[] {
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
	(void *) M_nro_MotherCanvas_run,
	(void *) M_nro_MotherCanvas_getY_R_int,
	(void *) M_nro_MotherCanvas_getH_R_int,
	(void *) M_nro_MotherCanvas_pointerDragged_int_int,
	(void *) M_nro_MotherCanvas_pointerPressed_int_int,
	(void *) M_nro_MotherCanvas_pointerReleased_int_int,
	(void *) M_main_GameCanvas_onPointerDragged_int_int,
	(void *) M_main_GameCanvas_onPointerPressed_int_int,
	(void *) M_main_GameCanvas_onPointerReleased_int_int,
	(void *) M_main_GameCanvas_update,
	(void *) M_main_GameCanvas_perform_int_java_lang_Object,
	(void *) M_main_GameCanvas_hasPointerEvents_R_boolean,
	(void *) M_main_GameCanvas_keyPressed_int,
	(void *) M_main_GameCanvas_keyTyped_char,
	(void *) M_main_GameCanvas_keyReleased_int,
	(void *) M_main_GameCanvas_paint_lib_mGraphics,
	(void *) M_main_GameCanvas_sizeChanged_int_int,
	(void *) M_main_GameCanvas_startDust_int_int_int_R_boolean,
	(void *) M_main_GameCanvas_updateDust,
	(void *) M_main_GameCanvas_resetToLoginScrz,
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
	{ "run", "()V" },
	{ "getY", "()I" },
	{ "getH", "()I" },
	{ "pointerDragged", "(II)V" },
	{ "pointerPressed", "(II)V" },
	{ "pointerReleased", "(II)V" },
	{ "onPointerDragged", "(II)V" },
	{ "onPointerPressed", "(II)V" },
	{ "onPointerReleased", "(II)V" },
	{ "update", "()V" },
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "hasPointerEvents", "()Z" },
	{ "keyPressed", "(I)V" },
	{ "keyTyped", "(C)V" },
	{ "keyReleased", "(I)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "sizeChanged", "(II)V" },
	{ "startDust", "(III)Z" },
	{ "updateDust", "()V" },
	{ "resetToLoginScrz", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "isPlaySound", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPlaySound, "Z", 9 },
	{ "lowGraphic", &class_boolean, (intptr_t) &SF_main_GameCanvas_lowGraphic, "Z", 9 },
	{ "timeNow", &class_long, (intptr_t) &SF_main_GameCanvas_timeNow, "J", 9 },
	{ "isMoveNumberPad", &class_boolean, (intptr_t) &SF_main_GameCanvas_isMoveNumberPad, "Z", 9 },
	{ "moveMode", &class_int, (intptr_t) &SF_main_GameCanvas_moveMode, "I", 9 },
	{ "isMoveWASD", &class_boolean, (intptr_t) &SF_main_GameCanvas_isMoveWASD, "Z", 9 },
	{ "isMoveArrows", &class_boolean, (intptr_t) &SF_main_GameCanvas_isMoveArrows, "Z", 9 },
	{ "isLoading", &class_boolean, (intptr_t) &SF_main_GameCanvas_isLoading, "Z", 9 },
	{ "isTouch", &class_boolean, (intptr_t) &SF_main_GameCanvas_isTouch, "Z", 9 },
	{ "isTouchControl", &class_boolean, (intptr_t) &SF_main_GameCanvas_isTouchControl, "Z", 9 },
	{ "isTouchControlSmallScreen", &class_boolean, (intptr_t) &SF_main_GameCanvas_isTouchControlSmallScreen, "Z", 9 },
	{ "instance", &class_main_GameCanvas, (intptr_t) &SF_main_GameCanvas_instance, "Lmain/GameCanvas;", 9 },
	{ "keyPressed", getArrayClass(&class_boolean, 1), (intptr_t) &SF_main_GameCanvas_keyPressed, "[Z", 9 },
	{ "keyReleased", getArrayClass(&class_boolean, 1), (intptr_t) &SF_main_GameCanvas_keyReleased, "[Z", 10 },
	{ "keyHold", getArrayClass(&class_boolean, 1), (intptr_t) &SF_main_GameCanvas_keyHold, "[Z", 9 },
	{ "keyTabPressed", &class_boolean, (intptr_t) &SF_main_GameCanvas_keyTabPressed, "Z", 9 },
	{ "isPointerDown", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPointerDown, "Z", 9 },
	{ "isPointerClick", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPointerClick, "Z", 9 },
	{ "isPointerJustRelease", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPointerJustRelease, "Z", 9 },
	{ "isPointerSelect", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPointerSelect, "Z", 9 },
	{ "isPointerMove", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPointerMove, "Z", 9 },
	{ "px", &class_int, (intptr_t) &SF_main_GameCanvas_px, "I", 9 },
	{ "py", &class_int, (intptr_t) &SF_main_GameCanvas_py, "I", 9 },
	{ "pxFirst", &class_int, (intptr_t) &SF_main_GameCanvas_pxFirst, "I", 9 },
	{ "pyFirst", &class_int, (intptr_t) &SF_main_GameCanvas_pyFirst, "I", 9 },
	{ "pxLast", &class_int, (intptr_t) &SF_main_GameCanvas_pxLast, "I", 9 },
	{ "pyLast", &class_int, (intptr_t) &SF_main_GameCanvas_pyLast, "I", 9 },
	{ "arrPos", getArrayClass(&class_nro_Position, 1), (intptr_t) &SF_main_GameCanvas_arrPos, "[Lnro/Position;", 9 },
	{ "gameTick", &class_int, (intptr_t) &SF_main_GameCanvas_gameTick, "I", 9 },
	{ "taskTick", &class_int, (intptr_t) &SF_main_GameCanvas_taskTick, "I", 9 },
	{ "aq", &class_int, (intptr_t) &SF_main_GameCanvas_aq, "I", 10 },
	{ "isEff1", &class_boolean, (intptr_t) &SF_main_GameCanvas_isEff1, "Z", 9 },
	{ "isEff2", &class_boolean, (intptr_t) &SF_main_GameCanvas_isEff2, "Z", 9 },
	{ "timeTickEff1", &class_long, (intptr_t) &SF_main_GameCanvas_timeTickEff1, "J", 10 },
	{ "timeTickEff2", &class_long, (intptr_t) &SF_main_GameCanvas_timeTickEff2, "J", 10 },
	{ "w", &class_int, (intptr_t) &SF_main_GameCanvas_w, "I", 9 },
	{ "h", &class_int, (intptr_t) &SF_main_GameCanvas_h, "I", 9 },
	{ "hw", &class_int, (intptr_t) &SF_main_GameCanvas_hw, "I", 9 },
	{ "hh", &class_int, (intptr_t) &SF_main_GameCanvas_hh, "I", 9 },
	{ "currentScreen", &class_nro_mScreen, (intptr_t) &SF_main_GameCanvas_currentScreen, "Lnro/mScreen;", 9 },
	{ "menu", &class_nro_Menu, (intptr_t) &SF_main_GameCanvas_menu, "Lnro/Menu;", 9 },
	{ "panel", &class_nro_Panel, (intptr_t) &SF_main_GameCanvas_panel, "Lnro/Panel;", 9 },
	{ "panel2", &class_nro_Panel, (intptr_t) &SF_main_GameCanvas_panel2, "Lnro/Panel;", 9 },
	{ "loginScr", &class_nro_LoginScr, (intptr_t) &SF_main_GameCanvas_loginScr, "Lnro/LoginScr;", 9 },
	{ "registerScr", &class_nro_RegisterScreen, (intptr_t) &SF_main_GameCanvas_registerScr, "Lnro/RegisterScreen;", 9 },
	{ "currentDialog", &class_nro_Dialog, (intptr_t) &SF_main_GameCanvas_currentDialog, "Lnro/Dialog;", 9 },
	{ "msgdlg", &class_nro_MsgDlg, (intptr_t) &SF_main_GameCanvas_msgdlg, "Lnro/MsgDlg;", 9 },
	{ "paintz", &class_nro_Paint, (intptr_t) &SF_main_GameCanvas_paintz, "Lnro/Paint;", 9 },
	{ "imgBG", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgBG, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "skyColor", &class_int, (intptr_t) &SF_main_GameCanvas_skyColor, "I", 9 },
	{ "curPos", &class_int, (intptr_t) &SF_main_GameCanvas_curPos, "I", 10 },
	{ "bgW", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_bgW, "[I", 9 },
	{ "bgH", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_bgH, "[I", 9 },
	{ "g", &class_lib_mGraphics, offsetof(main_GameCanvas, F_g), "Llib/mGraphics;", 2 },
	{ "imgBlue", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgBlue, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgViolet", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgViolet, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgBlack", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgBlack, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "danhHieu", &class_nro_mHashTable, (intptr_t) &SF_main_GameCanvas_danhHieu, "Lnro/mHashTable;", 9 },
	{ "messageServer", &class_nro_MyVector, (intptr_t) &SF_main_GameCanvas_messageServer, "Lnro/MyVector;", 9 },
	{ "debugUpdate", &class_nro_MyVector, (intptr_t) &SF_main_GameCanvas_debugUpdate, "Lnro/MyVector;", 10 },
	{ "debugPaint", &class_nro_MyVector, (intptr_t) &SF_main_GameCanvas_debugPaint, "Lnro/MyVector;", 10 },
	{ "debugSession", &class_nro_MyVector, (intptr_t) &SF_main_GameCanvas_debugSession, "Lnro/MyVector;", 9 },
	{ "isFocusPanel2", &class_boolean, (intptr_t) &SF_main_GameCanvas_isFocusPanel2, "Z", 9 },
	{ "isRequestMapID", &class_int, (intptr_t) &SF_main_GameCanvas_isRequestMapID, "I", 9 },
	{ "waitingTimeChangeMap", &class_long, (intptr_t) &SF_main_GameCanvas_waitingTimeChangeMap, "J", 9 },
	{ "dir_", &class_int, (intptr_t) &SF_main_GameCanvas_dir_, "I", 10 },
	{ "tickWaitThongBao", &class_int, offsetof(main_GameCanvas, F_tickWaitThongBao), "I", 2 },
	{ "paintBG", &class_boolean, (intptr_t) &SF_main_GameCanvas_paintBG, "Z", 10 },
	{ "imgSun", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_main_GameCanvas_imgSun, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgSun2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_main_GameCanvas_imgSun2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgBorder", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgBorder, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgSunSpec", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgSunSpec, "[Ljavax/microedition/lcdui/Image;", 10 },
	{ "cloudX", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_cloudX, "[I", 9 },
	{ "cloudY", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_cloudY, "[I", 9 },
	{ "sunX", &class_int, (intptr_t) &SF_main_GameCanvas_sunX, "I", 10 },
	{ "sunY", &class_int, (intptr_t) &SF_main_GameCanvas_sunY, "I", 10 },
	{ "sunX2", &class_int, (intptr_t) &SF_main_GameCanvas_sunX2, "I", 10 },
	{ "sunY2", &class_int, (intptr_t) &SF_main_GameCanvas_sunY2, "I", 10 },
	{ "layerSpeed", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_layerSpeed, "[I", 10 },
	{ "moveX", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_moveX, "[I", 10 },
	{ "moveXSpeed", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_moveXSpeed, "[I", 10 },
	{ "isBoltEff", &class_boolean, (intptr_t) &SF_main_GameCanvas_isBoltEff, "Z", 9 },
	{ "boltActive", &class_boolean, (intptr_t) &SF_main_GameCanvas_boltActive, "Z", 10 },
	{ "tBolt", &class_int, (intptr_t) &SF_main_GameCanvas_tBolt, "I", 10 },
	{ "typeBg", &class_int, (intptr_t) &SF_main_GameCanvas_typeBg, "I", 9 },
	{ "transY", &class_int, (intptr_t) &SF_main_GameCanvas_transY, "I", 9 },
	{ "yb", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_yb, "[I", 10 },
	{ "colorTop", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_colorTop, "[I", 9 },
	{ "colorBotton", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_colorBotton, "[I", 10 },
	{ "nBg", &class_int, (intptr_t) &SF_main_GameCanvas_nBg, "I", 10 },
	{ "bgRain", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_bgRain, "[I", 10 },
	{ "imgCaycot", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_main_GameCanvas_imgCaycot, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "tam", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_main_GameCanvas_tam, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "isLoadBGok", &class_boolean, (intptr_t) &SF_main_GameCanvas_isLoadBGok, "Z", 10 },
	{ "lastTimePress", &class_long, (intptr_t) &SF_main_GameCanvas_lastTimePress, "J", 10 },
	{ "keyAsciiPress", &class_int, (intptr_t) &SF_main_GameCanvas_keyAsciiPress, "I", 9 },
	{ "img18", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_main_GameCanvas_img18, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "currentFPS", &class_int, (intptr_t) &SF_main_GameCanvas_currentFPS, "I", 9 },
	{ "fps", &class_int, (intptr_t) &SF_main_GameCanvas_fps, "I", 9 },
	{ "up", &class_int, (intptr_t) &SF_main_GameCanvas_up, "I", 10 },
	{ "timefps", &class_long, offsetof(main_GameCanvas, F_timefps), "J", 2 },
	{ "timeup", &class_long, offsetof(main_GameCanvas, F_timeup), "J", 2 },
	{ "thongBaoTest", &class_java_lang_String, (intptr_t) &SF_main_GameCanvas_thongBaoTest, "Ljava/lang/String;", 10 },
	{ "xThongBaoTranslate", &class_int, (intptr_t) &SF_main_GameCanvas_xThongBaoTranslate, "I", 10 },
	{ "flyTexts", &class_nro_MyVector, (intptr_t) &SF_main_GameCanvas_flyTexts, "Lnro/MyVector;", 10 },
	{ "count", &class_int, offsetof(main_GameCanvas, F_count), "I", 2 },
	{ "isPointerJustDown", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPointerJustDown, "Z", 9 },
	{ "dustX", getArrayClass(&class_int, 1), offsetof(main_GameCanvas, F_dustX), "[I", 2 },
	{ "dustY", getArrayClass(&class_int, 1), offsetof(main_GameCanvas, F_dustY), "[I", 2 },
	{ "dustState", getArrayClass(&class_int, 1), offsetof(main_GameCanvas, F_dustState), "[I", 2 },
	{ "wsState", getArrayClass(&class_int, 1), (intptr_t) &SF_main_GameCanvas_wsState, "[I", 10 },
	{ "imgWS", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_main_GameCanvas_imgWS, "[Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgShuriken", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_main_GameCanvas_imgShuriken, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgDust", getArrayClass(&class_javax_microedition_lcdui_Image, 2), (intptr_t) &SF_main_GameCanvas_imgDust, "[[Ljavax/microedition/lcdui/Image;", 10 },
	{ "isResume", &class_boolean, (intptr_t) &SF_main_GameCanvas_isResume, "Z", 9 },
	{ "serverScreen", &class_nro_ServerListScreen, (intptr_t) &SF_main_GameCanvas_serverScreen, "Lnro/ServerListScreen;", 9 },
	{ "chooseCharScr", &class_nro_ChooseCharScr, (intptr_t) &SF_main_GameCanvas_chooseCharScr, "Lnro/ChooseCharScr;", 9 },
	{ "serverScr", &class_nro_ServerScr, (intptr_t) &SF_main_GameCanvas_serverScr, "Lnro/ServerScr;", 9 },
	{ "_SelectCharScr", &class_nro_CreateCharScr, (intptr_t) &SF_main_GameCanvas__SelectCharScr, "Lnro/CreateCharScr;", 9 },
	{ "open3Hour", &class_boolean, (intptr_t) &SF_main_GameCanvas_open3Hour, "Z", 9 },
	{ "resetToLoginScr", &class_boolean, offsetof(main_GameCanvas, F_resetToLoginScr), "Z", 2 },
	{ "TIMEOUT", &class_long, (intptr_t) &SF_main_GameCanvas_TIMEOUT, "J", 10 },
	{ "timeLoading", &class_int, (intptr_t) &SF_main_GameCanvas_timeLoading, "I", 10 },
	{ "isPreloadStarted", &class_boolean, (intptr_t) &SF_main_GameCanvas_isPreloadStarted, "Z", 10 },
};

static MethodMetadata methods[] {
	{ "applyMoveMode", (intptr_t) SM_main_GameCanvas_applyMoveMode, 0, "()V", 9 },
	{ "cycleMoveMode", (intptr_t) SM_main_GameCanvas_cycleMoveMode, 0, "()V", 9 },
	{ "setMoveMode", (intptr_t) SM_main_GameCanvas_setMoveMode_int, 0, "(I)V", 9 },
	{ "loadMoveModeRMS", (intptr_t) SM_main_GameCanvas_loadMoveModeRMS, 0, "()V", 9 },
	{ "saveMoveModeRMS", (intptr_t) SM_main_GameCanvas_saveMoveModeRMS, 0, "()V", 9 },
	{ "getActiveTextField", (intptr_t) SM_main_GameCanvas_getActiveTextField_R_lib_input_TField, 0, "()Llib/input/TField;", 9 },
	{ "cycleFocusedTextField", (intptr_t) SM_main_GameCanvas_cycleFocusedTextField_boolean_R_boolean, 0, "(Z)Z", 9 },
	{ "isChatOrInputActive", (intptr_t) SM_main_GameCanvas_isChatOrInputActive_R_boolean, 0, "()Z", 9 },
	{ "isRawKeyPressed", (intptr_t) SM_main_GameCanvas_isRawKeyPressed_int_R_boolean, 0, "(I)Z", 10 },
	{ "hasPointerEvents", (intptr_t) M_main_GameCanvas_hasPointerEvents_R_boolean, VTABLE_main_GameCanvas_hasPointerEvents_R_boolean, "()Z", 1 },
	{ "<init>", (intptr_t) init_main_GameCanvas, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_main_GameCanvas_gI_R_main_GameCanvas, 0, "()Lmain/GameCanvas;", 9 },
	{ "connect", (intptr_t) SM_main_GameCanvas_connect, 0, "()V", 9 },
	{ "connect2", (intptr_t) SM_main_GameCanvas_connect2, 0, "()V", 9 },
	{ "resetTrans", (intptr_t) SM_main_GameCanvas_resetTrans_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "resetTransGameScr", (intptr_t) SM_main_GameCanvas_resetTransGameScr_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "update", (intptr_t) M_main_GameCanvas_update, VTABLE_main_GameCanvas_update, "()V", 17 },
	{ "doResetToLoginScr", (intptr_t) SM_main_GameCanvas_doResetToLoginScr, 0, "()V", 9 },
	{ "fillRect", (intptr_t) SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int, 0, "(Llib/mGraphics;IIIIII)V", 10 },
	{ "paintBackgroundtLayer", (intptr_t) SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "drawSun1", (intptr_t) SM_main_GameCanvas_drawSun1_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "drawSun2", (intptr_t) SM_main_GameCanvas_drawSun2_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "paintBGGameScr", (intptr_t) SM_main_GameCanvas_paintBGGameScr_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "getYBackground", (intptr_t) SM_main_GameCanvas_getYBackground_int, 0, "(I)V", 10 },
	{ "loadBG", (intptr_t) SM_main_GameCanvas_loadBG_int, 0, "(I)V", 9 },
	{ "randomRaintEff", (intptr_t) SM_main_GameCanvas_randomRaintEff_int, 0, "(I)V", 10 },
	{ "keyPressed", (intptr_t) M_main_GameCanvas_keyPressed_int, VTABLE_main_GameCanvas_keyPressed_int, "(I)V", 17 },
	{ "handleKeyPressed", (intptr_t) SM_main_GameCanvas_handleKeyPressed_int, 0, "(I)V", 9 },
	{ "keyTyped", (intptr_t) M_main_GameCanvas_keyTyped_char, VTABLE_main_GameCanvas_keyTyped_char, "(C)V", 17 },
	{ "keyReleased", (intptr_t) M_main_GameCanvas_keyReleased_int, VTABLE_main_GameCanvas_keyReleased_int, "(I)V", 17 },
	{ "handleKeyReleased", (intptr_t) SM_main_GameCanvas_handleKeyReleased_int, 0, "(I)V", 9 },
	{ "onPointerDragged", (intptr_t) M_main_GameCanvas_onPointerDragged_int_int, VTABLE_main_GameCanvas_onPointerDragged_int_int, "(II)V", 17 },
	{ "onPointerPressed", (intptr_t) M_main_GameCanvas_onPointerPressed_int_int, VTABLE_main_GameCanvas_onPointerPressed_int_int, "(II)V", 17 },
	{ "onPointerReleased", (intptr_t) M_main_GameCanvas_onPointerReleased_int_int, VTABLE_main_GameCanvas_onPointerReleased_int_int, "(II)V", 17 },
	{ "isPointerHoldIn", (intptr_t) SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean, 0, "(IIII)Z", 9 },
	{ "clearKeyPressed", (intptr_t) SM_main_GameCanvas_clearKeyPressed, 0, "()V", 9 },
	{ "clearKeyHold", (intptr_t) SM_main_GameCanvas_clearKeyHold, 0, "()V", 9 },
	{ "paint", (intptr_t) M_main_GameCanvas_paint_lib_mGraphics, VTABLE_main_GameCanvas_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "endDlg", (intptr_t) SM_main_GameCanvas_endDlg, 0, "()V", 9 },
	{ "startOKDlg", (intptr_t) SM_main_GameCanvas_startOKDlg_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "startWaitDlg", (intptr_t) SM_main_GameCanvas_startWaitDlg_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "startOKDlg1", (intptr_t) SM_main_GameCanvas_startOKDlg1_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "startWaitDlg", (intptr_t) SM_main_GameCanvas_startWaitDlg, 0, "()V", 9 },
	{ "startOK", (intptr_t) SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object, 0, "(Ljava/lang/String;ILjava/lang/Object;)V", 9 },
	{ "startYesNoDlg", (intptr_t) SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command, 0, "(Ljava/lang/String;Lnro/Command;Lnro/Command;)V", 9 },
	{ "sizeChanged", (intptr_t) M_main_GameCanvas_sizeChanged_int_int, VTABLE_main_GameCanvas_sizeChanged_int_int, "(II)V", 17 },
	{ "startDust", (intptr_t) M_main_GameCanvas_startDust_int_int_int_R_boolean, VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean, "(III)Z", 17 },
	{ "loadWaterSplash", (intptr_t) SM_main_GameCanvas_loadWaterSplash, 0, "()V", 10 },
	{ "updateDust", (intptr_t) M_main_GameCanvas_updateDust, VTABLE_main_GameCanvas_updateDust, "()V", 17 },
	{ "isPaint", (intptr_t) SM_main_GameCanvas_isPaint_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "paintShukiren", (intptr_t) SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics, 0, "(IILlib/mGraphics;)V", 9 },
	{ "resetToLoginScrz", (intptr_t) M_main_GameCanvas_resetToLoginScrz, VTABLE_main_GameCanvas_resetToLoginScrz, "()V", 17 },
	{ "isPointer", (intptr_t) SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean, 0, "(IIII)Z", 9 },
	{ "perform", (intptr_t) M_main_GameCanvas_perform_int_java_lang_Object, VTABLE_main_GameCanvas_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "clearAllPointerEvent", (intptr_t) SM_main_GameCanvas_clearAllPointerEvent, 0, "()V", 9 },
	{ "isWait", (intptr_t) SM_main_GameCanvas_isWait_R_boolean, 0, "()Z", 9 },
	{ "<clinit>", (intptr_t) clinit_main_GameCanvas, 0, "()V", 8 },
};

Class class_main_GameCanvas{
		.nativeName = (intptr_t) "main/GameCanvas",
		.parentClass = (intptr_t) &class_nro_MotherCanvas,
		.size = sizeof(main_GameCanvas),
		.classVtable = (intptr_t) vtable_main_GameCanvas,
		.staticInitializer = (intptr_t) clinit_main_GameCanvas,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_main_GameCanvas,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 124,
		.nativeFields = (intptr_t) fields,
		.methodCount = 57,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_main_GameCanvas = registerClass(&class_main_GameCanvas);

}

