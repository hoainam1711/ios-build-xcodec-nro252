#include "com/badlogic/gdx/utils/IntSet.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntSet.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/util/Arrays.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/IntSet_IntSetIterator.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_IntSet(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_IntSet *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_IntSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(67);
	init_com_badlogic_gdx_utils_IntSet_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(73);
	init_com_badlogic_gdx_utils_IntSet_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(79);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(81);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"loadFactor must be > 0 and < 1: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(82);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(84);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(85);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(86);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntSet_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_com_badlogic_gdx_utils_IntSet_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(96);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(97);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_hasZeroValue);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntSet_place_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong((frame[1].i))) * (jlong(-7046029254386353131ll)))) >> ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:locateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(122);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(123);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_4:;
	{
	LINE_NUMBER(124);
	if ((frame[4].i) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(121);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntSet_add_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(130);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(132);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(137);
	if ((frame[2].i) < 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(138);
	frame[2].i = (-((frame[2].i) + (jint(1))));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_com_badlogic_gdx_utils_IntSet_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_10:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(149);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(150);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"offset + length must be <= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" + "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	((func_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:addAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(159);
	((func_com_badlogic_gdx_utils_IntSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_ensureCapacity_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(160);
	frame[4].i = (frame[2].i);
	frame[5].i = ((frame[4].i) + (frame[3].i));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(160);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	((func_com_badlogic_gdx_utils_IntSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(166);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	}
label_2:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(169);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(170);
	if ((frame[5].i) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean])(ctx, (frame[0].o), (frame[5].i));
	}
label_9:;
	{
	LINE_NUMBER(168);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_addResize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:addResize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(178);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(179);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(177);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(187);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(188);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(189);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(195);
	if ((frame[2].i) >= 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(197);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[5].i = (((frame[2].i) + (jint(1))) & (frame[4].i));
	}
label_10:;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i));
	frame[1].i = temp0;
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[6].i = temp0;
	LINE_NUMBER(200);
	if ((((frame[5].i) - (frame[6].i)) & (frame[4].i)) <= (((frame[2].i) - (frame[6].i)) & (frame[4].i))) goto label_14;
	}
	{
	LINE_NUMBER(201);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(202);
	frame[2].i = (frame[5].i);
	}
label_14:;
	{
	LINE_NUMBER(204);
	frame[5].i = (((frame[5].i) + (jint(1))) & (frame[4].i));
	LINE_NUMBER(205);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(206);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (jint(0));
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"maximumCapacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(226);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_3;
	}
	{
	M_com_badlogic_gdx_utils_IntSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(234);
	((func_com_badlogic_gdx_utils_IntSet_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_clear])(ctx, (frame[0].o));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(237);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(238);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(239);
	M_com_badlogic_gdx_utils_IntSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(244);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(246);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(250);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue);
	}
label_1:;
	{
	LINE_NUMBER(251);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	if (temp0 < 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntSet_first_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:first", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(257);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(258);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i))) == 0) goto label_7;
	}
	{
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)));
	}
label_7:;
	{
	LINE_NUMBER(257);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(259);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IntSet is empty."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_IntSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntSet_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:resize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(271);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(272);
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(279);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(280);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(281);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(282);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	M_com_badlogic_gdx_utils_IntSet_addResize_int(ctx, (frame[0].o), (frame[5].i));
	}
label_12:;
	{
	LINE_NUMBER(280);
	INST_IINC(4, 1);
	goto label_9;
	}
label_7:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(289);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(290);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(291);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(292);
	if ((frame[5].i) == 0) goto label_8;
	}
	{
	frame[1].i = ((frame[1].i) + (frame[5].i));
	}
label_8:;
	{
	LINE_NUMBER(290);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_IntSet)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(299);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntSet, (frame[1].o)));
	LINE_NUMBER(300);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(301);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[2].o)))->F_hasZeroValue) == ((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(303);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(304);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))));
	if (temp0 != 0) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(303);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(310);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[1].o = sp[0].o;
	LINE_NUMBER(311);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(313);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(314);
	if (((jint)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_6;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0"_j))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(317);
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if (temp0 <= 0) goto label_8;
	}
	{
	LINE_NUMBER(318);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(319);
	if ((frame[4].i) != 0) goto label_11;
	}
	goto label_6;
label_11:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(321);
	goto label_8;
	}
label_8:;
	{
	LINE_NUMBER(324);
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if (temp0 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(325);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(326);
	if ((frame[4].i) != 0) goto label_16;
	}
	goto label_8;
label_16:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(329);
	goto label_8;
	}
label_13:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_IntSet$IntSetIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntSet$IntSetIterator);
	init_com_badlogic_gdx_utils_IntSet$IntSetIterator_com_badlogic_gdx_utils_IntSet(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntSet$IntSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntSet$IntSetIterator);
	init_com_badlogic_gdx_utils_IntSet$IntSetIterator_com_badlogic_gdx_utils_IntSet(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntSet$IntSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntSet$IntSetIterator);
	init_com_badlogic_gdx_utils_IntSet$IntSetIterator_com_badlogic_gdx_utils_IntSet(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntSet *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((com_badlogic_gdx_utils_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((func_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((func_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_IntSet$IntSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_IntSet_with_Array1_int_R_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntSet:with", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(357);
	clinit_com_badlogic_gdx_utils_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntSet);
	init_com_badlogic_gdx_utils_IntSet_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(358);
	((func_com_badlogic_gdx_utils_IntSet_addAll_Array1_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_IntSet[] {
	(void *) M_com_badlogic_gdx_utils_IntSet_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_place_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_add_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray,
	(void *) M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet,
	(void *) M_com_badlogic_gdx_utils_IntSet_addResize_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntSet_shrink_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_clear_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_clear,
	(void *) M_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntSet_first_R_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_resize_int,
	(void *) M_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator,
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
	{ "place", "(I)I" },
	{ "locateKey", "(I)I" },
	{ "add", "(I)Z" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/IntArray;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/IntArray;II)V" },
	{ "addAll", "([I)V" },
	{ "addAll", "([III)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/IntSet;)V" },
	{ "addResize", "(I)V" },
	{ "remove", "(I)Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "contains", "(I)Z" },
	{ "first", "()I" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/IntSet$IntSetIterator;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_IntSet$IntSetIterator,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_IntSet, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_IntSet, F_keyTable), "[I", 0 },
	{ "hasZeroValue", &class_boolean, offsetof(com_badlogic_gdx_utils_IntSet, F_hasZeroValue), "Z", 0 },
	{ "loadFactor", &class_float, offsetof(com_badlogic_gdx_utils_IntSet, F_loadFactor), "F", 18 },
	{ "threshold", &class_int, offsetof(com_badlogic_gdx_utils_IntSet, F_threshold), "I", 2 },
	{ "shift", &class_int, offsetof(com_badlogic_gdx_utils_IntSet, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(com_badlogic_gdx_utils_IntSet, F_mask), "I", 4 },
	{ "iterator1", &class_com_badlogic_gdx_utils_IntSet$IntSetIterator, offsetof(com_badlogic_gdx_utils_IntSet, F_iterator1), "Lcom/badlogic/gdx/utils/IntSet$IntSetIterator;", 130 },
	{ "iterator2", &class_com_badlogic_gdx_utils_IntSet$IntSetIterator, offsetof(com_badlogic_gdx_utils_IntSet, F_iterator2), "Lcom/badlogic/gdx/utils/IntSet$IntSetIterator;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntSet_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntSet_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntSet_com_badlogic_gdx_utils_IntSet, 0, "(Lcom/badlogic/gdx/utils/IntSet;)V", 1 },
	{ "place", (intptr_t) M_com_badlogic_gdx_utils_IntSet_place_int_R_int, VTABLE_com_badlogic_gdx_utils_IntSet_place_int_R_int, "(I)I", 4 },
	{ "locateKey", (intptr_t) M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int, VTABLE_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int, "(I)I", 2 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_IntSet_add_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean, "(I)Z", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray, VTABLE_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray, "(Lcom/badlogic/gdx/utils/IntArray;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int, VTABLE_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int, "(Lcom/badlogic/gdx/utils/IntArray;II)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int, VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int, "([I)V", 129 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int, VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int, "([III)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet, VTABLE_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet, "(Lcom/badlogic/gdx/utils/IntSet;)V", 1 },
	{ "addResize", (intptr_t) M_com_badlogic_gdx_utils_IntSet_addResize_int, VTABLE_com_badlogic_gdx_utils_IntSet_addResize_int, "(I)V", 2 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean, "(I)Z", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_IntSet_shrink_int, VTABLE_com_badlogic_gdx_utils_IntSet_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_IntSet_clear_int, VTABLE_com_badlogic_gdx_utils_IntSet_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_IntSet_clear, VTABLE_com_badlogic_gdx_utils_IntSet_clear, "()V", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean, "(I)Z", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_IntSet_first_R_int, VTABLE_com_badlogic_gdx_utils_IntSet_first_R_int, "()I", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_IntSet_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_IntSet_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_IntSet_resize_int, VTABLE_com_badlogic_gdx_utils_IntSet_resize_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_IntSet_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_IntSet_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator, VTABLE_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator, "()Lcom/badlogic/gdx/utils/IntSet$IntSetIterator;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_IntSet_with_Array1_int_R_com_badlogic_gdx_utils_IntSet, 0, "([I)Lcom/badlogic/gdx/utils/IntSet;", 137 },
};

Class class_com_badlogic_gdx_utils_IntSet{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/IntSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_IntSet),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_IntSet,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_IntSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_IntSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_IntSet = registerClass(&class_com_badlogic_gdx_utils_IntSet);

}

