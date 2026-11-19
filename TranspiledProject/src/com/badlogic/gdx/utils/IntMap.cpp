#include "com/badlogic/gdx/utils/IntMap.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/IntMap_Entries.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/IntMap_Values.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "com/badlogic/gdx/utils/IntMap_MapIterator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/utils/IntMap_Keys.h"
#include "com/badlogic/gdx/utils/IntMap_Entry.h"
#include "com/badlogic/gdx/utils/IntMap.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_IntMap(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_IntMap *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_valueTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valueTable)->clazz)->markFunction)((jobject) self->F_valueTable, mark, depth + 1);
	if (self->F_zeroValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_zeroValue)->clazz)->markFunction)((jobject) self->F_zeroValue, mark, depth + 1);
	if (self->F_entries1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries1)->clazz)->markFunction)((jobject) self->F_entries1, mark, depth + 1);
	if (self->F_entries2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries2)->clazz)->markFunction)((jobject) self->F_entries2, mark, depth + 1);
	if (self->F_values1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values1)->clazz)->markFunction)((jobject) self->F_values1, mark, depth + 1);
	if (self->F_values2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values2)->clazz)->markFunction)((jobject) self->F_values2, mark, depth + 1);
	if (self->F_keys1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys1)->clazz)->markFunction)((jobject) self->F_keys1, mark, depth + 1);
	if (self->F_keys2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys2)->clazz)->markFunction)((jobject) self->F_keys2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_IntMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_IntMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(74);
	init_com_badlogic_gdx_utils_IntMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(81);
	init_com_badlogic_gdx_utils_IntMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(88);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(89);
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
	LINE_NUMBER(90);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(92);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(93);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(94);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntMap_com_badlogic_gdx_utils_IntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_com_badlogic_gdx_utils_IntMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(106);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_zeroValue;
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_zeroValue = (jref) sp[1].o;
	LINE_NUMBER(108);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntMap_place_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong((frame[1].i))) * (jlong(-7046029254386353131ll)))) >> ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:locateKey", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(133);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(134);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_4:;
	{
	LINE_NUMBER(135);
	if ((frame[4].i) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(132);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(140);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	frame[3].o = sp[0].o;
	LINE_NUMBER(142);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (jref) (frame[2].o);
	LINE_NUMBER(143);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_5;
	}
	{
	LINE_NUMBER(144);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(150);
	if ((frame[3].i) < 0) goto label_9;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_9:;
	{
	LINE_NUMBER(155);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_com_badlogic_gdx_utils_IntMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_16:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(163);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	frame[3].o = sp[0].o;
	LINE_NUMBER(165);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_4;
	}
	{
	LINE_NUMBER(166);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (jref) (frame[2].o);
	LINE_NUMBER(167);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(1));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(173);
	if ((frame[3].i) < 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_9:;
	{
	LINE_NUMBER(174);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_com_badlogic_gdx_utils_IntMap_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_13:;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap_putAll_com_badlogic_gdx_utils_IntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	((func_com_badlogic_gdx_utils_IntMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(183);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_zeroValue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(187);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(188);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	}
label_10:;
	{
	LINE_NUMBER(186);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap_putResize_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(196);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(197);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[1].i);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[2].o);
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(195);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(207);
	if ((frame[2].i) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ACONST_NULL();
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(211);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(213);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(2);
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:remove", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(218);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(219);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) != 0) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(220);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	frame[2].o = sp[0].o;
	LINE_NUMBER(222);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (jref) (jobject(nullptr));
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(228);
	if ((frame[2].i) >= 0) goto label_9;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(231);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)));
	LINE_NUMBER(232);
	frame[6].i = ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[7].i = (((frame[2].i) + (jint(1))) & (frame[6].i));
	}
label_14:;
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[7].i));
	frame[1].i = temp0;
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntMap_place_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_place_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[8].i = temp0;
	LINE_NUMBER(235);
	if ((((frame[7].i) - (frame[8].i)) & (frame[6].i)) <= (((frame[2].i) - (frame[8].i)) & (frame[6].i))) goto label_18;
	}
	{
	LINE_NUMBER(236);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(237);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(238);
	frame[2].i = (frame[7].i);
	}
label_18:;
	{
	LINE_NUMBER(240);
	frame[7].i = (((frame[7].i) + (jint(1))) & (frame[6].i));
	LINE_NUMBER(241);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(242);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (jint(0));
	LINE_NUMBER(243);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_IntMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_IntMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(262);
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
	LINE_NUMBER(263);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_3;
	}
	{
	M_com_badlogic_gdx_utils_IntMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(271);
	((func_com_badlogic_gdx_utils_IntMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(274);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(275);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(276);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (jref) (jobject(nullptr));
	LINE_NUMBER(277);
	M_com_badlogic_gdx_utils_IntMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(282);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(285);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue = (jref) (jobject(nullptr));
	LINE_NUMBER(286);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue = (jint(0));
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:containsValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(295);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(296);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	if (sp[0].o != nullptr) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(298);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_6:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_7;
	{
	LINE_NUMBER(299);
	if (((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i))) == 0) goto label_9;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) != nullptr) goto label_9;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(298);
	INST_IINC(5, -1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(300);
	goto label_10;
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_11;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(302);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_14:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_15;
	{
	LINE_NUMBER(303);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_17;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(302);
	INST_IINC(4, -1);
	goto label_14;
	}
label_15:;
	goto label_10;
label_11:;
	{
	LINE_NUMBER(305);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_18;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(306);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_19:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_10;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_21;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_21:;
	{
	LINE_NUMBER(306);
	INST_IINC(4, -1);
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(314);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue);
	}
label_1:;
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int(ctx, (frame[0].o), (frame[1].i));
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

jint M_com_badlogic_gdx_utils_IntMap_findKey_java_lang_Object_boolean_int_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:findKey", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(324);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(325);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	if (sp[0].o != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(327);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_6:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_7;
	{
	LINE_NUMBER(328);
	if (((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i))) == 0) goto label_9;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))) != nullptr) goto label_9;
	}
	{
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i)));
	}
label_9:;
	{
	LINE_NUMBER(327);
	INST_IINC(6, -1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(329);
	goto label_10;
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_11;
	{
	LINE_NUMBER(330);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(331);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_14:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_15;
	{
	LINE_NUMBER(332);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) != (frame[1].o)) goto label_17;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	}
label_17:;
	{
	LINE_NUMBER(331);
	INST_IINC(5, -1);
	goto label_14;
	}
label_15:;
	goto label_10;
label_11:;
	{
	LINE_NUMBER(334);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_18;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_18;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(335);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_19:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_10;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	}
label_21:;
	{
	LINE_NUMBER(335);
	INST_IINC(5, -1);
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(345);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_IntMap_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(350);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(351);
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(354);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(355);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(360);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(361);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(362);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(363);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	M_com_badlogic_gdx_utils_IntMap_putResize_int_java_lang_Object(ctx, (frame[0].o), (frame[6].i), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(361);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(366);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(370);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	}
label_2:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(373);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(374);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(375);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(376);
	frame[1].i = ((frame[1].i) + ((frame[6].i) * (31)));
	LINE_NUMBER(377);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(378);
	if ((frame[7].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[1].i = (temp0 + temp1);
	}
label_10:;
	{
	LINE_NUMBER(373);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(385);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(386);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_IntMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(387);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap, (frame[1].o)));
	LINE_NUMBER(388);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(389);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_hasZeroValue) == ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(390);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_6;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_zeroValue;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	if (sp[0].o == nullptr) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_zeroValue;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(399);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_14;
	}
	{
	LINE_NUMBER(400);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(401);
	if ((frame[7].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(402);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(403);
	if ((frame[8].o) != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_ObjectMap_dummy;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	if (sp[0].o == nullptr) goto label_17;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].i));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(399);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:equalsIdentity", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(416);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_IntMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(417);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap, (frame[1].o)));
	LINE_NUMBER(418);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(419);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_hasZeroValue) == ((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(420);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[2].o)))->F_zeroValue;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(423);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(424);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(425);
	if ((frame[7].i) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i));
	sp[1].o = frame[2].o;
	jint temp0 = frame[7].i;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_ObjectMap_dummy;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, temp0, sp[2].o);
	if (sp[0].o == sp[1].o) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(423);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(431);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(432);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[1].o = sp[0].o;
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (91));
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(435);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(436);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(437);
	if (((jint)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_hasZeroValue) == 0) goto label_7;
	}
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0="_j))));
	LINE_NUMBER(439);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_zeroValue;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(441);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(442);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(443);
	if ((frame[5].i) != 0) goto label_13;
	}
	goto label_7;
label_13:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(447);
	goto label_10;
	}
label_10:;
	{
	LINE_NUMBER(450);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_17;
	}
	{
	LINE_NUMBER(451);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(452);
	if ((frame[5].i) != 0) goto label_20;
	}
	goto label_10;
label_20:;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (61));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(457);
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (93));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entries);
	init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entries);
	init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Entries);
	init_com_badlogic_gdx_utils_IntMap$Entries_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_com_badlogic_gdx_utils_IntMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(479);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(480);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_com_badlogic_gdx_utils_IntMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(483);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_values_R_com_badlogic_gdx_utils_IntMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(493);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_IntMap$Values(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Values);
	init_com_badlogic_gdx_utils_IntMap$Values_com_badlogic_gdx_utils_IntMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Values);
	init_com_badlogic_gdx_utils_IntMap$Values_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Values);
	init_com_badlogic_gdx_utils_IntMap$Values_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_com_badlogic_gdx_utils_IntMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(500);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(501);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(502);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_com_badlogic_gdx_utils_IntMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(505);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(506);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntMap_keys_R_com_badlogic_gdx_utils_IntMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_IntMap$Keys(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Keys);
	init_com_badlogic_gdx_utils_IntMap$Keys_com_badlogic_gdx_utils_IntMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Keys);
	init_com_badlogic_gdx_utils_IntMap$Keys_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntMap$Keys);
	init_com_badlogic_gdx_utils_IntMap$Keys_com_badlogic_gdx_utils_IntMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_IntMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_com_badlogic_gdx_utils_IntMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(522);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_com_badlogic_gdx_utils_IntMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_IntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_IntMap[] {
	(void *) M_com_badlogic_gdx_utils_IntMap_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_IntMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_IntMap_place_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_IntMap_putAll_com_badlogic_gdx_utils_IntMap,
	(void *) M_com_badlogic_gdx_utils_IntMap_putResize_int_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_IntMap_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntMap_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntMap_shrink_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_clear_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_clear,
	(void *) M_com_badlogic_gdx_utils_IntMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntMap_findKey_java_lang_Object_boolean_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_resize_int,
	(void *) M_com_badlogic_gdx_utils_IntMap_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries,
	(void *) M_com_badlogic_gdx_utils_IntMap_values_R_com_badlogic_gdx_utils_IntMap$Values,
	(void *) M_com_badlogic_gdx_utils_IntMap_keys_R_com_badlogic_gdx_utils_IntMap$Keys,
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
	{ "place", "(I)I" },
	{ "locateKey", "(I)I" },
	{ "put", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/IntMap;)V" },
	{ "putResize", "(ILjava/lang/Object;)V" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "get", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(I)Z" },
	{ "findKey", "(Ljava/lang/Object;ZI)I" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "entries", "()Lcom/badlogic/gdx/utils/IntMap$Entries;" },
	{ "values", "()Lcom/badlogic/gdx/utils/IntMap$Values;" },
	{ "keys", "()Lcom/badlogic/gdx/utils/IntMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_IntMap$Entries,
	&class_com_badlogic_gdx_utils_IntMap$Values,
	&class_com_badlogic_gdx_utils_IntMap$Keys,
	&class_com_badlogic_gdx_utils_IntMap$MapIterator,
	&class_com_badlogic_gdx_utils_IntMap$Entry,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_IntMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_IntMap, F_keyTable), "[I", 0 },
	{ "valueTable", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_IntMap, F_valueTable), "[Ljava/lang/Object;", 0 },
	{ "zeroValue", &class_java_lang_Object, offsetof(com_badlogic_gdx_utils_IntMap, F_zeroValue), "Ljava/lang/Object;", 0 },
	{ "hasZeroValue", &class_boolean, offsetof(com_badlogic_gdx_utils_IntMap, F_hasZeroValue), "Z", 0 },
	{ "loadFactor", &class_float, offsetof(com_badlogic_gdx_utils_IntMap, F_loadFactor), "F", 18 },
	{ "threshold", &class_int, offsetof(com_badlogic_gdx_utils_IntMap, F_threshold), "I", 2 },
	{ "shift", &class_int, offsetof(com_badlogic_gdx_utils_IntMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(com_badlogic_gdx_utils_IntMap, F_mask), "I", 4 },
	{ "entries1", &class_com_badlogic_gdx_utils_IntMap$Entries, offsetof(com_badlogic_gdx_utils_IntMap, F_entries1), "Lcom/badlogic/gdx/utils/IntMap$Entries;", 130 },
	{ "entries2", &class_com_badlogic_gdx_utils_IntMap$Entries, offsetof(com_badlogic_gdx_utils_IntMap, F_entries2), "Lcom/badlogic/gdx/utils/IntMap$Entries;", 130 },
	{ "values1", &class_com_badlogic_gdx_utils_IntMap$Values, offsetof(com_badlogic_gdx_utils_IntMap, F_values1), "Lcom/badlogic/gdx/utils/IntMap$Values;", 130 },
	{ "values2", &class_com_badlogic_gdx_utils_IntMap$Values, offsetof(com_badlogic_gdx_utils_IntMap, F_values2), "Lcom/badlogic/gdx/utils/IntMap$Values;", 130 },
	{ "keys1", &class_com_badlogic_gdx_utils_IntMap$Keys, offsetof(com_badlogic_gdx_utils_IntMap, F_keys1), "Lcom/badlogic/gdx/utils/IntMap$Keys;", 130 },
	{ "keys2", &class_com_badlogic_gdx_utils_IntMap$Keys, offsetof(com_badlogic_gdx_utils_IntMap, F_keys2), "Lcom/badlogic/gdx/utils/IntMap$Keys;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntMap_com_badlogic_gdx_utils_IntMap, 0, "(Lcom/badlogic/gdx/utils/IntMap;)V", 1 },
	{ "place", (intptr_t) M_com_badlogic_gdx_utils_IntMap_place_int_R_int, VTABLE_com_badlogic_gdx_utils_IntMap_place_int_R_int, "(I)I", 4 },
	{ "locateKey", (intptr_t) M_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int, VTABLE_com_badlogic_gdx_utils_IntMap_locateKey_int_R_int, "(I)I", 2 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putMissing", (intptr_t) M_com_badlogic_gdx_utils_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_com_badlogic_gdx_utils_IntMap_putAll_com_badlogic_gdx_utils_IntMap, VTABLE_com_badlogic_gdx_utils_IntMap_putAll_com_badlogic_gdx_utils_IntMap, "(Lcom/badlogic/gdx/utils/IntMap;)V", 1 },
	{ "putResize", (intptr_t) M_com_badlogic_gdx_utils_IntMap_putResize_int_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap_putResize_int_java_lang_Object, "(ILjava/lang/Object;)V", 2 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap_get_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_IntMap_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_IntMap_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_IntMap_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_IntMap_shrink_int, VTABLE_com_badlogic_gdx_utils_IntMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_IntMap_clear_int, VTABLE_com_badlogic_gdx_utils_IntMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_IntMap_clear, VTABLE_com_badlogic_gdx_utils_IntMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_com_badlogic_gdx_utils_IntMap_containsValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap_containsValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "containsKey", (intptr_t) M_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap_containsKey_int_R_boolean, "(I)Z", 1 },
	{ "findKey", (intptr_t) M_com_badlogic_gdx_utils_IntMap_findKey_java_lang_Object_boolean_int_R_int, VTABLE_com_badlogic_gdx_utils_IntMap_findKey_java_lang_Object_boolean_int_R_int, "(Ljava/lang/Object;ZI)I", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_IntMap_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_IntMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_IntMap_resize_int, VTABLE_com_badlogic_gdx_utils_IntMap_resize_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_IntMap_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_IntMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_IntMap_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equalsIdentity", (intptr_t) M_com_badlogic_gdx_utils_IntMap_equalsIdentity_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_IntMap_equalsIdentity_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_IntMap_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_IntMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_IntMap_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_IntMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "entries", (intptr_t) M_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries, VTABLE_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries, "()Lcom/badlogic/gdx/utils/IntMap$Entries;", 1 },
	{ "values", (intptr_t) M_com_badlogic_gdx_utils_IntMap_values_R_com_badlogic_gdx_utils_IntMap$Values, VTABLE_com_badlogic_gdx_utils_IntMap_values_R_com_badlogic_gdx_utils_IntMap$Values, "()Lcom/badlogic/gdx/utils/IntMap$Values;", 1 },
	{ "keys", (intptr_t) M_com_badlogic_gdx_utils_IntMap_keys_R_com_badlogic_gdx_utils_IntMap$Keys, VTABLE_com_badlogic_gdx_utils_IntMap_keys_R_com_badlogic_gdx_utils_IntMap$Keys, "()Lcom/badlogic/gdx/utils/IntMap$Keys;", 1 },
};

Class class_com_badlogic_gdx_utils_IntMap{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/IntMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_IntMap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_IntMap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_IntMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_IntMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_IntMap = registerClass(&class_com_badlogic_gdx_utils_IntMap);

}

