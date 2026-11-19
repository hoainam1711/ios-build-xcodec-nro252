#ifndef HEADER_lib_network_IWebSocketBridge
#define HEADER_lib_network_IWebSocketBridge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_IWebSocketBridge {
	java_lang_Object parent;
} lib_network_IWebSocketBridge;

extern Class class_lib_network_IWebSocketBridge;


#define INDEX_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int 0
typedef void (*func_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define INDEX_lib_network_IWebSocketBridge_send_Array1_byte 1
typedef void (*func_lib_network_IWebSocketBridge_send_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define INDEX_lib_network_IWebSocketBridge_close 2
typedef void (*func_lib_network_IWebSocketBridge_close)(jcontext ctx, jobject self);
#define INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean 3
typedef jbool (*func_lib_network_IWebSocketBridge_isConnected_R_boolean)(jcontext ctx, jobject self);
#define INDEX_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener 4
typedef void (*func_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener)(jcontext ctx, jobject self, jobject param0);

void mark_lib_network_IWebSocketBridge(jobject object, jint mark, jint depth);
void clinit_lib_network_IWebSocketBridge(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
