#include "com/badlogic/gdx/utils/ObjectMap_MapIterator.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_MapIterator.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ObjectMap$MapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ObjectMap$MapIterator *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_ObjectMap$MapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_ObjectMap$MapIterator_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$MapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap$MapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(502);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(500);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(503);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(504);
	((func_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset])(ctx, (frame[0].o));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$MapIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(508);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(509);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(-1));
	LINE_NUMBER(510);
	((func_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$MapIterator:findNextIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(515);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1));
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = temp0;
	if (temp0 >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(516);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex))) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(517);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(521);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap$MapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap$MapIterator:remove", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(525);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex);
	LINE_NUMBER(526);
	if ((frame[1].i) >= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(528);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_mask);
	frame[5].i = (((frame[1].i) + (jint(1))) & (frame[4].i));
	}
label_6:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i));
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int])(ctx, sp[0].o, (frame[6].o));
	frame[7].i = temp0;
	LINE_NUMBER(533);
	if ((((frame[5].i) - (frame[7].i)) & (frame[4].i)) <= (((frame[1].i) - (frame[7].i)) & (frame[4].i))) goto label_11;
	}
	{
	LINE_NUMBER(534);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[6].o);
	LINE_NUMBER(535);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(536);
	frame[1].i = (frame[5].i);
	}
label_11:;
	{
	LINE_NUMBER(538);
	frame[5].i = (((frame[5].i) + (jint(1))) & (frame[4].i));
	LINE_NUMBER(539);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(540);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(541);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(542);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(543);
	if ((frame[1].i) == ((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex)) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	}
label_19:;
	{
	LINE_NUMBER(544);
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (jint(-1));
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectMap$MapIterator[] {
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
	(void *) nullptr,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset,
	(void *) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex,
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
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "hasNext", &class_boolean, offsetof(com_badlogic_gdx_utils_ObjectMap$MapIterator, F_hasNext), "Z", 1 },
	{ "map", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_ObjectMap$MapIterator, F_map), "Lcom/badlogic/gdx/utils/ObjectMap;", 16 },
	{ "nextIndex", &class_int, offsetof(com_badlogic_gdx_utils_ObjectMap$MapIterator, F_nextIndex), "I", 0 },
	{ "currentIndex", &class_int, offsetof(com_badlogic_gdx_utils_ObjectMap$MapIterator, F_currentIndex), "I", 0 },
	{ "valid", &class_boolean, offsetof(com_badlogic_gdx_utils_ObjectMap$MapIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectMap$MapIterator_com_badlogic_gdx_utils_ObjectMap, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;)V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset, VTABLE_com_badlogic_gdx_utils_ObjectMap$MapIterator_reset, "()V", 1 },
	{ "findNextIndex", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex, VTABLE_com_badlogic_gdx_utils_ObjectMap$MapIterator_findNextIndex, "()V", 0 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap$MapIterator_remove, VTABLE_com_badlogic_gdx_utils_ObjectMap$MapIterator_remove, "()V", 1 },
};

Class class_com_badlogic_gdx_utils_ObjectMap$MapIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectMap$MapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ObjectMap$MapIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectMap$MapIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectMap$MapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectMap$MapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_ObjectMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectMap$MapIterator = registerClass(&class_com_badlogic_gdx_utils_ObjectMap$MapIterator);

}

