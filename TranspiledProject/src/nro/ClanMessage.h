#ifndef HEADER_nro_ClanMessage
#define HEADER_nro_ClanMessage

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ClanMessage {
	java_lang_Object parent;
	jint F_id;
	jint F_type;
	jint F_playerId;
	jref F_playerName;
	jlong F_time;
	jref F_chat;
	jbyte F_color;
	jbyte F_role;
	jint F_timeAgo;
	jint F_recieve;
	jint F_maxCap;
	jref F_option;
} nro_ClanMessage;

extern Class class_nro_ClanMessage;

extern jobject SF_nro_ClanMessage_vMessage;

#define VTABLE_nro_ClanMessage_hashCode_R_int 0
typedef jint (*func_nro_ClanMessage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ClanMessage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClanMessage_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ClanMessage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ClanMessage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_toString_R_java_lang_String 4
typedef jobject (*func_nro_ClanMessage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_finalize 5
typedef void (*func_nro_ClanMessage_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_notify 6
typedef void (*func_nro_ClanMessage_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_notifyAll 7
typedef void (*func_nro_ClanMessage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_wait 8
typedef void (*func_nro_ClanMessage_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanMessage_wait_long 9
typedef void (*func_nro_ClanMessage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ClanMessage_wait_long_int 10
typedef void (*func_nro_ClanMessage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ClanMessage_perform_int_java_lang_Object 11
typedef void (*func_nro_ClanMessage_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_ClanMessage_paint_lib_mGraphics_int_int 12
typedef void (*func_nro_ClanMessage_paint_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_ClanMessage_update 13
typedef void (*func_nro_ClanMessage_update)(jcontext ctx, jobject self);

void mark_nro_ClanMessage(jobject object, jint mark, jint depth);
void clinit_nro_ClanMessage(jcontext ctx);
void init_nro_ClanMessage(jcontext ctx, jobject self);
void SM_nro_ClanMessage_addMessage_nro_ClanMessage_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2);
void M_nro_ClanMessage_paint_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_ClanMessage_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_ClanMessage_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
