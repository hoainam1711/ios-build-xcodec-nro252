#include "com/badlogic/gdx/utils/Array_ArrayIterable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterable.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/utils/Collections.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Array$ArrayIterable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Array$ArrayIterable *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Array$ArrayIterable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array$ArrayIterable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(765);
	init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array$ArrayIterable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Array$ArrayIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(768);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(769);
	((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(770);
	((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove = (frame[2].i);
	LINE_NUMBER(771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array$ArrayIterable:iterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(775);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_array;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array_boolean(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(779);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_array;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array_boolean(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove));
	((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(780);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array$ArrayIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array$ArrayIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_array;
	init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array_boolean(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove));
	((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(786);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(787);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(788);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(791);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(792);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_Array$ArrayIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(793);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array$ArrayIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Array$ArrayIterable:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Array$ArrayIterable[] {
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
	(void *) M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/Array$ArrayIterator;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "array", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_utils_Array$ArrayIterable, F_array), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "allowRemove", &class_boolean, offsetof(com_badlogic_gdx_utils_Array$ArrayIterable, F_allowRemove), "Z", 18 },
	{ "iterator1", &class_com_badlogic_gdx_utils_Array$ArrayIterator, offsetof(com_badlogic_gdx_utils_Array$ArrayIterable, F_iterator1), "Lcom/badlogic/gdx/utils/Array$ArrayIterator;", 130 },
	{ "iterator2", &class_com_badlogic_gdx_utils_Array$ArrayIterator, offsetof(com_badlogic_gdx_utils_Array$ArrayIterable, F_iterator2), "Lcom/badlogic/gdx/utils/Array$ArrayIterator;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array_boolean, 0, "(Lcom/badlogic/gdx/utils/Array;Z)V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator, VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator, "()Lcom/badlogic/gdx/utils/Array$ArrayIterator;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_Array$ArrayIterable{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Array$ArrayIterable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Array$ArrayIterable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Array$ArrayIterable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Array$ArrayIterable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Array$ArrayIterable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Array,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Array$ArrayIterable = registerClass(&class_com_badlogic_gdx_utils_Array$ArrayIterable);

}

