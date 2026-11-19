#include "nro/ChatPopup.h"
#include "nro/GameScr.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/Menu.h"
#include "nro/StaticObj.h"
#include "nro/Paint.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/InfoMe.h"
#include "nro/ScrollResult.h"
#include "lib/sound/SoundMn.h"
#include "nro/Effect2.h"
#include "nro/Info.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "nro/InfoItem.h"
#include "java/lang/Exception.h"
#include "lib/mGraphics.h"
#include "nro/Scroll.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Npc.h"
#include "main/GameMidlet.h"
#include "nro/Char.h"

extern "C" {

jlong SF_nro_ChatPopup_curr;
jlong SF_nro_ChatPopup_last;
jobject SF_nro_ChatPopup_currChatPopup;
jobject SF_nro_ChatPopup_serverChatPopUp;
jobject SF_nro_ChatPopup_nextMultiChatPopUp;
jobject SF_nro_ChatPopup_nextChar;
jobject SF_nro_ChatPopup_scr;
jbool SF_nro_ChatPopup_isHavePetNpc;
jint SF_nro_ChatPopup_performDelay;
jint SF_nro_ChatPopup_numSlot;
jint SF_nro_ChatPopup_cmyText;

void mark_nro_ChatPopup(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ChatPopup_currChatPopup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ChatPopup_currChatPopup)->clazz)->markFunction)((jobject) SF_nro_ChatPopup_currChatPopup, mark, depth + 1);
		if (SF_nro_ChatPopup_serverChatPopUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ChatPopup_serverChatPopUp)->clazz)->markFunction)((jobject) SF_nro_ChatPopup_serverChatPopUp, mark, depth + 1);
		if (SF_nro_ChatPopup_nextMultiChatPopUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ChatPopup_nextMultiChatPopUp)->clazz)->markFunction)((jobject) SF_nro_ChatPopup_nextMultiChatPopUp, mark, depth + 1);
		if (SF_nro_ChatPopup_nextChar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ChatPopup_nextChar)->clazz)->markFunction)((jobject) SF_nro_ChatPopup_nextChar, mark, depth + 1);
		if (SF_nro_ChatPopup_scr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ChatPopup_scr)->clazz)->markFunction)((jobject) SF_nro_ChatPopup_scr, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Effect2(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_ChatPopup *) object;
	if (self->F_says)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_says)->clazz)->markFunction)((jobject) self->F_says, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_lines)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lines)->clazz)->markFunction)((jobject) self->F_lines, mark, depth + 1);
	if (self->F_cmdNextLine)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdNextLine)->clazz)->markFunction)((jobject) self->F_cmdNextLine, mark, depth + 1);
	if (self->F_cmdMsg1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdMsg1)->clazz)->markFunction)((jobject) self->F_cmdMsg1, mark, depth + 1);
	if (self->F_cmdMsg2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdMsg2)->clazz)->markFunction)((jobject) self->F_cmdMsg2, mark, depth + 1);
	if (self->F_starCuongHoa)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_starCuongHoa)->clazz)->markFunction)((jobject) self->F_starCuongHoa, mark, depth + 1);
	if (self->F_imgStar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgStar)->clazz)->markFunction)((jobject) self->F_imgStar, mark, depth + 1);
}

void init_nro_ChatPopup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_nro_Effect2(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth = (100);
	LINE_NUMBER(33);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot = (jint(0));
	LINE_NUMBER(34);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot = (jint(0));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (20));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_starCuongHoa = (jref) sp[1].o;
	LINE_NUMBER(42);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_tren = (jint(0));
	LINE_NUMBER(43);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi = (jint(0));
	LINE_NUMBER(44);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nslot_duoi = (jint(0));
	LINE_NUMBER(47);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_isClip = (jint(0));
	LINE_NUMBER(49);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pxx = (jint(0));
	LINE_NUMBER(50);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ChatPopup_addNextPopUpMultiLine_java_lang_String_nro_Npc(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:addNextPopUpMultiLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(53);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_nextMultiChatPopUp = (frame[0].o);
	LINE_NUMBER(54);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_nextChar = (frame[1].o);
	LINE_NUMBER(55);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(56);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_nextMultiChatPopUp;
	jint temp0 = jint(100000);
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_nextChar;
	SM_nro_ChatPopup_addChatPopupMultiLine_java_lang_String_int_nro_Npc(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(57);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_nextMultiChatPopUp = (jobject(nullptr));
	LINE_NUMBER(58);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_nextChar = (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ChatPopup_addBigMessage_java_lang_String_int_nro_Npc(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:addBigMessage", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(65);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_charID) == (jint(5))) goto label_2;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isDone) == 0) goto label_2;
	}
	{
	LINE_NUMBER(66);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(69);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jint(100000)), (frame[2].o));
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_serverChatPopUp = sp[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_strY = (jint(5));
	LINE_NUMBER(71);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cx = ((temp0 - (((jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(72);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp1 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20);
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cy = (temp1 - ((jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_ch));
	LINE_NUMBER(73);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_currentLine = (jint(0));
	LINE_NUMBER(74);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_lines = (jref) (frame[3].o);
	LINE_NUMBER(75);
	clinit_nro_Scroll(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Scroll);
	init_nro_Scroll(ctx, sp[0].o);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_scr = sp[0].o;
	LINE_NUMBER(76);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_says;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(77);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	jint temp2 = frame[4].i;
	jint temp3 = 12;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp4 = (jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_cx;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp5 = (jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_cy;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp6 = (temp5 - ((jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_strY)) + (12);
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	jint temp7 = ((jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_sayWidth) + (jint(2));
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	((func_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int])(ctx, sp[0].o, temp2, temp3, temp4, temp6, temp7, (((jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_ch) - (25)), (jint(1)), (jint(1)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_openDialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_openDialog])(ctx, sp[0].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ChatPopup_addChatPopupMultiLine_java_lang_String_int_nro_Npc(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:addChatPopupMultiLine", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(82);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"chat= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(84);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jint(100000)), (frame[2].o));
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_currChatPopup = sp[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_currentLine = (jint(0));
	LINE_NUMBER(86);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_lines = (jref) (frame[3].o);
	LINE_NUMBER(87);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_CONTINUE;
	frame[4].o = sp[0].o;
	LINE_NUMBER(88);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(89);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_CLOSE;
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(92);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = frame[4].o;
	clinit_nro_ChatPopup(ctx);
	sp[3].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (8000), (jobject(nullptr)));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmdNextLine = (jref) sp[1].o;
	LINE_NUMBER(93);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmdNextLine;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (35));
	LINE_NUMBER(94);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmdNextLine;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (35));
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_openDialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_openDialog])(ctx, sp[0].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:addChatPopup", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(99);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"ADD POP"_j))));
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"!null"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
label_3:;
	{
	sp -= 1;
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(101);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_performDelay = (10);
	LINE_NUMBER(103);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ChatPopup);
	init_nro_ChatPopup(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (30);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Menu *) NULL_CHECK(temp1))->F_showMenu) == 0) goto label_7;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	jint temp0 = (jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuX;
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_sayWidth = (sp[1].i - sp[2].i);
	LINE_NUMBER(104);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_sayWidth) <= (320)) goto label_10;
	}
	{
	LINE_NUMBER(105);
	((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_sayWidth = (320);
	}
label_10:;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= (10)) goto label_12;
	}
	{
	LINE_NUMBER(109);
	((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_sayWidth = (64);
	}
label_12:;
	{
	LINE_NUMBER(112);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) != (128)) goto label_14;
	}
	{
	LINE_NUMBER(113);
	((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_sayWidth = (128);
	}
label_14:;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[3].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7_red;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[0].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_sayWidth) - (10)));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_says = (jref) sp[1].o;
	LINE_NUMBER(117);
	((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_delay = (frame[1].i);
	LINE_NUMBER(118);
	((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(119);
	clinit_nro_Char(ctx);
	SF_nro_Char_chatPopup = (frame[3].o);
	LINE_NUMBER(120);
	sp[0].o = frame[3].o;
	jint temp0 = (15) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_sayRun);
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_says;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_ch = ((temp0 + ((((jarray) nullCheck(ctx, sp[1].o))->length) * (12))) + (10));
	LINE_NUMBER(121);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_ch) <= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (80))) goto label_21;
	}
	{
	LINE_NUMBER(122);
	((nro_ChatPopup *) NULL_CHECK((frame[3].o)))->F_ch = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (80));
	}
label_21:;
	{
	LINE_NUMBER(125);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(126);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_isHavePetNpc = (jint(0));
	LINE_NUMBER(127);
	if ((frame[2].o) == nullptr) goto label_25;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_charID) != (jint(5))) goto label_25;
	}
	{
	LINE_NUMBER(128);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_isHavePetNpc = (jint(1));
	LINE_NUMBER(129);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))), (jint(1)));
	}
label_25:;
	{
	LINE_NUMBER(132);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_last = temp0;
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_curr = temp0;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_ChatPopup_addChatPopupWithIcon_java_lang_String_int_nro_Npc_int_R_nro_ChatPopup(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:addChatPopupWithIcon", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(137);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"ADD POP"_j))));
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"!null"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
label_3:;
	{
	sp -= 1;
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(139);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_performDelay = (10);
	LINE_NUMBER(141);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ChatPopup);
	init_nro_ChatPopup(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (30);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Menu *) NULL_CHECK(temp1))->F_showMenu) == 0) goto label_7;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	jint temp0 = (jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuX;
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_sayWidth = (sp[1].i - sp[2].i);
	LINE_NUMBER(142);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_sayWidth) <= (320)) goto label_10;
	}
	{
	LINE_NUMBER(143);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_sayWidth = (320);
	}
label_10:;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= (10)) goto label_12;
	}
	{
	LINE_NUMBER(147);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_sayWidth = (64);
	}
label_12:;
	{
	LINE_NUMBER(150);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) != (128)) goto label_14;
	}
	{
	LINE_NUMBER(151);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_sayWidth = (128);
	}
label_14:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[4].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7_red;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[0].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_sayWidth) - (10)));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_says = (jref) sp[1].o;
	LINE_NUMBER(155);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_delay = (jint(100000));
	LINE_NUMBER(156);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_c = (jref) (frame[2].o);
	LINE_NUMBER(157);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_iconID = (5820);
	LINE_NUMBER(158);
	clinit_nro_Char(ctx);
	SF_nro_Char_chatPopup = (frame[4].o);
	LINE_NUMBER(159);
	sp[0].o = frame[4].o;
	jint temp0 = (15) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_sayRun);
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_says;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_ch = ((temp0 + ((((jarray) nullCheck(ctx, sp[1].o))->length) * (12))) + (10));
	LINE_NUMBER(160);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_ch) <= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (80))) goto label_22;
	}
	{
	LINE_NUMBER(161);
	((nro_ChatPopup *) NULL_CHECK((frame[4].o)))->F_ch = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (80));
	}
label_22:;
	{
	LINE_NUMBER(164);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(165);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_isHavePetNpc = (jint(0));
	LINE_NUMBER(166);
	if ((frame[2].o) == nullptr) goto label_26;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_charID) != (jint(5))) goto label_26;
	}
	{
	LINE_NUMBER(167);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_isHavePetNpc = (jint(1));
	LINE_NUMBER(168);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))), (jint(1)));
	}
label_26:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[4].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_ch = (((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_ch) + (15));
	LINE_NUMBER(172);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_last = temp0;
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_curr = temp0;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_nro_ChatPopup_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(178);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(0));
	LINE_NUMBER(179);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	((func_nro_Scroll_updatecm) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Scroll_updatecm])(ctx, sp[0].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(181);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(184);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) == 0) goto label_5;
	}
	{
	LINE_NUMBER(185);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY = (jint(0));
	LINE_NUMBER(186);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_menu;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Menu *) NULL_CHECK(sp[1].o))->F_menuY) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_ch));
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(189);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY = (jint(0));
	LINE_NUMBER(190);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdNextLine;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(191);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(192);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (jint(5))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_ch));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(194);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY = (jint(5));
	LINE_NUMBER(195);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))) - (jint(1)));
	LINE_NUMBER(196);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20)) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_ch));
	}
label_9:;
	{
	LINE_NUMBER(200);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_delay) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_delay = (((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_delay) - (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(204);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_performDelay) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(205);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_performDelay = ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_performDelay) - (jint(1)));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(207);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(209);
	frame[1].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_20;
	}
	{
	LINE_NUMBER(210);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_InfoItem *) NULL_CHECK((checkCast(ctx, &class_nro_InfoItem, sp[0].o))))->F_speed) == (70)) goto label_24;
	}
	{
	LINE_NUMBER(211);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((nro_InfoItem *) NULL_CHECK((checkCast(ctx, &class_nro_InfoItem, sp[0].o))))->F_speed = (10);
	}
label_24:;
	{
	LINE_NUMBER(209);
	INST_IINC(1, 1);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(216);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun) <= (jint(1))) goto label_26;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_sayRun = (((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_sayRun) - (jint(1)));
	}
label_26:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_28;
	}
	clinit_nro_Char(ctx);
	(sp++)->o = SF_nro_Char_chatPopup;
	if ((--sp)->o == nullptr) goto label_28;
	{
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_chatPopup;
	if (sp[0].o != (frame[0].o)) goto label_29;
	}
label_28:;
	{
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_30;
	}
	clinit_nro_Char(ctx);
	(sp++)->o = SF_nro_Char_chatPopup;
	if ((--sp)->o == nullptr) goto label_29;
label_30:;
	{
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_delay) > 0) goto label_31;
	}
label_29:;
	{
	LINE_NUMBER(221);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2Outside;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(222);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp1 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_31:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ChatPopup_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:paint", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_activeRongThan) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isUseFreez) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(229);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(230);
	frame[2].i = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(231);
	frame[3].i = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(232);
	frame[4].i = (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) + (jint(2)));
	LINE_NUMBER(233);
	frame[5].i = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_ch);
	LINE_NUMBER(234);
	if ((frame[2].i) <= 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i > 0) goto label_9;
label_8:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_2;
	}
label_9:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(237);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(2))) goto label_12;
	}
	{
	LINE_NUMBER(238);
	frame[6].i = (jint(0));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(240);
	frame[6].i = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_c;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_avatar), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + (14)), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + (frame[6].i)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_BOTTOM_HCENTER));
	}
label_10:;
	{
	LINE_NUMBER(246);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_iconID) == 0) goto label_16;
	}
	{
	LINE_NUMBER(247);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(248);
	frame[6].i = (jint(0));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(250);
	frame[6].i = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(253);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_iconID), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + ((frame[4].i) / (jint(2)))), (((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_ch)) - (15)) + (frame[6].i)), (jint(0)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	}
label_16:;
	{
	LINE_NUMBER(256);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (jint(16777215)), (jint(0)));
	LINE_NUMBER(257);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(258);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), ((frame[5].i) - (16)));
	LINE_NUMBER(259);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_scr;
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp0, (-((jint)((nro_Scroll *) NULL_CHECK(sp[1].o))->F_cmy)));
	}
label_23:;
	{
	LINE_NUMBER(262);
	frame[6].i = (jint(0));
	LINE_NUMBER(263);
	frame[7].i = (jint(0));
	LINE_NUMBER(264);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_28;
	}
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(266);
	jint temp1 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(267);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (frame[2].i), ((frame[3].i) + (jint(1))), (frame[4].i), ((frame[5].i) - (17)));
	LINE_NUMBER(268);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_cmyText)));
	}
label_28:;
	{
	LINE_NUMBER(271);
	frame[8].i = (jint(-1));
	LINE_NUMBER(275);
	frame[9].i = (jint(0));
	}
label_34:;
	{
	jint temp0 = frame[9].i;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_35;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (((jobject) createStringLiteral(ctx, u8"--"_j))));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(277);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(278);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), ((frame[2].i) + (10)), (((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[9].i) * (12))) + (6)), ((frame[4].i) - (20)), (jint(1)));
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(280);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	frame[11].o = sp[0].o;
	LINE_NUMBER(281);
	frame[10].i = (jint(2));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (((jobject) createStringLiteral(ctx, u8"|"_j))));
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (((jobject) createStringLiteral(ctx, u8"|"_j))), (jint(0)));
	frame[14].o = sp[0].o;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(3))) goto label_47;
	}
	{
	LINE_NUMBER(287);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (jint(2))));
	}
label_47:;
	{
	LINE_NUMBER(290);
	if ((((jarray) nullCheck(ctx, (frame[14].o)))->length) != (jint(4))) goto label_49;
	}
	{
	LINE_NUMBER(291);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (jint(3))));
	LINE_NUMBER(292);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (jint(2)))));
	frame[10].i = temp0;
	}
label_49:;
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (jint(1)))));
	frame[13].i = temp0;
	frame[8].i = temp0;
	LINE_NUMBER(296);
	goto label_54;
	}
label_44:;
	{
	LINE_NUMBER(297);
	frame[13].i = (frame[8].i);
	}
label_54:;
	{
	LINE_NUMBER(300);
	switch((frame[13].i)) {
		case -1: goto label_55;
		case 0: goto label_56;
		case 1: goto label_57;
		case 2: goto label_58;
		case 3: goto label_59;
		case 4: goto label_60;
		case 5: goto label_61;
		case 6: goto label_62;
		case 7: goto label_63;
		case 8: goto label_64;
		case 9: goto label_65;
		default: goto label_62;
	}
	}
label_55:;
	{
	LINE_NUMBER(302);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	frame[11].o = sp[0].o;
	LINE_NUMBER(303);
	goto label_67;
	}
label_56:;
	{
	LINE_NUMBER(305);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	frame[11].o = sp[0].o;
	LINE_NUMBER(306);
	goto label_67;
	}
label_57:;
	{
	LINE_NUMBER(308);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	frame[11].o = sp[0].o;
	LINE_NUMBER(309);
	goto label_67;
	}
label_58:;
	{
	LINE_NUMBER(311);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_blue;
	frame[11].o = sp[0].o;
	LINE_NUMBER(312);
	goto label_67;
	}
label_59:;
	{
	LINE_NUMBER(314);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	frame[11].o = sp[0].o;
	LINE_NUMBER(315);
	goto label_67;
	}
label_60:;
	{
	LINE_NUMBER(317);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green;
	frame[11].o = sp[0].o;
	LINE_NUMBER(318);
	goto label_67;
	}
label_61:;
	{
	LINE_NUMBER(320);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	frame[11].o = sp[0].o;
	}
label_62:;
	LINE_NUMBER(323);
	goto label_67;
label_63:;
	{
	LINE_NUMBER(325);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	frame[11].o = sp[0].o;
	LINE_NUMBER(326);
	goto label_67;
	}
label_64:;
	{
	LINE_NUMBER(328);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	frame[11].o = sp[0].o;
	LINE_NUMBER(329);
	goto label_67;
	}
label_65:;
	{
	LINE_NUMBER(331);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	frame[11].o = sp[0].o;
	}
label_67:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (((jobject) createStringLiteral(ctx, u8"<"_j))));
	if (temp0 == 0) goto label_75;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i))), (((jobject) createStringLiteral(ctx, u8"<"_j))), (jint(0)));
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))), (((jobject) createStringLiteral(ctx, u8">"_j))), (jint(1)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(336);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_dx) != 0) goto label_78;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (jint(1)))));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_dx = temp0;
	goto label_80;
	}
label_78:;
	{
	LINE_NUMBER(338);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_curr = temp0;
	if ((longCompare((temp0 - (clinit_nro_ChatPopup(ctx), (jlong)SF_nro_ChatPopup_last)), (jlong(1000ll)))) < 0) goto label_80;
	}
	{
	LINE_NUMBER(339);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_last = (clinit_nro_ChatPopup(ctx), (jlong)SF_nro_ChatPopup_curr);
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_dx = (((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_dx) - (jint(1)));
	}
label_80:;
	{
	LINE_NUMBER(343);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_dx));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (jint(2)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(344);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[11].o), (frame[1].o), (frame[12].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))), ((((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[9].i) * (12))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY)) + (12)), (frame[10].i));
	LINE_NUMBER(345);
	goto label_40;
	}
label_75:;
	{
	LINE_NUMBER(346);
	if ((frame[10].i) != (jint(2))) goto label_85;
	}
	{
	LINE_NUMBER(347);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[11].o), (frame[1].o), (frame[12].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))), ((((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[9].i) * (12))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY)) + (12)), (frame[10].i));
	}
label_85:;
	{
	LINE_NUMBER(350);
	if ((frame[10].i) != (jint(1))) goto label_40;
	}
	{
	LINE_NUMBER(351);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[11].o), (frame[1].o), (frame[12].o), ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth)) - (jint(5))), ((((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[9].i) * (12))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY)) + (12)), (frame[10].i));
	}
label_40:;
	{
	LINE_NUMBER(275);
	INST_IINC(9, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(357);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_88;
	}
	{
	LINE_NUMBER(358);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(359);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (frame[6].i), (frame[7].i));
	}
label_88:;
	{
	LINE_NUMBER(362);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot) <= (jint(4))) goto label_91;
	}
	{
	LINE_NUMBER(363);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi = ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot) + (jint(1))) / (jint(2)));
	LINE_NUMBER(364);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_tren = (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi));
	LINE_NUMBER(365);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot));
	frame[11].o = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot));
	frame[12].o = sp[0].o;
	LINE_NUMBER(368);
	frame[10].i = (jint(0));
	}
label_97:;
	{
	if ((frame[10].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi)) goto label_98;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	clinit_nro_Panel(ctx);
	sp[2].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (17)), (jint(3)));
	LINE_NUMBER(370);
	sp[0].o = frame[11].o;
	jint temp2 = frame[10].i;
	jint temp3 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp4 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + temp4);
	LINE_NUMBER(371);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[10].i)) = (((frame[3].i) + (frame[5].i)) - (17));
	LINE_NUMBER(368);
	INST_IINC(10, 1);
	goto label_97;
	}
label_98:;
	{
	LINE_NUMBER(374);
	frame[10].i = (jint(0));
	}
label_103:;
	{
	if ((frame[10].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_tren)) goto label_104;
	}
	{
	LINE_NUMBER(375);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_tren) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	clinit_nro_Panel(ctx);
	sp[2].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (8)), (jint(3)));
	LINE_NUMBER(376);
	sp[0].o = frame[11].o;
	jint temp2 = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi) + (frame[10].i);
	jint temp3 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_tren) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp4 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (temp3 + temp4);
	LINE_NUMBER(377);
	ARRAY_ACCESS(jint, (frame[12].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi) + (frame[10].i))) = (((frame[3].i) + (frame[5].i)) - (8));
	LINE_NUMBER(374);
	INST_IINC(10, 1);
	goto label_103;
	}
label_104:;
	{
	LINE_NUMBER(380);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxStarSlot"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(381);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot) < (7)) goto label_110;
	}
	{
	LINE_NUMBER(382);
	frame[13].i = (7);
	}
label_112:;
	{
	if ((frame[13].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot)) goto label_110;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starCuongHoa;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[13].i))) == 0) goto label_114;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgStar9;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, (frame[11].o), (frame[13].i))), ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[13].i))), (jint(3)));
	}
label_114:;
	{
	LINE_NUMBER(382);
	INST_IINC(13, 1);
	goto label_112;
	}
label_110:;
	{
	LINE_NUMBER(389);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot) <= 0) goto label_116;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgStar;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_imgStar = (jref) sp[1].o;
	LINE_NUMBER(391);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot) < ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi)) goto label_119;
	}
	{
	LINE_NUMBER(392);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nslot_duoi = (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi));
	LINE_NUMBER(394);
	frame[10].i = (jint(0));
	}
label_122:;
	{
	if ((frame[10].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi)) goto label_123;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_imgStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	sp[2].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_imgStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (17)), (jint(3)));
	LINE_NUMBER(394);
	INST_IINC(10, 1);
	goto label_122;
	}
label_123:;
	{
	LINE_NUMBER(398);
	frame[10].i = (jint(0));
	}
label_126:;
	{
	if ((frame[10].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nslot_duoi)) goto label_116;
	}
	{
	LINE_NUMBER(399);
	if (((frame[10].i) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi)) < (clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_numSlot)) goto label_128;
	}
	{
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgStar8;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_imgStar = (jref) sp[1].o;
	}
label_128:;
	{
	LINE_NUMBER(403);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_imgStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_tren) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	sp[2].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_imgStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (8)), (jint(3)));
	LINE_NUMBER(398);
	INST_IINC(10, 1);
	goto label_126;
	}
label_119:;
	{
	LINE_NUMBER(406);
	frame[10].i = (jint(0));
	}
label_131:;
	{
	if ((frame[10].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot)) goto label_116;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_imgStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_nMaxslot_duoi) * (20)) / (jint(2)))) + ((frame[10].i) * (20));
	sp[2].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_imgStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (17)), (jint(3)));
	LINE_NUMBER(406);
	INST_IINC(10, 1);
	goto label_131;
	}
label_116:;
	LINE_NUMBER(411);
	goto label_134;
label_91:;
	{
	LINE_NUMBER(412);
	frame[9].i = (jint(0));
	}
label_135:;
	{
	if ((frame[9].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot)) goto label_136;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot) * (20)) / (jint(2)))) + ((frame[9].i) * (20));
	clinit_nro_Panel(ctx);
	sp[2].o = (jobject)SF_nro_Panel_imgMaxStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (13)), (jint(3)));
	LINE_NUMBER(412);
	INST_IINC(9, 1);
	goto label_135;
	}
label_136:;
	{
	LINE_NUMBER(416);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot) <= 0) goto label_134;
	}
	{
	LINE_NUMBER(417);
	frame[9].i = (jint(0));
	}
label_140:;
	{
	if ((frame[9].i) >= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_maxStarSlot)) goto label_134;
	}
	{
	LINE_NUMBER(418);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgStar;
	jint temp0 = (((frame[2].i) + ((frame[4].i) / (jint(2)))) - ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_starSlot) * (20)) / (jint(2)))) + ((frame[9].i) * (20));
	clinit_nro_Panel(ctx);
	sp[2].o = (jobject)SF_nro_Panel_imgStar;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (((frame[3].i) + (frame[5].i)) - (13)), (jint(3)));
	LINE_NUMBER(417);
	INST_IINC(9, 1);
	goto label_140;
	}
label_134:;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(424);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(425);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdNextLine;
	if (sp[0].o == nullptr) goto label_145;
	}
	{
	LINE_NUMBER(426);
	sp[0].o = frame[1].o;
	sp[1].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	sp[2].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdNextLine;
	SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_nro_Command, (jobject(nullptr)))));
	}
label_145:;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	sp[2].o = checkCast(ctx, &class_nro_Command, (jobject(nullptr)));
	sp[3].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg2;
	SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_2:;
	LINE_NUMBER(435);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ChatPopup_a_lib_mGraphics_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:a", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(438);
	frame[3].i = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(439);
	frame[4].i = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(440);
	frame[5].i = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth);
	LINE_NUMBER(441);
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(442);
	jint temp1 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(443);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(frame[2].i)));
	LINE_NUMBER(444);
	if ((frame[3].i) <= 0) goto label_7;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_8;
label_7:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(445);
	frame[2].i = (jint(-1));
	LINE_NUMBER(447);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"--"_j))));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(449);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(16777215)));
	LINE_NUMBER(450);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), ((frame[3].i) + (10)), (((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[4].i) * (12))) - (6)), ((frame[5].i) - (20)), (jint(1)));
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(452);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	frame[8].o = sp[0].o;
	LINE_NUMBER(453);
	frame[9].i = (jint(2));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"|"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"|"_j))), (jint(0)));
	frame[12].o = sp[0].o;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(3))) goto label_24;
	}
	{
	LINE_NUMBER(459);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(2))));
	}
label_24:;
	{
	LINE_NUMBER(462);
	if ((((jarray) nullCheck(ctx, (frame[12].o)))->length) != (jint(4))) goto label_26;
	}
	{
	LINE_NUMBER(463);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(3))));
	LINE_NUMBER(464);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(2)))));
	frame[9].i = temp0;
	}
label_26:;
	{
	LINE_NUMBER(467);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(1)))));
	frame[11].i = temp0;
	frame[2].i = temp0;
	LINE_NUMBER(468);
	goto label_31;
	}
label_21:;
	{
	LINE_NUMBER(469);
	frame[11].i = (frame[2].i);
	}
label_31:;
	{
	LINE_NUMBER(472);
	switch((frame[11].i)) {
		case -1: goto label_32;
		case 0: goto label_33;
		case 1: goto label_34;
		case 2: goto label_35;
		case 3: goto label_36;
		case 4: goto label_37;
		case 5: goto label_38;
		case 6: goto label_39;
		case 7: goto label_40;
		case 8: goto label_41;
		case 9: goto label_41;
		default: goto label_39;
	}
	}
label_32:;
	{
	LINE_NUMBER(474);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_white;
	frame[8].o = sp[0].o;
	LINE_NUMBER(475);
	goto label_39;
	}
label_33:;
	{
	LINE_NUMBER(477);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	frame[8].o = sp[0].o;
	LINE_NUMBER(478);
	goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(480);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green;
	frame[8].o = sp[0].o;
	LINE_NUMBER(481);
	goto label_39;
	}
label_35:;
	{
	LINE_NUMBER(483);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	frame[8].o = sp[0].o;
	LINE_NUMBER(484);
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(486);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	frame[8].o = sp[0].o;
	LINE_NUMBER(487);
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(489);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green;
	frame[8].o = sp[0].o;
	LINE_NUMBER(490);
	goto label_39;
	}
label_38:;
	{
	LINE_NUMBER(492);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	frame[8].o = sp[0].o;
	LINE_NUMBER(493);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(495);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	frame[8].o = sp[0].o;
	LINE_NUMBER(496);
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(499);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellow;
	frame[8].o = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"<"_j))));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_says;
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"<"_j))), (jint(0)));
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))), (((jobject) createStringLiteral(ctx, u8">"_j))), (jint(1)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(505);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_dx) != 0) goto label_53;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(1)))));
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_dx = temp0;
	goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(507);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_curr = temp0;
	if ((longCompare((temp0 - (clinit_nro_ChatPopup(ctx), (jlong)SF_nro_ChatPopup_last)), (jlong(1000ll)))) < 0) goto label_55;
	}
	{
	LINE_NUMBER(508);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_last = (clinit_nro_ChatPopup(ctx), (jlong)SF_nro_ChatPopup_curr);
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_dx = (((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_dx) - (jint(1)));
	}
label_55:;
	{
	LINE_NUMBER(512);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_dx));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(2)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(513);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[8].o), (frame[1].o), (frame[10].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))), (((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[4].i) * (12))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY)), (frame[9].i));
	LINE_NUMBER(514);
	goto label_17;
	}
label_50:;
	{
	LINE_NUMBER(515);
	if ((frame[9].i) != (jint(2))) goto label_60;
	}
	{
	LINE_NUMBER(516);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[8].o), (frame[1].o), (frame[10].o), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) / (jint(2)))), (((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[4].i) * (12))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY)), (frame[9].i));
	}
label_60:;
	{
	LINE_NUMBER(519);
	if ((frame[9].i) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(520);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[8].o), (frame[1].o), (frame[10].o), ((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth)) - (jint(5))), (((((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayRun)) + ((frame[4].i) * (12))) - ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_strY)), (frame[9].i));
	}
label_17:;
	{
	LINE_NUMBER(447);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(526);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[1].o));
	LINE_NUMBER(527);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (frame[6].i), (frame[7].i));
	}
label_9:;
	LINE_NUMBER(529);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ChatPopup_doKeyText_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:doKeyText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(532);
	jint temp0 = (clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_cmyText) + ((frame[1].i) * (12));
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_cmyText = temp0;
	if (temp0 >= 0) goto label_1;
	}
	{
	LINE_NUMBER(533);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_cmyText = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(536);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_cmyText) <= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmx)) goto label_3;
	}
	{
	LINE_NUMBER(537);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_cmyText = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmx);
	}
label_3:;
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ChatPopup_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:updateKey", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(543);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_isClip) == 0) goto label_1;
	}
	{
	LINE_NUMBER(544);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(545);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	LINE_NUMBER(546);
	M_nro_ChatPopup_doKeyText_int(ctx, (frame[0].o), (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(549);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(550);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	LINE_NUMBER(551);
	M_nro_ChatPopup_doKeyText_int(ctx, (frame[0].o), (jint(-1)));
	}
label_6:;
	{
	LINE_NUMBER(554);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cx), (jint(0)), (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_sayWidth) + (jint(2))), ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_ch));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(555);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerSelect) == 0) goto label_10;
	}
	{
	LINE_NUMBER(556);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy) != 0) goto label_12;
	}
	{
	LINE_NUMBER(557);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	}
label_12:;
	{
	LINE_NUMBER(560);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pxx = (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py));
	LINE_NUMBER(561);
	if (((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pxx) == 0) goto label_15;
	}
	{
	LINE_NUMBER(562);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_cmyText = ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_cmyText) + ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pxx));
	LINE_NUMBER(563);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	}
label_15:;
	{
	LINE_NUMBER(566);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_cmyText) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(567);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_cmyText = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(570);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_cmyText) <= ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(571);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_cmyText = ((jint)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmx);
	goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(574);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy = (jint(0));
	LINE_NUMBER(575);
	((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_pyy = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(580);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(581);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_24;
	}
	{
	LINE_NUMBER(582);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	sp[0].o = (jobject)((func_nro_Scroll_updateKey_R_nro_ScrollResult) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Scroll_updateKey_R_nro_ScrollResult])(ctx, sp[0].o);
	}
label_24:;
	{
	LINE_NUMBER(586);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(587);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	frame[1].o = sp[0].o;
	LINE_NUMBER(588);
	sp[0].o = frame[1].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY) - (12));
	LINE_NUMBER(589);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY) >= 0) goto label_26;
	}
	{
	LINE_NUMBER(590);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY = (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(594);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_22;
	}
	{
	LINE_NUMBER(595);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	LINE_NUMBER(596);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	frame[1].o = sp[0].o;
	LINE_NUMBER(597);
	sp[0].o = frame[1].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY) + (12));
	LINE_NUMBER(598);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	jint temp0 = (jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY;
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (temp0 <= ((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmyLim)) goto label_22;
	}
	{
	LINE_NUMBER(599);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_scr;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY = ((jint)((nro_Scroll *) NULL_CHECK(sp[1].o))->F_cmyLim);
	}
label_22:;
	{
	LINE_NUMBER(604);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) != 0) goto label_36;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
label_36:;
	{
	LINE_NUMBER(605);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(606);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(607);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdNextLine;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdNextLine;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	goto label_37;
	}
label_40:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	goto label_37;
	}
label_42:;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg2;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg2;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_37:;
	{
	LINE_NUMBER(616);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_scr;
	if (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_pointerIsDowning) != 0) goto label_46;
	}
label_45:;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) != 0) goto label_48;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) != 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(618);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	LINE_NUMBER(619);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(620);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(621);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg1;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(623);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	}
label_47:;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg2;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) != 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg2;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_46;
	}
label_54:;
	{
	LINE_NUMBER(627);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	LINE_NUMBER(628);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(629);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK((frame[0].o)))->F_cmdMsg2;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(631);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	}
label_46:;
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ChatPopup_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:perform", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(638);
	if ((frame[1].i) != (1000)) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(640);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_platformRequest_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_platformRequest_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(643);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(641);
	frame[3].o = sp[0].o;
	LINE_NUMBER(642);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	}
label_6:;
	{
	LINE_NUMBER(645);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_notifyDestroyed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_notifyDestroyed])(ctx, sp[0].o);
	LINE_NUMBER(646);
	SM_main_GameCanvas_endDlg(ctx);
	}
label_5:;
	{
	LINE_NUMBER(649);
	if ((frame[1].i) != (1001)) goto label_9;
	}
	{
	LINE_NUMBER(650);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_scr = (jobject(nullptr));
	LINE_NUMBER(651);
	clinit_nro_Char(ctx);
	SF_nro_Char_chatPopup = (jobject(nullptr));
	LINE_NUMBER(652);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_serverChatPopUp = (jobject(nullptr));
	LINE_NUMBER(653);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(1));
	LINE_NUMBER(654);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(0));
	LINE_NUMBER(655);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_isHavePetNpc) == 0) goto label_9;
	}
	{
	LINE_NUMBER(656);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(657);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed = (10);
	}
label_9:;
	{
	LINE_NUMBER(661);
	if ((frame[1].i) != (8000)) goto label_18;
	}
	{
	LINE_NUMBER(662);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_performDelay) <= 0) goto label_20;
	}
	LINE_NUMBER(663);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(666);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	frame[3].i = ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_currentLine);
	LINE_NUMBER(667);
	INST_IINC(3, 1);
	LINE_NUMBER(668);
	jint temp0 = frame[3].i;
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_lines;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_24;
	}
	{
	LINE_NUMBER(669);
	clinit_nro_Char(ctx);
	SF_nro_Char_chatPopup = (jobject(nullptr));
	LINE_NUMBER(670);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_currChatPopup = (jobject(nullptr));
	LINE_NUMBER(671);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(1));
	LINE_NUMBER(672);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(0));
	LINE_NUMBER(673);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_nextMultiChatPopUp;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(674);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_nextMultiChatPopUp;
	jint temp0 = jint(100000);
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_nextChar;
	SM_nro_ChatPopup_addChatPopupMultiLine_java_lang_String_int_nro_Npc(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(675);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_nextMultiChatPopUp = (jobject(nullptr));
	LINE_NUMBER(676);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_nextChar = (jobject(nullptr));
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return;
	}
label_30:;
	{
	LINE_NUMBER(680);
	if ((clinit_nro_ChatPopup(ctx), (jint)SF_nro_ChatPopup_isHavePetNpc) == 0) goto label_35;
	}
	{
	LINE_NUMBER(681);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(683);
	frame[1].i = (jint(0));
	}
label_38:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_35;
	}
	{
	LINE_NUMBER(684);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_InfoItem *) NULL_CHECK((checkCast(ctx, &class_nro_InfoItem, sp[0].o))))->F_speed) != (jint(10000000))) goto label_40;
	}
	{
	LINE_NUMBER(685);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((nro_InfoItem *) NULL_CHECK((checkCast(ctx, &class_nro_InfoItem, sp[0].o))))->F_speed = (10);
	}
label_40:;
	{
	LINE_NUMBER(683);
	INST_IINC(1, 1);
	goto label_38;
	}
label_35:;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();
label_24:;
	{
	LINE_NUMBER(694);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[0].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_lines;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	jint temp0 = (jint)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_delay;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_c;
	sp[0].o = (jobject)SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup(ctx, sp[0].o, temp0, sp[1].o);
	frame[4].o = sp[0].o;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_currentLine = (frame[3].i);
	LINE_NUMBER(695);
	sp[0].o = frame[4].o;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_lines;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_lines = (jref) sp[1].o;
	LINE_NUMBER(696);
	sp[0].o = frame[4].o;
	clinit_nro_ChatPopup(ctx);
	sp[1].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	sp[1].o = (jobject)((nro_ChatPopup *) NULL_CHECK(sp[1].o))->F_cmdNextLine;
	((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cmdNextLine = (jref) sp[1].o;
	LINE_NUMBER(697);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_currChatPopup = (frame[4].o);
	}
label_18:;
	LINE_NUMBER(700);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_ChatPopup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Effect2(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ChatPopup:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ChatPopup(ctx);
	{
	LINE_NUMBER(41);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_numSlot = (7);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ChatPopup[] {
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
	(void *) M_nro_ChatPopup_update,
	(void *) M_nro_ChatPopup_paint_lib_mGraphics,
	(void *) M_nro_ChatPopup_perform_int_java_lang_Object,
	(void *) M_nro_ChatPopup_a_lib_mGraphics_int,
	(void *) M_nro_ChatPopup_doKeyText_int,
	(void *) M_nro_ChatPopup_updateKey,
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
	{ "update", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "perform", "(ILjava/lang/Object;)V" },
	{ "a", "(Llib/mGraphics;I)V" },
	{ "doKeyText", "(I)V" },
	{ "updateKey", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "sayWidth", &class_int, offsetof(nro_ChatPopup, F_sayWidth), "I", 1 },
	{ "delay", &class_int, offsetof(nro_ChatPopup, F_delay), "I", 1 },
	{ "sayRun", &class_int, offsetof(nro_ChatPopup, F_sayRun), "I", 1 },
	{ "says", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ChatPopup, F_says), "[Ljava/lang/String;", 1 },
	{ "cx", &class_int, offsetof(nro_ChatPopup, F_cx), "I", 1 },
	{ "cy", &class_int, offsetof(nro_ChatPopup, F_cy), "I", 1 },
	{ "ch", &class_int, offsetof(nro_ChatPopup, F_ch), "I", 1 },
	{ "cmx", &class_int, offsetof(nro_ChatPopup, F_cmx), "I", 1 },
	{ "c", &class_nro_Npc, offsetof(nro_ChatPopup, F_c), "Lnro/Npc;", 1 },
	{ "curr", &class_long, (intptr_t) &SF_nro_ChatPopup_curr, "J", 10 },
	{ "last", &class_long, (intptr_t) &SF_nro_ChatPopup_last, "J", 10 },
	{ "currentLine", &class_int, offsetof(nro_ChatPopup, F_currentLine), "I", 2 },
	{ "lines", getArrayClass(&class_java_lang_String, 1), offsetof(nro_ChatPopup, F_lines), "[Ljava/lang/String;", 2 },
	{ "cmdNextLine", &class_nro_Command, offsetof(nro_ChatPopup, F_cmdNextLine), "Lnro/Command;", 1 },
	{ "cmdMsg1", &class_nro_Command, offsetof(nro_ChatPopup, F_cmdMsg1), "Lnro/Command;", 1 },
	{ "cmdMsg2", &class_nro_Command, offsetof(nro_ChatPopup, F_cmdMsg2), "Lnro/Command;", 1 },
	{ "currChatPopup", &class_nro_ChatPopup, (intptr_t) &SF_nro_ChatPopup_currChatPopup, "Lnro/ChatPopup;", 9 },
	{ "serverChatPopUp", &class_nro_ChatPopup, (intptr_t) &SF_nro_ChatPopup_serverChatPopUp, "Lnro/ChatPopup;", 9 },
	{ "nextMultiChatPopUp", &class_java_lang_String, (intptr_t) &SF_nro_ChatPopup_nextMultiChatPopUp, "Ljava/lang/String;", 10 },
	{ "nextChar", &class_nro_Npc, (intptr_t) &SF_nro_ChatPopup_nextChar, "Lnro/Npc;", 10 },
	{ "maxStarSlot", &class_byte, offsetof(nro_ChatPopup, F_maxStarSlot), "B", 1 },
	{ "starSlot", &class_byte, offsetof(nro_ChatPopup, F_starSlot), "B", 1 },
	{ "scr", &class_nro_Scroll, (intptr_t) &SF_nro_ChatPopup_scr, "Lnro/Scroll;", 9 },
	{ "isHavePetNpc", &class_boolean, (intptr_t) &SF_nro_ChatPopup_isHavePetNpc, "Z", 10 },
	{ "iconID", &class_int, offsetof(nro_ChatPopup, F_iconID), "I", 2 },
	{ "performDelay", &class_int, (intptr_t) &SF_nro_ChatPopup_performDelay, "I", 10 },
	{ "dx", &class_int, offsetof(nro_ChatPopup, F_dx), "I", 2 },
	{ "starCuongHoa", getArrayClass(&class_boolean, 1), offsetof(nro_ChatPopup, F_starCuongHoa), "[Z", 1 },
	{ "numSlot", &class_int, (intptr_t) &SF_nro_ChatPopup_numSlot, "I", 9 },
	{ "nMaxslot_tren", &class_int, offsetof(nro_ChatPopup, F_nMaxslot_tren), "I", 2 },
	{ "nMaxslot_duoi", &class_int, offsetof(nro_ChatPopup, F_nMaxslot_duoi), "I", 2 },
	{ "nslot_duoi", &class_int, offsetof(nro_ChatPopup, F_nslot_duoi), "I", 2 },
	{ "imgStar", &class_javax_microedition_lcdui_Image, offsetof(nro_ChatPopup, F_imgStar), "Ljavax/microedition/lcdui/Image;", 2 },
	{ "strY", &class_int, offsetof(nro_ChatPopup, F_strY), "I", 1 },
	{ "isClip", &class_boolean, offsetof(nro_ChatPopup, F_isClip), "Z", 1 },
	{ "cmyText", &class_int, (intptr_t) &SF_nro_ChatPopup_cmyText, "I", 9 },
	{ "pxx", &class_int, offsetof(nro_ChatPopup, F_pxx), "I", 2 },
	{ "pyy", &class_int, offsetof(nro_ChatPopup, F_pyy), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ChatPopup, 0, "()V", 1 },
	{ "addNextPopUpMultiLine", (intptr_t) SM_nro_ChatPopup_addNextPopUpMultiLine_java_lang_String_nro_Npc, 0, "(Ljava/lang/String;Lnro/Npc;)V", 9 },
	{ "addBigMessage", (intptr_t) SM_nro_ChatPopup_addBigMessage_java_lang_String_int_nro_Npc, 0, "(Ljava/lang/String;ILnro/Npc;)V", 9 },
	{ "addChatPopupMultiLine", (intptr_t) SM_nro_ChatPopup_addChatPopupMultiLine_java_lang_String_int_nro_Npc, 0, "(Ljava/lang/String;ILnro/Npc;)V", 9 },
	{ "addChatPopup", (intptr_t) SM_nro_ChatPopup_addChatPopup_java_lang_String_int_nro_Npc_R_nro_ChatPopup, 0, "(Ljava/lang/String;ILnro/Npc;)Lnro/ChatPopup;", 9 },
	{ "addChatPopupWithIcon", (intptr_t) SM_nro_ChatPopup_addChatPopupWithIcon_java_lang_String_int_nro_Npc_int_R_nro_ChatPopup, 0, "(Ljava/lang/String;ILnro/Npc;I)Lnro/ChatPopup;", 9 },
	{ "update", (intptr_t) M_nro_ChatPopup_update, VTABLE_nro_ChatPopup_update, "()V", 17 },
	{ "paint", (intptr_t) M_nro_ChatPopup_paint_lib_mGraphics, VTABLE_nro_ChatPopup_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "a", (intptr_t) M_nro_ChatPopup_a_lib_mGraphics_int, VTABLE_nro_ChatPopup_a_lib_mGraphics_int, "(Llib/mGraphics;I)V", 17 },
	{ "doKeyText", (intptr_t) M_nro_ChatPopup_doKeyText_int, VTABLE_nro_ChatPopup_doKeyText_int, "(I)V", 2 },
	{ "updateKey", (intptr_t) M_nro_ChatPopup_updateKey, VTABLE_nro_ChatPopup_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_ChatPopup_perform_int_java_lang_Object, VTABLE_nro_ChatPopup_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_ChatPopup, 0, "()V", 8 },
};

Class class_nro_ChatPopup{
		.nativeName = (intptr_t) "nro/ChatPopup",
		.parentClass = (intptr_t) &class_nro_Effect2,
		.size = sizeof(nro_ChatPopup),
		.classVtable = (intptr_t) vtable_nro_ChatPopup,
		.staticInitializer = (intptr_t) clinit_nro_ChatPopup,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ChatPopup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 38,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ChatPopup = registerClass(&class_nro_ChatPopup);

}

