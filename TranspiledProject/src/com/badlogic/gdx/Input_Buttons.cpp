#include "com/badlogic/gdx/Input_Buttons.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"

extern "C" {

jint SF_com_badlogic_gdx_Input$Buttons_LEFT;
jint SF_com_badlogic_gdx_Input$Buttons_RIGHT;
jint SF_com_badlogic_gdx_Input$Buttons_MIDDLE;
jint SF_com_badlogic_gdx_Input$Buttons_BACK;
jint SF_com_badlogic_gdx_Input$Buttons_FORWARD;

void mark_com_badlogic_gdx_Input$Buttons(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Input$Buttons *) object;
}

void clinit_com_badlogic_gdx_Input$Buttons(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_Input$Buttons_LEFT = jint(0);
	SF_com_badlogic_gdx_Input$Buttons_RIGHT = jint(1);
	SF_com_badlogic_gdx_Input$Buttons_MIDDLE = jint(2);
	SF_com_badlogic_gdx_Input$Buttons_BACK = jint(3);
	SF_com_badlogic_gdx_Input$Buttons_FORWARD = jint(4);
}

void init_com_badlogic_gdx_Input$Buttons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Buttons:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Buttons(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Input$Buttons[] {
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
	{ "LEFT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Buttons_LEFT, "I", 25 },
	{ "RIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Buttons_RIGHT, "I", 25 },
	{ "MIDDLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Buttons_MIDDLE, "I", 25 },
	{ "BACK", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Buttons_BACK, "I", 25 },
	{ "FORWARD", &class_int, (intptr_t) &SF_com_badlogic_gdx_Input$Buttons_FORWARD, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Input$Buttons, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_Input$Buttons{
		.nativeName = (intptr_t) "com/badlogic/gdx/Input$Buttons",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Input$Buttons),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Input$Buttons,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Input$Buttons,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Input$Buttons,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Input,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Input$Buttons = registerClass(&class_com_badlogic_gdx_Input$Buttons);

}

