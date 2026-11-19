#include "com/badlogic/gdx/Net.h"
#include "com/badlogic/gdx/net/ServerSocketHints.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/net/SocketHints.h"
#include "com/badlogic/gdx/Net_HttpMethods.h"
#include "com/badlogic/gdx/Net_HttpResponse.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/net/Socket.h"
#include "com/badlogic/gdx/Net_Protocol.h"
#include "com/badlogic/gdx/Net.h"
#include "com/badlogic/gdx/Net_HttpRequest.h"
#include "com/badlogic/gdx/net/ServerSocket.h"
#include "com/badlogic/gdx/Net_HttpResponseListener.h"

extern "C" {


void mark_com_badlogic_gdx_Net(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Net *) object;
}

void clinit_com_badlogic_gdx_Net(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_Net[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_Net$Protocol,
	&class_com_badlogic_gdx_Net$HttpResponseListener,
	&class_com_badlogic_gdx_Net$HttpRequest,
	&class_com_badlogic_gdx_Net$HttpMethods,
	&class_com_badlogic_gdx_Net$HttpResponse,
};

static MethodMetadata methods[] {
	{ "sendHttpRequest", 0, INDEX_com_badlogic_gdx_Net_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener, "(Lcom/badlogic/gdx/Net$HttpRequest;Lcom/badlogic/gdx/Net$HttpResponseListener;)V", 1025 },
	{ "cancelHttpRequest", 0, INDEX_com_badlogic_gdx_Net_cancelHttpRequest_com_badlogic_gdx_Net$HttpRequest, "(Lcom/badlogic/gdx/Net$HttpRequest;)V", 1025 },
	{ "isHttpRequestPending", 0, INDEX_com_badlogic_gdx_Net_isHttpRequestPending_com_badlogic_gdx_Net$HttpRequest_R_boolean, "(Lcom/badlogic/gdx/Net$HttpRequest;)Z", 1025 },
	{ "newServerSocket", 0, INDEX_com_badlogic_gdx_Net_newServerSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket, "(Lcom/badlogic/gdx/Net$Protocol;Ljava/lang/String;ILcom/badlogic/gdx/net/ServerSocketHints;)Lcom/badlogic/gdx/net/ServerSocket;", 1025 },
	{ "newServerSocket", 0, INDEX_com_badlogic_gdx_Net_newServerSocket_com_badlogic_gdx_Net$Protocol_int_com_badlogic_gdx_net_ServerSocketHints_R_com_badlogic_gdx_net_ServerSocket, "(Lcom/badlogic/gdx/Net$Protocol;ILcom/badlogic/gdx/net/ServerSocketHints;)Lcom/badlogic/gdx/net/ServerSocket;", 1025 },
	{ "newClientSocket", 0, INDEX_com_badlogic_gdx_Net_newClientSocket_com_badlogic_gdx_Net$Protocol_java_lang_String_int_com_badlogic_gdx_net_SocketHints_R_com_badlogic_gdx_net_Socket, "(Lcom/badlogic/gdx/Net$Protocol;Ljava/lang/String;ILcom/badlogic/gdx/net/SocketHints;)Lcom/badlogic/gdx/net/Socket;", 1025 },
	{ "openURI", 0, INDEX_com_badlogic_gdx_Net_openURI_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
};

Class class_com_badlogic_gdx_Net{
		.nativeName = (intptr_t) "com/badlogic/gdx/Net",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Net),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Net,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Net,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Net,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Net = registerClass(&class_com_badlogic_gdx_Net);

}

