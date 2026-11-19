#ifndef HEADER_lib_network_Session_ME2
#define HEADER_lib_network_Session_ME2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/ISession.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_network_Session_ME2 {
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
	volatile jlong F_connectStartMs;
	jref F_strRecvByteCount;
	jlong F_timeWaitConnect;
	volatile jref F_myWsBridge;
	jref F_wsRecvBuffer;
	jref F_host;
	jint F_port;
	volatile jint F_connectionGeneration;
	jref F_curRHolder;
} lib_network_Session_ME2;

extern Class class_lib_network_Session_ME2;

extern jlong SF_lib_network_Session_ME2_CONNECT_TIMEOUT_MS;
extern jint SF_lib_network_Session_ME2_MAX_WS_MESSAGES_PER_TICK;
extern jint SF_lib_network_Session_ME2_MAX_QUEUE_SIZE;
extern jobject SF_lib_network_Session_ME2_instance;
extern volatile jbool SF_lib_network_Session_ME2_isCancel;
extern jobject SF_lib_network_Session_ME2_recieveMsg;

#define VTABLE_lib_network_Session_ME2_hashCode_R_int 0
typedef jint (*func_lib_network_Session_ME2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_network_Session_ME2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2_clone_R_java_lang_Object 2
typedef jobject (*func_lib_network_Session_ME2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_network_Session_ME2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_toString_R_java_lang_String 4
typedef jobject (*func_lib_network_Session_ME2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_finalize 5
typedef void (*func_lib_network_Session_ME2_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_notify 6
typedef void (*func_lib_network_Session_ME2_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_notifyAll 7
typedef void (*func_lib_network_Session_ME2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_wait 8
typedef void (*func_lib_network_Session_ME2_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_wait_long 9
typedef void (*func_lib_network_Session_ME2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_network_Session_ME2_wait_long_int 10
typedef void (*func_lib_network_Session_ME2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_network_Session_ME2_sendMessage_nro_Message 11
typedef void (*func_lib_network_Session_ME2_sendMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2_clearSendingMessage 12
typedef void (*func_lib_network_Session_ME2_clearSendingMessage)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_isConnected_R_boolean 13
typedef jbool (*func_lib_network_Session_ME2_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_setHandler_nro_IMessageHandler 14
typedef void (*func_lib_network_Session_ME2_setHandler_nro_IMessageHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2_connect_java_lang_String_int 15
typedef void (*func_lib_network_Session_ME2_connect_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_lib_network_Session_ME2_processWsBuffer 16
typedef void (*func_lib_network_Session_ME2_processWsBuffer)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_processGetKey_nro_Message 17
typedef void (*func_lib_network_Session_ME2_processGetKey_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte 18
typedef jobject (*func_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2_doSendMessage_nro_Message 19
typedef void (*func_lib_network_Session_ME2_doSendMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_network_Session_ME2_writeKey_byte_R_byte 20
typedef jbyte (*func_lib_network_Session_ME2_writeKey_byte_R_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_lib_network_Session_ME2_close 21
typedef void (*func_lib_network_Session_ME2_close)(jcontext ctx, jobject self);
#define VTABLE_lib_network_Session_ME2_cleanNetwork 22
typedef void (*func_lib_network_Session_ME2_cleanNetwork)(jcontext ctx, jobject self);

void mark_lib_network_Session_ME2(jobject object, jint mark, jint depth);
void clinit_lib_network_Session_ME2(jcontext ctx);
void init_lib_network_Session_ME2(jcontext ctx, jobject self);
jobject SM_lib_network_Session_ME2_gI_R_lib_network_Session_ME2(jcontext ctx);
void M_lib_network_Session_ME2_clearSendingMessage(jcontext ctx, jobject self);
void SM_lib_network_Session_ME2_dispatchToMainThread_java_lang_Runnable(jcontext ctx, jobject param0);
jbool M_lib_network_Session_ME2_isConnected_R_boolean(jcontext ctx, jobject self);
void M_lib_network_Session_ME2_setHandler_nro_IMessageHandler(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME2_connect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_lib_network_Session_ME2_sendMessage_nro_Message(jcontext ctx, jobject self, jobject param0);
void SM_lib_network_Session_ME2_onRecieveMsg_nro_Message(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME2_update(jcontext ctx);
void M_lib_network_Session_ME2_processWsBuffer(jcontext ctx, jobject self);
void M_lib_network_Session_ME2_processGetKey_nro_Message(jcontext ctx, jobject self, jobject param0);
jobject M_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_lib_network_Session_ME2_doSendMessage_nro_Message(jcontext ctx, jobject self, jobject param0);
jbyte M_lib_network_Session_ME2_writeKey_byte_R_byte(jcontext ctx, jobject self, jbyte param0);
void M_lib_network_Session_ME2_close(jcontext ctx, jobject self);
void M_lib_network_Session_ME2_cleanNetwork(jcontext ctx, jobject self);
jobject SM_lib_network_Session_ME2_getSocket_lib_network_Session_ME2_R_lib_mSocket(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME2_setSocket_lib_network_Session_ME2_lib_mSocket(jcontext ctx, jobject param0, jobject param1);
void SM_lib_network_Session_ME2_setDataOutputStream_lib_network_Session_ME2_java_io_DataOutputStream(jcontext ctx, jobject param0, jobject param1);
jobject SM_lib_network_Session_ME2_b_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME2_sendMessage_lib_network_Session_ME2_nro_Message(jcontext ctx, jobject param0, jobject param1);
void SM_lib_network_Session_ME2_c_lib_network_Session_ME2(jcontext ctx, jobject param0);
jbyte SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(jcontext ctx, jobject param0, jbyte param1);
jint SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(jcontext ctx, jobject param0);
jlong SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(jcontext ctx, jobject param0, jlong param1);
void SM_lib_network_Session_ME2_access$200_lib_network_Session_ME2_nro_Message(jcontext ctx, jobject param0, jobject param1);
void SM_lib_network_Session_ME2_access$300_java_lang_Runnable(jcontext ctx, jobject param0);
jobject SM_lib_network_Session_ME2_access$400_lib_network_Session_ME2_R_lib_network_ByteStreamBuffer(jcontext ctx, jobject param0);
void SM_lib_network_Session_ME2_access$500_lib_network_Session_ME2(jcontext ctx, jobject param0);
jint SM_lib_network_Session_ME2_access$602_lib_network_Session_ME2_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_lib_network_Session_ME2_access$702_lib_network_Session_ME2_int_R_int(jcontext ctx, jobject param0, jint param1);
jobject SM_lib_network_Session_ME2_access$800_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
