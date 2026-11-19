#include "lib/input/VietnameseTextUtils.h"
#include "java/lang/Object.h"
#include "lib/input/VietnameseTextUtils.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"

extern "C" {

jobject SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;

void mark_lib_input_VietnameseTextUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_input_VietnameseTextUtils_VOWEL_TABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_VietnameseTextUtils_VOWEL_TABLE)->clazz)->markFunction)((jobject) SF_lib_input_VietnameseTextUtils_VOWEL_TABLE, mark, depth + 1);
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
	auto self = (lib_input_VietnameseTextUtils *) object;
}

void init_lib_input_VietnameseTextUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_input_VietnameseTextUtils_findEntry_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:findEntry", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(41);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(42);
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(43);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(44);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) != (frame[0].i)) goto label_8;
	}
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (((frame[1].i) << (jint(4))) | (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(43);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(41);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_lib_input_VietnameseTextUtils_isCombiningMark_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:isCombiningMark", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(53);
	if ((frame[0].i) < (768)) goto label_1;
	}
	{
	if ((frame[0].i) > (879)) goto label_1;
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

jchar SM_lib_input_VietnameseTextUtils_composePair_char_char_R_char(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:composePair", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(61);
	if ((frame[1].i) == (821)) goto label_1;
	}
	{
	if ((frame[1].i) == (822)) goto label_1;
	}
	{
	if ((frame[1].i) != (823)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(62);
	if ((frame[0].i) != (100)) goto label_3;
	}
	INST_SIPUSH(273);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(63);
	if ((frame[0].i) != (68)) goto label_4;
	}
	INST_SIPUSH(272);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)SM_lib_input_VietnameseTextUtils_findEntry_char_R_int(ctx, (frame[0].i));
	frame[2].i = temp0;
	LINE_NUMBER(68);
	if ((frame[2].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(71);
	frame[3].i = ((frame[2].i) >> (jint(4)));
	LINE_NUMBER(72);
	frame[4].i = ((frame[2].i) & (15));
	LINE_NUMBER(74);
	switch((frame[1].i)) {
		case 768: goto label_10;
		case 769: goto label_11;
		case 770: goto label_12;
		case 771: goto label_13;
		case 774: goto label_14;
		case 777: goto label_15;
		case 795: goto label_16;
		case 803: goto label_17;
		case 832: goto label_10;
		case 833: goto label_11;
		default: goto label_18;
	}
	}
label_10:;
	{
	LINE_NUMBER(77);
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(1))));
	}
label_15:;
	{
	LINE_NUMBER(79);
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(2))));
	}
label_13:;
	{
	LINE_NUMBER(81);
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(3))));
	}
label_11:;
	{
	LINE_NUMBER(84);
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(4))));
	}
label_17:;
	{
	LINE_NUMBER(86);
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (jint(5))));
	}
label_14:;
	{
	LINE_NUMBER(88);
	if ((frame[3].i) == 0) goto label_19;
	}
	{
	if ((frame[3].i) != (jint(1))) goto label_20;
	}
label_19:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))), (frame[4].i)));
	}
label_20:;
	{
	LINE_NUMBER(89);
	if ((frame[3].i) == (12)) goto label_21;
	}
	{
	if ((frame[3].i) != (13)) goto label_22;
	}
label_21:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (13))), (frame[4].i)));
	}
label_22:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(92);
	if ((frame[3].i) == 0) goto label_23;
	}
	{
	if ((frame[3].i) != (jint(2))) goto label_24;
	}
label_23:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)))), (frame[4].i)));
	}
label_24:;
	{
	LINE_NUMBER(93);
	if ((frame[3].i) == (jint(3))) goto label_25;
	}
	{
	if ((frame[3].i) != (jint(4))) goto label_26;
	}
label_25:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(4)))), (frame[4].i)));
	}
label_26:;
	{
	LINE_NUMBER(94);
	if ((frame[3].i) == (6)) goto label_27;
	}
	{
	if ((frame[3].i) != (7)) goto label_28;
	}
label_27:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (7))), (frame[4].i)));
	}
label_28:;
	{
	LINE_NUMBER(95);
	if ((frame[3].i) == (12)) goto label_29;
	}
	{
	if ((frame[3].i) != (14)) goto label_30;
	}
label_29:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (14))), (frame[4].i)));
	}
label_30:;
	{
	LINE_NUMBER(96);
	if ((frame[3].i) == (15)) goto label_31;
	}
	{
	if ((frame[3].i) != (16)) goto label_32;
	}
label_31:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (16))), (frame[4].i)));
	}
label_32:;
	{
	LINE_NUMBER(97);
	if ((frame[3].i) == (18)) goto label_33;
	}
	{
	if ((frame[3].i) != (19)) goto label_34;
	}
label_33:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (19))), (frame[4].i)));
	}
label_34:;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(100);
	if ((frame[3].i) == (6)) goto label_35;
	}
	{
	if ((frame[3].i) != (8)) goto label_36;
	}
label_35:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (8))), (frame[4].i)));
	}
label_36:;
	{
	LINE_NUMBER(101);
	if ((frame[3].i) == (9)) goto label_37;
	}
	{
	if ((frame[3].i) != (10)) goto label_38;
	}
label_37:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (10))), (frame[4].i)));
	}
label_38:;
	{
	LINE_NUMBER(102);
	if ((frame[3].i) == (18)) goto label_39;
	}
	{
	if ((frame[3].i) != (20)) goto label_40;
	}
label_39:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (20))), (frame[4].i)));
	}
label_40:;
	{
	LINE_NUMBER(103);
	if ((frame[3].i) == (21)) goto label_41;
	}
	{
	if ((frame[3].i) != (22)) goto label_42;
	}
label_41:;
	{
	clinit_lib_input_VietnameseTextUtils(ctx);
	sp[0].o = (jobject)SF_lib_input_VietnameseTextUtils_VOWEL_TABLE;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (22))), (frame[4].i)));
	}
label_42:;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_lib_input_VietnameseTextUtils_isIgnorableFormatChar_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:isIgnorableFormatChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(111);
	if ((frame[0].i) == (jint(65279))) goto label_1;
	}
	{
	if ((frame[0].i) < (8203)) goto label_2;
	}
	{
	if ((frame[0].i) <= (8207)) goto label_1;
	}
label_2:;
	{
	if ((frame[0].i) == (8232)) goto label_1;
	}
	{
	if ((frame[0].i) == (8233)) goto label_1;
	}
	{
	if ((frame[0].i) < (8234)) goto label_3;
	}
	{
	if ((frame[0].i) <= (8238)) goto label_1;
	}
label_3:;
	{
	if ((frame[0].i) != (8288)) goto label_4;
	}
label_1:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_lib_input_VietnameseTextUtils_sanitizeForSingleLine_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:sanitizeForSingleLine", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(123);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_2:;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(127);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(130);
	if ((frame[4].i) == (13)) goto label_9;
	}
	{
	if ((frame[4].i) == (10)) goto label_9;
	}
	{
	jint temp0 = (jint)SM_lib_input_VietnameseTextUtils_isIgnorableFormatChar_char_R_boolean(ctx, (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
	LINE_NUMBER(131);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(133);
	if ((frame[4].i) == (9)) goto label_12;
	}
	{
	if ((frame[4].i) != (160)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(134);
	frame[4].i = (32);
	}
label_13:;
	{
	LINE_NUMBER(136);
	if ((frame[4].i) < (32)) goto label_9;
	}
	{
	if ((frame[4].i) != (127)) goto label_14;
	}
	LINE_NUMBER(137);
	goto label_9;
label_14:;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)SM_lib_input_VietnameseTextUtils_isCombiningMark_char_R_boolean(ctx, (frame[4].i));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(141);
	if ((frame[5].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[2].o), ((frame[5].i) - (jint(1))));
	jint temp1 = (jint)SM_lib_input_VietnameseTextUtils_composePair_char_char_R_char(ctx, temp0, (frame[4].i));
	frame[6].i = temp1;
	LINE_NUMBER(143);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(144);
	((func_java_lang_StringBuilder_setCharAt_int_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_setCharAt_int_char])(ctx, (frame[2].o), ((frame[5].i) - (jint(1))), (frame[6].i));
	}
label_22:;
	LINE_NUMBER(146);
	goto label_9;
label_19:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].i));
	LINE_NUMBER(149);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].i));
	}
label_9:;
	{
	LINE_NUMBER(128);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_lib_input_VietnameseTextUtils_mapGameplayKeyFromImeChar_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:mapGameplayKeyFromImeChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(161);
	if ((frame[0].i) == (273)) goto label_1;
	}
	{
	if ((frame[0].i) != (272)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (100);
	}
label_2:;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)SM_lib_input_VietnameseTextUtils_findEntry_char_R_int(ctx, (frame[0].i));
	frame[1].i = temp0;
	LINE_NUMBER(165);
	if ((frame[1].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(168);
	frame[2].i = ((frame[1].i) >> (jint(4)));
	LINE_NUMBER(169);
	frame[3].i = ((frame[1].i) & (15));
	LINE_NUMBER(170);
	if ((frame[3].i) != (jint(4))) goto label_8;
	}
	INST_BIPUSH(115);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(171);
	if ((frame[3].i) != (jint(1))) goto label_9;
	}
	INST_BIPUSH(102);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(172);
	if ((frame[3].i) != (jint(2))) goto label_10;
	}
	INST_BIPUSH(114);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(173);
	if ((frame[3].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(174);
	if ((frame[2].i) < (12)) goto label_13;
	}
	{
	jint temp0 = (frame[2].i) - (12);
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ILOAD(2);
label_14:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(175);
	if ((frame[4].i) == (jint(1))) goto label_16;
	}
	{
	if ((frame[4].i) == (8)) goto label_16;
	}
	{
	if ((frame[4].i) != (10)) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (119);
	}
label_17:;
	{
	LINE_NUMBER(178);
	if ((frame[4].i) != (jint(2))) goto label_11;
	}
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (97);
	}
label_11:;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_lib_input_VietnameseTextUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/VietnameseTextUtils:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_VietnameseTextUtils(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_char, 1), (24));
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (97);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (224);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7843);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (227);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (225);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7841);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (259);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7857);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7859);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7861);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7855);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7863);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (226);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7847);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7849);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7851);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7845);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7853);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (101);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (232);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7867);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7869);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (233);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7865);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (234);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7873);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7875);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7877);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7871);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7879);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (105);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (236);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7881);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (297);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (237);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7883);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (111);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (242);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7887);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (245);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (243);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7885);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (244);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7891);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7893);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7895);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7889);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7897);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (417);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7901);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7903);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7905);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7899);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7907);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (117);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (249);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7911);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (361);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (250);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7909);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (432);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7915);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7917);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7919);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7913);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7921);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (121);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7923);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7927);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7929);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (253);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7925);
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (65);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (192);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7842);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (195);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (193);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7840);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (258);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7856);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7858);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7860);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7854);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7862);
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (194);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7846);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7848);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7850);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7844);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7852);
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (69);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (200);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7866);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7868);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (201);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7864);
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (202);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7872);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7874);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7876);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7870);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7878);
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (73);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (204);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7880);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (296);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (205);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7882);
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (79);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (210);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7886);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (213);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (211);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7884);
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (212);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7890);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7892);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7894);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7888);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7896);
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (416);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7900);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7902);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7904);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7898);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7906);
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (85);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (217);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7910);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (360);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (218);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7908);
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (431);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7914);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7916);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7918);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (7912);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7920);
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	sp[1].o = (jobject) createArray(ctx, &class_char, (6));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (89);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (7922);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (7926);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (7928);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (221);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (7924);
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	clinit_lib_input_VietnameseTextUtils(ctx);
	SF_lib_input_VietnameseTextUtils_VOWEL_TABLE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_input_VietnameseTextUtils[] {
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
};

static FieldMetadata fields[] {
	{ "VOWEL_TABLE", getArrayClass(&class_char, 2), (intptr_t) &SF_lib_input_VietnameseTextUtils_VOWEL_TABLE, "[[C", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_input_VietnameseTextUtils, 0, "()V", 2 },
	{ "findEntry", (intptr_t) SM_lib_input_VietnameseTextUtils_findEntry_char_R_int, 0, "(C)I", 10 },
	{ "isCombiningMark", (intptr_t) SM_lib_input_VietnameseTextUtils_isCombiningMark_char_R_boolean, 0, "(C)Z", 9 },
	{ "composePair", (intptr_t) SM_lib_input_VietnameseTextUtils_composePair_char_char_R_char, 0, "(CC)C", 9 },
	{ "isIgnorableFormatChar", (intptr_t) SM_lib_input_VietnameseTextUtils_isIgnorableFormatChar_char_R_boolean, 0, "(C)Z", 10 },
	{ "sanitizeForSingleLine", (intptr_t) SM_lib_input_VietnameseTextUtils_sanitizeForSingleLine_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "mapGameplayKeyFromImeChar", (intptr_t) SM_lib_input_VietnameseTextUtils_mapGameplayKeyFromImeChar_char_R_int, 0, "(C)I", 9 },
	{ "<clinit>", (intptr_t) clinit_lib_input_VietnameseTextUtils, 0, "()V", 8 },
};

Class class_lib_input_VietnameseTextUtils{
		.nativeName = (intptr_t) "lib/input/VietnameseTextUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_input_VietnameseTextUtils),
		.classVtable = (intptr_t) vtable_lib_input_VietnameseTextUtils,
		.staticInitializer = (intptr_t) clinit_lib_input_VietnameseTextUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_input_VietnameseTextUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_input_VietnameseTextUtils = registerClass(&class_lib_input_VietnameseTextUtils);

}

