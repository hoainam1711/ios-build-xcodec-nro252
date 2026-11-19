#ifndef HEADER_lib_network_Session_ME$IWebSocketBridgeFactory
#define HEADER_lib_network_Session_ME$IWebSocketBridgeFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_Session_ME$IWebSocketBridgeFactory {
	java_lang_Object parent;
} lib_network_Session_ME$IWebSocketBridgeFactory;

extern Class class_lib_network_Session_ME$IWebSocketBridgeFactory;


#define INDEX_lib_network_Session_ME$IWebSocketBridgeFactory_createBridge_R_lib_network_IWebSocketBridge 0
typedef jobject (*func_lib_network_Session_ME$IWebSocketBridgeFactory_createBridge_R_lib_network_IWebSocketBridge)(jcontext ctx, jobject self);

void mark_lib_network_Session_ME$IWebSocketBridgeFactory(jobject object, jint mark, jint depth);
void clinit_lib_network_Session_ME$IWebSocketBridgeFactory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
