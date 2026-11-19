#include "com/badlogic/gdx/utils/LongMap_Keys.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/LongMap_Keys.h"
#include "com/badlogic/gdx/utils/LongMap_MapIterator.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/LongMap.h"
#include "com/badlogic/gdx/utils/LongArray.h"

extern "C" {


void mark_com_badlogic_gdx_utils_LongMap$Keys(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_LongMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_LongMap$Keys *) object;
}

void clinit_com_badlogic_gdx_utils_LongMap$Keys(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_LongMap$MapIterator(ctx);
}

void init_com_badlogic_gdx_utils_LongMap$Keys_com_badlogic_gdx_utils_LongMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$Keys:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongMap$Keys(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(677);
	init_com_badlogic_gdx_utils_LongMap$MapIterator_com_badlogic_gdx_utils_LongMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongMap$Keys_next_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$Keys:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(681);
	if (((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(682);
	if (((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(683);
	if (((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_3;
	}
	INST_LCONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, ((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	sp[0].l = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[1].l = sp[0].l;
	LINE_NUMBER(684);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(685);
	((func_com_badlogic_gdx_utils_LongMap$Keys_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$Keys_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$Keys:toArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(691);
	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_LongArray);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_com_badlogic_gdx_utils_LongArray_boolean_int(ctx, sp[0].o, temp0, ((jint)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(692);
	if (((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(693);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_LongMap$Keys_next_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$Keys_next_R_long])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_LongArray_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_add_long])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$Keys:toArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(699);
	if (((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(700);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_LongMap$Keys_next_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$Keys_next_R_long])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_LongArray_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_add_long])(ctx, sp[0].o, temp0);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongMap$Keys_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$Keys:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	M_com_badlogic_gdx_utils_LongMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongMap$Keys_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$Keys:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	M_com_badlogic_gdx_utils_LongMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_LongMap$Keys[] {
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
	(void *) M_com_badlogic_gdx_utils_LongMap$Keys_reset,
	(void *) M_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex,
	(void *) M_com_badlogic_gdx_utils_LongMap$Keys_remove,
	(void *) M_com_badlogic_gdx_utils_LongMap$Keys_next_R_long,
	(void *) M_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray,
	(void *) M_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray,
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
	{ "next", "()J" },
	{ "toArray", "()Lcom/badlogic/gdx/utils/LongArray;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/LongArray;)Lcom/badlogic/gdx/utils/LongArray;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongMap$Keys_com_badlogic_gdx_utils_LongMap, 0, "(Lcom/badlogic/gdx/utils/LongMap;)V", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_LongMap$Keys_next_R_long, VTABLE_com_badlogic_gdx_utils_LongMap$Keys_next_R_long, "()J", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray, VTABLE_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray, "()Lcom/badlogic/gdx/utils/LongArray;", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray, VTABLE_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray, "(Lcom/badlogic/gdx/utils/LongArray;)Lcom/badlogic/gdx/utils/LongArray;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_LongMap$Keys_remove, VTABLE_com_badlogic_gdx_utils_LongMap$Keys_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_LongMap$Keys_reset, VTABLE_com_badlogic_gdx_utils_LongMap$Keys_reset, "()V", 4161 },
};

Class class_com_badlogic_gdx_utils_LongMap$Keys{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/LongMap$Keys",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_LongMap$MapIterator,
		.size = sizeof(com_badlogic_gdx_utils_LongMap$Keys),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_LongMap$Keys,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_LongMap$Keys,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_LongMap$Keys,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_LongMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_LongMap$Keys = registerClass(&class_com_badlogic_gdx_utils_LongMap$Keys);

}

