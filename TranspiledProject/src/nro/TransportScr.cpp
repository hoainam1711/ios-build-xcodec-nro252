#include "nro/TransportScr.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "nro/Controller.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "nro/TransportScr.h"
#include "nro/Char.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_TransportScr_instance;
jobject SF_nro_TransportScr_ship;
jobject SF_nro_TransportScr_taungam;

void mark_nro_TransportScr(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_TransportScr_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TransportScr_instance)->clazz)->markFunction)((jobject) SF_nro_TransportScr_instance, mark, depth + 1);
		if (SF_nro_TransportScr_ship)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TransportScr_ship)->clazz)->markFunction)((jobject) SF_nro_TransportScr_ship, mark, depth + 1);
		if (SF_nro_TransportScr_taungam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TransportScr_taungam)->clazz)->markFunction)((jobject) SF_nro_TransportScr_taungam, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_mScreen(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_TransportScr *) object;
	if (self->F_posX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_posX)->clazz)->markFunction)((jobject) self->F_posX, mark, depth + 1);
	if (self->F_posY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_posY)->clazz)->markFunction)((jobject) self->F_posY, mark, depth + 1);
	if (self->F_posX2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_posX2)->clazz)->markFunction)((jobject) self->F_posX2, mark, depth + 1);
	if (self->F_posY2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_posY2)->clazz)->markFunction)((jobject) self->F_posY2, mark, depth + 1);
}

void init_nro_TransportScr(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TransportScr(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_nro_mScreen(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_speed = (jint(5));
	LINE_NUMBER(20);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n = (20);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n));
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_posX = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n));
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_posY = (jref) sp[1].o;
	LINE_NUMBER(34);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	if ((frame[1].i) >= ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)) goto label_7;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(36);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((frame[1].i) * ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)));
	LINE_NUMBER(34);
	INST_IINC(1, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n));
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_posX2 = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n));
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_posY2 = (jref) sp[1].o;
	LINE_NUMBER(42);
	frame[1].i = (jint(0));
	}
label_13:;
	{
	if ((frame[1].i) >= ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)) goto label_14;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX2;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posY2;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = ((frame[1].i) * ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)));
	LINE_NUMBER(42);
	INST_IINC(1, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_TransportScr_gI_R_nro_TransportScr(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TransportScr(ctx);
	{
	LINE_NUMBER(50);
	clinit_nro_TransportScr(ctx);
	sp[0].o = (jobject)SF_nro_TransportScr_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(51);
	clinit_nro_TransportScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_TransportScr);
	init_nro_TransportScr(ctx, sp[0].o);
	clinit_nro_TransportScr(ctx);
	SF_nro_TransportScr_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(54);
	clinit_nro_TransportScr(ctx);
	sp[0].o = (jobject)SF_nro_TransportScr_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_nro_TransportScr_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:switchToMe", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	clinit_nro_TransportScr(ctx);
	sp[0].o = (jobject)SF_nro_TransportScr_ship;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_TransportScr(ctx);
	sp[0].o = (jobject)SF_nro_TransportScr_ship;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dfutherShip.png"_j))));
	clinit_nro_TransportScr(ctx);
	SF_nro_TransportScr_ship = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(61);
	clinit_nro_TransportScr(ctx);
	sp[0].o = (jobject)SF_nro_TransportScr_taungam;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_nro_TransportScr(ctx);
	sp[0].o = (jobject)SF_nro_TransportScr_taungam;
	sp[0].o = (jobject)((javax_microedition_lcdui_Image *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/taungam.png"_j))));
	clinit_nro_TransportScr(ctx);
	SF_nro_TransportScr_taungam = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(64);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed = (jint(0));
	LINE_NUMBER(65);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_transNow = (jint(0));
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((func_nro_Char_checkLuong_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_checkLuong_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_7;
	}
	{
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_7;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_remain;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (jint(1)), (jobject(nullptr)));
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(69);
	((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center = (jref) (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(72);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_currSpeed = (jint(0));
	LINE_NUMBER(73);
	M_nro_mScreen_switchToMe(ctx, (frame[0].o));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TransportScr_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:paint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	(sp++)->i = jint(3056895);
label_2:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(78);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(81);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)) goto label_6;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_8;
	}
	(sp++)->i = jint(14802654);
	goto label_9;
label_8:;
	(sp++)->i = jint(11140863);
label_9:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(83);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posY;
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))), (10), (jint(2)));
	LINE_NUMBER(81);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(86);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_12;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = frame[1].o;
	clinit_nro_TransportScr(ctx);
	sp[1].o = (jobject)SF_nro_TransportScr_ship;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (72), (95), (jint(5)), (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx) + ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_currSpeed)), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))), (jint(3)));
	}
label_12:;
	{
	LINE_NUMBER(90);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[1].o;
	clinit_nro_TransportScr(ctx);
	sp[1].o = (jobject)SF_nro_TransportScr_taungam;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (144), (79), (jint(2)), (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx) + ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_currSpeed)), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) / (jint(2))), (jint(3)));
	}
label_14:;
	{
	LINE_NUMBER(94);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	if ((frame[2].i) >= ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)) goto label_17;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_19;
	}
	(sp++)->i = jint(14935011);
	goto label_20;
label_19:;
	(sp++)->i = jint(7536127);
label_20:;
	{
	sp -= 2;
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(96);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX2;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posY2;
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))), (18), (jint(3)));
	LINE_NUMBER(94);
	INST_IINC(2, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(99);
	M_nro_mScreen_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TransportScr_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed) != 0) goto label_3;
	}
	{
	LINE_NUMBER(105);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_currSpeed = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) * ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_time)) / ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_maxTime));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_currSpeed = (((jint)((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_currSpeed) + (jint(2)));
	}
label_3:;
	{
	LINE_NUMBER(111);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isStopReadMessage = (jint(0));
	LINE_NUMBER(112);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx = ((((((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx)) / (jint(2))) + ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx)) / (jint(2))) + ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx)) / (jint(2)));
	LINE_NUMBER(113);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(114);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_cmx = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(119);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	if ((frame[2].i) >= ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)) goto label_10;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX;
	frame[1].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_speed) / (jint(2))));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) >= (-20)) goto label_14;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	}
label_14:;
	{
	LINE_NUMBER(119);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(127);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	if ((frame[2].i) >= ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_n)) goto label_17;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX2;
	frame[1].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - ((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_speed));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX2;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) >= (-20)) goto label_21;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_posX2;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w);
	}
label_21:;
	{
	LINE_NUMBER(127);
	INST_IINC(2, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(135);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_23;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_speed;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed) == 0) goto label_25;
	}
	INST_ICONST(2);
	goto label_26;
label_25:;
	INST_ICONST(1);
label_26:;
	INST_IADD();
	sp -= 2;
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_speed = sp[1].i;
label_23:;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_speed;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed) == 0) goto label_27;
	}
	INST_BIPUSH(80);
	goto label_28;
label_27:;
	INST_BIPUSH(25);
label_28:;
	sp -= 2; if (sp[0].i <= sp[1].i) goto label_29;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed) == 0) goto label_31;
	}
	INST_BIPUSH(80);
	goto label_32;
label_31:;
	INST_BIPUSH(25);
label_32:;
	sp -= 2;
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_speed = sp[1].i;
label_29:;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(144);
	if ((longCompare((((jlong)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_curr) - ((jlong)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_34;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_time = (jshort((((jint)((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_time) + (jint(1)))));
	LINE_NUMBER(146);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_last = ((jlong)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_curr);
	}
label_34:;
	{
	LINE_NUMBER(149);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed) == 0) goto label_37;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_currSpeed = (((jint)((nro_TransportScr *) NULL_CHECK(sp[0].o))->F_currSpeed) + (jint(3)));
	}
label_37:;
	{
	LINE_NUMBER(153);
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_currSpeed) < (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (30))) goto label_39;
	}
	{
	if (((jint)((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_transNow) != 0) goto label_39;
	}
	{
	LINE_NUMBER(154);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_transNow = (jint(1));
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_transportNow) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_transportNow])(ctx, sp[0].o);
	}
label_39:;
	{
	LINE_NUMBER(158);
	M_nro_mScreen_update(ctx, (frame[0].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TransportScr_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:updateKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	M_nro_mScreen_updateKey(ctx, (frame[0].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_TransportScr_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:perform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(166);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(167);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_fastQuestion;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_YES;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (jint(2)), (jobject(nullptr)));
	clinit_nro_Command(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[3].o = (jobject)SF_nro_mResources_NO;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[2].o, sp[3].o, (frame[0].o), (jint(3)), (jobject(nullptr)));
	SM_main_GameCanvas_startYesNoDlg_java_lang_String_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(170);
	if ((frame[1].i) != (jint(2))) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((func_nro_Char_checkLuong_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_checkLuong_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(171);
	((nro_TransportScr *) NULL_CHECK((frame[0].o)))->F_isSpeed = (jint(1));
	LINE_NUMBER(172);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(173);
	((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(176);
	if ((frame[1].i) != (jint(3))) goto label_7;
	}
	LINE_NUMBER(177);
	SM_main_GameCanvas_endDlg(ctx);
label_7:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_TransportScr(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_mScreen(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TransportScr:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TransportScr(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dfutherShip.png"_j))));
	clinit_nro_TransportScr(ctx);
	SF_nro_TransportScr_ship = sp[0].o;
	LINE_NUMBER(12);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/taungam.png"_j))));
	clinit_nro_TransportScr(ctx);
	SF_nro_TransportScr_taungam = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_TransportScr[] {
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
	(void *) M_nro_TransportScr_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_TransportScr_update,
	(void *) M_nro_TransportScr_updateKey,
	(void *) M_nro_TransportScr_paint_lib_mGraphics,
	(void *) M_nro_TransportScr_perform_int_java_lang_Object,
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
	{ "switchToMe", "()V" },
	{ "keyPress", "(I)V" },
	{ "update", "()V" },
	{ "updateKey", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "perform", "(ILjava/lang/Object;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "instance", &class_nro_TransportScr, (intptr_t) &SF_nro_TransportScr_instance, "Lnro/TransportScr;", 10 },
	{ "ship", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TransportScr_ship, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "taungam", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TransportScr_taungam, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "type", &class_byte, offsetof(nro_TransportScr, F_type), "B", 1 },
	{ "speed", &class_int, offsetof(nro_TransportScr, F_speed), "I", 2 },
	{ "posX", getArrayClass(&class_int, 1), offsetof(nro_TransportScr, F_posX), "[I", 2 },
	{ "posY", getArrayClass(&class_int, 1), offsetof(nro_TransportScr, F_posY), "[I", 2 },
	{ "posX2", getArrayClass(&class_int, 1), offsetof(nro_TransportScr, F_posX2), "[I", 2 },
	{ "posY2", getArrayClass(&class_int, 1), offsetof(nro_TransportScr, F_posY2), "[I", 2 },
	{ "cmx", &class_int, offsetof(nro_TransportScr, F_cmx), "I", 2 },
	{ "n", &class_int, offsetof(nro_TransportScr, F_n), "I", 2 },
	{ "time", &class_short, offsetof(nro_TransportScr, F_time), "S", 1 },
	{ "maxTime", &class_short, offsetof(nro_TransportScr, F_maxTime), "S", 1 },
	{ "last", &class_long, offsetof(nro_TransportScr, F_last), "J", 1 },
	{ "curr", &class_long, offsetof(nro_TransportScr, F_curr), "J", 1 },
	{ "isSpeed", &class_boolean, offsetof(nro_TransportScr, F_isSpeed), "Z", 2 },
	{ "transNow", &class_boolean, offsetof(nro_TransportScr, F_transNow), "Z", 2 },
	{ "currSpeed", &class_int, offsetof(nro_TransportScr, F_currSpeed), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_TransportScr, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_TransportScr_gI_R_nro_TransportScr, 0, "()Lnro/TransportScr;", 9 },
	{ "switchToMe", (intptr_t) M_nro_TransportScr_switchToMe, VTABLE_nro_TransportScr_switchToMe, "()V", 17 },
	{ "paint", (intptr_t) M_nro_TransportScr_paint_lib_mGraphics, VTABLE_nro_TransportScr_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_TransportScr_update, VTABLE_nro_TransportScr_update, "()V", 17 },
	{ "updateKey", (intptr_t) M_nro_TransportScr_updateKey, VTABLE_nro_TransportScr_updateKey, "()V", 17 },
	{ "perform", (intptr_t) M_nro_TransportScr_perform_int_java_lang_Object, VTABLE_nro_TransportScr_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_TransportScr, 0, "()V", 8 },
};

Class class_nro_TransportScr{
		.nativeName = (intptr_t) "nro/TransportScr",
		.parentClass = (intptr_t) &class_nro_mScreen,
		.size = sizeof(nro_TransportScr),
		.classVtable = (intptr_t) vtable_nro_TransportScr,
		.staticInitializer = (intptr_t) clinit_nro_TransportScr,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_TransportScr,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_TransportScr = registerClass(&class_nro_TransportScr);

}

