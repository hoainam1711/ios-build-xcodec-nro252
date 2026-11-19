#include "nro/PlayerDart.h"
#include "nro/GameScr.h"
#include "java/lang/Math.h"
#include "java/util/Random.h"
#include "java/util/Vector.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/MonsterDart.h"
#include "nro/SmallImage.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/Res.h"
#include "nro/SmallDart.h"
#include "nro/IMapObject.h"
#include "lib/sound/SoundMn.h"
#include "nro/PlayerDart.h"
#include "nro/Char.h"
#include "nro/SkillPaint.h"
#include "nro/DartInfo.h"

extern "C" {


void mark_nro_PlayerDart(jobject object, jint mark, jint depth) {
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
	auto self = (nro_PlayerDart *) object;
	if (self->F_charBelong)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charBelong)->clazz)->markFunction)((jobject) self->F_charBelong, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_darts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_darts)->clazz)->markFunction)((jobject) self->F_darts, mark, depth + 1);
	if (self->F_skillPaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skillPaint)->clazz)->markFunction)((jobject) self->F_skillPaint, mark, depth + 1);
}

void clinit_nro_PlayerDart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_PlayerDart_nro_Char_int_nro_SkillPaint_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PlayerDart:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PlayerDart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vDARTS"_j))));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_darts = (jref) sp[1].o;
	LINE_NUMBER(18);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_life = (jint(0));
	LINE_NUMBER(19);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_dx = (jint(0));
	LINE_NUMBER(20);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_n = (jint(0));
	LINE_NUMBER(21);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_isActive = (jint(1));
	LINE_NUMBER(25);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_skillPaint = (jref) (frame[3].o);
	LINE_NUMBER(26);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong = (jref) (frame[1].o);
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_darts;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_info = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_va = ((jint)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_va);
	LINE_NUMBER(29);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].i);
	LINE_NUMBER(30);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].i);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_charFocus;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((nro_Char *) NULL_CHECK(sp[-1].o))->F_mobFocus;
label_14:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[6].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[6].o))));
	jint temp1 = temp0 - (frame[4].i);
	jint temp2 = (jint)((func_nro_IMapObject_getY_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getY_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[6].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[6].o))));
	jint temp3 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, temp1, (temp2 - (frame[5].i)));
	frame[2].i = temp3;
	LINE_NUMBER(33);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle = (frame[2].i);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp5 = (jint)SM_nro_Res_cos_int_R_int(ctx, (frame[2].i));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_vx = ((temp4 * temp5) >> (10));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp7 = (jint)SM_nro_Res_atan_int_R_int(ctx, (frame[2].i));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_vy = ((temp6 * temp7) >> (10));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_PlayerDart_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PlayerDart:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	if (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_isActive) == 0) goto label_1;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(41);
	M_nro_PlayerDart_endMe(ctx, (frame[0].o));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(46);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp0 >= ((jint)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_xdPercent)) goto label_9;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_tail;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	clinit_nro_SmallDart(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_SmallDart);
	init_nro_SmallDart_int_int(ctx, sp[1].o, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_y));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	jint temp0 = (jint)((func_nro_Char_getX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_getX_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o))));
	if (temp0 <= temp1) goto label_13;
	}
	INST_BIPUSH(10);
	goto label_14;
label_13:;
	INST_BIPUSH(-10);
label_14:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o))));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_life = ((temp0 + (frame[3].i)) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_nro_IMapObject_getY_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getY_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o))));
	jint temp2 = (jint)((func_nro_IMapObject_getH_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getH_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[1].o))));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_dx = ((temp1 - (temp2 / (jint(2)))) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_z = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_z) + (jint(1)));
	LINE_NUMBER(55);
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_life));
	if (temp3 >= (20)) goto label_19;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_dx));
	if (temp0 >= (20)) goto label_19;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_me) == 0) goto label_21;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_charFocus;
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[1].o))->F_damHP;
	jlong temp1 = jlong(0);
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_charFocus;
	jint temp2 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_isCrit;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_charFocus;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, temp0, temp1, temp2, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_isMob));
	}
label_21:;
	{
	LINE_NUMBER(60);
	M_nro_PlayerDart_endMe(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)SM_nro_Res_angle_int_int_R_int(ctx, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_life), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_dx));
	frame[3].i = temp0;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle)));
	if (temp3 < (90)) goto label_24;
	}
	{
	if (((((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_life) * ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_life)) + (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_dx) * ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_dx))) <= (4096)) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle)));
	if (temp0 >= (15)) goto label_26;
	}
	{
	LINE_NUMBER(66);
	((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle = (frame[3].i);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(67);
	if (((frame[3].i) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle)) < 0) goto label_28;
	}
	{
	if (((frame[3].i) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle)) < (180)) goto label_29;
	}
label_28:;
	{
	if (((frame[3].i) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle)) < (-180)) goto label_29;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle) - (15)));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_angle = temp0;
	goto label_25;
	}
label_29:;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_fixangle_int_R_int(ctx, (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle) + (15)));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_angle = temp0;
	}
label_25:;
	{
	LINE_NUMBER(74);
	if (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_va) >= (8192)) goto label_31;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_va = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_va) + (1024));
	}
label_31:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp1 = (jint)SM_nro_Res_cos_int_R_int(ctx, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_vx = ((temp0 * temp1) >> (10));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_va;
	jint temp3 = (jint)SM_nro_Res_atan_int_R_int(ctx, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle));
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_vy = ((temp2 * temp3) >> (10));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_life = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_life) + ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_vx));
	LINE_NUMBER(81);
	frame[3].i = (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_life) >> (10));
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_x) + (frame[3].i));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_life = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_life) & (1023));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_dx = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_dx) + ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_vy));
	LINE_NUMBER(85);
	frame[3].i = (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_dx) >> (10));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_y) + (frame[3].i));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_dx = (((jint)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_dx) & (1023));
	LINE_NUMBER(46);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(90);
	frame[2].i = (jint(0));
	}
label_43:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_SmallDart, sp[0].o);
	frame[3].o = sp[0].o;
	((nro_SmallDart *) NULL_CHECK(sp[0].o))->F_index = (((jint)((nro_SmallDart *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(93);
	jint temp0 = (jint)((nro_SmallDart *) NULL_CHECK((frame[3].o)))->F_index;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_tail;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_47;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (frame[2].i));
	}
label_47:;
	{
	LINE_NUMBER(90);
	INST_IINC(2, 1);
	goto label_43;
	}
label_1:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_PlayerDart_endMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PlayerDart:endMe", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"END ME!"_j))));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isUseSkillAfterCharge) != 0) goto label_2;
	}
	{
	if (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_2;
	}
	{
	if (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_2;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_explode_1) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_explode_1])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((func_nro_Char_setAttack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setAttack])(ctx, sp[0].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isUseSkillAfterCharge) == 0) goto label_5;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isUseSkillAfterCharge = (jint(0));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isLockMove) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_me) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (jint(5))) goto label_8;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isLockMove = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_activeSuperPower_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_activeSuperPower_int_int])(ctx, sp[0].o, ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_5:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_dart = (jref) (jobject(nullptr));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isCreateDark = (jint(0));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaint = (jref) (jobject(nullptr));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaintRandomPaint = (jref) (jobject(nullptr));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_charBelong;
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, sp[0].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_PlayerDart_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PlayerDart:paint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if (((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_isActive) == 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)SM_nro_MonsterDart_findDirIndexFromAngle_int_R_int(ctx, ((360) - ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_angle)));
	frame[2].i = temp0;
	LINE_NUMBER(128);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_FRAME;
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)));
	LINE_NUMBER(129);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_TRANSFORM;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[4].i = (temp1 / (jint(2)));
	}
label_6:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_nro_SmallDart, sp[0].o));
	LINE_NUMBER(134);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_tailBorder;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index))), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_y), (jint(0)), (jint(3)));
	LINE_NUMBER(132);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(137);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_headBorder;
	frame[4].i = (temp0 % (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_headBorder;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))), (frame[3].i))), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].i), (jint(3)));
	LINE_NUMBER(142);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_14;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[5].o = (checkCast(ctx, &class_nro_SmallDart, sp[0].o));
	LINE_NUMBER(144);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_tail;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index))), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_y), (jint(0)), (jint(3)));
	LINE_NUMBER(142);
	INST_IINC(6, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[1].o))->F_head;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))), (frame[3].i))), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].i), (jint(3)));
	LINE_NUMBER(149);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_20;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_darts;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[5].o = (checkCast(ctx, &class_nro_SmallDart, sp[0].o));
	LINE_NUMBER(151);
	clinit_nro_MonsterDart(ctx);
	sp[0].o = (jobject)SF_nro_MonsterDart_r;
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, (100));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	if (temp1 >= ((jint)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_id)) goto label_23;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_xd1;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index));
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	{
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((nro_DartInfo *) NULL_CHECK(sp[0].o))->F_xd2;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, sp[0].o, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_index));
	sp[0].i = temp0;
	sp += 1;
	}
label_26:;
	{
	sp -= 2;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((nro_SmallDart *) NULL_CHECK((frame[5].o)))->F_y), (jint(0)), (jint(3)));
	}
label_23:;
	{
	LINE_NUMBER(149);
	INST_IINC(6, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(156);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(16711680)));
	}
label_1:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_PlayerDart[] {
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
	(void *) M_nro_PlayerDart_update,
	(void *) M_nro_PlayerDart_endMe,
	(void *) M_nro_PlayerDart_paint_lib_mGraphics,
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
	{ "charBelong", &class_nro_Char, offsetof(nro_PlayerDart, F_charBelong), "Lnro/Char;", 2 },
	{ "info", &class_nro_DartInfo, offsetof(nro_PlayerDart, F_info), "Lnro/DartInfo;", 2 },
	{ "darts", &class_nro_MyVector, offsetof(nro_PlayerDart, F_darts), "Lnro/MyVector;", 2 },
	{ "angle", &class_int, offsetof(nro_PlayerDart, F_angle), "I", 2 },
	{ "vx", &class_int, offsetof(nro_PlayerDart, F_vx), "I", 2 },
	{ "vy", &class_int, offsetof(nro_PlayerDart, F_vy), "I", 2 },
	{ "va", &class_int, offsetof(nro_PlayerDart, F_va), "I", 2 },
	{ "x", &class_int, offsetof(nro_PlayerDart, F_x), "I", 2 },
	{ "y", &class_int, offsetof(nro_PlayerDart, F_y), "I", 2 },
	{ "z", &class_int, offsetof(nro_PlayerDart, F_z), "I", 2 },
	{ "life", &class_int, offsetof(nro_PlayerDart, F_life), "I", 2 },
	{ "dx", &class_int, offsetof(nro_PlayerDart, F_dx), "I", 2 },
	{ "n", &class_boolean, offsetof(nro_PlayerDart, F_n), "Z", 2 },
	{ "isActive", &class_boolean, offsetof(nro_PlayerDart, F_isActive), "Z", 2 },
	{ "skillPaint", &class_nro_SkillPaint, offsetof(nro_PlayerDart, F_skillPaint), "Lnro/SkillPaint;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_PlayerDart_nro_Char_int_nro_SkillPaint_int_int, 0, "(Lnro/Char;ILnro/SkillPaint;II)V", 1 },
	{ "update", (intptr_t) M_nro_PlayerDart_update, VTABLE_nro_PlayerDart_update, "()V", 17 },
	{ "endMe", (intptr_t) M_nro_PlayerDart_endMe, VTABLE_nro_PlayerDart_endMe, "()V", 2 },
	{ "paint", (intptr_t) M_nro_PlayerDart_paint_lib_mGraphics, VTABLE_nro_PlayerDart_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
};

Class class_nro_PlayerDart{
		.nativeName = (intptr_t) "nro/PlayerDart",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_PlayerDart),
		.classVtable = (intptr_t) vtable_nro_PlayerDart,
		.staticInitializer = (intptr_t) clinit_nro_PlayerDart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_PlayerDart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_PlayerDart = registerClass(&class_nro_PlayerDart);

}

