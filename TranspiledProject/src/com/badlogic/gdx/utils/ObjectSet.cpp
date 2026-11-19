#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "com/badlogic/gdx/utils/ObjectSet_ObjectSetIterator.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Iterator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/Collections.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/util/Arrays.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_ObjectSet(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_ObjectSet *) object;
	if (self->F_keyTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyTable)->clazz)->markFunction)((jobject) self->F_keyTable, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_ObjectSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(68);
	init_com_badlogic_gdx_utils_ObjectSet_int_float(ctx, (frame[0].o), (51), (jfloat(0.8f)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	init_com_badlogic_gdx_utils_ObjectSet_int_float(ctx, (frame[0].o), (frame[1].i), (jfloat(0.8f)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(80);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) < 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(82);
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
	LINE_NUMBER(83);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor = (frame[2].f);
	LINE_NUMBER(85);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), (frame[2].f));
	frame[3].i = temp0;
	LINE_NUMBER(86);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[3].i))) * (frame[2].f))));
	LINE_NUMBER(87);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_shift = temp1;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[3].i));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_ObjectSet_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	init_com_badlogic_gdx_utils_ObjectSet_int_float(ctx, sp[0].o, (jint(((jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))) * ((jfloat)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_loadFactor)))), ((jfloat)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_loadFactor));
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(97);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:place", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong(temp0)) * (jlong(-7046029254386353131ll)))) >> ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_shift)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:locateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"key cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(124);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(125);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	popStackFrame(ctx);
	return (-((frame[3].i) + (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(123);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_3;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(134);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(135);
	frame[2].i = (-((frame[2].i) + (jint(1))));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) + (jint(1));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size = temp0;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_threshold)) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	M_com_badlogic_gdx_utils_ObjectSet_resize_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) << (jint(1))));
	}
label_5:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(146);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(147);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:addAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(156);
	((func_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(157);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(158);
	frame[5].i = (frame[2].i);
	frame[6].i = ((frame[5].i) + (frame[3].i));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(158);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(160);
	if ((frame[4].i) == ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:addAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	((func_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(165);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(167);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(168);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(169);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(167);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:addResize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(177);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(178);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = (frame[1].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(176);
	frame[3].i = (((frame[3].i) + (jint(1))) & ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask));
	goto label_2;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:remove", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(187);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(189);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask);
	frame[5].i = (((frame[2].i) + (jint(1))) & (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(192);
	if ((((frame[5].i) - (frame[6].i)) & (frame[4].i)) <= (((frame[2].i) - (frame[6].i)) & (frame[4].i))) goto label_9;
	}
	{
	LINE_NUMBER(193);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(194);
	frame[2].i = (frame[5].i);
	}
label_9:;
	{
	LINE_NUMBER(196);
	frame[5].i = (((frame[5].i) + (jint(1))) & (frame[4].i));
	LINE_NUMBER(197);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(198);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_ObjectSet_shrink_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:shrink", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(217);
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
	LINE_NUMBER(218);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (frame[2].i)) goto label_3;
	}
	{
	M_com_badlogic_gdx_utils_ObjectSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(226);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (frame[1].i), ((jfloat)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(228);
	((func_com_badlogic_gdx_utils_ObjectSet_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_clear])(ctx, (frame[0].o));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(231);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(232);
	M_com_badlogic_gdx_utils_ObjectSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(239);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(249);
	if ((frame[2].i) >= 0) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:first", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(254);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(255);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))) == nullptr) goto label_6;
	}
	{
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(254);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(256);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ObjectSet is empty."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:ensureCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(262);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(ctx, (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), ((jfloat)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor));
	frame[2].i = temp0;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_ObjectSet_resize_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_ObjectSet_resize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:resize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(268);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_threshold = (jint(((jfloat((frame[1].i))) * ((jfloat)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_loadFactor))));
	LINE_NUMBER(269);
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (jlong(((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_mask))));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_shift = temp0;
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_keyTable = (jref) sp[1].o;
	LINE_NUMBER(275);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(276);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(277);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(278);
	if ((frame[5].o) == nullptr) goto label_12;
	}
	{
	M_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object(ctx, (frame[0].o), (frame[5].o));
	}
label_12:;
	{
	LINE_NUMBER(276);
	INST_IINC(4, 1);
	goto label_9;
	}
label_7:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(287);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(288);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[1].i = (temp0 + temp1);
	}
label_8:;
	{
	LINE_NUMBER(286);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectSet)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(295);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectSet, (frame[1].o)));
	LINE_NUMBER(296);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[2].o)))->F_size) == ((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(298);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(299);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 != 0) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(298);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(309);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_keyTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(311);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_4:;
	{
	LINE_NUMBER(312);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(313);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(314);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	goto label_4;
label_8:;
	{
	LINE_NUMBER(315);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[5].o) != (frame[0].o)) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_10;
label_9:;
	INST_ALOAD(5);
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(316);
	goto label_5;
	}
label_5:;
	{
	LINE_NUMBER(318);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_12;
	}
	{
	LINE_NUMBER(319);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(320);
	if ((frame[5].o) != nullptr) goto label_15;
	}
	goto label_5;
label_15:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(322);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[5].o) != (frame[0].o)) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this)"_j));
	goto label_18;
label_17:;
	INST_ALOAD(5);
label_18:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator);
	init_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_com_badlogic_gdx_utils_ObjectSet(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator);
	init_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_com_badlogic_gdx_utils_ObjectSet(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator);
	init_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_com_badlogic_gdx_utils_ObjectSet(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((func_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((func_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator_reset])(ctx, sp[0].o);
	LINE_NUMBER(344);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_ObjectSet_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:with", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(350);
	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectSet);
	init_com_badlogic_gdx_utils_ObjectSet_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(351);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:tableSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_ObjectSet(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(356);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"capacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(357);
	jint temp0 = jint(2);
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat((frame[0].i))) / (frame[1].f)))));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(temp1)));
	jint temp3 = (jint)SM_com_badlogic_gdx_math_MathUtils_nextPowerOfTwo_int_R_int(ctx, temp2);
	frame[2].i = temp3;
	LINE_NUMBER(358);
	if ((frame[2].i) <= (jint(1073741824))) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"The required capacity is too large: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/ObjectSet:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_ObjectSet[] {
	(void *) M_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_shrink_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_clear_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_clear,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_resize_int,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
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
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;II)V" },
	{ "addAll", "([Ljava/lang/Object;)Z" },
	{ "addAll", "([Ljava/lang/Object;II)Z" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/ObjectSet;)V" },
	{ "addResize", "(Ljava/lang/Object;)V" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "iterator", "()Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator,
};

static FieldMetadata fields[] {
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_ObjectSet, F_size), "I", 1 },
	{ "keyTable", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_ObjectSet, F_keyTable), "[Ljava/lang/Object;", 0 },
	{ "loadFactor", &class_float, offsetof(com_badlogic_gdx_utils_ObjectSet, F_loadFactor), "F", 0 },
	{ "threshold", &class_int, offsetof(com_badlogic_gdx_utils_ObjectSet, F_threshold), "I", 0 },
	{ "shift", &class_int, offsetof(com_badlogic_gdx_utils_ObjectSet, F_shift), "I", 4 },
	{ "mask", &class_int, offsetof(com_badlogic_gdx_utils_ObjectSet, F_mask), "I", 4 },
	{ "iterator1", &class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, offsetof(com_badlogic_gdx_utils_ObjectSet, F_iterator1), "Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;", 130 },
	{ "iterator2", &class_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, offsetof(com_badlogic_gdx_utils_ObjectSet, F_iterator2), "Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectSet, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectSet_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectSet_int_float, 0, "(IF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_ObjectSet_com_badlogic_gdx_utils_ObjectSet, 0, "(Lcom/badlogic/gdx/utils/ObjectSet;)V", 1 },
	{ "place", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4 },
	{ "locateKey", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 0 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int, "(Lcom/badlogic/gdx/utils/Array;II)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean, "([Ljava/lang/Object;)Z", 129 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean, "([Ljava/lang/Object;II)Z", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet, VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet, "(Lcom/badlogic/gdx/utils/ObjectSet;)V", 1 },
	{ "addResize", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object, "(Ljava/lang/Object;)V", 2 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean, "()Z", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_shrink_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_shrink_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_clear_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_clear_int, "(I)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_clear, VTABLE_com_badlogic_gdx_utils_ObjectSet_clear, "()V", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int, "(I)V", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_resize_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_resize_int, "(I)V", 2 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator, "()Lcom/badlogic/gdx/utils/ObjectSet$ObjectSetIterator;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_ObjectSet_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_ObjectSet, 0, "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/ObjectSet;", 137 },
	{ "tableSize", (intptr_t) SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int, 0, "(IF)I", 8 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 4161 },
};

Class class_com_badlogic_gdx_utils_ObjectSet{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/ObjectSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_ObjectSet),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_ObjectSet,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_ObjectSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_ObjectSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_ObjectSet = registerClass(&class_com_badlogic_gdx_utils_ObjectSet);

}

