#include "nro/Paint.h"
#include "lib/mFont.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/StaticObj.h"
#include "nro/Paint.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "lib/mSystem.h"

extern "C" {

jint SF_nro_Paint_COLORBACKGROUND;
jobject SF_nro_Paint_goc;
jint SF_nro_Paint_hTab;
jint SF_nro_Paint_lenCaption;

void mark_nro_Paint(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Paint_goc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Paint_goc)->clazz)->markFunction)((jobject) SF_nro_Paint_goc, mark, depth + 1);
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
	auto self = (nro_Paint *) object;
}

void init_nro_Paint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Paint(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(15970400));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(-844109861));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2250052));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(16374659));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(15906669));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(12931125));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(3108954));
	frame[1].o = sp[0].o;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:paintCmdBar", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Paint(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(31);
	frame[4].i = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch);
	LINE_NUMBER(32);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	frame[5].o = sp[0].o;
	LINE_NUMBER(33);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[1].o)))->F_caption;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_lenCaption = temp0;
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(34);
	if (((jint)((nro_Command *) NULL_CHECK((frame[1].o)))->F_x) < 0) goto label_5;
	}
	{
	if (((jint)((nro_Command *) NULL_CHECK((frame[1].o)))->F_y) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(35);
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, (frame[1].o), (frame[0].o));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_keyTouch) != 0) goto label_7;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgLbtnFocus;
	goto label_8;
label_7:;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgLbtn;
label_8:;
	{
	sp -= 2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(1)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(1))), (jint(0)));
	LINE_NUMBER(38);
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[1].o)))->F_caption;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (35), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) + (jint(3))) + (jint(3))), (jint(2)));
	}
label_3:;
	{
	LINE_NUMBER(42);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_caption;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_lenCaption = temp0;
	if (temp0 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(43);
	if (((jint)((nro_Command *) NULL_CHECK((frame[2].o)))->F_x) <= 0) goto label_12;
	}
	{
	if (((jint)((nro_Command *) NULL_CHECK((frame[2].o)))->F_y) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(44);
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, (frame[2].o), (frame[0].o));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_keyTouch) != (jint(1))) goto label_14;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgLbtnFocus;
	goto label_15;
label_14:;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgLbtn;
label_15:;
	{
	sp -= 2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (35)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(1))), (jint(0)));
	LINE_NUMBER(47);
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[2].o)))->F_caption;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) + (jint(3))) + (jint(3))), (jint(2)));
	}
label_10:;
	{
	LINE_NUMBER(51);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((nro_Command *) NULL_CHECK((frame[3].o)))->F_caption;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_lenCaption = temp0;
	if (temp0 <= 0) goto label_17;
	}
	{
	LINE_NUMBER(52);
	if (((jint)((nro_Command *) NULL_CHECK((frame[3].o)))->F_x) <= 0) goto label_19;
	}
	{
	if (((jint)((nro_Command *) NULL_CHECK((frame[3].o)))->F_y) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(53);
	((func_nro_Command_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Command_paint_lib_mGraphics])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_keyTouch) != (jint(2))) goto label_22;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgLbtnFocus;
	goto label_23;
label_22:;
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_imgLbtn;
label_23:;
	{
	sp -= 2;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (71)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(1))), (jint(0)));
	LINE_NUMBER(58);
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((nro_Command *) NULL_CHECK((frame[3].o)))->F_caption;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (35)), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) + (jint(3))) + (jint(3))), (jint(2)));
	}
label_17:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:paintInputDlg", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(64);
	SM_nro_Paint_paintFrame_int_int_int_int_lib_mGraphics(ctx, (frame[2].i), (frame[3].i), (frame[4].i), (69), (frame[1].o));
	LINE_NUMBER(65);
	jint temp0 = (frame[3].i) + (20);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[3].i = (temp0 - temp1);
	LINE_NUMBER(66);
	frame[5].i = (jint(0));
	LINE_NUMBER(68);
	frame[3].i = (frame[3].i);
	}
label_4:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(69);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[5].i))), ((frame[2].i) + ((frame[4].i) / (jint(2)))), (frame[3].i), (jint(2)));
	LINE_NUMBER(70);
	INST_IINC(5, 1);
	LINE_NUMBER(68);
	jint temp0 = frame[3].i;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[3].i = (temp0 + temp1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Paint_paintPopUp_int_int_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:paintPopUp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Paint(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(76);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (jint(9340251)));
	LINE_NUMBER(77);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (18)), (frame[1].i), ((((frame[2].i) - (36)) / (jint(2))) - (32)), (frame[3].i));
	LINE_NUMBER(78);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), ((((frame[0].i) + (18)) + (((frame[2].i) - (36)) / (jint(2)))) + (32)), (frame[1].i), ((((frame[2].i) - (36)) / (jint(2))) - (22)), (frame[3].i));
	LINE_NUMBER(79);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), (frame[0].i), ((frame[1].i) + (8)), (frame[2].i), ((frame[3].i) - (17)));
	LINE_NUMBER(80);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (clinit_nro_Paint(ctx), (jint)SF_nro_Paint_COLORBACKGROUND));
	LINE_NUMBER(81);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (18)), ((frame[1].i) + (jint(3))), ((((frame[2].i) - (36)) / (jint(2))) - (32)), ((frame[3].i) - (jint(4))));
	LINE_NUMBER(82);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((((frame[0].i) + (18)) + (((frame[2].i) - (36)) / (jint(2)))) + (31)), ((frame[1].i) + (jint(3))), ((((frame[2].i) - (38)) / (jint(2))) - (22)), ((frame[3].i) - (jint(4))));
	LINE_NUMBER(83);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (jint(1))), ((frame[1].i) + (6)), ((frame[2].i) - (jint(1))), ((frame[3].i) - (11)));
	LINE_NUMBER(84);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (jint(14667919)));
	LINE_NUMBER(85);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (18)), ((frame[1].i) + (jint(1))), ((((frame[2].i) - (36)) / (jint(2))) - (32)), (jint(2)));
	LINE_NUMBER(86);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((((frame[0].i) + (18)) + (((frame[2].i) - (36)) / (jint(2)))) + (32)), ((frame[1].i) + (jint(1))), ((((frame[2].i) - (36)) / (jint(2))) - (12)), (jint(2)));
	LINE_NUMBER(87);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (18)), (((frame[1].i) + (frame[3].i)) - (jint(2))), ((((frame[2].i) - (36)) / (jint(2))) - (31)), (jint(2)));
	LINE_NUMBER(88);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((((frame[0].i) + (18)) + (((frame[2].i) - (36)) / (jint(2)))) + (32)), (((frame[1].i) + (frame[3].i)) - (jint(2))), ((((frame[2].i) - (36)) / (jint(2))) - (31)), (jint(2)));
	LINE_NUMBER(89);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (jint(1))), ((frame[1].i) + (11)), (jint(2)), ((frame[3].i) - (18)));
	LINE_NUMBER(90);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), (((frame[0].i) + (frame[2].i)) - (jint(2))), ((frame[1].i) + (11)), (jint(2)), ((frame[3].i) - (18)));
	LINE_NUMBER(91);
	sp[0].o = frame[4].o;
	clinit_nro_Paint(ctx);
	sp[1].o = (jobject)SF_nro_Paint_goc;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), ((frame[0].i) - (jint(3))), ((frame[1].i) - (jint(2))), (20));
	LINE_NUMBER(92);
	sp[0].o = frame[4].o;
	clinit_nro_Paint(ctx);
	sp[1].o = (jobject)SF_nro_Paint_goc;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), (((frame[0].i) + (frame[2].i)) + (jint(3))), ((frame[1].i) - (jint(2))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_RIGHT));
	LINE_NUMBER(93);
	sp[0].o = frame[4].o;
	clinit_nro_Paint(ctx);
	sp[1].o = (jobject)SF_nro_Paint_goc;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))), ((frame[0].i) - (jint(3))), (((frame[1].i) + (frame[3].i)) + (jint(3))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_BOTTOM_HCENTER));
	LINE_NUMBER(94);
	sp[0].o = frame[4].o;
	clinit_nro_Paint(ctx);
	sp[1].o = (jobject)SF_nro_Paint_goc;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))), (((frame[0].i) + (frame[2].i)) + (jint(4))), (((frame[1].i) + (frame[3].i)) + (jint(2))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_BOTTOM_LEFT));
	LINE_NUMBER(95);
	sp[0].o = frame[4].o;
	clinit_nro_Paint(ctx);
	sp[1].o = (jobject)SF_nro_Paint_goc;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))), ((frame[0].i) + ((frame[2].i) / (jint(2)))), (frame[1].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_CENTER));
	LINE_NUMBER(96);
	sp[0].o = frame[4].o;
	clinit_nro_Paint(ctx);
	sp[1].o = (jobject)SF_nro_Paint_goc;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)))), ((frame[0].i) + ((frame[2].i) / (jint(2)))), (((frame[1].i) + (frame[3].i)) + (jint(1))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Paint_paintFrame_int_int_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:paintFrame", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Paint(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(100);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (jint(13524492)));
	LINE_NUMBER(101);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (6)), (frame[1].i), ((frame[2].i) - (12)), (frame[3].i));
	LINE_NUMBER(102);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), (frame[0].i), ((frame[1].i) + (6)), (frame[2].i), ((frame[3].i) - (12)));
	LINE_NUMBER(103);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (7)), ((frame[1].i) + (jint(1))), ((frame[2].i) - (14)), ((frame[3].i) - (jint(2))));
	LINE_NUMBER(104);
	((func_lib_mGraphics_drawRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_drawRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (jint(1))), ((frame[1].i) + (7)), ((frame[2].i) - (jint(2))), ((frame[3].i) - (14)));
	LINE_NUMBER(105);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (jint(14338484)));
	LINE_NUMBER(106);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (8)), ((frame[1].i) + (jint(2))), ((frame[2].i) - (16)), ((frame[3].i) - (jint(3))));
	LINE_NUMBER(107);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (jint(2))), ((frame[1].i) + (8)), ((frame[2].i) - (jint(3))), ((frame[3].i) - (14)));
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBorder;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), (frame[0].i), (frame[1].i), (20));
	LINE_NUMBER(109);
	sp[0].o = frame[4].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBorder;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), (jint(0)), (jint(0)), (16), (16), (jint(2)), (((frame[0].i) + (frame[2].i)) + (jint(1))), (frame[1].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_RIGHT));
	LINE_NUMBER(110);
	sp[0].o = frame[4].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBorder;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), (jint(0)), (jint(0)), (16), (16), (jint(1)), (frame[0].i), (((frame[1].i) + (frame[3].i)) + (jint(1))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_BOTTOM_HCENTER));
	LINE_NUMBER(111);
	sp[0].o = frame[4].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBorder;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))), (jint(0)), (jint(0)), (16), (16), (jint(3)), (((frame[0].i) + (frame[2].i)) + (jint(1))), (((frame[1].i) + (frame[3].i)) + (jint(1))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_BOTTOM_LEFT));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Paint_paintFrameSimple_int_int_int_int_lib_mGraphics(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:paintFrameSimple", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Paint(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(115);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (jint(6702080)));
	LINE_NUMBER(116);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(117);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[4].o), (jint(14338484)));
	LINE_NUMBER(118);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[4].o), ((frame[0].i) + (jint(1))), ((frame[1].i) + (jint(1))), ((frame[2].i) - (jint(2))), ((frame[3].i) - (jint(2))));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Paint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Paint:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Paint(ctx);
	{
	LINE_NUMBER(11);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_COLORBACKGROUND = (jint(15787715));
	LINE_NUMBER(12);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (6));
	clinit_nro_Paint(ctx);
	SF_nro_Paint_goc = sp[0].o;
	LINE_NUMBER(17);
	frame[0].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_Paint(ctx);
	sp[0].o = (jobject)SF_nro_Paint_goc;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(18);
	clinit_nro_Paint(ctx);
	sp[0].o = (jobject)SF_nro_Paint_goc;
	jint temp0 = frame[0].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dgoc"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[0].i) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(17);
	INST_IINC(0, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(21);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_hTab = (24);
	LINE_NUMBER(22);
	clinit_nro_Paint(ctx);
	SF_nro_Paint_lenCaption = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dcheck.png"_j))));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Paint[] {
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
	(void *) M_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String,
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
	{ "paintInputDlg", "(Llib/mGraphics;IIII[Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "COLORBACKGROUND", &class_int, (intptr_t) &SF_nro_Paint_COLORBACKGROUND, "I", 10 },
	{ "goc", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_nro_Paint_goc, "[Ljavax/microedition/lcdui/Image;", 10 },
	{ "hTab", &class_int, (intptr_t) &SF_nro_Paint_hTab, "I", 9 },
	{ "lenCaption", &class_int, (intptr_t) &SF_nro_Paint_lenCaption, "I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Paint, 0, "()V", 1 },
	{ "paintCmdBar", (intptr_t) SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command, 0, "(Llib/mGraphics;Lnro/Command;Lnro/Command;Lnro/Command;)V", 9 },
	{ "paintInputDlg", (intptr_t) M_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String, VTABLE_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String, "(Llib/mGraphics;IIII[Ljava/lang/String;)V", 17 },
	{ "paintPopUp", (intptr_t) SM_nro_Paint_paintPopUp_int_int_int_int_lib_mGraphics, 0, "(IIIILlib/mGraphics;)V", 9 },
	{ "paintFrame", (intptr_t) SM_nro_Paint_paintFrame_int_int_int_int_lib_mGraphics, 0, "(IIIILlib/mGraphics;)V", 9 },
	{ "paintFrameSimple", (intptr_t) SM_nro_Paint_paintFrameSimple_int_int_int_int_lib_mGraphics, 0, "(IIIILlib/mGraphics;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_Paint, 0, "()V", 8 },
};

Class class_nro_Paint{
		.nativeName = (intptr_t) "nro/Paint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Paint),
		.classVtable = (intptr_t) vtable_nro_Paint,
		.staticInitializer = (intptr_t) clinit_nro_Paint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Paint,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Paint = registerClass(&class_nro_Paint);

}

