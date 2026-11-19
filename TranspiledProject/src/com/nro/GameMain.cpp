#include "com/nro/GameMain.h"
#include "com/nro/GameMain_IWebFpsBridge.h"
#include "lib/input/TField.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME.h"
#include "java/util/Vector.h"
#include "nro/AutoTrainMenu.h"
#include "com/badlogic/gdx/Application.h"
#include "nro/SmallImage.h"
#include "java/lang/Runnable.h"
#include "lib/network/Session_ME2.h"
#include "javax/microedition/lcdui/Image.h"
#include "com/badlogic/gdx/Graphics.h"
#include "lib/sound/SoundMn.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "java/lang/Thread.h"
#include "com/nro/IOSNetworkConfig.h"
#include "nro/ImgByName.h"
#include "java/lang/Exception.h"
#include "nro/BgItem.h"
#include "lib/mGraphics.h"
#include "nro/FPSSettings.h"
#include "com/nro/GameMain_IWebInputBridge.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "nro/MyVector.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "nro/Res.h"
#include "com/badlogic/gdx/InputProcessor.h"
#include "com/nro/GameMain_MyGestureHandler.h"
#include "lib/MapKey.h"
#include "nro/Rms.h"
#include "com/badlogic/gdx/ApplicationListener.h"
#include "java/lang/System.h"
#include "nro/GameScr.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "java/lang/Boolean.h"
#include "main/GameCanvas.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "java/lang/InterruptedException.h"
#include "lib/Time.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/nro/GameMain_IDesktopInputBridge.h"
#include "com/badlogic/gdx/InputMultiplexer.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "java/lang/Math.h"
#include "com/nro/GameMain_IWebDiagnosticsBridge.h"
#include "com/badlogic/gdx/graphics/g2d/SpriteBatch.h"
#include "com/nro/GameMain_MyInputProcessor.h"
#include "nro/mHashTable.h"
#include "nro/EffectData.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "nro/Effect.h"
#include "com/badlogic/gdx/Input.h"
#include "nro/MobTemplate.h"
#include "com/nro/GameMain_IWebPlatformInfo.h"
#include "main/GameMidlet.h"
#include "nro/MotherCanvas.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_nro_GameMain_gmidlet;
jobject SF_com_nro_GameMain_me;
jobject SF_com_nro_GameMain_mainThreadName;
jbool SF_com_nro_GameMain_isStart;
jbool SF_com_nro_GameMain_isPause;
jbool SF_com_nro_GameMain_isPC;
jbool SF_com_nro_GameMain_isAndroid;
jbool SF_com_nro_GameMain_isIOS;
jbool SF_com_nro_GameMain_isWeb;
jbool SF_com_nro_GameMain_isWindowsPhone;
jbool SF_com_nro_GameMain_isJavaME;
jbool SF_com_nro_GameMain_deferWebAudioLoad;
jbyte SF_com_nro_GameMain_IPHONE_JB;
jbyte SF_com_nro_GameMain_IP_APPSTORE;
jfloat SF_com_nro_GameMain_TARGET_FPS;
jfloat SF_com_nro_GameMain_UPDATE_STEP;
jfloat SF_com_nro_GameMain_STEP_JITTER_EPSILON;
jint SF_com_nro_GameMain_targetFPS;
jbool SF_com_nro_GameMain_isSyncScreen;
jbool SF_com_nro_GameMain_isUnlimitedFPS;
jlong SF_com_nro_GameMain_nextFrameTimeNs;
jlong SF_com_nro_GameMain_fpsWindowStartNs;
jint SF_com_nro_GameMain_renderedFramesInWindow;
jfloat SF_com_nro_GameMain_smoothedFps;
jobject SF_com_nro_GameMain_webFpsBridge;
jobject SF_com_nro_GameMain_webDiagnosticsBridge;
volatile jbool SF_com_nro_GameMain_isWebGLContextLost;
volatile jbool SF_com_nro_GameMain_pendingContextRestore;
jobject SF_com_nro_GameMain_lastReportedScreen;
jint SF_com_nro_GameMain_lastReportedMapId;
jlong SF_com_nro_GameMain_lastDiagReportNs;
jobject SF_com_nro_GameMain_desktopInputBridge;
jobject SF_com_nro_GameMain_lastDesktopTextInputState;
jobject SF_com_nro_GameMain_webPlatformInfo;
jobject SF_com_nro_GameMain_webInputBridge;

void mark_com_nro_GameMain(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_nro_GameMain_gmidlet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_gmidlet)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_gmidlet, mark, depth + 1);
		if (SF_com_nro_GameMain_me)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_me)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_me, mark, depth + 1);
		if (SF_com_nro_GameMain_mainThreadName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_mainThreadName)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_mainThreadName, mark, depth + 1);
		if (SF_com_nro_GameMain_webFpsBridge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_webFpsBridge)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_webFpsBridge, mark, depth + 1);
		if (SF_com_nro_GameMain_webDiagnosticsBridge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_webDiagnosticsBridge)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_webDiagnosticsBridge, mark, depth + 1);
		if (SF_com_nro_GameMain_lastReportedScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_lastReportedScreen)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_lastReportedScreen, mark, depth + 1);
		if (SF_com_nro_GameMain_desktopInputBridge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_desktopInputBridge)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_desktopInputBridge, mark, depth + 1);
		if (SF_com_nro_GameMain_lastDesktopTextInputState)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_lastDesktopTextInputState)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_lastDesktopTextInputState, mark, depth + 1);
		if (SF_com_nro_GameMain_webPlatformInfo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_webPlatformInfo)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_webPlatformInfo, mark, depth + 1);
		if (SF_com_nro_GameMain_webInputBridge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_nro_GameMain_webInputBridge)->clazz)->markFunction)((jobject) SF_com_nro_GameMain_webInputBridge, mark, depth + 1);
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
	auto self = (com_nro_GameMain *) object;
	if (self->F_inputMultiplexer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputMultiplexer)->clazz)->markFunction)((jobject) self->F_inputMultiplexer, mark, depth + 1);
	if (self->F_inputProcessor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputProcessor)->clazz)->markFunction)((jobject) self->F_inputProcessor, mark, depth + 1);
	if (self->F_gestureHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gestureHandler)->clazz)->markFunction)((jobject) self->F_gestureHandler, mark, depth + 1);
	if (self->F_g)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_g)->clazz)->markFunction)((jobject) self->F_g, mark, depth + 1);
	if (self->F_camera)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camera)->clazz)->markFunction)((jobject) self->F_camera, mark, depth + 1);
}

void init_com_nro_GameMain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(41);
	((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_updateAcc = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_onWebGLContextLost(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:onWebGLContextLost", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(76);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isWebGLContextLost = (jint(1));
	LINE_NUMBER(77);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_pendingContextRestore = (jint(0));
	LINE_NUMBER(78);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	if (sp[0].o == nullptr) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(80);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	((func_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebDiagnosticsBridge, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"webglcontextlost"_j))), (((jobject) createStringLiteral(ctx, u8"WebGL context lost"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(82);
	goto label_7;
label_2:;
	LINE_NUMBER(81);
	INST_ASTORE(0);
label_7:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_onWebGLContextRestored(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:onWebGLContextRestored", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(87);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_pendingContextRestore = (jint(1));
	LINE_NUMBER(88);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isWebGLContextLost = (jint(0));
	LINE_NUMBER(89);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	if (sp[0].o == nullptr) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(91);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	((func_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebDiagnosticsBridge, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"webglcontextrestored"_j))), (((jobject) createStringLiteral(ctx, u8"WebGL context restored"_j))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(93);
	goto label_7;
label_2:;
	LINE_NUMBER(92);
	INST_ASTORE(0);
label_7:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_recoverWebGLResources(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:recoverWebGLResources", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(99);
	SM_lib_mGraphics_clearCache(ctx);
	LINE_NUMBER(100);
	clinit_javax_microedition_lcdui_Image(ctx);
	SF_javax_microedition_lcdui_Image_activeTextureCount = (jint(0));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_lib_mGraphics(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_mGraphics);
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_SpriteBatch);
	init_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx, sp[2].o);
	init_lib_mGraphics_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx, sp[1].o, sp[2].o);
	((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_g = (jref) sp[1].o;
	LINE_NUMBER(102);
	((func_com_nro_GameMain_setupCameraForPlatform) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_setupCameraForPlatform])(ctx, (frame[0].o));
	LINE_NUMBER(103);
	SM_lib_mFont_initTTF(ctx);
	LINE_NUMBER(104);
	SM_nro_SmallImage_clearHastable(ctx);
	LINE_NUMBER(105);
	SM_nro_SmallImage_freeBig(ctx);
	LINE_NUMBER(106);
	clinit_nro_SmallImage(ctx);
	SF_nro_SmallImage_imgEmpty = (jobject(nullptr));
	LINE_NUMBER(107);
	SM_nro_SmallImage_loadBigImage(ctx);
	LINE_NUMBER(108);
	SM_nro_BgItem_clearHashTable(ctx);
	LINE_NUMBER(109);
	clinit_nro_ImgByName(ctx);
	sp[0].o = (jobject)SF_nro_ImgByName_hashImagePath;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(110);
	clinit_nro_ImgByName(ctx);
	sp[0].o = (jobject)SF_nro_ImgByName_hashImagePath;
	((func_nro_mHashTable_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_clear])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(112);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(113);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(115);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_lastEff;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(116);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_lastEff;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	}
label_18:;
	{
	LINE_NUMBER(118);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(119);
	frame[1].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(120);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(121);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_data = (jref) (jobject(nullptr));
	}
label_24:;
	{
	LINE_NUMBER(119);
	INST_IINC(1, 1);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(125);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastTileID = (jint(-1));
	LINE_NUMBER(126);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = (jobject(nullptr));
	LINE_NUMBER(127);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o != sp[1].o) goto label_28;
	}
	{
	LINE_NUMBER(128);
	SM_nro_TileMap_loadMainTile(ctx);
	LINE_NUMBER(129);
	SM_main_GameCanvas_loadBG_int(ctx, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg));
	}
label_28:;
	{
	LINE_NUMBER(131);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(132);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	((func_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebDiagnosticsBridge, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"webgl_recovered"_j))), (((jobject) createStringLiteral(ctx, u8"Rebuilt SpriteBatch, fonts, and map textures"_j))));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(136);
	goto label_32;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(134);
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_32:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_setFpsConfig_int_boolean_boolean(jcontext ctx, jint param0, jbool param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:setFpsConfig", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(140);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_targetFPS = (frame[0].i);
	LINE_NUMBER(141);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isSyncScreen = (frame[1].i);
	LINE_NUMBER(142);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isUnlimitedFPS = (frame[2].i);
	LINE_NUMBER(143);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = (jlong(0));
	LINE_NUMBER(144);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_fpsWindowStartNs = (jlong(0));
	LINE_NUMBER(145);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_renderedFramesInWindow = (jint(0));
	LINE_NUMBER(147);
	if ((frame[0].i) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(148);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_smoothedFps = (jfloat((frame[0].i)));
	LINE_NUMBER(149);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentFPS = (frame[0].i);
	}
label_15:;
	{
	LINE_NUMBER(152);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webFpsBridge;
	if (sp[0].o == nullptr) goto label_18;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(154);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webFpsBridge;
	((func_com_nro_GameMain$IWebFpsBridge_setFpsConfig_int_boolean_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebFpsBridge, INDEX_com_nro_GameMain$IWebFpsBridge_setFpsConfig_int_boolean_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(156);
	goto label_18;
label_2:;
	LINE_NUMBER(155);
	INST_ASTORE(3);
label_18:;
	{
	LINE_NUMBER(159);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_graphics;
	if ((--sp)->o == nullptr) goto label_19;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(161);
	if ((frame[1].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(162);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	((func_com_badlogic_gdx_Graphics_setVSync_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_setVSync_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(163);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	((func_com_badlogic_gdx_Graphics_setForegroundFPS_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_setForegroundFPS_int, sp[0].o))(ctx, sp[0].o, (jint(0)));
	goto label_5;
	}
label_20:;
	{
	LINE_NUMBER(164);
	if ((frame[2].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(165);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	((func_com_badlogic_gdx_Graphics_setVSync_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_setVSync_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	((func_com_badlogic_gdx_Graphics_setForegroundFPS_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_setForegroundFPS_int, sp[0].o))(ctx, sp[0].o, (jint(0)));
	goto label_5;
	}
label_23:;
	{
	LINE_NUMBER(167);
	if ((frame[0].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(168);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	((func_com_badlogic_gdx_Graphics_setVSync_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_setVSync_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(169);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	((func_com_badlogic_gdx_Graphics_setForegroundFPS_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_setForegroundFPS_int, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(172);
	goto label_19;
label_6:;
	LINE_NUMBER(171);
	INST_ASTORE(3);
label_19:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_nro_GameMain_readClipboardText_R_java_lang_String(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:readClipboardText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(229);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_desktopInputBridge;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(230);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_desktopInputBridge;
	sp[0].o = (jobject)((func_com_nro_GameMain$IDesktopInputBridge_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IDesktopInputBridge, INDEX_com_nro_GameMain$IDesktopInputBridge_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(231);
	if ((frame[0].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(232);
	INST_ALOAD(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(235);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(236);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Clipboard, INDEX_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(237);
	if ((frame[0].o) == nullptr) goto label_13;
	}
	INST_ALOAD(0);
	goto label_5;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_5:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	LINE_NUMBER(240);
	goto label_14;
label_2:;
	LINE_NUMBER(239);
	INST_ASTORE(0);
label_14:;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_writeClipboardText_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:writeClipboardText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(245);
	if ((frame[0].o) != nullptr) goto label_0;
	}
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(249);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_desktopInputBridge;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(250);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_desktopInputBridge;
	((func_com_nro_GameMain$IDesktopInputBridge_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IDesktopInputBridge, INDEX_com_nro_GameMain$IDesktopInputBridge_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(253);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(254);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard, sp[0].o))(ctx, sp[0].o);
	((func_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Clipboard, INDEX_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(257);
	goto label_11;
label_2:;
	LINE_NUMBER(256);
	INST_ASTORE(1);
label_11:;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_syncDesktopImeState(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:syncDesktopImeState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(261);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_desktopInputBridge;
	if (sp[0].o != nullptr) goto label_5;
	}
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)SM_main_GameCanvas_getActiveTextField_R_lib_input_TField(ctx);
	if (sp[0].o != nullptr) goto label_7;
	}
	sp->i = (jint)SM_nro_AutoTrainMenu_isInputFocused_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_8;
label_7:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[0].i = sp[0].i;
	LINE_NUMBER(265);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_lastDesktopTextInputState;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_lastDesktopTextInputState;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, sp[0].o);
	if (temp0 == (frame[0].i)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[0].i));
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastDesktopTextInputState = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(268);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_desktopInputBridge;
	((func_com_nro_GameMain$IDesktopInputBridge_setTextInputActive_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IDesktopInputBridge, INDEX_com_nro_GameMain$IDesktopInputBridge_setTextInputActive_boolean, sp[0].o))(ctx, sp[0].o, (frame[0].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(270);
	goto label_12;
label_2:;
	LINE_NUMBER(269);
	INST_ASTORE(1);
label_12:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_com_nro_GameMain_getWidth_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:getWidth", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(632);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_SIPUSH(800);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_com_nro_GameMain_getHeight_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:getHeight", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(638);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_SIPUSH(480);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_postRunnable_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:postRunnable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(645);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(646);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(648);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(650);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_setupCameraForPlatform(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:setupCameraForPlatform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[1].o))(ctx, sp[1].o);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp1 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[1].o))(ctx, sp[1].o);
	((func_com_nro_GameMain_setupCameraForPlatform_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_nro_GameMain_setupCameraForPlatform_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain_setupCameraForPlatform_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:setupCameraForPlatform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(657);
	if ((frame[1].i) <= 0) goto label_5;
	}
	{
	jfloat temp0 = jfloat((frame[1].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(658);
	if ((frame[2].i) <= 0) goto label_8;
	}
	{
	jfloat temp0 = jfloat((frame[2].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jint temp0 = (jint)((func_com_badlogic_gdx_Graphics_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	}
label_9:;
	INST_FSTORE(4);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(661);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glViewport_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glViewport_int_int_int_int, sp[0].o))(ctx, sp[0].o, (jint(0)), (jint(0)), (jint((frame[3].f))), (jint((frame[4].f))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(662);
	goto label_10;
label_2:;
	INST_ASTORE(5);
label_10:;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_OrthographicCamera(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_OrthographicCamera);
	init_com_badlogic_gdx_graphics_OrthographicCamera_float_float(ctx, sp[1].o, (frame[3].f), (frame[4].f));
	((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_camera = (jref) sp[1].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_viewportWidth = (frame[3].f);
	LINE_NUMBER(668);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[0].o))->F_viewportHeight = (frame[4].f);
	}
label_13:;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	((func_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_setToOrtho_boolean_float_float])(ctx, sp[0].o, (jint(1)), (frame[3].f), (frame[4].f));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	((func_com_badlogic_gdx_graphics_OrthographicCamera_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update])(ctx, sp[0].o);
	LINE_NUMBER(673);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_17;
	}
	{
	LINE_NUMBER(674);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Web Screen (CSS): "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(675);
	((func_com_nro_GameMain_checkZoomLevelWeb_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_checkZoomLevelWeb_float_float])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(676);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) == 0) goto label_21;
	}
	{
	LINE_NUMBER(677);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Screen: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(678);
	((func_com_nro_GameMain_checkZoomLevelIOS_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_checkZoomLevelIOS_float_float])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(680);
	((func_com_nro_GameMain_checkZoomLevel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_checkZoomLevel])(ctx, (frame[0].o));
	}
label_20:;
	LINE_NUMBER(682);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_checkZoomLevelIOS_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:checkZoomLevelIOS", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(686);
	frame[3].f = ((frame[1].f) * (frame[2].f));
	LINE_NUMBER(687);
	if ((floatCompare((frame[3].f), (jfloat(2073600.0f)), -1)) < 0) goto label_2;
	}
	INST_ICONST(4);
	goto label_3;
label_2:;
	INST_ICONST(3);
label_3:;
	{
	sp -= 1;
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = sp[0].i;
	LINE_NUMBER(688);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Screen size: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", ZoomLevel: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(689);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain_initaliseInputProcessors(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:initaliseInputProcessors", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(692);
	sp[0].o = frame[0].o;
	clinit_com_nro_GameMain$MyInputProcessor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_nro_GameMain$MyInputProcessor);
	init_com_nro_GameMain$MyInputProcessor_com_nro_GameMain(ctx, sp[1].o, (frame[0].o));
	((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_inputProcessor = (jref) sp[1].o;
	LINE_NUMBER(693);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	sp[1].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_inputProcessor;
	((func_com_badlogic_gdx_Input_setInputProcessor_com_badlogic_gdx_InputProcessor) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setInputProcessor_com_badlogic_gdx_InputProcessor, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(694);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setCatchKey_int_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setCatchKey_int_boolean, sp[0].o))(ctx, sp[0].o, (61), (jint(1)));
	LINE_NUMBER(695);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setCatchKey_int_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setCatchKey_int_boolean, sp[0].o))(ctx, sp[0].o, (131), (jint(1)));
	LINE_NUMBER(696);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setCatchKey_int_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setCatchKey_int_boolean, sp[0].o))(ctx, sp[0].o, (132), (jint(1)));
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain_checkZoomLevel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:checkZoomLevel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(701);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(2));
	LINE_NUMBER(702);
	jint temp0 = (jint)SM_com_nro_GameMain_getWidth_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(703);
	jint temp1 = (jint)SM_com_nro_GameMain_getHeight_R_int(ctx);
	frame[2].i = temp1;
	LINE_NUMBER(705);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Android;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	LINE_NUMBER(707);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_iOS;
	if (sp[0].o != sp[1].o) goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(708);
	if (((frame[1].i) * (frame[2].i)) < (jint(2073600))) goto label_8;
	}
	{
	LINE_NUMBER(709);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(4));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(711);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(3));
	}
label_10:;
	LINE_NUMBER(713);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(716);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(717);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(2));
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(720);
	if (((frame[1].i) * (frame[2].i)) < (jint(2073600))) goto label_14;
	}
	{
	LINE_NUMBER(721);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(4));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(722);
	if (((frame[1].i) * (frame[2].i)) < (jint(691200))) goto label_17;
	}
	{
	LINE_NUMBER(723);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(3));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(724);
	if (((frame[1].i) * (frame[2].i)) <= (jint(153600))) goto label_19;
	}
	{
	LINE_NUMBER(725);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(2));
	goto label_16;
	}
label_19:;
	{
	LINE_NUMBER(727);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(1));
	}
label_16:;
	LINE_NUMBER(729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_checkZoomLevelWeb_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:checkZoomLevelWeb", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(758);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(759);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebPlatformInfo_getTargetZoomLevel_R_int) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebPlatformInfo, INDEX_com_nro_GameMain$IWebPlatformInfo_getTargetZoomLevel_R_int, sp[0].o))(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(760);
	if ((frame[3].i) >= (jint(3))) goto label_4;
	}
	INST_ICONST(3);
	INST_ISTORE(3);
label_4:;
	{
	LINE_NUMBER(761);
	if ((frame[3].i) <= (jint(4))) goto label_5;
	}
	INST_ICONST(4);
	INST_ISTORE(3);
label_5:;
	{
	LINE_NUMBER(762);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (frame[3].i);
	LINE_NUMBER(763);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Web Zoom] Using detected target zoom: x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(764);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(767);
	frame[3].f = ((frame[1].f) * (frame[2].f));
	LINE_NUMBER(768);
	if ((floatCompare((frame[3].f), (jfloat(3500000.0f)), -1)) < 0) goto label_9;
	}
	{
	LINE_NUMBER(769);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(4));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(771);
	clinit_lib_mGraphics(ctx);
	SF_lib_mGraphics_zoomLevel = (jint(3));
	}
label_11:;
	{
	LINE_NUMBER(773);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Web Zoom] Fallback zoomLevel = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(774);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain_create(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:create", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getName_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o == (((jobject) createStringLiteral(ctx, u8"Main"_j)))) goto label_4;
	}
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setName_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Main"_j))));
	}
label_4:;
	{
	LINE_NUMBER(783);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Android;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isAndroid = sp[0].i;
	LINE_NUMBER(784);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isPC = sp[0].i;
	LINE_NUMBER(785);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_iOS;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isIOS = sp[0].i;
	LINE_NUMBER(786);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_WebGL;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isWeb = sp[0].i;
	LINE_NUMBER(788);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_18;
	}
	{
	LINE_NUMBER(789);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Running on Web (TeaVM/WebGL)"_j))));
	LINE_NUMBER(790);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_clientTypec = (jint(4));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(791);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isPC) == 0) goto label_22;
	}
	{
	LINE_NUMBER(792);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Running on PC"_j))));
	LINE_NUMBER(793);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_clientTypec = (jint(4));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(794);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) == 0) goto label_25;
	}
	{
	LINE_NUMBER(795);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Running on Android"_j))));
	goto label_21;
	}
label_25:;
	{
	LINE_NUMBER(796);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) == 0) goto label_27;
	}
	{
	LINE_NUMBER(797);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Running on iOS"_j))));
	LINE_NUMBER(798);
	clinit_lib_mSystem(ctx);
	SF_lib_mSystem_clientTypec = (jint(5));
	LINE_NUMBER(799);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boot.config"_j))));
	SM_com_nro_IOSNetworkConfig_load_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o);
	goto label_21;
	}
label_27:;
	{
	LINE_NUMBER(801);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Running on unknown platform: "_j))));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(804);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getName_R_java_lang_String])(ctx, sp[0].o);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_mainThreadName = sp[0].o;
	LINE_NUMBER(805);
	((func_com_nro_GameMain_initaliseInputProcessors) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_initaliseInputProcessors])(ctx, (frame[0].o));
	LINE_NUMBER(806);
	SM_lib_MapKey_load(ctx);
	LINE_NUMBER(809);
	((func_com_nro_GameMain_setupCameraForPlatform) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_setupCameraForPlatform])(ctx, (frame[0].o));
	LINE_NUMBER(812);
	SM_lib_mFont_initTTF(ctx);
	LINE_NUMBER(814);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_me = (frame[0].o);
	LINE_NUMBER(815);
	sp[0].o = frame[0].o;
	clinit_lib_mGraphics(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_mGraphics);
	clinit_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_SpriteBatch);
	init_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx, sp[2].o);
	init_lib_mGraphics_com_badlogic_gdx_graphics_g2d_SpriteBatch(ctx, sp[1].o, sp[2].o);
	((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_g = (jref) sp[1].o;
	LINE_NUMBER(817);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Starting GameMidlet initialization..."_j))));
	LINE_NUMBER(818);
	clinit_main_GameMidlet(ctx);
	sp[0].o = gcAlloc(ctx, &class_main_GameMidlet);
	init_main_GameMidlet(ctx, sp[0].o);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_gmidlet = sp[0].o;
	LINE_NUMBER(819);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_gmidlet;
	((func_main_GameMidlet_startApp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_startApp])(ctx, sp[0].o);
	LINE_NUMBER(822);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_deferWebAudioLoad) != 0) goto label_41;
	}
	LINE_NUMBER(823);
	SM_lib_sound_SoundMn_loadSound(ctx);
label_41:;
	{
	LINE_NUMBER(825);
	SM_nro_FPSSettings_loadRMS(ctx);
	LINE_NUMBER(826);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"---- "_j))));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(829);
	goto label_44;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(827);
	frame[1].o = sp[0].o;
	LINE_NUMBER(828);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_44:;
	LINE_NUMBER(830);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:resize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(835);
	if ((frame[1].i) <= 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i > 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(836);
	frame[3].i = (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	LINE_NUMBER(837);
	((func_com_nro_GameMain_setupCameraForPlatform_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_nro_GameMain_setupCameraForPlatform_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(838);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(839);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	jint temp0 = (jint)((func_main_GameCanvas_getY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_getY_R_int])(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_w = temp0;
	LINE_NUMBER(840);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	jint temp1 = (jint)((func_main_GameCanvas_getH_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_getH_R_int])(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_h = temp1;
	LINE_NUMBER(841);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_hw = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	LINE_NUMBER(842);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_hh = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2)));
	LINE_NUMBER(843);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_sizeChanged_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_sizeChanged_int_int])(ctx, sp[0].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	}
label_5:;
	{
	LINE_NUMBER(845);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) == (frame[3].i)) goto label_11;
	}
	LINE_NUMBER(846);
	SM_lib_mFont_initTTF(ctx);
label_11:;
	LINE_NUMBER(848);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:adjustTouchCoordinatesIOS", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(852);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_paceFrameIfNeeded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:paceFrameIfNeeded", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isPC) != 0) goto label_5;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isWeb;
	if ((--sp)->i == 0) goto label_6;
	clinit_com_nro_GameMain(ctx);
	(sp++)->o = SF_com_nro_GameMain_webFpsBridge;
	if ((--sp)->o == nullptr) goto label_6;
label_5:;
	LINE_NUMBER(856);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(858);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isSyncScreen) != 0) goto label_7;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isUnlimitedFPS;
	if ((--sp)->i != 0) goto label_7;
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_targetFPS;
	if ((--sp)->i > 0) goto label_8;
label_7:;
	{
	LINE_NUMBER(859);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = (jlong(0));
	LINE_NUMBER(860);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(863);
	frame[1].l = ((jlong(1000000000ll)) / (jlong((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_targetFPS))));
	LINE_NUMBER(864);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(865);
	if ((longCompare((clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_nextFrameTimeNs), (jlong(0)))) > 0) goto label_12;
	}
	{
	LINE_NUMBER(866);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = ((frame[3].l) + (frame[1].l));
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return;
	}
label_12:;
	{
	LINE_NUMBER(870);
	frame[5].l = ((clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_nextFrameTimeNs) - (frame[3].l));
	LINE_NUMBER(871);
	if ((longCompare((frame[5].l), (jlong(0)))) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(872);
	frame[7].l = (((frame[5].l) - (jlong(1500000ll))) / (jlong(1000000ll)));
	LINE_NUMBER(873);
	if ((longCompare((frame[7].l), (jlong(0)))) <= 0) goto label_19;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(875);
	SM_java_lang_Thread_sleep_long(ctx, (frame[7].l));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(877);
	goto label_19;
label_2:;
	LINE_NUMBER(876);
	INST_ASTORE(9);
label_19:;
	{
	LINE_NUMBER(879);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	if ((longCompare(temp0, (clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_nextFrameTimeNs))) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(880);
	SM_java_lang_Thread_yield(ctx);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(884);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = ((clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_nextFrameTimeNs) + (frame[1].l));
	LINE_NUMBER(885);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[7].l = temp0;
	LINE_NUMBER(886);
	if ((longCompare(((frame[7].l) - (clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_nextFrameTimeNs)), ((frame[1].l) * (jlong(2ll))))) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(887);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = (frame[7].l);
	}
label_23:;
	LINE_NUMBER(889);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_recordRenderedFrame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:recordRenderedFrame", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(892);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(893);
	if ((longCompare((clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_fpsWindowStartNs), (jlong(0)))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(894);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_fpsWindowStartNs = (frame[1].l);
	LINE_NUMBER(895);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_renderedFramesInWindow = (jint(0));
	LINE_NUMBER(896);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(899);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_renderedFramesInWindow = ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_renderedFramesInWindow) + (jint(1)));
	LINE_NUMBER(900);
	frame[3].l = ((frame[1].l) - (clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_fpsWindowStartNs));
	LINE_NUMBER(901);
	if ((longCompare((frame[3].l), (jlong(500000000ll)))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(902);
	frame[5].f = (((jfloat((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_renderedFramesInWindow))) * (jfloat(1.000000e+09f))) / (jfloat((frame[3].l))));
	LINE_NUMBER(903);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_smoothedFps = (((clinit_com_nro_GameMain(ctx), (jfloat)SF_com_nro_GameMain_smoothedFps) * (jfloat(0.25f))) + ((frame[5].f) * (jfloat(0.75f))));
	LINE_NUMBER(904);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (clinit_com_nro_GameMain(ctx), (jfloat)SF_com_nro_GameMain_smoothedFps));
	frame[6].i = temp0;
	LINE_NUMBER(906);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isSyncScreen) != 0) goto label_17;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isUnlimitedFPS;
	if ((--sp)->i != 0) goto label_17;
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_targetFPS;
	if ((--sp)->i <= 0) goto label_17;
	{
	LINE_NUMBER(907);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[6].i) - (clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_targetFPS)));
	if (temp0 > (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(908);
	frame[6].i = (clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_targetFPS);
	}
label_17:;
	{
	LINE_NUMBER(911);
	if ((frame[6].i) >= (jint(1))) goto label_20;
	}
	{
	LINE_NUMBER(912);
	frame[6].i = (jint(1));
	}
label_20:;
	{
	LINE_NUMBER(914);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentFPS = (frame[6].i);
	LINE_NUMBER(916);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	if ((longCompare(((frame[1].l) - (clinit_com_nro_GameMain(ctx), (jlong)SF_com_nro_GameMain_lastDiagReportNs)), (jlong(3000000000ll)))) < 0) goto label_23;
	}
	{
	LINE_NUMBER(917);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastDiagReportNs = (frame[1].l);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(919);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(920);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_27;
	}
label_25:;
	LINE_NUMBER(921);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
label_27:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(922);
	frame[8].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID);
	LINE_NUMBER(923);
	sp[0].o = frame[7].o;
	clinit_com_nro_GameMain(ctx);
	sp[1].o = (jobject)SF_com_nro_GameMain_lastReportedScreen;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_30;
	}
	{
	if ((frame[8].i) == (clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_lastReportedMapId)) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(924);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"scene_change"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"screen="_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[7].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8", mapId="_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[8].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8", prevScreen="_j))));
	clinit_com_nro_GameMain(ctx);
	sp[3].o = (jobject)SF_com_nro_GameMain_lastReportedScreen;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8", prevMap="_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_lastReportedMapId));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebDiagnosticsBridge, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(926);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastReportedScreen = (frame[7].o);
	LINE_NUMBER(927);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastReportedMapId = (frame[8].i);
	}
label_31:;
	{
	LINE_NUMBER(929);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_35;
	}
label_34:;
	INST_ICONST(0);
label_35:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(930);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_38;
	}
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(931);
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	clinit_nro_Effect(ctx);
	sp[0].o = (jobject)SF_nro_Effect_vEffData;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_41;
	}
label_40:;
	INST_ICONST(0);
label_41:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(932);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_43;
	}
	{
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_44;
	}
label_43:;
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(0);
label_45:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(933);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webDiagnosticsBridge;
	jint temp0 = frame[6].i;
	clinit_javax_microedition_lcdui_Image(ctx);
	jint temp1 = (jint)SF_javax_microedition_lcdui_Image_activeTextureCount;
	clinit_javax_microedition_lcdui_Image(ctx);
	jint temp2 = (jint)SF_javax_microedition_lcdui_Image_totalCreatedTextures;
	clinit_javax_microedition_lcdui_Image(ctx);
	jint temp3 = (jint)SF_javax_microedition_lcdui_Image_totalDisposedTextures;
	jint temp4 = frame[9].i;
	jint temp5 = frame[10].i;
	jint temp6 = frame[11].i;
	LINE_NUMBER(941);
	jint temp7 = (jint)SM_nro_Rms_getWebCacheEntryCount_R_int(ctx);
	LINE_NUMBER(942);
	jint temp8 = (jint)SM_nro_Rms_getWebCacheBytes_R_int(ctx);
	sp[1].o = frame[7].o;
	jint temp9 = frame[8].i;
	jint temp10 = frame[12].i;
	LINE_NUMBER(933);
	((func_com_nro_GameMain$IWebDiagnosticsBridge_reportMetrics_int_int_int_int_int_int_int_int_int_java_lang_String_int_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebDiagnosticsBridge, INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportMetrics_int_int_int_int_int_int_int_int_int_java_lang_String_int_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, sp[1].o, temp9, temp10);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(948);
	goto label_23;
label_2:;
	LINE_NUMBER(947);
	INST_ASTORE(7);
label_23:;
	{
	LINE_NUMBER(951);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_fpsWindowStartNs = (frame[1].l);
	LINE_NUMBER(952);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_renderedFramesInWindow = (jint(0));
	}
label_12:;
	LINE_NUMBER(954);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_render(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:render", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(959);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWebGLContextLost) == 0) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(960);
	SM_lib_network_Session_ME_update(ctx);
	LINE_NUMBER(961);
	SM_lib_network_Session_ME2_update(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(962);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(964);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_pendingContextRestore) == 0) goto label_17;
	}
	{
	LINE_NUMBER(965);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_pendingContextRestore = (jint(0));
	LINE_NUMBER(966);
	M_com_nro_GameMain_recoverWebGLResources(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(968);
	M_com_nro_GameMain_paceFrameIfNeeded(ctx, (frame[0].o));
	LINE_NUMBER(969);
	M_com_nro_GameMain_recordRenderedFrame(ctx, (frame[0].o));
	LINE_NUMBER(971);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glClearColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glClearColor_float_float_float_float, sp[0].o))(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(972);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glClear_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glClear_int, sp[0].o))(ctx, sp[0].o, (16384));
	LINE_NUMBER(973);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK(sp[0].o))->F_zoom = ((jfloat)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_zoom);
	LINE_NUMBER(975);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	((func_com_badlogic_gdx_graphics_OrthographicCamera_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_update])(ctx, sp[0].o);
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_g;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_g;
	sp[1].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK(sp[1].o))->F_combined;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(980);
	M_com_nro_GameMain_update(ctx, (frame[0].o));
	LINE_NUMBER(983);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	if (sp[0].o == nullptr) goto label_30;
	}
	clinit_main_GameMidlet(ctx);
	(sp++)->o = SF_main_GameMidlet_gameCanvas;
	if ((--sp)->o == nullptr) goto label_30;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mGraphics_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_begin])(ctx, sp[0].o);
	LINE_NUMBER(986);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	sp[1].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	((func_main_GameCanvas_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_paint_lib_mGraphics])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mGraphics_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_end])(ctx, sp[0].o);
	LINE_NUMBER(992);
	goto label_33;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(987);
	frame[1].o = sp[0].o;
	LINE_NUMBER(988);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error during paint: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(989);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mGraphics_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_end])(ctx, sp[0].o);
	LINE_NUMBER(992);
	goto label_33;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(991);
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	((func_lib_mGraphics_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_end])(ctx, sp[0].o);
	LINE_NUMBER(992);
	throwException(ctx, (frame[2].o));	}
label_33:;
	goto label_13;
label_30:;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	if (sp[0].o != nullptr) goto label_38;
	}
	{
	LINE_NUMBER(996);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"DEBUG: mGraphics is null in render!"_j))));
	}
label_38:;
	{
	LINE_NUMBER(998);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(999);
	SM_lib_mSystem_println_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"DEBUG: GameCanvas is null in render!"_j))));
	}
label_13:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1005);
	goto label_41;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(1002);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1003);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error in render: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_lib_mSystem_println_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1004);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_41:;
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1010);
	SM_com_nro_GameMain_syncDesktopImeState(ctx);
	LINE_NUMBER(1011);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1012);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	sp[0].o = (jobject)((func_com_nro_GameMain$IWebInputBridge_pollSubmittedText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_pollSubmittedText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(1013);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebInputBridge_pollCancelled_R_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_pollCancelled_R_boolean, sp[0].o))(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(1016);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_Graphics_getDeltaTime_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getDeltaTime_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(1018);
	if ((floatCompare((frame[1].f), (jfloat(0.25f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1019);
	frame[1].f = (jfloat(0.25f));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1020);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(1021);
	frame[1].f = (jfloat(0));
	}
label_11:;
	{
	LINE_NUMBER(1024);
	frame[2].f = (clinit_lib_Time(ctx), (jfloat)SF_lib_Time_timeScale);
	LINE_NUMBER(1025);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) > 0) goto label_14;
	}
	{
	LINE_NUMBER(1026);
	frame[2].f = (jfloat(1));
	}
label_14:;
	{
	LINE_NUMBER(1029);
	sp[0].o = frame[0].o;
	((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_updateAcc = (((jfloat)((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_updateAcc) + ((frame[1].f) * (frame[2].f)));
	LINE_NUMBER(1030);
	jint temp0 = 15;
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat(16.0f)) * (frame[2].f)))));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(temp1)));
	frame[3].i = temp2;
	LINE_NUMBER(1031);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(1032);
	if ((floatCompare((((jfloat)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_updateAcc) + (jfloat(1.500000e-03f))), (jfloat(0.016666668f)), -1)) < 0) goto label_19;
	}
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(1033);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_gmidlet;
	if (sp[0].o == nullptr) goto label_21;
	}
	clinit_main_GameMidlet(ctx);
	(sp++)->o = SF_main_GameMidlet_gameCanvas;
	if ((--sp)->o == nullptr) goto label_21;
	{
	LINE_NUMBER(1034);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_update])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(1036);
	sp[0].o = frame[0].o;
	((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_updateAcc = (((jfloat)((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_updateAcc) - (jfloat(0.016666668f)));
	LINE_NUMBER(1037);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(1039);
	if ((frame[4].i) == (frame[3].i)) goto label_24;
	}
	{
	if ((floatCompare(((jfloat)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_updateAcc), (jfloat(0.033333335f)), -1)) <= 0) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(1040);
	((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_updateAcc = (jfloat(0));
	}
label_25:;
	{
	LINE_NUMBER(1042);
	SM_lib_network_Session_ME_update(ctx);
	LINE_NUMBER(1043);
	SM_lib_network_Session_ME2_update(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1046);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1044);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1045);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_27:;
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_nro_GameMain_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:pause", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1051);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = (jlong(0));
	LINE_NUMBER(1052);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(1053);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(1054);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:resume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1058);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = (jlong(0));
	LINE_NUMBER(1059);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_fpsWindowStartNs = (jlong(0));
	LINE_NUMBER(1060);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_renderedFramesInWindow = (jint(0));
	LINE_NUMBER(1061);
	((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_updateAcc = (jfloat(0));
	LINE_NUMBER(1062);
	SM_lib_network_Session_ME_notifyAppResumed(ctx);
	LINE_NUMBER(1063);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_nro_GameMain_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1067);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1068);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_gmidlet;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1069);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_gmidlet;
	((func_main_GameMidlet_exit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_exit])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(1071);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1073);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(1074);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((func_lib_network_Session_ME_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_close])(ctx, sp[0].o);
	LINE_NUMBER(1075);
	sp[0].o = (jobject)SM_lib_network_Session_ME2_gI_R_lib_network_Session_ME2(ctx);
	((func_lib_network_Session_ME2_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2_close])(ctx, sp[0].o);
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_g;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK((frame[0].o)))->F_g;
	sp[0].o = (jobject)((lib_mGraphics *) NULL_CHECK(sp[0].o))->F_g;
	((func_com_badlogic_gdx_graphics_g2d_SpriteBatch_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_SpriteBatch_dispose])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(1080);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	SM_lib_sound_SoundMn_dispose(ctx);
	LINE_NUMBER(1081);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"GameMain: Resources disposed, exiting..."_j))));
	LINE_NUMBER(1082);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:keyDown", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1085);
	jint temp0 = (jint)SM_lib_MapKey_map_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(1086);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1087);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_keyPressed_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_keyPressed_int])(ctx, sp[0].o, (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1089);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:keyUp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1093);
	jint temp0 = (jint)SM_lib_MapKey_map_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(1094);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1095);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_keyReleased_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_keyReleased_int])(ctx, sp[0].o, (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1097);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1103);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1104);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_keyTyped_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_keyTyped_char])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1112);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:touchUp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1117);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:touchCancelled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1122);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:touchDragged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1127);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:mouseMoved", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1132);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:scrolled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_exitApp(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:exitApp", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(1141);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1142);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_gmidlet;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1143);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_gmidlet;
	((func_main_GameMidlet_exit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_exit])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(1145);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1147);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_exit) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_exit, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(1148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_GameMain_access$000_com_nro_GameMain_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:access$000", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(19);
	M_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_nro_GameMain(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_nro_GameMain_IPHONE_JB = jint(2);
	SF_com_nro_GameMain_IP_APPSTORE = jint(3);
	SF_com_nro_GameMain_TARGET_FPS = jfloat(60.0f);
	SF_com_nro_GameMain_UPDATE_STEP = jfloat(0.016666668f);
	SF_com_nro_GameMain_STEP_JITTER_EPSILON = jfloat(1.500000e-03f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain(ctx);
	{
	LINE_NUMBER(32);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isPC = (jint(0));
	LINE_NUMBER(35);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isWeb = (jint(0));
	LINE_NUMBER(36);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isWindowsPhone = (jint(0));
	LINE_NUMBER(37);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isJavaME = (jint(0));
	LINE_NUMBER(38);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_deferWebAudioLoad = (jint(0));
	LINE_NUMBER(46);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_targetFPS = (60);
	LINE_NUMBER(47);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isSyncScreen = (jint(0));
	LINE_NUMBER(48);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isUnlimitedFPS = (jint(0));
	LINE_NUMBER(50);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_nextFrameTimeNs = (jlong(0));
	LINE_NUMBER(51);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_fpsWindowStartNs = (jlong(0));
	LINE_NUMBER(52);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_renderedFramesInWindow = (jint(0));
	LINE_NUMBER(53);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_smoothedFps = (jfloat(60.0f));
	LINE_NUMBER(69);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_isWebGLContextLost = (jint(0));
	LINE_NUMBER(70);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_pendingContextRestore = (jint(0));
	LINE_NUMBER(71);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastReportedScreen = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(72);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastReportedMapId = (jint(-1));
	LINE_NUMBER(73);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastDiagReportNs = (jlong(0));
	LINE_NUMBER(225);
	clinit_com_nro_GameMain(ctx);
	SF_com_nro_GameMain_lastDesktopTextInputState = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_nro_GameMain[] {
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
	(void *) M_com_nro_GameMain_create,
	(void *) M_com_nro_GameMain_resize_int_int,
	(void *) M_com_nro_GameMain_render,
	(void *) M_com_nro_GameMain_pause,
	(void *) M_com_nro_GameMain_resume,
	(void *) M_com_nro_GameMain_dispose,
	(void *) M_com_nro_GameMain_keyDown_int_R_boolean,
	(void *) M_com_nro_GameMain_keyUp_int_R_boolean,
	(void *) M_com_nro_GameMain_keyTyped_char_R_boolean,
	(void *) M_com_nro_GameMain_touchDown_int_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain_touchUp_int_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain_touchDragged_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain_mouseMoved_int_int_R_boolean,
	(void *) M_com_nro_GameMain_scrolled_float_float_R_boolean,
	(void *) M_com_nro_GameMain_recoverWebGLResources,
	(void *) M_com_nro_GameMain_setupCameraForPlatform,
	(void *) M_com_nro_GameMain_setupCameraForPlatform_int_int,
	(void *) M_com_nro_GameMain_checkZoomLevelIOS_float_float,
	(void *) M_com_nro_GameMain_initaliseInputProcessors,
	(void *) M_com_nro_GameMain_checkZoomLevel,
	(void *) M_com_nro_GameMain_checkZoomLevelWeb_float_float,
	(void *) M_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3,
	(void *) M_com_nro_GameMain_paceFrameIfNeeded,
	(void *) M_com_nro_GameMain_recordRenderedFrame,
	(void *) M_com_nro_GameMain_update,
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
	{ "create", "()V" },
	{ "resize", "(II)V" },
	{ "render", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "keyDown", "(I)Z" },
	{ "keyUp", "(I)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIII)Z" },
	{ "touchUp", "(IIII)Z" },
	{ "touchCancelled", "(IIII)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "recoverWebGLResources", "()V" },
	{ "setupCameraForPlatform", "()V" },
	{ "setupCameraForPlatform", "(II)V" },
	{ "checkZoomLevelIOS", "(FF)V" },
	{ "initaliseInputProcessors", "()V" },
	{ "checkZoomLevel", "()V" },
	{ "checkZoomLevelWeb", "(FF)V" },
	{ "adjustTouchCoordinatesIOS", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "paceFrameIfNeeded", "()V" },
	{ "recordRenderedFrame", "()V" },
	{ "update", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_ApplicationListener, &class_com_badlogic_gdx_InputProcessor, };

static jclass innerClasses[] {
	&class_com_nro_GameMain$IWebDiagnosticsBridge,
	&class_com_nro_GameMain$IWebFpsBridge,
	&class_com_nro_GameMain$IDesktopInputBridge,
	&class_com_nro_GameMain$MyInputProcessor,
	&class_com_nro_GameMain$IWebPlatformInfo,
	&class_com_nro_GameMain$IWebInputBridge,
	&class_com_nro_GameMain$MyGestureHandler,
};

static FieldMetadata fields[] {
	{ "gmidlet", &class_main_GameMidlet, (intptr_t) &SF_com_nro_GameMain_gmidlet, "Lmain/GameMidlet;", 9 },
	{ "inputMultiplexer", &class_com_badlogic_gdx_InputMultiplexer, offsetof(com_nro_GameMain, F_inputMultiplexer), "Lcom/badlogic/gdx/InputMultiplexer;", 2 },
	{ "inputProcessor", &class_com_nro_GameMain$MyInputProcessor, offsetof(com_nro_GameMain, F_inputProcessor), "Lcom/nro/GameMain$MyInputProcessor;", 2 },
	{ "gestureHandler", &class_com_nro_GameMain$MyGestureHandler, offsetof(com_nro_GameMain, F_gestureHandler), "Lcom/nro/GameMain$MyGestureHandler;", 2 },
	{ "zoom", &class_float, offsetof(com_nro_GameMain, F_zoom), "F", 1 },
	{ "timeUpdate", &class_long, offsetof(com_nro_GameMain, F_timeUpdate), "J", 1 },
	{ "me", &class_com_nro_GameMain, (intptr_t) &SF_com_nro_GameMain_me, "Lcom/nro/GameMain;", 9 },
	{ "g", &class_lib_mGraphics, offsetof(com_nro_GameMain, F_g), "Llib/mGraphics;", 2 },
	{ "camera", &class_com_badlogic_gdx_graphics_OrthographicCamera, offsetof(com_nro_GameMain, F_camera), "Lcom/badlogic/gdx/graphics/OrthographicCamera;", 1 },
	{ "mainThreadName", &class_java_lang_String, (intptr_t) &SF_com_nro_GameMain_mainThreadName, "Ljava/lang/String;", 9 },
	{ "isStart", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isStart, "Z", 9 },
	{ "isPause", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isPause, "Z", 9 },
	{ "isPC", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isPC, "Z", 9 },
	{ "isAndroid", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isAndroid, "Z", 9 },
	{ "isIOS", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isIOS, "Z", 9 },
	{ "isWeb", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isWeb, "Z", 9 },
	{ "isWindowsPhone", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isWindowsPhone, "Z", 9 },
	{ "isJavaME", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isJavaME, "Z", 9 },
	{ "deferWebAudioLoad", &class_boolean, (intptr_t) &SF_com_nro_GameMain_deferWebAudioLoad, "Z", 9 },
	{ "IPHONE_JB", &class_byte, (intptr_t) &SF_com_nro_GameMain_IPHONE_JB, "B", 25 },
	{ "IP_APPSTORE", &class_byte, (intptr_t) &SF_com_nro_GameMain_IP_APPSTORE, "B", 25 },
	{ "updateAcc", &class_float, offsetof(com_nro_GameMain, F_updateAcc), "F", 2 },
	{ "TARGET_FPS", &class_float, (intptr_t) &SF_com_nro_GameMain_TARGET_FPS, "F", 26 },
	{ "UPDATE_STEP", &class_float, (intptr_t) &SF_com_nro_GameMain_UPDATE_STEP, "F", 26 },
	{ "STEP_JITTER_EPSILON", &class_float, (intptr_t) &SF_com_nro_GameMain_STEP_JITTER_EPSILON, "F", 26 },
	{ "targetFPS", &class_int, (intptr_t) &SF_com_nro_GameMain_targetFPS, "I", 9 },
	{ "isSyncScreen", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isSyncScreen, "Z", 9 },
	{ "isUnlimitedFPS", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isUnlimitedFPS, "Z", 9 },
	{ "nextFrameTimeNs", &class_long, (intptr_t) &SF_com_nro_GameMain_nextFrameTimeNs, "J", 10 },
	{ "fpsWindowStartNs", &class_long, (intptr_t) &SF_com_nro_GameMain_fpsWindowStartNs, "J", 10 },
	{ "renderedFramesInWindow", &class_int, (intptr_t) &SF_com_nro_GameMain_renderedFramesInWindow, "I", 10 },
	{ "smoothedFps", &class_float, (intptr_t) &SF_com_nro_GameMain_smoothedFps, "F", 10 },
	{ "webFpsBridge", &class_com_nro_GameMain$IWebFpsBridge, (intptr_t) &SF_com_nro_GameMain_webFpsBridge, "Lcom/nro/GameMain$IWebFpsBridge;", 9 },
	{ "webDiagnosticsBridge", &class_com_nro_GameMain$IWebDiagnosticsBridge, (intptr_t) &SF_com_nro_GameMain_webDiagnosticsBridge, "Lcom/nro/GameMain$IWebDiagnosticsBridge;", 9 },
	{ "isWebGLContextLost", &class_boolean, (intptr_t) &SF_com_nro_GameMain_isWebGLContextLost, "Z", 73 },
	{ "pendingContextRestore", &class_boolean, (intptr_t) &SF_com_nro_GameMain_pendingContextRestore, "Z", 74 },
	{ "lastReportedScreen", &class_java_lang_String, (intptr_t) &SF_com_nro_GameMain_lastReportedScreen, "Ljava/lang/String;", 10 },
	{ "lastReportedMapId", &class_int, (intptr_t) &SF_com_nro_GameMain_lastReportedMapId, "I", 10 },
	{ "lastDiagReportNs", &class_long, (intptr_t) &SF_com_nro_GameMain_lastDiagReportNs, "J", 10 },
	{ "desktopInputBridge", &class_com_nro_GameMain$IDesktopInputBridge, (intptr_t) &SF_com_nro_GameMain_desktopInputBridge, "Lcom/nro/GameMain$IDesktopInputBridge;", 9 },
	{ "lastDesktopTextInputState", &class_java_lang_Boolean, (intptr_t) &SF_com_nro_GameMain_lastDesktopTextInputState, "Ljava/lang/Boolean;", 10 },
	{ "webPlatformInfo", &class_com_nro_GameMain$IWebPlatformInfo, (intptr_t) &SF_com_nro_GameMain_webPlatformInfo, "Lcom/nro/GameMain$IWebPlatformInfo;", 9 },
	{ "webInputBridge", &class_com_nro_GameMain$IWebInputBridge, (intptr_t) &SF_com_nro_GameMain_webInputBridge, "Lcom/nro/GameMain$IWebInputBridge;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_nro_GameMain, 0, "()V", 1 },
	{ "onWebGLContextLost", (intptr_t) SM_com_nro_GameMain_onWebGLContextLost, 0, "()V", 9 },
	{ "onWebGLContextRestored", (intptr_t) SM_com_nro_GameMain_onWebGLContextRestored, 0, "()V", 9 },
	{ "recoverWebGLResources", (intptr_t) M_com_nro_GameMain_recoverWebGLResources, VTABLE_com_nro_GameMain_recoverWebGLResources, "()V", 2 },
	{ "setFpsConfig", (intptr_t) SM_com_nro_GameMain_setFpsConfig_int_boolean_boolean, 0, "(IZZ)V", 9 },
	{ "readClipboardText", (intptr_t) SM_com_nro_GameMain_readClipboardText_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "writeClipboardText", (intptr_t) SM_com_nro_GameMain_writeClipboardText_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "syncDesktopImeState", (intptr_t) SM_com_nro_GameMain_syncDesktopImeState, 0, "()V", 10 },
	{ "getWidth", (intptr_t) SM_com_nro_GameMain_getWidth_R_int, 0, "()I", 9 },
	{ "getHeight", (intptr_t) SM_com_nro_GameMain_getHeight_R_int, 0, "()I", 9 },
	{ "postRunnable", (intptr_t) SM_com_nro_GameMain_postRunnable_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 9 },
	{ "setupCameraForPlatform", (intptr_t) M_com_nro_GameMain_setupCameraForPlatform, VTABLE_com_nro_GameMain_setupCameraForPlatform, "()V", 1 },
	{ "setupCameraForPlatform", (intptr_t) M_com_nro_GameMain_setupCameraForPlatform_int_int, VTABLE_com_nro_GameMain_setupCameraForPlatform_int_int, "(II)V", 1 },
	{ "checkZoomLevelIOS", (intptr_t) M_com_nro_GameMain_checkZoomLevelIOS_float_float, VTABLE_com_nro_GameMain_checkZoomLevelIOS_float_float, "(FF)V", 1 },
	{ "initaliseInputProcessors", (intptr_t) M_com_nro_GameMain_initaliseInputProcessors, VTABLE_com_nro_GameMain_initaliseInputProcessors, "()V", 1 },
	{ "checkZoomLevel", (intptr_t) M_com_nro_GameMain_checkZoomLevel, VTABLE_com_nro_GameMain_checkZoomLevel, "()V", 1 },
	{ "checkZoomLevelWeb", (intptr_t) M_com_nro_GameMain_checkZoomLevelWeb_float_float, VTABLE_com_nro_GameMain_checkZoomLevelWeb_float_float, "(FF)V", 1 },
	{ "create", (intptr_t) M_com_nro_GameMain_create, VTABLE_com_nro_GameMain_create, "()V", 1 },
	{ "resize", (intptr_t) M_com_nro_GameMain_resize_int_int, VTABLE_com_nro_GameMain_resize_int_int, "(II)V", 1 },
	{ "adjustTouchCoordinatesIOS", (intptr_t) M_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3, VTABLE_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 2 },
	{ "paceFrameIfNeeded", (intptr_t) M_com_nro_GameMain_paceFrameIfNeeded, VTABLE_com_nro_GameMain_paceFrameIfNeeded, "()V", 2 },
	{ "recordRenderedFrame", (intptr_t) M_com_nro_GameMain_recordRenderedFrame, VTABLE_com_nro_GameMain_recordRenderedFrame, "()V", 2 },
	{ "render", (intptr_t) M_com_nro_GameMain_render, VTABLE_com_nro_GameMain_render, "()V", 1 },
	{ "update", (intptr_t) M_com_nro_GameMain_update, VTABLE_com_nro_GameMain_update, "()V", 2 },
	{ "pause", (intptr_t) M_com_nro_GameMain_pause, VTABLE_com_nro_GameMain_pause, "()V", 1 },
	{ "resume", (intptr_t) M_com_nro_GameMain_resume, VTABLE_com_nro_GameMain_resume, "()V", 1 },
	{ "dispose", (intptr_t) M_com_nro_GameMain_dispose, VTABLE_com_nro_GameMain_dispose, "()V", 1 },
	{ "keyDown", (intptr_t) M_com_nro_GameMain_keyDown_int_R_boolean, VTABLE_com_nro_GameMain_keyDown_int_R_boolean, "(I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_nro_GameMain_keyUp_int_R_boolean, VTABLE_com_nro_GameMain_keyUp_int_R_boolean, "(I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_nro_GameMain_keyTyped_char_R_boolean, VTABLE_com_nro_GameMain_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "touchDown", (intptr_t) M_com_nro_GameMain_touchDown_int_int_int_int_R_boolean, VTABLE_com_nro_GameMain_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_nro_GameMain_touchUp_int_int_int_int_R_boolean, VTABLE_com_nro_GameMain_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchCancelled", (intptr_t) M_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean, VTABLE_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_nro_GameMain_touchDragged_int_int_int_R_boolean, VTABLE_com_nro_GameMain_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "mouseMoved", (intptr_t) M_com_nro_GameMain_mouseMoved_int_int_R_boolean, VTABLE_com_nro_GameMain_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_com_nro_GameMain_scrolled_float_float_R_boolean, VTABLE_com_nro_GameMain_scrolled_float_float_R_boolean, "(FF)Z", 1 },
	{ "exitApp", (intptr_t) SM_com_nro_GameMain_exitApp, 0, "()V", 9 },
	{ "access$000", (intptr_t) SM_com_nro_GameMain_access$000_com_nro_GameMain_com_badlogic_gdx_math_Vector3, 0, "(Lcom/nro/GameMain;Lcom/badlogic/gdx/math/Vector3;)V", 4104 },
	{ "<clinit>", (intptr_t) clinit_com_nro_GameMain, 0, "()V", 8 },
};

Class class_com_nro_GameMain{
		.nativeName = (intptr_t) "com/nro/GameMain",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_GameMain),
		.classVtable = (intptr_t) vtable_com_nro_GameMain,
		.staticInitializer = (intptr_t) clinit_com_nro_GameMain,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_GameMain,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 7,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 43,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_GameMain = registerClass(&class_com_nro_GameMain);

}

