#include "nro/InfoMe.h"
#include "nro/GameScr.h"
#include "nro/InfoItem.h"
#include "lib/mGraphics.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/StaticObj.h"
#include "java/lang/Object.h"
#include "nro/PopUpYesNo.h"
#include "nro/CrackBallScr.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "nro/InfoMe.h"
#include "nro/Info.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {


void mark_nro_InfoMe(jobject object, jint mark, jint depth) {
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
	auto self = (nro_InfoMe *) object;
	if (self->F_charId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charId)->clazz)->markFunction)((jobject) self->F_charId, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_cmdChat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdChat)->clazz)->markFunction)((jobject) self->F_cmdChat, mark, depth + 1);
}

void clinit_nro_InfoMe(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_InfoMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoMe:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoMe(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_charId = (jref) sp[1].o;
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_nro_Info(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Info);
	init_nro_Info(ctx, sp[1].o);
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(21);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isUpdate = (jint(1));
	LINE_NUMBER(27);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_charId;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_charId;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(27);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_InfoMe_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoMe:paint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_info2;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	jint temp0 = (jint)((func_nro_GameScr_isVS_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_isVS_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_info2;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_popUpYesNo;
	if (sp[0].o != nullptr) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(36);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_isPaint) == 0) goto label_2;
	}
	{
	LINE_NUMBER(37);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(ctx);
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(38);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_serverChatPopUp;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(39);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isUpdate) == 0) goto label_2;
	}
	{
	LINE_NUMBER(40);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_ischangingMap) != 0) goto label_2;
	}
	{
	LINE_NUMBER(41);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_info2;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_9:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(43);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((func_nro_Info_paint_lib_mGraphics_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_paint_lib_mGraphics_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmx), ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy), ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_dir));
	}
label_12:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_charId;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_charId;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK(sp[2].o))->F_cgender))), ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_f));
	jint temp1 = (jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmx;
	jint temp2 = ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy) + (jint(3));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_18;
	}
	INST_ICONST(0);
	goto label_19;
label_18:;
	INST_ICONST(2);
label_19:;
	clinit_nro_StaticObj(ctx);
	(sp++)->i = SF_nro_StaticObj_VCENTER_HCENTER;
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_14:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	}
label_2:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_InfoMe_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoMe:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy) == (-40)) goto label_1;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_timeW = (((jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_timeW) - (jint(1)));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	if (((jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_timeW) > 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy = (-40);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_says = (jref) (jobject(nullptr));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_timeW = (200);
	}
label_1:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_info2;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_popUpYesNo;
	if (sp[0].o != nullptr) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(76);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isUpdate) == 0) goto label_10;
	}
	{
	LINE_NUMBER(77);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy) == ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmtoY)) goto label_12;
	}
	{
	LINE_NUMBER(78);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmvy = ((((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmtoY) - ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy)) << (jint(2)));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdy = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdy) + ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmvy));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmy = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmy) + (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmdy) >> (jint(4))));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdy = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmdy) & (15));
	}
label_12:;
	{
	LINE_NUMBER(84);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmx) == ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmyLim)) goto label_17;
	}
	{
	LINE_NUMBER(85);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmdx = ((((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmyLim) - ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmx)) << (jint(2)));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoX) + ((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmdx));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmx = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmx) + (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmtoX) >> (jint(4))));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoX) & (15));
	}
label_17:;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_tF = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_tF) + (jint(1)));
	LINE_NUMBER(92);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_tF) != (jint(5))) goto label_23;
	}
	{
	LINE_NUMBER(93);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_tF = (jint(0));
	LINE_NUMBER(94);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_f) != 0) goto label_26;
	}
	{
	LINE_NUMBER(95);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_f = (jint(1));
	goto label_23;
	}
label_26:;
	{
	LINE_NUMBER(97);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_f = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (sp[0].o == nullptr) goto label_10;
	}
label_29:;
	{
	LINE_NUMBER(103);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isDone) != 0) goto label_30;
	}
	{
	LINE_NUMBER(104);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_timeDelay) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_timeDelay = (((jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_timeDelay) - (jint(1)));
	LINE_NUMBER(106);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_timeDelay) != 0) goto label_32;
	}
	{
	LINE_NUMBER(107);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTabEnemy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabEnemy])(ctx, sp[0].o);
	LINE_NUMBER(108);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_show])(ctx, sp[0].o);
	}
label_32:;
	{
	LINE_NUMBER(112);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_37;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(1))) goto label_39;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = ((((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - (20)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	}
label_39:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(-1))) goto label_41;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = ((((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) + (20)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	}
label_41:;
	{
	LINE_NUMBER(121);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmyLim) > (24)) goto label_43;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = (temp0 + (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_sayWidth) / (jint(2))));
	}
label_43:;
	{
	LINE_NUMBER(125);
	if (((jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmyLim) < ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (24))) goto label_45;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = (temp0 - (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_sayWidth) / (jint(2))));
	}
label_45:;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoY = ((((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) - (40)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_says;
	if (sp[0].o == nullptr) goto label_48;
	}
	{
	jint temp0 = (jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmtoY;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_says;
	if (temp0 >= ((((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))) * (12)) + (10))) goto label_48;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK(sp[1].o))->F_says;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoY = ((((((jarray) nullCheck(ctx, sp[1].o))->length) + (jint(1))) * (12)) + (10));
	}
label_48:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_charInfo;
	if (sp[0].o == nullptr) goto label_37;
	}
	{
	LINE_NUMBER(135);
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (50);
	jint temp1 = 155;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp0 <= (temp1 + ((jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_W))) goto label_51;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (60);
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = (temp0 - (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_W) / (jint(2))));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_H) + (10));
	goto label_37;
	}
label_51:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (20);
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = (temp0 - (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_W) / (jint(2))));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jint temp1 = 45;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoY = (temp1 + ((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_H));
	LINE_NUMBER(141);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) > (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) goto label_56;
	}
	{
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) >= (220)) goto label_37;
	}
label_56:;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (20);
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = (temp0 - (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_W) / (jint(2))));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Info *) NULL_CHECK(sp[1].o))->F_H) + (10));
	}
label_37:;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 <= (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_58;
	}
	{
	LINE_NUMBER(150);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	goto label_30;
	}
label_58:;
	{
	LINE_NUMBER(152);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	}
label_30:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (jint(1))) goto label_61;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) != 0) goto label_63;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (((jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time) + (jint(1)));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = (jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (temp0 < ((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed)) goto label_66;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_firstElement_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_nro_InfoItem, sp[0].o));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_info = (jref) (frame[1].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((func_nro_Info_getInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_getInfo])(ctx, sp[0].o);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}
label_63:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(171);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	jlong temp1 = (jlong)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_curr;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if ((longCompare((temp1 - ((jlong)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_last)), (jlong(1000ll)))) < 0) goto label_74;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount = (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) - (jint(1)));
	}
label_74:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) != 0) goto label_66;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_79;
	}
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();
label_79:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	sp[0].o = (jobject)((func_nro_MyVector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_firstElement_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_nro_InfoItem, sp[0].o));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_info = (jref) (frame[1].o);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((func_nro_Info_getInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_getInfo])(ctx, sp[0].o);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}
label_66:;
	LINE_NUMBER(188);
	goto label_10;
label_61:;
	{
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) != 0) goto label_85;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (((jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time) + (jint(1)));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = (jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (temp0 < ((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed)) goto label_88;
	}
	{
	LINE_NUMBER(192);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(1));
	}
label_88:;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = (jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (temp0 != ((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed)) goto label_90;
	}
	{
	LINE_NUMBER(196);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmtoY = (-40);
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK(temp1))->F_cdir) != (jint(1))) goto label_93;
	}
	INST_BIPUSH(-20);
	goto label_94;
label_93:;
	INST_BIPUSH(20);
label_94:;
	INST_IADD();
	sp -= 2;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = sp[1].i;
label_90:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	jint temp0 = (jint)((nro_Info *) NULL_CHECK(sp[0].o))->F_time;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (temp0 < (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_speed) + (20))) goto label_10;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_says = (jref) (jobject(nullptr));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_timeW = (200);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}
label_85:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_curr = temp0;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	jlong temp1 = (jlong)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_curr;
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if ((longCompare((temp1 - ((jlong)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_last)), (jlong(1000ll)))) < 0) goto label_101;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(211);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount = (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) - (jint(1)));
	}
label_101:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_info;
	if (((jint)((nro_InfoItem *) NULL_CHECK(sp[0].o))->F_timeCount) != 0) goto label_10;
	}
	{
	LINE_NUMBER(215);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(1));
	LINE_NUMBER(216);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmtoY = (-40);
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK(temp1))->F_cdir) != (jint(1))) goto label_107;
	}
	INST_BIPUSH(-20);
	goto label_108;
label_107:;
	INST_BIPUSH(20);
label_108:;
	{
	sp -= 3;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmyLim = (sp[1].i + sp[2].i);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_time = (jint(0));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_Info *) NULL_CHECK(sp[0].o))->F_says = (jref) (jobject(nullptr));
	LINE_NUMBER(221);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmdChat = (jref) (jobject(nullptr));
	}
label_10:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoMe:addInfoWithChar", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(234);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_playerID = ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_charID);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((func_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean])(ctx, sp[0].o, (frame[1].o), (jint(3)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(236);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(0));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_InfoMe_addInfo_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoMe:addInfo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_nro_Res_changeString_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_Info *) NULL_CHECK(sp[1].o))->F_infoWaitToShow;
	sp[1].o = (jobject)((func_nro_MyVector_lastElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_lastElement_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((nro_InfoItem *) NULL_CHECK((checkCast(ctx, &class_nro_InfoItem, sp[1].o))))->F_s;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (10)) goto label_4;
	}
	{
	LINE_NUMBER(243);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	if ((frame[3].i) >= (jint(5))) goto label_4;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(243);
	INST_IINC(3, 1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	((func_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (checkCast(ctx, &class_nro_Char, (jobject(nullptr)))), (jint(0)));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_Info *) NULL_CHECK(sp[0].o))->F_infoWaitToShow;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(250);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_cmy = (jint(0));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK(temp1))->F_cdir) != (jint(1))) goto label_13;
	}
	INST_BIPUSH(-20);
	goto label_14;
label_13:;
	INST_BIPUSH(20);
label_14:;
	INST_IADD();
	sp -= 2;
	((nro_InfoMe *) NULL_CHECK(sp[0].o))->F_cmx = sp[1].i;
label_10:;
	{
	LINE_NUMBER(254);
	((nro_InfoMe *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(0));
	}
label_3:;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_InfoMe[] {
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
	(void *) M_nro_InfoMe_paint_lib_mGraphics,
	(void *) M_nro_InfoMe_update,
	(void *) M_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean,
	(void *) M_nro_InfoMe_addInfo_java_lang_String_int,
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
	{ "paint", "(Llib/mGraphics;)V" },
	{ "update", "()V" },
	{ "addInfoWithChar", "(Ljava/lang/String;Lnro/Char;Z)V" },
	{ "addInfo", "(Ljava/lang/String;I)V" },
};

static FieldMetadata fields[] {
	{ "charId", getArrayClass(&class_int, 2), offsetof(nro_InfoMe, F_charId), "[[I", 1 },
	{ "info", &class_nro_Info, offsetof(nro_InfoMe, F_info), "Lnro/Info;", 1 },
	{ "dir", &class_int, offsetof(nro_InfoMe, F_dir), "I", 2 },
	{ "f", &class_int, offsetof(nro_InfoMe, F_f), "I", 2 },
	{ "tF", &class_int, offsetof(nro_InfoMe, F_tF), "I", 2 },
	{ "cmtoY", &class_int, offsetof(nro_InfoMe, F_cmtoY), "I", 2 },
	{ "cmy", &class_int, offsetof(nro_InfoMe, F_cmy), "I", 1 },
	{ "cmdy", &class_int, offsetof(nro_InfoMe, F_cmdy), "I", 2 },
	{ "cmvy", &class_int, offsetof(nro_InfoMe, F_cmvy), "I", 2 },
	{ "cmyLim", &class_int, offsetof(nro_InfoMe, F_cmyLim), "I", 2 },
	{ "cmx", &class_int, offsetof(nro_InfoMe, F_cmx), "I", 1 },
	{ "cmtoX", &class_int, offsetof(nro_InfoMe, F_cmtoX), "I", 2 },
	{ "cmdx", &class_int, offsetof(nro_InfoMe, F_cmdx), "I", 2 },
	{ "isDone", &class_boolean, offsetof(nro_InfoMe, F_isDone), "Z", 1 },
	{ "isUpdate", &class_boolean, offsetof(nro_InfoMe, F_isUpdate), "Z", 1 },
	{ "timeDelay", &class_int, offsetof(nro_InfoMe, F_timeDelay), "I", 1 },
	{ "playerID", &class_int, offsetof(nro_InfoMe, F_playerID), "I", 1 },
	{ "cmdChat", &class_nro_Command, offsetof(nro_InfoMe, F_cmdChat), "Lnro/Command;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_InfoMe, 0, "()V", 1 },
	{ "paint", (intptr_t) M_nro_InfoMe_paint_lib_mGraphics, VTABLE_nro_InfoMe_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_InfoMe_update, VTABLE_nro_InfoMe_update, "()V", 17 },
	{ "addInfoWithChar", (intptr_t) M_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean, VTABLE_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean, "(Ljava/lang/String;Lnro/Char;Z)V", 17 },
	{ "addInfo", (intptr_t) M_nro_InfoMe_addInfo_java_lang_String_int, VTABLE_nro_InfoMe_addInfo_java_lang_String_int, "(Ljava/lang/String;I)V", 17 },
};

Class class_nro_InfoMe{
		.nativeName = (intptr_t) "nro/InfoMe",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_InfoMe),
		.classVtable = (intptr_t) vtable_nro_InfoMe,
		.staticInitializer = (intptr_t) clinit_nro_InfoMe,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_InfoMe,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_InfoMe = registerClass(&class_nro_InfoMe);

}

