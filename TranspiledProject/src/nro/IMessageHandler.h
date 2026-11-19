#ifndef HEADER_nro_IMessageHandler
#define HEADER_nro_IMessageHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_IMessageHandler {
	java_lang_Object parent;
} nro_IMessageHandler;

extern Class class_nro_IMessageHandler;


#define INDEX_nro_IMessageHandler_onMessage_nro_Message 0
typedef void (*func_nro_IMessageHandler_onMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define INDEX_nro_IMessageHandler_onConnectionFail_boolean 1
typedef void (*func_nro_IMessageHandler_onConnectionFail_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_nro_IMessageHandler_onDisconnected_boolean 2
typedef void (*func_nro_IMessageHandler_onDisconnected_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_nro_IMessageHandler_onConnectOK_boolean 3
typedef void (*func_nro_IMessageHandler_onConnectOK_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_nro_IMessageHandler(jobject object, jint mark, jint depth);
void clinit_nro_IMessageHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
