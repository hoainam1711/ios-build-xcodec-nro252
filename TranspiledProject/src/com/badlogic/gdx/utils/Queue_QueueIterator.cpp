#include "com/badlogic/gdx/utils/Queue_QueueIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/Queue.h"
#include "com/badlogic/gdx/utils/Queue_QueueIterator.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Queue$QueueIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Queue$QueueIterator *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Queue$QueueIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue$QueueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(463);
	init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue$QueueIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(466);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(458);
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(467);
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_queue = (jref) (frame[1].o);
	LINE_NUMBER(468);
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_allowRemove = (frame[2].i);
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(472);
	if (((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	LINE_NUMBER(474);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(476);
	jint temp0 = (jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_queue;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_queue;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index));
	init_java_util_NoSuchElementException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(481);
	if (((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	LINE_NUMBER(483);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[1].o))->F_index;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[1].o))->F_index = (temp0 + (jint(1)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue$QueueIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	if (((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_allowRemove) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Remove not allowed."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_index = (((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index));
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Queue$QueueIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(495);
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Queue$QueueIterator[] {
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
	(void *) M_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Queue$QueueIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_Queue$QueueIterator_reset,
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
	{ "queue", &class_com_badlogic_gdx_utils_Queue, offsetof(com_badlogic_gdx_utils_Queue$QueueIterator, F_queue), "Lcom/badlogic/gdx/utils/Queue;", 18 },
	{ "allowRemove", &class_boolean, offsetof(com_badlogic_gdx_utils_Queue$QueueIterator, F_allowRemove), "Z", 18 },
	{ "index", &class_int, offsetof(com_badlogic_gdx_utils_Queue$QueueIterator, F_index), "I", 0 },
	{ "valid", &class_boolean, offsetof(com_badlogic_gdx_utils_Queue$QueueIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue, 0, "(Lcom/badlogic/gdx/utils/Queue;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean, 0, "(Lcom/badlogic/gdx/utils/Queue;Z)V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_Queue$QueueIterator_remove, VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_remove, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_Queue$QueueIterator_reset, VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_reset, "()V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_com_badlogic_gdx_utils_Queue$QueueIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Queue$QueueIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Queue$QueueIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Queue$QueueIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Queue$QueueIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Queue$QueueIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Queue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Queue$QueueIterator = registerClass(&class_com_badlogic_gdx_utils_Queue$QueueIterator);

}

