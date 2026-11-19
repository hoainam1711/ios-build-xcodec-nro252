#ifndef HEADER_nro_ServerScr
#define HEADER_nro_ServerScr

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ServerScr {
	nro_mScreen parent;
	jint F_mainSelect;
	jref F_vecServer;
	jref F_cmdCheck;
	jint F_wc;
	jint F_hc;
	jint F_w2c;
	jint F_numw;
	jint F_numh;
	jref F_cmdGlobal;
	jref F_cmdVietNam;
	jbool F_isChooseArea;
	jbool F_isPaintNewUi;
	jref F_list;
	jbyte F_select_Area;
	jbyte F_select_Lang;
	jbyte F_select_typeSv;
	jref F_cmdChooseArea;
	jbool F_isPaint_select_area;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jint F_xName;
	jint F_yName;
	jint F_xsub;
	jint F_ysub;
	jint F_wsub;
	jint F_hsub;
	jint F_xsubpaint;
	jint F_ysubpaint;
	jint F_xPop;
	jint F_yPop;
	jint F_wPop;
	jint F_hPop;
	jint F_xinfo;
	jint F_yinfo;
	jint F_winfo;
	jint F_hinfo;
	jint F_yBox;
	jint F_wBox;
	jint F_hBox;
	jint F_ntypeSv;
	jint F_wCheck;
	jint F_xPopUp_Area;
	jint F_yPopUp_Area;
	jint F_xPopUp_Lang;
	jref F_strArea;
	jref F_strTypeSV;
	jref F_strTypeSV_info;
	jref F_strShowAll;
} nro_ServerScr;

extern Class class_nro_ServerScr;

extern jobject SF_nro_ServerScr_m;
extern jobject SF_nro_ServerScr_iconHead;
extern jbool SF_nro_ServerScr_isShowSv_HaveChar;

#define VTABLE_nro_ServerScr_hashCode_R_int 0
typedef jint (*func_nro_ServerScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ServerScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ServerScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ServerScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ServerScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_ServerScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_finalize 5
typedef void (*func_nro_ServerScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_notify 6
typedef void (*func_nro_ServerScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_notifyAll 7
typedef void (*func_nro_ServerScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_wait 8
typedef void (*func_nro_ServerScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_wait_long 9
typedef void (*func_nro_ServerScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ServerScr_wait_long_int 10
typedef void (*func_nro_ServerScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ServerScr_switchToMe 11
typedef void (*func_nro_ServerScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_keyPress_int 12
typedef void (*func_nro_ServerScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_ServerScr_update 13
typedef void (*func_nro_ServerScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_updateKey 14
typedef void (*func_nro_ServerScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_paint_lib_mGraphics 15
typedef void (*func_nro_ServerScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ServerScr_perform_int_java_lang_Object 16
typedef void (*func_nro_ServerScr_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_ServerScr_Save_RMS_Area 17
typedef void (*func_nro_ServerScr_Save_RMS_Area)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_SetNewSelectMenu_int_int 18
typedef void (*func_nro_ServerScr_SetNewSelectMenu_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_ServerScr_GetVecTypeSv_byte_byte 19
typedef void (*func_nro_ServerScr_GetVecTypeSv_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_nro_ServerScr_a_lib_mGraphics_int_int 20
typedef void (*func_nro_ServerScr_a_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_ServerScr_UpdTouch_NewUI 21
typedef void (*func_nro_ServerScr_UpdTouch_NewUI)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_f 22
typedef void (*func_nro_ServerScr_f)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerScr_Load_RMS_Area 23
typedef void (*func_nro_ServerScr_Load_RMS_Area)(jcontext ctx, jobject self);

void mark_nro_ServerScr(jobject object, jint mark, jint depth);
void clinit_nro_ServerScr(jcontext ctx);
void M_nro_ServerScr_switchToMe(jcontext ctx, jobject self);
void init_nro_ServerScr(jcontext ctx, jobject self);
void M_nro_ServerScr_Save_RMS_Area(jcontext ctx, jobject self);
void M_nro_ServerScr_update(jcontext ctx, jobject self);
void M_nro_ServerScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_ServerScr_updateKey(jcontext ctx, jobject self);
void M_nro_ServerScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_ServerScr_SetNewSelectMenu_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_ServerScr_GetVecTypeSv_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
void M_nro_ServerScr_a_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_ServerScr_UpdTouch_NewUI(jcontext ctx, jobject self);
void M_nro_ServerScr_f(jcontext ctx, jobject self);
void M_nro_ServerScr_Load_RMS_Area(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
