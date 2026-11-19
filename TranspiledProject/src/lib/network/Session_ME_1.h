#ifndef HEADER_lib_network_Session_ME$1
#define HEADER_lib_network_Session_ME$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "lib/network/IWebSocketBridge_IWebSocketListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_Session_ME$1 {
	java_lang_Object parent;
	jint F_val$currentGen;
	jref F_val$self;
	jref F_val$bridgeInstance;
	jref F_this$0;
} lib_network_Session_ME$1;

extern Class class_lib_network_Session_ME$1;


#define VTABLE_lib_network_Session_ME$1_hashCode_R_int 0
typedef jint (*func_lib_network_Session_ME$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_network_Session_ME$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME$1_clone_R_java_lang_Object 2
typedef jobject (*func_lib_network_Session_ME$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_network_Session_ME$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_toString_R_java_lang_String 4
typedef jobject (*func_lib_network_Session_ME$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_finalize 5
typedef void (*func_lib_network_Session_ME$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_notify 6
typedef void (*func_lib_network_Session_ME$1_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_notifyAll 7
typedef void (*func_lib_network_Session_ME$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_wait 8
typedef void (*func_lib_network_Session_ME$1_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_wait_long 9
typedef void (*func_lib_network_Session_ME$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_network_Session_ME$1_wait_long_int 10
typedef void (*func_lib_network_Session_ME$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_network_Session_ME$1_onOpen 11
typedef void (*func_lib_network_Session_ME$1_onOpen)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_onMessage_Array1_byte 12
typedef void (*func_lib_network_Session_ME$1_onMessage_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME$1_onClose 13
typedef void (*func_lib_network_Session_ME$1_onClose)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME$1_onError_java_lang_String 14
typedef void (*func_lib_network_Session_ME$1_onError_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_lib_network_Session_ME$1(jobject object, jint mark, jint depth);
void clinit_lib_network_Session_ME$1(jcontext ctx);
void init_lib_network_Session_ME$1_lib_network_Session_ME_int_lib_network_Session_ME_lib_network_IWebSocketBridge(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_lib_network_Session_ME$1_onOpen(jcontext ctx, jobject self);
void M_lib_network_Session_ME$1_onMessage_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME$1_onClose(jcontext ctx, jobject self);
void M_lib_network_Session_ME$1_onError_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
