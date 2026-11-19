#include "lib/network/Session_ME2.h"
#include "lib/network/Session_ME2_SessionME2Collector.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "lib/network/Session_ME2_Sender2.h"
#include "java/util/Vector.h"
#include "com/badlogic/gdx/Application.h"
#include "lib/network/Session_ME2_NetworkInit2.h"
#include "java/lang/Runnable.h"
#include "lib/network/IWebSocketBridge_IWebSocketListener.h"
#include "lib/network/Session_ME_IWebSocketBridgeFactory.h"
#include "lib/network/Session_ME2.h"
#include "java/lang/String.h"
#include "nro/Controller.h"
#include "java/io/IOException.h"
#include "com/nro/GameMain.h"
#include "nro/IMessageHandler.h"
#include "java/lang/Throwable.h"
#include "lib/network/ByteStreamBuffer.h"
#include "lib/mSystem.h"
#include "java/lang/Thread.h"
#include "java/lang/Exception.h"
#include "lib/network/Session_ME2_2.h"
#include "nro/ISession.h"
#include "nro/Message.h"
#include "java/lang/AutoCloseable.h"
#include "lib/network/Session_ME2_1.h"
#include "java/io/DataInputStream.h"
#include "com/badlogic/gdx/Gdx.h"
#include "lib/network/IWebSocketBridge.h"
#include "lib/mSocket.h"
#include "java/lang/Object.h"
#include "nro/Res.h"
#include "java/io/DataOutputStream.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_lib_network_Session_ME2_CONNECT_TIMEOUT_MS;
jint SF_lib_network_Session_ME2_MAX_WS_MESSAGES_PER_TICK;
jint SF_lib_network_Session_ME2_MAX_QUEUE_SIZE;
jobject SF_lib_network_Session_ME2_instance;
volatile jbool SF_lib_network_Session_ME2_isCancel;
jobject SF_lib_network_Session_ME2_recieveMsg;

void mark_lib_network_Session_ME2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_network_Session_ME2_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME2_instance)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME2_instance, mark, depth + 1);
		if (SF_lib_network_Session_ME2_recieveMsg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_network_Session_ME2_recieveMsg)->clazz)->markFunction)((jobject) SF_lib_network_Session_ME2_recieveMsg, mark, depth + 1);
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
	auto self = (lib_network_Session_ME2 *) object;
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

void init_lib_network_Session_ME2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_isMainSession = (jint(1));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_lib_network_Session_ME2$Sender2(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_network_Session_ME2$Sender2);
	init_lib_network_Session_ME2$Sender2_lib_network_Session_ME2(ctx, sp[1].o, (frame[0].o));
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sender = (jref) sp[1].o;
	LINE_NUMBER(39);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(43);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connectStartMs = (jlong(0));
	LINE_NUMBER(44);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_strRecvByteCount = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(45);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = (jlong(0));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_lib_network_ByteStreamBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_network_ByteStreamBuffer);
	init_lib_network_ByteStreamBuffer(ctx, sp[1].o);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_wsRecvBuffer = (jref) sp[1].o;
	LINE_NUMBER(54);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connectionGeneration = (jint(0));
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_curRHolder = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME2_gI_R_lib_network_Session_ME2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:gI", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	{
	LINE_NUMBER(57);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_clearSendingMessage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:clearSendingMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	sp[0].o = (jobject)SM_lib_network_Session_ME2$Sender2_a_lib_network_Session_ME2$Sender2_R_java_util_Vector(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(63);
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, (frame[1].o));
	LINE_NUMBER(64);
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
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_dispatchToMainThread_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:dispatchToMainThread", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(69);
	SM_com_nro_GameMain_postRunnable_java_lang_Runnable(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(71);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_lib_network_Session_ME2_isConnected_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:isConnected", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[1].o = sp[0].o;
	LINE_NUMBER(77);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(78);
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_4;
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
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connected);
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_setHandler_nro_IMessageHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:setHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_messageHandler = (jref) (frame[1].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_connect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:connect", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(88);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_host = (jref) (frame[1].o);
	LINE_NUMBER(89);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_port = (frame[2].i);
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_lib_network_Session_ME_shouldUseWebSocketBridge_R_boolean(ctx);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(92);
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connected) != 0) goto label_5;
	}
	{
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_5;
	}
	{
	LINE_NUMBER(93);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(94);
	if ((longCompare((frame[3].l), ((jlong)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect))) < 0) goto label_5;
	}
	{
	LINE_NUMBER(95);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = ((frame[3].l) + (jlong(50ll)));
	LINE_NUMBER(96);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(97);
	M_lib_network_Session_ME2_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(98);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(1));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectStartMs = temp0;
	LINE_NUMBER(100);
	clinit_lib_network_Session_ME2(ctx);
	SF_lib_network_Session_ME2_isCancel = (jint(0));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectionGeneration) + (jint(1));
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectionGeneration = temp1;
	frame[5].i = temp1;
	LINE_NUMBER(103);
	clinit_lib_network_Session_ME(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME_bridgeFactory;
	sp[0].o = (jobject)((func_lib_network_Session_ME$IWebSocketBridgeFactory_createBridge_R_lib_network_IWebSocketBridge) resolveInterfaceMethod(ctx, &class_lib_network_Session_ME$IWebSocketBridgeFactory, INDEX_lib_network_Session_ME$IWebSocketBridgeFactory_createBridge_R_lib_network_IWebSocketBridge, sp[0].o))(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(104);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge = (jref) (frame[6].o);
	LINE_NUMBER(105);
	frame[7].o = (frame[0].o);
	LINE_NUMBER(106);
	sp[0].o = frame[6].o;
	clinit_lib_network_Session_ME2$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_network_Session_ME2$1);
	init_lib_network_Session_ME2$1_lib_network_Session_ME2_int_lib_network_Session_ME2_lib_network_IWebSocketBridge(ctx, sp[1].o, (frame[0].o), (frame[5].i), (frame[7].o), (frame[6].o));
	((func_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)SM_lib_network_Session_ME_resolveGatewayUrl_java_lang_String_int_R_java_lang_String(ctx, (frame[1].o), (frame[2].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(177);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Session_ME2] Connecting via WebSocket bridge: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(178);
	((func_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int, (frame[6].o)))(ctx, (frame[6].o), (frame[8].o), (frame[1].o), (frame[2].i));
	}
label_5:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(184);
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connected) != 0) goto label_22;
	}
	{
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connecting) != 0) goto label_22;
	}
	{
	LINE_NUMBER(185);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(186);
	if ((longCompare((frame[3].l), ((jlong)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect))) < 0) goto label_22;
	}
	{
	LINE_NUMBER(187);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = ((frame[3].l) + (jlong(50ll)));
	LINE_NUMBER(188);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(189);
	M_lib_network_Session_ME2_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(190);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(1));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectStartMs = temp0;
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_java_lang_Thread(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Thread);
	clinit_lib_network_Session_ME2$NetworkInit2(ctx);
	sp[2].o = gcAlloc(ctx, &class_lib_network_Session_ME2$NetworkInit2);
	init_lib_network_Session_ME2$NetworkInit2_lib_network_Session_ME2_lib_network_Session_ME2_java_lang_String_int(ctx, sp[2].o, (frame[0].o), (frame[0].o), (frame[1].o), (frame[2].i));
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"NRO-TCP2-Init"_j))));
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_initThread = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_initThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	}
label_22:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_sendMessage_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:sendMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[2].o = sp[0].o;
	LINE_NUMBER(201);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(202);
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_lib_network_IWebSocketBridge_isConnected_R_boolean) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) == 0) goto label_5;
	}
	{
	LINE_NUMBER(203);
	M_lib_network_Session_ME2_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[1].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME2$Sender2_AddMessage_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2$Sender2_AddMessage_nro_Message])(ctx, sp[0].o, (frame[1].o));
	}
label_7:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME2$Sender2_AddMessage_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2$Sender2_AddMessage_nro_Message])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_onRecieveMsg_nro_Message(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:onRecieveMsg", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(213);
	if ((frame[0].o) != nullptr) goto label_13;
	}
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(216);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_15;
	}
	{
	LINE_NUMBER(217);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(218);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (1000)) goto label_17;
	}
	{
	LINE_NUMBER(219);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(221);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_19:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getName_R_java_lang_String])(ctx, sp[0].o);
	clinit_com_nro_GameMain(ctx);
	sp[1].o = (jobject)SF_com_nro_GameMain_mainThreadName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(225);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(226);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	((func_nro_IMessageHandler_onMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(229);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(230);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 < (1000)) goto label_24;
	}
	{
	LINE_NUMBER(231);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	{ popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_24:;
	{
	LINE_NUMBER(233);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(234);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_22;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_22:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_update(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	{
	LINE_NUMBER(239);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(240);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_myWsBridge;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(241);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	M_lib_network_Session_ME2_processWsBuffer(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(243);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(244);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connecting) == 0) goto label_14;
	}
	{
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	if ((longCompare(((jlong)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectStartMs), (jlong(0)))) <= 0) goto label_14;
	}
	{
	jlong temp0 = frame[0].l;
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	if ((longCompare((temp0 - ((jlong)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectStartMs)), (jlong(12000ll)))) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(245);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	frame[2].o = sp[0].o;
	LINE_NUMBER(246);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	frame[3].i = ((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_isMainSession);
	LINE_NUMBER(247);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	M_lib_network_Session_ME2_cleanNetwork(ctx, sp[0].o);
	LINE_NUMBER(248);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(249);
	((func_nro_IMessageHandler_onConnectionFail_boolean) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onConnectionFail_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[3].i));
	}
label_14:;
	{
	LINE_NUMBER(254);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_24;
	}
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_RETURN();
label_24:;
	{
	LINE_NUMBER(258);
	frame[0].i = (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(259);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_27;
	}
	{
	if ((frame[0].i) >= (64)) goto label_27;
	}
	{
	LINE_NUMBER(260);
	INST_IINC(0, 1);
	LINE_NUMBER(261);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(262);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(263);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(264);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_27;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(266);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[1].o = (checkCast(ctx, &class_nro_Message, sp[0].o));
	LINE_NUMBER(267);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_recieveMsg;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(268);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_34;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_34:;
	{
	LINE_NUMBER(270);
	if ((frame[1].o) != nullptr) goto label_9;
	}
	LINE_NUMBER(271);
	goto label_26;
label_9:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_11; }
	}
	{
	LINE_NUMBER(275);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(276);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = (jobject)SF_lib_network_Session_ME2_instance;
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_messageHandler;
	((func_nro_IMessageHandler_onMessage_nro_Message) resolveInterfaceMethod(ctx, &class_nro_IMessageHandler, INDEX_nro_IMessageHandler_onMessage_nro_Message, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
label_10:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(280);
	goto label_37;
label_11:;
	{
	sp -= 1;
	LINE_NUMBER(278);
	frame[2].o = sp[0].o;
	LINE_NUMBER(279);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_37:;
	{
	LINE_NUMBER(282);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_39;
	}
	LINE_NUMBER(283);
	goto label_27;
label_39:;
	LINE_NUMBER(285);
	goto label_26;
label_27:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_processWsBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:processWsBuffer", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	sp[0].o = (jobject)SM_lib_network_Session_ME2$Sender2_a_lib_network_Session_ME2$Sender2_R_java_util_Vector(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(294);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(295);
	sp[0].o = frame[1].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(0)));
	frame[2].o = (checkCast(ctx, &class_nro_Message, sp[0].o));
	LINE_NUMBER(298);
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, (frame[1].o), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(300);
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
	LINE_NUMBER(301);
	if ((frame[2].o) != nullptr) goto label_15;
	}
	LINE_NUMBER(302);
	goto label_7;
label_15:;
	{
	LINE_NUMBER(304);
	M_lib_network_Session_ME2_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(305);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR);
	LINE_NUMBER(310);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(311);
	if ((frame[2].i) >= (96)) goto label_20;
	}
	{
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_wsRecvBuffer;
	jint temp0 = (jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete;
	sp[1].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key;
	sp[2].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[2].o, (jint(0)));
	sp[2].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_ByteStreamBuffer_pollMessage_boolean_Array1_byte_int_Array1_int_R_nro_Message])(ctx, sp[0].o, temp0, sp[1].o, temp1, sp[2].o);
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(313);
	INST_IINC(2, 1);
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_curR = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(315);
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
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_recvByteCount = (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_recvByteCount) + ((jint(5)) + (frame[3].i)));
	LINE_NUMBER(318);
	if (((jint)((nro_Message *) NULL_CHECK((frame[1].o)))->F_command) != (-27)) goto label_30;
	}
	{
	LINE_NUMBER(319);
	M_lib_network_Session_ME2_processGetKey_nro_Message(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curRHolder;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR);
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(322);
	SM_lib_network_Session_ME2_onRecieveMsg_nro_Message(ctx, (frame[1].o));
	}
label_33:;
	{
	LINE_NUMBER(324);
	if ((clinit_nro_Controller(ctx), (jint)SF_nro_Controller_isStopReadMessage) == 0) goto label_34;
	}
	LINE_NUMBER(325);
	goto label_20;
label_34:;
	LINE_NUMBER(327);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(328);
	if ((frame[2].i) <= 0) goto label_36;
	}
	{
	LINE_NUMBER(329);
	frame[3].i = (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_recvByteCount) + ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sendByteCount));
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[3].i) / (1024)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((frame[3].i) % (1024)) / (102)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kb"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_strRecvByteCount = (jref) sp[1].o;
	}
label_36:;
	LINE_NUMBER(332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_processGetKey_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:processGetKey", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(337);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(338);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_nro_Message_reader_R_java_io_DataInputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_reader_R_java_io_DataInputStream])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, sp[1].o);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(338);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(341);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = frame[3].o;
	jint temp0 = (frame[4].i) + (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) ^ ((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[4].i))))));
	LINE_NUMBER(341);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(344);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR = (jint(0));
	LINE_NUMBER(345);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curW = (jint(0));
	LINE_NUMBER(346);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[3].o);
	LINE_NUMBER(347);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(1));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME2$Sender2_wakeUp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2$Sender2_wakeUp])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(351);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(349);
	frame[2].o = sp[0].o;
	LINE_NUMBER(350);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_18:;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:encodePacket", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_nro_Message_getData_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Message_getData_R_Array1_byte])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(356);
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
	LINE_NUMBER(357);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((jint(3)) + (frame[3].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(358);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key;
	frame[5].o = sp[0].o;
	LINE_NUMBER(359);
	if (((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete) == 0) goto label_7;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_7;
	{
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)M_lib_network_Session_ME2_writeKey_byte_R_byte(ctx, (frame[0].o), ((jint)((nro_Message *) NULL_CHECK((frame[1].o)))->F_command));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(361);
	sp[0].o = frame[4].o;
	jint temp2 = jint(1);
	jint temp3 = (jint)M_lib_network_Session_ME2_writeKey_byte_R_byte(ctx, (frame[0].o), (jbyte((((frame[3].i) >> (8)) & (255)))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = temp3;
	LINE_NUMBER(362);
	sp[0].o = frame[4].o;
	jint temp4 = jint(2);
	jint temp5 = (jint)M_lib_network_Session_ME2_writeKey_byte_R_byte(ctx, (frame[0].o), (jbyte(((frame[3].i) & (255)))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = temp5;
	LINE_NUMBER(363);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = frame[4].o;
	jint temp0 = (jint(3)) + (frame[6].i);
	jint temp1 = (jint)M_lib_network_Session_ME2_writeKey_byte_R_byte(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[6].i))));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(363);
	INST_IINC(6, 1);
	goto label_12;
	}
label_13:;
	goto label_16;
label_7:;
	{
	LINE_NUMBER(367);
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(0))) = ((jint)((nro_Message *) NULL_CHECK((frame[1].o)))->F_command);
	LINE_NUMBER(368);
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(1))) = (jbyte((((frame[3].i) >> (8)) & (255))));
	LINE_NUMBER(369);
	ARRAY_ACCESS(jbyte, (frame[4].o), (jint(2))) = (jbyte(((frame[3].i) & (255))));
	LINE_NUMBER(370);
	if ((frame[3].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(371);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (jint(0)), (frame[4].o), (jint(3)), (frame[3].i));
	}
label_16:;
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_doSendMessage_nro_Message(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:doSendMessage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[2].o = sp[0].o;
	LINE_NUMBER(380);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)M_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendByteCount = (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendByteCount) + ((jint(2)) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_lib_network_IWebSocketBridge_isConnected_R_boolean) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(384);
	((func_lib_network_IWebSocketBridge_send_Array1_byte) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_send_Array1_byte, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	}
label_11:;
	LINE_NUMBER(386);
	popStackFrame(ctx, self);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dos;
	frame[3].o = sp[0].o;
	LINE_NUMBER(390);
	if ((frame[3].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)M_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(394);
	((func_java_io_DataOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int])(ctx, (frame[3].o), (frame[4].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(395);
	((func_java_io_DataOutputStream_flush) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_DataOutputStream_flush])(ctx, (frame[3].o));
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendByteCount = (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_sendByteCount) + ((jint(2)) + (((jarray) nullCheck(ctx, (frame[4].o)))->length)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(410);
	goto label_17;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(397);
	frame[4].o = sp[0].o;
	LINE_NUMBER(398);
	frame[5].o = (frame[0].o);
	LINE_NUMBER(399);
	frame[6].i = ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connectionGeneration);
	LINE_NUMBER(400);
	clinit_lib_network_Session_ME2$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2$2);
	init_lib_network_Session_ME2$2_lib_network_Session_ME2_int_lib_network_Session_ME2(ctx, sp[0].o, (frame[0].o), (frame[6].i), (frame[5].o));
	SM_lib_network_Session_ME2_dispatchToMainThread_java_lang_Runnable(ctx, sp[0].o);
	}
label_17:;
	LINE_NUMBER(411);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_lib_network_Session_ME2_writeKey_byte_R_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:writeKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key;
	frame[2].o = sp[0].o;
	LINE_NUMBER(415);
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
	LINE_NUMBER(416);
	frame[3].i = (jbyte(((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curW))) & (255)) ^ ((frame[1].i) & (255)))));
	LINE_NUMBER(417);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curW = ((((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curW) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	M_lib_network_Session_ME2_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_network_Session_ME2_cleanNetwork(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:cleanNetwork", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(427);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR = (jint(0));
	LINE_NUMBER(428);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curW = (jint(0));
	LINE_NUMBER(429);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_getKeyComplete = (jint(0));
	LINE_NUMBER(430);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connectStartMs = (jlong(0));
	LINE_NUMBER(431);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_timeWaitConnect = (jlong(0));
	LINE_NUMBER(432);
	sp[0].o = frame[0].o;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectionGeneration = (((jint)((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectionGeneration) + (jint(1)));
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(435);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connected = (jint(0));
	LINE_NUMBER(436);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connecting = (jint(0));
	LINE_NUMBER(437);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	((func_lib_network_Session_ME2$Sender2_wakeUp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2$Sender2_wakeUp])(ctx, sp[0].o);
	LINE_NUMBER(438);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge;
	frame[1].o = sp[0].o;
	LINE_NUMBER(440);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_myWsBridge = (jref) (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(442);
	((func_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, (frame[1].o)))(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(443);
	((func_lib_network_IWebSocketBridge_close) resolveInterfaceMethod(ctx, &class_lib_network_IWebSocketBridge, INDEX_lib_network_IWebSocketBridge_close, (frame[1].o)))(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(445);
	goto label_26;
label_2:;
	LINE_NUMBER(444);
	INST_ASTORE(2);
label_26:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_wsRecvBuffer;
	((func_lib_network_ByteStreamBuffer_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_ByteStreamBuffer_clear])(ctx, sp[0].o);
	LINE_NUMBER(448);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sc;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sc;
	((func_lib_mSocket_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mSocket_close])(ctx, sp[0].o);
	LINE_NUMBER(450);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sc = (jref) (jobject(nullptr));
	}
label_31:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dos;
	if (sp[0].o == nullptr) goto label_34;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dos;
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(456);
	goto label_35;
label_6:;
	LINE_NUMBER(455);
	INST_ASTORE(1);
label_35:;
	{
	LINE_NUMBER(457);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (jobject(nullptr));
	}
label_34:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dis;
	if (sp[0].o == nullptr) goto label_36;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dis;
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(463);
	goto label_37;
label_10:;
	LINE_NUMBER(462);
	INST_ASTORE(1);
label_37:;
	{
	LINE_NUMBER(464);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dis = (jref) (jobject(nullptr));
	}
label_36:;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_collectorThread;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_collectorThread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(468);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_collectorThread = (jref) (jobject(nullptr));
	}
label_38:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sendThread;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sendThread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(472);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sendThread = (jref) (jobject(nullptr));
	}
label_13:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(476);
	goto label_43;
label_14:;
	{
	sp -= 1;
	LINE_NUMBER(474);
	frame[1].o = sp[0].o;
	LINE_NUMBER(475);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	}
label_43:;
	LINE_NUMBER(477);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME2_getSocket_lib_network_Session_ME2_R_lib_mSocket(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:getSocket", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sc;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_setSocket_lib_network_Session_ME2_lib_mSocket(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:setSocket", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(484);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sc = (jref) (frame[1].o);
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_setDataOutputStream_lib_network_Session_ME2_java_io_DataOutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:setDataOutputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(488);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_dos = (jref) (frame[1].o);
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME2_b_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:b", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_sendMessage_lib_network_Session_ME2_nro_Message(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:sendMessage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(496);
	M_lib_network_Session_ME2_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_c_lib_network_Session_ME2(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:c", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(500);
	M_lib_network_Session_ME2_cleanNetwork(ctx, (frame[0].o));
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte(jcontext ctx, jobject param0, jbyte param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:readKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_key;
	frame[2].o = sp[0].o;
	LINE_NUMBER(505);
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
	LINE_NUMBER(506);
	frame[3].i = (jbyte(((((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR))) & (255)) ^ ((frame[1].i) & (255)))));
	LINE_NUMBER(507);
	((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR = ((((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_curR) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return ((jint)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_connectionGeneration);
	}

	popStackFrame(ctx);
}

jlong SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$102", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_connectStartMs = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_access$200_lib_network_Session_ME2_nro_Message(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$200", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(19);
	M_lib_network_Session_ME2_doSendMessage_nro_Message(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_access$300_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	SM_lib_network_Session_ME2_dispatchToMainThread_java_lang_Runnable(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME2_access$400_lib_network_Session_ME2_R_lib_network_ByteStreamBuffer(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_wsRecvBuffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_lib_network_Session_ME2_access$500_lib_network_Session_ME2(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	M_lib_network_Session_ME2_cleanNetwork(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME2_access$602_lib_network_Session_ME2_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$602", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_curR = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_lib_network_Session_ME2_access$702_lib_network_Session_ME2_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$702", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_curW = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_lib_network_Session_ME2_access$800_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:access$800", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((lib_network_Session_ME2 *) NULL_CHECK((frame[0].o)))->F_sender;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_lib_network_Session_ME2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_lib_network_Session_ME2_CONNECT_TIMEOUT_MS = jlong(12000ll);
	SF_lib_network_Session_ME2_MAX_WS_MESSAGES_PER_TICK = jint(96);
	SF_lib_network_Session_ME2_MAX_QUEUE_SIZE = jint(1000);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/network/Session_ME2:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_network_Session_ME2(ctx);
	{
	LINE_NUMBER(24);
	clinit_lib_network_Session_ME2(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_network_Session_ME2);
	init_lib_network_Session_ME2(ctx, sp[0].o);
	clinit_lib_network_Session_ME2(ctx);
	SF_lib_network_Session_ME2_instance = sp[0].o;
	LINE_NUMBER(48);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_lib_network_Session_ME2(ctx);
	SF_lib_network_Session_ME2_recieveMsg = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_network_Session_ME2[] {
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
	(void *) M_lib_network_Session_ME2_sendMessage_nro_Message,
	(void *) M_lib_network_Session_ME2_clearSendingMessage,
	(void *) M_lib_network_Session_ME2_isConnected_R_boolean,
	(void *) M_lib_network_Session_ME2_setHandler_nro_IMessageHandler,
	(void *) M_lib_network_Session_ME2_connect_java_lang_String_int,
	(void *) M_lib_network_Session_ME2_processWsBuffer,
	(void *) M_lib_network_Session_ME2_processGetKey_nro_Message,
	(void *) M_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte,
	(void *) M_lib_network_Session_ME2_doSendMessage_nro_Message,
	(void *) M_lib_network_Session_ME2_writeKey_byte_R_byte,
	(void *) M_lib_network_Session_ME2_close,
	(void *) M_lib_network_Session_ME2_cleanNetwork,
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
	&class_lib_network_Session_ME2$Sender2,
	&class_lib_network_Session_ME2$NetworkInit2,
	&class_lib_network_Session_ME2$SessionME2Collector,
};

static FieldMetadata fields[] {
	{ "CONNECT_TIMEOUT_MS", &class_long, (intptr_t) &SF_lib_network_Session_ME2_CONNECT_TIMEOUT_MS, "J", 26 },
	{ "MAX_WS_MESSAGES_PER_TICK", &class_int, (intptr_t) &SF_lib_network_Session_ME2_MAX_WS_MESSAGES_PER_TICK, "I", 26 },
	{ "MAX_QUEUE_SIZE", &class_int, (intptr_t) &SF_lib_network_Session_ME2_MAX_QUEUE_SIZE, "I", 26 },
	{ "instance", &class_lib_network_Session_ME2, (intptr_t) &SF_lib_network_Session_ME2_instance, "Llib/network/Session_ME2;", 10 },
	{ "dos", &class_java_io_DataOutputStream, offsetof(lib_network_Session_ME2, F_dos), "Ljava/io/DataOutputStream;", 2 },
	{ "dis", &class_java_io_DataInputStream, offsetof(lib_network_Session_ME2, F_dis), "Ljava/io/DataInputStream;", 1 },
	{ "messageHandler", &class_nro_IMessageHandler, offsetof(lib_network_Session_ME2, F_messageHandler), "Lnro/IMessageHandler;", 1 },
	{ "isMainSession", &class_boolean, offsetof(lib_network_Session_ME2, F_isMainSession), "Z", 1 },
	{ "sc", &class_lib_mSocket, offsetof(lib_network_Session_ME2, F_sc), "Llib/mSocket;", 66 },
	{ "connected", &class_boolean, offsetof(lib_network_Session_ME2, F_connected), "Z", 65 },
	{ "connecting", &class_boolean, offsetof(lib_network_Session_ME2, F_connecting), "Z", 65 },
	{ "sender", &class_lib_network_Session_ME2$Sender2, offsetof(lib_network_Session_ME2, F_sender), "Llib/network/Session_ME2$Sender2;", 18 },
	{ "initThread", &class_java_lang_Thread, offsetof(lib_network_Session_ME2, F_initThread), "Ljava/lang/Thread;", 66 },
	{ "sendThread", &class_java_lang_Thread, offsetof(lib_network_Session_ME2, F_sendThread), "Ljava/lang/Thread;", 65 },
	{ "collectorThread", &class_java_lang_Thread, offsetof(lib_network_Session_ME2, F_collectorThread), "Ljava/lang/Thread;", 65 },
	{ "sendByteCount", &class_int, offsetof(lib_network_Session_ME2, F_sendByteCount), "I", 1 },
	{ "recvByteCount", &class_int, offsetof(lib_network_Session_ME2, F_recvByteCount), "I", 1 },
	{ "getKeyComplete", &class_boolean, offsetof(lib_network_Session_ME2, F_getKeyComplete), "Z", 64 },
	{ "key", getArrayClass(&class_byte, 1), offsetof(lib_network_Session_ME2, F_key), "[B", 65 },
	{ "curR", &class_int, offsetof(lib_network_Session_ME2, F_curR), "I", 2 },
	{ "curW", &class_int, offsetof(lib_network_Session_ME2, F_curW), "I", 2 },
	{ "timeConnected", &class_long, offsetof(lib_network_Session_ME2, F_timeConnected), "J", 64 },
	{ "connectStartMs", &class_long, offsetof(lib_network_Session_ME2, F_connectStartMs), "J", 66 },
	{ "strRecvByteCount", &class_java_lang_String, offsetof(lib_network_Session_ME2, F_strRecvByteCount), "Ljava/lang/String;", 1 },
	{ "timeWaitConnect", &class_long, offsetof(lib_network_Session_ME2, F_timeWaitConnect), "J", 2 },
	{ "isCancel", &class_boolean, (intptr_t) &SF_lib_network_Session_ME2_isCancel, "Z", 73 },
	{ "recieveMsg", &class_java_util_Vector, (intptr_t) &SF_lib_network_Session_ME2_recieveMsg, "Ljava/util/Vector;", 9 },
	{ "myWsBridge", &class_lib_network_IWebSocketBridge, offsetof(lib_network_Session_ME2, F_myWsBridge), "Llib/network/IWebSocketBridge;", 65 },
	{ "wsRecvBuffer", &class_lib_network_ByteStreamBuffer, offsetof(lib_network_Session_ME2, F_wsRecvBuffer), "Llib/network/ByteStreamBuffer;", 18 },
	{ "host", &class_java_lang_String, offsetof(lib_network_Session_ME2, F_host), "Ljava/lang/String;", 1 },
	{ "port", &class_int, offsetof(lib_network_Session_ME2, F_port), "I", 1 },
	{ "connectionGeneration", &class_int, offsetof(lib_network_Session_ME2, F_connectionGeneration), "I", 66 },
	{ "curRHolder", getArrayClass(&class_int, 1), offsetof(lib_network_Session_ME2, F_curRHolder), "[I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_network_Session_ME2, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_lib_network_Session_ME2_gI_R_lib_network_Session_ME2, 0, "()Llib/network/Session_ME2;", 9 },
	{ "clearSendingMessage", (intptr_t) M_lib_network_Session_ME2_clearSendingMessage, VTABLE_lib_network_Session_ME2_clearSendingMessage, "()V", 17 },
	{ "dispatchToMainThread", (intptr_t) SM_lib_network_Session_ME2_dispatchToMainThread_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 10 },
	{ "isConnected", (intptr_t) M_lib_network_Session_ME2_isConnected_R_boolean, VTABLE_lib_network_Session_ME2_isConnected_R_boolean, "()Z", 17 },
	{ "setHandler", (intptr_t) M_lib_network_Session_ME2_setHandler_nro_IMessageHandler, VTABLE_lib_network_Session_ME2_setHandler_nro_IMessageHandler, "(Lnro/IMessageHandler;)V", 17 },
	{ "connect", (intptr_t) M_lib_network_Session_ME2_connect_java_lang_String_int, VTABLE_lib_network_Session_ME2_connect_java_lang_String_int, "(Ljava/lang/String;I)V", 17 },
	{ "sendMessage", (intptr_t) M_lib_network_Session_ME2_sendMessage_nro_Message, VTABLE_lib_network_Session_ME2_sendMessage_nro_Message, "(Lnro/Message;)V", 17 },
	{ "onRecieveMsg", (intptr_t) SM_lib_network_Session_ME2_onRecieveMsg_nro_Message, 0, "(Lnro/Message;)V", 9 },
	{ "update", (intptr_t) SM_lib_network_Session_ME2_update, 0, "()V", 9 },
	{ "processWsBuffer", (intptr_t) M_lib_network_Session_ME2_processWsBuffer, VTABLE_lib_network_Session_ME2_processWsBuffer, "()V", 2 },
	{ "processGetKey", (intptr_t) M_lib_network_Session_ME2_processGetKey_nro_Message, VTABLE_lib_network_Session_ME2_processGetKey_nro_Message, "(Lnro/Message;)V", 2 },
	{ "encodePacket", (intptr_t) M_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte, VTABLE_lib_network_Session_ME2_encodePacket_nro_Message_R_Array1_byte, "(Lnro/Message;)[B", 2 },
	{ "doSendMessage", (intptr_t) M_lib_network_Session_ME2_doSendMessage_nro_Message, VTABLE_lib_network_Session_ME2_doSendMessage_nro_Message, "(Lnro/Message;)V", 34 },
	{ "writeKey", (intptr_t) M_lib_network_Session_ME2_writeKey_byte_R_byte, VTABLE_lib_network_Session_ME2_writeKey_byte_R_byte, "(B)B", 2 },
	{ "close", (intptr_t) M_lib_network_Session_ME2_close, VTABLE_lib_network_Session_ME2_close, "()V", 17 },
	{ "cleanNetwork", (intptr_t) M_lib_network_Session_ME2_cleanNetwork, VTABLE_lib_network_Session_ME2_cleanNetwork, "()V", 2 },
	{ "getSocket", (intptr_t) SM_lib_network_Session_ME2_getSocket_lib_network_Session_ME2_R_lib_mSocket, 0, "(Llib/network/Session_ME2;)Llib/mSocket;", 8 },
	{ "setSocket", (intptr_t) SM_lib_network_Session_ME2_setSocket_lib_network_Session_ME2_lib_mSocket, 0, "(Llib/network/Session_ME2;Llib/mSocket;)V", 8 },
	{ "setDataOutputStream", (intptr_t) SM_lib_network_Session_ME2_setDataOutputStream_lib_network_Session_ME2_java_io_DataOutputStream, 0, "(Llib/network/Session_ME2;Ljava/io/DataOutputStream;)V", 8 },
	{ "b", (intptr_t) SM_lib_network_Session_ME2_b_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2, 0, "(Llib/network/Session_ME2;)Llib/network/Session_ME2$Sender2;", 8 },
	{ "sendMessage", (intptr_t) SM_lib_network_Session_ME2_sendMessage_lib_network_Session_ME2_nro_Message, 0, "(Llib/network/Session_ME2;Lnro/Message;)V", 8 },
	{ "c", (intptr_t) SM_lib_network_Session_ME2_c_lib_network_Session_ME2, 0, "(Llib/network/Session_ME2;)V", 8 },
	{ "readKey", (intptr_t) SM_lib_network_Session_ME2_readKey_lib_network_Session_ME2_byte_R_byte, 0, "(Llib/network/Session_ME2;B)B", 8 },
	{ "access$000", (intptr_t) SM_lib_network_Session_ME2_access$000_lib_network_Session_ME2_R_int, 0, "(Llib/network/Session_ME2;)I", 4104 },
	{ "access$102", (intptr_t) SM_lib_network_Session_ME2_access$102_lib_network_Session_ME2_long_R_long, 0, "(Llib/network/Session_ME2;J)J", 4104 },
	{ "access$200", (intptr_t) SM_lib_network_Session_ME2_access$200_lib_network_Session_ME2_nro_Message, 0, "(Llib/network/Session_ME2;Lnro/Message;)V", 4104 },
	{ "access$300", (intptr_t) SM_lib_network_Session_ME2_access$300_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 4104 },
	{ "access$400", (intptr_t) SM_lib_network_Session_ME2_access$400_lib_network_Session_ME2_R_lib_network_ByteStreamBuffer, 0, "(Llib/network/Session_ME2;)Llib/network/ByteStreamBuffer;", 4104 },
	{ "access$500", (intptr_t) SM_lib_network_Session_ME2_access$500_lib_network_Session_ME2, 0, "(Llib/network/Session_ME2;)V", 4104 },
	{ "access$602", (intptr_t) SM_lib_network_Session_ME2_access$602_lib_network_Session_ME2_int_R_int, 0, "(Llib/network/Session_ME2;I)I", 4104 },
	{ "access$702", (intptr_t) SM_lib_network_Session_ME2_access$702_lib_network_Session_ME2_int_R_int, 0, "(Llib/network/Session_ME2;I)I", 4104 },
	{ "access$800", (intptr_t) SM_lib_network_Session_ME2_access$800_lib_network_Session_ME2_R_lib_network_Session_ME2$Sender2, 0, "(Llib/network/Session_ME2;)Llib/network/Session_ME2$Sender2;", 4104 },
	{ "<clinit>", (intptr_t) clinit_lib_network_Session_ME2, 0, "()V", 8 },
};

Class class_lib_network_Session_ME2{
		.nativeName = (intptr_t) "lib/network/Session_ME2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_Session_ME2),
		.classVtable = (intptr_t) vtable_lib_network_Session_ME2,
		.staticInitializer = (intptr_t) clinit_lib_network_Session_ME2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_Session_ME2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_Session_ME2 = registerClass(&class_lib_network_Session_ME2);

}

