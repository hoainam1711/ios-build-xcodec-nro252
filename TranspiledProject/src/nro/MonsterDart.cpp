#include "nro/MonsterDart.h"
#include "nro/GameScr.h"
#include "java/lang/Math.h"
#include "java/util/Random.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/MonsterDart.h"
#include "nro/SmallImage.h"
#include "nro/ServerEffect.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "nro/SmallDart.h"
#include "lib/sound/SoundMn.h"
#include "nro/Effect2.h"
#include "nro/Char.h"
#include "nro/DartInfo.h"
#include "java/lang/System.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_MonsterDart_r;
jobject SF_nro_MonsterDart_ARROWINDEX;
jobject SF_nro_MonsterDart_TRANSFORM;
jobject SF_nro_MonsterDart_FRAME;

void mark_nro_MonsterDart(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_MonsterDart_r)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MonsterDart_r)->clazz)->markFunction)((jobject) SF_nro_MonsterDart_r, mark, depth + 1);
		if (SF_nro_MonsterDart_ARROWINDEX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MonsterDart_ARROWINDEX)->clazz)->markFunction)((jobject) SF_nro_MonsterDart_ARROWINDEX, mark, depth + 1);
		if (SF_nro_MonsterDart_TRANSFORM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MonsterDart_TRANSFORM)->clazz)->markFunction)((jobject) SF_nro_MonsterDart_TRANSFORM, mark, depth + 1);
		if (SF_nro_MonsterDart_FRAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MonsterDart_FRAME)->clazz)->markFunction)((jobject) SF_nro_MonsterDart_FRAME, mark, depth + 1);
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
	auto self = (nro_MonsterDart *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_darts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_darts)->clazz)->markFunction)((jobject) self->F_darts, mark, depth + 1);
}

void SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(jcontext ctx, jint param0, jint param1, jbool param2, jlong param3, jlong param4, jobject param5, jint param6) {
	jtype frame[21];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MonsterDart:addMonsterDart", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MonsterDart(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].l = param3;
	frame[5].l = param4;
	frame[7].o = param5;
	frame[8].i = param6;
	{
	LINE_NUMBER(31);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	clinit_nro_MonsterDart(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MonsterDart);
	init_nro_MonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, sp[1].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].l), (frame[5].l), (frame[7].o), (frame[8].i));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_MonsterDart_int_int_boolean_long_long_nro_Char_int(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jlong param3, jlong param4, jobject param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MonsterDart:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MonsterDart(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].l = param3;
	frame[6].l = param4;
	frame[8].o = param5;
	frame[9].i = param6;
	{
	LINE_NUMBER(34);
	init_nro_Effect2(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_isSpeedUp = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vDarts"_j))));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_darts = (jref) sp[1].o;
	LINE_NUMBER(24);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dx = (jint(0));
	LINE_NUMBER(25);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dy = (jint(0));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_darts;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_info = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i)));
	LINE_NUMBER(36);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(37);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(38);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dame = (frame[4].l);
	LINE_NUMBER(39);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dameMp = (frame[6].l);
	LINE_NUMBER(40);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[8].o);
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_va = ((jint)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_va);
	LINE_NUMBER(42);
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx) - (frame[1].i)), (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy) - (frame[2].i)));
	frame[10].i = temp0;
	LINE_NUMBER(43);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle = (frame[10].i);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp2 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[10].i));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_vx = ((temp1 * temp2) >> (10));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp4 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[10].i));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_vy = ((temp3 * temp4) >> (10));
	LINE_NUMBER(46);
	if ((frame[1].i) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_17;
	}
	{
	if ((frame[1].i) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_17;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_mobKame_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_mobKame_int])(ctx, sp[0].o, (frame[9].i));
	}
label_17:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_MonsterDart_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MonsterDart:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp0 >= ((jint)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_xdPercent)) goto label_2;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_tail;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	clinit_nro_SmallDart(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_SmallDart);
	init_nro_SmallDart_int_int(ctx, sp[1].o, ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_y));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	sp += 1;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dx = (sp[1].i - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	sp += 1;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dy = ((sp[1].i - (10)) - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(61);
	frame[2].i = (60);
	LINE_NUMBER(62);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != 0) goto label_13;
	}
	{
	LINE_NUMBER(63);
	frame[2].i = (600);
	}
label_13:;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_z = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_z) + (jint(1)));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (jint(5))) goto label_17;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_17;
	}
label_16:;
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o != nullptr) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 3;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_x = (sp[1].i + ((sp[2].i - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(2))));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].i = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 3;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_y = (sp[1].i + ((sp[2].i - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(2))));
	}
label_18:;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dx));
	if (temp0 >= (16)) goto label_24;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dy));
	if (temp0 < (16)) goto label_25;
	}
label_24:;
	{
	if (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_z) <= (frame[2].i)) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID) < 0) goto label_27;
	}
	{
	if ((longCompare(((jlong)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dameMp), (jlong(-1ll)))) == 0) goto label_27;
	}
	{
	LINE_NUMBER(74);
	if ((longCompare(((jlong)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dameMp), (jlong(-100ll)))) == 0) goto label_29;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dame), ((jlong)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dameMp), (jint(0)), (jint(1)));
	goto label_27;
	}
label_29:;
	{
	LINE_NUMBER(77);
	jint temp0 = 80;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, temp0, sp[0].o, (jint(1)));
	}
label_27:;
	{
	LINE_NUMBER(81);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect2;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(82);
	if ((longCompare(((jlong)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dameMp), (jlong(-100ll)))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(83);
	jint temp0 = 81;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_c;
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, temp0, sp[0].o, (jint(1)));
	LINE_NUMBER(84);
	if (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_26;
	}
	{
	if (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_26;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_explode_2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_explode_2])(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dx), ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dy));
	frame[2].i = temp0;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle)));
	if (temp3 < (90)) goto label_35;
	}
	{
	if (((((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dx) * ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dx)) + (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dy) * ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dy))) <= (4096)) goto label_36;
	}
label_35:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle)));
	if (temp0 >= (15)) goto label_37;
	}
	{
	LINE_NUMBER(92);
	((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle = (frame[2].i);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(93);
	if (((frame[2].i) - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle)) < 0) goto label_39;
	}
	{
	if (((frame[2].i) - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle)) < (180)) goto label_40;
	}
label_39:;
	{
	if (((frame[2].i) - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle)) < (-180)) goto label_40;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle) - (15)));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_angle = temp0;
	goto label_36;
	}
label_40:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle) + (15)));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_angle = temp0;
	}
label_36:;
	{
	LINE_NUMBER(100);
	if (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_va) >= (8192)) goto label_42;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_va) + (1024));
	}
label_42:;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp1 = (jint)SM_nro_Res_cos_int_R_int(ctx, ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_vx = ((temp0 * temp1) >> (10));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp3 = (jint)SM_nro_Res_atan_int_R_int(ctx, ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle));
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_vy = ((temp2 * temp3) >> (10));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dx = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dx) + ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_vx));
	LINE_NUMBER(107);
	frame[2].i = (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dx) >> (10));
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_x) + (frame[2].i));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dx = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dx) & (1023));
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dy) + ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_vy));
	LINE_NUMBER(111);
	frame[2].i = (((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_dy) >> (10));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].i));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dy = (((jint)((nro_MonsterDart *) NULL_CHECK(sp[0].o))->F_dy) & (1023));
	LINE_NUMBER(54);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(116);
	frame[1].i = (jint(0));
	}
label_54:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_55;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_SmallDart, sp[0].o);
	frame[2].o = sp[0].o;
	((nro_SmallDart *) NULL_CHECK(sp[0].o))->F_index = (((jint)((nro_SmallDart *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(119);
	jint temp0 = (jint)((nro_SmallDart *) NULL_CHECK((frame[2].o)))->F_index;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_tail;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_59;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (frame[1].i));
	}
label_59:;
	{
	LINE_NUMBER(116);
	INST_IINC(1, 1);
	goto label_54;
	}
label_55:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_MonsterDart_findDirIndexFromAngle_int_R_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MonsterDart:findDirIndexFromAngle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MonsterDart(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(127);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_ARROWINDEX;
	if (temp0 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(128);
	jint temp0 = frame[0].i;
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_ARROWINDEX;
	if (temp0 < ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)))) goto label_4;
	}
	{
	jint temp0 = frame[0].i;
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_ARROWINDEX;
	if (temp0 > ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + (jint(1)))))) goto label_4;
	}
	{
	LINE_NUMBER(129);
	if ((frame[1].i) < (16)) goto label_6;
	}
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_4:;
	{
	LINE_NUMBER(127);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_nro_MonsterDart_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MonsterDart:paint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)SM_nro_MonsterDart_findDirIndexFromAngle_int_R_int(ctx, ((360) - ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_angle)));
	frame[2].i = temp0;
	LINE_NUMBER(142);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_FRAME;
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)));
	LINE_NUMBER(143);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_TRANSFORM;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[4].i = (temp1 / (jint(2)));
	}
label_4:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_nro_SmallDart, sp[0].o));
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_tailBorder;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index))), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_y), (jint(0)), (jint(3)));
	LINE_NUMBER(146);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(151);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_headBorder;
	frame[4].i = (temp0 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_headBorder;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))), (frame[3].i))), ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].i), (jint(3)));
	LINE_NUMBER(156);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[5].o = (checkCast(ctx, &class_nro_SmallDart, sp[0].o));
	LINE_NUMBER(158);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_tail;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index))), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_y), (jint(0)), (jint(3)));
	LINE_NUMBER(156);
	INST_IINC(6, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_head;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))), (frame[3].i))), ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].i), (jint(3)));
	LINE_NUMBER(163);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_18;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[5].o = (checkCast(ctx, &class_nro_SmallDart, sp[0].o));
	LINE_NUMBER(165);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_r;
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, (100));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp1 >= ((jint)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_id)) goto label_21;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_xd1;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index));
	sp[0].i = temp0;
	sp += 1;
	goto label_24;
	}
label_23:;
	{
	sp[0].o = (jobject)((nro_MonsterDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_xd2;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index));
	sp[0].i = temp0;
	sp += 1;
	}
label_24:;
	{
	sp -= 2;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_y), (jint(0)), (jint(3)));
	}
label_21:;
	{
	LINE_NUMBER(163);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_MonsterDart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Effect2(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MonsterDart:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MonsterDart(ctx);
	{
	LINE_NUMBER(12);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	init_java_util_Random_long(ctx, sp[0].o, temp0);
	clinit_nro_MonsterDart(ctx);
	SF_nro_MonsterDart_r = sp[0].o;
	LINE_NUMBER(26);
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
	clinit_nro_MonsterDart(ctx);
	SF_nro_MonsterDart_ARROWINDEX = sp[0].o;
	LINE_NUMBER(27);
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
	clinit_nro_MonsterDart(ctx);
	SF_nro_MonsterDart_TRANSFORM = sp[0].o;
	LINE_NUMBER(28);
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
	clinit_nro_MonsterDart(ctx);
	SF_nro_MonsterDart_FRAME = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MonsterDart[] {
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
	(void *) M_nro_MonsterDart_update,
	(void *) M_nro_MonsterDart_paint_lib_mGraphics,
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
	{ "va", &class_int, offsetof(nro_MonsterDart, F_va), "I", 2 },
	{ "info", &class_nro_DartInfo, offsetof(nro_MonsterDart, F_info), "Lnro/DartInfo;", 2 },
	{ "r", &class_java_util_Random, (intptr_t) &SF_nro_MonsterDart_r, "Ljava/util/Random;", 9 },
	{ "angle", &class_int, offsetof(nro_MonsterDart, F_angle), "I", 2 },
	{ "vx", &class_int, offsetof(nro_MonsterDart, F_vx), "I", 2 },
	{ "vy", &class_int, offsetof(nro_MonsterDart, F_vy), "I", 2 },
	{ "x", &class_int, offsetof(nro_MonsterDart, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_MonsterDart, F_y), "I", 2 },
	{ "z", &class_int, offsetof(nro_MonsterDart, F_z), "I", 2 },
	{ "isSpeedUp", &class_boolean, offsetof(nro_MonsterDart, F_isSpeedUp), "Z", 2 },
	{ "dame", &class_long, offsetof(nro_MonsterDart, F_dame), "J", 2 },
	{ "dameMp", &class_long, offsetof(nro_MonsterDart, F_dameMp), "J", 2 },
	{ "c", &class_nro_Char, offsetof(nro_MonsterDart, F_c), "Lnro/Char;", 2 },
	{ "darts", &class_nro_MyVector, offsetof(nro_MonsterDart, F_darts), "Lnro/MyVector;", 2 },
	{ "dx", &class_int, offsetof(nro_MonsterDart, F_dx), "I", 2 },
	{ "dy", &class_int, offsetof(nro_MonsterDart, F_dy), "I", 2 },
	{ "ARROWINDEX", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_MonsterDart_ARROWINDEX, "[I", 10 },
	{ "TRANSFORM", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_MonsterDart_TRANSFORM, "[I", 25 },
	{ "FRAME", getArrayClass(&class_byte, 1), (intptr_t) &SF_nro_MonsterDart_FRAME, "[B", 25 },
};

static MethodMetadata methods[] {
	{ "addMonsterDart", (intptr_t) SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int, 0, "(IIZJJLnro/Char;I)V", 9 },
	{ "<init>", (intptr_t) init_nro_MonsterDart_int_int_boolean_long_long_nro_Char_int, 0, "(IIZJJLnro/Char;I)V", 2 },
	{ "update", (intptr_t) M_nro_MonsterDart_update, VTABLE_nro_MonsterDart_update, "()V", 17 },
	{ "findDirIndexFromAngle", (intptr_t) SM_nro_MonsterDart_findDirIndexFromAngle_int_R_int, 0, "(I)I", 9 },
	{ "paint", (intptr_t) M_nro_MonsterDart_paint_lib_mGraphics, VTABLE_nro_MonsterDart_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_MonsterDart, 0, "()V", 8 },
};

Class class_nro_MonsterDart{
		.nativeName = (intptr_t) "nro/MonsterDart",
		.parentClass = (intptr_t) &class_nro_Effect2,
		.size = sizeof(nro_MonsterDart),
		.classVtable = (intptr_t) vtable_nro_MonsterDart,
		.staticInitializer = (intptr_t) clinit_nro_MonsterDart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MonsterDart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MonsterDart = registerClass(&class_nro_MonsterDart);

}

