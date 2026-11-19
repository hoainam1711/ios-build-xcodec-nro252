#ifndef HEADER_lib_network_Session_ME
#define HEADER_lib_network_Session_ME

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/ISession.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_Session_ME {
	java_lang_Object parent;
	jref F_dos;
	jref F_dis;
	jref F_messageHandler;
	jbool F_isMainSession;
	volatile jref F_sc;
	volatile jbool F_connected;
	volatile jbool F_connecting;
	jref F_sender;
	volatile jref F_initThread;
	volatile jref F_sendThread;
	volatile jref F_collectorThread;
	jint F_sendByteCount;
	jint F_recvByteCount;
	volatile jbool F_getKeyComplete;
	volatile jref F_key;
	jint F_curR;
	jint F_curW;
	volatile jlong F_timeConnected;
	jref F_strRecvByteCount;
	jlong F_timeWaitConnect;
	volatile jlong F_connectStartMs;
	volatile jlong F_lastInboundMs;
	volatile jlong F_lastPingSentMs;
	volatile jref F_myWsBridge;
	jref F_wsRecvBuffer;
	jref F_host;
	jint F_port;
	volatile jint F_connectionGeneration;
	jref F_curRHolder;
} lib_network_Session_ME;

extern Class class_lib_network_Session_ME;

extern jlong SF_lib_network_Session_ME_CONNECT_TIMEOUT_MS;
extern jlong SF_lib_network_Session_ME_PING_INTERVAL_MS;
extern jlong SF_lib_network_Session_ME_IDLE_PROBE_MS;
extern jlong SF_lib_network_Session_ME_HARD_IDLE_TIMEOUT_MS;
extern jint SF_lib_network_Session_ME_MAX_WS_MESSAGES_PER_TICK;
extern jint SF_lib_network_Session_ME_MAX_QUEUE_SIZE;
extern jobject SF_lib_network_Session_ME_instance;
extern jobject SF_lib_network_Session_ME_p;
extern volatile jbool SF_lib_network_Session_ME_isCancel;
extern jint SF_lib_network_Session_ME_count;
extern jobject SF_lib_network_Session_ME_recieveMsg;
extern volatile jlong SF_lib_network_Session_ME_lastPacketTime;
extern volatile jlong SF_lib_network_Session_ME_lastSendPingTime;
extern volatile jlong SF_lib_network_Session_ME_lastPingReceiveTime;
extern volatile jlong SF_lib_network_Session_ME_timeConnectStarted;
extern volatile jint SF_lib_network_Session_ME_currentPing;
extern jobject SF_lib_network_Session_ME_bridgeFactory;
extern jobject SF_lib_network_Session_ME_defaultGatewayUrl;
extern jobject SF_lib_network_Session_ME_GATEWAY_URL;
extern jlong SF_lib_network_Session_ME_stopReadStartTime;

#define VTABLE_lib_network_Session_ME_hashCode_R_int 0
typedef jint (*func_lib_network_Session_ME_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_network_Session_ME_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME_clone_R_java_lang_Object 2
typedef jobject (*func_lib_network_Session_ME_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_network_Session_ME_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_toString_R_java_lang_String 4
typedef jobject (*func_lib_network_Session_ME_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_finalize 5
typedef void (*func_lib_network_Session_ME_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_notify 6
typedef void (*func_lib_network_Session_ME_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_notifyAll 7
typedef void (*func_lib_network_Session_ME_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_wait 8
typedef void (*func_lib_network_Session_ME_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_wait_long 9
typedef void (*func_lib_network_Session_ME_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_network_Session_ME_wait_long_int 10
typedef void (*func_lib_network_Session_ME_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_network_Session_ME_sendMessage_nro_Message 11
typedef void (*func_lib_network_Session_ME_sendMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME_clearSendingMessage 12
typedef void (*func_lib_network_Session_ME_clearSendingMessage)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_isConnected_R_boolean 13
typedef jbool (*func_lib_network_Session_ME_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_setHandler_nro_IMessageHandler 14
typedef void (*func_lib_network_Session_ME_setHandler_nro_IMessageHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME_connect_java_lang_String_int 15
typedef void (*func_lib_network_Session_ME_connect_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_lib_network_Session_ME_processWsBuffer 16
typedef void (*func_lib_network_Session_ME_processWsBuffer)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_processGetKey_nro_Message 17
typedef void (*func_lib_network_Session_ME_processGetKey_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte 18
typedef jobject (*func_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME_doSendMessage_nro_Message 19
typedef void (*func_lib_network_Session_ME_doSendMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME_writeKey_byte_R_byte 20
typedef jbyte (*func_lib_network_Session_ME_writeKey_byte_R_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_lib_network_Session_ME_close 21
typedef void (*func_lib_network_Session_ME_close)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME_cleanNetwork 22
typedef void (*func_lib_network_Session_ME_cleanNetwork)(jcontext ctx, jobject self);

void mark_lib_network_Session_ME(jobject object, jint mark, jint depth);
void clinit_lib_network_Session_ME(jcontext ctx);
void init_lib_network_Session_ME(jcontext ctx, jobject self);
jint SM_lib_network_Session_ME_getPing_R_int(jcontext ctx);
void SM_lib_network_Session_ME_updatePingSample_int(jcontext ctx, jint param0);
void SM_lib_network_Session_ME_setWebSocketBridgeFactory_lib_network_Session_ME$IWebSocketBridgeFactory(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME_setGatewayUrl_java_lang_String(jcontext ctx, jobject param0);
jbool SM_lib_network_Session_ME_shouldUseWebSocketBridge_R_boolean(jcontext ctx);
jobject SM_lib_network_Session_ME_resolveGatewayUrl_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1);
jobject SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(jcontext ctx);
jobject SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(jcontext ctx);
void M_lib_network_Session_ME_clearSendingMessage(jcontext ctx, jobject self);
void SM_lib_network_Session_ME_dispatchToMainThread_java_lang_Runnable(jcontext ctx, jobject param0);
jobject SM_lib_network_Session_ME_createDefaultBridge_R_lib_network_IWebSocketBridge(jcontext ctx);
jbool M_lib_network_Session_ME_isConnected_R_boolean(jcontext ctx, jobject self);
void M_lib_network_Session_ME_setHandler_nro_IMessageHandler(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME_connect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_lib_network_Session_ME_sendMessage_nro_Message(jcontext ctx, jobject self, jobject param0);
void SM_lib_network_Session_ME_onRecieveMsg_nro_Message(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME_dispatchMessageToActiveHandler_nro_Message(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME_notifyAppResumed(jcontext ctx);
void SM_lib_network_Session_ME_maintainSession_lib_network_Session_ME_long(jcontext ctx, jobject param0, jlong param1);
void SM_lib_network_Session_ME_update(jcontext ctx);
void M_lib_network_Session_ME_processWsBuffer(jcontext ctx, jobject self);
void M_lib_network_Session_ME_processGetKey_nro_Message(jcontext ctx, jobject self, jobject param0);
jobject M_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME_doSendMessage_nro_Message(jcontext ctx, jobject self, jobject param0);
jbyte M_lib_network_Session_ME_writeKey_byte_R_byte(jcontext ctx, jobject self, jbyte param0);
void M_lib_network_Session_ME_close(jcontext ctx, jobject self);
void M_lib_network_Session_ME_cleanNetwork(jcontext ctx, jobject self);
jobject SM_lib_network_Session_ME_getMySocket_lib_network_Session_ME_R_lib_mSocket(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME_a_lib_network_Session_ME_lib_mSocket(jcontext ctx, jobject param0, jobject param1);
void SM_lib_network_Session_ME_a_lib_network_Session_ME_java_io_DataOutputStream(jcontext ctx, jobject param0, jobject param1);
jobject SM_lib_network_Session_ME_b_lib_network_Session_ME_R_lib_network_Session_ME$Sender(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME_sendMessage_lib_network_Session_ME_nro_Message(jcontext ctx, jobject param0, jobject param1);
void SM_lib_network_Session_ME_c_lib_network_Session_ME(jcontext ctx, jobject param0);
jbyte SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(jcontext ctx, jobject param0, jbyte param1);
jint SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(jcontext ctx, jobject param0);
jlong SM_lib_network_Session_ME_access$102_lib_network_Session_ME_long_R_long(jcontext ctx, jobject param0, jlong param1);
jlong SM_lib_network_Session_ME_access$202_lib_network_Session_ME_long_R_long(jcontext ctx, jobject param0, jlong param1);
void SM_lib_network_Session_ME_access$300_lib_network_Session_ME_nro_Message(jcontext ctx, jobject param0, jobject param1);
void SM_lib_network_Session_ME_access$400_java_lang_Runnable(jcontext ctx, jobject param0);
jobject SM_lib_network_Session_ME_access$500_lib_network_Session_ME_R_lib_network_ByteStreamBuffer(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME_access$600_lib_network_Session_ME(jcontext ctx, jobject param0);
jint SM_lib_network_Session_ME_access$702_lib_network_Session_ME_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_lib_network_Session_ME_access$802_lib_network_Session_ME_int_R_int(jcontext ctx, jobject param0, jint param1);
jobject SM_lib_network_Session_ME_access$900_lib_network_Session_ME_R_lib_network_Session_ME$Sender(jcontext ctx, jobject param0);
jlong SM_lib_network_Session_ME_access$1002_lib_network_Session_ME_long_R_long(jcontext ctx, jobject param0, jlong param1);

#ifdef __cplusplus
}
#endif

#endif
