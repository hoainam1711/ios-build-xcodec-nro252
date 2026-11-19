#include "com/badlogic/gdx/utils/CharArray.h"
#include "com/badlogic/gdx/utils/CharArray_CharArrayWriter.h"
#include "java/lang/StringBuilder.h"
#include "java/io/Writer.h"
#include "java/lang/Iterable.h"
#include "java/lang/Appendable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "java/lang/Readable.h"
#include "java/io/Reader.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Iterator.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/CharArray.h"
#include "java/lang/RuntimeException.h"
#include "java/util/Objects.h"
#include "com/badlogic/gdx/utils/CharArray_CharArrayReader.h"
#include "java/lang/System.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_CharArray_CAPACITY;
jint SF_com_badlogic_gdx_utils_CharArray_EOS;
jint SF_com_badlogic_gdx_utils_CharArray_FALSE_STRING_SIZE;
jint SF_com_badlogic_gdx_utils_CharArray_TRUE_STRING_SIZE;
jobject SF_com_badlogic_gdx_utils_CharArray_NULL;
jobject SF_com_badlogic_gdx_utils_CharArray_DIGITS;
jint SF_com_badlogic_gdx_utils_CharArray_MAX_BUFFER_SIZE;

void mark_com_badlogic_gdx_utils_CharArray(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_CharArray_NULL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_CharArray_NULL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_CharArray_NULL, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_CharArray_DIGITS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_CharArray_DIGITS)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_CharArray_DIGITS, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_CharArray *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
}

void init_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(82);
	init_com_badlogic_gdx_utils_CharArray_boolean_int(ctx, (frame[0].o), (jint(1)), (16));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	init_com_badlogic_gdx_utils_CharArray_boolean_int(ctx, (frame[0].o), (jint(1)), (frame[1].i));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(93);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(94);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered = (frame[1].i);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(102);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_ordered);
	LINE_NUMBER(103);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	init_com_badlogic_gdx_utils_CharArray_boolean_Array1_char_int_int(ctx, (frame[0].o), (jint(1)), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_boolean_Array1_char_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(119);
	init_com_badlogic_gdx_utils_CharArray_boolean_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(120);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(121);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_CharArray_int(ctx, sp[0].o, (temp0 + (16)));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_CharArray_int(ctx, sp[0].o, (temp0 + (16)));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	init_com_badlogic_gdx_utils_CharArray_int(ctx, sp[0].o, (temp0 + (16)));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_CharArray_Array1_char_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(143);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"initialBuffer"_j))));
	LINE_NUMBER(145);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items = (jref) (frame[1].o);
	LINE_NUMBER(146);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[2].i);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_add_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))));
	}
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[1].o))->F_size;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_add_char_char(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(155);
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2))));
	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(2)));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_add_char_char_char(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(162);
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3))));
	}
label_1:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(164);
	ARRAY_ACCESS(jchar, (frame[4].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(165);
	ARRAY_ACCESS(jchar, (frame[4].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(166);
	ARRAY_ACCESS(jchar, (frame[4].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(3)));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_add_char_char_char_char(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2, jchar param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(171);
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(4))));
	}
label_1:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(173);
	ARRAY_ACCESS(jchar, (frame[5].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) = (frame[1].i);
	LINE_NUMBER(174);
	ARRAY_ACCESS(jchar, (frame[5].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1)))) = (frame[2].i);
	LINE_NUMBER(175);
	ARRAY_ACCESS(jchar, (frame[5].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(2)))) = (frame[3].i);
	LINE_NUMBER(176);
	ARRAY_ACCESS(jchar, (frame[5].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (jint(3)))) = (frame[4].i);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(185);
	if (((frame[2].i) + (frame[3].i)) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(186);
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_items;
	((func_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_addAll_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:addAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	((func_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:addAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(195);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[3].i));
	LINE_NUMBER(196);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (frame[4].i));
	}
label_2:;
	{
	LINE_NUMBER(197);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_get_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_set_int_char(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(207);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_incr_int_char(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:incr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(212);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) + (frame[2].i))));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_incr_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:incr", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(218);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) + (frame[1].i))));
	LINE_NUMBER(218);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_mul_int_char(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:mul", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(223);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) * (frame[2].i))));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_mul_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:mul", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(229);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) * (frame[1].i))));
	LINE_NUMBER(229);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(234);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(235);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
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
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(237);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[1].i)));
	LINE_NUMBER(238);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(239);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[2].i)) = (frame[4].i);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_replaceFirst_char_char_R_boolean(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replaceFirst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(247);
	if ((frame[1].i) == (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(249);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_1;
	}
	{
	LINE_NUMBER(250);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) != (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(251);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i)) = (frame[2].i);
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(249);
	INST_IINC(4, 1);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_replaceAll_char_char_R_int(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replaceAll", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(264);
	frame[3].i = (jint(0));
	LINE_NUMBER(265);
	if ((frame[1].i) == (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(267);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_2;
	}
	{
	LINE_NUMBER(268);
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i))) != (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(269);
	ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i)) = (frame[2].i);
	LINE_NUMBER(270);
	INST_IINC(3, 1);
	}
label_8:;
	{
	LINE_NUMBER(267);
	INST_IINC(5, 1);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_contains_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(278);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(280);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = frame[3].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) != (frame[1].i)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_indexOf_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:indexOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(287);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(288);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(287);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(294);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(295);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(294);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_removeValue_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:removeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(302);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(303);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(302);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:removeIndex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(313);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(315);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(317);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(318);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), ((frame[1].i) + (jint(1))), (frame[2].o), (frame[1].i), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(320);
	ARRAY_ACCESS(jchar, (frame[2].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)));
	}
label_7:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:removeRange", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(326);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(327);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(328);
	frame[4].i = (((frame[2].i) - (frame[1].i)) + (jint(1)));
	frame[5].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(329);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_5;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (frame[1].i) + (frame[4].i);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), ((frame[3].i) - ((frame[1].i) + (frame[4].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(332);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[5].i), ((frame[2].i) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(333);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = frame[6].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[1].i), ((frame[3].i) - (frame[6].i)));
	}
label_7:;
	{
	LINE_NUMBER(335);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_removeAll_com_badlogic_gdx_utils_CharArray_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:removeAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(342);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(344);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_get_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_get_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(346);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(347);
	if ((frame[7].i) != ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[8].i)))) goto label_12;
	}
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(349);
	INST_IINC(2, -1);
	LINE_NUMBER(350);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(346);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(344);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(354);
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

jchar M_com_badlogic_gdx_utils_CharArray_pop_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:pop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[1].o))->F_size = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_peek_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:peek", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_first_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_notEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:notEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(380);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
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

void M_com_badlogic_gdx_utils_CharArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_setSize_int_R_Array1_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:setSize", 6 };
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
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(398);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_shrink_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:shrink", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_1:;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_trimToSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:trimToSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_shrink_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_shrink_R_Array1_char])(ctx, (frame[0].o));
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_ensureCapacity_int_R_Array1_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:ensureCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(420);
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
	LINE_NUMBER(421);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(422);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if ((temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length)) <= 0) goto label_3;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_require_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:require", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(427);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i));
	LINE_NUMBER(428);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if ((temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length)) <= 0) goto label_2;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(ctx, (frame[0].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:resizeBuffer", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(435);
	frame[3].i = ((((frame[2].i) >> (jint(1))) + (frame[2].i)) + (jint(2)));
	LINE_NUMBER(437);
	if (((frame[3].i) ^ (bit_cast<jint>(0x80000000))) >= ((frame[1].i) ^ (bit_cast<jint>(0x80000000)))) goto label_3;
	}
	INST_ILOAD(1);
	INST_ISTORE(3);
label_3:;
	{
	LINE_NUMBER(438);
	if (((frame[3].i) ^ (bit_cast<jint>(0x80000000))) <= (-9)) goto label_4;
	}
	{
	LINE_NUMBER(439);
	if ((frame[1].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(440);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to allocate array size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jlong((frame[1].i))) & (jlong(4294967295ll))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(441);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (jint(2147483639)));
	frame[3].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:resize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_sort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_sort_Array1_char_int_int(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_shuffle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:shuffle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(457);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(458);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(459);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(460);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(461);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[3].i)) = (frame[4].i);
	LINE_NUMBER(457);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_truncate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:truncate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(468);
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
	LINE_NUMBER(469);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) <= (frame[1].i)) goto label_2;
	}
	{
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	}
label_2:;
	LINE_NUMBER(470);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_random_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_random_int_int_R_int(ctx, (jint(0)), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_toArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:toArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	frame[1].o = sp[0].o;
	LINE_NUMBER(480);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_boolean_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(486);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(487);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(488);
	M_com_badlogic_gdx_utils_CharArray_appendTrue_int(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(490);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(491);
	M_com_badlogic_gdx_utils_CharArray_appendFalse_int(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_4:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(498);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[1].o))->F_size;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[1].o))->F_size = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(505);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(506);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(507);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(508);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(509);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[2].i));
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(521);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(522);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	if ((frame[2].i) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid start: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(523);
	if ((frame[3].i) < 0) goto label_4;
	}
	{
	if (((frame[2].i) + (frame[3].i)) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
label_4:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid length: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(524);
	if ((frame[3].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(525);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(526);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	}
label_6:;
	{
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(534);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_nio_CharBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_3:;
	{
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(545);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_java_nio_CharBuffer_hasArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_hasArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(547);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(548);
	if ((frame[2].i) < 0) goto label_5;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_5;
	{
	if ((frame[2].i) > (frame[3].i)) goto label_5;
	}
	{
	if ((frame[3].i) <= (frame[4].i)) goto label_6;
	}
label_5:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(549);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(550);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_array_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_array_R_Array1_char])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_nio_CharBuffer_arrayOffset_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_arrayOffset_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[1].o));
	jint temp2 = (temp0 + temp1) + (frame[2].i);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[5].i));
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[5].i));
	LINE_NUMBER(553);
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_CharBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	}
label_11:;
	{
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(560);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(561);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_CharArray)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_utils_CharArray, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(562);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_StringBuilder)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_StringBuilder, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(563);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_StringBuffer)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_StringBuffer, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(564);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_CharBuffer)) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_CharBuffer, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(572);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(573);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[2].i) > (frame[3].i)) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= temp1) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_double_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_double_R_java_lang_String(ctx, (frame[1].d));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_float_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(584);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_float_R_java_lang_String(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), (jint(0)), (48));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (48));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(604);
	if ((frame[1].i) != (bit_cast<jint>(0x80000000))) goto label_1;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-2147483648"_j))));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(608);
	if ((frame[1].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (45));
	LINE_NUMBER(610);
	frame[1].i = (-(frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(612);
	if ((frame[2].i) <= (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(613);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_CharArray_numChars_int_int_R_int(ctx, (frame[1].i), (10));
	frame[4].i = (temp0 - temp1);
	}
label_9:;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_7;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(613);
	INST_IINC(4, -1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(616);
	if ((frame[1].i) < (10000)) goto label_12;
	}
	{
	LINE_NUMBER(617);
	if ((frame[1].i) < (jint(1000000000))) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((jlong((frame[1].i))) % (jlong(10000000000ll))) / (jlong(1000000000ll))))))));
	}
label_14:;
	{
	LINE_NUMBER(618);
	if ((frame[1].i) < (jint(100000000))) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (jint(1000000000))) / (jint(100000000))))));
	}
label_15:;
	{
	LINE_NUMBER(619);
	if ((frame[1].i) < (jint(10000000))) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (jint(100000000))) / (jint(10000000))))));
	}
label_16:;
	{
	LINE_NUMBER(620);
	if ((frame[1].i) < (jint(1000000))) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (jint(10000000))) / (jint(1000000))))));
	}
label_17:;
	{
	LINE_NUMBER(621);
	if ((frame[1].i) < (jint(100000))) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (jint(1000000))) / (jint(100000))))));
	}
label_18:;
	{
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (jint(100000))) / (10000)))));
	}
label_12:;
	{
	LINE_NUMBER(624);
	if ((frame[1].i) < (1000)) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (10000)) / (1000)))));
	}
label_19:;
	{
	LINE_NUMBER(625);
	if ((frame[1].i) < (100)) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (1000)) / (100)))));
	}
label_20:;
	{
	LINE_NUMBER(626);
	if ((frame[1].i) < (10)) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (((frame[1].i) % (100)) / (10)))));
	}
label_21:;
	{
	LINE_NUMBER(627);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((frame[1].i) % (10)))));
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_long_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].l), (jint(0)), (48));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_long_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].l), (frame[3].i), (48));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jlong param0, jint param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(648);
	if ((longCompare((frame[1].l), (bit_cast<jlong>(0x8000000000000000ll)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-9223372036854775808"_j))));
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(652);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (45));
	LINE_NUMBER(654);
	frame[1].l = (-(frame[1].l));
	}
label_4:;
	{
	LINE_NUMBER(656);
	if ((frame[3].i) <= (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(657);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_CharArray_numChars_long_int_R_int(ctx, (frame[1].l), (10));
	frame[5].i = (temp0 - temp1);
	}
label_9:;
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_7;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(657);
	INST_IINC(5, -1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(660);
	if ((longCompare((frame[1].l), (jlong(10000ll)))) < 0) goto label_12;
	}
	{
	LINE_NUMBER(661);
	if ((longCompare((frame[1].l), (jlong(1000000000000000000ll)))) < 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint(((fmod((jdouble((frame[1].l))), (jdouble(1.000000e+19)))) / (jdouble(1.000000e+18))))))));
	}
label_14:;
	{
	LINE_NUMBER(662);
	if ((longCompare((frame[1].l), (jlong(100000000000000000ll)))) < 0) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(1000000000000000000ll))) / (jlong(100000000000000000ll))))))));
	}
label_15:;
	{
	LINE_NUMBER(663);
	if ((longCompare((frame[1].l), (jlong(10000000000000000ll)))) < 0) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(100000000000000000ll))) / (jlong(10000000000000000ll))))))));
	}
label_16:;
	{
	LINE_NUMBER(664);
	if ((longCompare((frame[1].l), (jlong(1000000000000000ll)))) < 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(10000000000000000ll))) / (jlong(1000000000000000ll))))))));
	}
label_17:;
	{
	LINE_NUMBER(665);
	if ((longCompare((frame[1].l), (jlong(100000000000000ll)))) < 0) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(1000000000000000ll))) / (jlong(100000000000000ll))))))));
	}
label_18:;
	{
	LINE_NUMBER(666);
	if ((longCompare((frame[1].l), (jlong(10000000000000ll)))) < 0) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(100000000000000ll))) / (jlong(10000000000000ll))))))));
	}
label_19:;
	{
	LINE_NUMBER(667);
	if ((longCompare((frame[1].l), (jlong(1000000000000ll)))) < 0) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(10000000000000ll))) / (jlong(1000000000000ll))))))));
	}
label_20:;
	{
	LINE_NUMBER(668);
	if ((longCompare((frame[1].l), (jlong(100000000000ll)))) < 0) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(1000000000000ll))) / (jlong(100000000000ll))))))));
	}
label_21:;
	{
	LINE_NUMBER(669);
	if ((longCompare((frame[1].l), (jlong(10000000000ll)))) < 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(100000000000ll))) / (jlong(10000000000ll))))))));
	}
label_22:;
	{
	LINE_NUMBER(670);
	if ((longCompare((frame[1].l), (jlong(1000000000ll)))) < 0) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(10000000000ll))) / (jlong(1000000000ll))))))));
	}
label_23:;
	{
	LINE_NUMBER(671);
	if ((longCompare((frame[1].l), (jlong(100000000ll)))) < 0) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(1000000000ll))) / (jlong(100000000ll))))))));
	}
label_24:;
	{
	LINE_NUMBER(672);
	if ((longCompare((frame[1].l), (jlong(10000000ll)))) < 0) goto label_25;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(100000000ll))) / (jlong(10000000ll))))))));
	}
label_25:;
	{
	LINE_NUMBER(673);
	if ((longCompare((frame[1].l), (jlong(1000000ll)))) < 0) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(10000000ll))) / (jlong(1000000ll))))))));
	}
label_26:;
	{
	LINE_NUMBER(674);
	if ((longCompare((frame[1].l), (jlong(100000ll)))) < 0) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(1000000ll))) / (jlong(100000ll))))))));
	}
label_27:;
	{
	LINE_NUMBER(675);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(100000ll))) / (jlong(10000ll))))))));
	}
label_12:;
	{
	LINE_NUMBER(677);
	if ((longCompare((frame[1].l), (jlong(1000ll)))) < 0) goto label_28;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(10000ll))) / (jlong(1000ll))))))));
	}
label_28:;
	{
	LINE_NUMBER(678);
	if ((longCompare((frame[1].l), (jlong(100ll)))) < 0) goto label_29;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(1000ll))) / (jlong(100ll))))))));
	}
label_29:;
	{
	LINE_NUMBER(679);
	if ((longCompare((frame[1].l), (jlong(10ll)))) < 0) goto label_30;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint((((frame[1].l) % (jlong(100ll))) / (jlong(10ll))))))));
	}
label_30:;
	{
	LINE_NUMBER(680);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_CharArray_DIGITS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint(((frame[1].l) % (jlong(10ll))))))));
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(686);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(687);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_CharSequence)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_CharSequence, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(688);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(693);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(696);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(697);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(698);
	sp[0].o = frame[1].o;
	jint temp1 = jint(0);
	jint temp2 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp1, temp2, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(706);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(707);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(717);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(718);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[2].i) > (frame[3].i)) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= temp1) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(719);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(720);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(721);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(722);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(725);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(730);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(733);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_StringBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_3:;
	{
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(741);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(742);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[2].i) > (frame[3].i)) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_StringBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= temp1) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(743);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(744);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(745);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(746);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_StringBuffer_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(747);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(754);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(757);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_3:;
	{
	LINE_NUMBER(758);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(765);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(766);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[2].i) > (frame[3].i)) goto label_2;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= temp1) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(767);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(768);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(769);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(770);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_StringBuilder_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(771);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(773);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(778);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size));
	}
label_3:;
	{
	LINE_NUMBER(782);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(789);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(790);
	if ((frame[2].i) < 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[2].i) > (frame[3].i)) goto label_2;
	}
	{
	if ((frame[3].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(791);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(792);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(793);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(794);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(795);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendAll_java_lang_Iterable_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(804);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendAll_java_util_Iterator_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(811);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(812);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendAll_Array1_java_lang_Object_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(819);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(820);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_1;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(821);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(820);
	INST_IINC(4, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(823);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_appendFalse_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendFalse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (102);
	LINE_NUMBER(829);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = (97);
	LINE_NUMBER(830);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp2 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp2) = (108);
	LINE_NUMBER(831);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp3 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp3) = (115);
	LINE_NUMBER(832);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (101);
	LINE_NUMBER(833);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(5)));
	LINE_NUMBER(834);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_int_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendFixedWidthPadLeft", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(840);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendFixedWidthPadLeft", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(848);
	if ((frame[2].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(849);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(850);
	sp[0].o = (jobject)SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(851);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(852);
	if ((frame[5].i) < (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(853);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[5].i) - (frame[2].i);
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(855);
	frame[6].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(856);
	frame[7].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[6].i));
	LINE_NUMBER(857);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_char_int_int_char(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[7].i), (frame[3].i));
	LINE_NUMBER(858);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[7].i));
	}
label_8:;
	{
	LINE_NUMBER(860);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[2].i));
	}
label_1:;
	{
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_int_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendFixedWidthPadRight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(869);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jchar param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendFixedWidthPadRight", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(877);
	if ((frame[2].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(878);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(879);
	sp[0].o = (jobject)SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(880);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(881);
	if ((frame[5].i) < (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(884);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(885);
	frame[6].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[5].i));
	LINE_NUMBER(886);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_char_int_int_char(ctx, sp[0].o, (frame[6].i), (((frame[6].i) + (frame[2].i)) - (frame[5].i)), (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(888);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[2].i));
	}
label_1:;
	{
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_boolean_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_boolean_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_boolean_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(905);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_double_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_double_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_double_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].d));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_float_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_float_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_float_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_long_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(931);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_long_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_long_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].l));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_Object_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(936);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(942);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendLine_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(948);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(960);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(972);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendln_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendln", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(996);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendLine", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1001);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendNull", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1006);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(1007);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (110);
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) + (jint(1)))) = (117);
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) + (jint(2)))) = (108);
	LINE_NUMBER(1011);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) + (jint(3)))) = (108);
	LINE_NUMBER(1012);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = ((frame[1].i) + (jint(4)));
	LINE_NUMBER(1013);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendPadding_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendPadding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1019);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1020);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_char_int_int_char(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[1].i)), (frame[2].i));
	LINE_NUMBER(1022);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendSeparator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1040);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_notEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_notEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendSeparator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1050);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(1054);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendSeparator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1071);
	if ((frame[2].i) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(1072);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendSeparator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendSeparator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1107);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_1;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(1108);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendSeparator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1134);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(2);
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1135);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[3].o));
	}
label_4:;
	{
	LINE_NUMBER(1136);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_appendTo_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1145);
	if ((isInstance(ctx, (frame[1].o), &class_java_io_Writer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1146);
	sp[0].o = checkCast(ctx, &class_java_io_Writer, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1147);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_StringBuilder)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1148);
	sp[0].o = checkCast(ctx, &class_java_lang_StringBuilder, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1149);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_StringBuffer)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1150);
	sp[0].o = checkCast(ctx, &class_java_lang_StringBuffer, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(1151);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_CharBuffer)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1152);
	sp[0].o = checkCast(ctx, &class_java_nio_CharBuffer, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((func_java_lang_Appendable_append_java_lang_CharSequence_R_java_lang_Appendable) resolveInterfaceMethod(ctx, &class_java_lang_Appendable, INDEX_java_lang_Appendable_append_java_lang_CharSequence_R_java_lang_Appendable, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	}
label_3:;
	LINE_NUMBER(1155);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_appendTrue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendTrue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (116);
	LINE_NUMBER(1160);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = (114);
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp2 = frame[1].i;
	INST_IINC(1, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp2) = (117);
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (101);
	LINE_NUMBER(1163);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(4)));
	LINE_NUMBER(1164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_lang_Iterable_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendWithSeparators", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_util_Iterator_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_util_Iterator_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(1171);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_util_Iterator_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendWithSeparators", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1178);
	sp[0].o = (jobject)SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1179);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1180);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1181);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[3].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1183);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_Array1_java_lang_Object_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendWithSeparators", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1190);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1191);
	sp[0].o = (jobject)SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(1193);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1194);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	LINE_NUMBER(1193);
	INST_IINC(4, 1);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(1198);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_appendCodePoint_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:appendCodePoint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Character_toChars_int_R_Array1_char(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_reader_R_java_io_Reader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:reader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1222);
	clinit_com_badlogic_gdx_utils_CharArray$CharArrayReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_CharArray$CharArrayReader);
	init_com_badlogic_gdx_utils_CharArray$CharArrayReader_com_badlogic_gdx_utils_CharArray(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_writer_R_java_io_Writer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:writer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1239);
	clinit_com_badlogic_gdx_utils_CharArray$CharArrayWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_CharArray$CharArrayWriter);
	init_com_badlogic_gdx_utils_CharArray$CharArrayWriter_com_badlogic_gdx_utils_CharArray(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_charAt_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:charAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_codePointAt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:codePointAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1258);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1259);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_java_lang_Character_codePointAt_Array1_char_int_int_R_int(ctx, sp[0].o, (frame[1].i), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_codePointBefore_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:codePointBefore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1269);
	if ((frame[1].i) < (jint(1))) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1270);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_java_lang_Character_codePointBefore_Array1_char_int_R_int(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_codePointCount_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:codePointCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1282);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[2].i) > ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1283);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_java_lang_Character_codePointCount_Array1_char_int_int_R_int(ctx, sp[0].o, (frame[1].i), ((frame[2].i) - (frame[1].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_offsetByCodePoints_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:offsetByCodePoints", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)SM_java_lang_Character_offsetByCodePoints_Array1_char_int_int_int_int_R_int(ctx, sp[0].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_contains_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1301);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
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

jbool M_com_badlogic_gdx_utils_CharArray_containsIgnoreCase_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:containsIgnoreCase", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1305);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOfIgnoreCase_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOfIgnoreCase_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	if (temp0 == (jint(-1))) goto label_1;
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

jobject M_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:delete", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1313);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(1314);
	frame[4].i = ((frame[3].i) - (frame[1].i));
	LINE_NUMBER(1315);
	if ((frame[4].i) <= 0) goto label_3;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[3].i), (frame[4].i));
	}
label_3:;
	{
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_deleteAll_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:deleteAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1321);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(1322);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))) != (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1323);
	frame[3].i = (frame[2].i);
	}
label_6:;
	{
	LINE_NUMBER(1324);
	INST_IINC(2, 1);
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(1325);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))) == (frame[1].i)) goto label_6;
	}
	goto label_7;
label_7:;
	{
	LINE_NUMBER(1326);
	frame[4].i = ((frame[2].i) - (frame[3].i));
	LINE_NUMBER(1327);
	M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[2].i), (frame[4].i));
	LINE_NUMBER(1328);
	frame[2].i = ((frame[2].i) - (frame[4].i));
	}
label_4:;
	{
	LINE_NUMBER(1321);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1331);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_deleteAll_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:deleteAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1336);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"str cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1337);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1338);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1339);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[3].i = temp0;
	}
label_5:;
	{
	LINE_NUMBER(1340);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(1341);
	M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[3].i) + (frame[2].i)), (frame[2].i));
	LINE_NUMBER(1342);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	frame[3].i = temp0;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1345);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_deleteCharAt_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:deleteCharAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1353);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1354);
	M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (jint(1))), (jint(1)));
	LINE_NUMBER(1355);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_deleteFirst_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:deleteFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1360);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(1361);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))) != (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1362);
	M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(ctx, (frame[0].o), (frame[2].i), ((frame[2].i) + (jint(1))), (jint(1)));
	LINE_NUMBER(1363);
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(1360);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1366);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_deleteFirst_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:deleteFirst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1371);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"str cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1372);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1373);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1374);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(1375);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[3].i) + (frame[2].i)), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(1377);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_delete_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:delete", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1386);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (frame[1].i), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i)));
	LINE_NUMBER(1387);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) - (frame[3].i));
	LINE_NUMBER(1388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_utils_CharArray_drainChar_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:drainChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1396);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1397);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_deleteCharAt_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_deleteCharAt_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_drainChars_int_int_Array1_char_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:drainChars", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1410);
	frame[5].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(1411);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_2;
	{
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1412);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[5].i));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)));
	frame[6].i = temp1;
	LINE_NUMBER(1413);
	((func_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int])(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[6].i)), (frame[3].o), (frame[4].i));
	LINE_NUMBER(1414);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[6].i)));
	LINE_NUMBER(1415);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_endsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:endsWith", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1421);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1422);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1423);
	if ((frame[2].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1424);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i));
	LINE_NUMBER(1425);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(1426);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	if (temp0 == temp1) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1425);
	INST_IINC(4, 1);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1427);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_getChars_Array1_char_R_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:getChars", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1434);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1435);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[2].i)) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1436);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(1437);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:getChars", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1448);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1449);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	if ((frame[2].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
label_2:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1450);
	if ((frame[1].i) <= (frame[2].i)) goto label_4;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"end < start"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (frame[1].i), (frame[3].o), (frame[4].i), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(1452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_indexOf_char_int_R_int(jcontext ctx, jobject self, jchar param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:indexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1458);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(1459);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1460);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1461);
	frame[4].i = (frame[2].i);
	frame[5].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(1462);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))) != (frame[1].i)) goto label_8;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1461);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1463);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:indexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1469);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:indexOf", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1476);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"str cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1477);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(1478);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1479);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1480);
	if ((frame[3].i) != (jint(1))) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_char_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_char_int_R_int])(ctx, sp[0].o, temp0, (frame[2].i));
	popStackFrame(ctx);
	return temp1;
	}
label_5:;
	{
	LINE_NUMBER(1481);
	if ((frame[3].i) != 0) goto label_6;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(1482);
	if ((frame[3].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_7;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1483);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1484);
	frame[5].i = ((((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i)) + (jint(1)));
	LINE_NUMBER(1485);
	frame[6].i = (frame[2].i);
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(1486);
	frame[7].i = (jint(1));
	LINE_NUMBER(1487);
	frame[8].i = (jint(0));
	}
label_14:;
	{
	if ((frame[8].i) >= (frame[3].i)) goto label_15;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(1488);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[8].i));
	if (temp0 != ((jint)ARRAY_ACCESS(jchar, (frame[4].o), ((frame[6].i) + (frame[8].i))))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1487);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1489);
	if ((frame[7].i) == 0) goto label_20;
	}
	INST_ILOAD(6);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(1485);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1491);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_indexOfIgnoreCase_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:indexOfIgnoreCase", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1495);
	if ((frame[2].i) >= 0) goto label_1;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_1:;
	{
	LINE_NUMBER(1496);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1497);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_5;
label_4:;
	INST_ILOAD(2);
	goto label_6;
label_5:;
	INST_ALOAD(0);
	sp[-1].i = ((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[-1].o))->F_size;
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1498);
	frame[4].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i));
	LINE_NUMBER(1499);
	if ((frame[2].i) <= (frame[4].i)) goto label_8;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1500);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(1501);
	jint temp2 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[5].i));
	frame[6].i = temp2;
	}
label_10:;
	{
	LINE_NUMBER(1503);
	frame[7].i = (frame[2].i);
	LINE_NUMBER(1504);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(1505);
	if ((frame[7].i) > (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(1506);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[7].i)));
	LINE_NUMBER(1507);
	if ((frame[9].i) == (frame[5].i)) goto label_16;
	}
	{
	if ((frame[9].i) != (frame[6].i)) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(1508);
	frame[8].i = (jint(1));
	LINE_NUMBER(1509);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(1505);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1512);
	if ((frame[8].i) != 0) goto label_19;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(1513);
	frame[9].i = (frame[7].i);
	frame[10].i = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(1514);
	INST_IINC(10, 1);
	if ((frame[10].i) >= (frame[3].i)) goto label_22;
	}
	{
	LINE_NUMBER(1515);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	INST_IINC(9, 1);
	frame[11].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i)));
	LINE_NUMBER(1516);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[10].i));
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, temp0);
	frame[12].i = temp1;
	LINE_NUMBER(1517);
	if ((frame[11].i) == (frame[12].i)) goto label_26;
	}
	{
	jint temp0 = frame[11].i;
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[12].i));
	if (temp0 == temp1) goto label_26;
	}
	goto label_22;
label_26:;
	LINE_NUMBER(1518);
	goto label_21;
label_22:;
	{
	LINE_NUMBER(1519);
	if ((frame[10].i) != (frame[3].i)) goto label_27;
	}
	INST_ILOAD(7);
	popStackFrame(ctx);
	INST_IRETURN();
label_27:;
	{
	LINE_NUMBER(1520);
	frame[2].i = ((frame[7].i) + (jint(1)));
	LINE_NUMBER(1521);
	goto label_10;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_boolean_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1527);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1528);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1529);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(1530);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (jint(4))), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(1531);
	M_com_badlogic_gdx_utils_CharArray_appendTrue_int(ctx, (frame[0].o), (frame[1].i));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1533);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(5)));
	LINE_NUMBER(1534);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (jint(5))), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(1535);
	M_com_badlogic_gdx_utils_CharArray_appendFalse_int(ctx, (frame[0].o), (frame[1].i));
	}
label_6:;
	{
	LINE_NUMBER(1537);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_insert_int_char(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1541);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1542);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(1543);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1544);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1545);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (frame[1].i), (frame[3].o), ((frame[1].i) + (jint(1))), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1547);
	ARRAY_ACCESS(jchar, (frame[3].o), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(1548);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(1549);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(1550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insertRange", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1555);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1556);
	frame[3].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) + (frame[2].i));
	LINE_NUMBER(1557);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (8), (frame[3].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint(((jfloat(((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(1.75f))))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char])(ctx, sp[1].o, temp1);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[2].i)), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(1559);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[3].i);
	LINE_NUMBER(1560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1565);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1566);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1567);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(1568);
	if ((frame[3].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(1569);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(1570);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[3].i)), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(1571);
	sp[0].o = frame[2].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[1].i), (frame[3].i));
	LINE_NUMBER(1572);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	}
label_4:;
	{
	LINE_NUMBER(1574);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1582);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1583);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1584);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	if ((frame[3].i) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
label_3:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid offset: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1585);
	if ((frame[4].i) < 0) goto label_5;
	}
	{
	if (((frame[3].i) + (frame[4].i)) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
label_5:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid length: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1586);
	if ((frame[4].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(1587);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(1588);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[4].i)), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(1589);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, (frame[1].i), (frame[4].i));
	LINE_NUMBER(1590);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(1592);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_double_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(1598);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_double_R_java_lang_String(ctx, (frame[2].d));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_float_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1604);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_float_R_java_lang_String(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1610);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_long_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1616);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_Object_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1622);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1623);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1629);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1630);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(1631);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(1632);
	if ((frame[3].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(1633);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(1634);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[3].i)), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	LINE_NUMBER(1635);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(1636);
	sp[0].o = frame[2].o;
	jint temp1 = jint(0);
	jint temp2 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp1, temp2, sp[1].o, (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(1638);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_int_R_int(jcontext ctx, jobject self, jchar param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1645);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_1;
	}
	{
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(2);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1646);
	if ((frame[2].i) >= 0) goto label_4;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(1647);
	frame[3].i = (frame[2].i);
	}
label_5:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(1648);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i))) != (frame[1].i)) goto label_8;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1647);
	INST_IINC(3, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1649);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1655);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:lastIndexOf", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1662);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"str cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1663);
	if ((frame[2].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	jint temp0 = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1664);
	if ((frame[2].i) >= 0) goto label_5;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1665);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1666);
	if ((frame[3].i) != 0) goto label_7;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1667);
	if ((frame[3].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_8;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1668);
	if ((frame[3].i) != (jint(1))) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_int_R_int])(ctx, sp[0].o, temp0, (frame[2].i));
	popStackFrame(ctx);
	return temp1;
	}
label_9:;
	{
	LINE_NUMBER(1669);
	frame[4].i = (((frame[2].i) - (frame[3].i)) + (jint(1)));
	}
label_10:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_11;
	{
	LINE_NUMBER(1670);
	frame[5].i = (jint(1));
	LINE_NUMBER(1671);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_15;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(1672);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 != ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[4].i) + (frame[6].i))))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1671);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1673);
	if ((frame[5].i) == 0) goto label_20;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_20:;
	{
	LINE_NUMBER(1669);
	INST_IINC(4, -1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1675);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_leftString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:leftString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1685);
	if ((frame[1].i) > 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1686);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1687);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1693);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_capacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:capacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_midString_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:midString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1710);
	if ((frame[1].i) >= 0) goto label_1;
	}
	INST_ICONST(0);
	INST_ISTORE(1);
label_1:;
	{
	LINE_NUMBER(1711);
	if ((frame[2].i) <= 0) goto label_2;
	}
	{
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(1712);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) > ((frame[1].i) + (frame[2].i))) goto label_4;
	}
	{
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1713);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_readFrom_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:readFrom", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1721);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1722);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1723);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(1724);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[3].i));
	LINE_NUMBER(1725);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(1726);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_readFrom_java_lang_Readable_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:readFrom", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1735);
	if ((isInstance(ctx, (frame[1].o), &class_java_io_Reader)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_io_Reader, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1736);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_CharBuffer)) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_readFrom_java_nio_CharBuffer_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_readFrom_java_nio_CharBuffer_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_CharBuffer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(1737);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	LINE_NUMBER(1739);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(1740);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)SM_java_nio_CharBuffer_wrap_Array1_char_int_int_R_java_nio_CharBuffer(ctx, sp[0].o, temp0, ((((jarray) nullCheck(ctx, sp[1].o))->length) - ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1741);
	jint temp1 = (jint)((func_java_lang_Readable_read_java_nio_CharBuffer_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Readable, INDEX_java_lang_Readable_read_java_nio_CharBuffer_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	frame[4].i = temp1;
	LINE_NUMBER(1742);
	if ((frame[4].i) != (jint(-1))) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(1743);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[4].i));
	LINE_NUMBER(1744);
	goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(1745);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:readFrom", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1754);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1755);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(1756);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((((jarray) nullCheck(ctx, sp[2].o))->length) - ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)));
	frame[3].i = temp1;
	LINE_NUMBER(1757);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(1759);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[3].i));
	LINE_NUMBER(1760);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(1761);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((((jarray) nullCheck(ctx, sp[2].o))->length) - ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)));
	frame[3].i = temp1;
	LINE_NUMBER(1762);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1763);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:readFrom", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1774);
	if ((frame[2].i) > 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1775);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1776);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1777);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(1778);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(1779);
	if ((frame[5].i) != (jint(-1))) goto label_6;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(1781);
	frame[4].i = ((frame[4].i) - (frame[5].i));
	LINE_NUMBER(1782);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) + (frame[5].i));
	LINE_NUMBER(1783);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(1784);
	if ((frame[4].i) <= 0) goto label_10;
	}
	{
	if ((frame[5].i) != (jint(-1))) goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(1785);
	popStackFrame(ctx);
	return (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_replace_int_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1795);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(1796);
	sp[0].o = frame[0].o;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = (frame[2].i) - (frame[1].i);
	sp[1].o = frame[3].o;
	jint temp4 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int(ctx, sp[0].o, temp1, temp2, temp3, sp[1].o, temp4);
	LINE_NUMBER(1797);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_replaceAll_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replaceAll", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1802);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1803);
	if ((frame[3].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(1804);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(1805);
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[5].i = temp1;
	}
label_5:;
	{
	LINE_NUMBER(1806);
	if ((frame[5].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(1807);
	M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int(ctx, (frame[0].o), (frame[5].i), ((frame[5].i) + (frame[3].i)), (frame[3].i), (frame[2].o), (frame[4].i));
	LINE_NUMBER(1808);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), ((frame[5].i) + (frame[4].i)));
	frame[5].i = temp0;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1811);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_replace_char_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jchar param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1816);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(1817);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1820);
	if ((frame[4].i) != ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(1821);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i))) != (frame[1].i)) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(1822);
	INST_IINC(4, 1);
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1824);
	M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int(ctx, (frame[0].o), (frame[4].i), ((frame[4].i) + (jint(1))), (jint(1)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(1825);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	goto label_2;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_replaceFirst_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replaceFirst", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1832);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(1833);
	if ((frame[3].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(1834);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1835);
	if ((frame[4].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(1836);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(1837);
	M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int(ctx, (frame[0].o), (frame[4].i), ((frame[4].i) + (frame[3].i)), (frame[3].i), (frame[2].o), (frame[5].i));
	}
label_2:;
	{
	LINE_NUMBER(1840);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:replace", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1851);
	frame[6].i = ((((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[3].i)) + (frame[5].i));
	LINE_NUMBER(1852);
	if ((frame[5].i) == (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(1853);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(1854);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[1].i) + (frame[5].i)), (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[2].i)));
	LINE_NUMBER(1855);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[6].i);
	}
label_2:;
	{
	LINE_NUMBER(1857);
	if ((frame[5].i) <= 0) goto label_6;
	}
	{
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, (frame[1].i));
	}
label_6:;
	LINE_NUMBER(1858);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_reverse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:reverse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1861);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1862);
	frame[2].i = (jint(0));
	frame[3].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	frame[4].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(1863);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(1864);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(1865);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)));
	LINE_NUMBER(1866);
	ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(1862);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1868);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_reverseCodePoints_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:reverseCodePoints", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1872);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) >= (jint(2))) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1873);
	frame[1].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(1874);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (jint(0))));
	LINE_NUMBER(1875);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	LINE_NUMBER(1876);
	frame[4].i = (jint(1));
	frame[5].i = (jint(1));
	LINE_NUMBER(1877);
	frame[6].i = (jint(0));
	frame[7].i = (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(1878);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(1879);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) - (jint(1)))));
	LINE_NUMBER(1880);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	if ((frame[8].i) < (jint(56320))) goto label_13;
	}
	{
	if ((frame[8].i) > (jint(57343))) goto label_13;
	}
	{
	if ((frame[2].i) < (jint(55296))) goto label_13;
	}
	{
	if ((frame[2].i) > (jint(56319))) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1882);
	if ((frame[10].i) == 0) goto label_16;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) >= (jint(3))) goto label_16;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_16:;
	{
	LINE_NUMBER(1883);
	if ((frame[5].i) == 0) goto label_17;
	}
	{
	if ((frame[9].i) < (jint(55296))) goto label_17;
	}
	{
	if ((frame[9].i) > (jint(56319))) goto label_17;
	}
	{
	if ((frame[3].i) < (jint(56320))) goto label_17;
	}
	{
	if ((frame[3].i) > (jint(57343))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1884);
	jint temp0 = jint(1);
	frame[5].i = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(1885);
	if ((frame[10].i) != (frame[11].i)) goto label_21;
	}
	{
	LINE_NUMBER(1886);
	if ((frame[10].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(1887);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[8].i);
	LINE_NUMBER(1888);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) - (jint(1)))) = (frame[2].i);
	LINE_NUMBER(1889);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[9].i);
	LINE_NUMBER(1890);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) + (jint(1)))) = (frame[3].i);
	LINE_NUMBER(1891);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[6].i) + (jint(2)))));
	LINE_NUMBER(1892);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) - (jint(2)))));
	LINE_NUMBER(1893);
	INST_IINC(6, 1);
	LINE_NUMBER(1894);
	INST_IINC(1, -1);
	goto label_32;
	}
label_23:;
	{
	LINE_NUMBER(1896);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(1897);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[3].i);
	LINE_NUMBER(1898);
	frame[2].i = (frame[8].i);
	LINE_NUMBER(1899);
	frame[3].i = (frame[9].i);
	goto label_32;
	}
label_21:;
	{
	LINE_NUMBER(1901);
	if ((frame[10].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(1902);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[8].i);
	LINE_NUMBER(1903);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[3].i);
	LINE_NUMBER(1904);
	frame[3].i = (frame[9].i);
	LINE_NUMBER(1905);
	frame[4].i = (jint(0));
	goto label_32;
	}
label_36:;
	{
	LINE_NUMBER(1907);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(1908);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[6].i)) = (frame[9].i);
	LINE_NUMBER(1909);
	frame[2].i = (frame[8].i);
	LINE_NUMBER(1910);
	frame[5].i = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(1877);
	INST_IINC(6, 1);
	INST_IINC(1, -1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1913);
	if ((((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) & (jint(1))) != (jint(1))) goto label_44;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_45;
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_44;
label_45:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[4].i) == 0) goto label_46;
	}
	INST_ILOAD(3);
	goto label_47;
label_46:;
	INST_ILOAD(2);
label_47:;
	INST_CASTORE();
label_44:;
	{
	LINE_NUMBER(1914);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_rightString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:rightString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1924);
	if ((frame[1].i) > 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1925);
	if ((frame[1].i) < ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1926);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) - (frame[1].i)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_set_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1933);
	((func_com_badlogic_gdx_utils_CharArray_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_clear])(ctx, (frame[0].o));
	LINE_NUMBER(1934);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1935);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_setCharAt_int_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:setCharAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1943);
	((func_com_badlogic_gdx_utils_CharArray_validateIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1944);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(1945);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_setLength_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:setLength", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1952);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"length: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1953);
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(1954);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1955);
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(1956);
	M_com_badlogic_gdx_utils_CharArray_require_int(ctx, (frame[0].o), ((frame[1].i) - ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(1957);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(1958);
	((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(1959);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_char_int_int_char(ctx, sp[0].o, (frame[2].i), (frame[1].i), (jint(0)));
	}
label_4:;
	{
	LINE_NUMBER(1961);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:startsWith", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1968);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1969);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1970);
	if ((frame[2].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1971);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(1972);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	if (temp0 == temp1) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1971);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1973);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:subSequence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1977);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1978);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_substring_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:substring", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1986);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:substring", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1995);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(1996);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), ((frame[2].i) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_toCharArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:toCharArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2002);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_toCharArray_int_int_R_Array1_char(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:toCharArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2011);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(2012);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_char_int_int_R_Array1_char(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2017);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(2018);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2022);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(2023);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2024);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2025);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (jint(0)))));
	LINE_NUMBER(2026);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(2027);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(2028);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i))));
	LINE_NUMBER(2026);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2030);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_toStringAndClear_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:toStringAndClear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2036);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_toString_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2037);
	((func_com_badlogic_gdx_utils_CharArray_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_clear])(ctx, (frame[0].o));
	LINE_NUMBER(2038);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_trim_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:trim", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2043);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(2044);
	frame[1].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(2045);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2046);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(2047);
	if ((frame[3].i) >= (frame[1].i)) goto label_5;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) > (32)) goto label_5;
	}
	{
	LINE_NUMBER(2048);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2049);
	if ((frame[3].i) >= (frame[1].i)) goto label_7;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), ((frame[1].i) - (jint(1))))) > (32)) goto label_7;
	}
	{
	LINE_NUMBER(2050);
	INST_IINC(1, -1);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(2051);
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i), ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	}
label_9:;
	{
	LINE_NUMBER(2052);
	if ((frame[3].i) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (jint(0)), (frame[3].i));
	}
label_10:;
	{
	LINE_NUMBER(2053);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_CharArray_validateIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:validateIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2059);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(2060);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:validateRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2068);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2069);
	if ((frame[2].i) <= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", size: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2070);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", end: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2071);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2079);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2080);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(2081);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2082);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_CharArray)) != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2083);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_CharArray, (frame[1].o)));
	LINE_NUMBER(2084);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[2].o)))->F_ordered) != 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(2085);
	frame[3].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(2086);
	if ((frame[3].i) == ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[2].o)))->F_size)) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(2087);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[2].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2088);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(2089);
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[6].i))) == ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i)))) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(2088);
	INST_IINC(6, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(2090);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_equals_com_badlogic_gdx_utils_CharArray_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:equals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2097);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2098);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(2099);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(2100);
	if ((frame[2].i) == ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2101);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2102);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(2103);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i))) == ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i)))) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(2102);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2104);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_com_badlogic_gdx_utils_CharArray_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:equalsIgnoreCase", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2111);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2112);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(2113);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(2114);
	if ((frame[2].i) == ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_size)) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2115);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[1].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2116);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(2117);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2118);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i))));
	frame[7].i = temp0;
	LINE_NUMBER(2119);
	if ((frame[6].i) == (frame[7].i)) goto label_12;
	}
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[7].i));
	if (temp0 == temp1) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(2116);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2121);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_equalsString_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:equalsString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2125);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2126);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(2127);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2129);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(2130);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	if (temp0 == temp1) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(2129);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2131);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:equalsIgnoreCase", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2135);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2136);
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(2137);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2138);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2139);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(2140);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(2141);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, temp0);
	frame[6].i = temp1;
	LINE_NUMBER(2142);
	if ((frame[5].i) == (frame[6].i)) goto label_10;
	}
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[6].i));
	if (temp0 == temp1) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(2139);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2144);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_CharArray_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2148);
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_ordered) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(2149);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2150);
	frame[2].i = ((31) + ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(2151);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK((frame[0].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(2152);
	frame[2].i = (((31) * (frame[2].i)) + ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(2151);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2153);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_CharArray_wrap_Array1_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:wrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2162);
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_CharArray);
	init_com_badlogic_gdx_utils_CharArray_Array1_char_int(ctx, sp[0].o, (frame[0].o), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_CharArray_wrap_Array1_char_int_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:wrap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2173);
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_CharArray);
	init_com_badlogic_gdx_utils_CharArray_Array1_char_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_CharArray_with_Array1_char_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:with", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2178);
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_CharArray);
	init_com_badlogic_gdx_utils_CharArray_Array1_char(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_CharArray_numChars_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:numChars", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2183);
	if ((frame[0].i) >= 0) goto label_1;
	}
	INST_ICONST(2);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	INST_ISTORE(2);
label_3:;
	{
	LINE_NUMBER(2184);
	jint temp0 = (frame[0].i) / (frame[1].i);
	frame[0].i = temp0;
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2185);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2186);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_utils_CharArray_numChars_long_int_R_int(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:numChars", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2191);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_1;
	}
	INST_ICONST(2);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	INST_ISTORE(3);
label_3:;
	{
	LINE_NUMBER(2192);
	jlong temp0 = (frame[0].l) / (jlong((frame[2].i)));
	frame[0].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2193);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2194);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_CharArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_CharArray_CAPACITY = jint(16);
	SF_com_badlogic_gdx_utils_CharArray_EOS = jint(-1);
	SF_com_badlogic_gdx_utils_CharArray_FALSE_STRING_SIZE = jint(5);
	SF_com_badlogic_gdx_utils_CharArray_TRUE_STRING_SIZE = jint(4);
	SF_com_badlogic_gdx_utils_CharArray_NULL = ((jobject) createStringLiteral(ctx, u8"null"_j));
	SF_com_badlogic_gdx_utils_CharArray_MAX_BUFFER_SIZE = jint(2147483639);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/CharArray:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject) createArray(ctx, &class_char, (10));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (57);
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	SF_com_badlogic_gdx_utils_CharArray_DIGITS = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_CharArray[] {
	(void *) M_com_badlogic_gdx_utils_CharArray_hashCode_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_CharArray_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_length_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_charAt_int_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_char_R_java_lang_Appendable,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_com_badlogic_gdx_utils_CharArray_add_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_add_char_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_add_char_char_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_add_char_char_char_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_addAll_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_get_int_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_set_int_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_incr_int_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_incr_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_mul_int_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_mul_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_swap_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_replaceFirst_char_char_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_replaceAll_char_char_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_contains_char_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_indexOf_char_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_removeValue_char_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_removeRange_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_removeAll_com_badlogic_gdx_utils_CharArray_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_pop_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_peek_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_first_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_clear,
	(void *) M_com_badlogic_gdx_utils_CharArray_setSize_int_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_shrink_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_trimToSize,
	(void *) M_com_badlogic_gdx_utils_CharArray_ensureCapacity_int_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_require_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_sort,
	(void *) M_com_badlogic_gdx_utils_CharArray_shuffle,
	(void *) M_com_badlogic_gdx_utils_CharArray_truncate_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_random_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_toArray_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_boolean_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_double_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_float_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_long_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_long_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendAll_java_lang_Iterable_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendAll_java_util_Iterator_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendAll_Array1_java_lang_Object_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendFalse_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_int_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_int_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_boolean_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_double_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_float_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_long_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_Object_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendLine_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendln_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendPadding_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendTo_java_lang_Appendable,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendTrue_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_lang_Iterable_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_util_Iterator_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_Array1_java_lang_Object_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_appendCodePoint_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_reader_R_java_io_Reader,
	(void *) M_com_badlogic_gdx_utils_CharArray_writer_R_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_CharArray_codePointAt_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_codePointBefore_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_codePointCount_int_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_offsetByCodePoints_int_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_contains_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_containsIgnoreCase_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_deleteAll_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_deleteAll_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_deleteCharAt_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_deleteFirst_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_deleteFirst_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_delete_int_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_drainChar_int_R_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_drainChars_int_int_Array1_char_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_endsWith_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_getChars_Array1_char_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_indexOf_char_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_indexOfIgnoreCase_java_lang_String_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_boolean_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_insertRange_int_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_double_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_float_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_long_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_Object_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_leftString_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_capacity_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_midString_int_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_readFrom_java_nio_CharBuffer_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_readFrom_java_lang_Readable_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_replace_int_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_replaceAll_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_replace_char_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_replaceFirst_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_reverse,
	(void *) M_com_badlogic_gdx_utils_CharArray_reverseCodePoints_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_rightString_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_set_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_setCharAt_int_char_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_setLength_int_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_startsWith_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_substring_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_toCharArray_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_toCharArray_int_int_R_Array1_char,
	(void *) M_com_badlogic_gdx_utils_CharArray_toString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_toStringAndClear_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_CharArray_trim_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_utils_CharArray_validateIndex_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int,
	(void *) M_com_badlogic_gdx_utils_CharArray_equals_com_badlogic_gdx_utils_CharArray_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_com_badlogic_gdx_utils_CharArray_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_equalsString_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_java_lang_String_R_boolean,
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
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "add", "(C)V" },
	{ "add", "(CC)V" },
	{ "add", "(CCC)V" },
	{ "add", "(CCCC)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/CharArray;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/CharArray;II)V" },
	{ "addAll", "([C)V" },
	{ "addAll", "([CII)V" },
	{ "get", "(I)C" },
	{ "set", "(IC)V" },
	{ "incr", "(IC)V" },
	{ "incr", "(C)V" },
	{ "mul", "(IC)V" },
	{ "mul", "(C)V" },
	{ "swap", "(II)V" },
	{ "replaceFirst", "(CC)Z" },
	{ "replaceAll", "(CC)I" },
	{ "contains", "(C)Z" },
	{ "indexOf", "(C)I" },
	{ "lastIndexOf", "(C)I" },
	{ "removeValue", "(C)Z" },
	{ "removeIndex", "(I)C" },
	{ "removeRange", "(II)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/CharArray;)Z" },
	{ "pop", "()C" },
	{ "peek", "()C" },
	{ "first", "()C" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "clear", "()V" },
	{ "setSize", "(I)[C" },
	{ "shrink", "()[C" },
	{ "trimToSize", "()V" },
	{ "ensureCapacity", "(I)[C" },
	{ "require", "(I)V" },
	{ "resizeBuffer", "(I)V" },
	{ "resize", "(I)[C" },
	{ "sort", "()V" },
	{ "shuffle", "()V" },
	{ "truncate", "(I)V" },
	{ "random", "()C" },
	{ "toArray", "()[C" },
	{ "append", "(Z)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "([C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "([CII)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/nio/CharBuffer;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/nio/CharBuffer;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/CharSequence;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(D)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(F)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(I)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(IIC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(J)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(JI)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(JIC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/String;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/StringBuffer;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/StringBuffer;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/StringBuilder;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Ljava/lang/StringBuilder;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Lcom/badlogic/gdx/utils/CharArray;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "append", "(Lcom/badlogic/gdx/utils/CharArray;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendAll", "(Ljava/lang/Iterable;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendAll", "(Ljava/util/Iterator;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendAll", "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendFalse", "(I)V" },
	{ "appendFixedWidthPadLeft", "(IIC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendFixedWidthPadLeft", "(Ljava/lang/Object;IC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendFixedWidthPadRight", "(IIC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendFixedWidthPadRight", "(Ljava/lang/Object;IC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Z)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "([C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "([CII)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(D)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(F)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(I)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(J)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendLine", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/String;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/StringBuffer;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/StringBuffer;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/StringBuilder;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Ljava/lang/StringBuilder;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Lcom/badlogic/gdx/utils/CharArray;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "(Lcom/badlogic/gdx/utils/CharArray;II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendln", "()Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendLine", "()Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendNull", "()Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendPadding", "(IC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendSeparator", "(C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendSeparator", "(CC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendSeparator", "(CI)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendSeparator", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendSeparator", "(Ljava/lang/String;I)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendSeparator", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendTo", "(Ljava/lang/Appendable;)V" },
	{ "appendTrue", "(I)V" },
	{ "appendWithSeparators", "(Ljava/lang/Iterable;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendWithSeparators", "(Ljava/util/Iterator;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendWithSeparators", "([Ljava/lang/Object;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "appendCodePoint", "(I)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "reader", "()Ljava/io/Reader;" },
	{ "writer", "()Ljava/io/Writer;" },
	{ "codePointAt", "(I)I" },
	{ "codePointBefore", "(I)I" },
	{ "codePointCount", "(II)I" },
	{ "offsetByCodePoints", "(II)I" },
	{ "contains", "(Ljava/lang/String;)Z" },
	{ "containsIgnoreCase", "(Ljava/lang/String;)Z" },
	{ "delete", "(II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "deleteAll", "(C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "deleteAll", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "deleteCharAt", "(I)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "deleteFirst", "(C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "deleteFirst", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "delete", "(III)V" },
	{ "drainChar", "(I)C" },
	{ "drainChars", "(II[CI)I" },
	{ "endsWith", "(Ljava/lang/String;)Z" },
	{ "getChars", "([C)[C" },
	{ "getChars", "(II[CI)V" },
	{ "indexOf", "(CI)I" },
	{ "indexOf", "(Ljava/lang/String;)I" },
	{ "indexOf", "(Ljava/lang/String;I)I" },
	{ "indexOfIgnoreCase", "(Ljava/lang/String;I)I" },
	{ "insert", "(IZ)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(IC)V" },
	{ "insertRange", "(II)V" },
	{ "insert", "(I[C)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(I[CII)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(ID)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(IF)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(II)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(IJ)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(ILjava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "insert", "(ILjava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "lastIndexOf", "(CI)I" },
	{ "lastIndexOf", "(Ljava/lang/String;)I" },
	{ "lastIndexOf", "(Ljava/lang/String;I)I" },
	{ "leftString", "(I)Ljava/lang/String;" },
	{ "capacity", "()I" },
	{ "midString", "(II)Ljava/lang/String;" },
	{ "readFrom", "(Ljava/nio/CharBuffer;)I" },
	{ "readFrom", "(Ljava/lang/Readable;)I" },
	{ "readFrom", "(Ljava/io/Reader;)I" },
	{ "readFrom", "(Ljava/io/Reader;I)I" },
	{ "replace", "(IILjava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "replace", "(CLjava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "replace", "(IIILjava/lang/String;I)V" },
	{ "reverse", "()V" },
	{ "reverseCodePoints", "()Lcom/badlogic/gdx/utils/CharArray;" },
	{ "rightString", "(I)Ljava/lang/String;" },
	{ "set", "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "setCharAt", "(IC)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "setLength", "(I)Lcom/badlogic/gdx/utils/CharArray;" },
	{ "startsWith", "(Ljava/lang/String;)Z" },
	{ "substring", "(I)Ljava/lang/String;" },
	{ "substring", "(II)Ljava/lang/String;" },
	{ "toCharArray", "()[C" },
	{ "toCharArray", "(II)[C" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toStringAndClear", "()Ljava/lang/String;" },
	{ "trim", "()Lcom/badlogic/gdx/utils/CharArray;" },
	{ "validateIndex", "(I)V" },
	{ "validateRange", "(II)I" },
	{ "equals", "(Lcom/badlogic/gdx/utils/CharArray;)Z" },
	{ "equalsIgnoreCase", "(Lcom/badlogic/gdx/utils/CharArray;)Z" },
	{ "equalsString", "(Ljava/lang/String;)Z" },
	{ "equalsIgnoreCase", "(Ljava/lang/String;)Z" },
};

static jclass interfaces[] { &class_java_lang_CharSequence, &class_java_lang_Appendable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_CharArray$CharArrayReader,
	&class_com_badlogic_gdx_utils_CharArray$CharArrayWriter,
};

static FieldMetadata fields[] {
	{ "CAPACITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_CAPACITY, "I", 26 },
	{ "EOS", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_EOS, "I", 26 },
	{ "FALSE_STRING_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_FALSE_STRING_SIZE, "I", 26 },
	{ "TRUE_STRING_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_TRUE_STRING_SIZE, "I", 26 },
	{ "NULL", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_NULL, "Ljava/lang/String;", 26 },
	{ "DIGITS", getArrayClass(&class_char, 1), (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_DIGITS, "[C", 26 },
	{ "MAX_BUFFER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_CharArray_MAX_BUFFER_SIZE, "I", 26 },
	{ "items", getArrayClass(&class_char, 1), offsetof(com_badlogic_gdx_utils_CharArray, F_items), "[C", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_utils_CharArray, F_size), "I", 1 },
	{ "ordered", &class_boolean, offsetof(com_badlogic_gdx_utils_CharArray, F_ordered), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_boolean_int, 0, "(ZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_com_badlogic_gdx_utils_CharArray, 0, "(Lcom/badlogic/gdx/utils/CharArray;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_Array1_char, 0, "([C)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_boolean_Array1_char_int_int, 0, "(Z[CII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_java_lang_StringBuilder, 0, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_CharArray_Array1_char_int, 0, "([CI)V", 2 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_CharArray_add_char, VTABLE_com_badlogic_gdx_utils_CharArray_add_char, "(C)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_CharArray_add_char_char, VTABLE_com_badlogic_gdx_utils_CharArray_add_char_char, "(CC)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_CharArray_add_char_char_char, VTABLE_com_badlogic_gdx_utils_CharArray_add_char_char_char, "(CCC)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_utils_CharArray_add_char_char_char_char, VTABLE_com_badlogic_gdx_utils_CharArray_add_char_char_char_char, "(CCCC)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray, "(Lcom/badlogic/gdx/utils/CharArray;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray_int_int, VTABLE_com_badlogic_gdx_utils_CharArray_addAll_com_badlogic_gdx_utils_CharArray_int_int, "(Lcom/badlogic/gdx/utils/CharArray;II)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_addAll_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_addAll_Array1_char, "([C)V", 129 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int, VTABLE_com_badlogic_gdx_utils_CharArray_addAll_Array1_char_int_int, "([CII)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_utils_CharArray_get_int_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_get_int_R_char, "(I)C", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_CharArray_set_int_char, VTABLE_com_badlogic_gdx_utils_CharArray_set_int_char, "(IC)V", 1 },
	{ "incr", (intptr_t) M_com_badlogic_gdx_utils_CharArray_incr_int_char, VTABLE_com_badlogic_gdx_utils_CharArray_incr_int_char, "(IC)V", 1 },
	{ "incr", (intptr_t) M_com_badlogic_gdx_utils_CharArray_incr_char, VTABLE_com_badlogic_gdx_utils_CharArray_incr_char, "(C)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_utils_CharArray_mul_int_char, VTABLE_com_badlogic_gdx_utils_CharArray_mul_int_char, "(IC)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_utils_CharArray_mul_char, VTABLE_com_badlogic_gdx_utils_CharArray_mul_char, "(C)V", 1 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_utils_CharArray_swap_int_int, VTABLE_com_badlogic_gdx_utils_CharArray_swap_int_int, "(II)V", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replaceFirst_char_char_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_replaceFirst_char_char_R_boolean, "(CC)Z", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replaceAll_char_char_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_replaceAll_char_char_R_int, "(CC)I", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_CharArray_contains_char_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_contains_char_R_boolean, "(C)Z", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_indexOf_char_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_char_R_int, "(C)I", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_R_int, "(C)I", 1 },
	{ "removeValue", (intptr_t) M_com_badlogic_gdx_utils_CharArray_removeValue_char_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_removeValue_char_R_boolean, "(C)Z", 1 },
	{ "removeIndex", (intptr_t) M_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_removeIndex_int_R_char, "(I)C", 1 },
	{ "removeRange", (intptr_t) M_com_badlogic_gdx_utils_CharArray_removeRange_int_int, VTABLE_com_badlogic_gdx_utils_CharArray_removeRange_int_int, "(II)V", 1 },
	{ "removeAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_removeAll_com_badlogic_gdx_utils_CharArray_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_removeAll_com_badlogic_gdx_utils_CharArray_R_boolean, "(Lcom/badlogic/gdx/utils/CharArray;)Z", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_CharArray_pop_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_pop_R_char, "()C", 1 },
	{ "peek", (intptr_t) M_com_badlogic_gdx_utils_CharArray_peek_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_peek_R_char, "()C", 1 },
	{ "first", (intptr_t) M_com_badlogic_gdx_utils_CharArray_first_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_first_R_char, "()C", 1 },
	{ "notEmpty", (intptr_t) M_com_badlogic_gdx_utils_CharArray_notEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_notEmpty_R_boolean, "()Z", 1 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_isEmpty_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_CharArray_clear, VTABLE_com_badlogic_gdx_utils_CharArray_clear, "()V", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_utils_CharArray_setSize_int_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_setSize_int_R_Array1_char, "(I)[C", 1 },
	{ "shrink", (intptr_t) M_com_badlogic_gdx_utils_CharArray_shrink_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_shrink_R_Array1_char, "()[C", 1 },
	{ "trimToSize", (intptr_t) M_com_badlogic_gdx_utils_CharArray_trimToSize, VTABLE_com_badlogic_gdx_utils_CharArray_trimToSize, "()V", 1 },
	{ "ensureCapacity", (intptr_t) M_com_badlogic_gdx_utils_CharArray_ensureCapacity_int_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_ensureCapacity_int_R_Array1_char, "(I)[C", 1 },
	{ "require", (intptr_t) M_com_badlogic_gdx_utils_CharArray_require_int, VTABLE_com_badlogic_gdx_utils_CharArray_require_int, "(I)V", 2 },
	{ "resizeBuffer", (intptr_t) M_com_badlogic_gdx_utils_CharArray_resizeBuffer_int, VTABLE_com_badlogic_gdx_utils_CharArray_resizeBuffer_int, "(I)V", 2 },
	{ "resize", (intptr_t) M_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_resize_int_R_Array1_char, "(I)[C", 4 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_utils_CharArray_sort, VTABLE_com_badlogic_gdx_utils_CharArray_sort, "()V", 1 },
	{ "shuffle", (intptr_t) M_com_badlogic_gdx_utils_CharArray_shuffle, VTABLE_com_badlogic_gdx_utils_CharArray_shuffle, "()V", 1 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_utils_CharArray_truncate_int, VTABLE_com_badlogic_gdx_utils_CharArray_truncate_int, "(I)V", 1 },
	{ "random", (intptr_t) M_com_badlogic_gdx_utils_CharArray_random_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_random_R_char, "()C", 1 },
	{ "toArray", (intptr_t) M_com_badlogic_gdx_utils_CharArray_toArray_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_toArray_R_Array1_char, "()[C", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_boolean_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_boolean_R_com_badlogic_gdx_utils_CharArray, "(Z)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_com_badlogic_gdx_utils_CharArray, "(C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_R_com_badlogic_gdx_utils_CharArray, "([C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray, "([CII)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_R_com_badlogic_gdx_utils_CharArray, "(Ljava/nio/CharBuffer;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_nio_CharBuffer_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/nio/CharBuffer;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/CharSequence;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_double_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_double_R_com_badlogic_gdx_utils_CharArray, "(D)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_float_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_float_R_com_badlogic_gdx_utils_CharArray, "(F)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray, "(I)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_int_int_R_com_badlogic_gdx_utils_CharArray, "(II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_int_int_char_R_com_badlogic_gdx_utils_CharArray, "(IIC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_long_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_long_R_com_badlogic_gdx_utils_CharArray, "(J)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_long_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_long_int_R_com_badlogic_gdx_utils_CharArray, "(JI)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_long_int_char_R_com_badlogic_gdx_utils_CharArray, "(JIC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuffer;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuffer;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuilder;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuilder;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray, "(Lcom/badlogic/gdx/utils/CharArray;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray, "(Lcom/badlogic/gdx/utils/CharArray;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendAll_java_lang_Iterable_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendAll_java_lang_Iterable_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/Iterable;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendAll_java_util_Iterator_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendAll_java_util_Iterator_R_com_badlogic_gdx_utils_CharArray, "(Ljava/util/Iterator;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendAll_Array1_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendAll_Array1_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, "([Ljava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;", 145 },
	{ "appendFalse", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendFalse_int, VTABLE_com_badlogic_gdx_utils_CharArray_appendFalse_int, "(I)V", 2 },
	{ "appendFixedWidthPadLeft", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_int_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_int_int_char_R_com_badlogic_gdx_utils_CharArray, "(IIC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendFixedWidthPadLeft", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadLeft_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/Object;IC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendFixedWidthPadRight", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_int_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_int_int_char_R_com_badlogic_gdx_utils_CharArray, "(IIC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendFixedWidthPadRight", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendFixedWidthPadRight_java_lang_Object_int_char_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/Object;IC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_boolean_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_boolean_R_com_badlogic_gdx_utils_CharArray, "(Z)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_char_R_com_badlogic_gdx_utils_CharArray, "(C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_R_com_badlogic_gdx_utils_CharArray, "([C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray, "([CII)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_double_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_double_R_com_badlogic_gdx_utils_CharArray, "(D)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_float_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_float_R_com_badlogic_gdx_utils_CharArray, "(F)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_int_R_com_badlogic_gdx_utils_CharArray, "(I)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_long_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_long_R_com_badlogic_gdx_utils_CharArray, "(J)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendLine", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendLine_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_String_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuffer;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuffer_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuffer;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuilder;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_java_lang_StringBuilder_int_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/StringBuilder;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray, "(Lcom/badlogic/gdx/utils/CharArray;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_com_badlogic_gdx_utils_CharArray_int_int_R_com_badlogic_gdx_utils_CharArray, "(Lcom/badlogic/gdx/utils/CharArray;II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendln", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendln_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendln_R_com_badlogic_gdx_utils_CharArray, "()Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendLine", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendLine_R_com_badlogic_gdx_utils_CharArray, "()Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendNull", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendNull_R_com_badlogic_gdx_utils_CharArray, "()Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendPadding", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendPadding_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendPadding_int_char_R_com_badlogic_gdx_utils_CharArray, "(IC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendSeparator", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_char_R_com_badlogic_gdx_utils_CharArray, "(C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendSeparator", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_char_char_R_com_badlogic_gdx_utils_CharArray, "(CC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendSeparator", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendSeparator_char_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_char_int_R_com_badlogic_gdx_utils_CharArray, "(CI)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendSeparator", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendSeparator", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_int_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;I)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendSeparator", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendSeparator_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendTo", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendTo_java_lang_Appendable, VTABLE_com_badlogic_gdx_utils_CharArray_appendTo_java_lang_Appendable, "(Ljava/lang/Appendable;)V", 1 },
	{ "appendTrue", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendTrue_int, VTABLE_com_badlogic_gdx_utils_CharArray_appendTrue_int, "(I)V", 2 },
	{ "appendWithSeparators", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_lang_Iterable_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_lang_Iterable_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/Iterable;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendWithSeparators", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_util_Iterator_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendWithSeparators_java_util_Iterator_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/util/Iterator;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendWithSeparators", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendWithSeparators_Array1_java_lang_Object_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendWithSeparators_Array1_java_lang_Object_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "([Ljava/lang/Object;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "appendCodePoint", (intptr_t) M_com_badlogic_gdx_utils_CharArray_appendCodePoint_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_appendCodePoint_int_R_com_badlogic_gdx_utils_CharArray, "(I)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "reader", (intptr_t) M_com_badlogic_gdx_utils_CharArray_reader_R_java_io_Reader, VTABLE_com_badlogic_gdx_utils_CharArray_reader_R_java_io_Reader, "()Ljava/io/Reader;", 1 },
	{ "writer", (intptr_t) M_com_badlogic_gdx_utils_CharArray_writer_R_java_io_Writer, VTABLE_com_badlogic_gdx_utils_CharArray_writer_R_java_io_Writer, "()Ljava/io/Writer;", 1 },
	{ "charAt", (intptr_t) M_com_badlogic_gdx_utils_CharArray_charAt_int_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_charAt_int_R_char, "(I)C", 1 },
	{ "codePointAt", (intptr_t) M_com_badlogic_gdx_utils_CharArray_codePointAt_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_codePointAt_int_R_int, "(I)I", 1 },
	{ "codePointBefore", (intptr_t) M_com_badlogic_gdx_utils_CharArray_codePointBefore_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_codePointBefore_int_R_int, "(I)I", 1 },
	{ "codePointCount", (intptr_t) M_com_badlogic_gdx_utils_CharArray_codePointCount_int_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_codePointCount_int_int_R_int, "(II)I", 1 },
	{ "offsetByCodePoints", (intptr_t) M_com_badlogic_gdx_utils_CharArray_offsetByCodePoints_int_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_offsetByCodePoints_int_int_R_int, "(II)I", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_utils_CharArray_contains_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_contains_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "containsIgnoreCase", (intptr_t) M_com_badlogic_gdx_utils_CharArray_containsIgnoreCase_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_containsIgnoreCase_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "delete", (intptr_t) M_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_delete_int_int_R_com_badlogic_gdx_utils_CharArray, "(II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "deleteAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_deleteAll_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_deleteAll_char_R_com_badlogic_gdx_utils_CharArray, "(C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "deleteAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_deleteAll_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_deleteAll_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "deleteCharAt", (intptr_t) M_com_badlogic_gdx_utils_CharArray_deleteCharAt_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_deleteCharAt_int_R_com_badlogic_gdx_utils_CharArray, "(I)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "deleteFirst", (intptr_t) M_com_badlogic_gdx_utils_CharArray_deleteFirst_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_deleteFirst_char_R_com_badlogic_gdx_utils_CharArray, "(C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "deleteFirst", (intptr_t) M_com_badlogic_gdx_utils_CharArray_deleteFirst_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_deleteFirst_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "delete", (intptr_t) M_com_badlogic_gdx_utils_CharArray_delete_int_int_int, VTABLE_com_badlogic_gdx_utils_CharArray_delete_int_int_int, "(III)V", 2 },
	{ "drainChar", (intptr_t) M_com_badlogic_gdx_utils_CharArray_drainChar_int_R_char, VTABLE_com_badlogic_gdx_utils_CharArray_drainChar_int_R_char, "(I)C", 1 },
	{ "drainChars", (intptr_t) M_com_badlogic_gdx_utils_CharArray_drainChars_int_int_Array1_char_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_drainChars_int_int_Array1_char_int_R_int, "(II[CI)I", 1 },
	{ "endsWith", (intptr_t) M_com_badlogic_gdx_utils_CharArray_endsWith_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_endsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getChars", (intptr_t) M_com_badlogic_gdx_utils_CharArray_getChars_Array1_char_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_getChars_Array1_char_R_Array1_char, "([C)[C", 1 },
	{ "getChars", (intptr_t) M_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int, VTABLE_com_badlogic_gdx_utils_CharArray_getChars_int_int_Array1_char_int, "(II[CI)V", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_indexOf_char_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_char_int_R_int, "(CI)I", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "indexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "indexOfIgnoreCase", (intptr_t) M_com_badlogic_gdx_utils_CharArray_indexOfIgnoreCase_java_lang_String_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_indexOfIgnoreCase_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_boolean_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_boolean_R_com_badlogic_gdx_utils_CharArray, "(IZ)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_char, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_char, "(IC)V", 1 },
	{ "insertRange", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insertRange_int_int, VTABLE_com_badlogic_gdx_utils_CharArray_insertRange_int_int, "(II)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_R_com_badlogic_gdx_utils_CharArray, "(I[C)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_Array1_char_int_int_R_com_badlogic_gdx_utils_CharArray, "(I[CII)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_double_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_double_R_com_badlogic_gdx_utils_CharArray, "(ID)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_float_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_float_R_com_badlogic_gdx_utils_CharArray, "(IF)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_int_R_com_badlogic_gdx_utils_CharArray, "(II)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_long_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_long_R_com_badlogic_gdx_utils_CharArray, "(IJ)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_Object_R_com_badlogic_gdx_utils_CharArray, "(ILjava/lang/Object;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_insert_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(ILjava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_lastIndexOf_char_int_R_int, "(CI)I", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_lastIndexOf_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "leftString", (intptr_t) M_com_badlogic_gdx_utils_CharArray_leftString_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_leftString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "length", (intptr_t) M_com_badlogic_gdx_utils_CharArray_length_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_length_R_int, "()I", 1 },
	{ "capacity", (intptr_t) M_com_badlogic_gdx_utils_CharArray_capacity_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_capacity_R_int, "()I", 1 },
	{ "midString", (intptr_t) M_com_badlogic_gdx_utils_CharArray_midString_int_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_midString_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "readFrom", (intptr_t) M_com_badlogic_gdx_utils_CharArray_readFrom_java_nio_CharBuffer_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_readFrom_java_nio_CharBuffer_R_int, "(Ljava/nio/CharBuffer;)I", 1 },
	{ "readFrom", (intptr_t) M_com_badlogic_gdx_utils_CharArray_readFrom_java_lang_Readable_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_readFrom_java_lang_Readable_R_int, "(Ljava/lang/Readable;)I", 1 },
	{ "readFrom", (intptr_t) M_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_R_int, "(Ljava/io/Reader;)I", 1 },
	{ "readFrom", (intptr_t) M_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_readFrom_java_io_Reader_int_R_int, "(Ljava/io/Reader;I)I", 1 },
	{ "replace", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replace_int_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_replace_int_int_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(IILjava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "replaceAll", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replaceAll_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_replaceAll_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "replace", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replace_char_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_replace_char_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(CLjava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "replaceFirst", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replaceFirst_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_replaceFirst_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "replace", (intptr_t) M_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int, VTABLE_com_badlogic_gdx_utils_CharArray_replace_int_int_int_java_lang_String_int, "(IIILjava/lang/String;I)V", 2 },
	{ "reverse", (intptr_t) M_com_badlogic_gdx_utils_CharArray_reverse, VTABLE_com_badlogic_gdx_utils_CharArray_reverse, "()V", 1 },
	{ "reverseCodePoints", (intptr_t) M_com_badlogic_gdx_utils_CharArray_reverseCodePoints_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_reverseCodePoints_R_com_badlogic_gdx_utils_CharArray, "()Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "rightString", (intptr_t) M_com_badlogic_gdx_utils_CharArray_rightString_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_rightString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_CharArray_set_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_set_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray, "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "setCharAt", (intptr_t) M_com_badlogic_gdx_utils_CharArray_setCharAt_int_char_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_setCharAt_int_char_R_com_badlogic_gdx_utils_CharArray, "(IC)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "setLength", (intptr_t) M_com_badlogic_gdx_utils_CharArray_setLength_int_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_setLength_int_R_com_badlogic_gdx_utils_CharArray, "(I)Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "startsWith", (intptr_t) M_com_badlogic_gdx_utils_CharArray_startsWith_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_startsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "subSequence", (intptr_t) M_com_badlogic_gdx_utils_CharArray_subSequence_int_int_R_java_lang_CharSequence, VTABLE_com_badlogic_gdx_utils_CharArray_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1 },
	{ "substring", (intptr_t) M_com_badlogic_gdx_utils_CharArray_substring_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_substring_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "substring", (intptr_t) M_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_substring_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "toCharArray", (intptr_t) M_com_badlogic_gdx_utils_CharArray_toCharArray_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_toCharArray_R_Array1_char, "()[C", 1 },
	{ "toCharArray", (intptr_t) M_com_badlogic_gdx_utils_CharArray_toCharArray_int_int_R_Array1_char, VTABLE_com_badlogic_gdx_utils_CharArray_toCharArray_int_int_R_Array1_char, "(II)[C", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_CharArray_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_utils_CharArray_toString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_toString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "toStringAndClear", (intptr_t) M_com_badlogic_gdx_utils_CharArray_toStringAndClear_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_CharArray_toStringAndClear_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "trim", (intptr_t) M_com_badlogic_gdx_utils_CharArray_trim_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_utils_CharArray_trim_R_com_badlogic_gdx_utils_CharArray, "()Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "validateIndex", (intptr_t) M_com_badlogic_gdx_utils_CharArray_validateIndex_int, VTABLE_com_badlogic_gdx_utils_CharArray_validateIndex_int, "(I)V", 4 },
	{ "validateRange", (intptr_t) M_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_validateRange_int_int_R_int, "(II)I", 4 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_CharArray_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_utils_CharArray_equals_com_badlogic_gdx_utils_CharArray_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_equals_com_badlogic_gdx_utils_CharArray_R_boolean, "(Lcom/badlogic/gdx/utils/CharArray;)Z", 1 },
	{ "equalsIgnoreCase", (intptr_t) M_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_com_badlogic_gdx_utils_CharArray_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_com_badlogic_gdx_utils_CharArray_R_boolean, "(Lcom/badlogic/gdx/utils/CharArray;)Z", 1 },
	{ "equalsString", (intptr_t) M_com_badlogic_gdx_utils_CharArray_equalsString_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_equalsString_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "equalsIgnoreCase", (intptr_t) M_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_utils_CharArray_equalsIgnoreCase_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_utils_CharArray_hashCode_R_int, VTABLE_com_badlogic_gdx_utils_CharArray_hashCode_R_int, "()I", 1 },
	{ "wrap", (intptr_t) SM_com_badlogic_gdx_utils_CharArray_wrap_Array1_char_R_com_badlogic_gdx_utils_CharArray, 0, "([C)Lcom/badlogic/gdx/utils/CharArray;", 9 },
	{ "wrap", (intptr_t) SM_com_badlogic_gdx_utils_CharArray_wrap_Array1_char_int_R_com_badlogic_gdx_utils_CharArray, 0, "([CI)Lcom/badlogic/gdx/utils/CharArray;", 9 },
	{ "with", (intptr_t) SM_com_badlogic_gdx_utils_CharArray_with_Array1_char_R_com_badlogic_gdx_utils_CharArray, 0, "([C)Lcom/badlogic/gdx/utils/CharArray;", 137 },
	{ "numChars", (intptr_t) SM_com_badlogic_gdx_utils_CharArray_numChars_int_int_R_int, 0, "(II)I", 9 },
	{ "numChars", (intptr_t) SM_com_badlogic_gdx_utils_CharArray_numChars_long_int_R_int, 0, "(JI)I", 9 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_char_R_java_lang_Appendable, VTABLE_com_badlogic_gdx_utils_CharArray_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_CharArray, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_CharArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/CharArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_CharArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_CharArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_CharArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_CharArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 205,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 197,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_CharArray = registerClass(&class_com_badlogic_gdx_utils_CharArray);

}

