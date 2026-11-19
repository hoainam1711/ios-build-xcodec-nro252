#include "nro/IMessageHandler.h"
#include "java/lang/Object.h"
#include "nro/Message.h"
#include "nro/IMessageHandler.h"

extern "C" {


void mark_nro_IMessageHandler(jobject object, jint mark, jint depth) {
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
	auto self = (nro_IMessageHandler *) object;
}

void clinit_nro_IMessageHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_nro_IMessageHandler[] {
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
	{ "onMessage", "(Lnro/Message;)V" },
	{ "onConnectionFail", "(Z)V" },
	{ "onDisconnected", "(Z)V" },
	{ "onConnectOK", "(Z)V" },
};

static MethodMetadata methods[] {
	{ "onMessage", 0, INDEX_nro_IMessageHandler_onMessage_nro_Message, "(Lnro/Message;)V", 1025 },
	{ "onConnectionFail", 0, INDEX_nro_IMessageHandler_onConnectionFail_boolean, "(Z)V", 1025 },
	{ "onDisconnected", 0, INDEX_nro_IMessageHandler_onDisconnected_boolean, "(Z)V", 1025 },
	{ "onConnectOK", 0, INDEX_nro_IMessageHandler_onConnectOK_boolean, "(Z)V", 1025 },
};

Class class_nro_IMessageHandler{
		.nativeName = (intptr_t) "nro/IMessageHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_IMessageHandler),
		.classVtable = (intptr_t) vtable_nro_IMessageHandler,
		.staticInitializer = (intptr_t) clinit_nro_IMessageHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_IMessageHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_IMessageHandler = registerClass(&class_nro_IMessageHandler);

}

