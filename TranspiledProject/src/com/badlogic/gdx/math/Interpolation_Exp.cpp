#include "com/badlogic/gdx/math/Interpolation_Exp.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Interpolation_Exp.h"

extern "C" {


void mark_com_badlogic_gdx_math_Interpolation$Exp(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_math_Interpolation(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_math_Interpolation$Exp *) object;
}

void clinit_com_badlogic_gdx_math_Interpolation$Exp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
}

void init_com_badlogic_gdx_math_Interpolation$Exp_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$Exp:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation$Exp(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(209);
	init_com_badlogic_gdx_math_Interpolation(ctx, (frame[0].o));
	LINE_NUMBER(210);
	((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(211);
	((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_power = (frame[2].f);
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble((frame[1].f))), (jdouble((-(frame[2].f)))));
	((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK(sp[0].o))->F_min = (jfloat(temp0));
	LINE_NUMBER(213);
	((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_scale = ((jfloat(1)) / ((jfloat(1)) - ((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_min)));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Interpolation$Exp_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$Exp:apply", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(217);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble((((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_power) * (((frame[1].f) * (jfloat(2))) - (jfloat(1)))))));
	popStackFrame(ctx);
	return ((((jfloat(temp0)) - ((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_min)) * ((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_scale)) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(218);
	jfloat temp0 = jfloat(2);
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble(((-((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_power)) * (((frame[1].f) * (jfloat(2))) - (jfloat(1)))))));
	popStackFrame(ctx);
	return ((temp0 - (((jfloat(temp1)) - ((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_min)) * ((jfloat)((com_badlogic_gdx_math_Interpolation$Exp *) NULL_CHECK((frame[0].o)))->F_scale))) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Interpolation$Exp[] {
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
	(void *) M_com_badlogic_gdx_math_Interpolation$Exp_apply_float_R_float,
	(void *) M_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float,
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
	{ "apply", "(F)F" },
	{ "apply", "(FFF)F" },
};

static FieldMetadata fields[] {
	{ "value", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Exp, F_value), "F", 16 },
	{ "power", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Exp, F_power), "F", 16 },
	{ "min", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Exp, F_min), "F", 16 },
	{ "scale", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Exp, F_scale), "F", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation$Exp_float_float, 0, "(FF)V", 1 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_math_Interpolation$Exp_apply_float_R_float, VTABLE_com_badlogic_gdx_math_Interpolation$Exp_apply_float_R_float, "(F)F", 1 },
};

Class class_com_badlogic_gdx_math_Interpolation$Exp{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Interpolation$Exp",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.size = sizeof(com_badlogic_gdx_math_Interpolation$Exp),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Interpolation$Exp,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Interpolation$Exp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Interpolation$Exp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Interpolation$Exp = registerClass(&class_com_badlogic_gdx_math_Interpolation$Exp);

}

