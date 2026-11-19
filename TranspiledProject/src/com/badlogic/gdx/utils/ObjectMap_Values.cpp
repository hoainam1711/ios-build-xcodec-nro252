#include "com/badlogic/gdx/utils/ObjectMap_Values.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/ObjectMap_MapIterator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_Values.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ObjectMap$Values(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_ObjectMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_ObjectMap$Values *) object;
}

void clinit_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_ObjectMap$MapIterator(ctx);
}

void init_com_badlogic_gdx_utils_ObjectMap$Values_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap$Values(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(579);
	init_com_badlogic_gdx_utils_ObjectMap$MapIterator_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(588);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(589);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(591);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(592);
	((func_com_badlogic_gdx_utils_ObjectMap$Values_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(602);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, sp[1].o, temp0, ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[2].o))->F_size));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(607);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(608);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap$Values_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	M_com_badlogic_gdx_utils_ObjectMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap$Values_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	M_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$Values:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectMap$Values[] {
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
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_reset,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array,
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
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectMap$Values;" },
	{ "toArray", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectMap$Values_com_badlogic_gdx_utils_ObjectMap, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;)V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values, "()Lcom/badlogic/gdx/utils/ObjectMap$Values;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_remove, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_reset, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_reset, "()V", 4161 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_ObjectMap$Values{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectMap$Values",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectMap$MapIterator,
		.size = sizeof(com_badlogic_gdx_utils_ObjectMap$Values),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectMap$Values,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectMap$Values,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectMap$Values,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectMap$Values = registerClass(&class_com_badlogic_gdx_utils_ObjectMap$Values);

}

