#ifndef HEADER_nro_PopUp
#define HEADER_nro_PopUp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PopUp {
	java_lang_Object parent;
	jint F_sayWidth;
	jint F_sayRun;
	jref F_says;
	jint F_cx;
	jint F_cy;
	jint F_cw;
	jint F_ch;
	jbool F_isWayPoint;
	jint F_tDelay;
	jint F_timeDelay;
	jref F_command;
	jbool F_isPaint;
	jbool F_isHide;
} nro_PopUp;

extern Class class_nro_PopUp;

extern jobject SF_nro_PopUp_vPopups;
extern jobject SF_nro_PopUp_goc;
extern jobject SF_nro_PopUp_p;
extern jobject SF_nro_PopUp_imgPopUp;
extern jobject SF_nro_PopUp_imgPopUp2;

#define VTABLE_nro_PopUp_hashCode_R_int 0
typedef jint (*func_nro_PopUp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PopUp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PopUp_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PopUp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PopUp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_toString_R_java_lang_String 4
typedef jobject (*func_nro_PopUp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_finalize 5
typedef void (*func_nro_PopUp_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_notify 6
typedef void (*func_nro_PopUp_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_notifyAll 7
typedef void (*func_nro_PopUp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_wait 8
typedef void (*func_nro_PopUp_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUp_wait_long 9
typedef void (*func_nro_PopUp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PopUp_wait_long_int 10
typedef void (*func_nro_PopUp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int 11
typedef void (*func_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_PopUp_doClick_int 12
typedef void (*func_nro_PopUp_doClick_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean 13
typedef void (*func_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6);
#define VTABLE_nro_PopUp_paint_lib_mGraphics 14
typedef void (*func_nro_PopUp_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_PopUp(jobject object, jint mark, jint depth);
void clinit_nro_PopUp(jcontext ctx);
void SM_nro_PopUp_loadBg(jcontext ctx);
void init_nro_PopUp_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_PopUp_updateXYWH_Array1_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void SM_nro_PopUp_addPopUp_nro_PopUp(jcontext ctx, jobject param0);
void SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6);
void M_nro_PopUp_doClick_int(jcontext ctx, jobject self, jint param0);
void M_nro_PopUp_paintClipPopUp_lib_mGraphics_int_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6);
void M_nro_PopUp_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void SM_nro_PopUp_paintAll_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_PopUp_update(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
