#ifndef HEADER_nro_Command
#define HEADER_nro_Command

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Command {
	java_lang_Object parent;
	jbool F_isDisplay;
	jref F_caption;
	jref F_subCaption;
	jref F_actionListener;
	jint F_type;
	jbool F_isPlaySoundButton;
	jref F_img;
	jref F_imgFocus;
	jref F_imgBtn;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jbool F_isFocus;
	jref F_p;
	jref F_caption2;
	jbool F_cmdClosePanel;
	jbool F_isPaintNew;
} nro_Command;

extern Class class_nro_Command;

extern jobject SF_nro_Command_btn0left;
extern jobject SF_nro_Command_btn0mid;
extern jobject SF_nro_Command_btn0right;
extern jobject SF_nro_Command_btn1left;
extern jobject SF_nro_Command_btn1mid;
extern jobject SF_nro_Command_btn1right;

#define VTABLE_nro_Command_hashCode_R_int 0
typedef jint (*func_nro_Command_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Command_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Command_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Command_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Command_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_toString_R_java_lang_String 4
typedef jobject (*func_nro_Command_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_finalize 5
typedef void (*func_nro_Command_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_notify 6
typedef void (*func_nro_Command_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_notifyAll 7
typedef void (*func_nro_Command_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_wait 8
typedef void (*func_nro_Command_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_wait_long 9
typedef void (*func_nro_Command_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Command_wait_long_int 10
typedef void (*func_nro_Command_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Command_performAction 11
typedef void (*func_nro_Command_performAction)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_setType 12
typedef void (*func_nro_Command_setType)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_paint_lib_mGraphics 13
typedef void (*func_nro_Command_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Command_isPointerPressInside_R_boolean 14
typedef jbool (*func_nro_Command_isPointerPressInside_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Command_isPointerPressInsideCamera_int_int_R_boolean 15
typedef jbool (*func_nro_Command_isPointerPressInsideCamera_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_nro_Command(jobject object, jint mark, jint depth);
void clinit_nro_Command(jcontext ctx);
void init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4, jint param5);
void init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
void init_nro_Command_java_lang_String_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void init_nro_Command_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_nro_Command_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_nro_Command_performAction(jcontext ctx, jobject self);
void M_nro_Command_setType(jcontext ctx, jobject self);
void M_nro_Command_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void SM_nro_Command_paintOngMau_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_int_int_int_lib_mGraphics(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jobject param6);
jbool M_nro_Command_isPointerPressInside_R_boolean(jcontext ctx, jobject self);
jbool M_nro_Command_isPointerPressInsideCamera_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
