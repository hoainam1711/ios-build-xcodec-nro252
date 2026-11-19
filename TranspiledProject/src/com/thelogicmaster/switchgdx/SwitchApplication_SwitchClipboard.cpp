#include "com/thelogicmaster/switchgdx/SwitchApplication_SwitchClipboard.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "java/lang/String.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_SwitchClipboard.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_1.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$SwitchClipboard:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(326);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_com_thelogicmaster_switchgdx_SwitchApplication$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$SwitchClipboard:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(326);
	init_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_hasContents_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_getContents_R_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_setContents_java_lang_String,
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
	{ "hasContents", "()Z" },
	{ "getContents", "()Ljava/lang/String;" },
	{ "setContents", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Clipboard, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard, 0, "()V", 2 },
	{ "hasContents", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_hasContents_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_hasContents_R_boolean, "()Z", 257 },
	{ "getContents", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_getContents_R_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_getContents_R_java_lang_String, "()Ljava/lang/String;", 257 },
	{ "setContents", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_setContents_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_setContents_java_lang_String, "(Ljava/lang/String;)V", 257 },
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard_com_thelogicmaster_switchgdx_SwitchApplication$1, 0, "(Lcom/thelogicmaster/switchgdx/SwitchApplication$1;)V", 4096 },
};

Class class_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchApplication$SwitchClipboard",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_thelogicmaster_switchgdx_SwitchApplication,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard = registerClass(&class_com_thelogicmaster_switchgdx_SwitchApplication$SwitchClipboard);

}

