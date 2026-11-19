#include "com/badlogic/gdx/utils/LongArray.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Arrays.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/LongArray.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_LongArray(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_LongArray *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_LongArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_utils_LongArray_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_LongArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_utils_LongArray_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_LongArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (frame[2].i));
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_LongArray_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(54);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_LongArray_Array1_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_com_badlogic_gdx_utils_LongArray_boolean_Array1_long_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_LongArray_boolean_Array1_long_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(70);
	init_com_badlogic_gdx_utils_LongArray_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(71);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_add_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(77);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[1].o))->F_size;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (frame[1].l);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_add_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(83);
	if ((((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(84);
	ARRAY_ACCESS(jlong, (frame[5].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].l);
	LINE_NUMBER(85);
	ARRAY_ACCESS(jlong, (frame[5].o), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[3].l);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_add_long_long_long(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:add", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	frame[5].l = param2;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[7].o = sp[0].o;
	LINE_NUMBER(91);
	if ((((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp0);
	frame[7].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(92);
	ARRAY_ACCESS(jlong, (frame[7].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].l);
	LINE_NUMBER(93);
	ARRAY_ACCESS(jlong, (frame[7].o), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[3].l);
	LINE_NUMBER(94);
	ARRAY_ACCESS(jlong, (frame[7].o), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[5].l);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_add_long_long_long_long(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jlong param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:add", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	frame[5].l = param2;
	frame[7].l = param3;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[9].o = sp[0].o;
	LINE_NUMBER(100);
	if ((((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[9].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp0);
	frame[9].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(101);
	ARRAY_ACCESS(jlong, (frame[9].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].l);
	LINE_NUMBER(102);
	ARRAY_ACCESS(jlong, (frame[9].o), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[3].l);
	LINE_NUMBER(103);
	ARRAY_ACCESS(jlong, (frame[9].o), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[5].l);
	LINE_NUMBER(104);
	ARRAY_ACCESS(jlong, (frame[9].o), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[7].l);
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(113);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(114);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(124);
	frame[5].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(125);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp1);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(126);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongArray_get_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(131);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_set_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(136);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[1].i)) = (frame[2].l);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_incr_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:incr", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(141);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) + (frame[2].l));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_incr_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:incr", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(147);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) + (frame[1].l));
	LINE_NUMBER(147);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_mul_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:mul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(152);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) * (frame[2].l));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_mul_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:mul", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(158);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)) * (frame[1].l));
	LINE_NUMBER(158);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_insert_int_long(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:insert", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(163);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(165);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(166);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(167);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (frame[1].i), (frame[4].o), ((frame[1].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(169);
	ARRAY_ACCESS(jlong, (frame[4].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) = ((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(171);
	ARRAY_ACCESS(jlong, (frame[4].o), (frame[1].i)) = (frame[2].l);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:insertRange", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(177);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be > size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(178);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[2].i));
	LINE_NUMBER(179);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[3].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[1].o, temp1);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[2].i)), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(181);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[3].i);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:swap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(185);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"first can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(186);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"second can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	frame[4].l = ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(189);
	ARRAY_ACCESS(jlong, (frame[3].o), (frame[1].i)) = ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(190);
	ARRAY_ACCESS(jlong, (frame[3].o), (frame[2].i)) = (frame[4].l);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:replaceFirst", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(199);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_4;
	}
	{
	LINE_NUMBER(200);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[5].o), (frame[6].i))), (frame[1].l))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(201);
	ARRAY_ACCESS(jlong, (frame[5].o), (frame[6].i)) = (frame[3].l);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(199);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:replaceAll", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(214);
	frame[6].i = (jint(0));
	LINE_NUMBER(215);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_4:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_5;
	}
	{
	LINE_NUMBER(216);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[5].o), (frame[7].i))), (frame[1].l))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(217);
	ARRAY_ACCESS(jlong, (frame[5].o), (frame[7].i)) = (frame[3].l);
	LINE_NUMBER(218);
	INST_IINC(6, 1);
	}
label_7:;
	{
	LINE_NUMBER(215);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:contains", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(225);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(227);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0)), (frame[1].l))) != 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:indexOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(234);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(235);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[4].i))), (frame[1].l))) != 0) goto label_6;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(234);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:lastIndexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(241);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(242);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[4].i))), (frame[1].l))) != 0) goto label_5;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(241);
	INST_IINC(4, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:removeValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(248);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(249);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[4].i))), (frame[1].l))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(250);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(248);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:removeIndex", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(259);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(261);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(263);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(264);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(266);
	ARRAY_ACCESS(jlong, (frame[2].o), (frame[1].i)) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(272);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(273);
	if ((frame[2].i) < (frame[3].i)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end can't be >= size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(274);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start can't be > end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(275);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	frame[5].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(276);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_6;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (frame[1].i) + (frame[4].i);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), ((frame[3].i) - ((frame[1].i) + (frame[4].i))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[5].i), ((frame[2].i) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = frame[6].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[1].i), ((frame[3].i) - (frame[6].i)));
	}
label_8:;
	{
	LINE_NUMBER(282);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:removeAll", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(289);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(291);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(292);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_LongArray_get_int_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_get_int_R_long])(ctx, (frame[1].o), (frame[5].i));
	frame[7].l = temp0;
	LINE_NUMBER(293);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(294);
	if ((longCompare((frame[7].l), ((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[9].i))))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(295);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long])(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(296);
	INST_IINC(2, -1);
	LINE_NUMBER(297);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(293);
	INST_IINC(9, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(291);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(301);
	if ((frame[2].i) == (frame[3].i)) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongArray_pop_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongArray_peek_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongArray_first_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(324);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_LongArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(348);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"additionalCapacity must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(349);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(350);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp1);
	}
label_3:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(357);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"newSize must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(358);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(359);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(367);
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_long_int_int(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:reverse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(377);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(378);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(379);
	frame[6].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(380);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)) = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(381);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[5].i)) = (frame[6].l);
	LINE_NUMBER(377);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(383);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:shuffle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(387);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(388);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(389);
	frame[4].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(390);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)) = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(391);
	ARRAY_ACCESS(jlong, (frame[1].o), (frame[3].i)) = (frame[4].l);
	LINE_NUMBER(387);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_LongArray_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:truncate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(398);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"newSize must be >= 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(399);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_2:;
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_LongArray_random_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(404);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_LCONST(0);
	popStackFrame(ctx);
	INST_LRETURN();
label_1:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int(ctx, (jint(0)), (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jlong)ARRAY_ACCESS(jlong, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject) createArray(ctx, &class_long, ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_LongArray_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:hashCode", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(417);
	frame[2].i = (jint(1));
	LINE_NUMBER(418);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(419);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(420);
	frame[2].i = (((frame[2].i) * (31)) + (jint(((frame[5].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (32)))))));
	LINE_NUMBER(418);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(427);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(428);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_LongArray)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(429);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_LongArray, (frame[1].o)));
	LINE_NUMBER(430);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(431);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(432);
	if ((frame[3].i) == ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(434);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(435);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[6].i))), ((jlong)ARRAY_ACCESS(jlong, (frame[5].o), (frame[6].i))))) == 0) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(434);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(440);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(442);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (jint(0)))));
	LINE_NUMBER(445);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(445);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	if (((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(456);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (jint(0)))));
	LINE_NUMBER(458);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_utils_LongArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(458);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_LongArray_with_Array1_long_R_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/LongArray:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(467);
	clinit_com_badlogic_gdx_utils_LongArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_LongArray);
	init_com_badlogic_gdx_utils_LongArray_Array1_long(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_LongArray[] {
	(void *) M_com_badlogic_gdx_utils_LongArray_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_add_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_add_long_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_add_long_long_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_add_long_long_long_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray,
	(void *) M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_get_int_R_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_set_int_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_incr_int_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_incr_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_mul_int_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_mul_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_insert_int_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_insertRange_int_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_swap_int_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean,
	(void *) M_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean,
	(void *) M_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean,
	(void *) M_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_removeRange_int_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean,
	(void *) M_com_badlogic_gdx_utils_LongArray_pop_R_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_peek_R_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_first_R_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_LongArray_clear,
	(void *) M_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_sort,
	(void *) M_com_badlogic_gdx_utils_LongArray_reverse,
	(void *) M_com_badlogic_gdx_utils_LongArray_shuffle,
	(void *) M_com_badlogic_gdx_utils_LongArray_truncate_int,
	(void *) M_com_badlogic_gdx_utils_LongArray_random_R_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long,
	(void *) M_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String,
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
	{ "add", "(J)V" },
	{ "add", "(JJ)V" },
	{ "add", "(JJJ)V" },
	{ "add", "(JJJJ)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/LongArray;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/LongArray;II)V" },
	{ "addAll", "([J)V" },
	{ "addAll", "([JII)V" },
	{ "get", "(I)J" },
	{ "set", "(IJ)V" },
	{ "incr", "(IJ)V" },
	{ "incr", "(J)V" },
	{ "mul", "(IJ)V" },
	{ "mul", "(J)V" },
	{ "insert", "(IJ)V" },
	{ "insertRange", "(II)V" },
	{ "swap", "(II)V" },
	{ "replaceFirst", "(JJ)Z" },
	{ "replaceAll", "(JJ)I" },
	{ "contains", "(J)Z" },
	{ "indexOf", "(J)I" },
	{ "lastIndexOf", "(J)I" },
	{ "removeValue", "(J)Z" },
	{ "removeIndex", "(I)J" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/LongArray;)Z" },
	{ "pop", "()J" },
	{ "peek", "()J" },
	{ "first", "()J" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[J" },
	{ "ensureCapacity", "(I)[J" },
	{ "setSize", "(I)[J" },
	{ "resize", "(I)[J" },
	{ "sort", "()V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()J" },
	{ "toArray", "()[J" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_long, 1), offsetof(com_badlogic_gdx_utils_LongArray, F_items), "[J", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_LongArray, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(com_badlogic_gdx_utils_LongArray, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongArray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongArray_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongArray_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongArray_com_badlogic_gdx_utils_LongArray, 0, "(Lcom/badlogic/gdx/utils/LongArray;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongArray_Array1_long, 0, "([J)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_LongArray_boolean_Array1_long_int_int, 0, "(Z[JII)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_LongArray_add_long, VTABLE_com_badlogic_gdx_utils_LongArray_add_long, "(J)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_LongArray_add_long_long, VTABLE_com_badlogic_gdx_utils_LongArray_add_long_long, "(JJ)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_LongArray_add_long_long_long, VTABLE_com_badlogic_gdx_utils_LongArray_add_long_long_long, "(JJJ)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_LongArray_add_long_long_long_long, VTABLE_com_badlogic_gdx_utils_LongArray_add_long_long_long_long, "(JJJJ)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray, VTABLE_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray, "(Lcom/badlogic/gdx/utils/LongArray;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int, VTABLE_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int, "(Lcom/badlogic/gdx/utils/LongArray;II)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long, VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long, "([J)V", 129 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int, VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int, "([JII)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_LongArray_get_int_R_long, VTABLE_com_badlogic_gdx_utils_LongArray_get_int_R_long, "(I)J", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_LongArray_set_int_long, VTABLE_com_badlogic_gdx_utils_LongArray_set_int_long, "(IJ)V", 1 },
	{ "incr", (intptr_t) M_com_badlogic_gdx_utils_LongArray_incr_int_long, VTABLE_com_badlogic_gdx_utils_LongArray_incr_int_long, "(IJ)V", 1 },
	{ "incr", (intptr_t) M_com_badlogic_gdx_utils_LongArray_incr_long, VTABLE_com_badlogic_gdx_utils_LongArray_incr_long, "(J)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_utils_LongArray_mul_int_long, VTABLE_com_badlogic_gdx_utils_LongArray_mul_int_long, "(IJ)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_utils_LongArray_mul_long, VTABLE_com_badlogic_gdx_utils_LongArray_mul_long, "(J)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_LongArray_insert_int_long, VTABLE_com_badlogic_gdx_utils_LongArray_insert_int_long, "(IJ)V", 1 },
	{ "insertRange", (intptr_t) M_com_badlogic_gdx_utils_LongArray_insertRange_int_int, VTABLE_com_badlogic_gdx_utils_LongArray_insertRange_int_int, "(II)V", 1 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_utils_LongArray_swap_int_int, VTABLE_com_badlogic_gdx_utils_LongArray_swap_int_int, "(II)V", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean, "(JJ)Z", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int, VTABLE_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int, "(JJ)I", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean, "(J)Z", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int, VTABLE_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int, "(J)I", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int, VTABLE_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int, "(J)I", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean, "(J)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long, VTABLE_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long, "(I)J", 1 },
	{ "removeRange", (intptr_t) M_com_badlogic_gdx_utils_LongArray_removeRange_int_int, VTABLE_com_badlogic_gdx_utils_LongArray_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean, "(Lcom/badlogic/gdx/utils/LongArray;)Z", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_LongArray_pop_R_long, VTABLE_com_badlogic_gdx_utils_LongArray_pop_R_long, "()J", 1 },
	{ "peek", (intptr_t) M_com_badlogic_gdx_utils_LongArray_peek_R_long, VTABLE_com_badlogic_gdx_utils_LongArray_peek_R_long, "()J", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_LongArray_first_R_long, VTABLE_com_badlogic_gdx_utils_LongArray_first_R_long, "()J", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_LongArray_clear, VTABLE_com_badlogic_gdx_utils_LongArray_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long, VTABLE_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long, "()[J", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long, VTABLE_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long, "(I)[J", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long, VTABLE_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long, "(I)[J", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long, VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long, "(I)[J", 4 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_LongArray_sort, VTABLE_com_badlogic_gdx_utils_LongArray_sort, "()V", 1 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_LongArray_reverse, VTABLE_com_badlogic_gdx_utils_LongArray_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_LongArray_shuffle, VTABLE_com_badlogic_gdx_utils_LongArray_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_LongArray_truncate_int, VTABLE_com_badlogic_gdx_utils_LongArray_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_com_badlogic_gdx_utils_LongArray_random_R_long, VTABLE_com_badlogic_gdx_utils_LongArray_random_R_long, "()J", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long, VTABLE_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long, "()[J", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_LongArray_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_LongArray_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_LongArray_with_Array1_long_R_com_badlogic_gdx_utils_LongArray, 0, "([J)Lcom/badlogic/gdx/utils/LongArray;", 137 },
};

Class class_com_badlogic_gdx_utils_LongArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/LongArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_LongArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_LongArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_LongArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_LongArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_LongArray = registerClass(&class_com_badlogic_gdx_utils_LongArray);

}

