#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "java/lang/Object.h"
#include "java/lang/Float.h"
#include "java/lang/Double.h"

extern "C" {


void mark_com_badlogic_gdx_utils_NumberUtils(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_NumberUtils *) object;
}

void clinit_com_badlogic_gdx_utils_NumberUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_NumberUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:floatToIntBits", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(21);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:floatToRawIntBits", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(25);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_NumberUtils_floatToIntColor_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:floatToIntColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[0].f));
	frame[1].i = temp0;
	LINE_NUMBER(33);
	frame[1].i = ((frame[1].i) | ((jint(((jfloat((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))))) * (jfloat(1.003937f))))) << (24)));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:intToFloatColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(41);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, ((frame[0].i) & (jint(-16777217))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_utils_NumberUtils_intBitsToFloat_int_R_float(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:intBitsToFloat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_com_badlogic_gdx_utils_NumberUtils_doubleToLongBits_double_R_long(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:doubleToLongBits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(49);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_com_badlogic_gdx_utils_NumberUtils_longBitsToDouble_long_R_double(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/NumberUtils:longBitsToDouble", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_NumberUtils(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(53);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (frame[0].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_NumberUtils[] {
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
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_NumberUtils, 0, "()V", 1 },
	{ "floatToIntBits", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_floatToIntBits_float_R_int, 0, "(F)I", 9 },
	{ "floatToRawIntBits", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int, 0, "(F)I", 9 },
	{ "floatToIntColor", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_floatToIntColor_float_R_int, 0, "(F)I", 9 },
	{ "intToFloatColor", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float, 0, "(I)F", 9 },
	{ "intBitsToFloat", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_intBitsToFloat_int_R_float, 0, "(I)F", 9 },
	{ "doubleToLongBits", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_doubleToLongBits_double_R_long, 0, "(D)J", 9 },
	{ "longBitsToDouble", (intptr_t) SM_com_badlogic_gdx_utils_NumberUtils_longBitsToDouble_long_R_double, 0, "(J)D", 9 },
};

Class class_com_badlogic_gdx_utils_NumberUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/NumberUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_NumberUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_NumberUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_NumberUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_NumberUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_NumberUtils = registerClass(&class_com_badlogic_gdx_utils_NumberUtils);

}

