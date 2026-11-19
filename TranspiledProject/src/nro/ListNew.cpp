#include "nro/ListNew.h"
#include "java/lang/Object.h"
#include "nro/ListNew.h"
#include "nro/Res.h"
#include "main/GameCanvas.h"

extern "C" {


void mark_nro_ListNew(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ListNew *) object;
	if (self->F_pointerDownLastX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerDownLastX)->clazz)->markFunction)((jobject) self->F_pointerDownLastX, mark, depth + 1);
}

void clinit_nro_ListNew(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_ListNew(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ListNew:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ListNew(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_pointerDownLastX = (jref) sp[1].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_ListNew_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ListNew:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ListNew(ctx);
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
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_pointerDownLastX = (jref) sp[1].o;
	LINE_NUMBER(27);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(28);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(29);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_maxW = (frame[3].i);
	LINE_NUMBER(30);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_maxH = (frame[4].i);
	LINE_NUMBER(31);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim = (jint(0));
	LINE_NUMBER(32);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(33);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim = (jint(0));
	}
label_8:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ListNew_update_Pos_UP_DOWN(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ListNew:update_Pos_UP_DOWN", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(42);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerDown) == 0) goto label_3;
	}
	{
	LINE_NUMBER(43);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointer_int_int_int_int_R_boolean(ctx, ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_maxW), ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_maxH));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(44);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(44);
	INST_IINC(1, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(48);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(49);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning = (jint(1));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun) == 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_isDownWhenRunning = sp[1].i;
	LINE_NUMBER(51);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(52);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) == 0) goto label_3;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_pointerDownTime = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_pointerDownTime) + (jint(1)));
	LINE_NUMBER(54);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownTime) <= (jint(5))) goto label_18;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX) != (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py)) goto label_18;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_18;
	}
	{
	LINE_NUMBER(55);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (-1000);
	}
label_18:;
	{
	LINE_NUMBER(58);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_py;
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	frame[1].i = temp1;
	if (temp1 == 0) goto label_21;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_value) == (jint(-1))) goto label_21;
	}
	{
	LINE_NUMBER(59);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_value = (jint(-1));
	}
label_21:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_23:;
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_24;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((frame[2].i) - (jint(1)))));
	LINE_NUMBER(62);
	INST_IINC(2, -1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py);
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmtoX) - (frame[1].i));
	LINE_NUMBER(68);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX) >= 0) goto label_29;
	}
	{
	LINE_NUMBER(69);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(72);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX) <= ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_31;
	}
	{
	LINE_NUMBER(73);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim);
	}
label_31:;
	{
	LINE_NUMBER(76);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) < 0) goto label_33;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) <= ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(77);
	frame[1].i = ((frame[1].i) / (jint(2)));
	}
label_34:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmx = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmx) - (frame[1].i));
	}
label_3:;
	{
	LINE_NUMBER(84);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_35;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) == 0) goto label_35;
	}
	{
	LINE_NUMBER(85);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_py;
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	frame[1].i = (temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	LINE_NUMBER(86);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(87);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (frame[1].i));
	if (temp1 >= (20)) goto label_39;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_py) - ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX)));
	if (temp0 >= (20)) goto label_39;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_39;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerMove;
	if ((--sp)->i == 0) goto label_39;
	{
	LINE_NUMBER(88);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	LINE_NUMBER(89);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx);
	LINE_NUMBER(90);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownFirstX = (-1000);
	LINE_NUMBER(91);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownTime = (jint(0));
	goto label_44;
	}
label_39:;
	{
	LINE_NUMBER(92);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_value) == (jint(-1))) goto label_45;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownTime) <= (jint(5))) goto label_45;
	}
	{
	LINE_NUMBER(93);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownTime = (jint(0));
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(94);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_value) != (jint(-1))) goto label_44;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_isDownWhenRunning) != 0) goto label_44;
	}
	{
	LINE_NUMBER(95);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) >= 0) goto label_48;
	}
	{
	LINE_NUMBER(96);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = (jint(0));
	goto label_44;
	}
label_48:;
	{
	LINE_NUMBER(97);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) <= ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_50;
	}
	{
	LINE_NUMBER(98);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim);
	goto label_44;
	}
label_50:;
	{
	LINE_NUMBER(101);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_py;
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp2 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp3 = temp1 + (temp2 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp4 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownLastX;
	jint temp5 = temp3 + (temp4 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))));
	frame[2].i = temp5;
	if (temp5 <= (10)) goto label_53;
	}
	{
	LINE_NUMBER(102);
	frame[3].i = (10);
	goto label_56;
	}
label_53:;
	{
	LINE_NUMBER(103);
	if ((frame[2].i) >= (-10)) goto label_57;
	}
	{
	LINE_NUMBER(104);
	frame[3].i = (-10);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(106);
	frame[3].i = (jint(0));
	}
label_56:;
	{
	LINE_NUMBER(109);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun = ((-(frame[3].i)) * (100));
	}
label_44:;
	{
	LINE_NUMBER(113);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning = (jint(0));
	LINE_NUMBER(114);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerDownTime = (jint(0));
	LINE_NUMBER(115);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(118);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) > 0) goto label_62;
	}
	{
	LINE_NUMBER(119);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx = (jint(0));
	}
label_62:;
	{
	LINE_NUMBER(122);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) < ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_1;
	}
	{
	LINE_NUMBER(123);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx = ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim);
	}
label_1:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ListNew_moveCamera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ListNew:moveCamera", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun) == 0) goto label_1;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmtoX) + (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun) / (100)));
	LINE_NUMBER(132);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(133);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = (jint(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(134);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX) <= ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim)) goto label_7;
	}
	{
	LINE_NUMBER(135);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX = ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmxLim);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(137);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx = ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX);
	}
label_6:;
	{
	LINE_NUMBER(140);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun = ((((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun) * (9)) / (10));
	LINE_NUMBER(141);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun) >= (100)) goto label_1;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun) <= (-100)) goto label_1;
	}
	{
	LINE_NUMBER(142);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmRun = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(146);
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx) == ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX)) goto label_11;
	}
	{
	if (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_pointerIsDowning) != 0) goto label_11;
	}
	{
	LINE_NUMBER(147);
	((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmvx = ((((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmtoX) - ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmx)) << (jint(2)));
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmdx = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmdx) + ((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmvx));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmx = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmx) + (((jint)((nro_ListNew *) NULL_CHECK((frame[0].o)))->F_cmdx) >> (jint(4))));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmdx = (((jint)((nro_ListNew *) NULL_CHECK(sp[0].o))->F_cmdx) & (15));
	}
label_11:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_ListNew[] {
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
	(void *) M_nro_ListNew_update_Pos_UP_DOWN,
	(void *) M_nro_ListNew_moveCamera,
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
	{ "update_Pos_UP_DOWN", "()V" },
	{ "moveCamera", "()V" },
};

static FieldMetadata fields[] {
	{ "maxW", &class_int, offsetof(nro_ListNew, F_maxW), "I", 2 },
	{ "maxH", &class_int, offsetof(nro_ListNew, F_maxH), "I", 2 },
	{ "x", &class_int, offsetof(nro_ListNew, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_ListNew, F_y), "I", 2 },
	{ "value", &class_int, offsetof(nro_ListNew, F_value), "I", 2 },
	{ "cmtoX", &class_int, offsetof(nro_ListNew, F_cmtoX), "I", 1 },
	{ "cmx", &class_int, offsetof(nro_ListNew, F_cmx), "I", 1 },
	{ "cmxLim", &class_int, offsetof(nro_ListNew, F_cmxLim), "I", 1 },
	{ "pointerDownTime", &class_int, offsetof(nro_ListNew, F_pointerDownTime), "I", 2 },
	{ "pointerDownFirstX", &class_int, offsetof(nro_ListNew, F_pointerDownFirstX), "I", 2 },
	{ "pointerDownLastX", getArrayClass(&class_int, 1), offsetof(nro_ListNew, F_pointerDownLastX), "[I", 2 },
	{ "pointerIsDowning", &class_boolean, offsetof(nro_ListNew, F_pointerIsDowning), "Z", 2 },
	{ "isDownWhenRunning", &class_boolean, offsetof(nro_ListNew, F_isDownWhenRunning), "Z", 2 },
	{ "cmRun", &class_int, offsetof(nro_ListNew, F_cmRun), "I", 2 },
	{ "cmvx", &class_int, offsetof(nro_ListNew, F_cmvx), "I", 2 },
	{ "cmdx", &class_int, offsetof(nro_ListNew, F_cmdx), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ListNew, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_nro_ListNew_int_int_int_int_int_int_int_boolean, 0, "(IIIIIIIZ)V", 1 },
	{ "update_Pos_UP_DOWN", (intptr_t) M_nro_ListNew_update_Pos_UP_DOWN, VTABLE_nro_ListNew_update_Pos_UP_DOWN, "()V", 17 },
	{ "moveCamera", (intptr_t) M_nro_ListNew_moveCamera, VTABLE_nro_ListNew_moveCamera, "()V", 17 },
};

Class class_nro_ListNew{
		.nativeName = (intptr_t) "nro/ListNew",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ListNew),
		.classVtable = (intptr_t) vtable_nro_ListNew,
		.staticInitializer = (intptr_t) clinit_nro_ListNew,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ListNew,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ListNew = registerClass(&class_nro_ListNew);

}

