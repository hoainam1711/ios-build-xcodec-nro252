#include "com/badlogic/gdx/utils/IntMap_Entries.h"
#include "com/badlogic/gdx/utils/IntMap_MapIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntMap_Entries.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/IntMap_Entry.h"
#include "com/badlogic/gdx/utils/IntMap.h"

extern "C" {


void mark_com_badlogic_gdx_utils_IntMap$Entries(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_IntMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_IntMap$Entries *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_IntMap$Entries(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_IntMap$MapIterator(ctx);
}

void init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(609);
	init_com_badlogic_gdx_utils_IntMap$MapIterator_com_badlogic_gdx_utils_IntMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(606);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entry);
	init_com_badlogic_gdx_utils_IntMap$Entry(ctx, sp[1].o);
	((com_badlogic_gdx_utils_IntMap$Entries *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap$Entries_next_R_com_badlogic_gdx_utils_IntMap$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(614);
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(615);
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(617);
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK(sp[0].o))->F_key = (jint(0));
	LINE_NUMBER(619);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[1].o))->F_zeroValue;
	((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK(sp[0].o))->F_key = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[1].o))->F_valueTable;
	((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	}
label_7:;
	{
	LINE_NUMBER(624);
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(625);
	((func_com_badlogic_gdx_utils_IntMap$Entries_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entries *) NULL_CHECK((frame[0].o)))->F_entry;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntMap$Entries_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap$Entries_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	M_com_badlogic_gdx_utils_IntMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap$Entries_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	M_com_badlogic_gdx_utils_IntMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap$Entries_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap$Entries:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap$Entries_next_R_com_badlogic_gdx_utils_IntMap$Entry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_next_R_com_badlogic_gdx_utils_IntMap$Entry])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_IntMap$Entries[] {
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
	(void *) M_com_badlogic_gdx_utils_IntMap$Entries_reset,
	(void *) M_com_badlogic_gdx_utils_IntMap$MapIterator_findNextIndex,
	(void *) M_com_badlogic_gdx_utils_IntMap$Entries_remove,
	(void *) M_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_IntMap$Entries_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntMap$Entries_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_IntMap$Entries_next_R_com_badlogic_gdx_utils_IntMap$Entry,
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
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "remove", "()V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "next", "()Lcom/badlogic/gdx/utils/IntMap$Entry;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "entry", &class_com_badlogic_gdx_utils_IntMap$Entry, offsetof(com_badlogic_gdx_utils_IntMap$Entries, F_entry), "Lcom/badlogic/gdx/utils/IntMap$Entry;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap, 0, "(Lcom/badlogic/gdx/utils/IntMap;)V", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_IntMap$Entries_next_R_com_badlogic_gdx_utils_IntMap$Entry, VTABLE_com_badlogic_gdx_utils_IntMap$Entries_next_R_com_badlogic_gdx_utils_IntMap$Entry, "()Lcom/badlogic/gdx/utils/IntMap$Entry;", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_IntMap$Entries_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap$Entries_hasNext_R_boolean, "()Z", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_IntMap$Entries_remove, VTABLE_com_badlogic_gdx_utils_IntMap$Entries_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_IntMap$Entries_reset, VTABLE_com_badlogic_gdx_utils_IntMap$Entries_reset, "()V", 4161 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_IntMap$Entries_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap$Entries_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_utils_IntMap$Entries{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/IntMap$Entries",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_IntMap$MapIterator,
		.size = sizeof(com_badlogic_gdx_utils_IntMap$Entries),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_IntMap$Entries,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_IntMap$Entries,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_IntMap$Entries,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_IntMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_IntMap$Entries = registerClass(&class_com_badlogic_gdx_utils_IntMap$Entries);

}

