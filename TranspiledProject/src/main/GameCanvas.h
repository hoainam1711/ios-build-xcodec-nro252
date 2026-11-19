#ifndef HEADER_main_GameCanvas
#define HEADER_main_GameCanvas

#include "Clearwing.h"
#include "nro/MotherCanvas.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct main_GameCanvas {
	nro_MotherCanvas parent;
	jref F_g;
	jint F_tickWaitThongBao;
	jlong F_timefps;
	jlong F_timeup;
	jint F_count;
	jref F_dustX;
	jref F_dustY;
	jref F_dustState;
	jbool F_resetToLoginScr;
} main_GameCanvas;

extern Class class_main_GameCanvas;

extern jbool SF_main_GameCanvas_isPlaySound;
extern jbool SF_main_GameCanvas_lowGraphic;
extern jlong SF_main_GameCanvas_timeNow;
extern jbool SF_main_GameCanvas_isMoveNumberPad;
extern jint SF_main_GameCanvas_moveMode;
extern jbool SF_main_GameCanvas_isMoveWASD;
extern jbool SF_main_GameCanvas_isMoveArrows;
extern jbool SF_main_GameCanvas_isLoading;
extern jbool SF_main_GameCanvas_isTouch;
extern jbool SF_main_GameCanvas_isTouchControl;
extern jbool SF_main_GameCanvas_isTouchControlSmallScreen;
extern jobject SF_main_GameCanvas_instance;
extern jobject SF_main_GameCanvas_keyPressed;
extern jobject SF_main_GameCanvas_keyReleased;
extern jobject SF_main_GameCanvas_keyHold;
extern jbool SF_main_GameCanvas_keyTabPressed;
extern jbool SF_main_GameCanvas_isPointerDown;
extern jbool SF_main_GameCanvas_isPointerClick;
extern jbool SF_main_GameCanvas_isPointerJustRelease;
extern jbool SF_main_GameCanvas_isPointerSelect;
extern jbool SF_main_GameCanvas_isPointerMove;
extern jint SF_main_GameCanvas_px;
extern jint SF_main_GameCanvas_py;
extern jint SF_main_GameCanvas_pxFirst;
extern jint SF_main_GameCanvas_pyFirst;
extern jint SF_main_GameCanvas_pxLast;
extern jint SF_main_GameCanvas_pyLast;
extern jobject SF_main_GameCanvas_arrPos;
extern jint SF_main_GameCanvas_gameTick;
extern jint SF_main_GameCanvas_taskTick;
extern jint SF_main_GameCanvas_aq;
extern jbool SF_main_GameCanvas_isEff1;
extern jbool SF_main_GameCanvas_isEff2;
extern jlong SF_main_GameCanvas_timeTickEff1;
extern jlong SF_main_GameCanvas_timeTickEff2;
extern jint SF_main_GameCanvas_w;
extern jint SF_main_GameCanvas_h;
extern jint SF_main_GameCanvas_hw;
extern jint SF_main_GameCanvas_hh;
extern jobject SF_main_GameCanvas_currentScreen;
extern jobject SF_main_GameCanvas_menu;
extern jobject SF_main_GameCanvas_panel;
extern jobject SF_main_GameCanvas_panel2;
extern jobject SF_main_GameCanvas_loginScr;
extern jobject SF_main_GameCanvas_registerScr;
extern jobject SF_main_GameCanvas_currentDialog;
extern jobject SF_main_GameCanvas_msgdlg;
extern jobject SF_main_GameCanvas_paintz;
extern jobject SF_main_GameCanvas_imgBG;
extern jint SF_main_GameCanvas_skyColor;
extern jint SF_main_GameCanvas_curPos;
extern jobject SF_main_GameCanvas_bgW;
extern jobject SF_main_GameCanvas_bgH;
extern jobject SF_main_GameCanvas_imgBlue;
extern jobject SF_main_GameCanvas_imgViolet;
extern jobject SF_main_GameCanvas_imgBlack;
extern jobject SF_main_GameCanvas_danhHieu;
extern jobject SF_main_GameCanvas_messageServer;
extern jobject SF_main_GameCanvas_debugUpdate;
extern jobject SF_main_GameCanvas_debugPaint;
extern jobject SF_main_GameCanvas_debugSession;
extern jbool SF_main_GameCanvas_isFocusPanel2;
extern jint SF_main_GameCanvas_isRequestMapID;
extern jlong SF_main_GameCanvas_waitingTimeChangeMap;
extern jint SF_main_GameCanvas_dir_;
extern jbool SF_main_GameCanvas_paintBG;
extern jobject SF_main_GameCanvas_imgSun;
extern jobject SF_main_GameCanvas_imgSun2;
extern jobject SF_main_GameCanvas_imgBorder;
extern jobject SF_main_GameCanvas_imgSunSpec;
extern jobject SF_main_GameCanvas_cloudX;
extern jobject SF_main_GameCanvas_cloudY;
extern jint SF_main_GameCanvas_sunX;
extern jint SF_main_GameCanvas_sunY;
extern jint SF_main_GameCanvas_sunX2;
extern jint SF_main_GameCanvas_sunY2;
extern jobject SF_main_GameCanvas_layerSpeed;
extern jobject SF_main_GameCanvas_moveX;
extern jobject SF_main_GameCanvas_moveXSpeed;
extern jbool SF_main_GameCanvas_isBoltEff;
extern jbool SF_main_GameCanvas_boltActive;
extern jint SF_main_GameCanvas_tBolt;
extern jint SF_main_GameCanvas_typeBg;
extern jint SF_main_GameCanvas_transY;
extern jobject SF_main_GameCanvas_yb;
extern jobject SF_main_GameCanvas_colorTop;
extern jobject SF_main_GameCanvas_colorBotton;
extern jint SF_main_GameCanvas_nBg;
extern jobject SF_main_GameCanvas_bgRain;
extern jobject SF_main_GameCanvas_imgCaycot;
extern jobject SF_main_GameCanvas_tam;
extern jbool SF_main_GameCanvas_isLoadBGok;
extern jlong SF_main_GameCanvas_lastTimePress;
extern jint SF_main_GameCanvas_keyAsciiPress;
extern jobject SF_main_GameCanvas_img18;
extern jint SF_main_GameCanvas_currentFPS;
extern jint SF_main_GameCanvas_fps;
extern jint SF_main_GameCanvas_up;
extern jobject SF_main_GameCanvas_thongBaoTest;
extern jint SF_main_GameCanvas_xThongBaoTranslate;
extern jobject SF_main_GameCanvas_flyTexts;
extern jbool SF_main_GameCanvas_isPointerJustDown;
extern jobject SF_main_GameCanvas_wsState;
extern jobject SF_main_GameCanvas_imgWS;
extern jobject SF_main_GameCanvas_imgShuriken;
extern jobject SF_main_GameCanvas_imgDust;
extern jbool SF_main_GameCanvas_isResume;
extern jobject SF_main_GameCanvas_serverScreen;
extern jobject SF_main_GameCanvas_chooseCharScr;
extern jobject SF_main_GameCanvas_serverScr;
extern jobject SF_main_GameCanvas__SelectCharScr;
extern jbool SF_main_GameCanvas_open3Hour;
extern jlong SF_main_GameCanvas_TIMEOUT;
extern jint SF_main_GameCanvas_timeLoading;
extern jbool SF_main_GameCanvas_isPreloadStarted;

#define VTABLE_main_GameCanvas_hashCode_R_int 0
typedef jint (*func_main_GameCanvas_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_main_GameCanvas_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_main_GameCanvas_clone_R_java_lang_Object 2
typedef jobject (*func_main_GameCanvas_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_getClass_R_java_lang_Class 3
typedef jobject (*func_main_GameCanvas_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_toString_R_java_lang_String 4
typedef jobject (*func_main_GameCanvas_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_finalize 5
typedef void (*func_main_GameCanvas_finalize)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_notify 6
typedef void (*func_main_GameCanvas_notify)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_notifyAll 7
typedef void (*func_main_GameCanvas_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_wait 8
typedef void (*func_main_GameCanvas_wait)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_wait_long 9
typedef void (*func_main_GameCanvas_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_main_GameCanvas_wait_long_int 10
typedef void (*func_main_GameCanvas_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_main_GameCanvas_run 11
typedef void (*func_main_GameCanvas_run)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_getY_R_int 12
typedef jint (*func_main_GameCanvas_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_getH_R_int 13
typedef jint (*func_main_GameCanvas_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_pointerDragged_int_int 14
typedef void (*func_main_GameCanvas_pointerDragged_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_pointerPressed_int_int 15
typedef void (*func_main_GameCanvas_pointerPressed_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_pointerReleased_int_int 16
typedef void (*func_main_GameCanvas_pointerReleased_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_onPointerDragged_int_int 17
typedef void (*func_main_GameCanvas_onPointerDragged_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_onPointerPressed_int_int 18
typedef void (*func_main_GameCanvas_onPointerPressed_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_onPointerReleased_int_int 19
typedef void (*func_main_GameCanvas_onPointerReleased_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_update 20
typedef void (*func_main_GameCanvas_update)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_perform_int_java_lang_Object 21
typedef void (*func_main_GameCanvas_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_main_GameCanvas_hasPointerEvents_R_boolean 22
typedef jbool (*func_main_GameCanvas_hasPointerEvents_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_keyPressed_int 23
typedef void (*func_main_GameCanvas_keyPressed_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_main_GameCanvas_keyTyped_char 24
typedef void (*func_main_GameCanvas_keyTyped_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_main_GameCanvas_keyReleased_int 25
typedef void (*func_main_GameCanvas_keyReleased_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_main_GameCanvas_paint_lib_mGraphics 26
typedef void (*func_main_GameCanvas_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_main_GameCanvas_sizeChanged_int_int 27
typedef void (*func_main_GameCanvas_sizeChanged_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean 28
typedef jbool (*func_main_GameCanvas_startDust_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_main_GameCanvas_updateDust 29
typedef void (*func_main_GameCanvas_updateDust)(jcontext ctx, jobject self);
#define VTABLE_main_GameCanvas_resetToLoginScrz 30
typedef void (*func_main_GameCanvas_resetToLoginScrz)(jcontext ctx, jobject self);

void mark_main_GameCanvas(jobject object, jint mark, jint depth);
void clinit_main_GameCanvas(jcontext ctx);
void SM_main_GameCanvas_applyMoveMode(jcontext ctx);
void SM_main_GameCanvas_cycleMoveMode(jcontext ctx);
void SM_main_GameCanvas_setMoveMode_int(jcontext ctx, jint param0);
void SM_main_GameCanvas_loadMoveModeRMS(jcontext ctx);
void SM_main_GameCanvas_saveMoveModeRMS(jcontext ctx);
jobject SM_main_GameCanvas_getActiveTextField_R_lib_input_TField(jcontext ctx);
jbool SM_main_GameCanvas_cycleFocusedTextField_boolean_R_boolean(jcontext ctx, jbool param0);
jbool SM_main_GameCanvas_isChatOrInputActive_R_boolean(jcontext ctx);
jbool SM_main_GameCanvas_isRawKeyPressed_int_R_boolean(jcontext ctx, jint param0);
jbool M_main_GameCanvas_hasPointerEvents_R_boolean(jcontext ctx, jobject self);
void init_main_GameCanvas(jcontext ctx, jobject self);
jobject SM_main_GameCanvas_gI_R_main_GameCanvas(jcontext ctx);
void SM_main_GameCanvas_connect(jcontext ctx);
void SM_main_GameCanvas_connect2(jcontext ctx);
void SM_main_GameCanvas_resetTrans_lib_mGraphics(jcontext ctx, jobject param0);
void SM_main_GameCanvas_resetTransGameScr_lib_mGraphics(jcontext ctx, jobject param0);
void M_main_GameCanvas_update(jcontext ctx, jobject self);
void SM_main_GameCanvas_doResetToLoginScr(jcontext ctx);
void SM_main_GameCanvas_fillRect_lib_mGraphics_int_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void SM_main_GameCanvas_paintBackgroundtLayer_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_main_GameCanvas_drawSun1_lib_mGraphics(jcontext ctx, jobject param0);
void SM_main_GameCanvas_drawSun2_lib_mGraphics(jcontext ctx, jobject param0);
void SM_main_GameCanvas_paintBGGameScr_lib_mGraphics(jcontext ctx, jobject param0);
void SM_main_GameCanvas_getYBackground_int(jcontext ctx, jint param0);
void SM_main_GameCanvas_loadBG_int(jcontext ctx, jint param0);
void SM_main_GameCanvas_randomRaintEff_int(jcontext ctx, jint param0);
void M_main_GameCanvas_keyPressed_int(jcontext ctx, jobject self, jint param0);
void SM_main_GameCanvas_handleKeyPressed_int(jcontext ctx, jint param0);
void M_main_GameCanvas_keyTyped_char(jcontext ctx, jobject self, jchar param0);
void M_main_GameCanvas_keyReleased_int(jcontext ctx, jobject self, jint param0);
void SM_main_GameCanvas_handleKeyReleased_int(jcontext ctx, jint param0);
void M_main_GameCanvas_onPointerDragged_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_main_GameCanvas_onPointerPressed_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_main_GameCanvas_onPointerReleased_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_main_GameCanvas_clearKeyPressed(jcontext ctx);
void SM_main_GameCanvas_clearKeyHold(jcontext ctx);
void M_main_GameCanvas_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void SM_main_GameCanvas_endDlg(jcontext ctx);
void SM_main_GameCanvas_startOKDlg_java_lang_String(jcontext ctx, jobject param0);
void SM_main_GameCanvas_startWaitDlg_java_lang_String(jcontext ctx, jobject param0);
void SM_main_GameCanvas_startOKDlg1_java_lang_String(jcontext ctx, jobject param0);
void SM_main_GameCanvas_startWaitDlg(jcontext ctx);
void SM_main_GameCanvas_startOK_java_lang_String_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_main_GameCanvas_sizeChanged_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_main_GameCanvas_startDust_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void SM_main_GameCanvas_loadWaterSplash(jcontext ctx);
void M_main_GameCanvas_updateDust(jcontext ctx, jobject self);
jbool SM_main_GameCanvas_isPaint_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
void SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jobject param2);
void M_main_GameCanvas_resetToLoginScrz(jcontext ctx, jobject self);
jbool SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void M_main_GameCanvas_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void SM_main_GameCanvas_clearAllPointerEvent(jcontext ctx);
jbool SM_main_GameCanvas_isWait_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
