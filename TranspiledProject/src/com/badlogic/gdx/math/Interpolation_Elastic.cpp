#include "com/badlogic/gdx/math/Interpolation_Elastic.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/math/Interpolation_Elastic.h"

extern "C" {


void mark_com_badlogic_gdx_math_Interpolation$Elastic(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Interpolation$Elastic *) object;
}

void clinit_com_badlogic_gdx_math_Interpolation$Elastic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
}

void init_com_badlogic_gdx_math_Interpolation$Elastic_float_float_int_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$Elastic:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Interpolation$Elastic(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(247);
	init_com_badlogic_gdx_math_Interpolation(ctx, (frame[0].o));
	LINE_NUMBER(248);
	((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(249);
	((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_power = (frame[2].f);
	LINE_NUMBER(250);
	((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_scale = (frame[4].f);
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat((frame[3].i))) * (jfloat(3.1415927f));
	sp[1].f = temp0;
	sp += 2;
	if (((frame[3].i) % (jint(2))) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 3;
	((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK(sp[0].o))->F_bounces = (sp[1].f * (jfloat(sp[2].i)));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Interpolation$Elastic:apply", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(255);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(256);
	frame[1].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(257);
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble((((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_power) * ((frame[1].f) - (jfloat(1)))))));
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_bounces)));
	popStackFrame(ctx);
	return (((temp1 * temp2) * ((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_scale)) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(259);
	frame[1].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(260);
	frame[1].f = ((frame[1].f) * (jfloat(2)));
	LINE_NUMBER(261);
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_value))), (jdouble((((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_power) * ((frame[1].f) - (jfloat(1)))))));
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sin_float_R_float(ctx, ((frame[1].f) * ((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_bounces)));
	popStackFrame(ctx);
	return (temp0 - (((temp2 * temp3) * ((jfloat)((com_badlogic_gdx_math_Interpolation$Elastic *) NULL_CHECK((frame[0].o)))->F_scale)) / (jfloat(2))));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Interpolation$Elastic[] {
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
	(void *) M_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float,
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
	{ "value", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Elastic, F_value), "F", 16 },
	{ "power", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Elastic, F_power), "F", 16 },
	{ "scale", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Elastic, F_scale), "F", 16 },
	{ "bounces", &class_float, offsetof(com_badlogic_gdx_math_Interpolation$Elastic, F_bounces), "F", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Interpolation$Elastic_float_float_int_float, 0, "(FFIF)V", 1 },
	{ "apply", (intptr_t) M_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float, VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float, "(F)F", 1 },
};

Class class_com_badlogic_gdx_math_Interpolation$Elastic{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Interpolation$Elastic",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_math_Interpolation,
		.size = sizeof(com_badlogic_gdx_math_Interpolation$Elastic),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Interpolation$Elastic,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Interpolation$Elastic,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Interpolation$Elastic,
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
static bool registered_com_badlogic_gdx_math_Interpolation$Elastic = registerClass(&class_com_badlogic_gdx_math_Interpolation$Elastic);

}

