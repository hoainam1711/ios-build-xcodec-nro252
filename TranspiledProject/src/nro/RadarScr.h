#ifndef HEADER_nro_RadarScr
#define HEADER_nro_RadarScr

#include "Clearwing.h"
#include "nro/mScreen.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_RadarScr {
	nro_mScreen parent;
	jint F_dyArrow;
	jref F_dxArrow;
	jint F_page;
	jint F_maxpage;
	jint F_indexFocus;
	jref F_focus_card;
	jint F_pxx;
	jint F_pyy;
	jint F_xClip;
	jint F_wClip;
	jint F_yClip;
} nro_RadarScr;

extern Class class_nro_RadarScr;

extern jobject SF_nro_RadarScr_instance;
extern jbool SF_nro_RadarScr_TYPE_UI;
extern jobject SF_nro_RadarScr_fraImgFocus;
extern jobject SF_nro_RadarScr_fraImgFocusNone;
extern jobject SF_nro_RadarScr_fraEff;
extern jobject SF_nro_RadarScr_imgUI;
extern jobject SF_nro_RadarScr_imgUIText;
extern jobject SF_nro_RadarScr_imgArrow_Left;
extern jobject SF_nro_RadarScr_imgArrow_Right;
extern jobject SF_nro_RadarScr_imgArrow_Down;
extern jobject SF_nro_RadarScr_imgLock;
extern jobject SF_nro_RadarScr_imgUse_0;
extern jobject SF_nro_RadarScr_imgUse;
extern jobject SF_nro_RadarScr_imgBack;
extern jobject SF_nro_RadarScr_imgChange;
extern jobject SF_nro_RadarScr_imgBar_0;
extern jobject SF_nro_RadarScr_imgBar_1;
extern jobject SF_nro_RadarScr_imgPro_0;
extern jobject SF_nro_RadarScr_imgPro_1;
extern jobject SF_nro_RadarScr_imgRank;
extern jint SF_nro_RadarScr_xUi;
extern jint SF_nro_RadarScr_yUi;
extern jint SF_nro_RadarScr_wUi;
extern jint SF_nro_RadarScr_hUi;
extern jint SF_nro_RadarScr_xMon;
extern jint SF_nro_RadarScr_yMon;
extern jint SF_nro_RadarScr_xText;
extern jint SF_nro_RadarScr_yText;
extern jint SF_nro_RadarScr_wText;
extern jint SF_nro_RadarScr_G;
extern jint SF_nro_RadarScr_hClip;
extern jint SF_nro_RadarScr_yCmd;
extern jobject SF_nro_RadarScr_xCmd;
extern jobject SF_nro_RadarScr_dxCmd;
extern jobject SF_nro_RadarScr_xyArrow;
extern jobject SF_nro_RadarScr_xyItem;
extern jobject SF_nro_RadarScr_index;
extern jobject SF_nro_RadarScr_list;
extern jobject SF_nro_RadarScr_listUse;
extern jint SF_nro_RadarScr_num;

#define VTABLE_nro_RadarScr_hashCode_R_int 0
typedef jint (*func_nro_RadarScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_RadarScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_RadarScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_RadarScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_RadarScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_RadarScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_finalize 5
typedef void (*func_nro_RadarScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_notify 6
typedef void (*func_nro_RadarScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_notifyAll 7
typedef void (*func_nro_RadarScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_wait 8
typedef void (*func_nro_RadarScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_wait_long 9
typedef void (*func_nro_RadarScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_RadarScr_wait_long_int 10
typedef void (*func_nro_RadarScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_RadarScr_switchToMe 11
typedef void (*func_nro_RadarScr_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_keyPress_int 12
typedef void (*func_nro_RadarScr_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_RadarScr_update 13
typedef void (*func_nro_RadarScr_update)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_updateKey 14
typedef void (*func_nro_RadarScr_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_paint_lib_mGraphics 15
typedef void (*func_nro_RadarScr_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_RadarScr_SetRadarScr_nro_MyVector_int_int 16
typedef void (*func_nro_RadarScr_SetRadarScr_nro_MyVector_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_RadarScr_listIndex 17
typedef void (*func_nro_RadarScr_listIndex)(jcontext ctx, jobject self);
#define VTABLE_nro_RadarScr_doClickUse_int 18
typedef void (*func_nro_RadarScr_doClickUse_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_RadarScr_doClickArrow_int 19
typedef void (*func_nro_RadarScr_doClickArrow_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_RadarScr_doKeyItem_int 20
typedef void (*func_nro_RadarScr_doKeyItem_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_RadarScr_doKeyText_int 21
typedef void (*func_nro_RadarScr_doKeyText_int)(jcontext ctx, jobject self, jint param0);

void mark_nro_RadarScr(jobject object, jint mark, jint depth);
void clinit_nro_RadarScr(jcontext ctx);
jobject SM_nro_RadarScr_gI_R_nro_RadarScr(jcontext ctx);
void init_nro_RadarScr(jcontext ctx, jobject self);
void M_nro_RadarScr_SetRadarScr_nro_MyVector_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void SM_nro_RadarScr_SetNum_int_int(jcontext ctx, jint param0, jint param1);
void SM_nro_RadarScr_SetListUse(jcontext ctx);
void M_nro_RadarScr_listIndex(jcontext ctx, jobject self);
void M_nro_RadarScr_update(jcontext ctx, jobject self);
void M_nro_RadarScr_updateKey(jcontext ctx, jobject self);
void M_nro_RadarScr_doClickUse_int(jcontext ctx, jobject self, jint param0);
void M_nro_RadarScr_doClickArrow_int(jcontext ctx, jobject self, jint param0);
void M_nro_RadarScr_doKeyItem_int(jcontext ctx, jobject self, jint param0);
void M_nro_RadarScr_doKeyText_int(jcontext ctx, jobject self, jint param0);
void M_nro_RadarScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_RadarScr_switchToMe(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
