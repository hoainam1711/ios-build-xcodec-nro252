#include "com/badlogic/gdx/utils/ObjectFloatMap_Values.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_MapIterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Values.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ObjectFloatMap$Values(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_ObjectFloatMap$Values *) object;
}

void clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator(ctx);
}

void init_com_badlogic_gdx_utils_ObjectFloatMap$Values_com_badlogic_gdx_utils_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(588);
	init_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator_com_badlogic_gdx_utils_ObjectFloatMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:hasNext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(592);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(598);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[1].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex)));
	LINE_NUMBER(600);
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(601);
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Values_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(611);
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_com_badlogic_gdx_utils_FloatArray_boolean_int(ctx, sp[0].o, temp0, ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(612);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(613);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(619);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(620);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, temp0);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(586);
	M_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap$Values:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(586);
	M_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectFloatMap$Values[] {
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
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator_findNextIndex,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray,
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
	{ "hasNext", "()Z" },
	{ "next", "()F" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Values;" },
	{ "toArray", "()Lcom/badlogic/gdx/utils/FloatArray;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/FloatArray;)Lcom/badlogic/gdx/utils/FloatArray;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectFloatMap$Values_com_badlogic_gdx_utils_ObjectFloatMap, 0, "(Lcom/badlogic/gdx/utils/ObjectFloatMap;)V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float, "()F", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values, "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Values;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray, "()Lcom/badlogic/gdx/utils/FloatArray;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray, "(Lcom/badlogic/gdx/utils/FloatArray;)Lcom/badlogic/gdx/utils/FloatArray;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset, "()V", 4161 },
};

Class class_com_badlogic_gdx_utils_ObjectFloatMap$Values{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectFloatMap$Values",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator,
		.size = sizeof(com_badlogic_gdx_utils_ObjectFloatMap$Values),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectFloatMap$Values,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectFloatMap$Values,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectFloatMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectFloatMap$Values = registerClass(&class_com_badlogic_gdx_utils_ObjectFloatMap$Values);

}

