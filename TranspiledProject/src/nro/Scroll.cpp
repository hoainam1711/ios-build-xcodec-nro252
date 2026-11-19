#include "nro/Scroll.h"
#include "java/lang/Object.h"
#include "nro/Res.h"
#include "main/GameCanvas.h"
#include "nro/ScrollResult.h"
#include "nro/Scroll.h"

extern "C" {


void mark_nro_Scroll(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Scroll *) object;
	if (self->F_pointerDownLastX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerDownLastX)->clazz)->markFunction)((jobject) self->F_pointerDownLastX, mark, depth + 1);
}

void clinit_nro_Scroll(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Scroll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Scroll:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Scroll(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_pointerDownLastX = (jref) sp[1].o;
	LINE_NUMBER(29);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_styleUPDOWN = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_Scroll_updateKey_R_nro_ScrollResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Scroll:updateKey", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_styleUPDOWN) == 0) goto label_1;
	}
	{
	LINE_NUMBER(40);
	frame[8].i = (jint(0));
	LINE_NUMBER(41);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(42);
	frame[3].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_xPos);
	LINE_NUMBER(43);
	frame[4].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_yPos);
	LINE_NUMBER(44);
	frame[5].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(45);
	frame[6].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(46);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_9;
	}
	{
	LINE_NUMBER(47);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(48);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(48);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(52);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownFirstX = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(53);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning = (jint(1));
	LINE_NUMBER(54);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem = (jint(-1));
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun) == 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 2;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_isDownWhenRunning = sp[1].i;
	LINE_NUMBER(56);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun = (jint(0));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(57);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) == 0) goto label_9;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_pointerDownTime = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_pointerDownTime) + (jint(1)));
	LINE_NUMBER(59);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownTime) <= (jint(5))) goto label_25;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX) != (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py)) goto label_25;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_25;
	}
	{
	LINE_NUMBER(60);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(61);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_w) <= (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(62);
	frame[5].i = (((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py)) - (frame[4].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE));
	LINE_NUMBER(63);
	frame[2].i = (((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) - (frame[3].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE));
	LINE_NUMBER(64);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem = (((frame[5].i) * ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_w)) + (frame[2].i));
	goto label_25;
	}
label_28:;
	{
	LINE_NUMBER(66);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem = (((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py)) - (frame[4].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE));
	}
label_25:;
	{
	LINE_NUMBER(70);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_py;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	frame[5].i = temp1;
	if (temp1 == 0) goto label_32;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem) == (jint(-1))) goto label_32;
	}
	{
	LINE_NUMBER(71);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem = (jint(-1));
	}
label_32:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_34:;
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_35;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[2].i) - (jint(1)))));
	LINE_NUMBER(74);
	INST_IINC(2, -1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(79);
	sp[0].o = frame[1].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY) - (frame[5].i));
	LINE_NUMBER(80);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY) >= 0) goto label_40;
	}
	{
	LINE_NUMBER(81);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY = (jint(0));
	}
label_40:;
	{
	LINE_NUMBER(84);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmyLim)) goto label_42;
	}
	{
	LINE_NUMBER(85);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmyLim);
	}
label_42:;
	{
	LINE_NUMBER(88);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmy) < 0) goto label_44;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmy) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmyLim)) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(89);
	frame[5].i = ((frame[5].i) / (jint(2)));
	}
label_45:;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmy = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmy) - (frame[5].i));
	}
label_9:;
	{
	LINE_NUMBER(96);
	frame[9].i = (jint(0));
	LINE_NUMBER(97);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_47;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning) == 0) goto label_47;
	}
	{
	LINE_NUMBER(98);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_py;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	frame[2].i = (temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	LINE_NUMBER(99);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(100);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[2].i));
	if (temp1 >= (20)) goto label_51;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) - ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownFirstX)));
	if (temp0 >= (20)) goto label_51;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_isDownWhenRunning) != 0) goto label_51;
	}
	{
	LINE_NUMBER(101);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun = (jint(0));
	LINE_NUMBER(102);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmy);
	LINE_NUMBER(103);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(104);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_w) <= (jint(1))) goto label_56;
	}
	{
	LINE_NUMBER(105);
	frame[2].i = (((((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py)) - (frame[4].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_ITEM_SIZE));
	LINE_NUMBER(106);
	frame[3].i = (((((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) - (frame[3].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_ITEM_SIZE));
	LINE_NUMBER(107);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem = (((frame[2].i) * ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_w)) + (frame[3].i));
	goto label_60;
	}
label_56:;
	{
	LINE_NUMBER(109);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem = (((((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py)) - (frame[4].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_ITEM_SIZE));
	}
label_60:;
	{
	LINE_NUMBER(112);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(113);
	frame[9].i = (jint(1));
	goto label_62;
	}
label_51:;
	{
	LINE_NUMBER(114);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem) == (jint(-1))) goto label_63;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime) <= (jint(5))) goto label_63;
	}
	{
	LINE_NUMBER(115);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(116);
	frame[9].i = (jint(1));
	goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(117);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem) != (jint(-1))) goto label_62;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_isDownWhenRunning) != 0) goto label_62;
	}
	{
	LINE_NUMBER(118);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmy) >= 0) goto label_67;
	}
	{
	LINE_NUMBER(119);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY = (jint(0));
	goto label_62;
	}
label_67:;
	{
	LINE_NUMBER(120);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmy) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmyLim)) goto label_69;
	}
	{
	LINE_NUMBER(121);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoY = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmyLim);
	goto label_62;
	}
label_69:;
	{
	LINE_NUMBER(123);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_py;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp3 = temp1 + (temp2 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp5 = temp3 + (temp4 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))));
	frame[2].i = temp5;
	if (temp5 <= (10)) goto label_71;
	}
	{
	LINE_NUMBER(124);
	frame[7].i = (10);
	goto label_74;
	}
label_71:;
	{
	LINE_NUMBER(125);
	if ((frame[2].i) >= (-10)) goto label_75;
	}
	{
	LINE_NUMBER(126);
	frame[7].i = (-10);
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(128);
	frame[7].i = (jint(0));
	}
label_74:;
	{
	LINE_NUMBER(131);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun = ((-(frame[7].i)) * (100));
	}
label_62:;
	{
	LINE_NUMBER(135);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning = (jint(0));
	LINE_NUMBER(136);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(137);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	}
label_47:;
	{
	LINE_NUMBER(141);
	clinit_nro_ScrollResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ScrollResult);
	init_nro_ScrollResult(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	((nro_ScrollResult *) NULL_CHECK(sp[0].o))->F_selected = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem);
	LINE_NUMBER(142);
	((nro_ScrollResult *) NULL_CHECK((frame[10].o)))->F_isFinish = (frame[9].i);
	LINE_NUMBER(143);
	((nro_ScrollResult *) NULL_CHECK((frame[10].o)))->F_isDowning = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_1:;
	{
	LINE_NUMBER(146);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(147);
	frame[2].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_xPos);
	LINE_NUMBER(148);
	frame[3].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_yPos);
	LINE_NUMBER(149);
	frame[4].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(150);
	frame[5].i = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(151);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_89;
	}
	{
	LINE_NUMBER(152);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_91;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_91;
	}
	{
	LINE_NUMBER(153);
	frame[6].i = (jint(0));
	}
label_93:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_94;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(153);
	INST_IINC(6, 1);
	goto label_93;
	}
label_94:;
	{
	LINE_NUMBER(157);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownFirstX = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(158);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning = (jint(1));
	LINE_NUMBER(159);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem = (jint(-1));
	LINE_NUMBER(160);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun) == 0) goto label_100;
	}
	INST_ICONST(1);
	goto label_101;
label_100:;
	INST_ICONST(0);
label_101:;
	{
	sp -= 2;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_isDownWhenRunning = sp[1].i;
	LINE_NUMBER(161);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun = (jint(0));
	goto label_89;
	}
label_91:;
	{
	LINE_NUMBER(162);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) == 0) goto label_89;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_pointerDownTime = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_pointerDownTime) + (jint(1)));
	LINE_NUMBER(164);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownTime) <= (jint(5))) goto label_105;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX) != (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) goto label_105;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_105;
	}
	{
	LINE_NUMBER(165);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(166);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem = (((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) - (frame[2].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE));
	}
label_105:;
	{
	LINE_NUMBER(169);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_px;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	frame[6].i = temp1;
	if (temp1 == 0) goto label_109;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem) == (jint(-1))) goto label_109;
	}
	{
	LINE_NUMBER(170);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_selectedItem = (jint(-1));
	}
label_109:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	frame[5].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_111:;
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_112;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[5].i) - (jint(1)))));
	LINE_NUMBER(173);
	INST_IINC(5, -1);
	goto label_111;
	}
label_112:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px);
	LINE_NUMBER(178);
	sp[0].o = frame[1].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoX) - (frame[6].i));
	LINE_NUMBER(179);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX) >= 0) goto label_117;
	}
	{
	LINE_NUMBER(180);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX = (jint(0));
	}
label_117:;
	{
	LINE_NUMBER(183);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmxLim)) goto label_119;
	}
	{
	LINE_NUMBER(184);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmxLim);
	}
label_119:;
	{
	LINE_NUMBER(187);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmx) < 0) goto label_121;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmx) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmxLim)) goto label_122;
	}
label_121:;
	{
	LINE_NUMBER(188);
	frame[6].i = ((frame[6].i) / (jint(2)));
	}
label_122:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[1].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmx = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmx) - (frame[6].i));
	}
label_89:;
	{
	LINE_NUMBER(195);
	frame[8].i = (jint(0));
	LINE_NUMBER(196);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_124;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning) == 0) goto label_124;
	}
	{
	LINE_NUMBER(197);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_px;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	frame[5].i = (temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	LINE_NUMBER(198);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(199);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[5].i));
	if (temp1 >= (20)) goto label_128;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px) - ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownFirstX)));
	if (temp0 >= (20)) goto label_128;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_isDownWhenRunning) != 0) goto label_128;
	}
	{
	LINE_NUMBER(200);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun = (jint(0));
	LINE_NUMBER(201);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmx);
	LINE_NUMBER(202);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(203);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem = (((((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_px)) - (frame[2].i)) / ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_ITEM_SIZE));
	LINE_NUMBER(204);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(205);
	frame[8].i = (jint(1));
	goto label_135;
	}
label_128:;
	{
	LINE_NUMBER(206);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem) == (jint(-1))) goto label_136;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime) <= (jint(5))) goto label_136;
	}
	{
	LINE_NUMBER(207);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(208);
	frame[8].i = (jint(1));
	goto label_135;
	}
label_136:;
	{
	LINE_NUMBER(209);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem) != (jint(-1))) goto label_135;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_isDownWhenRunning) != 0) goto label_135;
	}
	{
	LINE_NUMBER(210);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmx) >= 0) goto label_140;
	}
	{
	LINE_NUMBER(211);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX = (jint(0));
	goto label_135;
	}
label_140:;
	{
	LINE_NUMBER(212);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmx) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmxLim)) goto label_142;
	}
	{
	LINE_NUMBER(213);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmtoX = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmxLim);
	goto label_135;
	}
label_142:;
	{
	LINE_NUMBER(215);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_px;
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp3 = temp1 + (temp2 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownLastX;
	jint temp5 = temp3 + (temp4 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))));
	frame[2].i = temp5;
	if (temp5 <= (10)) goto label_144;
	}
	{
	LINE_NUMBER(216);
	frame[7].i = (10);
	goto label_147;
	}
label_144:;
	{
	LINE_NUMBER(217);
	if ((frame[2].i) >= (-10)) goto label_148;
	}
	{
	LINE_NUMBER(218);
	frame[7].i = (-10);
	goto label_147;
	}
label_148:;
	{
	LINE_NUMBER(220);
	frame[7].i = (jint(0));
	}
label_147:;
	{
	LINE_NUMBER(223);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_cmRun = ((-(frame[7].i)) * (100));
	}
label_135:;
	{
	LINE_NUMBER(227);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning = (jint(0));
	LINE_NUMBER(228);
	((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(229);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	}
label_124:;
	{
	LINE_NUMBER(233);
	clinit_nro_ScrollResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ScrollResult);
	init_nro_ScrollResult(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	((nro_ScrollResult *) NULL_CHECK(sp[0].o))->F_selected = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_selectedItem);
	LINE_NUMBER(234);
	((nro_ScrollResult *) NULL_CHECK((frame[9].o)))->F_isFinish = (frame[8].i);
	LINE_NUMBER(235);
	((nro_ScrollResult *) NULL_CHECK((frame[9].o)))->F_isDowning = ((jint)((nro_Scroll *) NULL_CHECK((frame[1].o)))->F_pointerIsDowning);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void M_nro_Scroll_updatecm(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Scroll:updatecm", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_1;
	}
	{
	LINE_NUMBER(242);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_styleUPDOWN) == 0) goto label_3;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoY) + (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun) / (100)));
	LINE_NUMBER(244);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(245);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY = (jint(0));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(246);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim)) goto label_9;
	}
	{
	LINE_NUMBER(247);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(249);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmy = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmtoX) + (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun) / (100)));
	LINE_NUMBER(253);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(254);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX = (jint(0));
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(255);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_14;
	}
	{
	LINE_NUMBER(256);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmxLim);
	goto label_8;
	}
label_14:;
	{
	LINE_NUMBER(258);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmx = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX);
	}
label_8:;
	{
	LINE_NUMBER(262);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun = ((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun) * (9)) / (10));
	LINE_NUMBER(263);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun) >= (100)) goto label_1;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun) <= (-100)) goto label_1;
	}
	{
	LINE_NUMBER(264);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(268);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmx) == ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX)) goto label_18;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_18;
	}
	{
	LINE_NUMBER(269);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmvx = ((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) - ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmx)) << (jint(2)));
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdx = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdx) + ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmvx));
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmx = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmx) + (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmdx) >> (jint(4))));
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdx = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdx) & (15));
	}
label_18:;
	{
	LINE_NUMBER(275);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmy) == ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY)) goto label_23;
	}
	{
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_23;
	}
	{
	LINE_NUMBER(276);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmvy = ((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) - ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmy)) << (jint(2)));
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdy = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdy) + ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmvy));
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmy = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmy) + (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmdy) >> (jint(4))));
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdy = (((jint)((nro_Scroll *) NULL_CHECK(sp[0].o))->F_cmdy) & (15));
	}
label_23:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Scroll:setStyle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(285);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_xPos = (frame[3].i);
	LINE_NUMBER(286);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_yPos = (frame[4].i);
	LINE_NUMBER(287);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE = (frame[2].i);
	LINE_NUMBER(288);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_width = (frame[5].i);
	LINE_NUMBER(289);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_height = (frame[6].i);
	LINE_NUMBER(290);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_styleUPDOWN = (jint(1));
	LINE_NUMBER(291);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_w = (jint(1));
	LINE_NUMBER(292);
	frame[3].i = (frame[1].i);
	LINE_NUMBER(297);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim = (((frame[3].i) * (frame[2].i)) - (frame[6].i));
	LINE_NUMBER(298);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(299);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(302);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmxLim) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(303);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmxLim = (jint(0));
	}
label_12:;
	LINE_NUMBER(306);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Scroll_a_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Scroll:a", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(309);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_styleUPDOWN) == 0) goto label_1;
	}
	{
	LINE_NUMBER(310);
	frame[1].i = ((frame[1].i) - ((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_height) - ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE)) / (jint(2))));
	LINE_NUMBER(311);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY = (frame[1].i);
	LINE_NUMBER(312);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(313);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(316);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim)) goto label_7;
	}
	{
	LINE_NUMBER(317);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoY = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmyLim);
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(321);
	frame[1].i = ((frame[1].i) - ((((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_width) - ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_ITEM_SIZE)) / (jint(2))));
	LINE_NUMBER(322);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX = (frame[1].i);
	LINE_NUMBER(323);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(324);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(327);
	if (((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX) <= ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_7;
	}
	{
	LINE_NUMBER(328);
	((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmtoX = ((jint)((nro_Scroll *) NULL_CHECK((frame[0].o)))->F_cmxLim);
	}
label_7:;
	LINE_NUMBER(332);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Scroll[] {
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
	(void *) M_nro_Scroll_updateKey_R_nro_ScrollResult,
	(void *) M_nro_Scroll_updatecm,
	(void *) M_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int,
	(void *) M_nro_Scroll_a_int,
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
	{ "updateKey", "()Lnro/ScrollResult;" },
	{ "updatecm", "()V" },
	{ "setStyle", "(IIIIIIZI)V" },
	{ "a", "(I)V" },
};

static FieldMetadata fields[] {
	{ "cmtoX", &class_int, offsetof(nro_Scroll, F_cmtoX), "I", 1 },
	{ "cmtoY", &class_int, offsetof(nro_Scroll, F_cmtoY), "I", 1 },
	{ "cmx", &class_int, offsetof(nro_Scroll, F_cmx), "I", 1 },
	{ "cmy", &class_int, offsetof(nro_Scroll, F_cmy), "I", 1 },
	{ "cmvx", &class_int, offsetof(nro_Scroll, F_cmvx), "I", 1 },
	{ "cmvy", &class_int, offsetof(nro_Scroll, F_cmvy), "I", 1 },
	{ "cmdx", &class_int, offsetof(nro_Scroll, F_cmdx), "I", 1 },
	{ "cmdy", &class_int, offsetof(nro_Scroll, F_cmdy), "I", 1 },
	{ "xPos", &class_int, offsetof(nro_Scroll, F_xPos), "I", 2 },
	{ "yPos", &class_int, offsetof(nro_Scroll, F_yPos), "I", 2 },
	{ "width", &class_int, offsetof(nro_Scroll, F_width), "I", 1 },
	{ "height", &class_int, offsetof(nro_Scroll, F_height), "I", 1 },
	{ "cmxLim", &class_int, offsetof(nro_Scroll, F_cmxLim), "I", 1 },
	{ "cmyLim", &class_int, offsetof(nro_Scroll, F_cmyLim), "I", 1 },
	{ "pointerDownTime", &class_int, offsetof(nro_Scroll, F_pointerDownTime), "I", 2 },
	{ "pointerDownFirstX", &class_int, offsetof(nro_Scroll, F_pointerDownFirstX), "I", 2 },
	{ "pointerDownLastX", getArrayClass(&class_int, 1), offsetof(nro_Scroll, F_pointerDownLastX), "[I", 2 },
	{ "pointerIsDowning", &class_boolean, offsetof(nro_Scroll, F_pointerIsDowning), "Z", 1 },
	{ "isDownWhenRunning", &class_boolean, offsetof(nro_Scroll, F_isDownWhenRunning), "Z", 2 },
	{ "cmRun", &class_int, offsetof(nro_Scroll, F_cmRun), "I", 2 },
	{ "selectedItem", &class_int, offsetof(nro_Scroll, F_selectedItem), "I", 1 },
	{ "ITEM_SIZE", &class_int, offsetof(nro_Scroll, F_ITEM_SIZE), "I", 1 },
	{ "w", &class_int, offsetof(nro_Scroll, F_w), "I", 2 },
	{ "styleUPDOWN", &class_boolean, offsetof(nro_Scroll, F_styleUPDOWN), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Scroll, 0, "()V", 1 },
	{ "updateKey", (intptr_t) M_nro_Scroll_updateKey_R_nro_ScrollResult, VTABLE_nro_Scroll_updateKey_R_nro_ScrollResult, "()Lnro/ScrollResult;", 17 },
	{ "updatecm", (intptr_t) M_nro_Scroll_updatecm, VTABLE_nro_Scroll_updatecm, "()V", 17 },
	{ "setStyle", (intptr_t) M_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int, VTABLE_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int, "(IIIIIIZI)V", 17 },
	{ "a", (intptr_t) M_nro_Scroll_a_int, VTABLE_nro_Scroll_a_int, "(I)V", 17 },
};

Class class_nro_Scroll{
		.nativeName = (intptr_t) "nro/Scroll",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Scroll),
		.classVtable = (intptr_t) vtable_nro_Scroll,
		.staticInitializer = (intptr_t) clinit_nro_Scroll,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Scroll,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Scroll = registerClass(&class_nro_Scroll);

}

