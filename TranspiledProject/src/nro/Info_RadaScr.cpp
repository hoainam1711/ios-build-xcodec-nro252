#include "nro/Info_RadaScr.h"
#include "lib/mFont.h"
#include "java/lang/StringBuilder.h"
#include "nro/RadarScr.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "nro/ItemOption.h"
#include "main/GameCanvas.h"
#include "nro/ChatPopup.h"
#include "nro/Position.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/Info_RadaScr.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/FrameImage.h"
#include "nro/Res.h"
#include "nro/Mob.h"
#include "nro/Npc.h"
#include "nro/Char.h"

extern "C" {


void mark_nro_Info_RadaScr(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Info_RadaScr *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_charInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charInfo)->clazz)->markFunction)((jobject) self->F_charInfo, mark, depth + 1);
	if (self->F_mobInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mobInfo)->clazz)->markFunction)((jobject) self->F_mobInfo, mark, depth + 1);
	if (self->F_itemOption)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemOption)->clazz)->markFunction)((jobject) self->F_itemOption, mark, depth + 1);
	if (self->F_f)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f)->clazz)->markFunction)((jobject) self->F_f, mark, depth + 1);
	if (self->F_cp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cp)->clazz)->markFunction)((jobject) self->F_cp, mark, depth + 1);
	if (self->F_eff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff)->clazz)->markFunction)((jobject) self->F_eff, mark, depth + 1);
}

void clinit_nro_Info_RadaScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Info_RadaScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Info_RadaScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_f = (jref) sp[1].o;
	LINE_NUMBER(23);
	((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_eff = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Info_RadaScr_SetAmount_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:SetAmount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_amount = (frame[1].i);
	LINE_NUMBER(30);
	((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_max_amount = (frame[2].i);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Info_RadaScr_SetLevel_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:SetLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_level = (frame[1].i);
	LINE_NUMBER(35);
	((func_nro_Info_RadaScr_addItemDetail) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Info_RadaScr_addItemDetail])(ctx, (frame[0].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Info_RadaScr_SetUse_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:SetUse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(39);
	((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_isUse = (frame[1].i);
	LINE_NUMBER(40);
	((func_nro_Info_RadaScr_addItemDetail) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Info_RadaScr_addItemDetail])(ctx, (frame[0].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:GetInfo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Info_RadaScr(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(44);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(45);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Info_RadaScr, sp[0].o);
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[3].o)))->F_id) != (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(45);
	INST_IINC(2, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_Info_RadaScr_addItemDetail(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:addItemDetail", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ChatPopup);
	init_nro_ChatPopup(ctx, sp[1].o);
	((nro_Info_RadaScr *) NULL_CHECK(sp[0].o))->F_cp = (jref) sp[1].o;
	LINE_NUMBER(58);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(59);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n|6|"_j))));
	sp[1].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(60);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n--"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(62);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(65);
	frame[3].i = (jint(0));
	LINE_NUMBER(68);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	sp[0].o = (jobject)((func_nro_ItemOption_getOptionString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_nro_ItemOption_getOptionString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_12;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (temp0 != ((jint)((nro_ItemOption *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_active)) goto label_12;
	}
	{
	LINE_NUMBER(70);
	INST_IINC(3, 1);
	LINE_NUMBER(71);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(68);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(75);
	if ((frame[3].i) != 0) goto label_15;
	}
	LINE_NUMBER(76);
	goto label_5;
label_15:;
	{
	LINE_NUMBER(79);
	if ((frame[2].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(80);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n|6|2|--"_j))));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_unlock;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"--"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(82);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n|6|2|--"_j))));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_equip;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" Lv."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"--"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(85);
	frame[4].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_21;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	sp[0].o = (jobject)((func_nro_ItemOption_getOptionString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_nro_ItemOption_getOptionString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))));
	frame[5].o = sp[0].o;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_24;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (temp0 != ((jint)((nro_ItemOption *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_active)) goto label_24;
	}
	{
	LINE_NUMBER(88);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"1"_j)));
	LINE_NUMBER(89);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_level) != 0) goto label_27;
	}
	{
	LINE_NUMBER(90);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"2"_j)));
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (((jint)((nro_ItemOption *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_active) == 0) goto label_29;
	}
	{
	LINE_NUMBER(92);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_isUse) != 0) goto label_31;
	}
	{
	LINE_NUMBER(93);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"2"_j)));
	goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_level;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (temp0 >= ((jint)((nro_ItemOption *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_active)) goto label_29;
	}
	{
	LINE_NUMBER(95);
	frame[6].o = (((jobject) createStringLiteral(ctx, u8"2"_j)));
	}
label_29:;
	{
	LINE_NUMBER(99);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|1|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(85);
	INST_IINC(4, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(103);
	if ((frame[3].i) == 0) goto label_34;
	}
	LINE_NUMBER(104);
	INST_IINC(2, 1);
label_34:;
	LINE_NUMBER(106);
	goto label_7;
label_5:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_cp;
	frame[2].o = sp[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_sayWidth = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_wText);
	LINE_NUMBER(111);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_cx = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_xText);
	LINE_NUMBER(112);
	sp[0].o = frame[2].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[1].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_sayWidth) - (8)));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_says = (jref) sp[1].o;
	LINE_NUMBER(113);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_delay = (jint(10000000));
	LINE_NUMBER(114);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_c = (jref) (jobject(nullptr));
	LINE_NUMBER(115);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_says;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_ch = ((((jarray) nullCheck(ctx, sp[1].o))->length) * (12));
	LINE_NUMBER(116);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_cy = (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_yText);
	LINE_NUMBER(117);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_strY = (10);
	LINE_NUMBER(118);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_cmx = (((jint)((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_ch) - (clinit_nro_RadarScr(ctx), (jint)SF_nro_RadarScr_hClip));
	LINE_NUMBER(119);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_cmx) >= 0) goto label_46;
	}
	{
	LINE_NUMBER(120);
	((nro_ChatPopup *) NULL_CHECK((frame[2].o)))->F_cmx = (jint(0));
	}
label_46:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Info_RadaScr:paintInfo", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(126);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(127);
	if (((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_amount) != ((jint)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_max_amount)) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_eff;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(1)), (jint(5)));
	frame[5].i = temp0;
	LINE_NUMBER(130);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_2;
	}
	{
	LINE_NUMBER(132);
	clinit_nro_Position(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Position);
	init_nro_Position(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(5)), (25));
	((nro_Position *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(133);
	sp[0].o = frame[7].o;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(5)), (25));
	((nro_Position *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(134);
	sp[0].o = frame[7].o;
	jint temp2 = frame[6].i;
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (8));
	((nro_Position *) NULL_CHECK(sp[0].o))->F_g = (temp2 * temp3);
	LINE_NUMBER(135);
	((nro_Position *) NULL_CHECK((frame[7].o)))->F_v = (jint(0));
	LINE_NUMBER(136);
	((nro_Position *) NULL_CHECK((frame[7].o)))->F_anchor = (jint(-1));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[4].o)))->F_eff;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(130);
	INST_IINC(6, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(141);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_eff;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_15;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_nro_Position, sp[0].o);
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(144);
	if (((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_v) >= ((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_g)) goto label_20;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[6].o;
	((nro_Position *) NULL_CHECK(sp[0].o))->F_v = (((jint)((nro_Position *) NULL_CHECK(sp[0].o))->F_v) + (jint(1)));
	}
label_20:;
	{
	LINE_NUMBER(148);
	if (((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_v) < ((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_g)) goto label_18;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[6].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(3));
	clinit_nro_RadarScr(ctx);
	sp[1].o = (jobject)SF_nro_RadarScr_fraEff;
	((nro_Position *) NULL_CHECK(sp[0].o))->F_anchor = (temp0 % (((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame) + (jint(1))));
	LINE_NUMBER(150);
	jint temp1 = (jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_anchor;
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_fraEff;
	if (temp1 < ((jint)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_nFrame)) goto label_24;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((nro_Info_RadaScr *) NULL_CHECK((frame[0].o)))->F_eff;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(152);
	INST_IINC(5, -1);
	goto label_18;
	}
label_24:;
	{
	LINE_NUMBER(154);
	clinit_nro_RadarScr(ctx);
	sp[0].o = (jobject)SF_nro_RadarScr_fraEff;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, ((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_anchor), ((frame[2].i) + ((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[3].i) + ((jint)((nro_Position *) NULL_CHECK((frame[6].o)))->F_y)), (jint(0)), (jint(3)), (frame[1].o));
	}
label_18:;
	{
	LINE_NUMBER(141);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Info_RadaScr[] {
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
	(void *) M_nro_Info_RadaScr_SetAmount_byte_byte,
	(void *) M_nro_Info_RadaScr_SetLevel_byte,
	(void *) M_nro_Info_RadaScr_SetUse_byte,
	(void *) M_nro_Info_RadaScr_addItemDetail,
	(void *) M_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int,
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
	{ "SetAmount", "(BB)V" },
	{ "SetLevel", "(B)V" },
	{ "SetUse", "(B)V" },
	{ "addItemDetail", "()V" },
	{ "paintInfo", "(Llib/mGraphics;II)V" },
};

static FieldMetadata fields[] {
	{ "rank", &class_byte, offsetof(nro_Info_RadaScr, F_rank), "B", 1 },
	{ "amount", &class_byte, offsetof(nro_Info_RadaScr, F_amount), "B", 1 },
	{ "max_amount", &class_byte, offsetof(nro_Info_RadaScr, F_max_amount), "B", 1 },
	{ "typeMonster", &class_byte, offsetof(nro_Info_RadaScr, F_typeMonster), "B", 1 },
	{ "id", &class_int, offsetof(nro_Info_RadaScr, F_id), "I", 1 },
	{ "no", &class_int, offsetof(nro_Info_RadaScr, F_no), "I", 1 },
	{ "idIcon", &class_int, offsetof(nro_Info_RadaScr, F_idIcon), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_Info_RadaScr, F_name), "Ljava/lang/String;", 1 },
	{ "info", &class_java_lang_String, offsetof(nro_Info_RadaScr, F_info), "Ljava/lang/String;", 1 },
	{ "level", &class_byte, offsetof(nro_Info_RadaScr, F_level), "B", 1 },
	{ "isUse", &class_byte, offsetof(nro_Info_RadaScr, F_isUse), "B", 1 },
	{ "charInfo", &class_nro_Char, offsetof(nro_Info_RadaScr, F_charInfo), "Lnro/Char;", 1 },
	{ "mobInfo", &class_nro_Mob, offsetof(nro_Info_RadaScr, F_mobInfo), "Lnro/Mob;", 1 },
	{ "itemOption", getArrayClass(&class_nro_ItemOption, 1), offsetof(nro_Info_RadaScr, F_itemOption), "[Lnro/ItemOption;", 1 },
	{ "f", getArrayClass(&class_int, 1), offsetof(nro_Info_RadaScr, F_f), "[I", 0 },
	{ "count", &class_int, offsetof(nro_Info_RadaScr, F_count), "I", 0 },
	{ "timeRequest", &class_long, offsetof(nro_Info_RadaScr, F_timeRequest), "J", 0 },
	{ "cp", &class_nro_ChatPopup, offsetof(nro_Info_RadaScr, F_cp), "Lnro/ChatPopup;", 1 },
	{ "eff", &class_nro_MyVector, offsetof(nro_Info_RadaScr, F_eff), "Lnro/MyVector;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Info_RadaScr, 0, "()V", 1 },
	{ "SetAmount", (intptr_t) M_nro_Info_RadaScr_SetAmount_byte_byte, VTABLE_nro_Info_RadaScr_SetAmount_byte_byte, "(BB)V", 17 },
	{ "SetLevel", (intptr_t) M_nro_Info_RadaScr_SetLevel_byte, VTABLE_nro_Info_RadaScr_SetLevel_byte, "(B)V", 17 },
	{ "SetUse", (intptr_t) M_nro_Info_RadaScr_SetUse_byte, VTABLE_nro_Info_RadaScr_SetUse_byte, "(B)V", 17 },
	{ "GetInfo", (intptr_t) SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr, 0, "(Lnro/MyVector;I)Lnro/Info_RadaScr;", 9 },
	{ "addItemDetail", (intptr_t) M_nro_Info_RadaScr_addItemDetail, VTABLE_nro_Info_RadaScr_addItemDetail, "()V", 17 },
	{ "paintInfo", (intptr_t) M_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int, VTABLE_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 17 },
};

Class class_nro_Info_RadaScr{
		.nativeName = (intptr_t) "nro/Info_RadaScr",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Info_RadaScr),
		.classVtable = (intptr_t) vtable_nro_Info_RadaScr,
		.staticInitializer = (intptr_t) clinit_nro_Info_RadaScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Info_RadaScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Info_RadaScr = registerClass(&class_nro_Info_RadaScr);

}

