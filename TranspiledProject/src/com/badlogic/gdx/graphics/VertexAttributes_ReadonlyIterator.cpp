#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(234);
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(237);
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(243);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_index));
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(249);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[1].o))->F_index;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Remove not allowed."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator[] {
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
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_next_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_reset,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_java_util_Iterator, &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator, F_array), "[Ljava/lang/Object;", 18 },
	{ "index", &class_int, offsetof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator, F_index), "I", 0 },
	{ "valid", &class_boolean, offsetof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_hasNext_R_boolean, VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_remove, VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_remove, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_reset, VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_reset, "()V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_VertexAttributes,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator = registerClass(&class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator);

}

