#ifndef HEADER_lib_mSystem
#define HEADER_lib_mSystem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_mSystem {
	java_lang_Object parent;
} lib_mSystem;

extern Class class_lib_mSystem;

extern jint SF_lib_mSystem_clientTypec;
extern jbyte SF_lib_mSystem_curINAPP;
extern jbyte SF_lib_mSystem_maxINAPP;
extern jobject SF_lib_mSystem_g;

#define VTABLE_lib_mSystem_hashCode_R_int 0
typedef jint (*func_lib_mSystem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_mSystem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_mSystem_clone_R_java_lang_Object 2
typedef jobject (*func_lib_mSystem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_mSystem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_toString_R_java_lang_String 4
typedef jobject (*func_lib_mSystem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_finalize 5
typedef void (*func_lib_mSystem_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_notify 6
typedef void (*func_lib_mSystem_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_notifyAll 7
typedef void (*func_lib_mSystem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_wait 8
typedef void (*func_lib_mSystem_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_mSystem_wait_long 9
typedef void (*func_lib_mSystem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_mSystem_wait_long_int 10
typedef void (*func_lib_mSystem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_lib_mSystem(jobject object, jint mark, jint depth);
void clinit_lib_mSystem(jcontext ctx);
void init_lib_mSystem(jcontext ctx, jobject self);
void SM_lib_mSystem_resetCurInapp(jcontext ctx);
jint SM_lib_mSystem_getWidth_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jint SM_lib_mSystem_getHeight_javax_microedition_lcdui_Image_R_int(jcontext ctx, jobject param0);
jobject SM_lib_mSystem_getTimeCountDown_long_int_boolean_boolean_R_java_lang_String(jcontext ctx, jlong param0, jint param1, jbool param2, jbool param3);
jobject SM_lib_mSystem_numberTostring_long_R_java_lang_String(jcontext ctx, jlong param0);
void SM_lib_mSystem_callHotlineJava(jcontext ctx);
void SM_lib_mSystem_paintPopUp2_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_lib_mSystem_sleep(jcontext ctx);
void SM_lib_mSystem_onConnectionFail_boolean(jcontext ctx, jbool param0);
void SM_lib_mSystem_onDisconnected_boolean(jcontext ctx, jbool param0);
jobject SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
jobject SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
void SM_lib_mSystem_paintFlyText_lib_mGraphics(jcontext ctx, jobject param0);
jlong SM_lib_mSystem_currentTimeMillis_R_long(jcontext ctx);
jobject SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(jcontext ctx, jobject param0);
void SM_lib_mSystem_println_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
