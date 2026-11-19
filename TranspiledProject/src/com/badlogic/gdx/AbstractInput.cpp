#include "com/badlogic/gdx/AbstractInput.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/utils/IntSet.h"
#include "com/badlogic/gdx/AbstractInput.h"

extern "C" {


void mark_com_badlogic_gdx_AbstractInput(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_AbstractInput *) object;
	if (self->F_pressedKeys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pressedKeys)->clazz)->markFunction)((jobject) self->F_pressedKeys, mark, depth + 1);
	if (self->F_justPressedKeys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justPressedKeys)->clazz)->markFunction)((jobject) self->F_justPressedKeys, mark, depth + 1);
	if (self->F_keysToCatch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keysToCatch)->clazz)->markFunction)((jobject) self->F_keysToCatch, mark, depth + 1);
}

void clinit_com_badlogic_gdx_AbstractInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_AbstractInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractInput:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_AbstractInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntSet);
	init_com_badlogic_gdx_utils_IntSet(ctx, sp[1].o);
	((com_badlogic_gdx_AbstractInput *) NULL_CHECK(sp[0].o))->F_keysToCatch = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (256));
	((com_badlogic_gdx_AbstractInput *) NULL_CHECK(sp[0].o))->F_pressedKeys = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (256));
	((com_badlogic_gdx_AbstractInput *) NULL_CHECK(sp[0].o))->F_justPressedKeys = (jref) sp[1].o;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractInput:isKeyPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(20);
	if ((frame[1].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(21);
	if (((jint)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_pressedKeyCount) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(23);
	if ((frame[1].i) < 0) goto label_5;
	}
	{
	if ((frame[1].i) <= (255)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_pressedKeys;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractInput:isKeyJustPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	if ((frame[1].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_keyJustPressed);
	}
label_1:;
	{
	LINE_NUMBER(34);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) <= (255)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_justPressedKeys;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractInput:setCatchKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_keysToCatch;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_keysToCatch;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_3:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractInput:isCatchKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_AbstractInput *) NULL_CHECK((frame[0].o)))->F_keysToCatch;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_AbstractInput[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean,
	(void *) M_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_Input_closeTextInputField_boolean,
	(void *) M_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback,
	(void *) M_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean,
	(void *) M_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean,
	(void *) nullptr,
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
	{ "getAccelerometerX", "()F" },
	{ "getAccelerometerY", "()F" },
	{ "getAccelerometerZ", "()F" },
	{ "getGyroscopeX", "()F" },
	{ "getGyroscopeY", "()F" },
	{ "getGyroscopeZ", "()F" },
	{ "getMaxPointers", "()I" },
	{ "getX", "()I" },
	{ "getX", "(I)I" },
	{ "getDeltaX", "()I" },
	{ "getDeltaX", "(I)I" },
	{ "getY", "()I" },
	{ "getY", "(I)I" },
	{ "getDeltaY", "()I" },
	{ "getDeltaY", "(I)I" },
	{ "isTouched", "()Z" },
	{ "justTouched", "()Z" },
	{ "isTouched", "(I)Z" },
	{ "getPressure", "()F" },
	{ "getPressure", "(I)F" },
	{ "isButtonPressed", "(I)Z" },
	{ "isButtonJustPressed", "(I)Z" },
	{ "isKeyPressed", "(I)Z" },
	{ "isKeyJustPressed", "(I)Z" },
	{ "getTextInput", "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "getTextInput", "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)V" },
	{ "setOnscreenKeyboardVisible", "(Z)V" },
	{ "setOnscreenKeyboardVisible", "(ZLcom/badlogic/gdx/Input$OnscreenKeyboardType;)V" },
	{ "openTextInputField", "(Lcom/badlogic/gdx/input/NativeInputConfiguration;)V" },
	{ "closeTextInputField", "(Z)V" },
	{ "closeTextInputField", "(ZLcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;)V" },
	{ "isTextInputFieldOpened", "()Z" },
	{ "setKeyboardHeightObserver", "(Lcom/badlogic/gdx/Input$KeyboardHeightObserver;)V" },
	{ "vibrate", "(I)V" },
	{ "vibrate", "(IZ)V" },
	{ "vibrate", "(IIZ)V" },
	{ "vibrate", "(Lcom/badlogic/gdx/Input$VibrationType;)V" },
	{ "getAzimuth", "()F" },
	{ "getPitch", "()F" },
	{ "getRoll", "()F" },
	{ "getRotationMatrix", "([F)V" },
	{ "getCurrentEventTime", "()J" },
	{ "setCatchKey", "(IZ)V" },
	{ "isCatchKey", "(I)Z" },
	{ "setInputProcessor", "(Lcom/badlogic/gdx/InputProcessor;)V" },
	{ "getInputProcessor", "()Lcom/badlogic/gdx/InputProcessor;" },
	{ "isPeripheralAvailable", "(Lcom/badlogic/gdx/Input$Peripheral;)Z" },
	{ "getRotation", "()I" },
	{ "getNativeOrientation", "()Lcom/badlogic/gdx/Input$Orientation;" },
	{ "setCursorCatched", "(Z)V" },
	{ "isCursorCatched", "()Z" },
	{ "setCursorPosition", "(II)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Input, };

static FieldMetadata fields[] {
	{ "pressedKeys", getArrayClass(&class_boolean, 1), offsetof(com_badlogic_gdx_AbstractInput, F_pressedKeys), "[Z", 20 },
	{ "justPressedKeys", getArrayClass(&class_boolean, 1), offsetof(com_badlogic_gdx_AbstractInput, F_justPressedKeys), "[Z", 20 },
	{ "keysToCatch", &class_com_badlogic_gdx_utils_IntSet, offsetof(com_badlogic_gdx_AbstractInput, F_keysToCatch), "Lcom/badlogic/gdx/utils/IntSet;", 18 },
	{ "pressedKeyCount", &class_int, offsetof(com_badlogic_gdx_AbstractInput, F_pressedKeyCount), "I", 4 },
	{ "keyJustPressed", &class_boolean, offsetof(com_badlogic_gdx_AbstractInput, F_keyJustPressed), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_AbstractInput, 0, "()V", 1 },
	{ "isKeyPressed", (intptr_t) M_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean, VTABLE_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean, "(I)Z", 1 },
	{ "isKeyJustPressed", (intptr_t) M_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean, VTABLE_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean, "(I)Z", 1 },
	{ "setCatchKey", (intptr_t) M_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean, VTABLE_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean, "(IZ)V", 1 },
	{ "isCatchKey", (intptr_t) M_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean, VTABLE_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean, "(I)Z", 1 },
};

Class class_com_badlogic_gdx_AbstractInput{
		.nativeName = (intptr_t) "com/badlogic/gdx/AbstractInput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_AbstractInput),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_AbstractInput,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_AbstractInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_AbstractInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_AbstractInput = registerClass(&class_com_badlogic_gdx_AbstractInput);

}

