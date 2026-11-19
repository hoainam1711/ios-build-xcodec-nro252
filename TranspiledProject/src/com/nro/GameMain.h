#ifndef HEADER_com_nro_GameMain
#define HEADER_com_nro_GameMain

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/ApplicationListener.h"
#include "com/badlogic/gdx/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain {
	java_lang_Object parent;
	jref F_inputMultiplexer;
	jref F_inputProcessor;
	jref F_gestureHandler;
	jfloat F_zoom;
	jlong F_timeUpdate;
	jref F_g;
	jref F_camera;
	jfloat F_updateAcc;
} com_nro_GameMain;

extern Class class_com_nro_GameMain;

extern jobject SF_com_nro_GameMain_gmidlet;
extern jobject SF_com_nro_GameMain_me;
extern jobject SF_com_nro_GameMain_mainThreadName;
extern jbool SF_com_nro_GameMain_isStart;
extern jbool SF_com_nro_GameMain_isPause;
extern jbool SF_com_nro_GameMain_isPC;
extern jbool SF_com_nro_GameMain_isAndroid;
extern jbool SF_com_nro_GameMain_isIOS;
extern jbool SF_com_nro_GameMain_isWeb;
extern jbool SF_com_nro_GameMain_isWindowsPhone;
extern jbool SF_com_nro_GameMain_isJavaME;
extern jbool SF_com_nro_GameMain_deferWebAudioLoad;
extern jbyte SF_com_nro_GameMain_IPHONE_JB;
extern jbyte SF_com_nro_GameMain_IP_APPSTORE;
extern jfloat SF_com_nro_GameMain_TARGET_FPS;
extern jfloat SF_com_nro_GameMain_UPDATE_STEP;
extern jfloat SF_com_nro_GameMain_STEP_JITTER_EPSILON;
extern jint SF_com_nro_GameMain_targetFPS;
extern jbool SF_com_nro_GameMain_isSyncScreen;
extern jbool SF_com_nro_GameMain_isUnlimitedFPS;
extern jlong SF_com_nro_GameMain_nextFrameTimeNs;
extern jlong SF_com_nro_GameMain_fpsWindowStartNs;
extern jint SF_com_nro_GameMain_renderedFramesInWindow;
extern jfloat SF_com_nro_GameMain_smoothedFps;
extern jobject SF_com_nro_GameMain_webFpsBridge;
extern jobject SF_com_nro_GameMain_webDiagnosticsBridge;
extern volatile jbool SF_com_nro_GameMain_isWebGLContextLost;
extern volatile jbool SF_com_nro_GameMain_pendingContextRestore;
extern jobject SF_com_nro_GameMain_lastReportedScreen;
extern jint SF_com_nro_GameMain_lastReportedMapId;
extern jlong SF_com_nro_GameMain_lastDiagReportNs;
extern jobject SF_com_nro_GameMain_desktopInputBridge;
extern jobject SF_com_nro_GameMain_lastDesktopTextInputState;
extern jobject SF_com_nro_GameMain_webPlatformInfo;
extern jobject SF_com_nro_GameMain_webInputBridge;

#define VTABLE_com_nro_GameMain_hashCode_R_int 0
typedef jint (*func_com_nro_GameMain_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_nro_GameMain_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_GameMain_clone_R_java_lang_Object 2
typedef jobject (*func_com_nro_GameMain_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_getClass_R_java_lang_Class 3
typedef jobject (*func_com_nro_GameMain_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_toString_R_java_lang_String 4
typedef jobject (*func_com_nro_GameMain_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_finalize 5
typedef void (*func_com_nro_GameMain_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_notify 6
typedef void (*func_com_nro_GameMain_notify)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_notifyAll 7
typedef void (*func_com_nro_GameMain_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_wait 8
typedef void (*func_com_nro_GameMain_wait)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_wait_long 9
typedef void (*func_com_nro_GameMain_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_nro_GameMain_wait_long_int 10
typedef void (*func_com_nro_GameMain_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_nro_GameMain_create 11
typedef void (*func_com_nro_GameMain_create)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_resize_int_int 12
typedef void (*func_com_nro_GameMain_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_nro_GameMain_render 13
typedef void (*func_com_nro_GameMain_render)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_pause 14
typedef void (*func_com_nro_GameMain_pause)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_resume 15
typedef void (*func_com_nro_GameMain_resume)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_dispose 16
typedef void (*func_com_nro_GameMain_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_keyDown_int_R_boolean 17
typedef jbool (*func_com_nro_GameMain_keyDown_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_nro_GameMain_keyUp_int_R_boolean 18
typedef jbool (*func_com_nro_GameMain_keyUp_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_nro_GameMain_keyTyped_char_R_boolean 19
typedef jbool (*func_com_nro_GameMain_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_com_nro_GameMain_touchDown_int_int_int_int_R_boolean 20
typedef jbool (*func_com_nro_GameMain_touchDown_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain_touchUp_int_int_int_int_R_boolean 21
typedef jbool (*func_com_nro_GameMain_touchUp_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean 22
typedef jbool (*func_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain_touchDragged_int_int_int_R_boolean 23
typedef jbool (*func_com_nro_GameMain_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_nro_GameMain_mouseMoved_int_int_R_boolean 24
typedef jbool (*func_com_nro_GameMain_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_nro_GameMain_scrolled_float_float_R_boolean 25
typedef jbool (*func_com_nro_GameMain_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_nro_GameMain_recoverWebGLResources 26
typedef void (*func_com_nro_GameMain_recoverWebGLResources)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_setupCameraForPlatform 27
typedef void (*func_com_nro_GameMain_setupCameraForPlatform)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_setupCameraForPlatform_int_int 28
typedef void (*func_com_nro_GameMain_setupCameraForPlatform_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_nro_GameMain_checkZoomLevelIOS_float_float 29
typedef void (*func_com_nro_GameMain_checkZoomLevelIOS_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_nro_GameMain_initaliseInputProcessors 30
typedef void (*func_com_nro_GameMain_initaliseInputProcessors)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_checkZoomLevel 31
typedef void (*func_com_nro_GameMain_checkZoomLevel)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_checkZoomLevelWeb_float_float 32
typedef void (*func_com_nro_GameMain_checkZoomLevelWeb_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3 33
typedef void (*func_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_GameMain_paceFrameIfNeeded 34
typedef void (*func_com_nro_GameMain_paceFrameIfNeeded)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_recordRenderedFrame 35
typedef void (*func_com_nro_GameMain_recordRenderedFrame)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain_update 36
typedef void (*func_com_nro_GameMain_update)(jcontext ctx, jobject self);

void mark_com_nro_GameMain(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain(jcontext ctx);
void init_com_nro_GameMain(jcontext ctx, jobject self);
void SM_com_nro_GameMain_onWebGLContextLost(jcontext ctx);
void SM_com_nro_GameMain_onWebGLContextRestored(jcontext ctx);
void M_com_nro_GameMain_recoverWebGLResources(jcontext ctx, jobject self);
void SM_com_nro_GameMain_setFpsConfig_int_boolean_boolean(jcontext ctx, jint param0, jbool param1, jbool param2);
jobject SM_com_nro_GameMain_readClipboardText_R_java_lang_String(jcontext ctx);
void SM_com_nro_GameMain_writeClipboardText_java_lang_String(jcontext ctx, jobject param0);
void SM_com_nro_GameMain_syncDesktopImeState(jcontext ctx);
jint SM_com_nro_GameMain_getWidth_R_int(jcontext ctx);
jint SM_com_nro_GameMain_getHeight_R_int(jcontext ctx);
void SM_com_nro_GameMain_postRunnable_java_lang_Runnable(jcontext ctx, jobject param0);
void M_com_nro_GameMain_setupCameraForPlatform(jcontext ctx, jobject self);
void M_com_nro_GameMain_setupCameraForPlatform_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_nro_GameMain_checkZoomLevelIOS_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_nro_GameMain_initaliseInputProcessors(jcontext ctx, jobject self);
void M_com_nro_GameMain_checkZoomLevel(jcontext ctx, jobject self);
void M_com_nro_GameMain_checkZoomLevelWeb_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_nro_GameMain_create(jcontext ctx, jobject self);
void M_com_nro_GameMain_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_nro_GameMain_adjustTouchCoordinatesIOS_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0);
void M_com_nro_GameMain_paceFrameIfNeeded(jcontext ctx, jobject self);
void M_com_nro_GameMain_recordRenderedFrame(jcontext ctx, jobject self);
void M_com_nro_GameMain_render(jcontext ctx, jobject self);
void M_com_nro_GameMain_update(jcontext ctx, jobject self);
void M_com_nro_GameMain_pause(jcontext ctx, jobject self);
void M_com_nro_GameMain_resume(jcontext ctx, jobject self);
void M_com_nro_GameMain_dispose(jcontext ctx, jobject self);
jbool M_com_nro_GameMain_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_nro_GameMain_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_nro_GameMain_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_com_nro_GameMain_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_nro_GameMain_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_nro_GameMain_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_nro_GameMain_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_com_nro_GameMain_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_nro_GameMain_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void SM_com_nro_GameMain_exitApp(jcontext ctx);
void SM_com_nro_GameMain_access$000_com_nro_GameMain_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
