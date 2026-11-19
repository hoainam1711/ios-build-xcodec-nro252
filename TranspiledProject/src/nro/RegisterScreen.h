#ifndef HEADER_nro_RegisterScreen
#define HEADER_nro_RegisterScreen

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_RegisterScreen {
	nro_mScreen parent;
	jref F_tfUser;
	jref F_tfNgay;
	jref F_tfThang;
	jref F_tfNam;
	jref F_tfDiachi;
	jref F_tfCMND;
	jref F_tfNgayCap;
	jref F_tfNoiCap;
	jref F_tfSodt;
	jint F_focus;
	jint F_yL;
	jint F_defYL;
	jbool F_isCheck;
	jbool F_isRes;
	jref F_cmdLogin;
	jref F_cmdFogetPass;
	jref F_cmdRes;
	jref F_cmdMenu;
	jref F_cmdBackFromRegister;
	jint F_yt;
	jref F_cmdOK;
	jint F_xLog;
	jint F_yLog;
	jint F_wP;
	jint F_tipid;
	jbool F_isLogin2;
	jint F_v;
	jint F_g;
	jint F_ylogo;
	jint F_dir;
} nro_RegisterScreen;

extern Class class_nro_RegisterScreen;

extern jbool SF_nro_RegisterScreen_isContinueToLogin;

#define VTABLE_nro_RegisterScreen_hashCode_R_int 0
typedef jint (*func_nro_RegisterScreen_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_RegisterScreen_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_RegisterScreen_clone_R_java_lang_Object 2
typedef jobject (*func_nro_RegisterScreen_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_RegisterScreen_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_toString_R_java_lang_String 4
typedef jobject (*func_nro_RegisterScreen_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_finalize 5
typedef void (*func_nro_RegisterScreen_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_notify 6
typedef void (*func_nro_RegisterScreen_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_notifyAll 7
typedef void (*func_nro_RegisterScreen_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_wait 8
typedef void (*func_nro_RegisterScreen_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_wait_long 9
typedef void (*func_nro_RegisterScreen_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_RegisterScreen_wait_long_int 10
typedef void (*func_nro_RegisterScreen_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_RegisterScreen_switchToMe 11
typedef void (*func_nro_RegisterScreen_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_keyPress_int 12
typedef void (*func_nro_RegisterScreen_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_RegisterScreen_update 13
typedef void (*func_nro_RegisterScreen_update)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_updateKey 14
typedef void (*func_nro_RegisterScreen_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_RegisterScreen_paint_lib_mGraphics 15
typedef void (*func_nro_RegisterScreen_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_RegisterScreen_perform_int_java_lang_Object 16
typedef void (*func_nro_RegisterScreen_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_RegisterScreen_getActiveField_R_lib_input_TField 17
typedef jobject (*func_nro_RegisterScreen_getActiveField_R_lib_input_TField)(jcontext ctx, jobject self);

void mark_nro_RegisterScreen(jobject object, jint mark, jint depth);
void clinit_nro_RegisterScreen(jcontext ctx);
jobject M_nro_RegisterScreen_getActiveField_R_lib_input_TField(jcontext ctx, jobject self);
void M_nro_RegisterScreen_switchToMe(jcontext ctx, jobject self);
void init_nro_RegisterScreen_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_RegisterScreen_update(jcontext ctx, jobject self);
void M_nro_RegisterScreen_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_RegisterScreen_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_RegisterScreen_updateKey(jcontext ctx, jobject self);
void M_nro_RegisterScreen_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
