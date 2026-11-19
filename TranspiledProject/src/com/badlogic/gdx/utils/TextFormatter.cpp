#include "com/badlogic/gdx/utils/TextFormatter.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/text/MessageFormat.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Locale.h"
#include "com/badlogic/gdx/utils/TextFormatter.h"

extern "C" {


void mark_com_badlogic_gdx_utils_TextFormatter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_TextFormatter *) object;
	if (self->F_messageFormat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageFormat)->clazz)->markFunction)((jobject) self->F_messageFormat, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_TextFormatter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_TextFormatter_java_util_Locale_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TextFormatter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_TextFormatter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(32);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_text_MessageFormat(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_text_MessageFormat);
	init_java_text_MessageFormat_java_lang_String_java_util_Locale(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK(sp[0].o))->F_messageFormat = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TextFormatter:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_messageFormat;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_messageFormat;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	((func_java_text_MessageFormat_applyPattern_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_MessageFormat_applyPattern_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_messageFormat;
	sp[0].o = (jobject)((func_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TextFormatter:replaceEscapeChars", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(74);
	frame[2].i = (jint(0));
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(76);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(78);
	if ((frame[5].i) != (39)) goto label_8;
	}
	{
	LINE_NUMBER(79);
	frame[2].i = (jint(1));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"''"_j))));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(81);
	if ((frame[5].i) != (123)) goto label_12;
	}
	{
	LINE_NUMBER(82);
	frame[6].i = ((frame[4].i) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(83);
	if ((frame[6].i) >= (frame[3].i)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	if (temp0 != (123)) goto label_15;
	}
	{
	LINE_NUMBER(84);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(85);
	frame[7].i = (((frame[6].i) - (frame[4].i)) / (jint(2)));
	LINE_NUMBER(86);
	if ((frame[7].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(87);
	frame[2].i = (jint(1));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (39));
	}
label_21:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	LINE_NUMBER(91);
	INST_IINC(7, -1);
	if ((frame[7].i) > 0) goto label_21;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (39));
	}
label_18:;
	{
	LINE_NUMBER(94);
	if ((((frame[6].i) - (frame[4].i)) % (jint(2))) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	}
label_24:;
	{
	LINE_NUMBER(95);
	frame[4].i = ((frame[6].i) - (jint(1)));
	LINE_NUMBER(96);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	}
label_11:;
	{
	LINE_NUMBER(76);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(100);
	if ((frame[2].i) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_ALOAD(1);
label_27:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/TextFormatter:simpleFormat", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(117);
	frame[3].i = (jint(0));
	LINE_NUMBER(118);
	frame[4].i = (jint(-1));
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(120);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(122);
	if ((frame[4].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(123);
	if ((frame[7].i) != (123)) goto label_11;
	}
	{
	LINE_NUMBER(124);
	frame[3].i = (jint(1));
	LINE_NUMBER(125);
	if (((frame[6].i) + (jint(1))) >= (frame[5].i)) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[6].i) + (jint(1))));
	if (temp0 != (123)) goto label_14;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(127);
	INST_IINC(6, 1);
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(129);
	frame[4].i = (jint(0));
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].i));
	goto label_17;
	}
label_9:;
	{
	LINE_NUMBER(135);
	if ((frame[7].i) != (125)) goto label_18;
	}
	{
	LINE_NUMBER(136);
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_20;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Argument index out of bounds: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[6].i) - (jint(1))));
	if (temp0 != (123)) goto label_21;
	}
	{
	LINE_NUMBER(138);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing argument index after a left curly brace"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(139);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(143);
	frame[4].i = (jint(-1));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(145);
	if ((frame[7].i) < (48)) goto label_26;
	}
	{
	if ((frame[7].i) <= (57)) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(146);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' while parsing argument index"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(147);
	frame[4].i = (((frame[4].i) * (10)) + ((frame[7].i) - (48)));
	}
label_17:;
	{
	LINE_NUMBER(120);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(151);
	if ((frame[4].i) < 0) goto label_28;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unmatched braces in the pattern."_j))));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(153);
	if ((frame[3].i) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_30;
	}
label_29:;
	INST_ALOAD(1);
label_30:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_TextFormatter[] {
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
	(void *) M_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
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
	{ "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "replaceEscapeChars", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "simpleFormat", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "messageFormat", &class_java_text_MessageFormat, offsetof(com_badlogic_gdx_utils_TextFormatter, F_messageFormat), "Ljava/text/MessageFormat;", 2 },
	{ "buffer", &class_java_lang_StringBuilder, offsetof(com_badlogic_gdx_utils_TextFormatter, F_buffer), "Ljava/lang/StringBuilder;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_TextFormatter_java_util_Locale_boolean, 0, "(Ljava/util/Locale;Z)V", 1 },
	{ "format", (intptr_t) M_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "replaceEscapeChars", (intptr_t) M_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "simpleFormat", (intptr_t) M_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 130 },
};

Class class_com_badlogic_gdx_utils_TextFormatter{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/TextFormatter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_TextFormatter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_TextFormatter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_TextFormatter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_TextFormatter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_TextFormatter = registerClass(&class_com_badlogic_gdx_utils_TextFormatter);

}

