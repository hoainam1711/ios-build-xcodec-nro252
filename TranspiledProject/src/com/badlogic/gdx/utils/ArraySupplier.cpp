#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/ArraySupplier_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_ArraySupplier_ANY;

void mark_com_badlogic_gdx_utils_ArraySupplier(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_ArraySupplier_ANY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_ArraySupplier_ANY)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_ArraySupplier_ANY, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_ArraySupplier *) object;
}

jobject SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArraySupplier:object", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArraySupplier(ctx);
	{
	LINE_NUMBER(14);
	clinit_com_badlogic_gdx_utils_ArraySupplier(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_ArraySupplier_ANY;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_ArraySupplier_lambda$static$0_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArraySupplier:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArraySupplier(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ArraySupplier:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ArraySupplier(ctx);
	{
	LINE_NUMBER(9);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_utils_ArraySupplier_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_utils_ArraySupplier_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArraySupplier_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_com_badlogic_gdx_utils_ArraySupplier(ctx);
	SF_com_badlogic_gdx_utils_ArraySupplier_ANY = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ArraySupplier[] {
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
	{ "get", "(I)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "ANY", &class_com_badlogic_gdx_utils_ArraySupplier, (intptr_t) &SF_com_badlogic_gdx_utils_ArraySupplier_ANY, "Lcom/badlogic/gdx/utils/ArraySupplier;", 25 },
};

static MethodMetadata methods[] {
	{ "object", (intptr_t) SM_com_badlogic_gdx_utils_ArraySupplier_object_R_com_badlogic_gdx_utils_ArraySupplier, 0, "()Lcom/badlogic/gdx/utils/ArraySupplier;", 9 },
	{ "get", 0, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1025 },
	{ "lambda$static$0", (intptr_t) SM_com_badlogic_gdx_utils_ArraySupplier_lambda$static$0_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_ArraySupplier, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_ArraySupplier{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ArraySupplier",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ArraySupplier),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ArraySupplier,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ArraySupplier,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ArraySupplier,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ArraySupplier = registerClass(&class_com_badlogic_gdx_utils_ArraySupplier);

}

