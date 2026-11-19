#ifndef HEADER_lib_network_IWebSocketBridge$IWebSocketListener
#define HEADER_lib_network_IWebSocketBridge$IWebSocketListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_IWebSocketBridge$IWebSocketListener {
	java_lang_Object parent;
} lib_network_IWebSocketBridge$IWebSocketListener;

extern Class class_lib_network_IWebSocketBridge$IWebSocketListener;


#define INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onOpen 0
typedef void (*func_lib_network_IWebSocketBridge$IWebSocketListener_onOpen)(jcontext ctx, jobject self);
#define INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onMessage_Array1_byte 1
typedef void (*func_lib_network_IWebSocketBridge$IWebSocketListener_onMessage_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onClose 2
typedef void (*func_lib_network_IWebSocketBridge$IWebSocketListener_onClose)(jcontext ctx, jobject self);
#define INDEX_lib_network_IWebSocketBridge$IWebSocketListener_onError_java_lang_String 3
typedef void (*func_lib_network_IWebSocketBridge$IWebSocketListener_onError_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_lib_network_IWebSocketBridge$IWebSocketListener(jobject object, jint mark, jint depth);
void clinit_lib_network_IWebSocketBridge$IWebSocketListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
