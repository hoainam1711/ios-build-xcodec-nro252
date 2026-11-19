#include "com/badlogic/gdx/utils/JsonWriter.h"
#include "com/badlogic/gdx/utils/JsonWriter.h"
#include "java/math/BigInteger.h"
#include "java/lang/Integer.h"
#include "java/lang/Number.h"
#include "java/io/Writer.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/lang/IllegalStateException.h"
#include "java/math/BigDecimal.h"
#include "java/lang/Double.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_JsonWriter_none;
jint SF_com_badlogic_gdx_utils_JsonWriter_needsComma;
jint SF_com_badlogic_gdx_utils_JsonWriter_object;
jint SF_com_badlogic_gdx_utils_JsonWriter_array;
jint SF_com_badlogic_gdx_utils_JsonWriter_isObject;

void mark_com_badlogic_gdx_utils_JsonWriter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Writer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_JsonWriter *) object;
	if (self->F_writer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writer)->clazz)->markFunction)((jobject) self->F_writer, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_outputType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputType)->clazz)->markFunction)((jobject) self->F_outputType, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_JsonWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter_none = jint(0);
	SF_com_badlogic_gdx_utils_JsonWriter_needsComma = jint(1);
	SF_com_badlogic_gdx_utils_JsonWriter_object = jint(250);
	SF_com_badlogic_gdx_utils_JsonWriter_array = jint(186);
	SF_com_badlogic_gdx_utils_JsonWriter_isObject = jint(64);
}

void init_com_badlogic_gdx_utils_JsonWriter_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json;
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_outputType = (jref) sp[1].o;
	LINE_NUMBER(38);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (frame[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json;
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_outputType = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_setWriter_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:setWriter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (frame[1].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_getWriter_R_java_io_Writer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:getWriter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:setOutputType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_setQuoteLongValues_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:setQuoteLongValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues = (frame[1].i);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:object", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (123));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current));
	LINE_NUMBER(69);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current = (250);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:array", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (91));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current));
	LINE_NUMBER(77);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current = (186);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Long)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_math_BigDecimal)) != 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_math_BigInteger)) == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(86);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(87);
	frame[2].o = (checkCast(ctx, &class_java_lang_Number, (frame[1].o)));
	LINE_NUMBER(88);
	jlong temp0 = (jlong)((func_java_lang_Number_longValue_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_longValue_R_long])(ctx, (frame[2].o));
	frame[3].l = temp0;
	LINE_NUMBER(89);
	jdouble temp1 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (frame[2].o));
	if ((doubleCompare(temp1, (jdouble((frame[3].l))), -1)) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[3].l));
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(91);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_boolean_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp += 1;
	if ((frame[1].i) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_3:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_int_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(109);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[1].i));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_long_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(115);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues) == 0) goto label_1;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[1].l));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(118);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[1].l));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_float_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(125);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[1].f));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_value_double_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(131);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues) == 0) goto label_1;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[1].d));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(134);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[1].d));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:json", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(ctx, (frame[0].o));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:requireCommaOrName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	if ((((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current) & (64)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(149);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named) != 0) goto label_3;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Name must be set."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(150);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(0));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(152);
	if ((((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current) & (jint(1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (44));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(154);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current) == 0) goto label_4;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_current = (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_current) | (jint(1)));
	}
label_4:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(161);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named = (jint(1));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:nameValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	if ((((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current) & (64)) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Current item must be an object."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(167);
	if ((((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current) & (jint(1))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (44));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_current = (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_current) | (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (58));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_object_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:object", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (123));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current));
	LINE_NUMBER(179);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current = (250);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_array_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:array", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (91));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current));
	LINE_NUMBER(187);
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current = (186);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(199);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, (frame[2].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_boolean_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(205);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp += 1;
	if ((frame[2].i) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_3:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_int_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(211);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[2].i));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_long_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(217);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues) == 0) goto label_1;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(220);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[2].l));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_float_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(227);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[2].f));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_double_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(233);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_quoteLongValues) == 0) goto label_1;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[2].d));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(236);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[2].d));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:json", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(244);
	M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:pop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	if (((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_named) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expected an object, array, or value since a name was set."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_int])(ctx, sp[0].o, (jchar((((jint)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_current) >> (jint(1))))));
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp += 1;
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size = temp0;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[0].i = temp3;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK(sp[0].o))->F_current = sp[1].i;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_flush])(ctx, sp[0].o);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter])(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonWriter *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_close])(ctx, sp[0].o);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_JsonWriter[] {
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
	(void *) M_java_io_Writer_append_char_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_close,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_flush,
	(void *) M_java_io_Writer_write_Array1_char,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_write_Array1_char_int_int,
	(void *) M_java_io_Writer_write_int,
	(void *) M_java_io_Writer_write_java_lang_String,
	(void *) M_java_io_Writer_write_java_lang_String_int_int,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_Writer_append_char_R_java_io_Writer,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_setWriter_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_getWriter_R_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_setQuoteLongValues_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_boolean_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_int_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_long_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_float_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_value_double_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_object_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_array_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_boolean_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_int_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_long_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_float_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_double_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter,
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
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([C)V" },
	{ "write", "([CII)V" },
	{ "write", "(I)V" },
	{ "write", "(Ljava/lang/String;)V" },
	{ "write", "(Ljava/lang/String;II)V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;" },
	{ "append", "(C)Ljava/io/Writer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;" },
	{ "setWriter", "(Ljava/io/Writer;)V" },
	{ "getWriter", "()Ljava/io/Writer;" },
	{ "setOutputType", "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)V" },
	{ "setQuoteLongValues", "(Z)V" },
	{ "object", "()Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "array", "()Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(Ljava/lang/Object;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(Z)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(I)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(J)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(F)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "value", "(D)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "json", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "requireCommaOrName", "()V" },
	{ "name", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "nameValue", "(Ljava/lang/String;)V" },
	{ "object", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "array", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;Ljava/lang/Object;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;I)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;J)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;F)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "set", "(Ljava/lang/String;D)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "json", "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "pop", "()Lcom/badlogic/gdx/utils/JsonWriter;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_JsonWriter$OutputType,
};

static FieldMetadata fields[] {
	{ "none", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter_none, "I", 26 },
	{ "needsComma", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter_needsComma, "I", 26 },
	{ "object", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter_object, "I", 26 },
	{ "array", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter_array, "I", 26 },
	{ "isObject", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter_isObject, "I", 26 },
	{ "writer", &class_java_io_Writer, offsetof(com_badlogic_gdx_utils_JsonWriter, F_writer), "Ljava/io/Writer;", 0 },
	{ "stack", &class_com_badlogic_gdx_utils_IntArray, offsetof(com_badlogic_gdx_utils_JsonWriter, F_stack), "Lcom/badlogic/gdx/utils/IntArray;", 18 },
	{ "current", &class_int, offsetof(com_badlogic_gdx_utils_JsonWriter, F_current), "I", 2 },
	{ "named", &class_boolean, offsetof(com_badlogic_gdx_utils_JsonWriter, F_named), "Z", 2 },
	{ "outputType", &class_com_badlogic_gdx_utils_JsonWriter$OutputType, offsetof(com_badlogic_gdx_utils_JsonWriter, F_outputType), "Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 2 },
	{ "quoteLongValues", &class_boolean, offsetof(com_badlogic_gdx_utils_JsonWriter, F_quoteLongValues), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonWriter_java_io_Writer, 0, "(Ljava/io/Writer;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonWriter, 0, "()V", 4 },
	{ "setWriter", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_setWriter_java_io_Writer, VTABLE_com_badlogic_gdx_utils_JsonWriter_setWriter_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "getWriter", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_getWriter_R_java_io_Writer, VTABLE_com_badlogic_gdx_utils_JsonWriter_getWriter_R_java_io_Writer, "()Ljava/io/Writer;", 1 },
	{ "setOutputType", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType, VTABLE_com_badlogic_gdx_utils_JsonWriter_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)V", 1 },
	{ "setQuoteLongValues", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_setQuoteLongValues_boolean, VTABLE_com_badlogic_gdx_utils_JsonWriter_setQuoteLongValues_boolean, "(Z)V", 1 },
	{ "object", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter, "()Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "array", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter, "()Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/Object;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_boolean_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_boolean_R_com_badlogic_gdx_utils_JsonWriter, "(Z)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_int_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_int_R_com_badlogic_gdx_utils_JsonWriter, "(I)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_long_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_long_R_com_badlogic_gdx_utils_JsonWriter, "(J)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_float_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_float_R_com_badlogic_gdx_utils_JsonWriter, "(F)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "value", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_value_double_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_value_double_R_com_badlogic_gdx_utils_JsonWriter, "(D)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "json", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "requireCommaOrName", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName, VTABLE_com_badlogic_gdx_utils_JsonWriter_requireCommaOrName, "()V", 2 },
	{ "name", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "nameValue", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonWriter_nameValue_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "object", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_object_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_object_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "array", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_array_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_array_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;Ljava/lang/Object;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_boolean_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_boolean_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_int_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_int_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;I)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_long_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_long_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;J)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_float_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_float_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;F)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_double_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_double_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;D)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "json", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_json_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter, "(Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "pop", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter, "()Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_write_Array1_char_int_int, VTABLE_com_badlogic_gdx_utils_JsonWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "flush", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_flush, VTABLE_com_badlogic_gdx_utils_JsonWriter_flush, "()V", 1 },
	{ "close", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter_close, VTABLE_com_badlogic_gdx_utils_JsonWriter_close, "()V", 1 },
};

Class class_com_badlogic_gdx_utils_JsonWriter{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/JsonWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(com_badlogic_gdx_utils_JsonWriter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_JsonWriter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_JsonWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_JsonWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_JsonWriter = registerClass(&class_com_badlogic_gdx_utils_JsonWriter);

}

