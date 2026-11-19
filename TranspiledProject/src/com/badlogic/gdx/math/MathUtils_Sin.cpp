#include "com/badlogic/gdx/math/MathUtils_Sin.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/math/MathUtils_Sin.h"

extern "C" {

jobject SF_com_badlogic_gdx_math_MathUtils$Sin_table;

void mark_com_badlogic_gdx_math_MathUtils$Sin(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_MathUtils$Sin_table)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_MathUtils$Sin_table)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_MathUtils$Sin_table, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_MathUtils$Sin *) object;
}

void init_com_badlogic_gdx_math_MathUtils$Sin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils$Sin:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_MathUtils$Sin(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/MathUtils$Sin:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject) createArray(ctx, &class_float, (16384));
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	SF_com_badlogic_gdx_math_MathUtils$Sin_table = sp[0].o;
	LINE_NUMBER(60);
	frame[0].i = (jint(0));
	}
label_2:;
	{
	if ((frame[0].i) >= (16384)) goto label_3;
	}
	{
	LINE_NUMBER(61);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	jint temp0 = frame[0].i;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((((jfloat((frame[0].i))) + (jfloat(0.5f))) / (jfloat(16384.0f))) * (jfloat(6.2831855f))))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(temp1));
	LINE_NUMBER(60);
	INST_IINC(0, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	ARRAY_ACCESS(jfloat, sp[0].o, (4096)) = (jfloat(1));
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	ARRAY_ACCESS(jfloat, sp[0].o, (8192)) = (jfloat(0));
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_math_MathUtils$Sin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_MathUtils$Sin_table;
	ARRAY_ACCESS(jfloat, sp[0].o, (12288)) = (jfloat(-1.0f));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_MathUtils$Sin[] {
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
	{ "table", getArrayClass(&class_float, 1), (intptr_t) &SF_com_badlogic_gdx_math_MathUtils$Sin_table, "[F", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_MathUtils$Sin, 0, "()V", 2 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_MathUtils$Sin, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_MathUtils$Sin{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/MathUtils$Sin",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_MathUtils$Sin),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_MathUtils$Sin,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_MathUtils$Sin,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_MathUtils$Sin,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_math_MathUtils,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_MathUtils$Sin = registerClass(&class_com_badlogic_gdx_math_MathUtils$Sin);

}

