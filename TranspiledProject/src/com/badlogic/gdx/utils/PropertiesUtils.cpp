#include "com/badlogic/gdx/utils/PropertiesUtils.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/io/BufferedReader.h"
#include "java/util/Date.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/NullPointerException.h"
#include "java/io/Reader.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/utils/PropertiesUtils.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_PropertiesUtils_NONE;
jint SF_com_badlogic_gdx_utils_PropertiesUtils_SLASH;
jint SF_com_badlogic_gdx_utils_PropertiesUtils_UNICODE;
jint SF_com_badlogic_gdx_utils_PropertiesUtils_CONTINUE;
jint SF_com_badlogic_gdx_utils_PropertiesUtils_KEY_DONE;
jint SF_com_badlogic_gdx_utils_PropertiesUtils_IGNORE;
jobject SF_com_badlogic_gdx_utils_PropertiesUtils_LINE_SEPARATOR;

void mark_com_badlogic_gdx_utils_PropertiesUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_PropertiesUtils_LINE_SEPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_PropertiesUtils_LINE_SEPARATOR)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_PropertiesUtils_LINE_SEPARATOR, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_PropertiesUtils *) object;
}

void clinit_com_badlogic_gdx_utils_PropertiesUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_PropertiesUtils_NONE = jint(0);
	SF_com_badlogic_gdx_utils_PropertiesUtils_SLASH = jint(1);
	SF_com_badlogic_gdx_utils_PropertiesUtils_UNICODE = jint(2);
	SF_com_badlogic_gdx_utils_PropertiesUtils_CONTINUE = jint(3);
	SF_com_badlogic_gdx_utils_PropertiesUtils_KEY_DONE = jint(4);
	SF_com_badlogic_gdx_utils_PropertiesUtils_IGNORE = jint(5);
	SF_com_badlogic_gdx_utils_PropertiesUtils_LINE_SEPARATOR = ((jobject) createStringLiteral(ctx, u8"\n"_j));
}

void init_com_badlogic_gdx_utils_PropertiesUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/PropertiesUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_PropertiesUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_PropertiesUtils_load_com_badlogic_gdx_utils_ObjectMap_java_io_Reader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/PropertiesUtils:load", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(50);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"properties cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(51);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reader cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(52);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	LINE_NUMBER(53);
	sp[0].o = (jobject) createArray(ctx, &class_char, (40));
	frame[6].o = sp[0].o;
	LINE_NUMBER(54);
	frame[7].i = (jint(0));
	frame[8].i = (jint(-1));
	LINE_NUMBER(55);
	frame[10].i = (jint(1));
	LINE_NUMBER(57);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, (frame[1].o));
	frame[11].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_java_io_BufferedReader_read_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_io_BufferedReader_read_R_int])(ctx, (frame[11].o));
	frame[9].i = temp0;
	LINE_NUMBER(61);
	if ((frame[9].i) != (jint(-1))) goto label_12;
	}
	LINE_NUMBER(62);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(64);
	frame[5].i = (jchar((frame[9].i)));
	LINE_NUMBER(66);
	if ((frame[7].i) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, (frame[6].o)))->length) * (jint(2))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(68);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[12].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(69);
	frame[6].o = (frame[12].o);
	}
label_16:;
	{
	LINE_NUMBER(71);
	if ((frame[2].i) != (jint(2))) goto label_20;
	}
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[5].i), (16));
	frame[12].i = temp0;
	LINE_NUMBER(73);
	if ((frame[12].i) < 0) goto label_23;
	}
	{
	LINE_NUMBER(74);
	frame[3].i = (((frame[3].i) << (jint(4))) + (frame[12].i));
	LINE_NUMBER(75);
	INST_IINC(4, 1);
	if ((frame[4].i) >= (jint(4))) goto label_26;
	}
	LINE_NUMBER(76);
	goto label_10;
label_23:;
	{
	LINE_NUMBER(78);
	if ((frame[4].i) > (jint(4))) goto label_26;
	}
	{
	LINE_NUMBER(79);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid Unicode sequence: illegal character"_j))));
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(81);
	frame[2].i = (jint(0));
	LINE_NUMBER(82);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[3].i)));
	LINE_NUMBER(83);
	if ((frame[5].i) == (10)) goto label_20;
	}
	LINE_NUMBER(84);
	goto label_10;
label_20:;
	{
	LINE_NUMBER(87);
	if ((frame[2].i) != (jint(1))) goto label_32;
	}
	{
	LINE_NUMBER(88);
	frame[2].i = (jint(0));
	LINE_NUMBER(89);
	switch((frame[5].i)) {
		case 10: goto label_35;
		case 13: goto label_36;
		case 98: goto label_37;
		case 102: goto label_38;
		case 110: goto label_39;
		case 114: goto label_40;
		case 116: goto label_41;
		case 117: goto label_42;
		default: goto label_43;
	}
	}
label_36:;
	{
	LINE_NUMBER(91);
	frame[2].i = (jint(3));
	LINE_NUMBER(92);
	goto label_10;
	}
label_35:;
	{
	LINE_NUMBER(94);
	frame[2].i = (jint(5));
	LINE_NUMBER(95);
	goto label_10;
	}
label_37:;
	{
	LINE_NUMBER(97);
	frame[5].i = (8);
	LINE_NUMBER(98);
	goto label_43;
	}
label_38:;
	{
	LINE_NUMBER(100);
	frame[5].i = (12);
	LINE_NUMBER(101);
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(103);
	frame[5].i = (10);
	LINE_NUMBER(104);
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(106);
	frame[5].i = (13);
	LINE_NUMBER(107);
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(109);
	frame[5].i = (9);
	LINE_NUMBER(110);
	goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(112);
	frame[2].i = (jint(2));
	LINE_NUMBER(113);
	jint temp0 = jint(0);
	frame[4].i = temp0;
	frame[3].i = temp0;
	LINE_NUMBER(114);
	goto label_10;
	}
label_43:;
	goto label_53;
label_32:;
	{
	LINE_NUMBER(117);
	switch((frame[5].i)) {
		case 10: goto label_54;
		case 13: goto label_55;
		case 33: goto label_56;
		case 35: goto label_56;
		case 58: goto label_57;
		case 61: goto label_57;
		case 92: goto label_58;
		default: goto label_59;
	}
	}
label_56:;
	{
	LINE_NUMBER(120);
	if ((frame[10].i) == 0) goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_io_BufferedReader_read_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_io_BufferedReader_read_R_int])(ctx, (frame[11].o));
	frame[9].i = temp0;
	LINE_NUMBER(123);
	if ((frame[9].i) != (jint(-1))) goto label_62;
	}
	LINE_NUMBER(124);
	goto label_10;
label_62:;
	{
	LINE_NUMBER(126);
	frame[5].i = (jchar((frame[9].i)));
	LINE_NUMBER(127);
	if ((frame[5].i) == (13)) goto label_10;
	}
	{
	if ((frame[5].i) != (10)) goto label_60;
	}
	LINE_NUMBER(128);
	goto label_10;
label_54:;
	{
	LINE_NUMBER(135);
	if ((frame[2].i) != (jint(3))) goto label_55;
	}
	{
	LINE_NUMBER(136);
	frame[2].i = (jint(5));
	LINE_NUMBER(137);
	goto label_10;
	}
label_55:;
	{
	LINE_NUMBER(141);
	frame[2].i = (jint(0));
	LINE_NUMBER(142);
	frame[10].i = (jint(1));
	LINE_NUMBER(143);
	if ((frame[7].i) > 0) goto label_70;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_71;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_71;
label_70:;
	{
	LINE_NUMBER(144);
	if ((frame[8].i) != (jint(-1))) goto label_72;
	}
	{
	LINE_NUMBER(145);
	frame[8].i = (frame[7].i);
	}
label_72:;
	{
	LINE_NUMBER(147);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (jint(0)), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[12].o), (jint(0)), (frame[8].i));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[12].o), (frame[8].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_71:;
	{
	LINE_NUMBER(150);
	frame[8].i = (jint(-1));
	LINE_NUMBER(151);
	frame[7].i = (jint(0));
	LINE_NUMBER(152);
	goto label_10;
	}
label_58:;
	{
	LINE_NUMBER(154);
	if ((frame[2].i) != (jint(4))) goto label_77;
	}
	{
	LINE_NUMBER(155);
	frame[8].i = (frame[7].i);
	}
label_77:;
	{
	LINE_NUMBER(157);
	frame[2].i = (jint(1));
	LINE_NUMBER(158);
	goto label_10;
	}
label_57:;
	{
	LINE_NUMBER(161);
	if ((frame[8].i) != (jint(-1))) goto label_59;
	}
	{
	LINE_NUMBER(162);
	frame[2].i = (jint(0));
	LINE_NUMBER(163);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(164);
	goto label_10;
	}
label_59:;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)SM_java_lang_Character_isSpace_char_R_boolean(ctx, (frame[5].i));
	if (temp0 == 0) goto label_83;
	}
	{
	LINE_NUMBER(170);
	if ((frame[2].i) != (jint(3))) goto label_85;
	}
	{
	LINE_NUMBER(171);
	frame[2].i = (jint(5));
	}
label_85:;
	{
	LINE_NUMBER(174);
	if ((frame[7].i) == 0) goto label_10;
	}
	{
	if ((frame[7].i) == (frame[8].i)) goto label_10;
	}
	{
	if ((frame[2].i) != (jint(5))) goto label_87;
	}
	LINE_NUMBER(175);
	goto label_10;
label_87:;
	{
	LINE_NUMBER(177);
	if ((frame[8].i) != (jint(-1))) goto label_83;
	}
	{
	LINE_NUMBER(178);
	frame[2].i = (jint(4));
	LINE_NUMBER(179);
	goto label_10;
	}
label_83:;
	{
	LINE_NUMBER(182);
	if ((frame[2].i) == (jint(5))) goto label_91;
	}
	{
	if ((frame[2].i) != (jint(3))) goto label_53;
	}
label_91:;
	{
	LINE_NUMBER(183);
	frame[2].i = (jint(0));
	}
label_53:;
	{
	LINE_NUMBER(186);
	frame[10].i = (jint(0));
	LINE_NUMBER(187);
	if ((frame[2].i) != (jint(4))) goto label_93;
	}
	{
	LINE_NUMBER(188);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(189);
	frame[2].i = (jint(0));
	}
label_93:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[5].i);
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(193);
	if ((frame[2].i) != (jint(2))) goto label_96;
	}
	{
	if ((frame[4].i) > (jint(4))) goto label_96;
	}
	{
	LINE_NUMBER(194);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid Unicode sequence: expected format \\uxxxx"_j))));
	throwException(ctx, sp[0].o);	}
label_96:;
	{
	LINE_NUMBER(196);
	if ((frame[8].i) != (jint(-1))) goto label_98;
	}
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_98;
	{
	LINE_NUMBER(197);
	frame[8].i = (frame[7].i);
	}
label_98:;
	{
	LINE_NUMBER(199);
	if ((frame[8].i) < 0) goto label_100;
	}
	{
	LINE_NUMBER(200);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (jint(0)), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[12].o), (jint(0)), (frame[8].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[12].o), (frame[8].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(203);
	if ((frame[2].i) != (jint(1))) goto label_105;
	}
	{
	LINE_NUMBER(204);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[14].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0000"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_105:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[13].o), (frame[14].o));
	}
label_100:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_PropertiesUtils_store_com_badlogic_gdx_utils_ObjectMap_java_io_Writer_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/PropertiesUtils:store", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(227);
	SM_com_badlogic_gdx_utils_PropertiesUtils_storeImpl_com_badlogic_gdx_utils_ObjectMap_java_io_Writer_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_PropertiesUtils_storeImpl_com_badlogic_gdx_utils_ObjectMap_java_io_Writer_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/PropertiesUtils:storeImpl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(232);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(233);
	SM_com_badlogic_gdx_utils_PropertiesUtils_writeComment_java_io_Writer_java_lang_String(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(235);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	LINE_NUMBER(236);
	sp[0].o = frame[1].o;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_util_Date_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Date_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(237);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(239);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (200));
	frame[4].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(241);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	SM_com_badlogic_gdx_utils_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (jint(1)), (frame[3].i));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (61));
	LINE_NUMBER(243);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	SM_com_badlogic_gdx_utils_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (jint(0)), (frame[3].i));
	LINE_NUMBER(244);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(245);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(247);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(248);
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/PropertiesUtils:dumpString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(253);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(256);
	if ((frame[6].i) <= (61)) goto label_6;
	}
	{
	if ((frame[6].i) >= (127)) goto label_6;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) != (92)) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\\\\"_j));
	goto label_9;
label_8:;
	INST_ILOAD(6);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, sp[0].i);
	sp++;
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(258);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(260);
	switch((frame[6].i)) {
		case 9: goto label_12;
		case 10: goto label_13;
		case 12: goto label_14;
		case 13: goto label_15;
		case 32: goto label_16;
		case 33: goto label_17;
		case 35: goto label_17;
		case 58: goto label_17;
		case 61: goto label_17;
		default: goto label_18;
	}
	}
label_16:;
	{
	LINE_NUMBER(262);
	if ((frame[5].i) == 0) goto label_19;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_20;
label_19:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\ "_j))));
	goto label_11;
	}
label_20:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(267);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(270);
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(273);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(276);
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\f"_j))));
	LINE_NUMBER(279);
	goto label_11;
	}
label_17:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (92));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(285);
	goto label_11;
	}
label_18:;
	{
	LINE_NUMBER(287);
	if ((frame[6].i) < (32)) goto label_27;
	}
	{
	if ((frame[6].i) <= (126)) goto label_28;
	}
label_27:;
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	if ((sp[0].i & (frame[3].i)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(290);
	frame[8].i = (jint(0));
	}
label_34:;
	{
	jint temp0 = frame[8].i;
	jint temp1 = jint(4);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	if (temp0 >= (temp1 - temp2)) goto label_35;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (48));
	LINE_NUMBER(290);
	INST_IINC(8, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(294);
	goto label_11;
	}
label_30:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(253);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(300);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_utils_PropertiesUtils_writeComment_java_io_Writer_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/PropertiesUtils:writeComment", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(303);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(305);
	frame[3].i = (jint(0));
	LINE_NUMBER(306);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(307);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(309);
	if ((frame[5].i) > (255)) goto label_8;
	}
	{
	if ((frame[5].i) == (10)) goto label_8;
	}
	{
	if ((frame[5].i) != (13)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(310);
	if ((frame[4].i) == (frame[3].i)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), (frame[3].i));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(311);
	if ((frame[5].i) <= (255)) goto label_11;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(313);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(314);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = jint(4);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (temp1 - temp2)) goto label_16;
	}
	{
	LINE_NUMBER(315);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[0].o), (48));
	LINE_NUMBER(314);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(317);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(318);
	goto label_20;
	}
label_11:;
	{
	LINE_NUMBER(319);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(320);
	if ((frame[5].i) != (13)) goto label_22;
	}
	{
	if ((frame[3].i) == ((frame[2].i) - (jint(1)))) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	if (temp0 != (10)) goto label_22;
	}
	LINE_NUMBER(321);
	INST_IINC(3, 1);
label_22:;
	{
	LINE_NUMBER(323);
	if ((frame[3].i) == ((frame[2].i) - (jint(1)))) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	if (temp0 == (35)) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	if (temp0 == (33)) goto label_20;
	}
label_24:;
	{
	LINE_NUMBER(324);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	}
label_20:;
	{
	LINE_NUMBER(326);
	frame[4].i = ((frame[3].i) + (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(328);
	INST_IINC(3, 1);
	LINE_NUMBER(329);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(330);
	if ((frame[4].i) == (frame[3].i)) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), (frame[3].i));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(331);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_PropertiesUtils[] {
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
	{ "NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_NONE, "I", 26 },
	{ "SLASH", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_SLASH, "I", 26 },
	{ "UNICODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_UNICODE, "I", 26 },
	{ "CONTINUE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_CONTINUE, "I", 26 },
	{ "KEY_DONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_KEY_DONE, "I", 26 },
	{ "IGNORE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_IGNORE, "I", 26 },
	{ "LINE_SEPARATOR", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_utils_PropertiesUtils_LINE_SEPARATOR, "Ljava/lang/String;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_PropertiesUtils, 0, "()V", 2 },
	{ "load", (intptr_t) SM_com_badlogic_gdx_utils_PropertiesUtils_load_com_badlogic_gdx_utils_ObjectMap_java_io_Reader, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;Ljava/io/Reader;)V", 9 },
	{ "store", (intptr_t) SM_com_badlogic_gdx_utils_PropertiesUtils_store_com_badlogic_gdx_utils_ObjectMap_java_io_Writer_java_lang_String, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;Ljava/io/Writer;Ljava/lang/String;)V", 9 },
	{ "storeImpl", (intptr_t) SM_com_badlogic_gdx_utils_PropertiesUtils_storeImpl_com_badlogic_gdx_utils_ObjectMap_java_io_Writer_java_lang_String_boolean, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;Ljava/io/Writer;Ljava/lang/String;Z)V", 10 },
	{ "dumpString", (intptr_t) SM_com_badlogic_gdx_utils_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean, 0, "(Ljava/lang/StringBuilder;Ljava/lang/String;ZZ)V", 10 },
	{ "writeComment", (intptr_t) SM_com_badlogic_gdx_utils_PropertiesUtils_writeComment_java_io_Writer_java_lang_String, 0, "(Ljava/io/Writer;Ljava/lang/String;)V", 10 },
};

Class class_com_badlogic_gdx_utils_PropertiesUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/PropertiesUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_PropertiesUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_PropertiesUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_PropertiesUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_PropertiesUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_PropertiesUtils = registerClass(&class_com_badlogic_gdx_utils_PropertiesUtils);

}

