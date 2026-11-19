#include "com/thelogicmaster/switchgdx/SwitchSound_SoundInstance.h"
#include "com/thelogicmaster/switchgdx/SwitchSound.h"
#include "java/lang/Object.h"
#include "com/thelogicmaster/switchgdx/SwitchSound_SoundInstance.h"
#include "com/thelogicmaster/switchgdx/SwitchSound_1.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchSound$SoundInstance *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound$SoundInstance:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_com_thelogicmaster_switchgdx_SwitchSound$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchSound$SoundInstance:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance[] {
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
	{ "channel", &class_int, offsetof(com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, F_channel), "I", 0 },
	{ "looping", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, F_looping), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_com_thelogicmaster_switchgdx_SwitchSound$1, 0, "(Lcom/thelogicmaster/switchgdx/SwitchSound$1;)V", 4096 },
};

Class class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchSound$SoundInstance",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchSound$SoundInstance),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_thelogicmaster_switchgdx_SwitchSound,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance = registerClass(&class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance);

}

