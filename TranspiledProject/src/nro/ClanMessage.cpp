#include "nro/ClanMessage.h"
#include "lib/mFont.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "nro/ClanMessage.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/NinjaUtil.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_ClanMessage_vMessage;

void mark_nro_ClanMessage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ClanMessage_vMessage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClanMessage_vMessage)->clazz)->markFunction)((jobject) SF_nro_ClanMessage_vMessage, mark, depth + 1);
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
	auto self = (nro_ClanMessage *) object;
	if (self->F_playerName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playerName)->clazz)->markFunction)((jobject) self->F_playerName, mark, depth + 1);
	if (self->F_chat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chat)->clazz)->markFunction)((jobject) self->F_chat, mark, depth + 1);
	if (self->F_option)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_option)->clazz)->markFunction)((jobject) self->F_option, mark, depth + 1);
}

void init_nro_ClanMessage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanMessage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanMessage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ClanMessage_addMessage_nro_ClanMessage_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanMessage:addMessage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanMessage(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(23);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(25);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = checkCast(ctx, &class_nro_ClanMessage, sp[0].o);
	frame[4].o = sp[0].o;
	if (((jint)((nro_ClanMessage *) NULL_CHECK(sp[0].o))->F_id) != ((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_id)) goto label_5;
	}
	{
	LINE_NUMBER(26);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(27);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(28);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	((func_nro_MyVector_insertElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_insertElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[0].o), (frame[3].i));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(32);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	((func_nro_MyVector_insertElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_insertElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[0].o), (jint(0)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(36);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[4].o)))->F_maxCap) == 0) goto label_12;
	}
	{
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[4].o)))->F_recieve) != ((jint)((nro_ClanMessage *) NULL_CHECK((frame[4].o)))->F_maxCap)) goto label_12;
	}
	{
	LINE_NUMBER(37);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	}
label_12:;
	{
	LINE_NUMBER(23);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(41);
	if ((frame[1].i) != (jint(-1))) goto label_14;
	}
	{
	LINE_NUMBER(42);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(44);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	((func_nro_MyVector_insertElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_insertElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[0].o), (jint(0)));
	}
label_16:;
	{
	LINE_NUMBER(47);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (20)) goto label_17;
	}
	{
	LINE_NUMBER(48);
	clinit_nro_ClanMessage(ctx);
	sp[0].o = (jobject)SF_nro_ClanMessage_vMessage;
	clinit_nro_ClanMessage(ctx);
	sp[1].o = (jobject)SF_nro_ClanMessage_vMessage;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	}
label_17:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ClanMessage_paint_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanMessage:paint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(54);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	frame[4].o = sp[0].o;
	LINE_NUMBER(55);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_role) != 0) goto label_2;
	}
	{
	LINE_NUMBER(56);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	frame[4].o = sp[0].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(57);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_role) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(58);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	frame[4].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(59);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_role) != (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(60);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(63);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_8;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_playerName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (jint(1))), (jint(0)));
	LINE_NUMBER(65);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_color) != 0) goto label_11;
	}
	{
	LINE_NUMBER(66);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_chat;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(0)))));
	sp[3].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_chat;
	sp += 3;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"..."_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_14:;
	{
	sp -= 4;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (11)), (jint(0)));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(68);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_chat;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(0)))));
	sp[3].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_chat;
	sp += 3;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_16;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"..."_j));
	goto label_17;
label_16:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_17:;
	{
	sp -= 4;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (11)), (jint(0)));
	}
label_15:;
	{
	LINE_NUMBER(71);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)SM_nro_NinjaUtil_getTimeAgo_int_R_java_lang_String(ctx, ((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_timeAgo));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_ago;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jint temp0 = frame[2].i;
	clinit_main_GameCanvas(ctx);
	sp[3].o = (jobject)SF_main_GameCanvas_panel;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((temp0 + ((jint)((nro_Panel *) NULL_CHECK(sp[3].o))->F_wScroll)) - (jint(3))), ((frame[3].i) + (jint(1))), (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(74);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_18;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_playerName;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_recieve));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, ((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_maxCap));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (jint(1))), (jint(0)));
	LINE_NUMBER(76);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_request_pea;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[3].o = (jobject)SM_nro_NinjaUtil_getTimeAgo_int_R_java_lang_String(ctx, ((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_timeAgo));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_ago;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (11)), (jint(0)));
	}
label_18:;
	{
	LINE_NUMBER(79);
	if (((jint)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_type) != (jint(2))) goto label_21;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_playerName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (jint(1))), (jint(0)));
	LINE_NUMBER(81);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	sp[1].o = frame[1].o;
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_request_join_clan;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((frame[2].i) + (jint(3))), ((frame[3].i) + (11)), (jint(0)));
	}
label_21:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ClanMessage_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanMessage:perform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ClanMessage_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanMessage:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	if ((longCompare(((jlong)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_time), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ClanMessage *) NULL_CHECK(sp[0].o))->F_timeAgo = (jint(((temp0 / (jlong(1000ll))) - ((jlong)((nro_ClanMessage *) NULL_CHECK((frame[0].o)))->F_time))));
	}
label_1:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_ClanMessage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanMessage:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanMessage(ctx);
	{
	LINE_NUMBER(20);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"v Message"_j))));
	clinit_nro_ClanMessage(ctx);
	SF_nro_ClanMessage_vMessage = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ClanMessage[] {
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
	(void *) M_nro_ClanMessage_perform_int_java_lang_Object,
	(void *) M_nro_ClanMessage_paint_lib_mGraphics_int_int,
	(void *) M_nro_ClanMessage_update,
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
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "paint", "(Llib/mGraphics;II)V" },
	{ "update", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(nro_ClanMessage, F_id), "I", 1 },
	{ "type", &class_int, offsetof(nro_ClanMessage, F_type), "I", 1 },
	{ "playerId", &class_int, offsetof(nro_ClanMessage, F_playerId), "I", 1 },
	{ "playerName", &class_java_lang_String, offsetof(nro_ClanMessage, F_playerName), "Ljava/lang/String;", 1 },
	{ "time", &class_long, offsetof(nro_ClanMessage, F_time), "J", 1 },
	{ "chat", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ClanMessage, F_chat), "[Ljava/lang/String;", 1 },
	{ "color", &class_byte, offsetof(nro_ClanMessage, F_color), "B", 1 },
	{ "role", &class_byte, offsetof(nro_ClanMessage, F_role), "B", 1 },
	{ "timeAgo", &class_int, offsetof(nro_ClanMessage, F_timeAgo), "I", 2 },
	{ "recieve", &class_int, offsetof(nro_ClanMessage, F_recieve), "I", 1 },
	{ "maxCap", &class_int, offsetof(nro_ClanMessage, F_maxCap), "I", 1 },
	{ "option", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ClanMessage, F_option), "[Ljava/lang/String;", 1 },
	{ "vMessage", &class_nro_MyVector, (intptr_t) &SF_nro_ClanMessage_vMessage, "Lnro/MyVector;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ClanMessage, 0, "()V", 1 },
	{ "addMessage", (intptr_t) SM_nro_ClanMessage_addMessage_nro_ClanMessage_int_boolean, 0, "(Lnro/ClanMessage;IZ)V", 9 },
	{ "paint", (intptr_t) M_nro_ClanMessage_paint_lib_mGraphics_int_int, VTABLE_nro_ClanMessage_paint_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 17 },
	{ "perform", (intptr_t) M_nro_ClanMessage_perform_int_java_lang_Object, VTABLE_nro_ClanMessage_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "update", (intptr_t) M_nro_ClanMessage_update, VTABLE_nro_ClanMessage_update, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_ClanMessage, 0, "()V", 8 },
};

Class class_nro_ClanMessage{
		.nativeName = (intptr_t) "nro/ClanMessage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ClanMessage),
		.classVtable = (intptr_t) vtable_nro_ClanMessage,
		.staticInitializer = (intptr_t) clinit_nro_ClanMessage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ClanMessage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ClanMessage = registerClass(&class_nro_ClanMessage);

}

