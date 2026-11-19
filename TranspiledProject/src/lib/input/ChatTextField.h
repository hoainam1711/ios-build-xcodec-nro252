#ifndef HEADER_lib_input_ChatTextField
#define HEADER_lib_input_ChatTextField

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_input_ChatTextField {
	java_lang_Object parent;
	jref F_tfChat;
	jbool F_isShow;
	jref F_parentScreen;
	jlong F_lastChatTime;
	jref F_left;
	jref F_right;
	jref F_center;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jref F_to;
	jref F_strChat;
	jref F_history;
	jint F_historyIndex;
	jref F_draftBeforeHistory;
} lib_input_ChatTextField;

extern Class class_lib_input_ChatTextField;

extern jobject SF_lib_input_ChatTextField_i;
extern jint SF_lib_input_ChatTextField_MAX_HISTORY;

#define VTABLE_lib_input_ChatTextField_hashCode_R_int 0
typedef jint (*func_lib_input_ChatTextField_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_input_ChatTextField_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_ChatTextField_clone_R_java_lang_Object 2
typedef jobject (*func_lib_input_ChatTextField_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_input_ChatTextField_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_toString_R_java_lang_String 4
typedef jobject (*func_lib_input_ChatTextField_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_finalize 5
typedef void (*func_lib_input_ChatTextField_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_notify 6
typedef void (*func_lib_input_ChatTextField_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_notifyAll 7
typedef void (*func_lib_input_ChatTextField_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_wait 8
typedef void (*func_lib_input_ChatTextField_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_wait_long 9
typedef void (*func_lib_input_ChatTextField_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_input_ChatTextField_wait_long_int 10
typedef void (*func_lib_input_ChatTextField_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_input_ChatTextField_perform_int_java_lang_Object 11
typedef void (*func_lib_input_ChatTextField_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_lib_input_ChatTextField_syncRightCaption 12
typedef void (*func_lib_input_ChatTextField_syncRightCaption)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_navigateHistory_int 13
typedef void (*func_lib_input_ChatTextField_navigateHistory_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_input_ChatTextField_recordHistory_java_lang_String 14
typedef void (*func_lib_input_ChatTextField_recordHistory_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_ChatTextField_initChatTextField 15
typedef void (*func_lib_input_ChatTextField_initChatTextField)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_keyPressed_int 16
typedef void (*func_lib_input_ChatTextField_keyPressed_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String 17
typedef void (*func_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_lib_input_ChatTextField_startChat_java_lang_String 18
typedef void (*func_lib_input_ChatTextField_startChat_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_ChatTextField_update 19
typedef void (*func_lib_input_ChatTextField_update)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_paint_lib_mGraphics 20
typedef void (*func_lib_input_ChatTextField_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_input_ChatTextField_resetCooldown 21
typedef void (*func_lib_input_ChatTextField_resetCooldown)(jcontext ctx, jobject self);
#define VTABLE_lib_input_ChatTextField_close 22
typedef void (*func_lib_input_ChatTextField_close)(jcontext ctx, jobject self);

void mark_lib_input_ChatTextField(jobject object, jint mark, jint depth);
void clinit_lib_input_ChatTextField(jcontext ctx);
void M_lib_input_ChatTextField_syncRightCaption(jcontext ctx, jobject self);
void SM_lib_input_ChatTextField_syncActiveCaptions(jcontext ctx);
void M_lib_input_ChatTextField_navigateHistory_int(jcontext ctx, jobject self, jint param0);
void M_lib_input_ChatTextField_recordHistory_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_lib_input_ChatTextField_initChatTextField(jcontext ctx, jobject self);
void M_lib_input_ChatTextField_keyPressed_int(jcontext ctx, jobject self, jint param0);
jobject SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(jcontext ctx);
void init_lib_input_ChatTextField(jcontext ctx, jobject self);
void M_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_lib_input_ChatTextField_startChat_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_lib_input_ChatTextField_update(jcontext ctx, jobject self);
void M_lib_input_ChatTextField_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_lib_input_ChatTextField_resetCooldown(jcontext ctx, jobject self);
void M_lib_input_ChatTextField_close(jcontext ctx, jobject self);
void M_lib_input_ChatTextField_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
