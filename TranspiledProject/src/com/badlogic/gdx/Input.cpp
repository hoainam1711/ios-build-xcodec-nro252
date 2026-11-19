#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "com/badlogic/gdx/Input_VibrationType.h"
#include "com/badlogic/gdx/Input_Keys.h"
#include "com/badlogic/gdx/Input_InputStringValidator.h"
#include "com/badlogic/gdx/Input_Orientation.h"
#include "com/badlogic/gdx/Input_Buttons.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/Input_Peripheral.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/InputProcessor.h"
#include "com/badlogic/gdx/Input_KeyboardHeightObserver.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration_NativeInputCloseCallback.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"

extern "C" {


void mark_com_badlogic_gdx_Input(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Input *) object;
}

void clinit_com_badlogic_gdx_Input(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_com_badlogic_gdx_Input_closeTextInputField_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input:closeTextInputField", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(810);
	((func_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, (frame[0].o)))(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input:closeTextInputField", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input:isTextInputFieldOpened", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(824);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Input[] {
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
	(void *) nullptr,
	(void *) nullptr,
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_Input$Orientation,
	&class_com_badlogic_gdx_Input$VibrationType,
	&class_com_badlogic_gdx_Input$OnscreenKeyboardType,
	&class_com_badlogic_gdx_Input$KeyboardHeightObserver,
	&class_com_badlogic_gdx_Input$InputStringValidator,
	&class_com_badlogic_gdx_Input$Peripheral,
	&class_com_badlogic_gdx_Input$Keys,
	&class_com_badlogic_gdx_Input$Buttons,
	&class_com_badlogic_gdx_Input$TextInputListener,
};

static MethodMetadata methods[] {
	{ "getAccelerometerX", 0, INDEX_com_badlogic_gdx_Input_getAccelerometerX_R_float, "()F", 1025 },
	{ "getAccelerometerY", 0, INDEX_com_badlogic_gdx_Input_getAccelerometerY_R_float, "()F", 1025 },
	{ "getAccelerometerZ", 0, INDEX_com_badlogic_gdx_Input_getAccelerometerZ_R_float, "()F", 1025 },
	{ "getGyroscopeX", 0, INDEX_com_badlogic_gdx_Input_getGyroscopeX_R_float, "()F", 1025 },
	{ "getGyroscopeY", 0, INDEX_com_badlogic_gdx_Input_getGyroscopeY_R_float, "()F", 1025 },
	{ "getGyroscopeZ", 0, INDEX_com_badlogic_gdx_Input_getGyroscopeZ_R_float, "()F", 1025 },
	{ "getMaxPointers", 0, INDEX_com_badlogic_gdx_Input_getMaxPointers_R_int, "()I", 1025 },
	{ "getX", 0, INDEX_com_badlogic_gdx_Input_getX_R_int, "()I", 1025 },
	{ "getX", 0, INDEX_com_badlogic_gdx_Input_getX_int_R_int, "(I)I", 1025 },
	{ "getDeltaX", 0, INDEX_com_badlogic_gdx_Input_getDeltaX_R_int, "()I", 1025 },
	{ "getDeltaX", 0, INDEX_com_badlogic_gdx_Input_getDeltaX_int_R_int, "(I)I", 1025 },
	{ "getY", 0, INDEX_com_badlogic_gdx_Input_getY_R_int, "()I", 1025 },
	{ "getY", 0, INDEX_com_badlogic_gdx_Input_getY_int_R_int, "(I)I", 1025 },
	{ "getDeltaY", 0, INDEX_com_badlogic_gdx_Input_getDeltaY_R_int, "()I", 1025 },
	{ "getDeltaY", 0, INDEX_com_badlogic_gdx_Input_getDeltaY_int_R_int, "(I)I", 1025 },
	{ "isTouched", 0, INDEX_com_badlogic_gdx_Input_isTouched_R_boolean, "()Z", 1025 },
	{ "justTouched", 0, INDEX_com_badlogic_gdx_Input_justTouched_R_boolean, "()Z", 1025 },
	{ "isTouched", 0, INDEX_com_badlogic_gdx_Input_isTouched_int_R_boolean, "(I)Z", 1025 },
	{ "getPressure", 0, INDEX_com_badlogic_gdx_Input_getPressure_R_float, "()F", 1025 },
	{ "getPressure", 0, INDEX_com_badlogic_gdx_Input_getPressure_int_R_float, "(I)F", 1025 },
	{ "isButtonPressed", 0, INDEX_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean, "(I)Z", 1025 },
	{ "isButtonJustPressed", 0, INDEX_com_badlogic_gdx_Input_isButtonJustPressed_int_R_boolean, "(I)Z", 1025 },
	{ "isKeyPressed", 0, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, "(I)Z", 1025 },
	{ "isKeyJustPressed", 0, INDEX_com_badlogic_gdx_Input_isKeyJustPressed_int_R_boolean, "(I)Z", 1025 },
	{ "getTextInput", 0, INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "getTextInput", 0, INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType, "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)V", 1025 },
	{ "setOnscreenKeyboardVisible", 0, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, "(Z)V", 1025 },
	{ "setOnscreenKeyboardVisible", 0, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType, "(ZLcom/badlogic/gdx/Input$OnscreenKeyboardType;)V", 1025 },
	{ "openTextInputField", 0, INDEX_com_badlogic_gdx_Input_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration, "(Lcom/badlogic/gdx/input/NativeInputConfiguration;)V", 1025 },
	{ "closeTextInputField", (intptr_t) M_com_badlogic_gdx_Input_closeTextInputField_boolean, INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean, "(Z)V", 1 },
	{ "closeTextInputField", (intptr_t) M_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, "(ZLcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;)V", 1 },
	{ "isTextInputFieldOpened", (intptr_t) M_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean, INDEX_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean, "()Z", 1 },
	{ "setKeyboardHeightObserver", 0, INDEX_com_badlogic_gdx_Input_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver, "(Lcom/badlogic/gdx/Input$KeyboardHeightObserver;)V", 1025 },
	{ "vibrate", 0, INDEX_com_badlogic_gdx_Input_vibrate_int, "(I)V", 1025 },
	{ "vibrate", 0, INDEX_com_badlogic_gdx_Input_vibrate_int_boolean, "(IZ)V", 1025 },
	{ "vibrate", 0, INDEX_com_badlogic_gdx_Input_vibrate_int_int_boolean, "(IIZ)V", 1025 },
	{ "vibrate", 0, INDEX_com_badlogic_gdx_Input_vibrate_com_badlogic_gdx_Input$VibrationType, "(Lcom/badlogic/gdx/Input$VibrationType;)V", 1025 },
	{ "getAzimuth", 0, INDEX_com_badlogic_gdx_Input_getAzimuth_R_float, "()F", 1025 },
	{ "getPitch", 0, INDEX_com_badlogic_gdx_Input_getPitch_R_float, "()F", 1025 },
	{ "getRoll", 0, INDEX_com_badlogic_gdx_Input_getRoll_R_float, "()F", 1025 },
	{ "getRotationMatrix", 0, INDEX_com_badlogic_gdx_Input_getRotationMatrix_Array1_float, "([F)V", 1025 },
	{ "getCurrentEventTime", 0, INDEX_com_badlogic_gdx_Input_getCurrentEventTime_R_long, "()J", 1025 },
	{ "setCatchKey", 0, INDEX_com_badlogic_gdx_Input_setCatchKey_int_boolean, "(IZ)V", 1025 },
	{ "isCatchKey", 0, INDEX_com_badlogic_gdx_Input_isCatchKey_int_R_boolean, "(I)Z", 1025 },
	{ "setInputProcessor", 0, INDEX_com_badlogic_gdx_Input_setInputProcessor_com_badlogic_gdx_InputProcessor, "(Lcom/badlogic/gdx/InputProcessor;)V", 1025 },
	{ "getInputProcessor", 0, INDEX_com_badlogic_gdx_Input_getInputProcessor_R_com_badlogic_gdx_InputProcessor, "()Lcom/badlogic/gdx/InputProcessor;", 1025 },
	{ "isPeripheralAvailable", 0, INDEX_com_badlogic_gdx_Input_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean, "(Lcom/badlogic/gdx/Input$Peripheral;)Z", 1025 },
	{ "getRotation", 0, INDEX_com_badlogic_gdx_Input_getRotation_R_int, "()I", 1025 },
	{ "getNativeOrientation", 0, INDEX_com_badlogic_gdx_Input_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation, "()Lcom/badlogic/gdx/Input$Orientation;", 1025 },
	{ "setCursorCatched", 0, INDEX_com_badlogic_gdx_Input_setCursorCatched_boolean, "(Z)V", 1025 },
	{ "isCursorCatched", 0, INDEX_com_badlogic_gdx_Input_isCursorCatched_R_boolean, "()Z", 1025 },
	{ "setCursorPosition", 0, INDEX_com_badlogic_gdx_Input_setCursorPosition_int_int, "(II)V", 1025 },
};

Class class_com_badlogic_gdx_Input{
		.nativeName = (intptr_t) "com/badlogic/gdx/Input",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Input),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Input,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Input,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Input,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 9,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Input = registerClass(&class_com_badlogic_gdx_Input);

}

