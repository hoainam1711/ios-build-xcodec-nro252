#include "com/badlogic/gdx/net/SocketHints.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/net/SocketHints.h"

extern "C" {


void mark_com_badlogic_gdx_net_SocketHints(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_net_SocketHints *) object;
}

void clinit_com_badlogic_gdx_net_SocketHints(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_net_SocketHints(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/net/SocketHints:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_net_SocketHints(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_connectTimeout = (5000);
	LINE_NUMBER(34);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_performancePrefConnectionTime = (jint(0));
	LINE_NUMBER(35);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_performancePrefLatency = (jint(1));
	LINE_NUMBER(36);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_performancePrefBandwidth = (jint(0));
	LINE_NUMBER(48);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_trafficClass = (20);
	LINE_NUMBER(50);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_keepAlive = (jint(1));
	LINE_NUMBER(52);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_tcpNoDelay = (jint(1));
	LINE_NUMBER(54);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_sendBufferSize = (4096);
	LINE_NUMBER(56);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_receiveBufferSize = (4096);
	LINE_NUMBER(58);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_linger = (jint(0));
	LINE_NUMBER(60);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_lingerDuration = (jint(0));
	LINE_NUMBER(63);
	((com_badlogic_gdx_net_SocketHints *) NULL_CHECK((frame[0].o)))->F_socketTimeout = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_net_SocketHints[] {
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
};

static FieldMetadata fields[] {
	{ "connectTimeout", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_connectTimeout), "I", 1 },
	{ "performancePrefConnectionTime", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_performancePrefConnectionTime), "I", 1 },
	{ "performancePrefLatency", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_performancePrefLatency), "I", 1 },
	{ "performancePrefBandwidth", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_performancePrefBandwidth), "I", 1 },
	{ "trafficClass", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_trafficClass), "I", 1 },
	{ "keepAlive", &class_boolean, offsetof(com_badlogic_gdx_net_SocketHints, F_keepAlive), "Z", 1 },
	{ "tcpNoDelay", &class_boolean, offsetof(com_badlogic_gdx_net_SocketHints, F_tcpNoDelay), "Z", 1 },
	{ "sendBufferSize", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_sendBufferSize), "I", 1 },
	{ "receiveBufferSize", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_receiveBufferSize), "I", 1 },
	{ "linger", &class_boolean, offsetof(com_badlogic_gdx_net_SocketHints, F_linger), "Z", 1 },
	{ "lingerDuration", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_lingerDuration), "I", 1 },
	{ "socketTimeout", &class_int, offsetof(com_badlogic_gdx_net_SocketHints, F_socketTimeout), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_net_SocketHints, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_net_SocketHints{
		.nativeName = (intptr_t) "com/badlogic/gdx/net/SocketHints",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_net_SocketHints),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_net_SocketHints,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_net_SocketHints,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_net_SocketHints,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_net_SocketHints = registerClass(&class_com_badlogic_gdx_net_SocketHints);

}

