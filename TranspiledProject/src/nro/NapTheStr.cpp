#include "nro/NapTheStr.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/NapTheStr.h"

extern "C" {

jobject SF_nro_NapTheStr_a;
jobject SF_nro_NapTheStr_b;
jobject SF_nro_NapTheStr_c;

void mark_nro_NapTheStr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_NapTheStr_a)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_NapTheStr_a)->clazz)->markFunction)((jobject) SF_nro_NapTheStr_a, mark, depth + 1);
		if (SF_nro_NapTheStr_b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_NapTheStr_b)->clazz)->markFunction)((jobject) SF_nro_NapTheStr_b, mark, depth + 1);
		if (SF_nro_NapTheStr_c)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_NapTheStr_c)->clazz)->markFunction)((jobject) SF_nro_NapTheStr_c, mark, depth + 1);
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
	auto self = (nro_NapTheStr *) object;
}

void init_nro_NapTheStr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NapTheStr:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_NapTheStr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_NapTheStr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NapTheStr:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_NapTheStr(ctx);
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"nr_nap_25"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"nr_nap_150"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"nr_nap_350"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"nr_nap_800"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"nr_nap_2500"_j)));
	clinit_nro_NapTheStr(ctx);
	SF_nro_NapTheStr_a = sp[0].o;
	LINE_NUMBER(5);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p 25 ng\u1ecdc"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p 150 ng\u1ecdc"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p 350 ng\u1ecdc"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p 800 ng\u1ecdc"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p 2500 ng\u1ecdc"_j)));
	clinit_nro_NapTheStr(ctx);
	SF_nro_NapTheStr_b = sp[0].o;
	LINE_NUMBER(6);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"22.000 VND"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"109.000 VND"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"219.000 VND"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"449.000 VND"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"1.099.000 VND"_j)));
	clinit_nro_NapTheStr(ctx);
	SF_nro_NapTheStr_c = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_NapTheStr[] {
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
	{ "a", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_NapTheStr_a, "[Ljava/lang/String;", 25 },
	{ "b", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_NapTheStr_b, "[Ljava/lang/String;", 9 },
	{ "c", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_NapTheStr_c, "[Ljava/lang/String;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_NapTheStr, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_nro_NapTheStr, 0, "()V", 8 },
};

Class class_nro_NapTheStr{
		.nativeName = (intptr_t) "nro/NapTheStr",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_NapTheStr),
		.classVtable = (intptr_t) vtable_nro_NapTheStr,
		.staticInitializer = (intptr_t) clinit_nro_NapTheStr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_NapTheStr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_NapTheStr = registerClass(&class_nro_NapTheStr);

}

