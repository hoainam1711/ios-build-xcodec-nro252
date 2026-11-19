#include "com/thelogicmaster/switchgdx/SwitchNet.h"
#include "com/badlogic/gdx/net/ServerSocketHints.h"
#include "com/badlogic/gdx/net/Socket.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Net_HttpRequest.h"
#include "com/thelogicmaster/switchgdx/SwitchNet.h"
#include "com/badlogic/gdx/net/ServerSocket.h"
#include "com/badlogic/gdx/Net_HttpResponseListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/net/SocketHints.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Net_Protocol.h"
#include "com/badlogic/gdx/Net.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchNet(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchNet *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchNet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchNet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchNet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchNet_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:sendHttpRequest", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(13);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"HTTP requests are unavailable in the Clearwing backend"_j))));
	((func_com_badlogic_gdx_Net$HttpResponseListener_failed_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Net$HttpResponseListener, INDEX_com_badlogic_gdx_Net$HttpResponseListener_failed_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchNet_cancelHttpRequest_com_badlogic_gdx_Net$HttpRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:cancelHttpRequest", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchNet_isHttpRequestPending_com_badlogic_gdx_Net$HttpRequest_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:isHttpRequestPending", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:newServerSocket", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(27);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Clearwing requires a WebSocket gateway. Direct TCP is unavailable."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:newServerSocket", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchNet_newClientSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchNet:newClientSocket", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Clearwing requires a WebSocket gateway. Direct TCP is unavailable."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchNet[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener,
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_cancelHttpRequest_com_badlogic_gdx_Net$HttpRequest,
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_isHttpRequestPending_com_badlogic_gdx_Net$HttpRequest_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket,
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket,
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_newClientSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket,
	(void *) M_com_thelogicmaster_switchgdx_SwitchNet_openURI_java_lang_String_R_boolean,
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
	{ "sendHttpRequest", "(Lcom/badlogic/gdx/Net$HttpRequest;Lcom/badlogic/gdx/Net$HttpResponseListener;)V" },
	{ "cancelHttpRequest", "(Lcom/badlogic/gdx/Net$HttpRequest;)V" },
	{ "isHttpRequestPending", "(Lcom/badlogic/gdx/Net$HttpRequest;)Z" },
	{ "newServerSocket", "(Lcom/badlogic/gdx/Net$Protocol;Ljava/lang/String;ILcom/badlogic/gdx/net/ServerSocketHints;)Lcom/badlogic/gdx/net/ServerSocket;" },
	{ "newServerSocket", "(Lcom/badlogic/gdx/Net$Protocol;ILcom/badlogic/gdx/net/ServerSocketHints;)Lcom/badlogic/gdx/net/ServerSocket;" },
	{ "newClientSocket", "(Lcom/badlogic/gdx/Net$Protocol;Ljava/lang/String;ILcom/badlogic/gdx/net/SocketHints;)Lcom/badlogic/gdx/net/Socket;" },
	{ "openURI", "(Ljava/lang/String;)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Net, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchNet, 0, "()V", 1 },
	{ "sendHttpRequest", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener, "(Lcom/badlogic/gdx/Net$HttpRequest;Lcom/badlogic/gdx/Net$HttpResponseListener;)V", 1 },
	{ "cancelHttpRequest", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_cancelHttpRequest_com_badlogic_gdx_Net$HttpRequest, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_cancelHttpRequest_com_badlogic_gdx_Net$HttpRequest, "(Lcom/badlogic/gdx/Net$HttpRequest;)V", 1 },
	{ "isHttpRequestPending", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_isHttpRequestPending_com_badlogic_gdx_Net$HttpRequest_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_isHttpRequestPending_com_badlogic_gdx_Net$HttpRequest_R_boolean, "(Lcom/badlogic/gdx/Net$HttpRequest;)Z", 1 },
	{ "newServerSocket", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket, "(Lcom/badlogic/gdx/Net$Protocol;Ljava/lang/String;ILcom/badlogic/gdx/net/ServerSocketHints;)Lcom/badlogic/gdx/net/ServerSocket;", 1 },
	{ "newServerSocket", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_newServerSocket_com_badlogic_gdx_Net$Protocol_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket, "(Lcom/badlogic/gdx/Net$Protocol;ILcom/badlogic/gdx/net/ServerSocketHints;)Lcom/badlogic/gdx/net/ServerSocket;", 1 },
	{ "newClientSocket", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_newClientSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_newClientSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket, "(Lcom/badlogic/gdx/Net$Protocol;Ljava/lang/String;ILcom/badlogic/gdx/net/SocketHints;)Lcom/badlogic/gdx/net/Socket;", 1 },
	{ "openURI", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchNet_openURI_java_lang_String_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchNet_openURI_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 257 },
};

Class class_com_thelogicmaster_switchgdx_SwitchNet{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchNet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchNet),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchNet,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchNet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchNet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchNet = registerClass(&class_com_thelogicmaster_switchgdx_SwitchNet);

}

