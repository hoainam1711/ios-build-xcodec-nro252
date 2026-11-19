#include "nro/Arrow.h"
#include "java/lang/Object.h"
#include "nro/Arrowpaint.h"
#include "nro/Mob.h"
#include "nro/Res.h"
#include "lib/mGraphics.h"
#include "nro/SmallImage.h"
#include "nro/Arrow.h"
#include "nro/Char.h"

extern "C" {

jobject SF_nro_Arrow_FRAME;
jobject SF_nro_Arrow_ARROWINDEX;
jobject SF_nro_Arrow_TRANSFORM;

void mark_nro_Arrow(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Arrow_FRAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Arrow_FRAME)->clazz)->markFunction)((jobject) SF_nro_Arrow_FRAME, mark, depth + 1);
		if (SF_nro_Arrow_ARROWINDEX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Arrow_ARROWINDEX)->clazz)->markFunction)((jobject) SF_nro_Arrow_ARROWINDEX, mark, depth + 1);
		if (SF_nro_Arrow_TRANSFORM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Arrow_TRANSFORM)->clazz)->markFunction)((jobject) SF_nro_Arrow_TRANSFORM, mark, depth + 1);
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
	auto self = (nro_Arrow *) object;
	if (self->F_charBelong)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charBelong)->clazz)->markFunction)((jobject) self->F_charBelong, mark, depth + 1);
	if (self->F_arrp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrp)->clazz)->markFunction)((jobject) self->F_arrp, mark, depth + 1);
}

void init_nro_Arrow_nro_Char_nro_Arrowpaint(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrow:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Arrow(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_life = (jint(0));
	LINE_NUMBER(16);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_arrp = (jref) (jobject(nullptr));
	LINE_NUMBER(22);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong = (jref) (frame[1].o);
	LINE_NUMBER(23);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_arrp = (jref) (frame[2].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Arrow_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrow:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_mobFocus;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_axTo = ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_mobFocus;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_mobFocus;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ayTo = (temp0 - (((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_h) / (jint(4))));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_charFocus;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_axTo = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_charFocus;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_charFocus;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ayTo = (temp0 - (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_ch) / (jint(4))));
	}
label_6:;
	{
	LINE_NUMBER(36);
	frame[1].i = (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo) - ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax));
	LINE_NUMBER(37);
	frame[2].i = (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo) - ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay));
	LINE_NUMBER(38);
	frame[3].i = (jint(4));
	LINE_NUMBER(39);
	if (((frame[1].i) + (frame[2].i)) >= (60)) goto label_12;
	}
	{
	LINE_NUMBER(40);
	frame[3].i = (jint(3));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(41);
	if (((frame[1].i) + (frame[2].i)) >= (30)) goto label_14;
	}
	{
	LINE_NUMBER(42);
	frame[3].i = (jint(2));
	}
label_14:;
	{
	LINE_NUMBER(45);
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax) == ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo)) goto label_16;
	}
	{
	LINE_NUMBER(46);
	if ((frame[1].i) <= 0) goto label_18;
	}
	{
	if ((frame[1].i) >= (jint(5))) goto label_18;
	}
	{
	LINE_NUMBER(47);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax = ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo);
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(48);
	if ((frame[1].i) >= 0) goto label_20;
	}
	{
	if ((frame[1].i) <= (-5)) goto label_20;
	}
	{
	LINE_NUMBER(49);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax = ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo);
	goto label_16;
	}
label_20:;
	{
	LINE_NUMBER(51);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_avx = ((((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo) - ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax)) << (jint(2)));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_adx = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_adx) + ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_avx));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ax = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ax) + (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_adx) >> (frame[3].i)));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_adx = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_adx) & (15));
	}
label_16:;
	{
	LINE_NUMBER(58);
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay) == ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo)) goto label_25;
	}
	{
	LINE_NUMBER(59);
	if ((frame[2].i) <= 0) goto label_27;
	}
	{
	if ((frame[2].i) >= (jint(5))) goto label_27;
	}
	{
	LINE_NUMBER(60);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay = ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo);
	goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(61);
	if ((frame[2].i) >= 0) goto label_29;
	}
	{
	if ((frame[2].i) <= (-5)) goto label_29;
	}
	{
	LINE_NUMBER(62);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay = ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo);
	goto label_25;
	}
label_29:;
	{
	LINE_NUMBER(64);
	((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_avy = ((((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo) - ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay)) << (jint(2)));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ady = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ady) + ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_avy));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ay = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ay) + (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ady) >> (frame[3].i)));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ady = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ady) & (15));
	}
label_25:;
	{
	LINE_NUMBER(71);
	frame[1].i = (jint(0));
	LINE_NUMBER(72);
	frame[2].i = (jint(0));
	LINE_NUMBER(73);
	frame[3].i = (jint(0));
	LINE_NUMBER(74);
	frame[4].i = (jint(0));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	frame[1].i = (temp0 - (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_v) / (jint(4))));
	LINE_NUMBER(77);
	jint temp1 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	frame[3].i = (temp1 + (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_v) / (jint(4))));
	LINE_NUMBER(78);
	jint temp2 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	frame[2].i = (temp2 - (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_h) / (jint(4))));
	LINE_NUMBER(79);
	jint temp3 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	frame[4].i = (temp3 + (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_h) / (jint(4))));
	goto label_43;
	}
label_38:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	frame[1].i = (temp0 - (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cw) / (jint(4))));
	LINE_NUMBER(82);
	jint temp1 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	frame[3].i = (temp1 + (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cw) / (jint(4))));
	LINE_NUMBER(83);
	jint temp2 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	frame[2].i = (temp2 - (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ch) / (jint(4))));
	LINE_NUMBER(84);
	jint temp3 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo;
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	frame[4].i = (temp3 + (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ch) / (jint(4))));
	}
label_43:;
	{
	LINE_NUMBER(87);
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_life) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_life = (((jint)((nro_Arrow *) NULL_CHECK(sp[0].o))->F_life) - (jint(1)));
	}
label_48:;
	{
	LINE_NUMBER(91);
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_life) == 0) goto label_2;
	}
	{
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax) < (frame[1].i)) goto label_50;
	}
	{
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax) > (frame[3].i)) goto label_50;
	}
	{
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay) < (frame[2].i)) goto label_50;
	}
	{
	if (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay) <= (frame[4].i)) goto label_2;
	}
label_50:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(96);
	M_nro_Arrow_endMe(ctx, (frame[0].o));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Arrow_endMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrow:endMe", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_arr = (jref) (jobject(nullptr));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[0].o;
	sp[5].o = frame[0].o;
	sp[6].o = frame[0].o;
	sp[7].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Arrow *) NULL_CHECK(sp[7].o))->F_ady = temp0;
	((nro_Arrow *) NULL_CHECK(sp[6].o))->F_adx = temp0;
	((nro_Arrow *) NULL_CHECK(sp[5].o))->F_avy = temp0;
	((nro_Arrow *) NULL_CHECK(sp[4].o))->F_avx = temp0;
	((nro_Arrow *) NULL_CHECK(sp[3].o))->F_ayTo = temp0;
	((nro_Arrow *) NULL_CHECK(sp[2].o))->F_axTo = temp0;
	((nro_Arrow *) NULL_CHECK(sp[1].o))->F_ay = temp0;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ax = temp0;
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((func_nro_Char_setAttack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setAttack])(ctx, sp[0].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Arrow_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrow:paint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	frame[2].i = (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_axTo) - ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax));
	LINE_NUMBER(107);
	frame[3].i = (((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ayTo) - ((jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay));
	LINE_NUMBER(108);
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, (frame[2].i), (-(frame[3].i)));
	frame[2].i = temp0;
	LINE_NUMBER(109);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(113);
	jint temp0 = frame[3].i;
	clinit_nro_Arrow(ctx);
	sp[0].o = (jobject)SF_nro_Arrow_ARROWINDEX;
	if (temp0 < ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_5;
	}
	{
	LINE_NUMBER(114);
	frame[4].i = (jint(0));
	LINE_NUMBER(115);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(118);
	jint temp0 = frame[2].i;
	clinit_nro_Arrow(ctx);
	sp[0].o = (jobject)SF_nro_Arrow_ARROWINDEX;
	if (temp0 < ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)))) goto label_9;
	}
	{
	jint temp0 = frame[2].i;
	clinit_nro_Arrow(ctx);
	sp[0].o = (jobject)SF_nro_Arrow_ARROWINDEX;
	if (temp0 > ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + (jint(1)))))) goto label_9;
	}
	{
	LINE_NUMBER(119);
	if ((frame[3].i) < (16)) goto label_11;
	}
	INST_ICONST(0);
	goto label_12;
label_11:;
	INST_ILOAD(3);
label_12:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(120);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(123);
	INST_IINC(3, 1);
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(126);
	frame[2].i = (frame[4].i);
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_arrp;
	sp[1].o = (jobject)((nro_Arrowpaint *) NULL_CHECK(sp[1].o))->F_imgId;
	clinit_nro_Arrow(ctx);
	sp[2].o = (jobject)SF_nro_Arrow_FRAME;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)ARRAY_ACCESS(jbyte, sp[2].o, (frame[2].i))));
	jint temp1 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ax;
	jint temp2 = (jint)((nro_Arrow *) NULL_CHECK((frame[0].o)))->F_ay;
	clinit_nro_Arrow(ctx);
	sp[1].o = (jobject)SF_nro_Arrow_TRANSFORM;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))), (jint(3)));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Arrow(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrow:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Arrow(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (25));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(0));
	clinit_nro_Arrow(ctx);
	SF_nro_Arrow_FRAME = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject) createArray(ctx, &class_int, (18));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (52);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (75);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (105);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (127);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (142);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (165);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (195);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (217);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (232);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (255);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (285);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (307);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (322);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (345);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (370);
	clinit_nro_Arrow(ctx);
	SF_nro_Arrow_ARROWINDEX = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject) createArray(ctx, &class_int, (16));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(1));
	clinit_nro_Arrow(ctx);
	SF_nro_Arrow_TRANSFORM = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Arrow[] {
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
	(void *) M_nro_Arrow_update,
	(void *) M_nro_Arrow_endMe,
	(void *) M_nro_Arrow_paint_lib_mGraphics,
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
	{ "endMe", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "life", &class_int, offsetof(nro_Arrow, F_life), "I", 1 },
	{ "ax", &class_int, offsetof(nro_Arrow, F_ax), "I", 1 },
	{ "ay", &class_int, offsetof(nro_Arrow, F_ay), "I", 1 },
	{ "axTo", &class_int, offsetof(nro_Arrow, F_axTo), "I", 2 },
	{ "ayTo", &class_int, offsetof(nro_Arrow, F_ayTo), "I", 2 },
	{ "avx", &class_int, offsetof(nro_Arrow, F_avx), "I", 2 },
	{ "avy", &class_int, offsetof(nro_Arrow, F_avy), "I", 2 },
	{ "adx", &class_int, offsetof(nro_Arrow, F_adx), "I", 2 },
	{ "ady", &class_int, offsetof(nro_Arrow, F_ady), "I", 2 },
	{ "charBelong", &class_nro_Char, offsetof(nro_Arrow, F_charBelong), "Lnro/Char;", 2 },
	{ "arrp", &class_nro_Arrowpaint, offsetof(nro_Arrow, F_arrp), "Lnro/Arrowpaint;", 2 },
	{ "FRAME", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_Arrow_FRAME, "[B", 10 },
	{ "ARROWINDEX", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_Arrow_ARROWINDEX, "[I", 10 },
	{ "TRANSFORM", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_Arrow_TRANSFORM, "[I", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Arrow_nro_Char_nro_Arrowpaint, 0, "(Lnro/Char;Lnro/Arrowpaint;)V", 1 },
	{ "update", (intptr_t) M_nro_Arrow_update, VTABLE_nro_Arrow_update, "()V", 17 },
	{ "endMe", (intptr_t) M_nro_Arrow_endMe, VTABLE_nro_Arrow_endMe, "()V", 2 },
	{ "paint", (intptr_t) M_nro_Arrow_paint_lib_mGraphics, VTABLE_nro_Arrow_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Arrow, 0, "()V", 8 },
};

Class class_nro_Arrow{
		.nativeName = (intptr_t) "nro/Arrow",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Arrow),
		.classVtable = (intptr_t) vtable_nro_Arrow,
		.staticInitializer = (intptr_t) clinit_nro_Arrow,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Arrow,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Arrow = registerClass(&class_nro_Arrow);

}

