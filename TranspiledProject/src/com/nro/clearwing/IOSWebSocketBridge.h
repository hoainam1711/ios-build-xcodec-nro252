#ifndef HEADER_com_nro_clearwing_IOSWebSocketBridge
#define HEADER_com_nro_clearwing_IOSWebSocketBridge

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "lib/network/IWebSocketBridge.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_clearwing_IOSWebSocketBridge {
	java_lang_Object parent;
	jlong F_generation;
	jbool F_connected;
	jref F_listener;
} com_nro_clearwing_IOSWebSocketBridge;

extern Class class_com_nro_clearwing_IOSWebSocketBridge;

extern jint SF_com_nro_clearwing_IOSWebSocketBridge_OPENED;
extern jint SF_com_nro_clearwing_IOSWebSocketBridge_MESSAGE;
extern jint SF_com_nro_clearwing_IOSWebSocketBridge_CLOSED;
extern jint SF_com_nro_clearwing_IOSWebSocketBridge_ERROR;
extern jobject SF_com_nro_clearwing_IOSWebSocketBridge_connections;
extern jlong SF_com_nro_clearwing_IOSWebSocketBridge_nextGeneration;
extern jbool SF_com_nro_clearwing_IOSWebSocketBridge_shuttingDown;

#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_hashCode_R_int 0
typedef jint (*func_com_nro_clearwing_IOSWebSocketBridge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_nro_clearwing_IOSWebSocketBridge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_clone_R_java_lang_Object 2
typedef jobject (*func_com_nro_clearwing_IOSWebSocketBridge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_getClass_R_java_lang_Class 3
typedef jobject (*func_com_nro_clearwing_IOSWebSocketBridge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_toString_R_java_lang_String 4
typedef jobject (*func_com_nro_clearwing_IOSWebSocketBridge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_finalize 5
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_notify 6
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_notify)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_notifyAll 7
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_wait 8
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_wait)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_wait_long 9
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_wait_long_int 10
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int 11
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte 12
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_close 13
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_close)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean 14
typedef jbool (*func_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener 15
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_clearwing_IOSWebSocketBridge_unregister 16
typedef void (*func_com_nro_clearwing_IOSWebSocketBridge_unregister)(jcontext ctx, jobject self);

void mark_com_nro_clearwing_IOSWebSocketBridge(jobject object, jint mark, jint depth);
void clinit_com_nro_clearwing_IOSWebSocketBridge(jcontext ctx);
void init_com_nro_clearwing_IOSWebSocketBridge(jcontext ctx, jobject self);
void M_com_nro_clearwing_IOSWebSocketBridge_connect_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_com_nro_clearwing_IOSWebSocketBridge_send_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_com_nro_clearwing_IOSWebSocketBridge_close(jcontext ctx, jobject self);
void M_com_nro_clearwing_IOSWebSocketBridge_unregister(jcontext ctx, jobject self);
jbool M_com_nro_clearwing_IOSWebSocketBridge_isConnected_R_boolean(jcontext ctx, jobject self);
void M_com_nro_clearwing_IOSWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener(jcontext ctx, jobject self, jobject param0);
void SM_com_nro_clearwing_IOSWebSocketBridge_shutdown(jcontext ctx);
void SM_com_nro_clearwing_IOSWebSocketBridge_onOpen_long(jcontext ctx, jlong param0);
void SM_com_nro_clearwing_IOSWebSocketBridge_onMessage_long_Array1_byte(jcontext ctx, jlong param0, jobject param1);
void SM_com_nro_clearwing_IOSWebSocketBridge_onClose_long(jcontext ctx, jlong param0);
void SM_com_nro_clearwing_IOSWebSocketBridge_onError_long_java_lang_String(jcontext ctx, jlong param0, jobject param1);
void SM_com_nro_clearwing_IOSWebSocketBridge_dispatch_long_int_Array1_byte_java_lang_String(jcontext ctx, jlong param0, jint param1, jobject param2, jobject param3);
jbool SM_com_nro_clearwing_IOSWebSocketBridge_connectNative_java_lang_String_long_R_boolean(jcontext ctx, jobject param0, jlong param1);
void SM_com_nro_clearwing_IOSWebSocketBridge_sendNative_Array1_byte_long(jcontext ctx, jobject param0, jlong param1);
void SM_com_nro_clearwing_IOSWebSocketBridge_closeNative_long(jcontext ctx, jlong param0);
void SM_com_nro_clearwing_IOSWebSocketBridge_pollEvents(jcontext ctx);
void SM_com_nro_clearwing_IOSWebSocketBridge_lambda$connect$0_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
