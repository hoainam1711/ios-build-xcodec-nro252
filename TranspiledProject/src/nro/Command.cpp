#include "nro/Command.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/ItemMap.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/sound/SoundMn.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Command_btn0left;
jobject SF_nro_Command_btn0mid;
jobject SF_nro_Command_btn0right;
jobject SF_nro_Command_btn1left;
jobject SF_nro_Command_btn1mid;
jobject SF_nro_Command_btn1right;

void mark_nro_Command(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Command_btn0left)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Command_btn0left)->clazz)->markFunction)((jobject) SF_nro_Command_btn0left, mark, depth + 1);
		if (SF_nro_Command_btn0mid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Command_btn0mid)->clazz)->markFunction)((jobject) SF_nro_Command_btn0mid, mark, depth + 1);
		if (SF_nro_Command_btn0right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Command_btn0right)->clazz)->markFunction)((jobject) SF_nro_Command_btn0right, mark, depth + 1);
		if (SF_nro_Command_btn1left)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Command_btn1left)->clazz)->markFunction)((jobject) SF_nro_Command_btn1left, mark, depth + 1);
		if (SF_nro_Command_btn1mid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Command_btn1mid)->clazz)->markFunction)((jobject) SF_nro_Command_btn1mid, mark, depth + 1);
		if (SF_nro_Command_btn1right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Command_btn1right)->clazz)->markFunction)((jobject) SF_nro_Command_btn1right, mark, depth + 1);
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
	auto self = (nro_Command *) object;
	if (self->F_caption)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_caption)->clazz)->markFunction)((jobject) self->F_caption, mark, depth + 1);
	if (self->F_subCaption)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subCaption)->clazz)->markFunction)((jobject) self->F_subCaption, mark, depth + 1);
	if (self->F_actionListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actionListener)->clazz)->markFunction)((jobject) self->F_actionListener, mark, depth + 1);
	if (self->F_img)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_img)->clazz)->markFunction)((jobject) self->F_img, mark, depth + 1);
	if (self->F_imgFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgFocus)->clazz)->markFunction)((jobject) self->F_imgFocus, mark, depth + 1);
	if (self->F_imgBtn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgBtn)->clazz)->markFunction)((jobject) self->F_imgBtn, mark, depth + 1);
	if (self->F_p)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_p)->clazz)->markFunction)((jobject) self->F_p, mark, depth + 1);
	if (self->F_caption2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_caption2)->clazz)->markFunction)((jobject) self->F_caption2, mark, depth + 1);
}

void init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isDisplay = (jint(0));
	LINE_NUMBER(17);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isPlaySoundButton = (jint(1));
	LINE_NUMBER(21);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (jint(0));
	LINE_NUMBER(22);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (jint(0));
	LINE_NUMBER(38);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_w = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard);
	LINE_NUMBER(39);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_h = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH);
	LINE_NUMBER(40);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(41);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption2 = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(42);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption = (jref) (frame[1].o);
	LINE_NUMBER(43);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(44);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_actionListener = (jref) (frame[2].o);
	LINE_NUMBER(45);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_p = (jref) (jobject(nullptr));
	LINE_NUMBER(46);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (frame[5].i);
	LINE_NUMBER(47);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (frame[6].i);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isDisplay = (jint(0));
	LINE_NUMBER(17);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isPlaySoundButton = (jint(1));
	LINE_NUMBER(21);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (jint(0));
	LINE_NUMBER(22);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (jint(0));
	LINE_NUMBER(51);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_w = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard);
	LINE_NUMBER(52);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_h = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH);
	LINE_NUMBER(53);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(54);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption2 = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(55);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption = (jref) (frame[1].o);
	LINE_NUMBER(56);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_type = (frame[3].i);
	LINE_NUMBER(57);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_actionListener = (jref) (frame[2].o);
	LINE_NUMBER(58);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_p = (jref) (frame[4].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Command_java_lang_String_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(61);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isDisplay = (jint(0));
	LINE_NUMBER(17);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isPlaySoundButton = (jint(1));
	LINE_NUMBER(21);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (jint(0));
	LINE_NUMBER(22);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (jint(0));
	LINE_NUMBER(62);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_w = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard);
	LINE_NUMBER(63);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_h = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH);
	LINE_NUMBER(64);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(65);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption2 = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(66);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption = (jref) (frame[1].o);
	LINE_NUMBER(67);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_type = (frame[2].i);
	LINE_NUMBER(68);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_p = (jref) (frame[3].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Command_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isDisplay = (jint(0));
	LINE_NUMBER(17);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isPlaySoundButton = (jint(1));
	LINE_NUMBER(21);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (jint(0));
	LINE_NUMBER(22);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (jint(0));
	LINE_NUMBER(72);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_w = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard);
	LINE_NUMBER(73);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_h = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH);
	LINE_NUMBER(74);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(75);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption2 = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(76);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption = (jref) (frame[1].o);
	LINE_NUMBER(77);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_type = (frame[2].i);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Command_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(80);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isDisplay = (jint(0));
	LINE_NUMBER(17);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isPlaySoundButton = (jint(1));
	LINE_NUMBER(21);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (jint(0));
	LINE_NUMBER(22);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (jint(0));
	LINE_NUMBER(81);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_w = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard);
	LINE_NUMBER(82);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_h = (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH);
	LINE_NUMBER(83);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(84);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption2 = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(85);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption = (jref) (frame[1].o);
	LINE_NUMBER(86);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_type = (jint(0));
	LINE_NUMBER(87);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_x = (frame[3].i);
	LINE_NUMBER(88);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].i);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Command_performAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:performAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(93);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_isPlaySoundButton) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_saying;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	if (sp[0].o == nullptr) goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_buttonClick) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_buttonClick])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(97);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_type) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_actionListener;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_actionListener;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_p;
	((func_nro_IActionListener_perform_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_nro_IActionListener, INDEX_nro_IActionListener_perform_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_p;
	((func_nro_GameScr_perform_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_perform_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_5:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Command_setType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:setType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_w = (160);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Command_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:paint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), (jint(0)));
	LINE_NUMBER(115);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus) == 0) goto label_4;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_imgFocus;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(117);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_cmdClosePanel) == 0) goto label_8;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageFlare;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x) + (8)), (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y) + (8)), (jint(3)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageFlare;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_imgMenu;
	jint temp1 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[2].o, sp[3].o);
	sp[2].i = temp0;
	sp += 3;
	if (temp1 == 0) goto label_10;
	}
	INST_BIPUSH(10);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 4;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (sp[2].i - sp[3].i), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), (jint(0)));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_imgFocus;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), (jint(0)));
	}
label_4:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	if (sp[0].o == (((jobject) createStringLiteral(ctx, u8""_j)))) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(128);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus) != 0) goto label_14;
	}
	{
	LINE_NUMBER(129);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x;
	sp[3].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[3].o);
	jint temp2 = temp0 + (temp1 / (jint(2)));
	jint temp3 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y;
	sp[3].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp4 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[3].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, ((temp3 + (temp4 / (jint(2)))) - (jint(5))), (jint(2)));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(133);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	jint temp0 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x;
	sp[3].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp1 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[3].o);
	jint temp2 = temp0 + (temp1 / (jint(2)));
	jint temp3 = (jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y;
	sp[3].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp4 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[3].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, ((temp3 + (temp4 / (jint(2)))) - (jint(5))), (jint(2)));
	goto label_12;
	}
label_1:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	if (sp[0].o == (((jobject) createStringLiteral(ctx, u8""_j)))) goto label_17;
	}
	{
	LINE_NUMBER(138);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus) != 0) goto label_19;
	}
	{
	LINE_NUMBER(139);
	clinit_nro_Command(ctx);
	sp[0].o = (jobject)SF_nro_Command_btn0left;
	clinit_nro_Command(ctx);
	sp[1].o = (jobject)SF_nro_Command_btn0mid;
	clinit_nro_Command(ctx);
	sp[2].o = (jobject)SF_nro_Command_btn0right;
	SM_nro_Command_paintOngMau_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_int_int_int_lib_mGraphics(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_w), (frame[1].o));
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(141);
	clinit_nro_Command(ctx);
	sp[0].o = (jobject)SF_nro_Command_btn1left;
	clinit_nro_Command(ctx);
	sp[1].o = (jobject)SF_nro_Command_btn1mid;
	clinit_nro_Command(ctx);
	sp[2].o = (jobject)SF_nro_Command_btn1right;
	SM_nro_Command_paintOngMau_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_int_int_int_lib_mGraphics(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_w), (frame[1].o));
	}
label_17:;
	{
	LINE_NUMBER(145);
	frame[2].i = (jint(0));
	LINE_NUMBER(146);
	frame[3].i = (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_w) / (jint(2))));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_imgBtn;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_imgBtn;
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_javax_microedition_lcdui_Image_getWidth_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(149);
	frame[3].i = (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x) + (frame[2].i));
	LINE_NUMBER(150);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus) != 0) goto label_27;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_imgBtn;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), (jint(0)));
	goto label_23;
	}
label_27:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_imgBtn;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y) + (jint(1))), (jint(0)));
	}
label_23:;
	{
	LINE_NUMBER(157);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus) != 0) goto label_29;
	}
	{
	LINE_NUMBER(158);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	jint temp0 = frame[3].i;
	jint temp1 = ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y) + (7);
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if ((frame[2].i) != 0) goto label_31;
	}
	INST_ICONST(2);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	POP_N(6); // Pop method args
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].i, sp[5].i);
	goto label_12;
label_29:;
	{
	LINE_NUMBER(160);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[0].o)))->F_caption;
	jint temp0 = frame[3].i;
	jint temp1 = ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y) + (7);
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if ((frame[2].i) != 0) goto label_33;
	}
	INST_ICONST(2);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	POP_N(6); // Pop method args
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].i, sp[5].i);
label_12:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Command_paintOngMau_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_int_int_int_lib_mGraphics(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jobject param6) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:paintOngMau", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(167);
	frame[7].i = (10);
	}
label_1:;
	{
	if ((frame[7].i) > ((frame[5].i) - (20))) goto label_2;
	}
	{
	LINE_NUMBER(168);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, (frame[6].o), (frame[1].o), ((frame[3].i) + (frame[7].i)), (frame[4].i), (jint(0)));
	LINE_NUMBER(167);
	INST_IINC(7, 10);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(171);
	jint temp0 = (frame[5].i) % (10);
	frame[7].i = temp0;
	if (temp0 <= 0) goto label_5;
	}
	{
	LINE_NUMBER(172);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[6].o), (frame[1].o), (jint(0)), (jint(0)), (frame[7].i), (24), (jint(0)), ((((frame[3].i) + (frame[5].i)) - (10)) - (frame[7].i)), (frame[4].i), (jint(0)));
	}
label_5:;
	{
	LINE_NUMBER(175);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, (frame[6].o), (frame[0].o), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(176);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, (frame[6].o), (frame[2].o), (((frame[3].i) + (frame[5].i)) - (10)), (frame[4].i), (jint(0)));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_nro_Command_isPointerPressInside_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:isPointerPressInside", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(181);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_h));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(182);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_4;
	}
	{
	LINE_NUMBER(183);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(186);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_2;
	}
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_nro_Command_isPointerPressInsideCamera_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:isPointerPressInsideCamera", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(195);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(0));
	LINE_NUMBER(196);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].i)), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_h));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(197);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_4;
	}
	{
	LINE_NUMBER(198);
	((nro_Command *) NULL_CHECK((frame[0].o)))->F_isFocus = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(201);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_2;
	}
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_nro_Command(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Command:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Command(ctx);
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/btn0left.png"_j))));
	clinit_nro_Command(ctx);
	SF_nro_Command_btn0left = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/btn0mid.png"_j))));
	clinit_nro_Command(ctx);
	SF_nro_Command_btn0mid = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/btn0right.png"_j))));
	clinit_nro_Command(ctx);
	SF_nro_Command_btn0right = sp[0].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/btn1left.png"_j))));
	clinit_nro_Command(ctx);
	SF_nro_Command_btn1left = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/btn1mid.png"_j))));
	clinit_nro_Command(ctx);
	SF_nro_Command_btn1mid = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/btn1right.png"_j))));
	clinit_nro_Command(ctx);
	SF_nro_Command_btn1right = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Command[] {
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
	(void *) M_nro_Command_performAction,
	(void *) M_nro_Command_setType,
	(void *) M_nro_Command_paint_lib_mGraphics,
	(void *) M_nro_Command_isPointerPressInside_R_boolean,
	(void *) M_nro_Command_isPointerPressInsideCamera_int_int_R_boolean,
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
	{ "performAction", "()V" },
	{ "setType", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "isPointerPressInside", "()Z" },
	{ "isPointerPressInsideCamera", "(II)Z" },
};

static FieldMetadata fields[] {
	{ "isDisplay", &class_boolean, offsetof(nro_Command, F_isDisplay), "Z", 1 },
	{ "caption", &class_java_lang_String, offsetof(nro_Command, F_caption), "Ljava/lang/String;", 1 },
	{ "subCaption", getArrayClass(&class_java_lang_String, 1), offsetof(nro_Command, F_subCaption), "[Ljava/lang/String;", 1 },
	{ "actionListener", &class_nro_IActionListener, offsetof(nro_Command, F_actionListener), "Lnro/IActionListener;", 1 },
	{ "type", &class_int, offsetof(nro_Command, F_type), "I", 1 },
	{ "isPlaySoundButton", &class_boolean, offsetof(nro_Command, F_isPlaySoundButton), "Z", 1 },
	{ "img", &class_javax_microedition_lcdui_Image, offsetof(nro_Command, F_img), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "imgFocus", &class_javax_microedition_lcdui_Image, offsetof(nro_Command, F_imgFocus), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "imgBtn", &class_javax_microedition_lcdui_Image, offsetof(nro_Command, F_imgBtn), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "x", &class_int, offsetof(nro_Command, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_Command, F_y), "I", 1 },
	{ "w", &class_int, offsetof(nro_Command, F_w), "I", 1 },
	{ "h", &class_int, offsetof(nro_Command, F_h), "I", 1 },
	{ "isFocus", &class_boolean, offsetof(nro_Command, F_isFocus), "Z", 1 },
	{ "p", &class_java_lang_Object, offsetof(nro_Command, F_p), "Ljava/lang/Object;", 1 },
	{ "caption2", &class_java_lang_String, offsetof(nro_Command, F_caption2), "Ljava/lang/String;", 1 },
	{ "btn0left", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Command_btn0left, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "btn0mid", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Command_btn0mid, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "btn0right", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Command_btn0right, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "btn1left", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Command_btn1left, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "btn1mid", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Command_btn1mid, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "btn1right", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Command_btn1right, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "cmdClosePanel", &class_boolean, offsetof(nro_Command, F_cmdClosePanel), "Z", 1 },
	{ "isPaintNew", &class_boolean, offsetof(nro_Command, F_isPaintNew), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int, 0, "(Ljava/lang/String;Lnro/IActionListener;ILjava/lang/Object;II)V", 1 },
	{ "<init>", (intptr_t) init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object, 0, "(Ljava/lang/String;Lnro/IActionListener;ILjava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_nro_Command_java_lang_String_int_java_lang_Object, 0, "(Ljava/lang/String;ILjava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_nro_Command_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_nro_Command_java_lang_String_int_int_int, 0, "(Ljava/lang/String;III)V", 1 },
	{ "performAction", (intptr_t) M_nro_Command_performAction, VTABLE_nro_Command_performAction, "()V", 17 },
	{ "setType", (intptr_t) M_nro_Command_setType, VTABLE_nro_Command_setType, "()V", 17 },
	{ "paint", (intptr_t) M_nro_Command_paint_lib_mGraphics, VTABLE_nro_Command_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "paintOngMau", (intptr_t) SM_nro_Command_paintOngMau_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_javax_microedition_lcdui_Image_int_int_int_lib_mGraphics, 0, "(Ljavax/microedition/lcdui/Image;Ljavax/microedition/lcdui/Image;Ljavax/microedition/lcdui/Image;IIILlib/mGraphics;)V", 10 },
	{ "isPointerPressInside", (intptr_t) M_nro_Command_isPointerPressInside_R_boolean, VTABLE_nro_Command_isPointerPressInside_R_boolean, "()Z", 17 },
	{ "isPointerPressInsideCamera", (intptr_t) M_nro_Command_isPointerPressInsideCamera_int_int_R_boolean, VTABLE_nro_Command_isPointerPressInsideCamera_int_int_R_boolean, "(II)Z", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Command, 0, "()V", 8 },
};

Class class_nro_Command{
		.nativeName = (intptr_t) "nro/Command",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Command),
		.classVtable = (intptr_t) vtable_nro_Command,
		.staticInitializer = (intptr_t) clinit_nro_Command,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Command,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Command = registerClass(&class_nro_Command);

}

