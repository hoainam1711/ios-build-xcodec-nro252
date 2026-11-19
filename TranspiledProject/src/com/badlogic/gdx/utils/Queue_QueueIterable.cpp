#include "com/badlogic/gdx/utils/Queue_QueueIterable.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/Queue.h"
#include "com/badlogic/gdx/utils/Queue_QueueIterator.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Queue_QueueIterable.h"
#include "com/badlogic/gdx/utils/Collections.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Queue$QueueIterable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Queue$QueueIterable *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Queue$QueueIterable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Queue$QueueIterable_com_badlogic_gdx_utils_Queue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue$QueueIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	init_com_badlogic_gdx_utils_Queue$QueueIterable_com_badlogic_gdx_utils_Queue_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Queue$QueueIterable_com_badlogic_gdx_utils_Queue_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Queue$QueueIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(514);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(515);
	((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_queue = (jref) (frame[1].o);
	LINE_NUMBER(516);
	((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove = (frame[2].i);
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Queue$QueueIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Queue$QueueIterable:iterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(521);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_Queue$QueueIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue$QueueIterator);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_queue;
	init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Queue$QueueIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue$QueueIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_queue;
	init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove));
	((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(526);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Queue$QueueIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue$QueueIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_queue;
	init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(ctx, sp[1].o, sp[2].o, ((jint)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_allowRemove));
	((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(533);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(534);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(538);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_Queue$QueueIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Queue$QueueIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Queue$QueueIterable[] {
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
	(void *) M_com_badlogic_gdx_utils_Queue$QueueIterable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
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
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "queue", &class_com_badlogic_gdx_utils_Queue, offsetof(com_badlogic_gdx_utils_Queue$QueueIterable, F_queue), "Lcom/badlogic/gdx/utils/Queue;", 18 },
	{ "allowRemove", &class_boolean, offsetof(com_badlogic_gdx_utils_Queue$QueueIterable, F_allowRemove), "Z", 18 },
	{ "iterator1", &class_com_badlogic_gdx_utils_Queue$QueueIterator, offsetof(com_badlogic_gdx_utils_Queue$QueueIterable, F_iterator1), "Lcom/badlogic/gdx/utils/Queue$QueueIterator;", 2 },
	{ "iterator2", &class_com_badlogic_gdx_utils_Queue$QueueIterator, offsetof(com_badlogic_gdx_utils_Queue$QueueIterable, F_iterator2), "Lcom/badlogic/gdx/utils/Queue$QueueIterator;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue$QueueIterable_com_badlogic_gdx_utils_Queue, 0, "(Lcom/badlogic/gdx/utils/Queue;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Queue$QueueIterable_com_badlogic_gdx_utils_Queue_boolean, 0, "(Lcom/badlogic/gdx/utils/Queue;Z)V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_Queue$QueueIterable_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_Queue$QueueIterable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_com_badlogic_gdx_utils_Queue$QueueIterable{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Queue$QueueIterable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Queue$QueueIterable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Queue$QueueIterable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Queue$QueueIterable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Queue$QueueIterable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Queue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Queue$QueueIterable = registerClass(&class_com_badlogic_gdx_utils_Queue$QueueIterable);

}

