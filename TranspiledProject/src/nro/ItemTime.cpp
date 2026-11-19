#include "nro/ItemTime.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/ItemTime.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {


void mark_nro_ItemTime(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ItemTime *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
}

void clinit_nro_ItemTime(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_ItemTime_short_int(jcontext ctx, jobject self, jshort param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTime(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second = (jint(0));
	LINE_NUMBER(19);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_per = (100);
	LINE_NUMBER(22);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_idIcon = (frame[1].i);
	LINE_NUMBER(23);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute = ((frame[2].i) / (60));
	LINE_NUMBER(24);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second = ((frame[2].i) % (60));
	LINE_NUMBER(25);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_time = (frame[2].i);
	LINE_NUMBER(26);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime = (frame[2].i);
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ItemTime *) NULL_CHECK(sp[1].o))->F_last = temp0;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != (14)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_isPaint_coolDownBar = sp[1].i;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_ItemTime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTime(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second = (jint(0));
	LINE_NUMBER(19);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_per = (100);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_ItemTime_isExistItem_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:isExistItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(35);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_vItemTime;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(36);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_vItemTime;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_ItemTime *) NULL_CHECK((checkCast(ctx, &class_nro_ItemTime, sp[0].o))))->F_idIcon) != (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(35);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_ItemTime_isExistMessage_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:isExistMessage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(45);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_textTime;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(46);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_textTime;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_ItemTime *) NULL_CHECK((checkCast(ctx, &class_nro_ItemTime, sp[0].o))))->F_idIcon) != (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(45);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_nro_ItemTime_getItemById_int_R_nro_ItemTime(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:getItemById", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(55);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_vItemTime;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(57);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_vItemTime;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_ItemTime, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_idIcon) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(55);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_nro_ItemTime_getMessageById_int_R_nro_ItemTime(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:getMessageById", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTime(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(66);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_textTime;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(68);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_textTime;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_ItemTime, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_idIcon) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(66);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_ItemTime_initTimeText_byte_java_lang_String_int(jcontext ctx, jobject self, jbyte param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:initTimeText", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(77);
	if ((frame[3].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(78);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_dontClear = (jint(1));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(80);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_dontClear = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(83);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_isText = (jint(1));
	LINE_NUMBER(84);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute = ((frame[3].i) / (60));
	LINE_NUMBER(85);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second = ((frame[3].i) % (60));
	LINE_NUMBER(86);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_idIcon = (jshort((frame[1].i)));
	LINE_NUMBER(87);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_time = (frame[3].i);
	LINE_NUMBER(88);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime = (frame[3].i);
	LINE_NUMBER(89);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ItemTime *) NULL_CHECK(sp[1].o))->F_last = temp0;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_idIcon) != (14)) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_isPaint_coolDownBar = sp[1].i;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ItemTime_initTime_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:initTime", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(95);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute = ((frame[1].i) / (60));
	LINE_NUMBER(96);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second = ((frame[1].i) % (60));
	LINE_NUMBER(97);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].i);
	LINE_NUMBER(98);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime = (frame[1].i);
	LINE_NUMBER(99);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_isText = (jint(0));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ItemTime *) NULL_CHECK(sp[1].o))->F_last = temp0;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_ItemTime_getDisplayTime_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:getDisplayTime", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	frame[1].i = ((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime);
	LINE_NUMBER(105);
	if ((frame[1].i) > 0) goto label_2;
	}
	{
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute) < 0) goto label_2;
	}
	{
	LINE_NUMBER(106);
	frame[1].i = ((((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute) * (60)) + ((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second));
	}
label_2:;
	{
	LINE_NUMBER(108);
	if ((frame[1].i) > 0) goto label_4;
	}
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0s"_j)));
	}
label_4:;
	{
	LINE_NUMBER(112);
	frame[2].i = ((frame[1].i) / (jint(86400)));
	LINE_NUMBER(113);
	frame[3].i = (((frame[1].i) % (jint(86400))) / (3600));
	LINE_NUMBER(114);
	frame[4].i = (((frame[1].i) % (3600)) / (60));
	LINE_NUMBER(115);
	frame[5].i = ((frame[1].i) % (60));
	LINE_NUMBER(117);
	if ((frame[2].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(118);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"d:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(119);
	if ((frame[3].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(120);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"h:"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(121);
	if ((frame[4].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(122);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(124);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"s"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_ItemTime_paintText_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:paintText", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(129);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_isPaint_coolDownBar) == 0) goto label_1;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(131);
	frame[2].i = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (40));
	LINE_NUMBER(132);
	frame[3].i = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (80));
	LINE_NUMBER(133);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(8421504)));
	LINE_NUMBER(134);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i), (80), (jint(2)));
	LINE_NUMBER(135);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(16777215)));
	LINE_NUMBER(136);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_per) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(137);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i), (((80) * ((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_per)) / (100)), (jint(2)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_nro_ItemTime_getDisplayTime_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_ItemTime_getDisplayTime_R_java_lang_String])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(143);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_dontClear) == 0) goto label_13;
	}
	{
	LINE_NUMBER(144);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_13:;
	{
	LINE_NUMBER(147);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_text;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[4].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	}
label_3:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ItemTime_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTime:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(154);
	if ((longCompare((((jlong)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_curr) - ((jlong)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_2;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_second = (((jint)((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_second) - (jint(1)));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_coutTime = (((jint)((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_coutTime) - (jint(1)));
	LINE_NUMBER(158);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(159);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_second = (59);
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_minute = (((jint)((nro_ItemTime *) NULL_CHECK(sp[0].o))->F_minute) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(163);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_time) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(164);
	((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_per = ((((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime) * (100)) / ((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_time));
	}
label_2:;
	{
	LINE_NUMBER(168);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime) <= 0) goto label_11;
	}
	{
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute) >= 0) goto label_12;
	}
label_11:;
	{
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_isText) != 0) goto label_12;
	}
	{
	LINE_NUMBER(169);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_vItemTime;
	jint temp0 = (jint)((func_java_util_Vector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(172);
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_coutTime) <= 0) goto label_14;
	}
	{
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_minute) >= 0) goto label_15;
	}
label_14:;
	{
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_isText) == 0) goto label_15;
	}
	{
	if (((jint)((nro_ItemTime *) NULL_CHECK((frame[0].o)))->F_dontClear) != 0) goto label_15;
	}
	{
	LINE_NUMBER(173);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_textTime;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_ItemTime[] {
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
	(void *) M_nro_ItemTime_initTimeText_byte_java_lang_String_int,
	(void *) M_nro_ItemTime_initTime_int_boolean,
	(void *) M_nro_ItemTime_getDisplayTime_R_java_lang_String,
	(void *) M_nro_ItemTime_paintText_lib_mGraphics_int_int,
	(void *) M_nro_ItemTime_update,
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
	{ "initTimeText", "(BLjava/lang/String;I)V" },
	{ "initTime", "(IZ)V" },
	{ "getDisplayTime", "()Ljava/lang/String;" },
	{ "paintText", "(Llib/mGraphics;II)V" },
	{ "update", "()V" },
};

static FieldMetadata fields[] {
	{ "idIcon", &class_short, offsetof(nro_ItemTime, F_idIcon), "S", 1 },
	{ "second", &class_int, offsetof(nro_ItemTime, F_second), "I", 1 },
	{ "minute", &class_int, offsetof(nro_ItemTime, F_minute), "I", 1 },
	{ "curr", &class_long, offsetof(nro_ItemTime, F_curr), "J", 2 },
	{ "last", &class_long, offsetof(nro_ItemTime, F_last), "J", 2 },
	{ "isPaint_coolDownBar", &class_boolean, offsetof(nro_ItemTime, F_isPaint_coolDownBar), "Z", 2 },
	{ "time", &class_int, offsetof(nro_ItemTime, F_time), "I", 2 },
	{ "coutTime", &class_int, offsetof(nro_ItemTime, F_coutTime), "I", 2 },
	{ "isText", &class_boolean, offsetof(nro_ItemTime, F_isText), "Z", 2 },
	{ "dontClear", &class_boolean, offsetof(nro_ItemTime, F_dontClear), "Z", 2 },
	{ "text", &class_java_lang_String, offsetof(nro_ItemTime, F_text), "Ljava/lang/String;", 2 },
	{ "per", &class_int, offsetof(nro_ItemTime, F_per), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ItemTime_short_int, 0, "(SI)V", 1 },
	{ "<init>", (intptr_t) init_nro_ItemTime, 0, "()V", 1 },
	{ "isExistItem", (intptr_t) SM_nro_ItemTime_isExistItem_int_R_boolean, 0, "(I)Z", 9 },
	{ "isExistMessage", (intptr_t) SM_nro_ItemTime_isExistMessage_int_R_boolean, 0, "(I)Z", 9 },
	{ "getItemById", (intptr_t) SM_nro_ItemTime_getItemById_int_R_nro_ItemTime, 0, "(I)Lnro/ItemTime;", 9 },
	{ "getMessageById", (intptr_t) SM_nro_ItemTime_getMessageById_int_R_nro_ItemTime, 0, "(I)Lnro/ItemTime;", 9 },
	{ "initTimeText", (intptr_t) M_nro_ItemTime_initTimeText_byte_java_lang_String_int, VTABLE_nro_ItemTime_initTimeText_byte_java_lang_String_int, "(BLjava/lang/String;I)V", 17 },
	{ "initTime", (intptr_t) M_nro_ItemTime_initTime_int_boolean, VTABLE_nro_ItemTime_initTime_int_boolean, "(IZ)V", 17 },
	{ "getDisplayTime", (intptr_t) M_nro_ItemTime_getDisplayTime_R_java_lang_String, VTABLE_nro_ItemTime_getDisplayTime_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "paintText", (intptr_t) M_nro_ItemTime_paintText_lib_mGraphics_int_int, VTABLE_nro_ItemTime_paintText_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 17 },
	{ "update", (intptr_t) M_nro_ItemTime_update, VTABLE_nro_ItemTime_update, "()V", 17 },
};

Class class_nro_ItemTime{
		.nativeName = (intptr_t) "nro/ItemTime",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ItemTime),
		.classVtable = (intptr_t) vtable_nro_ItemTime,
		.staticInitializer = (intptr_t) clinit_nro_ItemTime,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ItemTime,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ItemTime = registerClass(&class_nro_ItemTime);

}

