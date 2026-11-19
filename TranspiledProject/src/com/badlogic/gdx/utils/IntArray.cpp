#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/util/Arrays.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_utils_IntArray(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_IntArray *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_IntArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_utils_IntArray_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(38);
	init_com_badlogic_gdx_utils_IntArray_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntArray_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(54);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntArray_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_com_badlogic_gdx_utils_IntArray_boolean_Array1_int_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_IntArray_boolean_Array1_int_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(70);
	init_com_badlogic_gdx_utils_IntArray_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(71);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_add_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_add_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	if ((((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(84);
	ARRAY_ACCESS(jint, (frame[3].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(85);
	ARRAY_ACCESS(jint, (frame[3].o), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_add_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(91);
	if ((((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(92);
	ARRAY_ACCESS(jint, (frame[4].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(93);
	ARRAY_ACCESS(jint, (frame[4].o), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(94);
	ARRAY_ACCESS(jint, (frame[4].o), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_add_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(100);
	if ((((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))) < (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.8f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[5].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(101);
	ARRAY_ACCESS(jint, (frame[5].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(102);
	ARRAY_ACCESS(jint, (frame[5].o), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(103);
	ARRAY_ACCESS(jint, (frame[5].o), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(104);
	ARRAY_ACCESS(jint, (frame[5].o), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].i);
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(113);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:addAll", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(124);
	frame[5].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(125);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp1);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(126);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (frame[2].i), (frame[4].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntArray_get_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(131);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(136);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_incr_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:incr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(141);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_incr_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:incr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(147);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[1].i));
	LINE_NUMBER(147);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_mul_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:mul", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(152);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) * (frame[2].i));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_mul_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:mul", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) * (frame[1].i));
	LINE_NUMBER(158);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_insert_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(163);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(165);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(166);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(167);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(169);
	ARRAY_ACCESS(jint, (frame[3].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(171);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:insertRange", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(177);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(178);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[2].i));
	LINE_NUMBER(179);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[3].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[1].o, temp1);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[2].i)), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(181);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[3].i);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(185);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(186);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(189);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(190);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:replaceFirst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(199);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(200);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(201);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(199);
	INST_IINC(4, 1);
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

jint M_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:replaceAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(214);
	frame[4].i = (jint(0));
	LINE_NUMBER(215);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(216);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i))) != (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(217);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)) = (frame[2].i);
	LINE_NUMBER(218);
	INST_IINC(4, 1);
	}
label_7:;
	{
	LINE_NUMBER(215);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(227);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) != (frame[1].i)) goto label_2;
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

jint M_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(234);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(235);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(234);
	INST_IINC(3, 1);
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

jint M_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(241);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(242);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(241);
	INST_IINC(3, -1);
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

jbool M_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(248);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(249);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(248);
	INST_IINC(3, 1);
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

jint M_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(259);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(261);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(263);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(264);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(266);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(272);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
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
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_6;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (frame[1].i) + (frame[4].i);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), ((frame[3].i) - ((frame[1].i) + (frame[4].i))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[5].i), ((frame[2].i) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = frame[6].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[1].i), ((frame[3].i) - (frame[6].i)));
	}
label_8:;
	{
	LINE_NUMBER(282);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(289);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(291);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, (frame[1].o), (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(293);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(294);
	if ((frame[7].i) != ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[8].i)))) goto label_12;
	}
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(296);
	INST_IINC(2, -1);
	LINE_NUMBER(297);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(293);
	INST_IINC(8, 1);
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

jint M_com_badlogic_gdx_utils_IntArray_pop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntArray_peek_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntArray_first_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_IntArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(346);
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
	LINE_NUMBER(347);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(348);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp1);
	}
label_3:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(355);
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
	LINE_NUMBER(356);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(357);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(365);
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[2].o);
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_int_int_int(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(375);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(376);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(377);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(378);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(379);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(375);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(381);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(385);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(387);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(388);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(389);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i)) = (frame[4].i);
	LINE_NUMBER(385);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_IntArray_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:truncate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(396);
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
	LINE_NUMBER(397);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_2:;
	LINE_NUMBER(398);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntArray_random_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int(ctx, (jint(0)), (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_IntArray_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(415);
	frame[2].i = (jint(1));
	LINE_NUMBER(416);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(417);
	frame[2].i = (((frame[2].i) * (31)) + ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(416);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(423);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(424);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_IntArray)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(425);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntArray, (frame[1].o)));
	LINE_NUMBER(426);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(427);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(428);
	if ((frame[3].i) == ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[2].o)))->F_size)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(430);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(431);
	if (((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i))) == ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i)))) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(430);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[]"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(438);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[2].o = sp[0].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))));
	LINE_NUMBER(441);
	frame[3].i = (jint(1));
	}
label_6:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(441);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(450);
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(452);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))));
	LINE_NUMBER(454);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(454);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_IntArray_with_Array1_int_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/IntArray:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(463);
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_Array1_int(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_IntArray[] {
	(void *) M_com_badlogic_gdx_utils_IntArray_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_add_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_add_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_add_int_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_add_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray,
	(void *) M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_get_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_set_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_incr_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_incr_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_mul_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_mul_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_insert_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_insertRange_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_swap_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_removeRange_int_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntArray_pop_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_peek_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_first_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_IntArray_clear,
	(void *) M_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_sort,
	(void *) M_com_badlogic_gdx_utils_IntArray_reverse,
	(void *) M_com_badlogic_gdx_utils_IntArray_shuffle,
	(void *) M_com_badlogic_gdx_utils_IntArray_truncate_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_random_R_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int,
	(void *) M_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String,
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
	{ "add", "(I)V" },
	{ "add", "(II)V" },
	{ "add", "(III)V" },
	{ "add", "(IIII)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/IntArray;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/IntArray;II)V" },
	{ "addAll", "([I)V" },
	{ "addAll", "([III)V" },
	{ "get", "(I)I" },
	{ "set", "(II)V" },
	{ "incr", "(II)V" },
	{ "incr", "(I)V" },
	{ "mul", "(II)V" },
	{ "mul", "(I)V" },
	{ "insert", "(II)V" },
	{ "insertRange", "(II)V" },
	{ "swap", "(II)V" },
	{ "replaceFirst", "(II)Z" },
	{ "replaceAll", "(II)I" },
	{ "contains", "(I)Z" },
	{ "indexOf", "(I)I" },
	{ "lastIndexOf", "(I)I" },
	{ "removeValue", "(I)Z" },
	{ "removeIndex", "(I)I" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/IntArray;)Z" },
	{ "pop", "()I" },
	{ "peek", "()I" },
	{ "first", "()I" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "shrink", "()[I" },
	{ "ensureCapacity", "(I)[I" },
	{ "setSize", "(I)[I" },
	{ "resize", "(I)[I" },
	{ "sort", "()V" },
	{ "reverse", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()I" },
	{ "toArray", "()[I" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "items", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_utils_IntArray, F_items), "[I", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_IntArray, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(com_badlogic_gdx_utils_IntArray, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntArray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntArray_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntArray_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntArray_com_badlogic_gdx_utils_IntArray, 0, "(Lcom/badlogic/gdx/utils/IntArray;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntArray_Array1_int, 0, "([I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_IntArray_boolean_Array1_int_int_int, 0, "(Z[III)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_IntArray_add_int, VTABLE_com_badlogic_gdx_utils_IntArray_add_int, "(I)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_IntArray_add_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int, "(II)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_IntArray_add_int_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int_int, "(III)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_IntArray_add_int_int_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int_int_int, "(IIII)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray, VTABLE_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray, "(Lcom/badlogic/gdx/utils/IntArray;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int, "(Lcom/badlogic/gdx/utils/IntArray;II)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int, VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int, "([I)V", 129 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int, "([III)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_IntArray_get_int_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int, "(I)I", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_IntArray_set_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_set_int_int, "(II)V", 1 },
	{ "incr", (intptr_t) M_com_badlogic_gdx_utils_IntArray_incr_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_incr_int_int, "(II)V", 1 },
	{ "incr", (intptr_t) M_com_badlogic_gdx_utils_IntArray_incr_int, VTABLE_com_badlogic_gdx_utils_IntArray_incr_int, "(I)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_utils_IntArray_mul_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_mul_int_int, "(II)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_utils_IntArray_mul_int, VTABLE_com_badlogic_gdx_utils_IntArray_mul_int, "(I)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_IntArray_insert_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_insert_int_int, "(II)V", 1 },
	{ "insertRange", (intptr_t) M_com_badlogic_gdx_utils_IntArray_insertRange_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_insertRange_int_int, "(II)V", 1 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_utils_IntArray_swap_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_swap_int_int, "(II)V", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean, "(II)Z", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int, "(II)I", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean, "(I)Z", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int, "(I)I", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int, "(I)I", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean, "(I)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int, "(I)I", 1 },
	{ "removeRange", (intptr_t) M_com_badlogic_gdx_utils_IntArray_removeRange_int_int, VTABLE_com_badlogic_gdx_utils_IntArray_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean, "(Lcom/badlogic/gdx/utils/IntArray;)Z", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_IntArray_pop_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_pop_R_int, "()I", 1 },
	{ "peek", (intptr_t) M_com_badlogic_gdx_utils_IntArray_peek_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_peek_R_int, "()I", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_IntArray_first_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_first_R_int, "()I", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_IntArray_clear, VTABLE_com_badlogic_gdx_utils_IntArray_clear, "()V", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int, VTABLE_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int, "()[I", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int, VTABLE_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int, "(I)[I", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int, VTABLE_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int, "(I)[I", 1 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int, VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int, "(I)[I", 4 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_IntArray_sort, VTABLE_com_badlogic_gdx_utils_IntArray_sort, "()V", 1 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_IntArray_reverse, VTABLE_com_badlogic_gdx_utils_IntArray_reverse, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_IntArray_shuffle, VTABLE_com_badlogic_gdx_utils_IntArray_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_IntArray_truncate_int, VTABLE_com_badlogic_gdx_utils_IntArray_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_com_badlogic_gdx_utils_IntArray_random_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_random_R_int, "()I", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int, VTABLE_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int, "()[I", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_IntArray_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_IntArray_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_IntArray_with_Array1_int_R_com_badlogic_gdx_utils_IntArray, 0, "([I)Lcom/badlogic/gdx/utils/IntArray;", 137 },
};

Class class_com_badlogic_gdx_utils_IntArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/IntArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_IntArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_IntArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_IntArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_IntArray,
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
static bool registered_com_badlogic_gdx_utils_IntArray = registerClass(&class_com_badlogic_gdx_utils_IntArray);

}

