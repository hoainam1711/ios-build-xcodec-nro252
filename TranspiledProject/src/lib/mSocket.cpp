#include "lib/mSocket.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/DataInputStream.h"
#include "java/io/DataOutputStream.h"
#include "java/io/IOException.h"
#include "lib/mSocket.h"

extern "C" {

jobject SF_lib_mSocket_MESSAGE;

void mark_lib_mSocket(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_mSocket_MESSAGE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_mSocket_MESSAGE)->clazz)->markFunction)((jobject) SF_lib_mSocket_MESSAGE, mark, depth + 1);
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
	auto self = (lib_mSocket *) object;
}

void clinit_lib_mSocket(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_lib_mSocket_MESSAGE = ((jobject) createStringLiteral(ctx, u8"iOS Clearwing requires a WebSocket gateway. Direct TCP is unavailable."_j));
}

void init_lib_mSocket_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSocket:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_mSocket(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Clearwing requires a WebSocket gateway. Direct TCP is unavailable."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_lib_mSocket_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSocket:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_mSocket_setKeepAlive_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSocket:setKeepAlive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_lib_mSocket_getInputStream_R_java_io_DataInputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSocket:getInputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Clearwing requires a WebSocket gateway. Direct TCP is unavailable."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_lib_mSocket_getOutputStream_R_java_io_DataOutputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/mSocket:getOutputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS Clearwing requires a WebSocket gateway. Direct TCP is unavailable."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_lib_mSocket[] {
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
	(void *) M_lib_mSocket_close,
	(void *) M_lib_mSocket_setKeepAlive_boolean,
	(void *) M_lib_mSocket_getInputStream_R_java_io_DataInputStream,
	(void *) M_lib_mSocket_getOutputStream_R_java_io_DataOutputStream,
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
	{ "close", "()V" },
	{ "setKeepAlive", "(Z)V" },
	{ "getInputStream", "()Ljava/io/DataInputStream;" },
	{ "getOutputStream", "()Ljava/io/DataOutputStream;" },
};

static FieldMetadata fields[] {
	{ "MESSAGE", &class_java_lang_String, (intptr_t) &SF_lib_mSocket_MESSAGE, "Ljava/lang/String;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_mSocket_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "close", (intptr_t) M_lib_mSocket_close, VTABLE_lib_mSocket_close, "()V", 1 },
	{ "setKeepAlive", (intptr_t) M_lib_mSocket_setKeepAlive_boolean, VTABLE_lib_mSocket_setKeepAlive_boolean, "(Z)V", 1 },
	{ "getInputStream", (intptr_t) M_lib_mSocket_getInputStream_R_java_io_DataInputStream, VTABLE_lib_mSocket_getInputStream_R_java_io_DataInputStream, "()Ljava/io/DataInputStream;", 1 },
	{ "getOutputStream", (intptr_t) M_lib_mSocket_getOutputStream_R_java_io_DataOutputStream, VTABLE_lib_mSocket_getOutputStream_R_java_io_DataOutputStream, "()Ljava/io/DataOutputStream;", 1 },
};

Class class_lib_mSocket{
		.nativeName = (intptr_t) "lib/mSocket",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_mSocket),
		.classVtable = (intptr_t) vtable_lib_mSocket,
		.staticInitializer = (intptr_t) clinit_lib_mSocket,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_mSocket,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_mSocket = registerClass(&class_lib_mSocket);

}

