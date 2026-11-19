#include "com/badlogic/gdx/utils/ObjectSet_ObjectSetIterator.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "com/badlogic/gdx/utils/ObjectSet_ObjectSetIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) object;
	if (self->F_set)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_set)->clazz)->markFunction)((jobject) self->F_set, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(367);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(370);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set = (jref) (frame[1].o);
	LINE_NUMBER(371);
	((func_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset])(ctx, (frame[0].o));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(376);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(-1));
	LINE_NUMBER(377);
	M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_findNextIndex(ctx, (frame[0].o));
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_findNextIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:findNextIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1));
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = temp0;
	if (temp0 >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(383);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex))) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(384);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(388);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(392);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex);
	LINE_NUMBER(393);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_mask);
	frame[4].i = (((frame[1].i) + (jint(1))) & (frame[3].i));
	}
label_5:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int])(ctx, sp[0].o, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(399);
	if ((((frame[4].i) - (frame[6].i)) & (frame[3].i)) <= (((frame[1].i) - (frame[6].i)) & (frame[3].i))) goto label_10;
	}
	{
	LINE_NUMBER(400);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[5].o);
	LINE_NUMBER(401);
	frame[1].i = (frame[4].i);
	}
label_10:;
	{
	LINE_NUMBER(403);
	frame[4].i = (((frame[4].i) + (jint(1))) & (frame[3].i));
	LINE_NUMBER(404);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(405);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(407);
	if ((frame[1].i) == ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex)) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(408);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(417);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(418);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(420);
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(421);
	M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_findNextIndex(ctx, (frame[0].o));
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(431);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_next_R_java_lang_Object])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK((frame[0].o)))->F_set;
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, sp[1].o, temp0, ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[2].o))->F_size));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator[] {
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
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_next_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_findNextIndex,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_R_com_badlogic_gdx_utils_Array,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;" },
	{ "toArray", "()Lcom/badlogic/gdx/utils/Array;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "hasNext", &class_boolean, offsetof(com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, F_hasNext), "Z", 1 },
	{ "set", &class_com_badlogic_gdx_utils_ObjectSet, offsetof(com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, F_set), "Lcom/badlogic/gdx/utils/ObjectSet;", 16 },
	{ "nextIndex", &class_int, offsetof(com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, F_nextIndex), "I", 0 },
	{ "currentIndex", &class_int, offsetof(com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, F_currentIndex), "I", 0 },
	{ "valid", &class_boolean, offsetof(com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_com_badlogic_gdx_utils_ObjectSet, 0, "(Lcom/badlogic/gdx/utils/ObjectSet;)V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset, "()V", 1 },
	{ "findNextIndex", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_findNextIndex, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_findNextIndex, "()V", 2 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_remove, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_remove, "()V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, "()Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_toArray_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectSet$ObjectSetIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectSet,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator = registerClass(&class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator);

}

