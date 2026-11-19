#include "lib/network/IWebSocketBridge.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "lib/network/IWebSocketBridge.h"
#include "lib/network/IWebSocketBridge_IWebSocketListener.h"

extern "C" {


void mark_lib_network_IWebSocketBridge(jobject object, jint mark, jint depth) {
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
	auto self = (lib_network_IWebSocketBridge *) object;
}

void clinit_lib_network_IWebSocketBridge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_lib_network_IWebSocketBridge[] {
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
	{ "connect", "(Ljava/lang/String;Ljava/lang/String;I)V" },
	{ "send", "([B)V" },
	{ "close", "()V" },
	{ "isConnected", "()Z" },
	{ "setListener", "(Llib/network/IWebSocketBridge$IWebSocketListener;)V" },
};

static jclass innerClasses[] {
	&class_lib_network_IWebSocketBridge$IWebSocketListener,
};

static MethodMetadata methods[] {
	{ "connect", 0, INDEX_lib_network_IWebSocketBridge_connect_java_lang_String_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;I)V", 1025 },
	{ "send", 0, INDEX_lib_network_IWebSocketBridge_send_Array1_byte, "([B)V", 1025 },
	{ "close", 0, INDEX_lib_network_IWebSocketBridge_close, "()V", 1025 },
	{ "isConnected", 0, INDEX_lib_network_IWebSocketBridge_isConnected_R_boolean, "()Z", 1025 },
	{ "setListener", 0, INDEX_lib_network_IWebSocketBridge_setListener_lib_network_IWebSocketBridge$IWebSocketListener, "(Llib/network/IWebSocketBridge$IWebSocketListener;)V", 1025 },
};

Class class_lib_network_IWebSocketBridge{
		.nativeName = (intptr_t) "lib/network/IWebSocketBridge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_network_IWebSocketBridge),
		.classVtable = (intptr_t) vtable_lib_network_IWebSocketBridge,
		.staticInitializer = (intptr_t) clinit_lib_network_IWebSocketBridge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_network_IWebSocketBridge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_network_IWebSocketBridge = registerClass(&class_lib_network_IWebSocketBridge);

}

