#include "com/thelogicmaster/switchgdx/SwitchGraphics_SwitchMonitor.h"
#include "com/thelogicmaster/switchgdx/SwitchGraphics.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics_Monitor.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_Graphics$Monitor(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_Graphics$Monitor(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchGraphics$SwitchMonitor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(320);
	init_com_badlogic_gdx_Graphics$Monitor_int_int_java_lang_String(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor_int_int_java_lang_String, 0, "(IILjava/lang/String;)V", 4 },
};

Class class_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchGraphics$SwitchMonitor",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_Graphics$Monitor,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_thelogicmaster_switchgdx_SwitchGraphics,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor = registerClass(&class_com_thelogicmaster_switchgdx_SwitchGraphics$SwitchMonitor);

}

