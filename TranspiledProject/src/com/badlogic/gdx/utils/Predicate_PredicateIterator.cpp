#include "com/badlogic/gdx/utils/Predicate_PredicateIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Predicate.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Predicate_PredicateIterator.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Predicate$PredicateIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Predicate$PredicateIterator *) object;
	if (self->F_iterator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator)->clazz)->markFunction)((jobject) self->F_iterator, mark, depth + 1);
	if (self->F_predicate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_predicate)->clazz)->markFunction)((jobject) self->F_predicate, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_util_Iterator_com_badlogic_gdx_utils_Predicate(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_util_Iterator_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_end = (jint(0));
	LINE_NUMBER(32);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_peeked = (jint(0));
	LINE_NUMBER(33);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(40);
	((func_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(48);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_iterator = (jref) (frame[1].o);
	LINE_NUMBER(49);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_predicate = (jref) (frame[2].o);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK(sp[1].o))->F_peeked = temp0;
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK(sp[0].o))->F_end = temp0;
	LINE_NUMBER(51);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	if (((jint)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_end) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(58);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_peeked = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_predicate;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Predicate_evaluate_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Predicate, INDEX_com_badlogic_gdx_utils_Predicate_evaluate_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(62);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	LINE_NUMBER(65);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(66);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_end = (jint(1));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(74);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(75);
	((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_peeked = (jint(0));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Predicate$PredicateIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	if (((jint)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_peeked) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot remove between a call to hasNext() and next()."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Predicate$PredicateIterator *) NULL_CHECK((frame[0].o)))->F_iterator;
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Predicate$PredicateIterator[] {
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
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate,
	(void *) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate,
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
	{ "set", "(Ljava/lang/Iterable;Lcom/badlogic/gdx/utils/Predicate;)V" },
	{ "set", "(Ljava/util/Iterator;Lcom/badlogic/gdx/utils/Predicate;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "iterator", &class_java_util_Iterator, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterator, F_iterator), "Ljava/util/Iterator;", 1 },
	{ "predicate", &class_com_badlogic_gdx_utils_Predicate, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterator, F_predicate), "Lcom/badlogic/gdx/utils/Predicate;", 1 },
	{ "end", &class_boolean, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterator, F_end), "Z", 1 },
	{ "peeked", &class_boolean, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterator, F_peeked), "Z", 1 },
	{ "next", &class_java_lang_Object, offsetof(com_badlogic_gdx_utils_Predicate$PredicateIterator, F_next), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_lang_Iterable_com_badlogic_gdx_utils_Predicate, 0, "(Ljava/lang/Iterable;Lcom/badlogic/gdx/utils/Predicate;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_util_Iterator_com_badlogic_gdx_utils_Predicate, 0, "(Ljava/util/Iterator;Lcom/badlogic/gdx/utils/Predicate;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate, "(Ljava/lang/Iterable;Lcom/badlogic/gdx/utils/Predicate;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate, "(Ljava/util/Iterator;Lcom/badlogic/gdx/utils/Predicate;)V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove, VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove, "()V", 1 },
};

Class class_com_badlogic_gdx_utils_Predicate$PredicateIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Predicate$PredicateIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Predicate$PredicateIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Predicate$PredicateIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Predicate$PredicateIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Predicate,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Predicate$PredicateIterator = registerClass(&class_com_badlogic_gdx_utils_Predicate$PredicateIterator);

}

