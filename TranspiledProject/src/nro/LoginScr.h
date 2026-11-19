#ifndef HEADER_nro_LoginScr
#define HEADER_nro_LoginScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_LoginScr {
	nro_mScreen parent;
	jref F_tfUser;
	jref F_tfPass;
	jint F_focus;
	jint F_wC;
	jint F_yL;
	jint F_defYL;
	jbool F_isCheck;
	jbool F_isRes;
	jref F_cmdLogin;
	jref F_cmdFogetPass;
	jref F_cmdRes;
	jref F_cmdMenu;
	jref F_cmdBackFromRegister;
	jref F_cmdBack;
	jint F_yt;
	jref F_cmdOK;
	jint F_xLog;
	jint F_yLog;
	jint F_E;
	jint F_tipid;
	jbool F_isLogin2;
	jint F_v;
	jint F_g;
	jint F_ylogo;
	jint F_dir;
	jref F_cmdCallHotline;
	jint F_lastW;
	jint F_lastH;
} nro_LoginScr;

extern Class class_nro_LoginScr;

extern jbool SF_nro_LoginScr_isContinueToLogin;
extern jbool SF_nro_LoginScr_isUpdateAll;
extern jbool SF_nro_LoginScr_isUpdateData;
extern jbool SF_nro_LoginScr_isUpdateMap;
extern jbool SF_nro_LoginScr_isUpdateSkill;
extern jbool SF_nro_LoginScr_isUpdateItem;
extern jobject SF_nro_LoginScr_serverName;
extern jobject SF_nro_LoginScr_imgTitle;
extern jshort SF_nro_LoginScr_timeLogin;
extern jlong SF_nro_LoginScr_lastTimeLogin;
extern jlong SF_nro_LoginScr_currTimeLogin;

#define VTABLE_nro_LoginScr_hashCode_R_int 0
typedef jint (*func_nro_LoginScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_LoginScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_LoginScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_LoginScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_LoginScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_LoginScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_finalize 5
typedef void (*func_nro_LoginScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_notify 6
typedef void (*func_nro_LoginScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_notifyAll 7
typedef void (*func_nro_LoginScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_wait 8
typedef void (*func_nro_LoginScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_wait_long 9
typedef void (*func_nro_LoginScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_LoginScr_wait_long_int 10
typedef void (*func_nro_LoginScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_LoginScr_switchToMe 11
typedef void (*func_nro_LoginScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_keyPress_int 12
typedef void (*func_nro_LoginScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_LoginScr_update 13
typedef void (*func_nro_LoginScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_updateKey 14
typedef void (*func_nro_LoginScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_paint_lib_mGraphics 15
typedef void (*func_nro_LoginScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_LoginScr_perform_int_java_lang_Object 16
typedef void (*func_nro_LoginScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_LoginScr_doLogin 17
typedef void (*func_nro_LoginScr_doLogin)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_savePass 18
typedef void (*func_nro_LoginScr_savePass)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_updatePosition 19
typedef void (*func_nro_LoginScr_updatePosition)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_actRegisterLeft 20
typedef void (*func_nro_LoginScr_actRegisterLeft)(jcontext ctx, jobject self);
#define VTABLE_nro_LoginScr_actRegister 21
typedef void (*func_nro_LoginScr_actRegister)(jcontext ctx, jobject self);

void mark_nro_LoginScr(jobject object, jint mark, jint depth);
void clinit_nro_LoginScr(jcontext ctx);
void M_nro_LoginScr_switchToMe(jcontext ctx, jobject self);
void init_nro_LoginScr(jcontext ctx, jobject self);
void M_nro_LoginScr_doLogin(jcontext ctx, jobject self);
void M_nro_LoginScr_savePass(jcontext ctx, jobject self);
void M_nro_LoginScr_update(jcontext ctx, jobject self);
void M_nro_LoginScr_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_LoginScr_updatePosition(jcontext ctx, jobject self);
void M_nro_LoginScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_LoginScr_updateKey(jcontext ctx, jobject self);
void M_nro_LoginScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_LoginScr_actRegisterLeft(jcontext ctx, jobject self);
void M_nro_LoginScr_actRegister(jcontext ctx, jobject self);
void SM_nro_LoginScr_backToRegister(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
