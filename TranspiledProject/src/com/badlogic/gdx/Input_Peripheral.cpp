#include "com/badlogic/gdx/Input_Peripheral.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input_Peripheral.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard;
jobject SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard;
jobject SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen;
jobject SF_com_badlogic_gdx_Input$Peripheral_Accelerometer;
jobject SF_com_badlogic_gdx_Input$Peripheral_Compass;
jobject SF_com_badlogic_gdx_Input$Peripheral_Vibrator;
jobject SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback;
jobject SF_com_badlogic_gdx_Input$Peripheral_Gyroscope;
jobject SF_com_badlogic_gdx_Input$Peripheral_RotationVector;
jobject SF_com_badlogic_gdx_Input$Peripheral_Pressure;
jobject SF_com_badlogic_gdx_Input$Peripheral_$VALUES;

void mark_com_badlogic_gdx_Input$Peripheral(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_Accelerometer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_Accelerometer)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_Accelerometer, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_Compass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_Compass)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_Compass, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_Vibrator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_Vibrator)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_Vibrator, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_Gyroscope)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_Gyroscope)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_Gyroscope, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_RotationVector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_RotationVector)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_RotationVector, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_Pressure)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_Pressure)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_Pressure, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$Peripheral_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$Peripheral_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$Peripheral_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_Input$Peripheral *) object;
}

jobject SM_com_badlogic_gdx_Input$Peripheral_values_R_Array1_com_badlogic_gdx_Input$Peripheral(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Peripheral:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	{
	LINE_NUMBER(650);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_Input$Peripheral, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Input$Peripheral_valueOf_java_lang_String_R_com_badlogic_gdx_Input$Peripheral(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Peripheral:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_Input$Peripheral)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_Input$Peripheral, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Peripheral:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(650);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Input$Peripheral_$values_R_Array1_com_badlogic_gdx_Input$Peripheral(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Peripheral:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_Input$Peripheral, (10));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_Accelerometer;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_Compass;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_Vibrator;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_Gyroscope;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_RotationVector;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$Peripheral_Pressure;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_Input$Peripheral(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$Peripheral:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	{
	LINE_NUMBER(651);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HardwareKeyboard"_j))), (jint(0)));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OnscreenKeyboard"_j))), (jint(1)));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MultitouchScreen"_j))), (jint(2)));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Accelerometer"_j))), (jint(3)));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_Accelerometer = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Compass"_j))), (jint(4)));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_Compass = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Vibrator"_j))), (jint(5)));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_Vibrator = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HapticFeedback"_j))), (6));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Gyroscope"_j))), (7));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_Gyroscope = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RotationVector"_j))), (8));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_RotationVector = sp[0].o;
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$Peripheral);
	init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pressure"_j))), (9));
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_Pressure = sp[0].o;
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_com_badlogic_gdx_Input$Peripheral_$values_R_Array1_com_badlogic_gdx_Input$Peripheral(ctx);
	clinit_com_badlogic_gdx_Input$Peripheral(ctx);
	SF_com_badlogic_gdx_Input$Peripheral_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Input$Peripheral[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "HardwareKeyboard", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_HardwareKeyboard, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "OnscreenKeyboard", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_OnscreenKeyboard, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "MultitouchScreen", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_MultitouchScreen, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "Accelerometer", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_Accelerometer, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "Compass", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_Compass, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "Vibrator", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_Vibrator, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "HapticFeedback", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_HapticFeedback, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "Gyroscope", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_Gyroscope, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "RotationVector", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_RotationVector, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "Pressure", &class_com_badlogic_gdx_Input$Peripheral, (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_Pressure, "Lcom/badlogic/gdx/Input$Peripheral;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_Input$Peripheral, 1), (intptr_t) &SF_com_badlogic_gdx_Input$Peripheral_$VALUES, "[Lcom/badlogic/gdx/Input$Peripheral;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_Input$Peripheral_values_R_Array1_com_badlogic_gdx_Input$Peripheral, 0, "()[Lcom/badlogic/gdx/Input$Peripheral;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_Input$Peripheral_valueOf_java_lang_String_R_com_badlogic_gdx_Input$Peripheral, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/Input$Peripheral;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Input$Peripheral_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_Input$Peripheral_$values_R_Array1_com_badlogic_gdx_Input$Peripheral, 0, "()[Lcom/badlogic/gdx/Input$Peripheral;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_Input$Peripheral, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_Input$Peripheral{
		.nativeName = (intptr_t) "com/badlogic/gdx/Input$Peripheral",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_Input$Peripheral),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Input$Peripheral,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Input$Peripheral,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Input$Peripheral,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Input,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Input$Peripheral = registerClass(&class_com_badlogic_gdx_Input$Peripheral);

}

