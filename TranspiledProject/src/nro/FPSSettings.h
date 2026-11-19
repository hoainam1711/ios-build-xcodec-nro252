#ifndef HEADER_nro_FPSSettings
#define HEADER_nro_FPSSettings

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_FPSSettings {
	java_lang_Object parent;
} nro_FPSSettings;

extern Class class_nro_FPSSettings;

extern jbool SF_nro_FPSSettings_isShow;
extern jbool SF_nro_FPSSettings_isShowCase;
extern jbool SF_nro_FPSSettings_isRMSLoaded;
extern jobject SF_nro_FPSSettings_OPTIONS;
extern jint SF_nro_FPSSettings_selectedIndex;
extern jobject SF_nro_FPSSettings_CORNER_CLIP_6;
extern jobject SF_nro_FPSSettings_R_L;
extern jobject SF_nro_FPSSettings_R_R;
extern jobject SF_nro_FPSSettings_BTN_CLIP_5;

#define VTABLE_nro_FPSSettings_hashCode_R_int 0
typedef jint (*func_nro_FPSSettings_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_FPSSettings_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_FPSSettings_clone_R_java_lang_Object 2
typedef jobject (*func_nro_FPSSettings_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_FPSSettings_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_toString_R_java_lang_String 4
typedef jobject (*func_nro_FPSSettings_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_finalize 5
typedef void (*func_nro_FPSSettings_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_notify 6
typedef void (*func_nro_FPSSettings_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_notifyAll 7
typedef void (*func_nro_FPSSettings_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_wait 8
typedef void (*func_nro_FPSSettings_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_FPSSettings_wait_long 9
typedef void (*func_nro_FPSSettings_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_FPSSettings_wait_long_int 10
typedef void (*func_nro_FPSSettings_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_FPSSettings(jobject object, jint mark, jint depth);
void clinit_nro_FPSSettings(jcontext ctx);
void init_nro_FPSSettings(jcontext ctx, jobject self);
void SM_nro_FPSSettings_loadRMS(jcontext ctx);
void SM_nro_FPSSettings_saveRMS(jcontext ctx);
void SM_nro_FPSSettings_applyFPS(jcontext ctx);
jint SM_nro_FPSSettings_getDialogW_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getDialogH_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getDialogX_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getDialogY_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getCaseW_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getCaseH_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getCaseX_R_int(jcontext ctx);
jint SM_nro_FPSSettings_getCaseY_R_int(jcontext ctx);
jbool SM_nro_FPSSettings_updateKey_R_boolean(jcontext ctx);
void SM_nro_FPSSettings_paint_lib_mGraphics(jcontext ctx, jobject param0);
jint SM_nro_FPSSettings_getCornerClip6_int_int_R_int(jcontext ctx, jint param0, jint param1);
void SM_nro_FPSSettings_drawPixelDialog_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
void SM_nro_FPSSettings_drawPixelRadio_lib_mGraphics_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jint SM_nro_FPSSettings_getBtnClip_int_int_R_int(jcontext ctx, jint param0, jint param1);
void SM_nro_FPSSettings_drawPixelButton_lib_mGraphics_int_int_int_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
void SM_nro_FPSSettings_paintBottomCase_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_FPSSettings_paintDialog_lib_mGraphics(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
