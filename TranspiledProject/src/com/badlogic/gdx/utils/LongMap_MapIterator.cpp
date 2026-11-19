#include "com/badlogic/gdx/utils/LongMap_MapIterator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/LongMap_MapIterator.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/LongMap.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_LongMap$MapIterator_INDEX_ILLEGAL;
jint SF_com_badlogic_gdx_utils_LongMap$MapIterator_INDEX_ZERO;

void mark_com_badlogic_gdx_utils_LongMap$MapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_LongMap$MapIterator *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_LongMap$MapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_LongMap$MapIterator_INDEX_ILLEGAL = jint(-2);
	SF_com_badlogic_gdx_utils_LongMap$MapIterator_INDEX_ZERO = jint(-1);
}

void init_com_badlogic_gdx_utils_LongMap$MapIterator_com_badlogic_gdx_utils_LongMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$MapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongMap$MapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(550);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(548);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(551);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(552);
	((func_com_badlogic_gdx_utils_LongMap$MapIterator_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$MapIterator_reset])(ctx, (frame[0].o));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongMap$MapIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$MapIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (-2);
	LINE_NUMBER(557);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(-1));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_hasZeroValue) == 0) goto label_3;
	}
	{
	LINE_NUMBER(559);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(561);
	((func_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$MapIterator:findNextIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(566);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1));
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = temp0;
	if (temp0 >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(567);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[1].o), ((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex))), (jlong(0)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(568);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(572);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongMap$MapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongMap$MapIterator:remove", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(576);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex);
	LINE_NUMBER(577);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(579);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_zeroValue = (jref) (jobject(nullptr));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(580);
	if ((frame[1].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(581);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(585);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_mask);
	frame[5].i = (((frame[1].i) + (jint(1))) & (frame[4].i));
	}
label_11:;
	{
	LINE_NUMBER(587);
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[5].i));
	frame[6].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(588);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_LongMap_place_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_place_long_R_int])(ctx, sp[0].o, (frame[6].l));
	frame[8].i = temp0;
	LINE_NUMBER(589);
	if ((((frame[5].i) - (frame[8].i)) & (frame[4].i)) <= (((frame[1].i) - (frame[8].i)) & (frame[4].i))) goto label_16;
	}
	{
	LINE_NUMBER(590);
	ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)) = (frame[6].l);
	LINE_NUMBER(591);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(592);
	frame[1].i = (frame[5].i);
	}
label_16:;
	{
	LINE_NUMBER(594);
	frame[5].i = (((frame[5].i) + (jint(1))) & (frame[4].i));
	LINE_NUMBER(595);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(596);
	ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)) = (jlong(0));
	LINE_NUMBER(597);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(598);
	if ((frame[1].i) == ((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex)) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(600);
	((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (-2);
	LINE_NUMBER(601);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_LongMap$MapIterator[] {
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
	(void *) M_com_badlogic_gdx_utils_LongMap$MapIterator_reset,
	(void *) M_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex,
	(void *) M_com_badlogic_gdx_utils_LongMap$MapIterator_remove,
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
};

static FieldMetadata fields[] {
	{ "INDEX_ILLEGAL", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_LongMap$MapIterator_INDEX_ILLEGAL, "I", 26 },
	{ "INDEX_ZERO", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_LongMap$MapIterator_INDEX_ZERO, "I", 24 },
	{ "hasNext", &class_boolean, offsetof(com_badlogic_gdx_utils_LongMap$MapIterator, F_hasNext), "Z", 1 },
	{ "map", &class_com_badlogic_gdx_utils_LongMap, offsetof(com_badlogic_gdx_utils_LongMap$MapIterator, F_map), "Lcom/badlogic/gdx/utils/LongMap;", 16 },
	{ "nextIndex", &class_int, offsetof(com_badlogic_gdx_utils_LongMap$MapIterator, F_nextIndex), "I", 0 },
	{ "currentIndex", &class_int, offsetof(com_badlogic_gdx_utils_LongMap$MapIterator, F_currentIndex), "I", 0 },
	{ "valid", &class_boolean, offsetof(com_badlogic_gdx_utils_LongMap$MapIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongMap$MapIterator_com_badlogic_gdx_utils_LongMap, 0, "(Lcom/badlogic/gdx/utils/LongMap;)V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_utils_LongMap$MapIterator_reset, VTABLE_com_badlogic_gdx_utils_LongMap$MapIterator_reset, "()V", 1 },
	{ "findNextIndex", (intptr_t) M_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex, VTABLE_com_badlogic_gdx_utils_LongMap$MapIterator_findNextIndex, "()V", 0 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_LongMap$MapIterator_remove, VTABLE_com_badlogic_gdx_utils_LongMap$MapIterator_remove, "()V", 1 },
};

Class class_com_badlogic_gdx_utils_LongMap$MapIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/LongMap$MapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_LongMap$MapIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_LongMap$MapIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_LongMap$MapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_LongMap$MapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_LongMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_LongMap$MapIterator = registerClass(&class_com_badlogic_gdx_utils_LongMap$MapIterator);

}

