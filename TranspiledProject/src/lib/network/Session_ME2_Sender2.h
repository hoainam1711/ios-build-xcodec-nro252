#ifndef HEADER_lib_network_Session_ME2$Sender2
#define HEADER_lib_network_Session_ME2$Sender2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_Session_ME2$Sender2 {
	java_lang_Object parent;
	jref F_sendingMessage;
	jref F_sessionmeInstance;
} lib_network_Session_ME2$Sender2;

extern Class class_lib_network_Session_ME2$Sender2;


#define VTABLE_lib_network_Session_ME2$Sender2_hashCode_R_int 0
typedef jint (*func_lib_network_Session_ME2$Sender2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_network_Session_ME2$Sender2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2$Sender2_clone_R_java_lang_Object 2
typedef jobject (*func_lib_network_Session_ME2$Sender2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_network_Session_ME2$Sender2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_toString_R_java_lang_String 4
typedef jobject (*func_lib_network_Session_ME2$Sender2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_finalize 5
typedef void (*func_lib_network_Session_ME2$Sender2_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_notify 6
typedef void (*func_lib_network_Session_ME2$Sender2_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_notifyAll 7
typedef void (*func_lib_network_Session_ME2$Sender2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_wait 8
typedef void (*func_lib_network_Session_ME2$Sender2_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_wait_long 9
typedef void (*func_lib_network_Session_ME2$Sender2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_network_Session_ME2$Sender2_wait_long_int 10
typedef void (*func_lib_network_Session_ME2$Sender2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_network_Session_ME2$Sender2_run 11
typedef void (*func_lib_network_Session_ME2$Sender2_run)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2$Sender2_AddMessage_nro_Message 12
typedef void (*func_lib_network_Session_ME2$Sender2_AddMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2$Sender2_wakeUp 13
typedef void (*func_lib_network_Session_ME2$Sender2_wakeUp)(jcontext ctx, jobject self);

void mark_lib_network_Session_ME2$Sender2(jobject object, jint mark, jint depth);
void clinit_lib_network_Session_ME2$Sender2(jcontext ctx);
void init_lib_network_Session_ME2$Sender2_lib_network_Session_ME2(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME2$Sender2_AddMessage_nro_Message(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME2$Sender2_wakeUp(jcontext ctx, jobject self);
void M_lib_network_Session_ME2$Sender2_run(jcontext ctx, jobject self);
jobject SM_lib_network_Session_ME2$Sender2_a_lib_network_Session_ME2$Sender2_R_java_util_Vector(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
