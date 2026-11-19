#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "com/badlogic/gdx/utils/ObjectMap_MapIterator.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_Values.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/ObjectMap_Keys.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_ObjectMap_dummy;

void mark_com_badlogic_gdx_utils_ObjectMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_ObjectMap_dummy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_ObjectMap_dummy)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_ObjectMap_dummy, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_ObjectMap *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_valueTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valueTable)->clazz)->markFunction)((jobject) self->F_valueTable, mark, depth + 1);
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

void init_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(73);
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(85);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(86);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(87);
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
	LINE_NUMBER(88);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(91);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(92);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectMap_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(104);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(131);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(132);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(130);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(140);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(145);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(153);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(154);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	}
label_2:;
	{
	LINE_NUMBER(155);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[2].o);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(163);
	((func_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(167);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(168);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(169);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	}
label_9:;
	{
	LINE_NUMBER(167);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(177);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(178);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[2].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(176);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(188);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(194);
	if ((frame[3].i) >= 0) goto label_2;
	}
	INST_ALOAD(2);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:remove", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(200);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(203);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)));
	LINE_NUMBER(204);
	frame[6].i = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[7].i = (((frame[2].i) + (jint(1))) & (frame[6].i));
	}
label_7:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(207);
	if ((((frame[7].i) - (frame[8].i)) & (frame[6].i)) <= (((frame[2].i) - (frame[8].i)) & (frame[6].i))) goto label_11;
	}
	{
	LINE_NUMBER(208);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(209);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(210);
	frame[2].i = (frame[7].i);
	}
label_11:;
	{
	LINE_NUMBER(212);
	frame[7].i = (((frame[7].i) + (jint(1))) & (frame[6].i));
	LINE_NUMBER(213);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(214);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(215);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_ObjectMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(234);
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
	LINE_NUMBER(235);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_3;
	}
	{
	((func_com_badlogic_gdx_utils_ObjectMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(242);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(243);
	((func_com_badlogic_gdx_utils_ObjectMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(246);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(247);
	((func_com_badlogic_gdx_utils_ObjectMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(252);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:containsValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(263);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(265);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_5:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(266);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) == nullptr) goto label_8;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) != nullptr) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(265);
	INST_IINC(5, -1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(267);
	goto label_9;
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(268);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_12:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(269);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_15;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(268);
	INST_IINC(4, -1);
	goto label_12;
	}
label_13:;
	goto label_9;
label_10:;
	{
	LINE_NUMBER(271);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_16:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_9;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_18;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(271);
	INST_IINC(4, -1);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < 0) goto label_1;
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

jobject M_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:findKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(287);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(289);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_5:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(290);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))) == nullptr) goto label_8;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) != nullptr) goto label_8;
	}
	{
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	}
label_8:;
	{
	LINE_NUMBER(289);
	INST_IINC(5, -1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(291);
	goto label_9;
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(292);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_12:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(293);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != (frame[1].o)) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_15:;
	{
	LINE_NUMBER(292);
	INST_IINC(4, -1);
	goto label_12;
	}
label_13:;
	goto label_9;
label_10:;
	{
	LINE_NUMBER(295);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_16:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_9;
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	}
label_18:;
	{
	LINE_NUMBER(295);
	INST_IINC(4, -1);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(305);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	((func_com_badlogic_gdx_utils_ObjectMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(306);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(310);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(311);
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(320);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(321);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(322);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(323);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(321);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(332);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(333);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(334);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(335);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(336);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(337);
	if ((frame[7].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[7].o));
	frame[1].i = (temp0 + temp1);
	}
label_9:;
	{
	LINE_NUMBER(332);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(344);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(345);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(346);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, (frame[1].o)));
	LINE_NUMBER(347);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(350);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(351);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(352);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(353);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(354);
	if ((frame[8].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = frame[2].o;
	sp[1].o = frame[7].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_ObjectMap_dummy;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (sp[0].o == nullptr) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(350);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:equalsIdentity", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(367);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(368);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, (frame[1].o)));
	LINE_NUMBER(369);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(372);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(373);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(374);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i));
	sp[1].o = frame[2].o;
	sp[2].o = frame[7].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_utils_ObjectMap_dummy;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	if (sp[0].o == sp[1].o) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(372);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:toString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(388);
	if (((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_2;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(389);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(390);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(393);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_8:;
	{
	LINE_NUMBER(394);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(395);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(396);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	goto label_8;
label_12:;
	{
	LINE_NUMBER(397);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[7].o) != (frame[0].o)) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_14;
label_13:;
	INST_ALOAD(7);
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(399);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(400);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[8].o) != (frame[0].o)) goto label_18;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_19;
label_18:;
	INST_ALOAD(8);
label_19:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(401);
	goto label_9;
	}
label_9:;
	{
	LINE_NUMBER(403);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_21;
	}
	{
	LINE_NUMBER(404);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(405);
	if ((frame[7].o) != nullptr) goto label_24;
	}
	goto label_9;
label_24:;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(407);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[7].o) != (frame[0].o)) goto label_26;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_27;
label_26:;
	INST_ALOAD(7);
label_27:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(408);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(409);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(410);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[8].o) != (frame[0].o)) goto label_31;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_32;
label_31:;
	INST_ALOAD(8);
label_32:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(411);
	goto label_9;
	}
label_21:;
	{
	LINE_NUMBER(412);
	if ((frame[2].i) == 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_34:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(425);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entries);
	init_com_badlogic_gdx_utils_ObjectMap$Entries_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entries);
	init_com_badlogic_gdx_utils_ObjectMap$Entries_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(428);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entries);
	init_com_badlogic_gdx_utils_ObjectMap$Entries_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_com_badlogic_gdx_utils_ObjectMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(432);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(433);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_com_badlogic_gdx_utils_ObjectMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(438);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectMap$Values(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Values);
	init_com_badlogic_gdx_utils_ObjectMap$Values_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Values);
	init_com_badlogic_gdx_utils_ObjectMap$Values_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Values);
	init_com_badlogic_gdx_utils_ObjectMap$Values_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_com_badlogic_gdx_utils_ObjectMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_com_badlogic_gdx_utils_ObjectMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(459);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(469);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectMap$Keys(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Keys);
	init_com_badlogic_gdx_utils_ObjectMap$Keys_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Keys);
	init_com_badlogic_gdx_utils_ObjectMap$Keys_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Keys);
	init_com_badlogic_gdx_utils_ObjectMap$Keys_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_com_badlogic_gdx_utils_ObjectMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(476);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_com_badlogic_gdx_utils_ObjectMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ObjectMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(483);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_ObjectMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectMap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	{
	LINE_NUMBER(42);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	SF_com_badlogic_gdx_utils_ObjectMap_dummy = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectMap[] {
	(void *) M_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_shrink_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_clear_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_clear,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_resize_int,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values,
	(void *) M_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys,
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
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "equalsIdentity", "(Ljava/lang/Object;)Z" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;" },
	{ "entries", "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;" },
	{ "values", "()Lcom/badlogic/gdx/utils/ObjectMap$Values;" },
	{ "keys", "()Lcom/badlogic/gdx/utils/ObjectMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_ObjectMap$Entries,
	&class_com_badlogic_gdx_utils_ObjectMap$Values,
	&class_com_badlogic_gdx_utils_ObjectMap$Keys,
	&class_com_badlogic_gdx_utils_ObjectMap$MapIterator,
	&class_com_badlogic_gdx_utils_ObjectMap$Entry,
};

static FieldMetadata fields[] {
	{ "dummy", &class_java_lang_Object, (intptr_t) &SF_com_badlogic_gdx_utils_ObjectMap_dummy, "Ljava/lang/Object;", 24 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_ObjectMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ObjectMap, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "valueTable", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ObjectMap, F_valueTable), "[Ljava/lang/Object;", 0 },
	{ "loadFactor", &class_float, offsetof(com_badlogic_gdx_utils_ObjectMap, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(com_badlogic_gdx_utils_ObjectMap, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(com_badlogic_gdx_utils_ObjectMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(com_badlogic_gdx_utils_ObjectMap, F_mask), "I", 4 },
	{ "entries1", &class_com_badlogic_gdx_utils_ObjectMap$Entries, offsetof(com_badlogic_gdx_utils_ObjectMap, F_entries1), "Lcom/badlogic/gdx/utils/ObjectMap$Entries;", 128 },
	{ "entries2", &class_com_badlogic_gdx_utils_ObjectMap$Entries, offsetof(com_badlogic_gdx_utils_ObjectMap, F_entries2), "Lcom/badlogic/gdx/utils/ObjectMap$Entries;", 128 },
	{ "values1", &class_com_badlogic_gdx_utils_ObjectMap$Values, offsetof(com_badlogic_gdx_utils_ObjectMap, F_values1), "Lcom/badlogic/gdx/utils/ObjectMap$Values;", 128 },
	{ "values2", &class_com_badlogic_gdx_utils_ObjectMap$Values, offsetof(com_badlogic_gdx_utils_ObjectMap, F_values2), "Lcom/badlogic/gdx/utils/ObjectMap$Values;", 128 },
	{ "keys1", &class_com_badlogic_gdx_utils_ObjectMap$Keys, offsetof(com_badlogic_gdx_utils_ObjectMap, F_keys1), "Lcom/badlogic/gdx/utils/ObjectMap$Keys;", 128 },
	{ "keys2", &class_com_badlogic_gdx_utils_ObjectMap$Keys, offsetof(com_badlogic_gdx_utils_ObjectMap, F_keys2), "Lcom/badlogic/gdx/utils/ObjectMap$Keys;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectMap_com_badlogic_gdx_utils_ObjectMap, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;)V", 1 },
	{ "place", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putMissing", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "putAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap, VTABLE_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap, "(Lcom/badlogic/gdx/utils/ObjectMap;)V", 1 },
	{ "putResize", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 2 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_shrink_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_clear_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_clear, VTABLE_com_badlogic_gdx_utils_ObjectMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean, "(Ljava/lang/Object;Z)Z", 1 },
	{ "containsKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "findKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object, "(Ljava/lang/Object;Z)Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_resize_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int, "(I)V", 16 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equalsIdentity", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 4 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries, VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries, "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;", 1 },
	{ "entries", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries, VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries, "()Lcom/badlogic/gdx/utils/ObjectMap$Entries;", 1 },
	{ "values", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values, VTABLE_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values, "()Lcom/badlogic/gdx/utils/ObjectMap$Values;", 1 },
	{ "keys", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys, VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys, "()Lcom/badlogic/gdx/utils/ObjectMap$Keys;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_ObjectMap, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_ObjectMap{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ObjectMap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectMap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectMap = registerClass(&class_com_badlogic_gdx_utils_ObjectMap);

}

