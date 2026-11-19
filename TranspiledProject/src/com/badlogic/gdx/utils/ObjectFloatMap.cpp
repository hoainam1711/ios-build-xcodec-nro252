#include "com/badlogic/gdx/utils/ObjectFloatMap.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Keys.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_MapIterator.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Entries.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Values.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ObjectFloatMap(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ObjectFloatMap *) object;
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

void clinit_com_badlogic_gdx_utils_ObjectFloatMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_ObjectFloatMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectFloatMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(71);
	init_com_badlogic_gdx_utils_ObjectFloatMap_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectFloatMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectFloatMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	init_com_badlogic_gdx_utils_ObjectFloatMap_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectFloatMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectFloatMap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(84);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(85);
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
	LINE_NUMBER(86);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(88);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(89);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(90);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectFloatMap_com_badlogic_gdx_utils_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectFloatMap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_loadFactor)))));
	init_com_badlogic_gdx_utils_ObjectFloatMap_int_float(ctx, sp[0].o, (jint(temp0)), ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp2 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, temp2, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	jint temp3 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp4 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp3, sp[1].o, temp4, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(102);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(129);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(130);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(128);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(137);
	if ((frame[3].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(141);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_8:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(151);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_2:;
	{
	LINE_NUMBER(156);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:putMissing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(165);
	if ((frame[3].i) < 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(166);
	frame[3].i = (-((frame[3].i) + (jint(1))));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[2].f);
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:putMissing", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(174);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	}
label_2:;
	{
	LINE_NUMBER(175);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(177);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_6:;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_putAll_com_badlogic_gdx_utils_ObjectFloatMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:putAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	((func_com_badlogic_gdx_utils_ObjectFloatMap_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[1].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(187);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(188);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(189);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	((func_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float])(ctx, (frame[0].o), (frame[4].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[5].i))));
	}
label_9:;
	{
	LINE_NUMBER(187);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_putResize_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:putResize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(196);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(197);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(198);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[2].f);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(196);
	frame[4].i = (((frame[4].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_ObjectFloatMap_get_java_lang_Object_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(209);
	if ((frame[3].i) >= 0) goto label_2;
	}
	INST_FLOAD(2);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_ObjectFloatMap_getAndIncrement_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:getAndIncrement", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(215);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(216);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[3].f));
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[5].f);
	}
label_2:;
	{
	LINE_NUMBER(221);
	frame[4].i = (-((frame[4].i) + (jint(1))));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (frame[1].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = ((frame[2].f) + (frame[3].f));
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_utils_ObjectFloatMap_remove_java_lang_Object_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:remove", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(232);
	if ((frame[3].i) >= 0) goto label_2;
	}
	INST_FLOAD(2);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(235);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)));
	LINE_NUMBER(236);
	frame[7].i = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[8].i = (((frame[3].i) + (jint(1))) & (frame[7].i));
	}
label_7:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[9].i = temp0;
	LINE_NUMBER(239);
	if ((((frame[8].i) - (frame[9].i)) & (frame[7].i)) <= (((frame[3].i) - (frame[9].i)) & (frame[7].i))) goto label_11;
	}
	{
	LINE_NUMBER(240);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(241);
	ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[8].i)));
	LINE_NUMBER(242);
	frame[3].i = (frame[8].i);
	}
label_11:;
	{
	LINE_NUMBER(244);
	frame[8].i = (((frame[8].i) + (jint(1))) & (frame[7].i));
	LINE_NUMBER(245);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(246);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)) = (jobject(nullptr));
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (frame[6].f);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectFloatMap_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_ObjectFloatMap_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_ObjectFloatMap_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(265);
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
	LINE_NUMBER(266);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_3;
	}
	{
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(274);
	((func_com_badlogic_gdx_utils_ObjectFloatMap_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_clear])(ctx, (frame[0].o));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(277);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(278);
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(283);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:containsValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(291);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(292);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(293);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) == nullptr) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))), (frame[1].f), -1)) != 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(292);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:containsValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(302);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(303);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))) == nullptr) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_6;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(302);
	INST_IINC(5, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectFloatMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:containsKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:findKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(316);
	frame[4].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(317);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(318);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))), (frame[1].f), -1)) != 0) goto label_7;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(316);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:findKey", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(328);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(329);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(330);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_7;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(328);
	INST_IINC(5, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	((func_com_badlogic_gdx_utils_ObjectFloatMap_resize_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int])(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(340);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectFloatMap_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(344);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(345);
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_valueTable = (jref) sp[1].o;
	LINE_NUMBER(354);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(355);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(356);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(357);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	M_com_badlogic_gdx_utils_ObjectFloatMap_putResize_java_lang_Object_float(ctx, (frame[0].o), (frame[6].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))));
	}
label_14:;
	{
	LINE_NUMBER(355);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectFloatMap_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:hashCode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(366);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(367);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(368);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[6].o));
	jint temp2 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i))));
	frame[1].i = (temp0 + (temp1 + temp2));
	}
label_9:;
	{
	LINE_NUMBER(366);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectFloatMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:equals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(375);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectFloatMap)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(376);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap, (frame[1].o)));
	LINE_NUMBER(377);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(379);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(380);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(381);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(382);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(383);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, (frame[2].o), (frame[7].o), (jfloat(0)));
	frame[8].f = temp0;
	LINE_NUMBER(384);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectFloatMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(385);
	if ((floatCompare((frame[8].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i))), -1)) == 0) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(380);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:toString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(400);
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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
	LINE_NUMBER(401);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(402);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (123));
	}
label_5:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(404);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_valueTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(405);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	}
label_8:;
	{
	LINE_NUMBER(406);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(407);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(408);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	goto label_8;
label_12:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i))));
	LINE_NUMBER(412);
	goto label_9;
	}
label_9:;
	{
	LINE_NUMBER(414);
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	if (temp0 <= 0) goto label_16;
	}
	{
	LINE_NUMBER(415);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(416);
	if ((frame[7].o) != nullptr) goto label_19;
	}
	goto label_9;
label_19:;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i))));
	LINE_NUMBER(421);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(422);
	if ((frame[2].i) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (125));
	}
label_24:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:entries", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Entries(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Entries);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Entries_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(437);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Entries);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Entries_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_entries1 = (jref) sp[1].o;
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Entries(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Entries);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Entries_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_entries2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(442);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Entries_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Entries_reset])(ctx, sp[0].o);
	LINE_NUMBER(447);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries1;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_entries2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_values_R_com_badlogic_gdx_utils_ObjectFloatMap$Values(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:values", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(457);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Values);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Values_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Values);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Values_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_values1 = (jref) sp[1].o;
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Values);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Values_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_values2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset])(ctx, sp[0].o);
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values1;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(471);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_values2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_keys_R_com_badlogic_gdx_utils_ObjectFloatMap$Keys(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:keys", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Keys(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Keys);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Keys_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Keys);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Keys_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keys1 = (jref) sp[1].o;
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectFloatMap$Keys(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Keys);
	init_com_badlogic_gdx_utils_ObjectFloatMap$Keys_com_badlogic_gdx_utils_ObjectFloatMap(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_keys2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	if (((jint)((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(486);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((func_com_badlogic_gdx_utils_ObjectFloatMap$Keys_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Keys_reset])(ctx, sp[0].o);
	LINE_NUMBER(491);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(492);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys1;
	((com_badlogic_gdx_utils_ObjectFloatMap$MapIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(493);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap *) NULL_CHECK((frame[0].o)))->F_keys2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectFloatMap:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectFloatMap[] {
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float_float_R_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_putAll_com_badlogic_gdx_utils_ObjectFloatMap,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_putResize_java_lang_Object_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_get_java_lang_Object_float_R_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_getAndIncrement_java_lang_Object_float_float_R_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_remove_java_lang_Object_float_R_float,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_shrink_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_clear_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_clear,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_float_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_resize_int,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_values_R_com_badlogic_gdx_utils_ObjectFloatMap$Values,
	(void *) M_com_badlogic_gdx_utils_ObjectFloatMap_keys_R_com_badlogic_gdx_utils_ObjectFloatMap$Keys,
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
	{ "put", "(Ljava/lang/Object;F)V" },
	{ "put", "(Ljava/lang/Object;FF)F" },
	{ "putMissing", "(Ljava/lang/Object;F)V" },
	{ "putMissing", "(Ljava/lang/Object;FF)F" },
	{ "putAll", "(Lcom/badlogic/gdx/utils/ObjectFloatMap;)V" },
	{ "putResize", "(Ljava/lang/Object;F)V" },
	{ "get", "(Ljava/lang/Object;F)F" },
	{ "getAndIncrement", "(Ljava/lang/Object;FF)F" },
	{ "remove", "(Ljava/lang/Object;F)F" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(F)Z" },
	{ "containsValue", "(FF)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(F)Ljava/lang/Object;" },
	{ "findKey", "(FF)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Entries;" },
	{ "entries", "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Entries;" },
	{ "values", "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Values;" },
	{ "keys", "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Keys;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_ObjectFloatMap$Entries,
	&class_com_badlogic_gdx_utils_ObjectFloatMap$Values,
	&class_com_badlogic_gdx_utils_ObjectFloatMap$Keys,
	&class_com_badlogic_gdx_utils_ObjectFloatMap$MapIterator,
	&class_com_badlogic_gdx_utils_ObjectFloatMap$Entry,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "valueTable", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_valueTable), "[F", 0 },
	{ "loadFactor", &class_float, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_mask), "I", 4 },
	{ "entries1", &class_com_badlogic_gdx_utils_ObjectFloatMap$Entries, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_entries1), "Lcom/badlogic/gdx/utils/ObjectFloatMap$Entries;", 128 },
	{ "entries2", &class_com_badlogic_gdx_utils_ObjectFloatMap$Entries, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_entries2), "Lcom/badlogic/gdx/utils/ObjectFloatMap$Entries;", 128 },
	{ "values1", &class_com_badlogic_gdx_utils_ObjectFloatMap$Values, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_values1), "Lcom/badlogic/gdx/utils/ObjectFloatMap$Values;", 128 },
	{ "values2", &class_com_badlogic_gdx_utils_ObjectFloatMap$Values, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_values2), "Lcom/badlogic/gdx/utils/ObjectFloatMap$Values;", 128 },
	{ "keys1", &class_com_badlogic_gdx_utils_ObjectFloatMap$Keys, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_keys1), "Lcom/badlogic/gdx/utils/ObjectFloatMap$Keys;", 128 },
	{ "keys2", &class_com_badlogic_gdx_utils_ObjectFloatMap$Keys, offsetof(com_badlogic_gdx_utils_ObjectFloatMap, F_keys2), "Lcom/badlogic/gdx/utils/ObjectFloatMap$Keys;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectFloatMap, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectFloatMap_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectFloatMap_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectFloatMap_com_badlogic_gdx_utils_ObjectFloatMap, 0, "(Lcom/badlogic/gdx/utils/ObjectFloatMap;)V", 1 },
	{ "place", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "put", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float_float_R_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float_float_R_float, "(Ljava/lang/Object;FF)F", 1 },
	{ "putMissing", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float, "(Ljava/lang/Object;F)V", 1 },
	{ "putMissing", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float, "(Ljava/lang/Object;FF)F", 1 },
	{ "putAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_putAll_com_badlogic_gdx_utils_ObjectFloatMap, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_putAll_com_badlogic_gdx_utils_ObjectFloatMap, "(Lcom/badlogic/gdx/utils/ObjectFloatMap;)V", 1 },
	{ "putResize", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_putResize_java_lang_Object_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_putResize_java_lang_Object_float, "(Ljava/lang/Object;F)V", 2 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_get_java_lang_Object_float_R_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_get_java_lang_Object_float_R_float, "(Ljava/lang/Object;F)F", 1 },
	{ "getAndIncrement", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_getAndIncrement_java_lang_Object_float_float_R_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_getAndIncrement_java_lang_Object_float_float_R_float, "(Ljava/lang/Object;FF)F", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_remove_java_lang_Object_float_R_float, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_remove_java_lang_Object_float_R_float, "(Ljava/lang/Object;F)F", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_shrink_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_clear_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_clear, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_clear, "()V", 1 },
	{ "containsValue", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_R_boolean, "(F)Z", 1 },
	{ "containsValue", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_float_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_containsValue_float_float_R_boolean, "(FF)Z", 1 },
	{ "containsKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_containsKey_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_containsKey_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "findKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_R_java_lang_Object, "(F)Ljava/lang/Object;", 1 },
	{ "findKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_float_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_findKey_float_float_R_java_lang_Object, "(FF)Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_resize_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_resize_int, "(I)V", 16 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 2 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries, "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Entries;", 1 },
	{ "entries", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries, "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Entries;", 1 },
	{ "values", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_values_R_com_badlogic_gdx_utils_ObjectFloatMap$Values, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_values_R_com_badlogic_gdx_utils_ObjectFloatMap$Values, "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Values;", 1 },
	{ "keys", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_keys_R_com_badlogic_gdx_utils_ObjectFloatMap$Keys, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_keys_R_com_badlogic_gdx_utils_ObjectFloatMap$Keys, "()Lcom/badlogic/gdx/utils/ObjectFloatMap$Keys;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_ObjectFloatMap{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectFloatMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ObjectFloatMap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectFloatMap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectFloatMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectFloatMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectFloatMap = registerClass(&class_com_badlogic_gdx_utils_ObjectFloatMap);

}

