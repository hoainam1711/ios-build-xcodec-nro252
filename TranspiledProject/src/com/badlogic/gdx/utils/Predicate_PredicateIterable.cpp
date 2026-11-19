#include "com/badlogic/gdx/utils/Predicate_PredicateIterable.h"
#include "com/badlogic/gdx/utils/Predicate_PredicateIterable.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/Predicate.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Predicate_PredicateIterator.h"
#include "com/badlogic/gdx/utils/Collections.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Predicate$PredicateIterable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Predicate$PredicateIterable *) object;
	if (self->F_iterable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterable)->clazz)->markFunction)((jobject) self->F_iterable, mark, depth + 1);
	if (self->F_predicate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_predicate)->clazz)->markFunction)((jobject) self->F_predicate, mark, depth + 1);
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Predicate$PredicateIterable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Predicate$PredicateIterable_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterable:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(89);
	((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterator = (jref) (jobject(nullptr));
	LINE_NUMBER(92);
	((func_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterable:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterable = (jref) (frame[1].o);
	LINE_NUMBER(97);
	((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_predicate = (jref) (frame[2].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterable:iterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Predicate$PredicateIterator);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[1].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_predicate;
	init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_util_Iterator_com_badlogic_gdx_utils_Predicate(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterator;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Predicate$PredicateIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[2].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[2].o))(ctx, sp[2].o);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_predicate;
	init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_util_Iterator_com_badlogic_gdx_utils_Predicate(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK(sp[0].o))->F_iterator = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterable;
	sp[1].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_predicate;
	((func_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterable *) NULL_CHECK((frame[0].o)))->F_iterator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Predicate$PredicateIterable[] {
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
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate,
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
	{ "set", "(Ljava/lang/Iterable;Lcom/badlogic/gdx/utils/Predicate;)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "iterable", &class_java_lang_Iterable, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterable, F_iterable), "Ljava/lang/Iterable;", 1 },
	{ "predicate", &class_com_badlogic_gdx_utils_Predicate, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterable, F_predicate), "Lcom/badlogic/gdx/utils/Predicate;", 1 },
	{ "iterator", &class_com_badlogic_gdx_utils_Predicate$PredicateIterator, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterable, F_iterator), "Lcom/badlogic/gdx/utils/Predicate$PredicateIterator;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Predicate$PredicateIterable_java_lang_Iterable_com_badlogic_gdx_utils_Predicate, 0, "(Ljava/lang/Iterable;Lcom/badlogic/gdx/utils/Predicate;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate, "(Ljava/lang/Iterable;Lcom/badlogic/gdx/utils/Predicate;)V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_com_badlogic_gdx_utils_Predicate$PredicateIterable{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Predicate$PredicateIterable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Predicate$PredicateIterable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Predicate$PredicateIterable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Predicate$PredicateIterable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Predicate$PredicateIterable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Predicate,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Predicate$PredicateIterable = registerClass(&class_com_badlogic_gdx_utils_Predicate$PredicateIterable);

}

