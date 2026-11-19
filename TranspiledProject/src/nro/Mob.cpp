#include "nro/Mob.h"
#include "nro/GameScr.h"
#include "nro/NewBoss.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "nro/BigBoss.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/MonsterDart.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Mob.h"
#include "lib/image/MyStream.h"
#include "lib/sound/SoundMn.h"
#include "nro/Controller.h"
#include "lib/mSystem.h"
#include "nro/TileMap.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "nro/BigBoss2.h"
#include "java/util/Hashtable.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/mHashTable.h"
#include "nro/EffectData.h"
#include "nro/BachTuoc.h"
#include "nro/BachTuoc2.h"
#include "nro/ServerEffect.h"
#include "nro/Effect.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/MobTemplate.h"
#include "nro/Res.h"
#include "nro/IMapObject.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_Mob_arrMobTemplate;
jobject SF_nro_Mob_lastMob;
jobject SF_nro_Mob_newMob;
jobject SF_nro_Mob_imgHP;
jobject SF_nro_Mob_lastTimeRequestTemplate;

void mark_nro_Mob(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Mob_arrMobTemplate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mob_arrMobTemplate)->clazz)->markFunction)((jobject) SF_nro_Mob_arrMobTemplate, mark, depth + 1);
		if (SF_nro_Mob_lastMob)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mob_lastMob)->clazz)->markFunction)((jobject) SF_nro_Mob_lastMob, mark, depth + 1);
		if (SF_nro_Mob_newMob)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mob_newMob)->clazz)->markFunction)((jobject) SF_nro_Mob_newMob, mark, depth + 1);
		if (SF_nro_Mob_imgHP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mob_imgHP)->clazz)->markFunction)((jobject) SF_nro_Mob_imgHP, mark, depth + 1);
		if (SF_nro_Mob_lastTimeRequestTemplate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Mob_lastTimeRequestTemplate)->clazz)->markFunction)((jobject) SF_nro_Mob_lastTimeRequestTemplate, mark, depth + 1);
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
	auto self = (nro_Mob *) object;
	if (self->F_vMobMove)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vMobMove)->clazz)->markFunction)((jobject) self->F_vMobMove, mark, depth + 1);
	if (self->F_cFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cFocus)->clazz)->markFunction)((jobject) self->F_cFocus, mark, depth + 1);
	if (self->F_stand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stand)->clazz)->markFunction)((jobject) self->F_stand, mark, depth + 1);
	if (self->F_move)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_move)->clazz)->markFunction)((jobject) self->F_move, mark, depth + 1);
	if (self->F_moveFast)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moveFast)->clazz)->markFunction)((jobject) self->F_moveFast, mark, depth + 1);
	if (self->F_attack1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack1)->clazz)->markFunction)((jobject) self->F_attack1, mark, depth + 1);
	if (self->F_attack2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack2)->clazz)->markFunction)((jobject) self->F_attack2, mark, depth + 1);
	if (self->F_hurt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hurt)->clazz)->markFunction)((jobject) self->F_hurt, mark, depth + 1);
	if (self->F_imgHPtem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgHPtem)->clazz)->markFunction)((jobject) self->F_imgHPtem, mark, depth + 1);
	if (self->F_injureBy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_injureBy)->clazz)->markFunction)((jobject) self->F_injureBy, mark, depth + 1);
	if (self->F_mobToAttack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mobToAttack)->clazz)->markFunction)((jobject) self->F_mobToAttack, mark, depth + 1);
	if (self->F_frameArr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frameArr)->clazz)->markFunction)((jobject) self->F_frameArr, mark, depth + 1);
}

jbool SM_nro_Mob_canRequestTemplate_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:canRequestTemplate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(94);
	if ((frame[0].i) >= 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(95);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = frame[0].i;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(96);
	jint temp0 = (frame[0].i) + (16);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_4;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_SIPUSH(128);
label_5:;
	{
	sp -= 2;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, sp[0].i, sp[1].i);
	frame[1].i = temp0;
	LINE_NUMBER(97);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(98);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(99);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	clinit_nro_Mob(ctx);
	sp[2].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	}
label_8:;
	{
	LINE_NUMBER(101);
	clinit_nro_Mob(ctx);
	SF_nro_Mob_lastTimeRequestTemplate = (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(103);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(104);
	jlong temp1 = frame[1].l;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	if ((longCompare((temp1 - ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[0].i)))), (jlong(3000ll)))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(107);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastTimeRequestTemplate;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[0].i)) = (frame[1].l);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_nro_Mob_isTemplateActiveInMap_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isTemplateActiveInMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(112);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(113);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(114);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(115);
	if ((isInstance(ctx, (frame[2].o), &class_nro_Mob)) == 0) goto label_6;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((checkCast(ctx, &class_nro_Mob, (frame[2].o)))))->F_templateId) != (frame[0].i)) goto label_6;
	}
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(113);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_nro_Mob_isBigBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isBigBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	if ((isInstance(ctx, (frame[0].o), &class_nro_BachTuoc)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_nro_BachTuoc2)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_nro_BigBoss2)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_nro_BigBoss)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_nro_NewBoss)) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void init_nro_Mob(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(127);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring = (jint(0));
	LINE_NUMBER(24);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	LINE_NUMBER(25);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(1));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vMobMove"_j))));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_vMobMove = (jref) sp[1].o;
	LINE_NUMBER(51);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba = (jint(0));
	LINE_NUMBER(58);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(67);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(1));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (15));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (9);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_hurt = (jref) sp[1].o;
	LINE_NUMBER(74);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = (24);
	LINE_NUMBER(75);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w_hp_bar = (100);
	LINE_NUMBER(76);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per = (100);
	LINE_NUMBER(77);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per_tem = (100);
	LINE_NUMBER(81);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(82);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide = (jint(0));
	LINE_NUMBER(128);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	frame[1].o = sp[0].o;
	LINE_NUMBER(129);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureThenDie = (jint(0));
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (6));
	jint temp0 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frameArr = (jref) sp[1].o;
	LINE_NUMBER(131);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isGetFr = (jint(1));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_getData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) < 0) goto label_1;
	}
	{
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId))) != nullptr) goto label_2;
	}
label_1:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(138);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(141);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[1].o;
	clinit_nro_EffectData(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[1].o);
	((nro_MobTemplate *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(148);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/mob/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)SM_nro_Mob_canRequestTemplate_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_EffectData_readData_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/img.png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(160);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK((frame[1].o)))->F_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_setBody_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(1));
	LINE_NUMBER(166);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody = (frame[1].i);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_clearBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:clearBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(0));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Mob_int_boolean_boolean_boolean_boolean_boolean_int_int_long_byte_long_short_short_byte_byte(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jbool param3, jbool param4, jbool param5, jint param6, jint param7, jlong param8, jbyte param9, jlong param10, jshort param11, jshort param12, jbyte param13, jbyte param14) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:<init>", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].l = param8;
	frame[11].i = param9;
	frame[12].l = param10;
	frame[14].i = param11;
	frame[15].i = param12;
	frame[16].i = param13;
	frame[17].i = param14;
	{
	LINE_NUMBER(173);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring = (jint(0));
	LINE_NUMBER(24);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	LINE_NUMBER(25);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(1));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vMobMove"_j))));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_vMobMove = (jref) sp[1].o;
	LINE_NUMBER(51);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba = (jint(0));
	LINE_NUMBER(58);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(67);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(1));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (15));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (9);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_hurt = (jref) sp[1].o;
	LINE_NUMBER(74);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = (24);
	LINE_NUMBER(75);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w_hp_bar = (100);
	LINE_NUMBER(76);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per = (100);
	LINE_NUMBER(77);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per_tem = (100);
	LINE_NUMBER(81);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(82);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide = (jint(0));
	LINE_NUMBER(174);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	frame[18].o = sp[0].o;
	LINE_NUMBER(175);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureThenDie = (jint(0));
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (6));
	jint temp0 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frameArr = (jref) sp[1].o;
	LINE_NUMBER(177);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isGetFr = (jint(1));
	LINE_NUMBER(178);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDontMove = (frame[3].i);
	LINE_NUMBER(179);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isy = (frame[5].i);
	LINE_NUMBER(180);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDisable = (frame[6].i);
	LINE_NUMBER(181);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sys = (frame[8].i);
	LINE_NUMBER(182);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[1].i);
	LINE_NUMBER(183);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[7].i);
	LINE_NUMBER(184);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (frame[9].l);
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp6 = frame[14].i;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_x = temp6;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_xFirst = temp6;
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp9 = frame[15].i;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp9;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_yFirst = temp9;
	LINE_NUMBER(187);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (frame[16].i);
	LINE_NUMBER(188);
	if ((frame[7].i) == (70)) goto label_35;
	}
	{
	LINE_NUMBER(189);
	SM_nro_Mob_removeBigBoss(ctx);
	LINE_NUMBER(190);
	((func_nro_Mob_getData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getData])(ctx, (frame[0].o));
	}
label_35:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[7].i));
	jint temp0 = (jint)SM_nro_Mob_isExistNewMob_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(194);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_newMob;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[7].i));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_38:;
	{
	LINE_NUMBER(197);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp = (frame[12].l);
	LINE_NUMBER(198);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_level = (frame[17].i);
	LINE_NUMBER(199);
	((func_nro_Mob_updateHp_bar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_updateHp_bar])(ctx, (frame[0].o));
	LINE_NUMBER(200);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDie = (jint(0));
	LINE_NUMBER(201);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd = (frame[14].i);
	LINE_NUMBER(202);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd = (frame[15].i);
	LINE_NUMBER(203);
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) sp[1].o;
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(5));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(5));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	goto label_52;
	}
label_46:;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)M_nro_Mob_isNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(3));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(3));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) sp[1].o;
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (11));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (6);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (11));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (9);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(215);
	jint temp0 = (jint)((func_nro_Mob_isSpecial_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isSpecial_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_59;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(4));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(4));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (12);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (14);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	goto label_52;
	}
label_59:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) sp[1].o;
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (15));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) sp[1].o;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (9);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) sp[1].o;
	}
label_52:;
	{
	LINE_NUMBER(229);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MOB ID= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_Mob_isExistNewMob_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isExistNewMob", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(233);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_newMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(234);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_newMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(233);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_Mob_removeBigBoss(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:removeBigBoss", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	{
	LINE_NUMBER(243);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (sp[0].o != nullptr) goto label_1;
	}
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(246);
	frame[0].i = (jint(0));
	LINE_NUMBER(249);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(250);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_7;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_data;
	if (sp[0].o == nullptr) goto label_7;
	}
	LINE_NUMBER(251);
	INST_IINC(0, 1);
label_7:;
	{
	LINE_NUMBER(249);
	INST_IINC(1, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(255);
	if ((frame[0].i) < (35)) goto label_9;
	}
	{
	LINE_NUMBER(256);
	frame[1].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(257);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_13;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_data;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	if ((frame[0].i) <= (20)) goto label_13;
	}
	{
	jint temp0 = (jint)SM_nro_Mob_isTemplateActiveInMap_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(258);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, sp[0].o);
	LINE_NUMBER(259);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_data;
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) (jobject(nullptr));
	LINE_NUMBER(260);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_data = (jref) (jobject(nullptr));
	LINE_NUMBER(261);
	INST_IINC(0, -1);
	}
label_13:;
	{
	LINE_NUMBER(256);
	INST_IINC(1, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(270);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(273);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick)));
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_updateSuperEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:updateSuperEff", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_typeSuperEff) != 0) goto label_1;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (25)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(279);
	SM_nro_ServerEffect_addServerEffect_int_nro_Mob_int(ctx, (114), (frame[0].o), (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(282);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_typeSuperEff) != (jint(1))) goto label_3;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(283);
	SM_nro_ServerEffect_addServerEffect_int_nro_Mob_int(ctx, (132), (frame[0].o), (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(286);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_typeSuperEff) != (jint(2))) goto label_5;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(287);
	SM_nro_ServerEffect_addServerEffect_int_nro_Mob_int(ctx, (131), (frame[0].o), (jint(1)));
	}
label_5:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:update", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) != 0) goto label_1;
	}
	{
	LINE_NUMBER(294);
	((func_nro_Mob_GetFrame) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_GetFrame])(ctx, (frame[0].o));
	LINE_NUMBER(295);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_4;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(296);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (113), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(299);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff) == 0) goto label_6;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(300);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (41), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), (jint(3)), (jint(1)), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(304);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_8;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_8;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_8;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_8;
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % ((15) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) << (jint(1))))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(305);
	frame[1].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_11;
	}
	{
	LINE_NUMBER(307);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_isFlyAndCharge) == 0) goto label_14;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cf) != (32)) goto label_14;
	}
	{
	LINE_NUMBER(309);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx);
	LINE_NUMBER(310);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_cy = (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_ch));
	LINE_NUMBER(311);
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cgender) != 0) goto label_14;
	}
	{
	LINE_NUMBER(312);
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_nro_Mob_checkIsBoss_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_checkIsBoss_R_boolean])(ctx, (frame[0].o));
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, (jlong(-100ll)), (jlong(-100ll)), (frame[3].o), (25));
	}
label_14:;
	{
	LINE_NUMBER(305);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isFlyAndCharge) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cf) != (32)) goto label_8;
	}
	{
	LINE_NUMBER(319);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(320);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_ch));
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cgender) != 0) goto label_8;
	}
	{
	LINE_NUMBER(322);
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_nro_Mob_checkIsBoss_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_checkIsBoss_R_boolean])(ctx, (frame[0].o));
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, (jlong(-100ll)), (jlong(-100ll)), (frame[2].o), (25));
	}
label_8:;
	{
	LINE_NUMBER(327);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_25;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_25;
	}
	{
	LINE_NUMBER(328);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + (24)), (jint(3)), (jint(5)), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_25:;
	{
	LINE_NUMBER(331);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring) == 0) goto label_27;
	}
	{
	LINE_NUMBER(332);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_29;
	}
	{
	LINE_NUMBER(333);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (113), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(337);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[2].l = temp0;
	if ((longCompare((temp0 - ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_32;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_flyx = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_flyx) - (jint(1)));
	LINE_NUMBER(339);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_last = (frame[2].l);
	LINE_NUMBER(340);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flyx) >= 0) goto label_32;
	}
	{
	LINE_NUMBER(341);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring = (jint(0));
	LINE_NUMBER(342);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flyx = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)M_nro_Mob_isTypeNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_hurt;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_hurt;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	goto label_27;
	}
label_38:;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	goto label_27;
	}
label_40:;
	{
	LINE_NUMBER(350);
	jint temp0 = (jint)M_nro_Mob_isNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_42;
	}
	{
	LINE_NUMBER(351);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) <= (jint(5))) goto label_44;
	}
	{
	LINE_NUMBER(352);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (11);
	goto label_27;
	}
label_44:;
	{
	LINE_NUMBER(354);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (10);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_nro_Mob_isSpecial_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isSpecial_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(357);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) <= (jint(5))) goto label_48;
	}
	{
	LINE_NUMBER(358);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (jint(1));
	goto label_27;
	}
label_48:;
	{
	LINE_NUMBER(360);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (15);
	goto label_27;
	}
label_46:;
	{
	LINE_NUMBER(362);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) <= (jint(5))) goto label_50;
	}
	{
	LINE_NUMBER(363);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (11);
	goto label_27;
	}
label_50:;
	{
	LINE_NUMBER(365);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (10);
	}
label_27:;
	{
	LINE_NUMBER(369);
	jint temp0 = (jint)((func_nro_Mob_isUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(371);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_53;
	}
	{
	LINE_NUMBER(372);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(373);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(374);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(375);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_wCount = (jint(0));
	LINE_NUMBER(376);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) <= 0) goto label_53;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_53;
	}
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[2].i)));
	if (temp0 != 0) goto label_60;
	}
	{
	LINE_NUMBER(378);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(1));
	goto label_62;
	}
label_60:;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) / (frame[2].i)));
	if (temp0 == 0) goto label_62;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 != 0) goto label_62;
	}
	{
	LINE_NUMBER(380);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(381);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(382);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isOutMap = (jint(0));
	}
label_62:;
	{
	LINE_NUMBER(385);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_isOutMap) == 0) goto label_53;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_wCount) >= (10)) goto label_53;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[3].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_wCount = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_wCount) + (jint(1)));
	LINE_NUMBER(387);
	sp[0].o = frame[3].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_ySd) + (24));
	LINE_NUMBER(388);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_ySd), (jint(2)));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(389);
	if ((((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_ySd) % (24)) == 0) goto label_53;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = frame[3].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_ySd) - (((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_ySd) % (24)));
	goto label_53;
	}
label_53:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_vMobMove;
	if (sp[0].o != nullptr) goto label_71;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove) != 0) goto label_1;
	}
label_71:;
	{
	LINE_NUMBER(399);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(3))) goto label_72;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne) == 0) goto label_72;
	}
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dame), ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dameMp), (jint(0)), (jint(1)));
	goto label_76;
	}
label_74:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	if (sp[0].o == nullptr) goto label_76;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	((func_nro_Mob_updateInjure) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_updateInjure])(ctx, sp[0].o);
	}
label_76:;
	{
	LINE_NUMBER(406);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(0));
	}
label_72:;
	{
	LINE_NUMBER(409);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_level) <= 0) goto label_78;
	}
	{
	LINE_NUMBER(410);
	((func_nro_Mob_updateSuperEff) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_updateSuperEff])(ctx, (frame[0].o));
	}
label_78:;
	{
	LINE_NUMBER(413);
	switch(((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status)) {
		case 1: goto label_80;
		case 2: goto label_81;
		case 3: goto label_82;
		case 4: goto label_83;
		case 5: goto label_84;
		case 6: goto label_85;
		case 7: goto label_86;
		default: goto label_1;
	}
	}
label_80:;
	{
	LINE_NUMBER(415);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDontMove = (jint(0));
	LINE_NUMBER(416);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isy = (jint(0));
	LINE_NUMBER(417);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDisable = (jint(0));
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(419);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_91;
	}
	{
	LINE_NUMBER(420);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2) <= (jint(1))) goto label_93;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2) - (jint(1)));
	goto label_91;
	}
label_93:;
	{
	LINE_NUMBER(422);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2) >= (jint(-1))) goto label_91;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2) + (jint(1)));
	}
label_91:;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2));
	LINE_NUMBER(428);
	jint temp0 = (jint)M_nro_Mob_isTypeNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_97;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_hurt;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_hurt;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	goto label_99;
	}
label_97:;
	{
	LINE_NUMBER(430);
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_100;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	goto label_99;
	}
label_100:;
	{
	LINE_NUMBER(432);
	jint temp0 = (jint)M_nro_Mob_isNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_102;
	}
	{
	jint temp0 = (jint)((func_nro_Mob_isSpecial_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isSpecial_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_102;
	}
	{
	LINE_NUMBER(433);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (15);
	goto label_99;
	}
label_102:;
	{
	LINE_NUMBER(435);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (11);
	}
label_99:;
	{
	LINE_NUMBER(438);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDie) == 0) goto label_104;
	}
	{
	LINE_NUMBER(439);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDie = (jint(0));
	LINE_NUMBER(440);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMobMe) == 0) goto label_107;
	}
	{
	LINE_NUMBER(441);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(442);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = (temp1 - (jint(1)));
	}
label_110:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_107;
	{
	LINE_NUMBER(443);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(444);
	if ((frame[3].o) == nullptr) goto label_113;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_isMobMe) == 0) goto label_113;
	}
	{
	if ((frame[3].o) == (frame[0].o)) goto label_114;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[3].o)))->F_y1) != ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1)) goto label_113;
	}
label_114:;
	{
	LINE_NUMBER(445);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (frame[1].i));
	}
label_113:;
	{
	LINE_NUMBER(442);
	INST_IINC(1, -1);
	goto label_110;
	}
label_107:;
	{
	LINE_NUMBER(450);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(451);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_cur = ((jlong)((nro_MobTemplate *) NULL_CHECK(sp[1].o))->F_hp);
	LINE_NUMBER(454);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(0));
	LINE_NUMBER(455);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}
label_104:;
	{
	LINE_NUMBER(459);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_121;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) <= (jint(4))) goto label_123;
	}
	INST_BIPUSH(-4);
	goto label_124;
label_123:;
	{
	jint temp0 = -((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1);
	sp[0].i = temp0;
	sp += 1;
	}
label_124:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = sp[1].i;
	LINE_NUMBER(461);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) != 0) goto label_126;
	}
	{
	LINE_NUMBER(462);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (16);
	goto label_126;
	}
label_121:;
	{
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	}
label_126:;
	{
	LINE_NUMBER(468);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p3 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p3) - (jint(1)));
	LINE_NUMBER(470);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) != 0) goto label_1;
	}
	{
	LINE_NUMBER(471);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDie = (jint(1));
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return;
	}
label_81:;
	{
	LINE_NUMBER(477);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_132;
	}
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();
label_132:;
	{
	LINE_NUMBER(481);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring) == 0) goto label_134;
	}
	LINE_NUMBER(482);
	popStackFrame(ctx);
	INST_RETURN();
label_134:;
	{
	LINE_NUMBER(485);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_136;
	}
	LINE_NUMBER(486);
	popStackFrame(ctx);
	INST_RETURN();
label_136:;
	{
	LINE_NUMBER(489);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff) == 0) goto label_138;
	}
	LINE_NUMBER(490);
	popStackFrame(ctx);
	INST_RETURN();
label_138:;
	{
	LINE_NUMBER(493);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_stand;
	((func_nro_Mob_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(495);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	switch(((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_type)) {
		case 0: goto label_142;
		case 1: goto label_142;
		case 2: goto label_142;
		case 3: goto label_142;
		case 4: goto label_143;
		case 5: goto label_143;
		default: goto label_144;
	}
	}
label_142:;
	{
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(501);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) <= ((10) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) % (10)))) goto label_144;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_146;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 <= (80)) goto label_144;
	}
label_146:;
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	if (sp[0].o == nullptr) goto label_147;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 <= (80)) goto label_144;
	}
label_147:;
	{
	LINE_NUMBER(502);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	goto label_144;
	}
label_143:;
	{
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(508);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) <= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) % (jint(3)))) goto label_144;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_149;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 <= (80)) goto label_144;
	}
label_149:;
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	if (sp[0].o == nullptr) goto label_150;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 <= (80)) goto label_144;
	}
label_150:;
	{
	LINE_NUMBER(509);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	}
label_144:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_151;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % ((10) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) % (20)))) != 0) goto label_151;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_153;
	}
	{
	LINE_NUMBER(515);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	goto label_155;
	}
label_153:;
	{
	LINE_NUMBER(517);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	goto label_155;
	}
label_151:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	if (sp[0].o == nullptr) goto label_155;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % ((10) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) % (20)))) != 0) goto label_155;
	}
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_157;
	}
	{
	LINE_NUMBER(521);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	goto label_155;
	}
label_157:;
	{
	LINE_NUMBER(523);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	}
label_155:;
	{
	LINE_NUMBER(527);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av) <= 0) goto label_159;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_av = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_av) - (jint(1)));
	LINE_NUMBER(529);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_159:;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	INST_RETURN();
label_82:;
	{
	LINE_NUMBER(534);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_162;
	}
	LINE_NUMBER(535);
	popStackFrame(ctx);
	INST_RETURN();
label_162:;
	{
	LINE_NUMBER(538);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_164;
	}
	LINE_NUMBER(539);
	popStackFrame(ctx);
	INST_RETURN();
label_164:;
	{
	LINE_NUMBER(542);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff) == 0) goto label_166;
	}
	LINE_NUMBER(543);
	popStackFrame(ctx);
	INST_RETURN();
label_166:;
	{
	LINE_NUMBER(546);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring) == 0) goto label_168;
	}
	LINE_NUMBER(547);
	popStackFrame(ctx);
	INST_RETURN();
label_168:;
	{
	LINE_NUMBER(550);
	((func_nro_Mob_updateMobAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_updateMobAttack])(ctx, (frame[0].o));
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return;
	}
label_83:;
	{
	LINE_NUMBER(553);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_171;
	}
	LINE_NUMBER(554);
	popStackFrame(ctx);
	INST_RETURN();
label_171:;
	{
	LINE_NUMBER(557);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_173;
	}
	LINE_NUMBER(558);
	popStackFrame(ctx);
	INST_RETURN();
label_173:;
	{
	LINE_NUMBER(561);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff) == 0) goto label_175;
	}
	LINE_NUMBER(562);
	popStackFrame(ctx);
	INST_RETURN();
label_175:;
	{
	LINE_NUMBER(565);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring) == 0) goto label_177;
	}
	LINE_NUMBER(566);
	popStackFrame(ctx);
	INST_RETURN();
label_177:;
	{
	LINE_NUMBER(569);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(570);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(571);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) <= ((40) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) % (jint(5))))) goto label_1;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - (jint(2)));
	LINE_NUMBER(573);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(574);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return;
	}
label_84:;
	{
	LINE_NUMBER(579);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_185;
	}
	LINE_NUMBER(580);
	popStackFrame(ctx);
	INST_RETURN();
label_185:;
	{
	LINE_NUMBER(581);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_187;
	}
	LINE_NUMBER(582);
	popStackFrame(ctx);
	INST_RETURN();
label_187:;
	{
	LINE_NUMBER(583);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff) == 0) goto label_189;
	}
	LINE_NUMBER(584);
	popStackFrame(ctx);
	INST_RETURN();
label_189:;
	{
	LINE_NUMBER(585);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_flystring) == 0) goto label_191;
	}
	{
	LINE_NUMBER(586);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_type) != (jint(4))) goto label_193;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_ty = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_ty) + (jint(1)));
	LINE_NUMBER(588);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_wt = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_wt) + (jint(1)));
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_fy;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_wy) != 0) goto label_197;
	}
	INST_ICONST(1);
	goto label_198;
label_197:;
	INST_ICONST(-1);
label_198:;
	{
	sp -= 3;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_fy = (sp[1].i + sp[2].i);
	LINE_NUMBER(590);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_wt) != (10)) goto label_193;
	}
	{
	LINE_NUMBER(591);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_wy) != 0) goto label_202;
	}
	INST_ICONST(1);
	goto label_203;
label_202:;
	INST_ICONST(0);
label_203:;
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_wy = sp[1].i;
label_193:;
	LINE_NUMBER(596);
	popStackFrame(ctx);
	INST_RETURN();
label_191:;
	{
	LINE_NUMBER(598);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(599);
	((func_nro_Mob_updateMobWalk) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_updateMobWalk])(ctx, (frame[0].o));
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return;
	}
label_85:;
	{
	LINE_NUMBER(603);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(606);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) < ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_1;
	}
	{
	LINE_NUMBER(607);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(608);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(609);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}
label_86:;
	{
	LINE_NUMBER(614);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne) != 0) goto label_213;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_213;
	}
	{
	LINE_NUMBER(615);
	jint temp0 = (jint)M_nro_Mob_isTypeNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_215;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_hurt;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_hurt;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	goto label_213;
	}
label_215:;
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_217;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	goto label_213;
	}
label_217:;
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)M_nro_Mob_isNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_219;
	}
	{
	LINE_NUMBER(620);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame) == (10)) goto label_221;
	}
	{
	LINE_NUMBER(621);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (10);
	goto label_213;
	}
label_221:;
	{
	LINE_NUMBER(623);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (11);
	goto label_213;
	}
label_219:;
	{
	LINE_NUMBER(625);
	jint temp0 = (jint)((func_nro_Mob_isSpecial_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isSpecial_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_223;
	}
	{
	LINE_NUMBER(626);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame) == (jint(1))) goto label_225;
	}
	{
	LINE_NUMBER(627);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (jint(1));
	goto label_213;
	}
label_225:;
	{
	LINE_NUMBER(629);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (15);
	goto label_213;
	}
label_223:;
	{
	LINE_NUMBER(631);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame) == (10)) goto label_227;
	}
	{
	LINE_NUMBER(632);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (10);
	goto label_213;
	}
label_227:;
	{
	LINE_NUMBER(634);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (11);
	}
label_213:;
	{
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_timeStatus = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_timeStatus) - (jint(1)));
	LINE_NUMBER(639);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus) > 0) goto label_230;
	}
	{
	jint temp0 = (jint)M_nro_Mob_isTypeNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_231;
	}
	{
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_231;
	}
	{
	jint temp0 = (jint)M_nro_Mob_isNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_232;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame) == (11)) goto label_231;
	}
label_232:;
	{
	jint temp0 = (jint)((func_nro_Mob_isSpecial_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isSpecial_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_233;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame) == (15)) goto label_231;
	}
label_233:;
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) >= (58)) goto label_230;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame) != (11)) goto label_230;
	}
label_231:;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	if (sp[0].o == nullptr) goto label_234;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureThenDie) != 0) goto label_235;
	}
label_234:;
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) == 0) goto label_235;
	}
	{
	LINE_NUMBER(641);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(642);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	if (sp[0].o == nullptr) goto label_238;
	}
	{
	LINE_NUMBER(643);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = (-((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir));
	LINE_NUMBER(644);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)));
	if (temp1 >= (24)) goto label_238;
	}
	{
	LINE_NUMBER(645);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_238:;
	{
	LINE_NUMBER(649);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	LINE_NUMBER(650);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	goto label_243;
	}
label_235:;
	{
	LINE_NUMBER(652);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2 = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir) << (jint(1)));
	LINE_NUMBER(654);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(655);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	}
label_243:;
	{
	LINE_NUMBER(658);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy = (jref) (jobject(nullptr));
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return;
	}
label_230:;
	{
	LINE_NUMBER(662);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_type) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	frame[2].i = ((-((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir)) << (jint(1)));
	LINE_NUMBER(664);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 <= (temp1 - ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_1;
	}
	{
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (temp1 + ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_1;
	}
	{
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) - (frame[2].i));
	}
label_1:;
	LINE_NUMBER(673);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_updateInjure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:updateInjure", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(676);
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(3))) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (7)) goto label_1;
	}
	{
	LINE_NUMBER(677);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(4));
	LINE_NUMBER(678);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (7);
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	if (((jint)((nro_MobTemplate *) NULL_CHECK(sp[0].o))->F_type) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst)));
	if (temp0 >= (30)) goto label_1;
	}
	{
	LINE_NUMBER(680);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) - ((10) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir)));
	}
label_1:;
	LINE_NUMBER(684);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_Mob_getBigBoss_R_nro_BigBoss(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getBigBoss", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	{
	LINE_NUMBER(687);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(689);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_nro_BigBoss)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_nro_BigBoss, (frame[1].o)));
	}
label_5:;
	{
	LINE_NUMBER(687);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_nro_Mob_x_R_nro_BachTuoc2(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	{
	LINE_NUMBER(698);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(700);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_nro_BachTuoc2)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_nro_BachTuoc2, (frame[1].o)));
	}
label_5:;
	{
	LINE_NUMBER(698);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_nro_Mob_getBigBoss2_R_nro_BigBoss2(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getBigBoss2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	{
	LINE_NUMBER(709);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(711);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_nro_BigBoss2)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_nro_BigBoss2, (frame[1].o)));
	}
label_5:;
	{
	LINE_NUMBER(709);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_nro_Mob_getBachTuoc_R_nro_BachTuoc(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getBachTuoc", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	{
	LINE_NUMBER(720);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(722);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_nro_BachTuoc)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_nro_BachTuoc, (frame[1].o)));
	}
label_5:;
	{
	LINE_NUMBER(720);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(727);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_nro_Mob_getBigBoss2_byte_R_nro_NewBoss(jcontext ctx, jbyte param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getBigBoss2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(732);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_nro_NewBoss)) == 0) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_nro_NewBoss, (frame[1].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:setAttack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(736);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(1));
	LINE_NUMBER(737);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack = (jref) (jobject(nullptr));
	LINE_NUMBER(738);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (frame[1].o);
	LINE_NUMBER(739);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(740);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(741);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(742);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(743);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(744);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx);
	LINE_NUMBER(745);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy);
	LINE_NUMBER(746);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_13;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(747);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(749);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_15:;
	LINE_NUMBER(751);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_isSpecial_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isSpecial", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(754);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) < (58)) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) <= (65)) goto label_2;
	}
label_1:;
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) == (67)) goto label_2;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) != (68)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_isNewModStand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isNewModStand", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(758);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) != (76)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_isNewMod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isNewMod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(762);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) < (73)) goto label_1;
	}
	{
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_updateMobAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:updateMobAttack", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(766);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_attack1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_Mob *) NULL_CHECK(sp[-1].o))->F_attack2;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(767);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(768);
	((func_nro_Mob_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_checkFrameTick_Array1_int])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(769);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_4;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_4;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) != 0) goto label_4;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charPunch_boolean_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charPunch_boolean_float])(ctx, sp[0].o, (jint(0)), (jfloat(0.05f)));
	}
label_4:;
	{
	LINE_NUMBER(774);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) != 0) goto label_8;
	}
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].i = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(776);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(777);
	jint temp0 = (jint)M_nro_Mob_isNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(778);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 <= (temp1 + ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_18;
	}
	{
	LINE_NUMBER(779);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(782);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (temp1 - ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_16;
	}
	{
	LINE_NUMBER(783);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(787);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_type) == (jint(4))) goto label_21;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_type) != (jint(5))) goto label_22;
	}
label_21:;
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDontMove) != 0) goto label_22;
	}
	{
	LINE_NUMBER(788);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + (((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (20)));
	}
label_22:;
	{
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2) + (jint(1)));
	LINE_NUMBER(792);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2) > ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_25;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) != (jint(1))) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(793);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(1));
	LINE_NUMBER(794);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) != 0) goto label_28;
	}
	{
	LINE_NUMBER(795);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(796);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dame), ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dameMp), (jint(0)), (jint(1)));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	((func_nro_Mob_updateInjure) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_updateInjure])(ctx, sp[0].o);
	}
label_32:;
	{
	LINE_NUMBER(801);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(0));
	goto label_26;
	}
label_28:;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(804);
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_nro_Mob_checkIsBoss_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_checkIsBoss_R_boolean])(ctx, (frame[0].o));
	jlong temp3 = (jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dame;
	jlong temp4 = (jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dameMp;
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	sp[1].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o, ((jint)((nro_MobTemplate *) NULL_CHECK(sp[1].o))->F_dartType));
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(807);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(808);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(809);
	((nro_Char *) NULL_CHECK((frame[4].o)))->F_charID = (-100);
	LINE_NUMBER(810);
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((func_nro_Mob_checkIsBoss_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_checkIsBoss_R_boolean])(ctx, (frame[0].o));
	jlong temp3 = (jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dame;
	jlong temp4 = (jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dameMp;
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_nro_Mob_getTemplate_R_nro_MobTemplate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate])(ctx, (frame[0].o));
	SM_nro_MonsterDart_addMonsterDart_int_int_boolean_long_long_nro_Char_int(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o, ((jint)((nro_MobTemplate *) NULL_CHECK(sp[1].o))->F_dartType));
	}
label_35:;
	{
	LINE_NUMBER(813);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(817);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_40;
	}
	INST_ICONST(1);
	goto label_41;
label_40:;
	INST_ICONST(-1);
label_41:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(818);
	goto label_43;
	}
label_8:;
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1) != (jint(1))) goto label_43;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_43;
	}
	{
	LINE_NUMBER(819);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(820);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(821);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(822);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_43:;
	{
	LINE_NUMBER(825);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick) != (jint(5))) goto label_48;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	if (sp[0].o == nullptr) goto label_48;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_48;
	}
	{
	LINE_NUMBER(826);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) != (88)) goto label_50;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) == 0) goto label_50;
	}
	{
	LINE_NUMBER(827);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (jint(2));
	}
label_50:;
	{
	LINE_NUMBER(830);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) != (89)) goto label_48;
	}
	{
	LINE_NUMBER(831);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (jint(2));
	}
label_48:;
	LINE_NUMBER(835);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_updateMobWalk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:updateMobWalk", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(839);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureThenDie) == 0) goto label_25;
	}
	{
	LINE_NUMBER(840);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(841);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureBy;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p2 = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cdir) << (jint(3)));
	LINE_NUMBER(842);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-5);
	LINE_NUMBER(843);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(846);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isy) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(847);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(850);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDontMove) != 0) goto label_30;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isDisable) == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_30:;
	{
	LINE_NUMBER(851);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_stand;
	((func_nro_Mob_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(852);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(856);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	switch(((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_type)) {
		case 0: goto label_31;
		case 1: { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_32
		case 2: { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_12; } // goto label_32
		case 3: { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_12; } // goto label_32
		case 4: { popExceptionFrames(frameRef, 1); goto label_16; }
		case 5: { popExceptionFrames(frameRef, 1); goto label_19; }
		default: { bypasses[3] = true; goto label_24; } // goto label_23
	}
	}
label_31:;
	{
	LINE_NUMBER(858);
	jint temp0 = (jint)M_nro_Mob_isNewModStand_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(859);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame = (jint(0));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(860);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_32; }
	if (bypasses[1]) { bypasses[1] = false; goto label_32; }
	if (bypasses[2]) { bypasses[2] = false; goto label_32; }
	{
	LINE_NUMBER(863);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_stand;
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_gameTick;
	sp[2].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_stand;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	LINE_NUMBER(864);
	{ popExceptionFrames(frameRef, 1); goto label_35; }
	}
label_32:;
	{
	LINE_NUMBER(868);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	jint temp0 = (jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_speed;
	frame[1].i = temp0;
	if (temp0 != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(869);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != (jint(1))) { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_15; } // goto label_38
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(870);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[4]) { bypasses[4] = false; goto label_38; }
	{
	LINE_NUMBER(872);
	if ((frame[1].i) <= (jint(2))) goto label_39;
	}
	{
	LINE_NUMBER(873);
	frame[1].i = (jbyte(((frame[1].i) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) % (jint(2))))));
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(874);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != (jint(1))) goto label_38;
	}
	{
	LINE_NUMBER(875);
	frame[1].i = (jbyte(((frame[1].i) - (jint(1)))));
	}
label_38:;
	{
	LINE_NUMBER(878);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((frame[1].i) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir)));
	LINE_NUMBER(879);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 <= (temp1 + ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_43;
	}
	{
	LINE_NUMBER(880);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(881);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (temp1 - ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_45;
	}
	{
	LINE_NUMBER(882);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	}
label_45:;
	{
	LINE_NUMBER(885);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)));
	if (temp1 >= (40)) goto label_47;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst)));
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove)) goto label_47;
	}
	{
	LINE_NUMBER(886);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp += 1;
	if (temp0 <= ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_49;
	}
	INST_ICONST(-1);
	goto label_50;
label_49:;
	INST_ICONST(1);
label_50:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(887);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)));
	if (temp1 >= (20)) goto label_52;
	}
	{
	LINE_NUMBER(888);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) - (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) * (10)));
	}
label_52:;
	{
	LINE_NUMBER(891);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(892);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av = (20);
	}
label_47:;
	{
	LINE_NUMBER(895);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) <= (30)) goto label_55;
	}
	{
	sp[0].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_move;
	sp += 1;
	goto label_56;
	}
label_55:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_Mob *) NULL_CHECK(sp[-1].o))->F_moveFast;
label_56:;
	POP_N(2); // Pop method args
	((func_nro_Mob_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	popExceptionFrame(frameRef);
	LINE_NUMBER(896);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(898);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	frame[1].i = (jbyte((((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_speed) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) % (jint(2))))));
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((frame[1].i) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir)));
	LINE_NUMBER(900);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(2))) goto label_59;
	}
	{
	LINE_NUMBER(901);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((frame[1].i) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a)));
	}
label_59:;
	{
	LINE_NUMBER(904);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 <= (temp1 + ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_61;
	}
	{
	LINE_NUMBER(905);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	LINE_NUMBER(906);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(907);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) + (20));
	LINE_NUMBER(908);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	goto label_66;
	}
label_61:;
	{
	LINE_NUMBER(909);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (temp1 - ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_66;
	}
	{
	LINE_NUMBER(910);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	LINE_NUMBER(911);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(912);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) + (20));
	LINE_NUMBER(913);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	}
label_66:;
	{
	LINE_NUMBER(916);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst) + (24))) goto label_71;
	}
	{
	LINE_NUMBER(917);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(-1));
	goto label_73;
	}
label_71:;
	{
	LINE_NUMBER(918);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst) - ((20) + ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10))))) goto label_73;
	}
	{
	LINE_NUMBER(919);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(1));
	}
label_73:;
	{
	LINE_NUMBER(922);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_move;
	((func_nro_Mob_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(923);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(925);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	frame[1].i = (jbyte((((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_speed) + (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1) % (jint(2))))));
	LINE_NUMBER(926);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((frame[1].i) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir)));
	LINE_NUMBER(927);
	frame[1].i = (jbyte(((frame[1].i) + (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1)) % (jint(2))))));
	LINE_NUMBER(928);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(2))) goto label_78;
	}
	{
	LINE_NUMBER(929);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((frame[1].i) * ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a)));
	}
label_78:;
	{
	LINE_NUMBER(932);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 <= (temp1 + ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_80;
	}
	{
	LINE_NUMBER(933);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	LINE_NUMBER(934);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(935);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) + (20));
	LINE_NUMBER(936);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	goto label_85;
	}
label_80:;
	{
	LINE_NUMBER(937);
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xFirst;
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (temp0 >= (temp1 - ((jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_rangeMove))) goto label_85;
	}
	{
	LINE_NUMBER(938);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	LINE_NUMBER(939);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(940);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) + (20));
	LINE_NUMBER(941);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	}
label_85:;
	{
	LINE_NUMBER(944);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst) + (24))) goto label_90;
	}
	{
	LINE_NUMBER(945);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(-1));
	goto label_92;
	}
label_90:;
	{
	LINE_NUMBER(946);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst) - ((20) + ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10))))) goto label_92;
	}
	{
	LINE_NUMBER(947);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(1));
	}
label_92:;
	{
	LINE_NUMBER(950);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), (jint(2)));
	if (temp0 != 0) goto label_94;
	}
	LINE_NUMBER(951);
	{ popExceptionFrames(frameRef, 1); goto label_35; }
label_94:;
	{
	LINE_NUMBER(954);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(955);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileYofPixel_int_R_int(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y));
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = temp0;
	LINE_NUMBER(956);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(4));
	LINE_NUMBER(957);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(958);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(-1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(959);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_23; }
	{
	LINE_NUMBER(962);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_a = (jint(-1));
	}
label_23:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(964);
	popStackFrame(ctx);
	INST_RETURN();
label_35:;
	LINE_NUMBER(967);
	goto label_100;
label_2:;
	LINE_NUMBER(966);
	INST_ASTORE(1);
label_100:;
	LINE_NUMBER(969);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_Mob_getTemplate_R_nro_MobTemplate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getTemplate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(972);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)));
	}

	popStackFrame(ctx);
}

jbool M_nro_Mob_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(976);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(977);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(978);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	{
	LINE_NUMBER(979);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(980);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_5;
	}
	{
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(982);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_7;
	}
	{
	LINE_NUMBER(983);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(984);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId))) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(985);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(986);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(988);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(989);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(991);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_isUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isUpdate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(996);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId))) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(997);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(998);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1001);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_checkIsBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:checkIsBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1006);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBoss) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_level) <= 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_updateHp_bar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:updateHp_bar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1010);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = ((jint((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) * (jlong(((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w_hp_bar)))))) / (100));
	LINE_NUMBER(1011);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per = (jint(((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp))));
	LINE_NUMBER(1012);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per) < (100)) goto label_3;
	}
	{
	LINE_NUMBER(1013);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per_tem = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per);
	}
label_3:;
	{
	LINE_NUMBER(1016);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(1017);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per) >= (30)) goto label_6;
	}
	{
	LINE_NUMBER(1018);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_color = (jint(15473700));
	LINE_NUMBER(1019);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgHP_tm_do;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_imgHPtem = (jref) sp[1].o;
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1020);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_per) >= (60)) goto label_10;
	}
	{
	LINE_NUMBER(1021);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_color = (jint(16744448));
	LINE_NUMBER(1022);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgHP_tm_vang;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_imgHPtem = (jref) sp[1].o;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1024);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_color = (jint(11992374));
	LINE_NUMBER(1025);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgHP_tm_xanh;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_imgHPtem = (jref) sp[1].o;
	}
label_9:;
	LINE_NUMBER(1027);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_paintShadow_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:paintShadow", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1030);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1031);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(1032);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) + ((frame[2].i) / (jint(2)))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))), (jint(4)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1033);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1034);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) - ((frame[2].i) / (jint(2)))) / (frame[2].i)), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))) / (frame[2].i)));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1035);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (100), (100));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1036);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) + ((frame[2].i) / (jint(2)))) / (frame[2].i)), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))) / (frame[2].i)));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(1037);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(1038);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) - ((frame[2].i) / (jint(2)))), (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))), (8));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1039);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd) / (24)) * (frame[2].i)), (((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	}
label_6:;
	{
	LINE_NUMBER(1042);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(3)));
	LINE_NUMBER(1043);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	}
label_1:;
	LINE_NUMBER(1045);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:paint", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1048);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) == 0) goto label_1;
	}
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1051);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1052);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1053);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	INST_ICONST(1);
label_8:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(1055);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	INST_ICONST(2);
label_11:;
	INST_BIPUSH(33);
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_9:;
	LINE_NUMBER(1057);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1059);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_12;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1060);
	((func_nro_Mob_paintShadow_lib_mGraphics) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_paintShadow_lib_mGraphics])(ctx, (frame[0].o), (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(1062);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId))) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1063);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o != nullptr) goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(1064);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId) == (70)) goto label_14;
	}
	{
	LINE_NUMBER(1065);
	((func_nro_Mob_getData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_getData])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(1069);
	jint temp0 = (jint)((func_nro_Mob_isPaint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Mob_isPaint_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_18;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(1))) goto label_19;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3) <= 0) goto label_19;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_19;
	}
label_18:;
	LINE_NUMBER(1070);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(1072);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(1073);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_21;
	}
	{
	LINE_NUMBER(1074);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId))) == nullptr) goto label_23;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[0].o = (jobject)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1075);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_fy);
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_25;
	}
	INST_ICONST(0);
	goto label_26;
label_25:;
	INST_ICONST(1);
label_26:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(1078);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_fy)) - (9);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_27;
	}
	INST_ICONST(0);
	goto label_28;
label_27:;
	INST_ICONST(2);
label_28:;
	INST_BIPUSH(33);
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_23:;
	{
	LINE_NUMBER(1080);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	LINE_NUMBER(1083);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_30;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_30;
	}
	{
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_30;
	}
	clinit_nro_Mob(ctx);
	(sp++)->o = SF_nro_Mob_imgHP;
	if ((--sp)->o == nullptr) goto label_30;
	{
	LINE_NUMBER(1084);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1085);
	frame[2].i = (jint(((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) / (jlong(10ll))) - (jlong(1)))));
	LINE_NUMBER(1086);
	if ((frame[2].i) >= 0) goto label_34;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_34:;
	{
	LINE_NUMBER(1087);
	if ((frame[2].i) <= (9)) goto label_35;
	}
	INST_BIPUSH(9);
	INST_ISTORE(2);
label_35:;
	{
	LINE_NUMBER(1088);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[2].i))), (9), (6), (jint(0)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h)) - (10)), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_30:;
	LINE_NUMBER(1121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_startDie(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:startDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1124);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(1125);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_injureThenDie = (jint(1));
	LINE_NUMBER(1126);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(1127);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(1128);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(1129);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (-((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(1130);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	LINE_NUMBER(1131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:attackOtherMob", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1134);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_mobToAttack = (jref) (frame[1].o);
	LINE_NUMBER(1135);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isBusyAttackSomeOne = (jint(1));
	LINE_NUMBER(1136);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(1137);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(1138);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(1139);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(1140);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(1141);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x) <= ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = sp[1].i;
	LINE_NUMBER(1142);
	frame[2].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(1143);
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(1144);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_13;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(1145);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(1146);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(1148);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_17:;
	{
	LINE_NUMBER(1151);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(1153);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_18:;
	LINE_NUMBER(1155);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_Mob_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1158);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_Mob_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1162);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_nro_Mob_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1166);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h);
	}

	popStackFrame(ctx);
}

jint M_nro_Mob_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1170);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v);
	}

	popStackFrame(ctx);
}

void M_nro_Mob_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:stopMoving", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1174);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(1175);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(1176);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	LINE_NUMBER(1177);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_av = (50);
	}
label_1:;
	LINE_NUMBER(1180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isInvisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1183);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(1))) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_removeHoldEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:removeHoldEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1187);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1188);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	LINE_NUMBER(1191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Mob_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:removeBlindEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1194);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_blindEff = (jint(0));
	LINE_NUMBER(1195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:removeSleepEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1198);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_sleepEff = (jint(0));
	LINE_NUMBER(1199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Mob_GetFrame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:GetFrame", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1202);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isGetFr) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_nro_Mob_isTypeNewMod_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1203);
	sp[0].o = frame[0].o;
	clinit_nro_Controller(ctx);
	sp[1].o = (jobject)SF_nro_Controller_frameHT_NEWBOSS;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	sp[1].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_frameArr = (jref) (checkCast(ctx, getArrayClass(&class_int, 2), sp[1].o));
	LINE_NUMBER(1204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_stand = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	LINE_NUMBER(1205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_move = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))));
	LINE_NUMBER(1206);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_moveFast = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2))));
	LINE_NUMBER(1207);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3))));
	LINE_NUMBER(1208);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_attack2 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4))));
	LINE_NUMBER(1209);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_frameArr;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_hurt = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5))));
	LINE_NUMBER(1210);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isGetFr = (jint(0));
	}
label_1:;
	LINE_NUMBER(1213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Mob_isTypeNewMod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:isTypeNewMod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1216);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (((jint)((nro_EffectData *) NULL_CHECK(sp[0].o))->F_typeData) != (jint(2))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_nro_Mob(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Mob:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Mob(ctx);
	{
	LINE_NUMBER(49);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lastMob"_j))));
	clinit_nro_Mob(ctx);
	SF_nro_Mob_lastMob = sp[0].o;
	LINE_NUMBER(50);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newMob"_j))));
	clinit_nro_Mob(ctx);
	SF_nro_Mob_newMob = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmobHP.png"_j))));
	clinit_nro_Mob(ctx);
	SF_nro_Mob_imgHP = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Mob[] {
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
	(void *) M_nro_Mob_getX_R_int,
	(void *) M_nro_Mob_getY_R_int,
	(void *) M_nro_Mob_getW_R_int,
	(void *) M_nro_Mob_getH_R_int,
	(void *) M_nro_Mob_stopMoving,
	(void *) M_nro_Mob_isInvisible_R_boolean,
	(void *) M_nro_Mob_isBigBoss_R_boolean,
	(void *) M_nro_Mob_getData,
	(void *) M_nro_Mob_setBody_short,
	(void *) M_nro_Mob_clearBody,
	(void *) M_nro_Mob_checkFrameTick_Array1_int,
	(void *) M_nro_Mob_updateSuperEff,
	(void *) M_nro_Mob_update,
	(void *) M_nro_Mob_updateInjure,
	(void *) M_nro_Mob_setAttack_nro_Char,
	(void *) M_nro_Mob_isSpecial_R_boolean,
	(void *) M_nro_Mob_isNewModStand_R_boolean,
	(void *) M_nro_Mob_isNewMod_R_boolean,
	(void *) M_nro_Mob_updateMobAttack,
	(void *) M_nro_Mob_updateMobWalk,
	(void *) M_nro_Mob_getTemplate_R_nro_MobTemplate,
	(void *) M_nro_Mob_isPaint_R_boolean,
	(void *) M_nro_Mob_isUpdate_R_boolean,
	(void *) M_nro_Mob_checkIsBoss_R_boolean,
	(void *) M_nro_Mob_updateHp_bar,
	(void *) M_nro_Mob_paintShadow_lib_mGraphics,
	(void *) M_nro_Mob_paint_lib_mGraphics,
	(void *) M_nro_Mob_startDie,
	(void *) M_nro_Mob_attackOtherMob_nro_Mob,
	(void *) M_nro_Mob_removeHoldEff,
	(void *) M_nro_Mob_removeBlindEff,
	(void *) M_nro_Mob_removeSleepEff,
	(void *) M_nro_Mob_GetFrame,
	(void *) M_nro_Mob_isTypeNewMod_R_boolean,
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
	{ "isBigBoss", "()Z" },
	{ "getData", "()V" },
	{ "setBody", "(S)V" },
	{ "clearBody", "()V" },
	{ "checkFrameTick", "([I)V" },
	{ "updateSuperEff", "()V" },
	{ "update", "()V" },
	{ "updateInjure", "()V" },
	{ "setAttack", "(Lnro/Char;)V" },
	{ "isSpecial", "()Z" },
	{ "isNewModStand", "()Z" },
	{ "isNewMod", "()Z" },
	{ "updateMobAttack", "()V" },
	{ "updateMobWalk", "()V" },
	{ "getTemplate", "()Lnro/MobTemplate;" },
	{ "isPaint", "()Z" },
	{ "isUpdate", "()Z" },
	{ "checkIsBoss", "()Z" },
	{ "updateHp_bar", "()V" },
	{ "paintShadow", "(Llib/mGraphics;)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "startDie", "()V" },
	{ "attackOtherMob", "(Lnro/Mob;)V" },
	{ "removeHoldEff", "()V" },
	{ "removeBlindEff", "()V" },
	{ "removeSleepEff", "()V" },
	{ "GetFrame", "()V" },
	{ "isTypeNewMod", "()Z" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "arrMobTemplate", getArrayClass(&class_nro_MobTemplate, 1), (intptr_t) &SF_nro_Mob_arrMobTemplate, "[Lnro/MobTemplate;", 9 },
	{ "changBody", &class_boolean, offsetof(nro_Mob, F_changBody), "Z", 0 },
	{ "smallBody", &class_short, offsetof(nro_Mob, F_smallBody), "S", 0 },
	{ "f", &class_boolean, offsetof(nro_Mob, F_f), "Z", 1 },
	{ "flystring", &class_boolean, offsetof(nro_Mob, F_flystring), "Z", 1 },
	{ "flyx", &class_int, offsetof(nro_Mob, F_flyx), "I", 1 },
	{ "last", &class_long, offsetof(nro_Mob, F_last), "J", 1 },
	{ "holdEffID", &class_int, offsetof(nro_Mob, F_holdEffID), "I", 1 },
	{ "cur", &class_long, offsetof(nro_Mob, F_cur), "J", 1 },
	{ "maxHp", &class_long, offsetof(nro_Mob, F_maxHp), "J", 1 },
	{ "x", &class_int, offsetof(nro_Mob, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_Mob, F_y), "I", 1 },
	{ "dir", &class_int, offsetof(nro_Mob, F_dir), "I", 1 },
	{ "a", &class_int, offsetof(nro_Mob, F_a), "I", 2 },
	{ "status", &class_int, offsetof(nro_Mob, F_status), "I", 1 },
	{ "p1", &class_int, offsetof(nro_Mob, F_p1), "I", 1 },
	{ "p2", &class_int, offsetof(nro_Mob, F_p2), "I", 1 },
	{ "p3", &class_int, offsetof(nro_Mob, F_p3), "I", 1 },
	{ "xFirst", &class_int, offsetof(nro_Mob, F_xFirst), "I", 1 },
	{ "yFirst", &class_int, offsetof(nro_Mob, F_yFirst), "I", 1 },
	{ "v", &class_int, offsetof(nro_Mob, F_v), "I", 1 },
	{ "h", &class_int, offsetof(nro_Mob, F_h), "I", 1 },
	{ "timeStatus", &class_int, offsetof(nro_Mob, F_timeStatus), "I", 1 },
	{ "y1", &class_int, offsetof(nro_Mob, F_y1), "I", 1 },
	{ "isDontMove", &class_boolean, offsetof(nro_Mob, F_isDontMove), "Z", 1 },
	{ "isy", &class_boolean, offsetof(nro_Mob, F_isy), "Z", 1 },
	{ "isDisable", &class_boolean, offsetof(nro_Mob, F_isDisable), "Z", 1 },
	{ "isDie", &class_boolean, offsetof(nro_Mob, F_isDie), "Z", 2 },
	{ "vMobMove", &class_nro_MyVector, offsetof(nro_Mob, F_vMobMove), "Lnro/MyVector;", 2 },
	{ "templateId", &class_int, offsetof(nro_Mob, F_templateId), "I", 1 },
	{ "cFocus", &class_nro_Char, offsetof(nro_Mob, F_cFocus), "Lnro/Char;", 1 },
	{ "dame", &class_long, offsetof(nro_Mob, F_dame), "J", 1 },
	{ "dameMp", &class_long, offsetof(nro_Mob, F_dameMp), "J", 1 },
	{ "sys", &class_int, offsetof(nro_Mob, F_sys), "I", 1 },
	{ "level", &class_byte, offsetof(nro_Mob, F_level), "B", 1 },
	{ "isBoss", &class_boolean, offsetof(nro_Mob, F_isBoss), "Z", 1 },
	{ "isMobMe", &class_boolean, offsetof(nro_Mob, F_isMobMe), "Z", 1 },
	{ "lastMob", &class_nro_MyVector, (intptr_t) &SF_nro_Mob_lastMob, "Lnro/MyVector;", 9 },
	{ "newMob", &class_nro_MyVector, (intptr_t) &SF_nro_Mob_newMob, "Lnro/MyVector;", 9 },
	{ "isMafuba", &class_boolean, offsetof(nro_Mob, F_isMafuba), "Z", 1 },
	{ "xMFB", &class_int, offsetof(nro_Mob, F_xMFB), "I", 1 },
	{ "yMFB", &class_int, offsetof(nro_Mob, F_yMFB), "I", 1 },
	{ "xSd", &class_int, offsetof(nro_Mob, F_xSd), "I", 1 },
	{ "ySd", &class_int, offsetof(nro_Mob, F_ySd), "I", 1 },
	{ "isOutMap", &class_boolean, offsetof(nro_Mob, F_isOutMap), "Z", 2 },
	{ "wCount", &class_int, offsetof(nro_Mob, F_wCount), "I", 2 },
	{ "isShadown", &class_boolean, offsetof(nro_Mob, F_isShadown), "Z", 2 },
	{ "tick", &class_int, offsetof(nro_Mob, F_tick), "I", 2 },
	{ "frame", &class_int, offsetof(nro_Mob, F_frame), "I", 2 },
	{ "imgHP", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Mob_imgHP, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "wy", &class_boolean, offsetof(nro_Mob, F_wy), "Z", 2 },
	{ "wt", &class_int, offsetof(nro_Mob, F_wt), "I", 2 },
	{ "fy", &class_int, offsetof(nro_Mob, F_fy), "I", 2 },
	{ "ty", &class_int, offsetof(nro_Mob, F_ty), "I", 2 },
	{ "typeSuperEff", &class_int, offsetof(nro_Mob, F_typeSuperEff), "I", 1 },
	{ "isBusyAttackSomeOne", &class_boolean, offsetof(nro_Mob, F_isBusyAttackSomeOne), "Z", 1 },
	{ "stand", getArrayClass(&class_int, 1), offsetof(nro_Mob, F_stand), "[I", 2 },
	{ "move", getArrayClass(&class_int, 1), offsetof(nro_Mob, F_move), "[I", 2 },
	{ "moveFast", getArrayClass(&class_int, 1), offsetof(nro_Mob, F_moveFast), "[I", 2 },
	{ "attack1", getArrayClass(&class_int, 1), offsetof(nro_Mob, F_attack1), "[I", 2 },
	{ "attack2", getArrayClass(&class_int, 1), offsetof(nro_Mob, F_attack2), "[I", 2 },
	{ "hurt", getArrayClass(&class_int, 1), offsetof(nro_Mob, F_hurt), "[I", 2 },
	{ "len", &class_int, offsetof(nro_Mob, F_len), "I", 1 },
	{ "w_hp_bar", &class_int, offsetof(nro_Mob, F_w_hp_bar), "I", 1 },
	{ "per", &class_int, offsetof(nro_Mob, F_per), "I", 1 },
	{ "per_tem", &class_int, offsetof(nro_Mob, F_per_tem), "I", 1 },
	{ "color", &class_int, offsetof(nro_Mob, F_color), "I", 1 },
	{ "w", &class_int, offsetof(nro_Mob, F_w), "I", 1 },
	{ "imgHPtem", &class_javax_microedition_lcdui_Image, offsetof(nro_Mob, F_imgHPtem), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "offset", &class_int, offsetof(nro_Mob, F_offset), "I", 2 },
	{ "isHide", &class_boolean, offsetof(nro_Mob, F_isHide), "Z", 1 },
	{ "injureBy", &class_nro_Char, offsetof(nro_Mob, F_injureBy), "Lnro/Char;", 1 },
	{ "injureThenDie", &class_boolean, offsetof(nro_Mob, F_injureThenDie), "Z", 1 },
	{ "mobToAttack", &class_nro_Mob, offsetof(nro_Mob, F_mobToAttack), "Lnro/Mob;", 2 },
	{ "av", &class_int, offsetof(nro_Mob, F_av), "I", 2 },
	{ "blindEff", &class_boolean, offsetof(nro_Mob, F_blindEff), "Z", 1 },
	{ "sleepEff", &class_boolean, offsetof(nro_Mob, F_sleepEff), "Z", 1 },
	{ "frameArr", getArrayClass(&class_int, 2), offsetof(nro_Mob, F_frameArr), "[[I", 2 },
	{ "isGetFr", &class_boolean, offsetof(nro_Mob, F_isGetFr), "Z", 2 },
	{ "lastTimeRequestTemplate", getArrayClass(&class_long, 1), (intptr_t) &SF_nro_Mob_lastTimeRequestTemplate, "[J", 10 },
};

static MethodMetadata methods[] {
	{ "canRequestTemplate", (intptr_t) SM_nro_Mob_canRequestTemplate_int_R_boolean, 0, "(I)Z", 10 },
	{ "isTemplateActiveInMap", (intptr_t) SM_nro_Mob_isTemplateActiveInMap_int_R_boolean, 0, "(I)Z", 10 },
	{ "isBigBoss", (intptr_t) M_nro_Mob_isBigBoss_R_boolean, VTABLE_nro_Mob_isBigBoss_R_boolean, "()Z", 17 },
	{ "<init>", (intptr_t) init_nro_Mob, 0, "()V", 1 },
	{ "getData", (intptr_t) M_nro_Mob_getData, VTABLE_nro_Mob_getData, "()V", 17 },
	{ "setBody", (intptr_t) M_nro_Mob_setBody_short, VTABLE_nro_Mob_setBody_short, "(S)V", 1 },
	{ "clearBody", (intptr_t) M_nro_Mob_clearBody, VTABLE_nro_Mob_clearBody, "()V", 1 },
	{ "<init>", (intptr_t) init_nro_Mob_int_boolean_boolean_boolean_boolean_boolean_int_int_long_byte_long_short_short_byte_byte, 0, "(IZZZZZIIJBJSSBB)V", 1 },
	{ "isExistNewMob", (intptr_t) SM_nro_Mob_isExistNewMob_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 10 },
	{ "removeBigBoss", (intptr_t) SM_nro_Mob_removeBigBoss, 0, "()V", 10 },
	{ "checkFrameTick", (intptr_t) M_nro_Mob_checkFrameTick_Array1_int, VTABLE_nro_Mob_checkFrameTick_Array1_int, "([I)V", 1 },
	{ "updateSuperEff", (intptr_t) M_nro_Mob_updateSuperEff, VTABLE_nro_Mob_updateSuperEff, "()V", 1 },
	{ "update", (intptr_t) M_nro_Mob_update, VTABLE_nro_Mob_update, "()V", 1 },
	{ "updateInjure", (intptr_t) M_nro_Mob_updateInjure, VTABLE_nro_Mob_updateInjure, "()V", 1 },
	{ "getBigBoss", (intptr_t) SM_nro_Mob_getBigBoss_R_nro_BigBoss, 0, "()Lnro/BigBoss;", 9 },
	{ "x", (intptr_t) SM_nro_Mob_x_R_nro_BachTuoc2, 0, "()Lnro/BachTuoc2;", 9 },
	{ "getBigBoss2", (intptr_t) SM_nro_Mob_getBigBoss2_R_nro_BigBoss2, 0, "()Lnro/BigBoss2;", 9 },
	{ "getBachTuoc", (intptr_t) SM_nro_Mob_getBachTuoc_R_nro_BachTuoc, 0, "()Lnro/BachTuoc;", 9 },
	{ "getBigBoss2", (intptr_t) SM_nro_Mob_getBigBoss2_byte_R_nro_NewBoss, 0, "(B)Lnro/NewBoss;", 9 },
	{ "setAttack", (intptr_t) M_nro_Mob_setAttack_nro_Char, VTABLE_nro_Mob_setAttack_nro_Char, "(Lnro/Char;)V", 1 },
	{ "isSpecial", (intptr_t) M_nro_Mob_isSpecial_R_boolean, VTABLE_nro_Mob_isSpecial_R_boolean, "()Z", 0 },
	{ "isNewModStand", (intptr_t) M_nro_Mob_isNewModStand_R_boolean, VTABLE_nro_Mob_isNewModStand_R_boolean, "()Z", 2 },
	{ "isNewMod", (intptr_t) M_nro_Mob_isNewMod_R_boolean, VTABLE_nro_Mob_isNewMod_R_boolean, "()Z", 2 },
	{ "updateMobAttack", (intptr_t) M_nro_Mob_updateMobAttack, VTABLE_nro_Mob_updateMobAttack, "()V", 1 },
	{ "updateMobWalk", (intptr_t) M_nro_Mob_updateMobWalk, VTABLE_nro_Mob_updateMobWalk, "()V", 1 },
	{ "getTemplate", (intptr_t) M_nro_Mob_getTemplate_R_nro_MobTemplate, VTABLE_nro_Mob_getTemplate_R_nro_MobTemplate, "()Lnro/MobTemplate;", 17 },
	{ "isPaint", (intptr_t) M_nro_Mob_isPaint_R_boolean, VTABLE_nro_Mob_isPaint_R_boolean, "()Z", 1 },
	{ "isUpdate", (intptr_t) M_nro_Mob_isUpdate_R_boolean, VTABLE_nro_Mob_isUpdate_R_boolean, "()Z", 1 },
	{ "checkIsBoss", (intptr_t) M_nro_Mob_checkIsBoss_R_boolean, VTABLE_nro_Mob_checkIsBoss_R_boolean, "()Z", 1 },
	{ "updateHp_bar", (intptr_t) M_nro_Mob_updateHp_bar, VTABLE_nro_Mob_updateHp_bar, "()V", 17 },
	{ "paintShadow", (intptr_t) M_nro_Mob_paintShadow_lib_mGraphics, VTABLE_nro_Mob_paintShadow_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "paint", (intptr_t) M_nro_Mob_paint_lib_mGraphics, VTABLE_nro_Mob_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "startDie", (intptr_t) M_nro_Mob_startDie, VTABLE_nro_Mob_startDie, "()V", 1 },
	{ "attackOtherMob", (intptr_t) M_nro_Mob_attackOtherMob_nro_Mob, VTABLE_nro_Mob_attackOtherMob_nro_Mob, "(Lnro/Mob;)V", 1 },
	{ "getX", (intptr_t) M_nro_Mob_getX_R_int, VTABLE_nro_Mob_getX_R_int, "()I", 1 },
	{ "getY", (intptr_t) M_nro_Mob_getY_R_int, VTABLE_nro_Mob_getY_R_int, "()I", 1 },
	{ "getH", (intptr_t) M_nro_Mob_getH_R_int, VTABLE_nro_Mob_getH_R_int, "()I", 1 },
	{ "getW", (intptr_t) M_nro_Mob_getW_R_int, VTABLE_nro_Mob_getW_R_int, "()I", 1 },
	{ "stopMoving", (intptr_t) M_nro_Mob_stopMoving, VTABLE_nro_Mob_stopMoving, "()V", 1 },
	{ "isInvisible", (intptr_t) M_nro_Mob_isInvisible_R_boolean, VTABLE_nro_Mob_isInvisible_R_boolean, "()Z", 1 },
	{ "removeHoldEff", (intptr_t) M_nro_Mob_removeHoldEff, VTABLE_nro_Mob_removeHoldEff, "()V", 1 },
	{ "removeBlindEff", (intptr_t) M_nro_Mob_removeBlindEff, VTABLE_nro_Mob_removeBlindEff, "()V", 1 },
	{ "removeSleepEff", (intptr_t) M_nro_Mob_removeSleepEff, VTABLE_nro_Mob_removeSleepEff, "()V", 1 },
	{ "GetFrame", (intptr_t) M_nro_Mob_GetFrame, VTABLE_nro_Mob_GetFrame, "()V", 1 },
	{ "isTypeNewMod", (intptr_t) M_nro_Mob_isTypeNewMod_R_boolean, VTABLE_nro_Mob_isTypeNewMod_R_boolean, "()Z", 2 },
	{ "<clinit>", (intptr_t) clinit_nro_Mob, 0, "()V", 8 },
};

Class class_nro_Mob{
		.nativeName = (intptr_t) "nro/Mob",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Mob),
		.classVtable = (intptr_t) vtable_nro_Mob,
		.staticInitializer = (intptr_t) clinit_nro_Mob,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Mob,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 80,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Mob = registerClass(&class_nro_Mob);

}

