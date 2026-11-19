#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"
#include "com/badlogic/gdx/utils/JsonWriter.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "com/badlogic/gdx/utils/JsonWriter_1.h"
#include "java/lang/Boolean.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json;
jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript;
jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern;
jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern;
jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern;
jobject SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES;

void mark_com_badlogic_gdx_utils_JsonWriter$OutputType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_JsonWriter$OutputType *) object;
}

jobject SM_com_badlogic_gdx_utils_JsonWriter$OutputType_values_R_Array1_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	{
	LINE_NUMBER(270);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_utils_JsonWriter$OutputType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonWriter$OutputType_valueOf_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_utils_JsonWriter$OutputType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_JsonWriter$OutputType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_JsonWriter$OutputType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(270);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:quoteValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(295);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) != 0) goto label_3;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_4;
	}
label_3:;
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(297);
	frame[3].i = (jint(0));
	LINE_NUMBER(299);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[4].i));
	switch(temp0) {
		case 9: goto label_9;
		case 10: goto label_9;
		case 13: goto label_9;
		case 34: goto label_10;
		case 92: goto label_9;
		default: goto label_11;
	}
	}
label_9:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escape_java_lang_String_int_R_java_lang_String(ctx, (frame[2].o), (frame[4].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(306);
	frame[3].i = (jint(1));
	LINE_NUMBER(307);
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(309);
	frame[3].i = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(299);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"//"_j));
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"/*"_j))));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(316);
	if ((frame[4].i) <= 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[4].i) - (jint(1))));
	if (temp0 == (32)) goto label_14;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Character)) != 0) goto label_14;
	}
	{
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern;
	sp[1].o = frame[2].o;
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_14:;
	{
	LINE_NUMBER(319);
	if ((frame[3].i) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escapeQuote_java_lang_String_R_java_lang_String(ctx, (frame[2].o));
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_20:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:quoteName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	frame[2].i = (jint(0));
	LINE_NUMBER(325);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	switch(temp0) {
		case 9: goto label_5;
		case 10: goto label_5;
		case 13: goto label_5;
		case 34: goto label_6;
		case 92: goto label_5;
		default: goto label_7;
	}
	}
label_5:;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escape_java_lang_String_int_R_java_lang_String(ctx, (frame[1].o), (frame[3].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(332);
	frame[2].i = (jint(1));
	LINE_NUMBER(333);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(335);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(325);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(339);
	clinit_com_badlogic_gdx_utils_JsonWriter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$1_$SwitchMap$com$badlogic$gdx$utils$JsonWriter$OutputType;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonWriter$OutputType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_10;
		case 2: goto label_11;
		default: goto label_12;
	}
	}
label_10:;
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"//"_j))));
	if (temp0 != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/*"_j))));
	if (temp0 != 0) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_11:;
	{
	LINE_NUMBER(343);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(345);
	if ((frame[2].i) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escapeQuote_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_14:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escape_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:escape", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(349);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 + (6)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[0].o), (jint(0)), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(351);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(353);
	switch((frame[3].i)) {
		case 9: goto label_6;
		case 10: goto label_7;
		case 13: goto label_8;
		case 92: goto label_9;
		default: goto label_10;
	}
	}
label_9:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\\\"_j))));
	LINE_NUMBER(356);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(359);
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(362);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(365);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].i));
	}
label_12:;
	{
	LINE_NUMBER(351);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escapeQuote_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:escapeQuote", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(374);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 + (6)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(376);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(378);
	if ((frame[3].i) != (34)) goto label_7;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(376);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_JsonWriter$OutputType_$values_R_Array1_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_JsonWriter$OutputType, (jint(3)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonWriter$OutputType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	{
	LINE_NUMBER(272);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonWriter$OutputType);
	init_com_badlogic_gdx_utils_JsonWriter$OutputType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"json"_j))), (jint(0)));
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json = sp[0].o;
	LINE_NUMBER(274);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonWriter$OutputType);
	init_com_badlogic_gdx_utils_JsonWriter$OutputType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"javascript"_j))), (jint(1)));
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript = sp[0].o;
	LINE_NUMBER(286);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonWriter$OutputType);
	init_com_badlogic_gdx_utils_JsonWriter$OutputType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minimal"_j))), (jint(2)));
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal = sp[0].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_JsonWriter$OutputType_$values_R_Array1_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES = sp[0].o;
	LINE_NUMBER(288);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^[a-zA-Z_$][a-zA-Z_$0-9]*$"_j))));
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^[^\":,}/ ][^:]*$"_j))));
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern = sp[0].o;
	LINE_NUMBER(290);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^[^\":,{}\\[\\]/ ][^}\\],]*$"_j))));
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_JsonWriter$OutputType[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "quoteValue", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "quoteName", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "json", &class_com_badlogic_gdx_utils_JsonWriter$OutputType, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_json, "Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 16409 },
	{ "javascript", &class_com_badlogic_gdx_utils_JsonWriter$OutputType, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascript, "Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 16409 },
	{ "minimal", &class_com_badlogic_gdx_utils_JsonWriter$OutputType, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal, "Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 16409 },
	{ "javascriptPattern", &class_java_util_regex_Pattern, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_javascriptPattern, "Ljava/util/regex/Pattern;", 26 },
	{ "minimalNamePattern", &class_java_util_regex_Pattern, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalNamePattern, "Ljava/util/regex/Pattern;", 26 },
	{ "minimalValuePattern", &class_java_util_regex_Pattern, (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimalValuePattern, "Ljava/util/regex/Pattern;", 26 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_utils_JsonWriter$OutputType, 1), (intptr_t) &SF_com_badlogic_gdx_utils_JsonWriter$OutputType_$VALUES, "[Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_utils_JsonWriter$OutputType_values_R_Array1_com_badlogic_gdx_utils_JsonWriter$OutputType, 0, "()[Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_utils_JsonWriter$OutputType_valueOf_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter$OutputType, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonWriter$OutputType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "quoteValue", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "quoteName", (intptr_t) M_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "escape", (intptr_t) SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escape_java_lang_String_int_R_java_lang_String, 0, "(Ljava/lang/String;I)Ljava/lang/String;", 10 },
	{ "escapeQuote", (intptr_t) SM_com_badlogic_gdx_utils_JsonWriter$OutputType_escapeQuote_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_utils_JsonWriter$OutputType_$values_R_Array1_com_badlogic_gdx_utils_JsonWriter$OutputType, 0, "()[Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_JsonWriter$OutputType, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_JsonWriter$OutputType{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/JsonWriter$OutputType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_utils_JsonWriter$OutputType),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_JsonWriter$OutputType,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_JsonWriter$OutputType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_JsonWriter$OutputType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_JsonWriter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_JsonWriter$OutputType = registerClass(&class_com_badlogic_gdx_utils_JsonWriter$OutputType);

}

