#include "nro/Mabu.h"
#include "nro/GameScr.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "main/GameCanvas.h"
#include "nro/Mabu.h"
#include "nro/EffectData.h"
#include "nro/Effect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Res.h"
#include "nro/Char.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_Mabu_data1;
jobject SF_nro_Mabu_data2;

void mark_nro_Mabu(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Mabu_data1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mabu_data1)->clazz)->markFunction)((jobject) SF_nro_Mabu_data1, mark, depth + 1);
		if (SF_nro_Mabu_data2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mabu_data2)->clazz)->markFunction)((jobject) SF_nro_Mabu_data2, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Char(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_Mabu *) object;
	if (self->F_effEat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effEat)->clazz)->markFunction)((jobject) self->F_effEat, mark, depth + 1);
	if (self->F_focus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focus)->clazz)->markFunction)((jobject) self->F_focus, mark, depth + 1);
	if (self->F_charAttack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charAttack)->clazz)->markFunction)((jobject) self->F_charAttack, mark, depth + 1);
	if (self->F_damageAttack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damageAttack)->clazz)->markFunction)((jobject) self->F_damageAttack, mark, depth + 1);
	if (self->F_skill1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skill1)->clazz)->markFunction)((jobject) self->F_skill1, mark, depth + 1);
	if (self->F_skill2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skill2)->clazz)->markFunction)((jobject) self->F_skill2, mark, depth + 1);
	if (self->F_skill3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skill3)->clazz)->markFunction)((jobject) self->F_skill3, mark, depth + 1);
	if (self->F_skill4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skill4)->clazz)->markFunction)((jobject) self->F_skill4, mark, depth + 1);
	if (self->F_skills)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skills)->clazz)->markFunction)((jobject) self->F_skills, mark, depth + 1);
}

void clinit_nro_Mabu(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Char(ctx);
}

void M_nro_Mabu_eat_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mabu:eat", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_nro_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[1].o, (105), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (20)), (jint(2)), (jint(1)), (jint(-1)));
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_effEat = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(32);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_3;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_focus = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_GameScr_findCharInMap_int_R_nro_Char(ctx, (frame[1].i));
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_focus = (jref) sp[1].o;
	}
label_5:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mabu_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mabu:checkFrameTick", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) != 0) goto label_1;
	}
	{
	LINE_NUMBER(41);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick) != (11)) goto label_3;
	}
	{
	LINE_NUMBER(42);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_addFoot = (jint(1));
	LINE_NUMBER(43);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (19), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (20)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(46);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick) < ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(47);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID = (jint(2));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(52);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) != (jint(1))) goto label_8;
	}
	{
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick) != ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_8;
	}
	{
	LINE_NUMBER(53);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID = (jint(3));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (15));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_Mabu *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(57);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(58);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(61);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_frame = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick)));
	}
label_11:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_Mabu(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mabu:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mabu(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(65);
	init_nro_Char(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (30));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (jint(5));
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_skill1 = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (15));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (10);
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_skill2 = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (26));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (12);
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_skill3 = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (15);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (16);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (16);
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_skill4 = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skill1;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skill2;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skill3;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skill4;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_skills = (jref) sp[1].o;
	LINE_NUMBER(67);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID = (jint(-1));
	LINE_NUMBER(68);
	clinit_nro_Mabu(ctx);
	SF_nro_Mabu_data1 = (jobject(nullptr));
	LINE_NUMBER(69);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_Mabu(ctx);
	SF_nro_Mabu_data1 = sp[0].o;
	LINE_NUMBER(70);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (102));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(73);
	clinit_nro_Mabu(ctx);
	sp[0].o = (jobject)SF_nro_Mabu_data1;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(74);
	clinit_nro_Mabu(ctx);
	sp[0].o = (jobject)SF_nro_Mabu_data1;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/102/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(76);
	goto label_20;
label_2:;
	LINE_NUMBER(75);
	INST_ASTORE(2);
label_20:;
	{
	LINE_NUMBER(78);
	clinit_nro_Mabu(ctx);
	SF_nro_Mabu_data2 = (jobject(nullptr));
	LINE_NUMBER(79);
	clinit_nro_EffectData(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[0].o);
	clinit_nro_Mabu(ctx);
	SF_nro_Mabu_data2 = sp[0].o;
	LINE_NUMBER(80);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/effectdata/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (103));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(83);
	clinit_nro_Mabu(ctx);
	sp[0].o = (jobject)SF_nro_Mabu_data2;
	((func_nro_EffectData_readData2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData2_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(84);
	clinit_nro_Mabu(ctx);
	sp[0].o = (jobject)SF_nro_Mabu_data2;
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/effectdata/103/img.png"_j))));
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(86);
	goto label_24;
label_6:;
	LINE_NUMBER(85);
	INST_ASTORE(2);
label_24:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long(jcontext ctx, jobject self, jbyte param0, jshort param1, jshort param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mabu:setSkill", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(90);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID = (frame[1].i);
	LINE_NUMBER(91);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo = (frame[2].i);
	LINE_NUMBER(92);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_yTo = (frame[3].i);
	LINE_NUMBER(93);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_lastDir = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(95);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack = (jref) (frame[4].o);
	LINE_NUMBER(96);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_damageAttack = (jref) (frame[5].o);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mabu_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mabu:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	if (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_t) < (30)) goto label_3;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	frame[1].o = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_x;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((temp1 - ((jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_x)) / (jint(4))));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	frame[1].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	jint temp2 = (jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_y;
	jint temp3 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = (temp2 + ((temp3 - ((jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_y)) / (jint(4))));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isMabuHold = (jint(1));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	sp += 1;
	if (temp0 <= ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_trans = sp[1].i;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	frame[1].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((temp1 - ((jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_x)) / (jint(3))));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	frame[1].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = frame[1].o;
	jint temp2 = (jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp3 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_effEat;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = (temp2 + ((temp3 - ((jint)((nro_Effect *) NULL_CHECK(sp[1].o))->F_y)) / (jint(3))));
	}
label_1:;
	{
	LINE_NUMBER(119);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) != (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(120);
	M_nro_Char_update(ctx, (frame[0].o));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(122);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) != 0) goto label_20;
	}
	{
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_addFoot) == 0) goto label_20;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_20;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mabu *) NULL_CHECK(sp[0].o))->F_xdis;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_22;
	}
	INST_BIPUSH(30);
	goto label_23;
label_22:;
	INST_BIPUSH(-30);
label_23:;
	{
	sp -= 3;
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_xdis = (sp[1].i + sp[2].i);
	LINE_NUMBER(125);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (103), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xdis)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (20)), (jint(2)), (jint(1)), (jint(-1)));
	frame[1].o = sp[0].o;
	sp += 1;
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_26;
	}
	INST_ICONST(0);
	goto label_27;
label_26:;
	INST_ICONST(1);
label_27:;
	{
	sp -= 2;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_trans = sp[1].i;
	LINE_NUMBER(126);
	SM_nro_EffecMn_addEff_nro_Effect(ctx, (frame[1].o));
	LINE_NUMBER(127);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_30;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xdis)) >= ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_31;
	}
label_30:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(-1))) goto label_20;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xdis)) > ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo)) goto label_20;
	}
label_31:;
	{
	LINE_NUMBER(128);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_addFoot = (jint(0));
	LINE_NUMBER(129);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID = (jint(-1));
	LINE_NUMBER(130);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xdis = (jint(0));
	LINE_NUMBER(131);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(132);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_lastDir);
	LINE_NUMBER(134);
	frame[2].i = (jint(0));
	}
label_37:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_damageAttack;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[2].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(134);
	INST_IINC(2, 1);
	goto label_37;
	}
label_20:;
	{
	LINE_NUMBER(140);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) != (jint(3))) goto label_19;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_xTo = ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_pIndex)))))->F_cx);
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack;
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_yTo = ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_pIndex)))))->F_cy);
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) / (jint(3))));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_yTo) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) / (jint(3))));
	LINE_NUMBER(145);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_45;
	}
	{
	LINE_NUMBER(146);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (19), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_45:;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo)));
	if (temp0 > (20)) goto label_19;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_yTo)));
	if (temp0 > (20)) goto label_19;
	}
	{
	LINE_NUMBER(150);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_xTo);
	LINE_NUMBER(151);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_yTo);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_pIndex));
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_damageAttack;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_pIndex))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	((nro_Mabu *) NULL_CHECK(sp[0].o))->F_pIndex = (((jint)((nro_Mabu *) NULL_CHECK(sp[0].o))->F_pIndex) + (jint(1)));
	LINE_NUMBER(154);
	jint temp0 = (jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_pIndex;
	sp[0].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_charAttack;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(155);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID = (jint(-1));
	LINE_NUMBER(156);
	((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_pIndex = (jint(0));
	}
label_19:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mabu_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mabu:paint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(166);
	M_nro_Char_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(168);
	((func_nro_Mabu_paintShadow_lib_mGraphics) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mabu_paintShadow_lib_mGraphics])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(169);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skills;
	((func_nro_Mabu_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mabu_checkFrameTick_Array1_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID))));
	LINE_NUMBER(171);
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) == 0) goto label_7;
	}
	{
	if (((jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_skillID) == (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(172);
	clinit_nro_Mabu(ctx);
	sp[0].o = (jobject)SF_nro_Mabu_data2;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	INST_ICONST(1);
label_10:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(174);
	clinit_nro_Mabu(ctx);
	sp[0].o = (jobject)SF_nro_Mabu_data1;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_Mabu *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	INST_ICONST(1);
label_13:;
	INST_ICONST(2);
	POP_N(7); // Pop method args
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i);
label_11:;
	{
	LINE_NUMBER(177);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	}
label_3:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Mabu[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_nro_Char_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_nro_Char_getX_R_int,
	(void *) M_nro_Char_getY_R_int,
	(void *) M_nro_Char_getW_R_int,
	(void *) M_nro_Char_getH_R_int,
	(void *) M_nro_Char_stopMoving,
	(void *) M_nro_Char_isInvisible_R_boolean,
	(void *) M_nro_Char_applyCharLevelPercent,
	(void *) M_nro_Char_getdxSkill_R_int,
	(void *) M_nro_Char_getdySkill_R_int,
	(void *) M_nro_Char_getStrLevel_R_java_lang_String,
	(void *) M_nro_Char_avatarz_R_int,
	(void *) M_nro_Char_setPowerInfo_java_lang_String_short_short_short,
	(void *) M_nro_Char_addInfo_java_lang_String,
	(void *) M_nro_Char_boxSort,
	(void *) M_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill,
	(void *) M_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint,
	(void *) M_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint,
	(void *) M_nro_Char_isInWaypoint_R_boolean,
	(void *) M_nro_Char_soundUpdate,
	(void *) M_nro_Mabu_update,
	(void *) M_nro_Char_updateEffect,
	(void *) M_nro_Char_checkPerformEndMovePointAction,
	(void *) M_nro_Char_checkHideCharName,
	(void *) M_nro_Char_updateSkillPaint,
	(void *) M_nro_Char_SetNum_int_int,
	(void *) M_nro_Char_updateCharDeadFly,
	(void *) M_nro_Char_updateResetPoint,
	(void *) M_nro_Char_updateSkillStand,
	(void *) M_nro_Char_updateCharAutoJump,
	(void *) M_nro_Char_hide,
	(void *) M_nro_Char_show,
	(void *) M_nro_Char_updateCharStand,
	(void *) M_nro_Char_updateSuperEff,
	(void *) M_nro_Char_getSoundVolumn_R_float,
	(void *) M_nro_Char_updateCharRun,
	(void *) M_nro_Char_stop,
	(void *) M_nro_Char_updateCharJump,
	(void *) M_nro_Char_setCharFallFromJump,
	(void *) M_nro_Char_updateCharFall,
	(void *) M_nro_Char_updateCharFly,
	(void *) M_nro_Char_updateMount,
	(void *) M_nro_Mabu_checkFrameTick_Array1_int,
	(void *) M_nro_Char_paintMount2_lib_mGraphics,
	(void *) M_nro_Char_setMountIsStart,
	(void *) M_nro_Char_checkDelayFallIfTooHigh,
	(void *) M_nro_Char_setDefaultPart,
	(void *) M_nro_Char_setDefaultWeapon,
	(void *) M_nro_Char_setDefaultBody,
	(void *) M_nro_Char_setDefaultLeg,
	(void *) M_nro_Char_isSelectingSkillUseAlone_R_boolean,
	(void *) M_nro_Char_x_R_boolean,
	(void *) M_nro_Char_isSelectingSkillBuffToPlayer_R_boolean,
	(void *) M_nro_Char_isUseChargeSkill_R_boolean,
	(void *) M_nro_Char_setSkillPaint_nro_SkillPaint_int,
	(void *) M_nro_Char_sendUseChargeSkill,
	(void *) M_nro_Char_stopUseChargeSkill,
	(void *) M_nro_Char_useChargeSkill_boolean,
	(void *) M_nro_Char_setAutoSkillPaint_nro_SkillPaint_int,
	(void *) M_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint,
	(void *) M_nro_Char_setAttack,
	(void *) M_nro_Char_isOutX_R_boolean,
	(void *) M_nro_Char_isPaint_R_boolean,
	(void *) M_nro_Char_createShadow_int_int_int,
	(void *) M_nro_Char_setMabuHold_boolean,
	(void *) M_nro_Mabu_paint_lib_mGraphics,
	(void *) M_nro_Char_paintEff_Pet_lib_mGraphics,
	(void *) M_nro_Char_paintEffect_lib_mGraphics,
	(void *) M_nro_Char_paintHp_lib_mGraphics_int_int,
	(void *) M_nro_Char_paintShadow_lib_mGraphics,
	(void *) M_nro_Char_updateShadown,
	(void *) M_nro_Char_paintCharWithoutSkill_lib_mGraphics,
	(void *) M_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean,
	(void *) M_nro_Char_isCharBodyImageID_int_R_boolean,
	(void *) M_nro_Char_paint_lib_mGraphics_int_int_int,
	(void *) M_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int,
	(void *) M_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean,
	(void *) M_nro_Char_paintCharWithSkill_lib_mGraphics,
	(void *) M_nro_Char_moveTo_int_int_int,
	(void *) M_nro_Char_searchFocus,
	(void *) M_nro_Char_clearFocus_int,
	(void *) M_nro_Char_isAttacPlayerStatus_R_boolean,
	(void *) M_nro_Char_setHoldChar_nro_Char,
	(void *) M_nro_Char_setHoldMob_nro_Mob,
	(void *) M_nro_Char_findNextFocusByKey,
	(void *) M_nro_Char_deFocusNPC,
	(void *) M_nro_Char_updateCharInBridge,
	(void *) M_nro_Char_doInjure_long_long_boolean_boolean,
	(void *) M_nro_Char_doInjure,
	(void *) M_nro_Char_startDie_short_short,
	(void *) M_nro_Char_waitToDie_short_short,
	(void *) M_nro_Char_liveFromDead,
	(void *) M_nro_Char_doUsePotion_R_boolean,
	(void *) M_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean,
	(void *) M_nro_Char_focusManualTo_java_lang_Object,
	(void *) M_nro_Char_focusToAttack_R_boolean,
	(void *) M_nro_Char_addDustEff_int,
	(void *) M_nro_Char_removeHoleEff,
	(void *) M_nro_Char_removeProtectEff,
	(void *) M_nro_Char_removeBlindEff,
	(void *) M_nro_Char_removeEffect,
	(void *) M_nro_Char_setPos_short_short_byte,
	(void *) M_nro_Char_removeHuytSao,
	(void *) M_nro_Char_fusionComplete,
	(void *) M_nro_Char_setFusion_byte,
	(void *) M_nro_Char_removeSleepEff,
	(void *) M_nro_Char_setPartOld,
	(void *) M_nro_Char_addServerEffect_int_int_int_int,
	(void *) M_nro_Char_resetPartTemp,
	(void *) M_nro_Char_getEffById_int_R_nro_Effect,
	(void *) M_nro_Char_addEffChar_nro_Effect,
	(void *) M_nro_Char_removeEffChar_int_int,
	(void *) M_nro_Char_paintEffBehind_lib_mGraphics,
	(void *) M_nro_Char_paintEffFront_lib_mGraphics,
	(void *) M_nro_Char_updEffChar,
	(void *) M_nro_Char_checkLuong_R_int,
	(void *) M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int,
	(void *) M_nro_Char_updateFHead,
	(void *) M_nro_Char_getFHead_int_R_int,
	(void *) M_nro_Char_paintHat_behind_lib_mGraphics_int_int,
	(void *) M_nro_Char_sendNewAttack_short,
	(void *) M_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte,
	(void *) M_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte,
	(void *) M_nro_Char_clone_R_nro_Char,
	(void *) M_nro_Char_containsCaiTrang_int_R_boolean,
	(void *) M_nro_Mabu_eat_int,
	(void *) M_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long,
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
	{ "getX", "()I" },
	{ "getY", "()I" },
	{ "getW", "()I" },
	{ "getH", "()I" },
	{ "stopMoving", "()V" },
	{ "isInvisible", "()Z" },
	{ "applyCharLevelPercent", "()V" },
	{ "getdxSkill", "()I" },
	{ "getdySkill", "()I" },
	{ "getStrLevel", "()Ljava/lang/String;" },
	{ "avatarz", "()I" },
	{ "setPowerInfo", "(Ljava/lang/String;SSS)V" },
	{ "addInfo", "(Ljava/lang/String;)V" },
	{ "boxSort", "()V" },
	{ "getSkill", "(Lnro/SkillTemplate;)Lnro/Skill;" },
	{ "isInEnterOfflinePoint", "()Lnro/Waypoint;" },
	{ "isInEnterOnlinePoint", "()Lnro/Waypoint;" },
	{ "isInWaypoint", "()Z" },
	{ "soundUpdate", "()V" },
	{ "update", "()V" },
	{ "updateEffect", "()V" },
	{ "checkPerformEndMovePointAction", "()V" },
	{ "checkHideCharName", "()V" },
	{ "updateSkillPaint", "()V" },
	{ "SetNum", "(II)V" },
	{ "updateCharDeadFly", "()V" },
	{ "updateResetPoint", "()V" },
	{ "updateSkillStand", "()V" },
	{ "updateCharAutoJump", "()V" },
	{ "hide", "()V" },
	{ "show", "()V" },
	{ "updateCharStand", "()V" },
	{ "updateSuperEff", "()V" },
	{ "getSoundVolumn", "()F" },
	{ "updateCharRun", "()V" },
	{ "stop", "()V" },
	{ "updateCharJump", "()V" },
	{ "setCharFallFromJump", "()V" },
	{ "updateCharFall", "()V" },
	{ "updateCharFly", "()V" },
	{ "updateMount", "()V" },
	{ "checkFrameTick", "([I)V" },
	{ "paintMount2", "(Llib/mGraphics;)V" },
	{ "setMountIsStart", "()V" },
	{ "checkDelayFallIfTooHigh", "()V" },
	{ "setDefaultPart", "()V" },
	{ "setDefaultWeapon", "()V" },
	{ "setDefaultBody", "()V" },
	{ "setDefaultLeg", "()V" },
	{ "isSelectingSkillUseAlone", "()Z" },
	{ "x", "()Z" },
	{ "isSelectingSkillBuffToPlayer", "()Z" },
	{ "isUseChargeSkill", "()Z" },
	{ "setSkillPaint", "(Lnro/SkillPaint;I)V" },
	{ "sendUseChargeSkill", "()V" },
	{ "stopUseChargeSkill", "()V" },
	{ "useChargeSkill", "(Z)V" },
	{ "setAutoSkillPaint", "(Lnro/SkillPaint;I)V" },
	{ "skillInfoPaint", "()[Lnro/SkillInfoPaint;" },
	{ "setAttack", "()V" },
	{ "isOutX", "()Z" },
	{ "isPaint", "()Z" },
	{ "createShadow", "(III)V" },
	{ "setMabuHold", "(Z)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "paintEff_Pet", "(Llib/mGraphics;)V" },
	{ "paintEffect", "(Llib/mGraphics;)V" },
	{ "paintHp", "(Llib/mGraphics;II)V" },
	{ "paintShadow", "(Llib/mGraphics;)V" },
	{ "updateShadown", "()V" },
	{ "paintCharWithoutSkill", "(Llib/mGraphics;)V" },
	{ "paintBag", "(Llib/mGraphics;[SIIIZ)V" },
	{ "isCharBodyImageID", "(I)Z" },
	{ "paint", "(Llib/mGraphics;III)V" },
	{ "paintHeadWithXY", "(Llib/mGraphics;III)V" },
	{ "paintCharBody", "(Llib/mGraphics;IIIIZ)V" },
	{ "paintCharWithSkill", "(Llib/mGraphics;)V" },
	{ "moveTo", "(III)V" },
	{ "searchFocus", "()V" },
	{ "clearFocus", "(I)V" },
	{ "isAttacPlayerStatus", "()Z" },
	{ "setHoldChar", "(Lnro/Char;)V" },
	{ "setHoldMob", "(Lnro/Mob;)V" },
	{ "findNextFocusByKey", "()V" },
	{ "deFocusNPC", "()V" },
	{ "updateCharInBridge", "()V" },
	{ "doInjure", "(JJZZ)V" },
	{ "doInjure", "()V" },
	{ "startDie", "(SS)V" },
	{ "waitToDie", "(SS)V" },
	{ "liveFromDead", "()V" },
	{ "doUsePotion", "()Z" },
	{ "isMeCanAttackOtherPlayer", "(Lnro/Char;)Z" },
	{ "focusManualTo", "(Ljava/lang/Object;)V" },
	{ "focusToAttack", "()Z" },
	{ "addDustEff", "(I)V" },
	{ "removeHoleEff", "()V" },
	{ "removeProtectEff", "()V" },
	{ "removeBlindEff", "()V" },
	{ "removeEffect", "()V" },
	{ "setPos", "(SSB)V" },
	{ "removeHuytSao", "()V" },
	{ "fusionComplete", "()V" },
	{ "setFusion", "(B)V" },
	{ "removeSleepEff", "()V" },
	{ "setPartOld", "()V" },
	{ "addServerEffect", "(IIII)V" },
	{ "resetPartTemp", "()V" },
	{ "getEffById", "(I)Lnro/Effect;" },
	{ "addEffChar", "(Lnro/Effect;)V" },
	{ "removeEffChar", "(II)V" },
	{ "paintEffBehind", "(Llib/mGraphics;)V" },
	{ "paintEffFront", "(Llib/mGraphics;)V" },
	{ "updEffChar", "()V" },
	{ "checkLuong", "()I" },
	{ "paintRedEye", "(Llib/mGraphics;IIII)V" },
	{ "updateFHead", "()V" },
	{ "getFHead", "(I)I" },
	{ "paintHat_behind", "(Llib/mGraphics;II)V" },
	{ "sendNewAttack", "(S)V" },
	{ "SetSkillPaint_NEW", "(SZBBBSB)V" },
	{ "SetSkillPaint_STT", "(ISLnro/Point;SSB[Lnro/Point;B)V" },
	{ "clone", "()Lnro/Char;" },
	{ "containsCaiTrang", "(I)Z" },
	{ "eat", "(I)V" },
	{ "setSkill", "(BSS[Lnro/Char;[J)V" },
};

static FieldMetadata fields[] {
	{ "data1", &class_nro_EffectData, (intptr_t) &SF_nro_Mabu_data1, "Lnro/EffectData;", 10 },
	{ "data2", &class_nro_EffectData, (intptr_t) &SF_nro_Mabu_data2, "Lnro/EffectData;", 10 },
	{ "tick", &class_int, offsetof(nro_Mabu, F_tick), "I", 2 },
	{ "lastDir", &class_int, offsetof(nro_Mabu, F_lastDir), "I", 2 },
	{ "addFoot", &class_boolean, offsetof(nro_Mabu, F_addFoot), "Z", 2 },
	{ "effEat", &class_nro_Effect, offsetof(nro_Mabu, F_effEat), "Lnro/Effect;", 2 },
	{ "focus", &class_nro_Char, offsetof(nro_Mabu, F_focus), "Lnro/Char;", 2 },
	{ "xTo", &class_int, offsetof(nro_Mabu, F_xTo), "I", 2 },
	{ "yTo", &class_int, offsetof(nro_Mabu, F_yTo), "I", 2 },
	{ "charAttack", getArrayClass(&class_nro_Char, 1), offsetof(nro_Mabu, F_charAttack), "[Lnro/Char;", 2 },
	{ "damageAttack", getArrayClass(&class_long, 1), offsetof(nro_Mabu, F_damageAttack), "[J", 2 },
	{ "xdis", &class_int, offsetof(nro_Mabu, F_xdis), "I", 2 },
	{ "skill1", getArrayClass(&class_int, 1), offsetof(nro_Mabu, F_skill1), "[I", 2 },
	{ "skill2", getArrayClass(&class_int, 1), offsetof(nro_Mabu, F_skill2), "[I", 2 },
	{ "skill3", getArrayClass(&class_int, 1), offsetof(nro_Mabu, F_skill3), "[I", 2 },
	{ "skill4", getArrayClass(&class_int, 1), offsetof(nro_Mabu, F_skill4), "[I", 2 },
	{ "skills", getArrayClass(&class_int, 2), offsetof(nro_Mabu, F_skills), "[[I", 2 },
	{ "skillID", &class_byte, offsetof(nro_Mabu, F_skillID), "B", 2 },
	{ "frame", &class_int, offsetof(nro_Mabu, F_frame), "I", 2 },
	{ "pIndex", &class_int, offsetof(nro_Mabu, F_pIndex), "I", 2 },
};

static MethodMetadata methods[] {
	{ "eat", (intptr_t) M_nro_Mabu_eat_int, VTABLE_nro_Mabu_eat_int, "(I)V", 17 },
	{ "checkFrameTick", (intptr_t) M_nro_Mabu_checkFrameTick_Array1_int, VTABLE_nro_Mabu_checkFrameTick_Array1_int, "([I)V", 17 },
	{ "<init>", (intptr_t) init_nro_Mabu, 0, "()V", 1 },
	{ "setSkill", (intptr_t) M_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long, VTABLE_nro_Mabu_setSkill_byte_short_short_Array1_nro_Char_Array1_long, "(BSS[Lnro/Char;[J)V", 17 },
	{ "update", (intptr_t) M_nro_Mabu_update, VTABLE_nro_Mabu_update, "()V", 17 },
	{ "paint", (intptr_t) M_nro_Mabu_paint_lib_mGraphics, VTABLE_nro_Mabu_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
};

Class class_nro_Mabu{
		.nativeName = (intptr_t) "nro/Mabu",
		.parentClass = (intptr_t) &class_nro_Char,
		.size = sizeof(nro_Mabu),
		.classVtable = (intptr_t) vtable_nro_Mabu,
		.staticInitializer = (intptr_t) clinit_nro_Mabu,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Mabu,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 137,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Mabu = registerClass(&class_nro_Mabu);

}

