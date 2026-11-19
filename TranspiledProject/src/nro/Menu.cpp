#include "nro/Menu.h"
#include "lib/mFont.h"
#include "nro/GameScr.h"
#include "java/util/Vector.h"
#include "nro/InfoDlg.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "nro/ChatPopup.h"
#include "nro/Menu.h"
#include "nro/Paint.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Res.h"
#include "lib/sound/SoundMn.h"
#include "nro/Effect2.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "nro/Char.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Menu_menuTemY;
jint SF_nro_Menu_cmtoX;
jint SF_nro_Menu_cmx;
jint SF_nro_Menu_cmxLim;
jint SF_nro_Menu_xc;
jobject SF_nro_Menu_imgMenu1;
jobject SF_nro_Menu_imgMenu2;

void mark_nro_Menu(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Menu_menuTemY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Menu_menuTemY)->clazz)->markFunction)((jobject) SF_nro_Menu_menuTemY, mark, depth + 1);
		if (SF_nro_Menu_imgMenu1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Menu_imgMenu1)->clazz)->markFunction)((jobject) SF_nro_Menu_imgMenu1, mark, depth + 1);
		if (SF_nro_Menu_imgMenu2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Menu_imgMenu2)->clazz)->markFunction)((jobject) SF_nro_Menu_imgMenu2, mark, depth + 1);
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
	auto self = (nro_Menu *) object;
	if (self->F_menuItems)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_menuItems)->clazz)->markFunction)((jobject) self->F_menuItems, mark, depth + 1);
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_center)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_center)->clazz)->markFunction)((jobject) self->F_center, mark, depth + 1);
	if (self->F_pointerDownLastX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerDownLastX)->clazz)->markFunction)((jobject) self->F_pointerDownLastX, mark, depth + 1);
	if (self->F_isNotClose)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_isNotClose)->clazz)->markFunction)((jobject) self->F_isNotClose, mark, depth + 1);
}

void init_nro_Menu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Menu(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_SELECT;
	init_nro_Command_java_lang_String_int(ctx, sp[1].o, sp[2].o, (jint(0)));
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	init_nro_Command_java_lang_String_int_int_int(ctx, sp[1].o, sp[2].o, (jint(0)), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (71)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) + (jint(1))));
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(49);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_center = (jref) (jobject(nullptr));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_pointerDownLastX = (jref) sp[1].o;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Menu_startWithoutCloseButton_nro_MyVector_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:startWithoutCloseButton", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_disableClose = (jint(1));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Menu_startAt_nro_MyVector_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:startAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(59);
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(60);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX = (frame[2].i);
	LINE_NUMBER(62);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY = (frame[3].i);
	}
label_3:;
	{
	if ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY) + ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuH)) <= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuY = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuY) - (jint(2)));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Menu_startAt_nro_MyVector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:startAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_showMenu) != 0) goto label_1;
	}
	{
	LINE_NUMBER(69);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose = (jint(0));
	LINE_NUMBER(70);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_touch = (jint(0));
	LINE_NUMBER(71);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_close = (jint(0));
	LINE_NUMBER(72);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_tDelay = (jint(0));
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(74);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem = (jint(0));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (jint(0)));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_caption;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_saying;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(77);
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Command_performAction])(ctx, (frame[2].o));
	LINE_NUMBER(78);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_showMenu = (jint(0));
	LINE_NUMBER(79);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_openMenu) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_openMenu])(ctx, sp[0].o);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject) createArray(ctx, &class_boolean, temp0);
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_isNotClose = (jref) sp[1].o;
	LINE_NUMBER(88);
	frame[2].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isNotClose;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isNotClose;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)) = (jint(0));
	LINE_NUMBER(88);
	INST_IINC(2, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(92);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_disableClose = (jint(0));
	LINE_NUMBER(93);
	clinit_nro_ChatPopup(ctx);
	SF_nro_ChatPopup_currChatPopup = (jobject(nullptr));
	LINE_NUMBER(94);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(95);
	clinit_nro_Effect2(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2Outside;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(96);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(98);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems = (jref) (frame[1].o);
	LINE_NUMBER(99);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW = (60);
	LINE_NUMBER(100);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuH = (60);
	LINE_NUMBER(102);
	frame[2].i = (jint(0));
	}
label_30:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_31;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[3].o = sp[0].o;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isPlaySoundButton = (jint(0));
	LINE_NUMBER(105);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[3].o)))->F_caption;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(106);
	sp[0].o = frame[3].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[3].o)))->F_caption;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW) - (10)));
	((nro_Command *) NULL_CHECK(sp[0].o))->F_subCaption = (jref) sp[1].o;
	LINE_NUMBER(102);
	INST_IINC(2, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp0);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_menuTemY = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	jint temp1 = (jint)SF_main_GameCanvas_w;
	jint temp2 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuX = ((temp1 - (temp2 * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW))) / (jint(2)));
	LINE_NUMBER(111);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX) > 0) goto label_39;
	}
	{
	LINE_NUMBER(112);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX = (jint(1));
	}
label_39:;
	{
	LINE_NUMBER(115);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuH)) - ((clinit_nro_Paint(ctx), (jint)SF_nro_Paint_hTab) + (jint(1)))) - (jint(1)));
	LINE_NUMBER(116);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_42;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuY = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuY) - (jint(3)));
	}
label_42:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuY = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuY) + (27));
	LINE_NUMBER(122);
	frame[2].i = (jint(0));
	}
label_45:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_46;
	}
	{
	LINE_NUMBER(123);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h);
	LINE_NUMBER(122);
	INST_IINC(2, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(126);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_showMenu = (jint(1));
	LINE_NUMBER(127);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem = (jint(0));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	jint temp1 = (temp0 * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW)) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmxLim = temp1;
	if (temp1 >= 0) goto label_51;
	}
	{
	LINE_NUMBER(129);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmxLim = (jint(0));
	}
label_51:;
	{
	LINE_NUMBER(132);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (jint(0));
	LINE_NUMBER(133);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmx = (jint(0));
	LINE_NUMBER(134);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_xc = (50);
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_w = ((temp0 * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW)) - (jint(1)));
	LINE_NUMBER(136);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_w) <= ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2)))) goto label_1;
	}
	{
	LINE_NUMBER(137);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_w = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (jint(2)));
	}
label_1:;
	LINE_NUMBER(141);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Menu_isScrolling_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:isScrolling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose) != 0) goto label_1;
	}
	{
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	clinit_nro_Menu(ctx);
	sp[1].o = (jobject)SF_nro_Menu_menuTemY;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))))) > ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY)) goto label_2;
	}
label_1:;
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose) == 0) goto label_3;
	}
	{
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	clinit_nro_Menu(ctx);
	sp[1].o = (jobject)SF_nro_Menu_menuTemY;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))))) >= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Menu_updateMenuKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:updateMenuKey", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_activeRongThan) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isUseFreez) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(149);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_showMenu) == 0) goto label_2;
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)M_nro_Menu_isScrolling_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(151);
	frame[1].i = (jint(0));
	LINE_NUMBER(152);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_6;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(153);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) != 0) goto label_8;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(154);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(155);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_waitToPerform = (jint(2));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(156);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((func_nro_GameScr_isRongThanMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_isRongThanMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)M_nro_Menu_isScrolling_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_left;
	if (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_type) > 0) goto label_17;
	}
	{
	LINE_NUMBER(162);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_waitToPerform = (jint(2));
	}
label_17:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_buttonClose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_buttonClose])(ctx, sp[0].o);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((func_nro_GameScr_isRongThanMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_isRongThanMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_disableClose) != 0) goto label_12;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) != 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
label_19:;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)M_nro_Menu_isScrolling_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(171);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_close) != 0) goto label_22;
	}
	{
	LINE_NUMBER(172);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_close = (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(175);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose = (jint(1));
	LINE_NUMBER(176);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_buttonClose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_buttonClose])(ctx, sp[0].o);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(179);
	frame[1].i = (jint(1));
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem) + (jint(1)));
	LINE_NUMBER(181);
	jint temp0 = (jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (temp1 - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(182);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem = (jint(0));
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(186);
	frame[1].i = (jint(1));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem) - (jint(1)));
	LINE_NUMBER(188);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[1].o);
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_menuSelectedItem = (temp0 - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(193);
	if ((frame[1].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(194);
	jint temp0 = ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW)) + ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW)) - ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2)));
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = temp0;
	if (temp0 <= (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim)) goto label_33;
	}
	{
	LINE_NUMBER(195);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim);
	}
label_33:;
	{
	LINE_NUMBER(198);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) >= 0) goto label_35;
	}
	{
	LINE_NUMBER(199);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 == (temp1 - (jint(1)))) goto label_37;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) != 0) goto label_31;
	}
label_37:;
	{
	LINE_NUMBER(203);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmx = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX);
	}
label_31:;
	{
	LINE_NUMBER(207);
	frame[1].i = (jint(1));
	LINE_NUMBER(208);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_isClip) == 0) goto label_39;
	}
	{
	LINE_NUMBER(209);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	jint temp0 = (jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_cx;
	jint temp1 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	jint temp2 = ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_sayWidth) + (jint(2));
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((nro_ChatPopup *) NULL_CHECK(sp[0].o))->F_ch));
	if (temp3 != 0) goto label_41;
	}
	{
	LINE_NUMBER(210);
	frame[1].i = (jint(1));
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(212);
	frame[1].i = (jint(0));
	LINE_NUMBER(213);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	((func_nro_ChatPopup_updateKey) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_ChatPopup_updateKey])(ctx, sp[0].o);
	}
label_39:;
	{
	LINE_NUMBER(217);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_disableClose) != 0) goto label_44;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_44;
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX), ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY), ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuH));
	if (temp0 != 0) goto label_44;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_44;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((func_nro_GameScr_isRongThanMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_isRongThanMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_44;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_44;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)M_nro_Menu_isScrolling_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Menu *) NULL_CHECK(sp[1].o))->F_pointerDownFirstX = temp0;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_pa = temp0;
	LINE_NUMBER(220);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning = (jint(0));
	LINE_NUMBER(221);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(222);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose = (jint(1));
	LINE_NUMBER(223);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_close = (jint(1));
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_buttonClose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_buttonClose])(ctx, sp[0].o);
	goto label_2;
	}
label_44:;
	{
	LINE_NUMBER(229);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_52;
	}
	{
	LINE_NUMBER(230);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_54;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX), ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY), ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuH));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(231);
	frame[3].i = (jint(0));
	}
label_56:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_57;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(231);
	INST_IINC(3, 1);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(235);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(236);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning = (jint(1));
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun) == 0) goto label_62;
	}
	INST_ICONST(1);
	goto label_63;
label_62:;
	INST_ICONST(0);
label_63:;
	{
	sp -= 2;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_isDownWhenRunning = sp[1].i;
	LINE_NUMBER(238);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	goto label_52;
	}
label_54:;
	{
	LINE_NUMBER(239);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) == 0) goto label_52;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_pa = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_pa) + (jint(1)));
	LINE_NUMBER(241);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pa) <= (jint(5))) goto label_67;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX) != (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) goto label_67;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_67;
	}
	{
	LINE_NUMBER(242);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(243);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem = ((((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) - ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX)) / ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW));
	}
label_67:;
	{
	LINE_NUMBER(246);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_px;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	frame[3].i = temp1;
	if (temp1 == 0) goto label_71;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) == (jint(-1))) goto label_71;
	}
	{
	LINE_NUMBER(247);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem = (jint(-1));
	}
label_71:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_73:;
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_74;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[2].i) - (jint(1)))));
	LINE_NUMBER(250);
	INST_IINC(2, -1);
	goto label_73;
	}
label_74:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(255);
	jint temp0 = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) - (frame[3].i);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = temp0;
	if (temp0 >= 0) goto label_78;
	}
	{
	LINE_NUMBER(256);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (jint(0));
	}
label_78:;
	{
	LINE_NUMBER(259);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) <= (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim)) goto label_80;
	}
	{
	LINE_NUMBER(260);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim);
	}
label_80:;
	{
	LINE_NUMBER(263);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) < 0) goto label_82;
	}
	{
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) <= (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim)) goto label_83;
	}
label_82:;
	{
	LINE_NUMBER(264);
	frame[3].i = ((frame[3].i) / (jint(2)));
	}
label_83:;
	{
	LINE_NUMBER(267);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmx = ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) - (frame[3].i));
	}
label_52:;
	{
	LINE_NUMBER(271);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_84;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) == 0) goto label_84;
	}
	{
	LINE_NUMBER(272);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_px;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	frame[3].i = (temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	LINE_NUMBER(273);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(274);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[3].i));
	if (temp1 >= (20)) goto label_88;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) - ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX)));
	if (temp0 >= (20)) goto label_88;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_88;
	}
	{
	LINE_NUMBER(275);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	LINE_NUMBER(276);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx);
	LINE_NUMBER(277);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(278);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem = ((((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) - ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX)) / ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW));
	LINE_NUMBER(279);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pa = (jint(0));
	LINE_NUMBER(280);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_waitToPerform = (10);
	goto label_95;
	}
label_88:;
	{
	LINE_NUMBER(281);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) == (jint(-1))) goto label_96;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pa) <= (jint(5))) goto label_96;
	}
	{
	LINE_NUMBER(282);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pa = (jint(0));
	LINE_NUMBER(283);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_waitToPerform = (jint(1));
	goto label_95;
	}
label_96:;
	{
	LINE_NUMBER(284);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) != (jint(-1))) goto label_95;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_95;
	}
	{
	LINE_NUMBER(285);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) >= 0) goto label_100;
	}
	{
	LINE_NUMBER(286);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (jint(0));
	goto label_95;
	}
label_100:;
	{
	LINE_NUMBER(287);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) <= (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim)) goto label_102;
	}
	{
	LINE_NUMBER(288);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim);
	goto label_95;
	}
label_102:;
	{
	LINE_NUMBER(291);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_px;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp3 = temp1 + (temp2 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp5 = temp3 + (temp4 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))));
	frame[2].i = temp5;
	if (temp5 <= (10)) goto label_105;
	}
	{
	LINE_NUMBER(292);
	frame[4].i = (10);
	goto label_108;
	}
label_105:;
	{
	LINE_NUMBER(293);
	if ((frame[2].i) >= (-10)) goto label_109;
	}
	{
	LINE_NUMBER(294);
	frame[4].i = (-10);
	goto label_108;
	}
label_109:;
	{
	LINE_NUMBER(296);
	frame[4].i = (jint(0));
	}
label_108:;
	{
	LINE_NUMBER(299);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun = ((-(frame[4].i)) * (100));
	}
label_95:;
	{
	LINE_NUMBER(303);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning = (jint(0));
	LINE_NUMBER(304);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pa = (jint(0));
	LINE_NUMBER(305);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	}
label_84:;
	{
	LINE_NUMBER(308);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(309);
	SM_main_GameCanvas_clearKeyHold(ctx);
	}
label_2:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Menu_paintMenu_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:paintMenu", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_activeRongThan) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isUseFreez) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(318);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(319);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (-(clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx)), (jint(0)));
	LINE_NUMBER(321);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(322);
	if ((frame[2].i) != ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem)) goto label_8;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = frame[1].o;
	clinit_nro_Menu(ctx);
	sp[1].o = (jobject)SF_nro_Menu_imgMenu2;
	jint temp0 = (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX) + ((frame[2].i) * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW))) + (jint(1));
	clinit_nro_Menu(ctx);
	sp[2].o = (jobject)SF_nro_Menu_menuTemY;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))) + (jint(1))), (jint(0)));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[1].o;
	clinit_nro_Menu(ctx);
	sp[1].o = (jobject)SF_nro_Menu_imgMenu1;
	jint temp0 = (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX) + ((frame[2].i) * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW))) + (jint(1));
	clinit_nro_Menu(ctx);
	sp[2].o = (jobject)SF_nro_Menu_menuTemY;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))) + (jint(1))), (jint(0)));
	}
label_10:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK(sp[0].o))->F_subCaption;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((checkCast(ctx, &class_nro_Command, sp[1].o))))->F_caption;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[4].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(334);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	frame[5].i = ((((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) + ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuH) - ((((jarray) nullCheck(ctx, (frame[4].o)))->length) * (14))) / (jint(2)))) + (jint(1)));
	LINE_NUMBER(336);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_17;
	}
	{
	LINE_NUMBER(337);
	if ((frame[2].i) != ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem)) goto label_19;
	}
	{
	LINE_NUMBER(338);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))), ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX) + ((frame[2].i) * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW))) + (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW) / (jint(2)))), ((frame[5].i) + ((frame[6].i) * (14))), (jint(2)));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(339);
	if (((jint)((nro_Command *) NULL_CHECK((frame[3].o)))->F_isDisplay) == 0) goto label_22;
	}
	{
	LINE_NUMBER(340);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_red;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))), ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX) + ((frame[2].i) * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW))) + (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW) / (jint(2)))), ((frame[5].i) + ((frame[6].i) * (14))), (jint(2)));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(342);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))), ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuX) + ((frame[2].i) * ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW))) + (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuW) / (jint(2)))), ((frame[5].i) + ((frame[6].i) * (14))), (jint(2)));
	}
label_21:;
	{
	LINE_NUMBER(336);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(321);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	}
label_2:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Menu_updateMenu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:updateMenu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_1;
	}
	{
	LINE_NUMBER(353);
	jint temp0 = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) + (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun) / (100));
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = temp0;
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(354);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (jint(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(355);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) <= (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim)) goto label_6;
	}
	{
	LINE_NUMBER(356);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmtoX = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmxLim);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(358);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmx = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX);
	}
label_5:;
	{
	LINE_NUMBER(361);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun = ((((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun) * (9)) / (10));
	LINE_NUMBER(362);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun) >= (100)) goto label_1;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun) <= (-100)) goto label_1;
	}
	{
	LINE_NUMBER(363);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(367);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) == (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX)) goto label_10;
	}
	{
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_10;
	}
	{
	LINE_NUMBER(368);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmvx = (((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmtoX) - (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx)) << (jint(2)));
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_cmdx = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_cmdx) + ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmvx));
	LINE_NUMBER(370);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_cmx = ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_cmx) + (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_cmdx) >> (jint(4))));
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_cmdx = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_cmdx) & (15));
	}
label_10:;
	{
	LINE_NUMBER(378);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose) != 0) goto label_15;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_tDelay = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_tDelay) + (jint(1)));
	LINE_NUMBER(381);
	frame[2].i = (jint(0));
	}
label_18:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(382);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) <= ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY)) goto label_21;
	}
	{
	LINE_NUMBER(383);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	jint temp0 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) - ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY)) >> (jint(1));
	frame[3].i = temp0;
	if (temp0 > 0) goto label_24;
	}
	{
	LINE_NUMBER(384);
	frame[3].i = (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(387);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_tDelay) <= (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(388);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	frame[1].o = sp[0].o;
	LINE_NUMBER(389);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (frame[3].i));
	}
label_21:;
	{
	LINE_NUMBER(381);
	INST_IINC(2, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(394);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	clinit_nro_Menu(ctx);
	sp[1].o = (jobject)SF_nro_Menu_menuTemY;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))))) > ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuY)) goto label_28;
	}
	{
	LINE_NUMBER(395);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_tDelay = (jint(0));
	goto label_28;
	}
label_15:;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_tDelay = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_tDelay) + (jint(1)));
	LINE_NUMBER(400);
	frame[2].i = (jint(0));
	}
label_31:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_32;
	}
	{
	LINE_NUMBER(401);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) >= (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_34;
	}
	{
	LINE_NUMBER(402);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_h;
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	jint temp1 = ((temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)))) >> (jint(1))) + (jint(2));
	frame[3].i = temp1;
	if (temp1 > 0) goto label_37;
	}
	{
	LINE_NUMBER(403);
	frame[3].i = (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(406);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_tDelay) <= (frame[2].i)) goto label_34;
	}
	{
	LINE_NUMBER(407);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	frame[1].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[3].i));
	}
label_34:;
	{
	LINE_NUMBER(400);
	INST_IINC(2, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(413);
	clinit_nro_Menu(ctx);
	sp[0].o = (jobject)SF_nro_Menu_menuTemY;
	clinit_nro_Menu(ctx);
	sp[1].o = (jobject)SF_nro_Menu_menuTemY;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))))) < (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_28;
	}
	{
	LINE_NUMBER(414);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_tDelay = (jint(0));
	LINE_NUMBER(415);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose = (jint(0));
	LINE_NUMBER(416);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_showMenu = (jint(0));
	LINE_NUMBER(417);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(418);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_close) == 0) goto label_46;
	}
	{
	LINE_NUMBER(419);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	LINE_NUMBER(420);
	clinit_nro_Char(ctx);
	SF_nro_Char_chatPopup = (jobject(nullptr));
	LINE_NUMBER(421);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(422);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	goto label_28;
	}
label_46:;
	{
	LINE_NUMBER(424);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_touch) == 0) goto label_28;
	}
	{
	LINE_NUMBER(425);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	LINE_NUMBER(426);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	LINE_NUMBER(427);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	}
label_53:;
	{
	LINE_NUMBER(430);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) < 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_buttonClose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_buttonClose])(ctx, sp[0].o);
	LINE_NUMBER(432);
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Command_performAction])(ctx, (frame[4].o));
	}
label_28:;
	{
	LINE_NUMBER(438);
	if ((clinit_nro_Menu(ctx), (jint)SF_nro_Menu_xc) == 0) goto label_58;
	}
	{
	jint temp0 = (clinit_nro_Menu(ctx), (jint)SF_nro_Menu_xc) >> (jint(1));
	clinit_nro_Menu(ctx);
	SF_nro_Menu_xc = temp0;
	if (temp0 >= 0) goto label_58;
	}
	{
	LINE_NUMBER(439);
	clinit_nro_Menu(ctx);
	SF_nro_Menu_xc = (jint(0));
	}
label_58:;
	{
	LINE_NUMBER(442);
	jint temp0 = (jint)M_nro_Menu_isScrolling_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_60;
	}
	{
	LINE_NUMBER(443);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_waitToPerform) <= 0) goto label_60;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	((nro_Menu *) NULL_CHECK(sp[0].o))->F_waitToPerform = (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_waitToPerform) - (jint(1)));
	LINE_NUMBER(445);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_waitToPerform) != 0) goto label_60;
	}
	{
	LINE_NUMBER(446);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) < 0) goto label_65;
	}
	{
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isNotClose;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem))) != 0) goto label_65;
	}
	{
	LINE_NUMBER(447);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_isClose = (jint(1));
	LINE_NUMBER(448);
	((nro_Menu *) NULL_CHECK((frame[0].o)))->F_touch = (jint(1));
	LINE_NUMBER(449);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}
label_65:;
	{
	LINE_NUMBER(453);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(454);
	if (((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem) < 0) goto label_60;
	}
	{
	sp[0].o = (jobject)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuItems;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((nro_Menu *) NULL_CHECK((frame[0].o)))->F_menuSelectedItem));
	sp[0].o = checkCast(ctx, &class_nro_Command, sp[0].o);
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(455);
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_nro_Command_performAction])(ctx, (frame[4].o));
	}
label_60:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_Menu(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Menu:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Menu(ctx);
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dbtMenu1.png"_j))));
	clinit_nro_Menu(ctx);
	SF_nro_Menu_imgMenu1 = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dbtMenu2.png"_j))));
	clinit_nro_Menu(ctx);
	SF_nro_Menu_imgMenu2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Menu[] {
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
	(void *) M_nro_Menu_startWithoutCloseButton_nro_MyVector_int,
	(void *) M_nro_Menu_startAt_nro_MyVector_int_int,
	(void *) M_nro_Menu_startAt_nro_MyVector,
	(void *) M_nro_Menu_isScrolling_R_boolean,
	(void *) M_nro_Menu_updateMenuKey,
	(void *) M_nro_Menu_paintMenu_lib_mGraphics,
	(void *) M_nro_Menu_updateMenu,
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
	{ "startWithoutCloseButton", "(Lnro/MyVector;I)V" },
	{ "startAt", "(Lnro/MyVector;II)V" },
	{ "startAt", "(Lnro/MyVector;)V" },
	{ "isScrolling", "()Z" },
	{ "updateMenuKey", "()V" },
	{ "paintMenu", "(Llib/mGraphics;)V" },
	{ "updateMenu", "()V" },
};

static FieldMetadata fields[] {
	{ "showMenu", &class_boolean, offsetof(nro_Menu, F_showMenu), "Z", 1 },
	{ "menuItems", &class_nro_MyVector, offsetof(nro_Menu, F_menuItems), "Lnro/MyVector;", 2 },
	{ "menuSelectedItem", &class_int, offsetof(nro_Menu, F_menuSelectedItem), "I", 1 },
	{ "menuX", &class_int, offsetof(nro_Menu, F_menuX), "I", 1 },
	{ "menuY", &class_int, offsetof(nro_Menu, F_menuY), "I", 1 },
	{ "menuW", &class_int, offsetof(nro_Menu, F_menuW), "I", 2 },
	{ "menuH", &class_int, offsetof(nro_Menu, F_menuH), "I", 2 },
	{ "menuTemY", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_Menu_menuTemY, "[I", 10 },
	{ "cmtoX", &class_int, (intptr_t) &SF_nro_Menu_cmtoX, "I", 10 },
	{ "cmx", &class_int, (intptr_t) &SF_nro_Menu_cmx, "I", 10 },
	{ "cmxLim", &class_int, (intptr_t) &SF_nro_Menu_cmxLim, "I", 10 },
	{ "xc", &class_int, (intptr_t) &SF_nro_Menu_xc, "I", 10 },
	{ "left", &class_nro_Command, offsetof(nro_Menu, F_left), "Lnro/Command;", 2 },
	{ "right", &class_nro_Command, offsetof(nro_Menu, F_right), "Lnro/Command;", 2 },
	{ "center", &class_nro_Command, offsetof(nro_Menu, F_center), "Lnro/Command;", 2 },
	{ "imgMenu1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Menu_imgMenu1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMenu2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Menu_imgMenu2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "disableClose", &class_boolean, offsetof(nro_Menu, F_disableClose), "Z", 2 },
	{ "tDelay", &class_int, offsetof(nro_Menu, F_tDelay), "I", 1 },
	{ "w", &class_int, offsetof(nro_Menu, F_w), "I", 2 },
	{ "pa", &class_int, offsetof(nro_Menu, F_pa), "I", 2 },
	{ "pointerDownFirstX", &class_int, offsetof(nro_Menu, F_pointerDownFirstX), "I", 2 },
	{ "pointerDownLastX", getArrayClass(&class_int, 1), offsetof(nro_Menu, F_pointerDownLastX), "[I", 2 },
	{ "pointerIsDowning", &class_boolean, offsetof(nro_Menu, F_pointerIsDowning), "Z", 2 },
	{ "isDownWhenRunning", &class_boolean, offsetof(nro_Menu, F_isDownWhenRunning), "Z", 2 },
	{ "waitToPerform", &class_int, offsetof(nro_Menu, F_waitToPerform), "I", 2 },
	{ "cmRun", &class_int, offsetof(nro_Menu, F_cmRun), "I", 2 },
	{ "touch", &class_boolean, offsetof(nro_Menu, F_touch), "Z", 2 },
	{ "close", &class_boolean, offsetof(nro_Menu, F_close), "Z", 2 },
	{ "cmvx", &class_int, offsetof(nro_Menu, F_cmvx), "I", 2 },
	{ "cmdx", &class_int, offsetof(nro_Menu, F_cmdx), "I", 2 },
	{ "isClose", &class_boolean, offsetof(nro_Menu, F_isClose), "Z", 2 },
	{ "isNotClose", getArrayClass(&class_boolean, 1), offsetof(nro_Menu, F_isNotClose), "[Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Menu, 0, "()V", 1 },
	{ "startWithoutCloseButton", (intptr_t) M_nro_Menu_startWithoutCloseButton_nro_MyVector_int, VTABLE_nro_Menu_startWithoutCloseButton_nro_MyVector_int, "(Lnro/MyVector;I)V", 17 },
	{ "startAt", (intptr_t) M_nro_Menu_startAt_nro_MyVector_int_int, VTABLE_nro_Menu_startAt_nro_MyVector_int_int, "(Lnro/MyVector;II)V", 17 },
	{ "startAt", (intptr_t) M_nro_Menu_startAt_nro_MyVector, VTABLE_nro_Menu_startAt_nro_MyVector, "(Lnro/MyVector;)V", 17 },
	{ "isScrolling", (intptr_t) M_nro_Menu_isScrolling_R_boolean, VTABLE_nro_Menu_isScrolling_R_boolean, "()Z", 2 },
	{ "updateMenuKey", (intptr_t) M_nro_Menu_updateMenuKey, VTABLE_nro_Menu_updateMenuKey, "()V", 17 },
	{ "paintMenu", (intptr_t) M_nro_Menu_paintMenu_lib_mGraphics, VTABLE_nro_Menu_paintMenu_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "updateMenu", (intptr_t) M_nro_Menu_updateMenu, VTABLE_nro_Menu_updateMenu, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Menu, 0, "()V", 8 },
};

Class class_nro_Menu{
		.nativeName = (intptr_t) "nro/Menu",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Menu),
		.classVtable = (intptr_t) vtable_nro_Menu,
		.staticInitializer = (intptr_t) clinit_nro_Menu,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Menu,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Menu = registerClass(&class_nro_Menu);

}

