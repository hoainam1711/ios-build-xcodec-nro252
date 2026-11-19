#include "com/badlogic/gdx/InputAdapter.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/InputProcessor.h"
#include "com/badlogic/gdx/InputAdapter.h"

extern "C" {


void mark_com_badlogic_gdx_InputAdapter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_InputAdapter *) object;
}

void clinit_com_badlogic_gdx_InputAdapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_InputAdapter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_InputAdapter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:keyDown", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:keyUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:keyTyped", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:touchUp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:touchCancelled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:touchDragged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:mouseMoved", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/InputAdapter:scrolled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_InputAdapter[] {
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
	(void *) M_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean,
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
	{ "keyDown", "(I)Z" },
	{ "keyUp", "(I)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIII)Z" },
	{ "touchUp", "(IIII)Z" },
	{ "touchCancelled", "(IIII)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_InputProcessor, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_InputAdapter, 0, "()V", 1 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean, "(I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean, "(I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchCancelled", (intptr_t) M_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean, VTABLE_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean, "(FF)Z", 1 },
};

Class class_com_badlogic_gdx_InputAdapter{
		.nativeName = (intptr_t) "com/badlogic/gdx/InputAdapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_InputAdapter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_InputAdapter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_InputAdapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_InputAdapter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_InputAdapter = registerClass(&class_com_badlogic_gdx_InputAdapter);

}

