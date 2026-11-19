#include "nro/Teleport.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "main/GameCanvas.h"
#include "nro/SmallImage.h"
#include "nro/ServerEffect.h"
#include "nro/Effect.h"
#include "nro/StaticObj.h"
#include "java/lang/Object.h"
#include "nro/Teleport.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/InfoMe.h"
#include "nro/PartImage.h"
#include "lib/sound/SoundMn.h"
#include "nro/Controller.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "nro/TileMap.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Teleport_vTeleport;
jobject SF_nro_Teleport_maybay;
jobject SF_nro_Teleport_hole;

void mark_nro_Teleport(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Teleport_vTeleport)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Teleport_vTeleport)->clazz)->markFunction)((jobject) SF_nro_Teleport_vTeleport, mark, depth + 1);
		if (SF_nro_Teleport_maybay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Teleport_maybay)->clazz)->markFunction)((jobject) SF_nro_Teleport_maybay, mark, depth + 1);
		if (SF_nro_Teleport_hole)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Teleport_hole)->clazz)->markFunction)((jobject) SF_nro_Teleport_hole, mark, depth + 1);
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
	auto self = (nro_Teleport *) object;
}

void init_nro_Teleport_int_int_int_int_int_boolean_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Teleport:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Teleport(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_createShip = (jint(0));
	LINE_NUMBER(29);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_vy = (jint(1));
	LINE_NUMBER(36);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(37);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y = (jint(5));
	LINE_NUMBER(38);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2 = (frame[2].i);
	LINE_NUMBER(39);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TELEPORT x= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" y= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" type= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(40);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_headId = (frame[3].i);
	LINE_NUMBER(41);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type = (frame[5].i);
	LINE_NUMBER(42);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe = (frame[6].i);
	LINE_NUMBER(43);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir = (frame[4].i);
	LINE_NUMBER(44);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet = (frame[7].i);
	LINE_NUMBER(45);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare = (jint(0));
	LINE_NUMBER(46);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(48);
	if ((frame[2].i) >= (100)) goto label_15;
	}
	{
	LINE_NUMBER(49);
	INST_IINC(2, 1);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y2 = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y2) + (12));
	LINE_NUMBER(51);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (frame[1].i), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2), (jint(2)));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(52);
	if ((((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) % (24)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y2 = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y2) - (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) % (24)));
	goto label_15;
	}
label_15:;
	{
	LINE_NUMBER(59);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Y2= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"--------------------------------------------------------------"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(60);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isDown = (jint(1));
	LINE_NUMBER(61);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isUp = (jint(0));
	LINE_NUMBER(62);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) <= (jint(2))) goto label_24;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y2 = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y2) + (jint(4)));
	LINE_NUMBER(64);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)))) != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(65);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	jint temp0 = jint(3);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmaybay4a.png"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_27:;
	{
	LINE_NUMBER(68);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(4)))) != nullptr) goto label_29;
	}
	{
	LINE_NUMBER(69);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	jint temp0 = jint(4);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmaybay4b.png"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_29:;
	{
	LINE_NUMBER(72);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_hole;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/hole.png"_j))));
	clinit_nro_Teleport(ctx);
	SF_nro_Teleport_hole = sp[0].o;
	goto label_31;
	}
label_24:;
	{
	LINE_NUMBER(75);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))) != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(76);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	jint temp0 = frame[7].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmaybay"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[7].i) + (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_31:;
	{
	LINE_NUMBER(79);
	if ((frame[1].i) <= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_34;
	}
	{
	if ((frame[1].i) >= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_34;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) <= (100)) goto label_34;
	}
	{
	LINE_NUMBER(80);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_createShip = (jint(1));
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_airShip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_airShip])(ctx, sp[0].o);
	}
label_34:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Teleport_addTeleport_nro_Teleport(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Teleport:addTeleport", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Teleport(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_vTeleport;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Teleport_paintHole_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Teleport:paintHole", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) <= (jint(2))) goto label_1;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tHole) == 0) goto label_1;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	clinit_nro_Teleport(ctx);
	sp[1].o = (jobject)SF_nro_Teleport_hole;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) + (20)), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	}
label_1:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Teleport_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Teleport:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_1;
	}
	{
	LINE_NUMBER(100);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_headId)));
	LINE_NUMBER(101);
	frame[3].i = (jint(0));
	LINE_NUMBER(102);
	frame[4].i = (jint(0));
	LINE_NUMBER(103);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) != 0) goto label_7;
	}
	{
	LINE_NUMBER(104);
	frame[3].i = (15);
	LINE_NUMBER(105);
	frame[4].i = (40);
	}
label_7:;
	{
	LINE_NUMBER(108);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(109);
	frame[3].i = (7);
	LINE_NUMBER(110);
	frame[4].i = (55);
	}
label_10:;
	{
	LINE_NUMBER(113);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) != (jint(2))) goto label_13;
	}
	{
	LINE_NUMBER(114);
	frame[3].i = (18);
	LINE_NUMBER(115);
	frame[4].i = (52);
	}
label_13:;
	{
	LINE_NUMBER(118);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_painHead) == 0) goto label_16;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) >= (jint(3))) goto label_16;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[2].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = (jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_18;
	}
	INST_ILOAD(3);
	goto label_19;
label_18:;
	INST_ILOAD(3);
	INST_INEG();
label_19:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - (frame[4].i);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_20;
	}
	INST_ICONST(0);
	goto label_21;
label_20:;
	INST_ICONST(2);
label_21:;
	clinit_nro_StaticObj(ctx);
	(sp++)->i = SF_nro_StaticObj_TOP_CENTER;
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_16:;
	{
	LINE_NUMBER(122);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) >= (jint(3))) goto label_22;
	}
	{
	LINE_NUMBER(123);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	clinit_nro_Teleport(ctx);
	sp[1].o = (jobject)SF_nro_Teleport_maybay;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet));
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet))));
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet))));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_25;
	}
	INST_ICONST(2);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 7;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	goto label_1;
	}
label_22:;
	{
	LINE_NUMBER(126);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isDown) == 0) goto label_27;
	}
	{
	LINE_NUMBER(127);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) <= (10)) goto label_29;
	}
	{
	LINE_NUMBER(128);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(4)))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = frame[1].o;
	clinit_nro_Teleport(ctx);
	sp[1].o = (jobject)SF_nro_Teleport_maybay;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(4)))));
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(4)))));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_32;
	}
	INST_ICONST(2);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_34;
	}
	{
	jint temp0 = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) - (11);
	sp[0].i = temp0;
	sp += 1;
	goto label_35;
	}
label_34:;
	{
	jint temp0 = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) + (11);
	sp[0].i = temp0;
	sp += 1;
	}
label_35:;
	{
	sp -= 8;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) + (jint(2))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	goto label_1;
	}
label_29:;
	{
	LINE_NUMBER(132);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	clinit_nro_Teleport(ctx);
	sp[1].o = (jobject)SF_nro_Teleport_maybay;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)));
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)))));
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)))));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_37;
	}
	INST_ICONST(2);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 7;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	goto label_1;
	}
label_27:;
	{
	LINE_NUMBER(136);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) >= (20)) goto label_39;
	}
	{
	LINE_NUMBER(137);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(4)))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	clinit_nro_Teleport(ctx);
	sp[1].o = (jobject)SF_nro_Teleport_maybay;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(4)))));
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(4)))));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_42;
	}
	INST_ICONST(2);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_44;
	}
	{
	jint temp0 = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) - (11);
	sp[0].i = temp0;
	sp += 1;
	goto label_45;
	}
label_44:;
	{
	jint temp0 = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) + (11);
	sp[0].i = temp0;
	sp += 1;
	}
label_45:;
	{
	sp -= 8;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) + (jint(2))), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	goto label_1;
	}
label_39:;
	{
	LINE_NUMBER(141);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_maybay;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = frame[1].o;
	clinit_nro_Teleport(ctx);
	sp[1].o = (jobject)SF_nro_Teleport_maybay;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)));
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)))));
	clinit_nro_Teleport(ctx);
	sp[2].o = (jobject)SF_nro_Teleport_maybay;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)))));
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_47;
	}
	INST_ICONST(2);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 7;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_LEFT));
	}
label_1:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Teleport_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Teleport:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) <= (jint(2))) goto label_1;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) == (-80)) goto label_1;
	}
	{
	LINE_NUMBER(151);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isDown) == 0) goto label_3;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) != 0) goto label_3;
	}
	{
	LINE_NUMBER(152);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(153);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int_int(ctx, (jint(1)), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y), (jint(1)), (jint(0)));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(155);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isUp) == 0) goto label_1;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(156);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int_int(ctx, (jint(1)), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) + (16)), (jint(1)), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tFire = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tFire) + (jint(1)));
	LINE_NUMBER(161);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tFire) <= (jint(3))) goto label_8;
	}
	{
	LINE_NUMBER(162);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tFire = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(166);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isDown) == 0) goto label_10;
	}
	{
	LINE_NUMBER(167);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire = (jint(1));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) == 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_painHead = sp[1].i;
	LINE_NUMBER(169);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) >= (jint(3))) goto label_16;
	}
	{
	LINE_NUMBER(170);
	jint temp0 = (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) - ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y)) >> (jint(3));
	frame[1].i = temp0;
	if (temp0 > 0) goto label_19;
	}
	{
	LINE_NUMBER(171);
	frame[1].i = (jint(1));
	LINE_NUMBER(172);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y) + (frame[1].i));
	goto label_22;
	}
label_16:;
	{
	LINE_NUMBER(177);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_23;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_vy = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_vy) + (jint(1)));
	}
label_23:;
	{
	LINE_NUMBER(181);
	if ((((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) - ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y)) >= ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_vy)) goto label_25;
	}
	{
	LINE_NUMBER(182);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2);
	LINE_NUMBER(183);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire = (jint(0));
	goto label_22;
	}
label_25:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_vy));
	}
label_22:;
	{
	LINE_NUMBER(189);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_28;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_28;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport) == 0) goto label_28;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(191);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - (30));
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe = (jint(4));
	LINE_NUMBER(193);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW2));
	LINE_NUMBER(194);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoY = ((((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23)) - (jint(1)));
	LINE_NUMBER(195);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) != 0) goto label_35;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_35;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport) == 0) goto label_35;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(200);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - (30));
	LINE_NUMBER(201);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe = (jint(4));
	}
label_35:;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2)));
	if (temp0 >= (50)) goto label_39;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y), (jint(2)));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(205);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tHole = (jint(1));
	LINE_NUMBER(206);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) >= (jint(3))) goto label_42;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	LINE_NUMBER(208);
	if ((((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) % (24)) == 0) goto label_45;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y) - (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) % (24)));
	}
label_45:;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tPrepare = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tPrepare) + (jint(1)));
	LINE_NUMBER(213);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) <= (10)) goto label_48;
	}
	{
	LINE_NUMBER(214);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare = (jint(0));
	LINE_NUMBER(215);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isDown = (jint(0));
	LINE_NUMBER(216);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isUp = (jint(1));
	LINE_NUMBER(217);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire = (jint(0));
	}
label_48:;
	{
	LINE_NUMBER(220);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_39;
	}
	{
	LINE_NUMBER(221);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_54;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(0));
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(0));
	}
label_56:;
	{
	LINE_NUMBER(227);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_painHead = (jint(0));
	goto label_39;
	}
label_42:;
	{
	LINE_NUMBER(230);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2);
	LINE_NUMBER(231);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isShock) != 0) goto label_59;
	}
	{
	LINE_NUMBER(232);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int_int(ctx, (92), (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) + (jint(4))), (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) + (14)), (jint(1)), (jint(0)));
	LINE_NUMBER(233);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (10);
	LINE_NUMBER(234);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isShock = (jint(1));
	}
label_59:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tPrepare = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tPrepare) + (jint(1)));
	LINE_NUMBER(238);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) <= (30)) goto label_64;
	}
	{
	LINE_NUMBER(239);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare = (jint(0));
	LINE_NUMBER(240);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isDown = (jint(0));
	LINE_NUMBER(241);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isUp = (jint(1));
	LINE_NUMBER(242);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire = (jint(0));
	}
label_64:;
	{
	LINE_NUMBER(245);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_39;
	}
	{
	LINE_NUMBER(246);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_70;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(0));
	goto label_72;
	}
label_70:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (sp[0].o == nullptr) goto label_72;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(0));
	}
label_72:;
	{
	LINE_NUMBER(252);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_painHead = (jint(0));
	goto label_39;
	}
label_10:;
	{
	LINE_NUMBER(256);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isUp) == 0) goto label_39;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tPrepare = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tPrepare) + (jint(1)));
	LINE_NUMBER(258);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) <= (30)) goto label_76;
	}
	{
	LINE_NUMBER(259);
	jint temp0 = ((((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) + (24)) - ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y)) >> (jint(3));
	frame[1].i = temp0;
	if (temp0 <= (30)) goto label_79;
	}
	{
	LINE_NUMBER(260);
	frame[1].i = (30);
	}
label_79:;
	{
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_y) - (frame[1].i));
	LINE_NUMBER(264);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire = (jint(1));
	goto label_82;
	}
label_76:;
	{
	LINE_NUMBER(266);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) != (14)) goto label_83;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_createShip) == 0) goto label_83;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	}
label_83:;
	{
	LINE_NUMBER(270);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) <= 0) goto label_85;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_85;
	}
	{
	LINE_NUMBER(271);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_87;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(0));
	LINE_NUMBER(273);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_90;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe = (jint(3));
	}
label_90:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (-3);
	goto label_92;
	}
label_87:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (sp[0].o == nullptr) goto label_92;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(0));
	LINE_NUMBER(280);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_95;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe = (jint(3));
	}
label_95:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (-3);
	}
label_92:;
	{
	LINE_NUMBER(287);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_painHead = (jint(0));
	}
label_85:;
	{
	LINE_NUMBER(290);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tPrepare) <= (12)) goto label_82;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_82;
	}
	{
	LINE_NUMBER(291);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_98;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(1));
	goto label_100;
	}
label_98:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (sp[0].o == nullptr) goto label_100;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(295);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(296);
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isTeleport = (jint(1));
	}
label_100:;
	{
	LINE_NUMBER(299);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_painHead = (jint(1));
	}
label_82:;
	{
	LINE_NUMBER(303);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_104;
	}
	{
	LINE_NUMBER(304);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_106;
	}
	{
	LINE_NUMBER(305);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW2));
	LINE_NUMBER(306);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoY = ((((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23)) - (jint(1)));
	}
label_106:;
	{
	LINE_NUMBER(309);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != (jint(1))) goto label_104;
	}
	{
	LINE_NUMBER(310);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_isUpdate = (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(314);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) > (-80)) goto label_39;
	}
	{
	LINE_NUMBER(315);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) == 0) goto label_111;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_111;
	}
	{
	LINE_NUMBER(316);
	clinit_nro_Controller(ctx);
	SF_nro_Controller_isStopReadMessage = (jint(0));
	LINE_NUMBER(317);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	}
label_111:;
	{
	LINE_NUMBER(320);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_isMe) != 0) goto label_114;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	if (sp[0].o == nullptr) goto label_114;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_type) != 0) goto label_114;
	}
	{
	LINE_NUMBER(321);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_id));
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_114:;
	{
	LINE_NUMBER(324);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) >= (jint(3))) goto label_116;
	}
	{
	LINE_NUMBER(325);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_vTeleport;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	goto label_39;
	}
label_116:;
	{
	LINE_NUMBER(327);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y = (-80);
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tDelayHole = (((jint)((nro_Teleport *) NULL_CHECK(sp[0].o))->F_tDelayHole) + (jint(1)));
	LINE_NUMBER(329);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tDelayHole) <= (80)) goto label_39;
	}
	{
	LINE_NUMBER(330);
	((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_tDelayHole = (jint(0));
	LINE_NUMBER(331);
	clinit_nro_Teleport(ctx);
	sp[0].o = (jobject)SF_nro_Teleport_vTeleport;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_39:;
	{
	LINE_NUMBER(337);
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_paintFire) == 0) goto label_122;
	}
	{
	if (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_planet) >= (jint(3))) goto label_122;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2)));
	if (temp0 > (50)) goto label_122;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_122;
	}
	{
	LINE_NUMBER(338);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (19), ((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Teleport *) NULL_CHECK((frame[0].o)))->F_y2) + (20)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_122:;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_Teleport(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Teleport:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Teleport(ctx);
	{
	LINE_NUMBER(11);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vTeleport"_j))));
	clinit_nro_Teleport(ctx);
	SF_nro_Teleport_vTeleport = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(5)));
	clinit_nro_Teleport(ctx);
	SF_nro_Teleport_maybay = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Teleport[] {
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
	(void *) M_nro_Teleport_paintHole_lib_mGraphics,
	(void *) M_nro_Teleport_paint_lib_mGraphics,
	(void *) M_nro_Teleport_update,
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
	{ "paintHole", "(Llib/mGraphics;)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "update", "()V" },
};

static FieldMetadata fields[] {
	{ "vTeleport", &class_nro_MyVector, (intptr_t) &SF_nro_Teleport_vTeleport, "Lnro/MyVector;", 9 },
	{ "x", &class_int, offsetof(nro_Teleport, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_Teleport, F_y), "I", 1 },
	{ "headId", &class_int, offsetof(nro_Teleport, F_headId), "I", 2 },
	{ "type", &class_int, offsetof(nro_Teleport, F_type), "I", 2 },
	{ "isMe", &class_boolean, offsetof(nro_Teleport, F_isMe), "Z", 2 },
	{ "y2", &class_int, offsetof(nro_Teleport, F_y2), "I", 2 },
	{ "id", &class_int, offsetof(nro_Teleport, F_id), "I", 1 },
	{ "dir", &class_int, offsetof(nro_Teleport, F_dir), "I", 2 },
	{ "planet", &class_int, offsetof(nro_Teleport, F_planet), "I", 2 },
	{ "maybay", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_nro_Teleport_maybay, "[Ljavax/microedition/lcdui/Image;", 10 },
	{ "hole", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Teleport_hole, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "isUp", &class_boolean, offsetof(nro_Teleport, F_isUp), "Z", 2 },
	{ "isDown", &class_boolean, offsetof(nro_Teleport, F_isDown), "Z", 2 },
	{ "createShip", &class_boolean, offsetof(nro_Teleport, F_createShip), "Z", 2 },
	{ "paintFire", &class_boolean, offsetof(nro_Teleport, F_paintFire), "Z", 1 },
	{ "painHead", &class_boolean, offsetof(nro_Teleport, F_painHead), "Z", 2 },
	{ "tPrepare", &class_int, offsetof(nro_Teleport, F_tPrepare), "I", 2 },
	{ "vy", &class_int, offsetof(nro_Teleport, F_vy), "I", 2 },
	{ "tFire", &class_int, offsetof(nro_Teleport, F_tFire), "I", 2 },
	{ "tDelayHole", &class_int, offsetof(nro_Teleport, F_tDelayHole), "I", 2 },
	{ "tHole", &class_boolean, offsetof(nro_Teleport, F_tHole), "Z", 2 },
	{ "isShock", &class_boolean, offsetof(nro_Teleport, F_isShock), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Teleport_int_int_int_int_int_boolean_int, 0, "(IIIIIZI)V", 1 },
	{ "addTeleport", (intptr_t) SM_nro_Teleport_addTeleport_nro_Teleport, 0, "(Lnro/Teleport;)V", 9 },
	{ "paintHole", (intptr_t) M_nro_Teleport_paintHole_lib_mGraphics, VTABLE_nro_Teleport_paintHole_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "paint", (intptr_t) M_nro_Teleport_paint_lib_mGraphics, VTABLE_nro_Teleport_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_Teleport_update, VTABLE_nro_Teleport_update, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Teleport, 0, "()V", 8 },
};

Class class_nro_Teleport{
		.nativeName = (intptr_t) "nro/Teleport",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Teleport),
		.classVtable = (intptr_t) vtable_nro_Teleport,
		.staticInitializer = (intptr_t) clinit_nro_Teleport,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Teleport,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Teleport = registerClass(&class_nro_Teleport);

}

