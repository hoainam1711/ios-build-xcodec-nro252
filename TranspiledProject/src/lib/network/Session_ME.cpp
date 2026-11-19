#include "lib/network/Session_ME.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "lib/network/Session_ME_Sender.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "main/GameCanvas.h"
#include "com/badlogic/gdx/Application.h"
#include "nro/Service.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "lib/network/IWebSocketBridge_IWebSocketListener.h"
#include "lib/network/Session_ME_IWebSocketBridgeFactory.h"
#include "lib/network/Session_ME_NetworkInit.h"
#include "java/lang/String.h"
#include "java/io/FilterInputStream.h"
#include "nro/Controller.h"
#include "java/io/IOException.h"
#include "com/nro/GameMain.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Throwable.h"
#include "lib/network/ByteStreamBuffer.h"
#include "lib/mSystem.h"
#include "java/lang/Thread.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Exception.h"
#include "nro/ISession.h"
#include "nro/Message.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "com/badlogic/gdx/Gdx.h"
#include "lib/network/IWebSocketBridge.h"
#include "lib/mSocket.h"
#include "nro/ClientDiagLogger.h"
#include "java/lang/Object.h"
#include "nro/Res.h"
#include "lib/network/Session_ME_1.h"
#include "java/io/DataOutputStream.h"
#include "main/GameMidlet.h"
#include "lib/network/Session_ME_2.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_lib_network_Session_ME_CONNECT_TIMEOUT_MS;
jlong SF_lib_network_Session_ME_PING_INTERVAL_MS;
jlong SF_lib_network_Session_ME_IDLE_PROBE_MS;
jlong SF_lib_network_Session_ME_HARD_IDLE_TIMEOUT_MS;
jint SF_lib_network_Session_ME_MAX_WS_MESSAGES_PER_TICK;
jint SF_lib_network_Session_ME_MAX_QUEUE_SIZE;
jobject SF_lib_network_Session_ME_instance;
jobject SF_lib_network_Session_ME_p;
volatile jbool SF_lib_network_Session_ME_isCancel;
jint SF_lib_network_Session_ME_count;
jobject SF_lib_network_Session_ME_recieveMsg;
volatile jlong SF_lib_network_Session_ME_lastPacketTime;
volatile jlong SF_lib_network_Session_ME_lastSendPingTime;
volatile jlong SF_lib_network_Session_ME_lastPingReceiveTime;
volatile jlong SF_lib_network_Session_ME_timeConnectStarted;
volatile jint SF_lib_network_Session_ME_currentPing;
jobject SF_lib_network_Session_ME_bridgeFactory;
jobject SF_lib_network_Session_ME_defaultGatewayUrl;
jobject SF_lib_network_Session_ME_GATEWAY_URL;
jlong SF_lib_network_Session_ME_stopReadStartTime;

void mark_lib_network_Session_ME(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_network_Session_ME_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME_instance)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME_instance, mark, depth + 1);
		if (SF_lib_network_Session_ME_p)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME_p)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME_p, mark, depth + 1);
		if (SF_lib_network_Session_ME_recieveMsg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME_recieveMsg)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME_recieveMsg, mark, depth + 1);
		if (SF_lib_network_Session_ME_bridgeFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME_bridgeFactory)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME_bridgeFactory, mark, depth + 1);
		if (SF_lib_network_Session_ME_defaultGatewayUrl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME_defaultGatewayUrl)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME_defaultGatewayUrl, mark, depth + 1);
		if (SF_lib_network_Session_ME_GATEWAY_URL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME_GATEWAY_URL)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME_GATEWAY_URL, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (lib_network_Session_ME *) object;
	if (self->F_dos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dos)->clazz)->markFunction)((jobject) self->F_dos, mark, depth + 1);
	if (self->F_dis)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dis)->clazz)->markFunction)((jobject) self->F_dis, mark, depth + 1);
	if (self->F_messageHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageHandler)->clazz)->markFunction)((jobject) self->F_messageHandler, mark, depth + 1);
	if (self->F_sc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sc)->clazz)->markFunction)((jobject) self->F_sc, mark, depth + 1);
	if (self->F_sender)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sender)->clazz)->markFunction)((jobject) self->F_sender, mark, depth + 1);
	if (self->F_initThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initThread)->clazz)->markFunction)((jobject) self->F_initThread, mark, depth + 1);
	if (self->F_sendThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sendThread)->clazz)->markFunction)((jobject) self->F_sendThread, mark, depth + 1);
	if (self->F_collectorThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collectorThread)->clazz)->markFunction)((jobject) self->F_collectorThread, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_strRecvByteCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strRecvByteCount)->clazz)->markFunction)((jobject) self->F_strRecvByteCount, mark, depth + 1);
	if (self->F_myWsBridge)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_myWsBridge)->clazz)->markFunction)((jobject) self->F_myWsBridge, mark, depth + 1);
	if (self->F_wsRecvBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wsRecvBuffer)->clazz)->markFunction)((jobject) self->F_wsRecvBuffer, mark, depth + 1);
	if (self->F_host)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_host)->clazz)->markFunction)((jobject) self->F_host, mark, depth + 1);
	if (self->F_curRHolder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_curRHolder)->clazz)->markFunction)((jobject) self->F_curRHolder, mark, depth + 1);
}

void init_lib_network_Session_ME(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession = (jint(1));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_lib_network_Session_ME$Sender(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_network_Session_ME$Sender);
	init_lib_network_Session_ME$Sender_lib_network_Session_ME(ctx, sp[1].o, (frame[0].o));
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sender = (jref) sp[1].o;
	LINE_NUMBER(45);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(49);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_strRecvByteCount = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(50);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = (jlong(0));
	LINE_NUMBER(54);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs = (jlong(0));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_lastInboundMs = temp0;
	LINE_NUMBER(56);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastPingSentMs = (jlong(0));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_lib_network_ByteStreamBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_network_ByteStreamBuffer);
	init_lib_network_ByteStreamBuffer(ctx, sp[1].o);
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_wsRecvBuffer = (jref) sp[1].o;
	LINE_NUMBER(103);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectionGeneration = (jint(0));
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_curRHolder = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME_getPing_R_int(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:getPing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(66);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	clinit_lib_network_Session_ME(ctx);
	(sp++)->o = SF_lib_network_Session_ME_p;
	if ((--sp)->o == nullptr) goto label_3;
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(69);
	if ((clinit_lib_network_Session_ME(ctx), (jint)SF_lib_network_Session_ME_currentPing) < 0) goto label_4;
	}
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (clinit_lib_network_Session_ME(ctx), (jint)SF_lib_network_Session_ME_currentPing);
	}
label_4:;
	{
	LINE_NUMBER(72);
	if ((longCompare((clinit_nro_Service(ctx), (jlong)SF_nro_Service_logController), (jlong(0)))) <= 0) goto label_6;
	}
	{
	if ((longCompare((clinit_nro_Service(ctx), (jlong)SF_nro_Service_logController), (jlong(9999ll)))) > 0) goto label_6;
	}
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint((clinit_nro_Service(ctx), (jlong)SF_nro_Service_logController)));
	}
label_6:;
	{
	LINE_NUMBER(75);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_IS_LOCAL) == 0) goto label_8;
	}
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_updatePingSample_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:updatePingSample", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(82);
	if ((frame[0].i) >= 0) goto label_1;
	}
	INST_ICONST(0);
	INST_ISTORE(0);
label_1:;
	{
	LINE_NUMBER(83);
	if ((frame[0].i) <= (999)) goto label_2;
	}
	INST_SIPUSH(999);
	INST_ISTORE(0);
label_2:;
	{
	LINE_NUMBER(84);
	if ((clinit_lib_network_Session_ME(ctx), (jint)SF_lib_network_Session_ME_currentPing) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(85);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (frame[0].i);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(87);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (jint((((jfloat((clinit_lib_network_Session_ME(ctx), (jint)SF_lib_network_Session_ME_currentPing))) * (jfloat(0.3f))) + ((jfloat((frame[0].i))) * (jfloat(0.7f))))));
	}
label_5:;
	{
	LINE_NUMBER(89);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPingReceiveTime = temp0;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_setWebSocketBridgeFactory_lib_network_Session_ME$IWebSocketBridgeFactory(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:setWebSocketBridgeFactory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(106);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_bridgeFactory = (frame[0].o);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_setGatewayUrl_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:setGatewayUrl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_defaultGatewayUrl = sp[0].o;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_lib_network_Session_ME_shouldUseWebSocketBridge_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:shouldUseWebSocketBridge", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(114);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_bridgeFactory;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isWeb;
	if ((--sp)->i != 0) goto label_2;
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_IS_LOCAL;
	if ((--sp)->i != 0) goto label_1;
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_resolveGatewayUrl_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:resolveGatewayUrl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(118);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_defaultGatewayUrl;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_defaultGatewayUrl;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(119);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_defaultGatewayUrl;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(121);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_GATEWAY_HOST;
	frame[2].o = sp[0].o;
	LINE_NUMBER(122);
	clinit_nro_ServerListScreen(ctx);
	sp[0].o = (jobject)SF_nro_ServerListScreen_GATEWAY_HTTP_PATH;
	frame[3].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(124);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"/"_j)));
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(126);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(128);
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_GATEWAY_SSL) == 0) goto label_9;
	}
	{
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_GATEWAY_PORT) == (443)) goto label_10;
	}
label_9:;
	clinit_nro_ServerListScreen(ctx);
	(sp++)->i = SF_nro_ServerListScreen_GATEWAY_SSL;
	if ((--sp)->i != 0) goto label_11;
	{
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_GATEWAY_PORT) != (80)) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(130);
	if ((frame[4].i) == 0) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_15;
label_14:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_GATEWAY_PORT));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(131);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp += 1;
	if ((clinit_nro_ServerListScreen(ctx), (jint)SF_nro_ServerListScreen_GATEWAY_SSL) == 0) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"wss://"_j));
	goto label_18;
label_17:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"ws://"_j));
label_18:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:GI2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(136);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:gI", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(140);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_clearSendingMessage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:clearSendingMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	sp[0].o = (jobject)SM_lib_network_Session_ME$Sender_a_lib_network_Session_ME$Sender_R_java_util_Vector(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(146);
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, (frame[1].o));
	LINE_NUMBER(147);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_9:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_dispatchToMainThread_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:dispatchToMainThread", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(151);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(152);
	SM_com_nro_GameMain_postRunnable_java_lang_Runnable(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(154);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_createDefaultBridge_R_lib_network_IWebSocketBridge(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:createDefaultBridge", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"lib.network.StandardWebSocketBridge"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_lib_network_IWebSocketBridge, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(162);
	frame[0].o = sp[0].o;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_lib_network_Session_ME_isConnected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:isConnected", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[1].o = sp[0].o;
	LINE_NUMBER(169);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(170);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_lib_network_IWebSocketBridge_isConnected_R_boolean) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connected);
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_setHandler_nro_IMessageHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:setHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_messageHandler = (jref) (frame[1].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_connect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:connect", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(180);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_host = (jref) (frame[1].o);
	LINE_NUMBER(181);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_port = (frame[2].i);
	LINE_NUMBER(183);
	jint temp0 = (jint)SM_lib_network_Session_ME_shouldUseWebSocketBridge_R_boolean(ctx);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(184);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connected) != 0) goto label_5;
	}
	{
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_5;
	}
	{
	LINE_NUMBER(185);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(186);
	if ((longCompare((frame[3].l), ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect))) < 0) goto label_5;
	}
	{
	LINE_NUMBER(187);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = ((frame[3].l) + (jlong(50ll)));
	LINE_NUMBER(188);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_10;
	}
	{
	LINE_NUMBER(189);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(-1));
	}
label_10:;
	{
	LINE_NUMBER(192);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(193);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(194);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(1));
	LINE_NUMBER(195);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_isCancel = (jint(0));
	LINE_NUMBER(196);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(197);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs = (frame[5].l);
	LINE_NUMBER(198);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs = (frame[5].l);
	LINE_NUMBER(199);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_19;
	}
	{
	LINE_NUMBER(200);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_timeConnectStarted = (frame[5].l);
	LINE_NUMBER(201);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(-1));
	}
label_19:;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectionGeneration) + (jint(1));
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectionGeneration = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(205);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_bridgeFactory;
	sp[0].o = (jobject)((func_lib_network_Session_ME$IWebSocketBridgeFactory_createBridge_R_lib_network_IWebSocketBridge) resolveInterfaceMethod(ctx, &class_lib_network_Session_ME$IWebSocketBridgeFactory, INDEX_lib_network_Session_ME$IWebSocketBridgeFactory_createBridge_R_lib_network_IWebSocketBridge, sp[0].o))(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(206);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge = (jref) (frame[8].o);
	LINE_NUMBER(207);
	frame[9].o = (frame[0].o);
	LINE_NUMBER(208);
	sp[0].o = frame[8].o;
	clinit_lib_network_Session_ME$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_network_Session_ME$1);
	init_lib_network_Session_ME$1_lib_network_Session_ME_int_lib_network_Session_ME_lib_network_IWebSocketBridge(ctx, sp[1].o, (frame[0].o), (frame[7].i), (frame[9].o), (frame[8].o));
	((func_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(283);
	sp[0].o = (jobject)SM_lib_network_Session_ME_resolveGatewayUrl_java_lang_String_int_R_java_lang_String(ctx, (frame[1].o), (frame[2].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(284);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Session_ME] Connecting via WebSocket bridge: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(285);
	((func_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int, (frame[8].o)))(ctx, (frame[8].o), (frame[10].o), (frame[1].o), (frame[2].i));
	}
label_5:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(291);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connected) != 0) goto label_29;
	}
	{
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_29;
	}
	{
	LINE_NUMBER(292);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(293);
	if ((longCompare((frame[3].l), ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect))) < 0) goto label_29;
	}
	{
	LINE_NUMBER(294);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = ((frame[3].l) + (jlong(50ll)));
	LINE_NUMBER(295);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_34;
	}
	{
	LINE_NUMBER(296);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(-1));
	}
label_34:;
	{
	LINE_NUMBER(299);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(300);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(301);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(1));
	LINE_NUMBER(302);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_isCancel = (jint(0));
	LINE_NUMBER(303);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[5].l = temp0;
	LINE_NUMBER(304);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs = (frame[5].l);
	LINE_NUMBER(305);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs = (frame[5].l);
	LINE_NUMBER(306);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_43;
	}
	{
	LINE_NUMBER(307);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_timeConnectStarted = (frame[5].l);
	}
label_43:;
	{
	LINE_NUMBER(309);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Session_ME] Connecting directly via TCP: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	clinit_lib_network_Session_ME$NetworkInit(ctx);
	sp[2].o = gcAlloc(ctx, &class_lib_network_Session_ME$NetworkInit);
	init_lib_network_Session_ME$NetworkInit_lib_network_Session_ME_lib_network_Session_ME_java_lang_String_int(ctx, sp[2].o, (frame[0].o), (frame[0].o), (frame[1].o), (frame[2].i));
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"NRO-TCP-Init"_j))));
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_initThread = (jref) sp[1].o;
	LINE_NUMBER(311);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_initThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	}
label_29:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_sendMessage_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:sendMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(318);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_count = ((clinit_lib_network_Session_ME(ctx), (jint)SF_lib_network_Session_ME_count) + (jint(1)));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[2].o = sp[0].o;
	LINE_NUMBER(320);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_lib_network_IWebSocketBridge_isConnected_R_boolean) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(321);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) == 0) goto label_6;
	}
	{
	LINE_NUMBER(322);
	M_lib_network_Session_ME_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[1].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME$Sender_AddMessage_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME$Sender_AddMessage_nro_Message])(ctx, sp[0].o, (frame[1].o));
	}
label_8:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME$Sender_AddMessage_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME$Sender_AddMessage_nro_Message])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_onRecieveMsg_nro_Message(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:onRecieveMsg", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(333);
	if ((frame[0].o) != nullptr) goto label_17;
	}
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(336);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(337);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[1].l);
	LINE_NUMBER(338);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(339);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_lastInboundMs = (frame[1].l);
	}
label_21:;
	{
	LINE_NUMBER(341);
	if (((jint)((nro_Message *) NULL_CHECK((frame[0].o)))->F_command) != (109)) goto label_23;
	}
	{
	LINE_NUMBER(342);
	frame[3].l = (jlong(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 < (8)) goto label_25;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, sp[0].o);
	frame[3].l = temp0;
	goto label_1;
	}
label_25:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 < (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	frame[3].l = (jlong(temp0));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(350);
	goto label_28;
label_2:;
	LINE_NUMBER(349);
	INST_ASTORE(5);
label_28:;
	{
	LINE_NUMBER(351);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_29;
	}
	{
	jint temp0 = jint(((frame[1].l) - (frame[3].l)));
	sp[0].i = temp0;
	sp += 1;
	goto label_30;
	}
label_29:;
	{
	jint temp0 = jint(((frame[1].l) - (clinit_lib_network_Session_ME(ctx), (jlong)SF_lib_network_Session_ME_lastSendPingTime)));
	sp[0].i = temp0;
	sp += 1;
	}
label_30:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(352);
	SM_lib_network_Session_ME_updatePingSample_int(ctx, (frame[5].i));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(355);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_33;
	}
	{
	LINE_NUMBER(356);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(357);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (1000)) goto label_35;
	}
	{
	LINE_NUMBER(358);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	}
label_35:;
	{
	LINE_NUMBER(360);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_37;
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_37:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();
label_33:;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getName_R_java_lang_String])(ctx, sp[0].o);
	clinit_com_nro_GameMain(ctx);
	sp[1].o = (jobject)SF_com_nro_GameMain_mainThreadName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(365);
	SM_lib_network_Session_ME_dispatchMessageToActiveHandler_nro_Message(ctx, (frame[0].o));
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(367);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_10:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(368);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 < (1000)) goto label_41;
	}
	{
	LINE_NUMBER(369);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	{ popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_41:;
	{
	LINE_NUMBER(371);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(372);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_40;
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_40:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_dispatchMessageToActiveHandler_nro_Message(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:dispatchMessageToActiveHandler", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(377);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(378);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	((func_nro_IMessageHandler_onMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(379);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(380);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	((func_nro_IMessageHandler_onMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(381);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(382);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_messageHandler;
	((func_nro_IMessageHandler_onMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	((func_nro_Controller_onMessage_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Controller_onMessage_nro_Message])(ctx, sp[0].o, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(386);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_notifyAppResumed(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:notifyAppResumed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(391);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(392);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[0].l);
	LINE_NUMBER(393);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPingReceiveTime = (frame[0].l);
	LINE_NUMBER(394);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(395);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_lastInboundMs = (frame[0].l);
	LINE_NUMBER(396);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) == 0) goto label_4;
	}
	{
	LINE_NUMBER(397);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectStartMs = (frame[0].l);
	}
label_4:;
	{
	LINE_NUMBER(400);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(401);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_lastInboundMs = (frame[0].l);
	LINE_NUMBER(402);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	if (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connecting) == 0) goto label_8;
	}
	{
	LINE_NUMBER(403);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectStartMs = (frame[0].l);
	}
label_8:;
	LINE_NUMBER(406);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_maintainSession_lib_network_Session_ME_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[16];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:maintainSession", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(409);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	LINE_NUMBER(410);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(412);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting) == 0) goto label_3;
	}
	{
	if ((longCompare(((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs), (jlong(0)))) <= 0) goto label_3;
	}
	{
	if ((longCompare(((frame[1].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs)), (jlong(12000ll)))) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_messageHandler;
	frame[3].o = sp[0].o;
	LINE_NUMBER(414);
	frame[4].i = ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession);
	LINE_NUMBER(415);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_CONNECT_TIMEOUT"_j));
	LINE_NUMBER(417);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"SESSION_ME_TIMEOUT"_j));
	jint temp0 = 408;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ERR_CONNECT_TIMEOUT"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"CONNECT_TIMEOUT"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"isMain="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[4].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",host="_j))));
	sp[6].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_host;
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_port));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	LINE_NUMBER(415);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(423);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(424);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(425);
	((func_nro_IMessageHandler_onConnectionFail_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onConnectionFail_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i));
	}
label_11:;
	LINE_NUMBER(427);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(430);
	jint temp0 = (jint)((func_lib_network_Session_ME_isConnected_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_network_Session_ME_isConnected_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
	{
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) != 0) goto label_14;
	}
label_13:;
	LINE_NUMBER(431);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(434);
	if ((longCompare(((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs), (jlong(0)))) <= 0) goto label_15;
	}
	{
	if ((longCompare(((frame[1].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs)), (jlong(32000ll)))) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_messageHandler;
	frame[3].o = sp[0].o;
	LINE_NUMBER(436);
	frame[4].i = ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession);
	LINE_NUMBER(437);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_DEAD_PEER_TIMEOUT"_j));
	LINE_NUMBER(439);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"SESSION_ME_WATCHDOG"_j));
	jint temp0 = 504;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ERR_DEAD_PEER_32S"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"DEAD_PEER_DISCONNECT"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"isMain="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[4].i));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",idleMs="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[5].o, ((frame[1].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs)));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	LINE_NUMBER(437);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(445);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(446);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(447);
	((func_nro_IMessageHandler_onDisconnected_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onDisconnected_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i));
	}
label_23:;
	LINE_NUMBER(449);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(452);
	if ((longCompare(((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs), (jlong(0)))) <= 0) goto label_25;
	}
	{
	if ((longCompare(((frame[1].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs)), (jlong(12000ll)))) <= 0) goto label_25;
	}
	{
	if ((longCompare(((frame[1].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastPingSentMs)), (jlong(3000ll)))) < 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(454);
	if ((longCompare(((frame[1].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastPingSentMs)), (jlong(5000ll)))) < 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(455);
	if ((frame[3].i) != 0) goto label_31;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_32;
label_31:;
	{
	LINE_NUMBER(456);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastPingSentMs = (frame[1].l);
	LINE_NUMBER(457);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_34;
	}
	{
	LINE_NUMBER(458);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastSendPingTime = (frame[1].l);
	LINE_NUMBER(459);
	clinit_nro_Service(ctx);
	SF_nro_Service_curCheckController = (frame[1].l);
	}
label_34:;
	{
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	clinit_nro_Message(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Message);
	init_nro_Message_byte(ctx, sp[1].o, (-120));
	((func_lib_network_Session_ME_sendMessage_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_sendMessage_nro_Message])(ctx, sp[0].o, sp[1].o);
	}
label_32:;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_update(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(466);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(467);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	M_lib_network_Session_ME_processWsBuffer(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(469);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(470);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	M_lib_network_Session_ME_processWsBuffer(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(473);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(474);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_instance;
	SM_lib_network_Session_ME_maintainSession_lib_network_Session_ME_long(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(475);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_p;
	SM_lib_network_Session_ME_maintainSession_lib_network_Session_ME_long(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(477);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_21;
	}
	{
	LINE_NUMBER(478);
	if ((longCompare((clinit_lib_network_Session_ME(ctx), (jlong)SF_lib_network_Session_ME_stopReadStartTime), (jlong(0)))) != 0) goto label_23;
	}
	{
	LINE_NUMBER(479);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_stopReadStartTime = (frame[0].l);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(480);
	if ((longCompare(((frame[0].l) - (clinit_lib_network_Session_ME(ctx), (jlong)SF_lib_network_Session_ME_stopReadStartTime)), (jlong(8000ll)))) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(481);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isStopReadMessage = (jint(0));
	LINE_NUMBER(482);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_stopReadStartTime = (jlong(0));
	}
label_25:;
	{
	LINE_NUMBER(484);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_28;
	}
	LINE_NUMBER(485);
	popStackFrame(ctx);
	INST_RETURN();
label_21:;
	{
	LINE_NUMBER(488);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_stopReadStartTime = (jlong(0));
	}
label_28:;
	{
	LINE_NUMBER(491);
	frame[2].i = (jint(0));
	}
label_30:;
	{
	LINE_NUMBER(492);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_31;
	}
	{
	if ((frame[2].i) >= (64)) goto label_31;
	}
	{
	LINE_NUMBER(493);
	INST_IINC(2, 1);
	LINE_NUMBER(494);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(495);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(496);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(497);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_31;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(499);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[3].o = (checkCast(ctx, &class_nro_Message, sp[0].o));
	LINE_NUMBER(500);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_recieveMsg;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(501);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_38;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_38:;
	{
	LINE_NUMBER(503);
	if ((frame[3].o) != nullptr) goto label_9;
	}
	LINE_NUMBER(504);
	goto label_30;
label_9:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	{
	LINE_NUMBER(508);
	SM_lib_network_Session_ME_dispatchMessageToActiveHandler_nro_Message(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(511);
	goto label_40;
label_11:;
	{
	sp -= 1;
	LINE_NUMBER(509);
	frame[4].o = sp[0].o;
	LINE_NUMBER(510);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[4].o));
	}
label_40:;
	{
	LINE_NUMBER(513);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_42;
	}
	LINE_NUMBER(514);
	goto label_31;
label_42:;
	LINE_NUMBER(516);
	goto label_30;
label_31:;
	LINE_NUMBER(517);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_processWsBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:processWsBuffer", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(522);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	sp[0].o = (jobject)SM_lib_network_Session_ME$Sender_a_lib_network_Session_ME$Sender_R_java_util_Vector(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(525);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(526);
	sp[0].o = frame[1].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(0)));
	frame[2].o = (checkCast(ctx, &class_nro_Message, sp[0].o));
	LINE_NUMBER(529);
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, (frame[1].o), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(531);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(532);
	if ((frame[2].o) != nullptr) goto label_15;
	}
	LINE_NUMBER(533);
	goto label_7;
label_15:;
	{
	LINE_NUMBER(535);
	M_lib_network_Session_ME_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(536);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR);
	LINE_NUMBER(541);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(542);
	if ((frame[2].i) >= (96)) goto label_20;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_wsRecvBuffer;
	jint temp0 = (jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete;
	sp[1].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key;
	sp[2].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)));
	sp[2].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	LINE_NUMBER(543);
	sp[0].o = (jobject)((func_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message])(ctx, sp[0].o, temp0, sp[1].o, temp1, sp[2].o);
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(544);
	INST_IINC(2, 1);
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_curR = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(546);
	sp[0].o = (jobject)((func_nro_Message_getData_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_getData_R_Array1_byte])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_nro_Message_getData_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_getData_R_Array1_byte])(ctx, (frame[1].o));
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_recvByteCount = (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_recvByteCount) + ((jint(5)) + (frame[3].i)));
	LINE_NUMBER(548);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(549);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs = (frame[4].l);
	LINE_NUMBER(550);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[4].l);
	LINE_NUMBER(552);
	if (((jint)((nro_Message *) NULL_CHECK((frame[1].o)))->F_command) != (-27)) goto label_33;
	}
	{
	LINE_NUMBER(553);
	M_lib_network_Session_ME_processGetKey_nro_Message(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR);
	goto label_36;
	}
label_33:;
	{
	LINE_NUMBER(556);
	SM_lib_network_Session_ME_onRecieveMsg_nro_Message(ctx, (frame[1].o));
	}
label_36:;
	{
	LINE_NUMBER(558);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_37;
	}
	LINE_NUMBER(559);
	goto label_20;
label_37:;
	LINE_NUMBER(561);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(562);
	if ((frame[2].i) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(563);
	frame[3].i = (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_recvByteCount) + ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sendByteCount));
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[3].i) / (1024)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((frame[3].i) % (1024)) / (102)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kb"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_strRecvByteCount = (jref) sp[1].o;
	}
label_39:;
	LINE_NUMBER(566);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_processGetKey_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:processGetKey", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(571);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(572);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(573);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(572);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(575);
	frame[4].i = (jint(0));
	}
label_14:;
	{
	if ((frame[4].i) >= ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)))) goto label_15;
	}
	{
	LINE_NUMBER(576);
	sp[0].o = frame[3].o;
	jint temp0 = (frame[4].i) + (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) ^ ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[4].i))))));
	LINE_NUMBER(575);
	INST_IINC(4, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(578);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR = (jint(0));
	LINE_NUMBER(579);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curW = (jint(0));
	LINE_NUMBER(580);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[3].o);
	LINE_NUMBER(581);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(1));
	LINE_NUMBER(582);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME$Sender_wakeUp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME$Sender_wakeUp])(ctx, sp[0].o);
	LINE_NUMBER(583);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(584);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_24;
	}
	{
	if ((longCompare(((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs), (jlong(0)))) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(585);
	frame[6].i = (jint(((frame[4].l) - ((jlong)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs))));
	LINE_NUMBER(586);
	if ((frame[6].i) < 0) goto label_24;
	}
	{
	if ((frame[6].i) > (999)) goto label_24;
	}
	{
	LINE_NUMBER(587);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (frame[6].i);
	}
label_24:;
	{
	LINE_NUMBER(590);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs = (frame[4].l);
	LINE_NUMBER(591);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastPingSentMs = (frame[4].l);
	LINE_NUMBER(592);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPingReceiveTime = (frame[4].l);
	LINE_NUMBER(593);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[4].l);
	LINE_NUMBER(594);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_KEY_REFRESH"_j));
	LINE_NUMBER(596);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"CMD_-27_GET_SESSION_ID"_j));
	jint temp0 = 200;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"transport=WebSocket,isMain="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[5].o, ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	LINE_NUMBER(594);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP2 = sp[0].o;
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT2 = temp0;
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	if (temp1 == 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_isBackWindowsPhone = sp[0].i;
	LINE_NUMBER(607);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_1;
	}
	clinit_main_GameMidlet(ctx);
	(sp++)->i = SF_main_GameMidlet_isBackWindowsPhone;
	if ((--sp)->i == 0) goto label_1;
	LINE_NUMBER(608);
	SM_main_GameCanvas_connect2(ctx);
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(612);
	goto label_5;
label_2:;
	LINE_NUMBER(611);
	INST_ASTORE(6);
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(615);
	goto label_41;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(613);
	frame[2].o = sp[0].o;
	LINE_NUMBER(614);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_41:;
	LINE_NUMBER(616);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:encodePacket", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_nro_Message_getData_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_getData_R_Array1_byte])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(620);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(621);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint(3)) + (frame[3].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(622);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key;
	frame[5].o = sp[0].o;
	LINE_NUMBER(623);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) == 0) goto label_7;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_7;
	{
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)M_lib_network_Session_ME_writeKey_byte_R_byte(ctx, (frame[0].o), ((jint)((nro_Message *) NULL_CHECK((frame[1].o)))->F_command));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(625);
	sp[0].o = frame[4].o;
	jint temp2 = jint(1);
	jint temp3 = (jint)M_lib_network_Session_ME_writeKey_byte_R_byte(ctx, (frame[0].o), (jbyte((((frame[3].i) >> (8)) & (255)))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = temp3;
	LINE_NUMBER(626);
	sp[0].o = frame[4].o;
	jint temp4 = jint(2);
	jint temp5 = (jint)M_lib_network_Session_ME_writeKey_byte_R_byte(ctx, (frame[0].o), (jbyte(((frame[3].i) & (255)))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = temp5;
	LINE_NUMBER(627);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = frame[4].o;
	jint temp0 = (jint(3)) + (frame[6].i);
	jint temp1 = (jint)M_lib_network_Session_ME_writeKey_byte_R_byte(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[6].i))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(627);
	INST_IINC(6, 1);
	goto label_12;
	}
label_13:;
	goto label_16;
label_7:;
	{
	LINE_NUMBER(631);
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(0))) = ((jint)((nro_Message *) NULL_CHECK((frame[1].o)))->F_command);
	LINE_NUMBER(632);
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(1))) = (jbyte((((frame[3].i) >> (8)) & (255))));
	LINE_NUMBER(633);
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(2))) = (jbyte(((frame[3].i) & (255))));
	LINE_NUMBER(634);
	if ((frame[3].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(635);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[4].o), (jint(3)), (frame[3].i));
	}
label_16:;
	{
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_doSendMessage_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:doSendMessage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(642);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[2].o = sp[0].o;
	LINE_NUMBER(644);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_lib_network_IWebSocketBridge_isConnected_R_boolean) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)M_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendByteCount = (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendByteCount) + ((jint(2)) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	LINE_NUMBER(647);
	((func_lib_network_IWebSocketBridge_send_Array1_byte) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_send_Array1_byte, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(648);
	popStackFrame(ctx, self);
	return;
	}
label_7:;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dos;
	frame[3].o = sp[0].o;
	LINE_NUMBER(652);
	if ((frame[3].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)M_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(656);
	((func_java_io_DataOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int])(ctx, (frame[3].o), (frame[4].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(657);
	((func_java_io_DataOutputStream_flush) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_flush])(ctx, (frame[3].o));
	LINE_NUMBER(658);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendByteCount = (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_sendByteCount) + ((jint(2)) + (((jarray) nullCheck(ctx, (frame[4].o)))->length)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(672);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(659);
	frame[4].o = sp[0].o;
	LINE_NUMBER(660);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(661);
	frame[6].i = ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectionGeneration);
	LINE_NUMBER(662);
	clinit_lib_network_Session_ME$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME$2);
	init_lib_network_Session_ME$2_lib_network_Session_ME_int_lib_network_Session_ME(ctx, sp[0].o, (frame[0].o), (frame[6].i), (frame[5].o));
	SM_lib_network_Session_ME_dispatchToMainThread_java_lang_Runnable(ctx, sp[0].o);
	}
label_16:;
	LINE_NUMBER(673);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_lib_network_Session_ME_writeKey_byte_R_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:writeKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key;
	frame[2].o = sp[0].o;
	LINE_NUMBER(677);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_3;
	}
label_2:;
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(678);
	frame[3].i = (jbyte(((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curW))) & (255)) ^ ((frame[1].i) & (255)))));
	LINE_NUMBER(679);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curW = ((((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curW) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:close", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connected) != 0) goto label_1;
	}
	{
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(685);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"SESSION_CLOSE"_j));
	LINE_NUMBER(687);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(ctx);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"SESSION_ME_CLOSE"_j));
	jint temp0 = 200;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"SESSION_CLOSED_BY_CALLER"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"isMain="_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[5].o, ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8",host="_j))));
	sp[6].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_host;
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[5].o, ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_port));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	LINE_NUMBER(685);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o, sp[5].o);
	}
label_2:;
	{
	LINE_NUMBER(694);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME_cleanNetwork(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:cleanNetwork", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(698);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(699);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR = (jint(0));
	LINE_NUMBER(700);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curW = (jint(0));
	LINE_NUMBER(701);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectionGeneration = (((jint)((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectionGeneration) + (jint(1)));
	LINE_NUMBER(703);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(704);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectStartMs = (jlong(0));
	LINE_NUMBER(705);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastInboundMs = (frame[1].l);
	LINE_NUMBER(706);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_lastPingSentMs = (jlong(0));
	LINE_NUMBER(707);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = (jlong(0));
	LINE_NUMBER(709);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_12;
	}
	{
	LINE_NUMBER(710);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = (frame[1].l);
	LINE_NUMBER(711);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastSendPingTime = (jlong(0));
	LINE_NUMBER(712);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPingReceiveTime = (jlong(0));
	LINE_NUMBER(713);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (jint(-1));
	LINE_NUMBER(714);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_timeConnectStarted = (jlong(0));
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(718);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connected = (jint(0));
	LINE_NUMBER(719);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(0));
	LINE_NUMBER(720);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME$Sender_wakeUp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME$Sender_wakeUp])(ctx, sp[0].o);
	LINE_NUMBER(721);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[3].o = sp[0].o;
	LINE_NUMBER(723);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_myWsBridge = (jref) (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(725);
	((func_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, (frame[3].o)))(ctx, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(726);
	((func_lib_network_IWebSocketBridge_close) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_close, (frame[3].o)))(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(728);
	goto label_35;
label_2:;
	LINE_NUMBER(727);
	INST_ASTORE(4);
label_35:;
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_wsRecvBuffer;
	((func_lib_network_ByteStreamBuffer_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_ByteStreamBuffer_clear])(ctx, sp[0].o);
	LINE_NUMBER(731);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sc;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sc;
	((func_lib_mSocket_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mSocket_close])(ctx, sp[0].o);
	LINE_NUMBER(733);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sc = (jref) (jobject(nullptr));
	}
label_40:;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dos;
	if (sp[0].o == nullptr) goto label_43;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dos;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(739);
	goto label_44;
label_6:;
	LINE_NUMBER(738);
	INST_ASTORE(3);
label_44:;
	{
	LINE_NUMBER(740);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (jobject(nullptr));
	}
label_43:;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dis;
	if (sp[0].o == nullptr) goto label_45;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dis;
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(746);
	goto label_46;
label_10:;
	LINE_NUMBER(745);
	INST_ASTORE(3);
label_46:;
	{
	LINE_NUMBER(747);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dis = (jref) (jobject(nullptr));
	}
label_45:;
	{
	LINE_NUMBER(749);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_collectorThread;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_collectorThread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(751);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_collectorThread = (jref) (jobject(nullptr));
	}
label_47:;
	{
	LINE_NUMBER(753);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sendThread;
	if (sp[0].o == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sendThread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(755);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sendThread = (jref) (jobject(nullptr));
	}
label_50:;
	{
	LINE_NUMBER(757);
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_isMainSession) == 0) goto label_53;
	}
	{
	if (((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_53;
	}
	{
	LINE_NUMBER(758);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_testConnect = (jint(0));
	}
label_53:;
	{
	LINE_NUMBER(760);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isDisconnected = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(763);
	goto label_55;
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(761);
	frame[3].o = sp[0].o;
	LINE_NUMBER(762);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
label_55:;
	LINE_NUMBER(764);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_getMySocket_lib_network_Session_ME_R_lib_mSocket(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:getMySocket", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sc;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_a_lib_network_Session_ME_lib_mSocket(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:a", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(771);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sc = (jref) (frame[1].o);
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_a_lib_network_Session_ME_java_io_DataOutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:a", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(775);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (frame[1].o);
	LINE_NUMBER(776);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_b_lib_network_Session_ME_R_lib_network_Session_ME$Sender(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:b", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_sendMessage_lib_network_Session_ME_nro_Message(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:sendMessage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(783);
	M_lib_network_Session_ME_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(784);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_c_lib_network_Session_ME(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:c", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(787);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte(jcontext ctx, jobject param0, jbyte param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:readKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_key;
	frame[2].o = sp[0].o;
	LINE_NUMBER(792);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_3;
	}
label_2:;
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(793);
	frame[3].i = (jbyte(((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR))) & (255)) ^ ((frame[1].i) & (255)))));
	LINE_NUMBER(794);
	((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR = ((((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_curR) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(795);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return ((jint)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_connectionGeneration);
	}

	popStackFrame(ctx);
}

jlong SM_lib_network_Session_ME_access$102_lib_network_Session_ME_long_R_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$102", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_connectStartMs = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_lib_network_Session_ME_access$202_lib_network_Session_ME_long_R_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$202", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_lastInboundMs = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_access$300_lib_network_Session_ME_nro_Message(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$300", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(20);
	M_lib_network_Session_ME_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_access$400_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	SM_lib_network_Session_ME_dispatchToMainThread_java_lang_Runnable(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_access$500_lib_network_Session_ME_R_lib_network_ByteStreamBuffer(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_wsRecvBuffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME_access$600_lib_network_Session_ME(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	M_lib_network_Session_ME_cleanNetwork(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME_access$702_lib_network_Session_ME_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$702", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_curR = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME_access$802_lib_network_Session_ME_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$802", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_curW = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME_access$900_lib_network_Session_ME_R_lib_network_Session_ME$Sender(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$900", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((lib_network_Session_ME *) NULL_CHECK((frame[0].o)))->F_sender;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong SM_lib_network_Session_ME_access$1002_lib_network_Session_ME_long_R_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:access$1002", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_lastPingSentMs = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_lib_network_Session_ME(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_lib_network_Session_ME_CONNECT_TIMEOUT_MS = jlong(12000ll);
	SF_lib_network_Session_ME_PING_INTERVAL_MS = jlong(5000ll);
	SF_lib_network_Session_ME_IDLE_PROBE_MS = jlong(12000ll);
	SF_lib_network_Session_ME_HARD_IDLE_TIMEOUT_MS = jlong(32000ll);
	SF_lib_network_Session_ME_MAX_WS_MESSAGES_PER_TICK = jint(96);
	SF_lib_network_Session_ME_MAX_QUEUE_SIZE = jint(1000);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME(ctx);
	{
	LINE_NUMBER(28);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME);
	init_lib_network_Session_ME(ctx, sp[0].o);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_instance = sp[0].o;
	LINE_NUMBER(29);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME);
	init_lib_network_Session_ME(ctx, sp[0].o);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_p = sp[0].o;
	LINE_NUMBER(58);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_recieveMsg = sp[0].o;
	LINE_NUMBER(59);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPacketTime = temp0;
	LINE_NUMBER(60);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastSendPingTime = (jlong(0));
	LINE_NUMBER(61);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_lastPingReceiveTime = (jlong(0));
	LINE_NUMBER(62);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_timeConnectStarted = (jlong(0));
	LINE_NUMBER(63);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_currentPing = (jint(-1));
	LINE_NUMBER(97);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_defaultGatewayUrl = (jobject(nullptr));
	LINE_NUMBER(98);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_GATEWAY_URL = (jobject(nullptr));
	LINE_NUMBER(388);
	clinit_lib_network_Session_ME(ctx);
	SF_lib_network_Session_ME_stopReadStartTime = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_lib_network_Session_ME_sendMessage_nro_Message,
	(void *) M_lib_network_Session_ME_clearSendingMessage,
	(void *) M_lib_network_Session_ME_isConnected_R_boolean,
	(void *) M_lib_network_Session_ME_setHandler_nro_IMessageHandler,
	(void *) M_lib_network_Session_ME_connect_java_lang_String_int,
	(void *) M_lib_network_Session_ME_processWsBuffer,
	(void *) M_lib_network_Session_ME_processGetKey_nro_Message,
	(void *) M_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte,
	(void *) M_lib_network_Session_ME_doSendMessage_nro_Message,
	(void *) M_lib_network_Session_ME_writeKey_byte_R_byte,
	(void *) M_lib_network_Session_ME_close,
	(void *) M_lib_network_Session_ME_cleanNetwork,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "sendMessage", "(Lnro/Message;)V" },
	{ "clearSendingMessage", "()V" },
	{ "isConnected", "()Z" },
	{ "setHandler", "(Lnro/IMessageHandler;)V" },
	{ "connect", "(Ljava/lang/String;I)V" },
	{ "processWsBuffer", "()V" },
	{ "processGetKey", "(Lnro/Message;)V" },
	{ "encodePacket", "(Lnro/Message;)[B" },
	{ "doSendMessage", "(Lnro/Message;)V" },
	{ "writeKey", "(B)B" },
	{ "close", "()V" },
	{ "cleanNetwork", "()V" },
};

static jclass interfaces[] { &class_nro_ISession, };

static jclass innerClasses[] {
	&class_lib_network_Session_ME$Sender,
	&class_lib_network_Session_ME$IWebSocketBridgeFactory,
	&class_lib_network_Session_ME$NetworkInit,
};

static FieldMetadata fields[] {
	{ "CONNECT_TIMEOUT_MS", &class_long, (intptr_t) &SF_lib_network_Session_ME_CONNECT_TIMEOUT_MS, "J", 26 },
	{ "PING_INTERVAL_MS", &class_long, (intptr_t) &SF_lib_network_Session_ME_PING_INTERVAL_MS, "J", 26 },
	{ "IDLE_PROBE_MS", &class_long, (intptr_t) &SF_lib_network_Session_ME_IDLE_PROBE_MS, "J", 26 },
	{ "HARD_IDLE_TIMEOUT_MS", &class_long, (intptr_t) &SF_lib_network_Session_ME_HARD_IDLE_TIMEOUT_MS, "J", 26 },
	{ "MAX_WS_MESSAGES_PER_TICK", &class_int, (intptr_t) &SF_lib_network_Session_ME_MAX_WS_MESSAGES_PER_TICK, "I", 26 },
	{ "MAX_QUEUE_SIZE", &class_int, (intptr_t) &SF_lib_network_Session_ME_MAX_QUEUE_SIZE, "I", 26 },
	{ "instance", &class_lib_network_Session_ME, (intptr_t) &SF_lib_network_Session_ME_instance, "Llib/network/Session_ME;", 10 },
	{ "p", &class_lib_network_Session_ME, (intptr_t) &SF_lib_network_Session_ME_p, "Llib/network/Session_ME;", 10 },
	{ "dos", &class_java_io_DataOutputStream, offsetof(lib_network_Session_ME, F_dos), "Ljava/io/DataOutputStream;", 2 },
	{ "dis", &class_java_io_DataInputStream, offsetof(lib_network_Session_ME, F_dis), "Ljava/io/DataInputStream;", 1 },
	{ "messageHandler", &class_nro_IMessageHandler, offsetof(lib_network_Session_ME, F_messageHandler), "Lnro/IMessageHandler;", 1 },
	{ "isMainSession", &class_boolean, offsetof(lib_network_Session_ME, F_isMainSession), "Z", 1 },
	{ "sc", &class_lib_mSocket, offsetof(lib_network_Session_ME, F_sc), "Llib/mSocket;", 66 },
	{ "connected", &class_boolean, offsetof(lib_network_Session_ME, F_connected), "Z", 65 },
	{ "connecting", &class_boolean, offsetof(lib_network_Session_ME, F_connecting), "Z", 65 },
	{ "sender", &class_lib_network_Session_ME$Sender, offsetof(lib_network_Session_ME, F_sender), "Llib/network/Session_ME$Sender;", 18 },
	{ "initThread", &class_java_lang_Thread, offsetof(lib_network_Session_ME, F_initThread), "Ljava/lang/Thread;", 66 },
	{ "sendThread", &class_java_lang_Thread, offsetof(lib_network_Session_ME, F_sendThread), "Ljava/lang/Thread;", 65 },
	{ "collectorThread", &class_java_lang_Thread, offsetof(lib_network_Session_ME, F_collectorThread), "Ljava/lang/Thread;", 65 },
	{ "sendByteCount", &class_int, offsetof(lib_network_Session_ME, F_sendByteCount), "I", 1 },
	{ "recvByteCount", &class_int, offsetof(lib_network_Session_ME, F_recvByteCount), "I", 1 },
	{ "getKeyComplete", &class_boolean, offsetof(lib_network_Session_ME, F_getKeyComplete), "Z", 64 },
	{ "key", getArrayClass(&class_byte, 1), offsetof(lib_network_Session_ME, F_key), "[B", 65 },
	{ "curR", &class_int, offsetof(lib_network_Session_ME, F_curR), "I", 2 },
	{ "curW", &class_int, offsetof(lib_network_Session_ME, F_curW), "I", 2 },
	{ "timeConnected", &class_long, offsetof(lib_network_Session_ME, F_timeConnected), "J", 64 },
	{ "strRecvByteCount", &class_java_lang_String, offsetof(lib_network_Session_ME, F_strRecvByteCount), "Ljava/lang/String;", 1 },
	{ "timeWaitConnect", &class_long, offsetof(lib_network_Session_ME, F_timeWaitConnect), "J", 2 },
	{ "isCancel", &class_boolean, (intptr_t) &SF_lib_network_Session_ME_isCancel, "Z", 73 },
	{ "count", &class_int, (intptr_t) &SF_lib_network_Session_ME_count, "I", 10 },
	{ "connectStartMs", &class_long, offsetof(lib_network_Session_ME, F_connectStartMs), "J", 66 },
	{ "lastInboundMs", &class_long, offsetof(lib_network_Session_ME, F_lastInboundMs), "J", 66 },
	{ "lastPingSentMs", &class_long, offsetof(lib_network_Session_ME, F_lastPingSentMs), "J", 66 },
	{ "recieveMsg", &class_java_util_Vector, (intptr_t) &SF_lib_network_Session_ME_recieveMsg, "Ljava/util/Vector;", 9 },
	{ "lastPacketTime", &class_long, (intptr_t) &SF_lib_network_Session_ME_lastPacketTime, "J", 73 },
	{ "lastSendPingTime", &class_long, (intptr_t) &SF_lib_network_Session_ME_lastSendPingTime, "J", 73 },
	{ "lastPingReceiveTime", &class_long, (intptr_t) &SF_lib_network_Session_ME_lastPingReceiveTime, "J", 73 },
	{ "timeConnectStarted", &class_long, (intptr_t) &SF_lib_network_Session_ME_timeConnectStarted, "J", 73 },
	{ "currentPing", &class_int, (intptr_t) &SF_lib_network_Session_ME_currentPing, "I", 73 },
	{ "bridgeFactory", &class_lib_network_Session_ME$IWebSocketBridgeFactory, (intptr_t) &SF_lib_network_Session_ME_bridgeFactory, "Llib/network/Session_ME$IWebSocketBridgeFactory;", 9 },
	{ "defaultGatewayUrl", &class_java_lang_String, (intptr_t) &SF_lib_network_Session_ME_defaultGatewayUrl, "Ljava/lang/String;", 9 },
	{ "GATEWAY_URL", &class_java_lang_String, (intptr_t) &SF_lib_network_Session_ME_GATEWAY_URL, "Ljava/lang/String;", 9 },
	{ "myWsBridge", &class_lib_network_IWebSocketBridge, offsetof(lib_network_Session_ME, F_myWsBridge), "Llib/network/IWebSocketBridge;", 65 },
	{ "wsRecvBuffer", &class_lib_network_ByteStreamBuffer, offsetof(lib_network_Session_ME, F_wsRecvBuffer), "Llib/network/ByteStreamBuffer;", 18 },
	{ "host", &class_java_lang_String, offsetof(lib_network_Session_ME, F_host), "Ljava/lang/String;", 1 },
	{ "port", &class_int, offsetof(lib_network_Session_ME, F_port), "I", 1 },
	{ "connectionGeneration", &class_int, offsetof(lib_network_Session_ME, F_connectionGeneration), "I", 66 },
	{ "stopReadStartTime", &class_long, (intptr_t) &SF_lib_network_Session_ME_stopReadStartTime, "J", 10 },
	{ "curRHolder", getArrayClass(&class_int, 1), offsetof(lib_network_Session_ME, F_curRHolder), "[I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME, 0, "()V", 1 },
	{ "getPing", (intptr_t) SM_lib_network_Session_ME_getPing_R_int, 0, "()I", 9 },
	{ "updatePingSample", (intptr_t) SM_lib_network_Session_ME_updatePingSample_int, 0, "(I)V", 9 },
	{ "setWebSocketBridgeFactory", (intptr_t) SM_lib_network_Session_ME_setWebSocketBridgeFactory_lib_network_Session_ME$IWebSocketBridgeFactory, 0, "(Llib/network/Session_ME$IWebSocketBridgeFactory;)V", 9 },
	{ "setGatewayUrl", (intptr_t) SM_lib_network_Session_ME_setGatewayUrl_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "shouldUseWebSocketBridge", (intptr_t) SM_lib_network_Session_ME_shouldUseWebSocketBridge_R_boolean, 0, "()Z", 9 },
	{ "resolveGatewayUrl", (intptr_t) SM_lib_network_Session_ME_resolveGatewayUrl_java_lang_String_int_R_java_lang_String, 0, "(Ljava/lang/String;I)Ljava/lang/String;", 9 },
	{ "GI2", (intptr_t) SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME, 0, "()Llib/network/Session_ME;", 9 },
	{ "gI", (intptr_t) SM_lib_network_Session_ME_gI_R_lib_network_Session_ME, 0, "()Llib/network/Session_ME;", 9 },
	{ "clearSendingMessage", (intptr_t) M_lib_network_Session_ME_clearSendingMessage, VTABLE_lib_network_Session_ME_clearSendingMessage, "()V", 17 },
	{ "dispatchToMainThread", (intptr_t) SM_lib_network_Session_ME_dispatchToMainThread_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 10 },
	{ "createDefaultBridge", (intptr_t) SM_lib_network_Session_ME_createDefaultBridge_R_lib_network_IWebSocketBridge, 0, "()Llib/network/IWebSocketBridge;", 9 },
	{ "isConnected", (intptr_t) M_lib_network_Session_ME_isConnected_R_boolean, VTABLE_lib_network_Session_ME_isConnected_R_boolean, "()Z", 17 },
	{ "setHandler", (intptr_t) M_lib_network_Session_ME_setHandler_nro_IMessageHandler, VTABLE_lib_network_Session_ME_setHandler_nro_IMessageHandler, "(Lnro/IMessageHandler;)V", 17 },
	{ "connect", (intptr_t) M_lib_network_Session_ME_connect_java_lang_String_int, VTABLE_lib_network_Session_ME_connect_java_lang_String_int, "(Ljava/lang/String;I)V", 17 },
	{ "sendMessage", (intptr_t) M_lib_network_Session_ME_sendMessage_nro_Message, VTABLE_lib_network_Session_ME_sendMessage_nro_Message, "(Lnro/Message;)V", 17 },
	{ "onRecieveMsg", (intptr_t) SM_lib_network_Session_ME_onRecieveMsg_nro_Message, 0, "(Lnro/Message;)V", 9 },
	{ "dispatchMessageToActiveHandler", (intptr_t) SM_lib_network_Session_ME_dispatchMessageToActiveHandler_nro_Message, 0, "(Lnro/Message;)V", 10 },
	{ "notifyAppResumed", (intptr_t) SM_lib_network_Session_ME_notifyAppResumed, 0, "()V", 9 },
	{ "maintainSession", (intptr_t) SM_lib_network_Session_ME_maintainSession_lib_network_Session_ME_long, 0, "(Llib/network/Session_ME;J)V", 10 },
	{ "update", (intptr_t) SM_lib_network_Session_ME_update, 0, "()V", 9 },
	{ "processWsBuffer", (intptr_t) M_lib_network_Session_ME_processWsBuffer, VTABLE_lib_network_Session_ME_processWsBuffer, "()V", 2 },
	{ "processGetKey", (intptr_t) M_lib_network_Session_ME_processGetKey_nro_Message, VTABLE_lib_network_Session_ME_processGetKey_nro_Message, "(Lnro/Message;)V", 2 },
	{ "encodePacket", (intptr_t) M_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte, VTABLE_lib_network_Session_ME_encodePacket_nro_Message_R_Array1_byte, "(Lnro/Message;)[B", 2 },
	{ "doSendMessage", (intptr_t) M_lib_network_Session_ME_doSendMessage_nro_Message, VTABLE_lib_network_Session_ME_doSendMessage_nro_Message, "(Lnro/Message;)V", 34 },
	{ "writeKey", (intptr_t) M_lib_network_Session_ME_writeKey_byte_R_byte, VTABLE_lib_network_Session_ME_writeKey_byte_R_byte, "(B)B", 2 },
	{ "close", (intptr_t) M_lib_network_Session_ME_close, VTABLE_lib_network_Session_ME_close, "()V", 17 },
	{ "cleanNetwork", (intptr_t) M_lib_network_Session_ME_cleanNetwork, VTABLE_lib_network_Session_ME_cleanNetwork, "()V", 2 },
	{ "getMySocket", (intptr_t) SM_lib_network_Session_ME_getMySocket_lib_network_Session_ME_R_lib_mSocket, 0, "(Llib/network/Session_ME;)Llib/mSocket;", 8 },
	{ "a", (intptr_t) SM_lib_network_Session_ME_a_lib_network_Session_ME_lib_mSocket, 0, "(Llib/network/Session_ME;Llib/mSocket;)V", 8 },
	{ "a", (intptr_t) SM_lib_network_Session_ME_a_lib_network_Session_ME_java_io_DataOutputStream, 0, "(Llib/network/Session_ME;Ljava/io/DataOutputStream;)V", 8 },
	{ "b", (intptr_t) SM_lib_network_Session_ME_b_lib_network_Session_ME_R_lib_network_Session_ME$Sender, 0, "(Llib/network/Session_ME;)Llib/network/Session_ME$Sender;", 8 },
	{ "sendMessage", (intptr_t) SM_lib_network_Session_ME_sendMessage_lib_network_Session_ME_nro_Message, 0, "(Llib/network/Session_ME;Lnro/Message;)V", 8 },
	{ "c", (intptr_t) SM_lib_network_Session_ME_c_lib_network_Session_ME, 0, "(Llib/network/Session_ME;)V", 8 },
	{ "readKey", (intptr_t) SM_lib_network_Session_ME_readKey_lib_network_Session_ME_byte_R_byte, 0, "(Llib/network/Session_ME;B)B", 8 },
	{ "access$000", (intptr_t) SM_lib_network_Session_ME_access$000_lib_network_Session_ME_R_int, 0, "(Llib/network/Session_ME;)I", 4104 },
	{ "access$102", (intptr_t) SM_lib_network_Session_ME_access$102_lib_network_Session_ME_long_R_long, 0, "(Llib/network/Session_ME;J)J", 4104 },
	{ "access$202", (intptr_t) SM_lib_network_Session_ME_access$202_lib_network_Session_ME_long_R_long, 0, "(Llib/network/Session_ME;J)J", 4104 },
	{ "access$300", (intptr_t) SM_lib_network_Session_ME_access$300_lib_network_Session_ME_nro_Message, 0, "(Llib/network/Session_ME;Lnro/Message;)V", 4104 },
	{ "access$400", (intptr_t) SM_lib_network_Session_ME_access$400_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 4104 },
	{ "access$500", (intptr_t) SM_lib_network_Session_ME_access$500_lib_network_Session_ME_R_lib_network_ByteStreamBuffer, 0, "(Llib/network/Session_ME;)Llib/network/ByteStreamBuffer;", 4104 },
	{ "access$600", (intptr_t) SM_lib_network_Session_ME_access$600_lib_network_Session_ME, 0, "(Llib/network/Session_ME;)V", 4104 },
	{ "access$702", (intptr_t) SM_lib_network_Session_ME_access$702_lib_network_Session_ME_int_R_int, 0, "(Llib/network/Session_ME;I)I", 4104 },
	{ "access$802", (intptr_t) SM_lib_network_Session_ME_access$802_lib_network_Session_ME_int_R_int, 0, "(Llib/network/Session_ME;I)I", 4104 },
	{ "access$900", (intptr_t) SM_lib_network_Session_ME_access$900_lib_network_Session_ME_R_lib_network_Session_ME$Sender, 0, "(Llib/network/Session_ME;)Llib/network/Session_ME$Sender;", 4104 },
	{ "access$1002", (intptr_t) SM_lib_network_Session_ME_access$1002_lib_network_Session_ME_long_R_long, 0, "(Llib/network/Session_ME;J)J", 4104 },
	{ "<clinit>", (intptr_t) clinit_lib_network_Session_ME, 0, "()V", 8 },
};

Class class_lib_network_Session_ME{
		.nativeName = (intptr_t) "lib/network/Session_ME",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 49,
		.nativeFields = (intptr_t) fields,
		.methodCount = 47,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME = registerClass(&class_lib_network_Session_ME);

}

