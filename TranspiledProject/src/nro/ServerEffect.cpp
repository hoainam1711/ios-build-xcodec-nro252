#include "nro/ServerEffect.h"
#include "nro/GameScr.h"
#include "java/lang/Integer.h"
#include "lib/mGraphics.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/SmallImage.h"
#include "nro/EffectCharPaint.h"
#include "nro/ServerEffect.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Mob.h"
#include "nro/ItemObject.h"
#include "nro/Effect2.h"
#include "nro/Char.h"

extern "C" {


void mark_nro_ServerEffect(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (nro_ServerEffect *) object;
	if (self->F_eff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff)->clazz)->markFunction)((jobject) self->F_eff, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_m)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_m)->clazz)->markFunction)((jobject) self->F_m, mark, depth + 1);
}

void clinit_nro_ServerEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Effect2(ctx);
}

void init_nro_ServerEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_nro_Effect2(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_loopCount = (jint(0));
	LINE_NUMBER(14);
	((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_endTime = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerEffect_addServerEffect_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:addServerEffect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerEffect(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(18);
	frame[4].i = ((frame[0].i) - (jint(1)));
	LINE_NUMBER(19);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_2;
	{
	jint temp0 = frame[4].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) != nullptr) goto label_3;
	}
label_2:;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(22);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerEffect);
	init_nro_ServerEffect(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = frame[5].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_eff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	LINE_NUMBER(24);
	((nro_ServerEffect *) NULL_CHECK((frame[5].o)))->F_x = (frame[1].i);
	LINE_NUMBER(25);
	((nro_ServerEffect *) NULL_CHECK((frame[5].o)))->F_y = (frame[2].i);
	LINE_NUMBER(26);
	((nro_ServerEffect *) NULL_CHECK((frame[5].o)))->F_loopCount = (jshort((frame[3].i)));
	LINE_NUMBER(27);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerEffect_addServerEffect_int_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:addServerEffect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerEffect(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(31);
	frame[5].i = ((frame[0].i) - (jint(1)));
	LINE_NUMBER(32);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_2;
	{
	jint temp0 = frame[5].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) != nullptr) goto label_3;
	}
label_2:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(35);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerEffect);
	init_nro_ServerEffect(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = frame[6].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_eff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i)));
	LINE_NUMBER(37);
	((nro_ServerEffect *) NULL_CHECK((frame[6].o)))->F_x = (frame[1].i);
	LINE_NUMBER(38);
	((nro_ServerEffect *) NULL_CHECK((frame[6].o)))->F_y = (frame[2].i);
	LINE_NUMBER(39);
	((nro_ServerEffect *) NULL_CHECK((frame[6].o)))->F_loopCount = (jint(1));
	LINE_NUMBER(40);
	((nro_ServerEffect *) NULL_CHECK((frame[6].o)))->F_trans = (frame[4].i);
	LINE_NUMBER(41);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerEffect_addServerEffect_int_nro_Mob_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:addServerEffect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerEffect(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(45);
	frame[3].i = ((frame[0].i) - (jint(1)));
	LINE_NUMBER(46);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	jint temp0 = frame[3].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_3;
	}
label_2:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(49);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerEffect);
	init_nro_ServerEffect(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = frame[4].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_eff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)));
	LINE_NUMBER(51);
	((nro_ServerEffect *) NULL_CHECK((frame[4].o)))->F_m = (jref) (frame[1].o);
	LINE_NUMBER(52);
	((nro_ServerEffect *) NULL_CHECK((frame[4].o)))->F_loopCount = (jint(1));
	LINE_NUMBER(53);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:addServerEffect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ServerEffect(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(57);
	frame[3].i = ((frame[0].i) - (jint(1)));
	LINE_NUMBER(58);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_2;
	{
	jint temp0 = frame[3].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_efs;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) != nullptr) goto label_3;
	}
label_2:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(61);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ServerEffect);
	init_nro_ServerEffect(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = frame[4].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_eff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)));
	LINE_NUMBER(63);
	((nro_ServerEffect *) NULL_CHECK((frame[4].o)))->F_c = (jref) (frame[1].o);
	LINE_NUMBER(64);
	((nro_ServerEffect *) NULL_CHECK((frame[4].o)))->F_loopCount = (jshort((frame[2].i)));
	LINE_NUMBER(65);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ServerEffect_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_i0;
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(72);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(73);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_countEff = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_countEff) + (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(76);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_countEff) >= (11)) goto label_5;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	}
label_7:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_m;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_m;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_m;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_y) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	}
label_10:;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	frame[2].i = (temp0 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_dy));
	LINE_NUMBER(88);
	jint temp1 = (jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	frame[3].i = (temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_where));
	LINE_NUMBER(89);
	jint temp2 = (jint)SM_main_GameCanvas_isPaint_int_int_R_boolean(ctx, (frame[2].i), (frame[3].i));
	if (temp2 == 0) goto label_5;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_idImg), (frame[2].i), (frame[3].i), ((jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_trans), (jint(3)));
	}
label_5:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ServerEffect_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ServerEffect:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(98);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_i0 = (((jint)((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_i0) + (jint(1)));
	LINE_NUMBER(112);
	jint temp0 = (jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_i0;
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_loopCount = (jshort((((jint)((nro_ServerEffect *) NULL_CHECK(sp[0].o))->F_loopCount) - (jint(1)))));
	LINE_NUMBER(114);
	if (((jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_loopCount) > 0) goto label_8;
	}
	{
	LINE_NUMBER(115);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(117);
	((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_i0 = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(122);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (11)) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_c;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == sp[1].o) goto label_10;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp0 = (jint)((nro_ServerEffect *) NULL_CHECK((frame[0].o)))->F_x;
	LINE_NUMBER(123);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	jint temp1 = (jint)((func_nro_MyVector_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 != 0) goto label_10;
	}
	{
	LINE_NUMBER(124);
	clinit_nro_ServerEffect(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_ServerEffect[] {
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
	(void *) M_nro_ServerEffect_update,
	(void *) M_nro_ServerEffect_paint_lib_mGraphics,
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
};

static FieldMetadata fields[] {
	{ "eff", &class_nro_EffectCharPaint, offsetof(nro_ServerEffect, F_eff), "Lnro/EffectCharPaint;", 2 },
	{ "i0", &class_int, offsetof(nro_ServerEffect, F_i0), "I", 2 },
	{ "x", &class_int, offsetof(nro_ServerEffect, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_ServerEffect, F_y), "I", 2 },
	{ "c", &class_nro_Char, offsetof(nro_ServerEffect, F_c), "Lnro/Char;", 2 },
	{ "m", &class_nro_Mob, offsetof(nro_ServerEffect, F_m), "Lnro/Mob;", 2 },
	{ "loopCount", &class_short, offsetof(nro_ServerEffect, F_loopCount), "S", 2 },
	{ "endTime", &class_long, offsetof(nro_ServerEffect, F_endTime), "J", 2 },
	{ "trans", &class_int, offsetof(nro_ServerEffect, F_trans), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ServerEffect, 0, "()V", 1 },
	{ "addServerEffect", (intptr_t) SM_nro_ServerEffect_addServerEffect_int_int_int_int, 0, "(IIII)V", 9 },
	{ "addServerEffect", (intptr_t) SM_nro_ServerEffect_addServerEffect_int_int_int_int_int, 0, "(IIIII)V", 9 },
	{ "addServerEffect", (intptr_t) SM_nro_ServerEffect_addServerEffect_int_nro_Mob_int, 0, "(ILnro/Mob;I)V", 9 },
	{ "addServerEffect", (intptr_t) SM_nro_ServerEffect_addServerEffect_int_nro_Char_int, 0, "(ILnro/Char;I)V", 9 },
	{ "paint", (intptr_t) M_nro_ServerEffect_paint_lib_mGraphics, VTABLE_nro_ServerEffect_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_ServerEffect_update, VTABLE_nro_ServerEffect_update, "()V", 17 },
};

Class class_nro_ServerEffect{
		.nativeName = (intptr_t) "nro/ServerEffect",
		.parentClass = (intptr_t) &class_nro_Effect2,
		.size = sizeof(nro_ServerEffect),
		.classVtable = (intptr_t) vtable_nro_ServerEffect,
		.staticInitializer = (intptr_t) clinit_nro_ServerEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ServerEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ServerEffect = registerClass(&class_nro_ServerEffect);

}

