#include "com/badlogic/gdx/utils/Justify.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Justify_1.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/utils/Justify.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Justify_None;
jobject SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace;
jobject SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph;
jobject SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace;
jobject SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph;
jobject SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace;
jobject SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph;
jobject SF_com_badlogic_gdx_utils_Justify_$VALUES;

void mark_com_badlogic_gdx_utils_Justify(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Justify_None)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_None)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_None, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Justify_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_Justify *) object;
}

jobject SM_com_badlogic_gdx_utils_Justify_values_R_Array1_com_badlogic_gdx_utils_Justify(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Justify(ctx);
	{
	LINE_NUMBER(5);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_utils_Justify, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Justify_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Justify(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Justify(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_utils_Justify)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_Justify, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Justify_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Justify(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:matchChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_2;
		case 5: goto label_2;
		case 6: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(26);
	if ((frame[1].i) != (32)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Justify_isNone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:isNone", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_None;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:isParagraph", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 4: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:isWrappedLines", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 2: goto label_1;
		case 5: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:isAllLines", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 3: goto label_1;
		case 6: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:isBySpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:isByGlyph", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 4: goto label_1;
		case 5: goto label_1;
		case 6: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Justify_$values_R_Array1_com_badlogic_gdx_utils_Justify(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Justify(ctx);
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_Justify, (7));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_None;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_Justify(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Justify(ctx);
	{
	LINE_NUMBER(7);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"None"_j))), (jint(0)));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_None = sp[0].o;
	LINE_NUMBER(9);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ParagraphBySpace"_j))), (jint(1)));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace = sp[0].o;
	LINE_NUMBER(11);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ParagraphByGlyph"_j))), (jint(2)));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph = sp[0].o;
	LINE_NUMBER(13);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WrappedLinesBySpace"_j))), (jint(3)));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace = sp[0].o;
	LINE_NUMBER(15);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WrappedLinesByGlyph"_j))), (jint(4)));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph = sp[0].o;
	LINE_NUMBER(17);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AllLinesBySpace"_j))), (jint(5)));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace = sp[0].o;
	LINE_NUMBER(19);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Justify);
	init_com_badlogic_gdx_utils_Justify_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AllLinesByGlyph"_j))), (6));
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph = sp[0].o;
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Justify_$values_R_Array1_com_badlogic_gdx_utils_Justify(ctx);
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	SF_com_badlogic_gdx_utils_Justify_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Justify[] {
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
	(void *) M_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Justify_isNone_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean,
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
	{ "matchChar", "(I)Z" },
	{ "isNone", "()Z" },
	{ "isParagraph", "()Z" },
	{ "isWrappedLines", "()Z" },
	{ "isAllLines", "()Z" },
	{ "isBySpace", "()Z" },
	{ "isByGlyph", "()Z" },
};

static FieldMetadata fields[] {
	{ "None", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_None, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "ParagraphBySpace", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "ParagraphByGlyph", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "WrappedLinesBySpace", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "WrappedLinesByGlyph", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "AllLinesBySpace", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "AllLinesByGlyph", &class_com_badlogic_gdx_utils_Justify, (intptr_t) &SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph, "Lcom/badlogic/gdx/utils/Justify;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_utils_Justify, 1), (intptr_t) &SF_com_badlogic_gdx_utils_Justify_$VALUES, "[Lcom/badlogic/gdx/utils/Justify;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_utils_Justify_values_R_Array1_com_badlogic_gdx_utils_Justify, 0, "()[Lcom/badlogic/gdx/utils/Justify;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_utils_Justify_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Justify, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Justify;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Justify_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "matchChar", (intptr_t) M_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean, "(I)Z", 1 },
	{ "isNone", (intptr_t) M_com_badlogic_gdx_utils_Justify_isNone_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_isNone_R_boolean, "()Z", 1 },
	{ "isParagraph", (intptr_t) M_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_isParagraph_R_boolean, "()Z", 1 },
	{ "isWrappedLines", (intptr_t) M_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_isWrappedLines_R_boolean, "()Z", 1 },
	{ "isAllLines", (intptr_t) M_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_isAllLines_R_boolean, "()Z", 1 },
	{ "isBySpace", (intptr_t) M_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_isBySpace_R_boolean, "()Z", 1 },
	{ "isByGlyph", (intptr_t) M_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean, VTABLE_com_badlogic_gdx_utils_Justify_isByGlyph_R_boolean, "()Z", 1 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_utils_Justify_$values_R_Array1_com_badlogic_gdx_utils_Justify, 0, "()[Lcom/badlogic/gdx/utils/Justify;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_Justify, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_Justify{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Justify",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_utils_Justify),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Justify,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Justify,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Justify,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Justify = registerClass(&class_com_badlogic_gdx_utils_Justify);

}

