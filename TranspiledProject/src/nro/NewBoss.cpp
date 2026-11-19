#include "nro/NewBoss.h"
#include "nro/GameScr.h"
#include "nro/NewBoss.h"
#include "java/lang/Exception.h"
#include "java/util/Hashtable.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/mHashTable.h"
#include "nro/EffectData.h"
#include "nro/Service.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/ServerEffect.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/MobTemplate.h"
#include "nro/Res.h"
#include "nro/IMapObject.h"
#include "nro/Controller.h"
#include "nro/Char.h"
#include "nro/TileMap.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_NewBoss_vMobMove;

void mark_nro_NewBoss(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_NewBoss_vMobMove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_NewBoss_vMobMove)->clazz)->markFunction)((jobject) SF_nro_NewBoss_vMobMove, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Mob(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_NewBoss *) object;
	if (self->F_wy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wy)->clazz)->markFunction)((jobject) self->F_wy, mark, depth + 1);
	if (self->F_wt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wt)->clazz)->markFunction)((jobject) self->F_wt, mark, depth + 1);
	if (self->F_attack1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attack1)->clazz)->markFunction)((jobject) self->F_attack1, mark, depth + 1);
}

void M_nro_NewBoss_setBody_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(32);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(1));
	LINE_NUMBER(33);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody = (frame[1].i);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_NewBoss_clearBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:clearBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody = (jint(0));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_NewBoss_int_short_short_int_long_long(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jlong param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_NewBoss(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].l = param5;
	{
	LINE_NUMBER(40);
	init_nro_Mob(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(22);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_stand = (jint(-1));
	LINE_NUMBER(23);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_move = (jint(-1));
	LINE_NUMBER(24);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast = (jint(-1));
	LINE_NUMBER(41);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	frame[9].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (17));
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
	jint temp6 = 6;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 9;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 10;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = 11;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = 12;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = 13;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = 14;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = 15;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	jint temp16 = 16;
	sp[2].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (7)) = (jint(1));
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) sp[1].o;
	LINE_NUMBER(43);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[1].i);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp17 = (frame[2].i) + (20);
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_xFirst = temp17;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = temp17;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp20 = frame[3].i;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_yFirst = temp20;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = temp20;
	LINE_NUMBER(46);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(47);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(48);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp = (frame[7].l);
	LINE_NUMBER(49);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (frame[5].l);
	LINE_NUMBER(50);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[4].i);
	LINE_NUMBER(51);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_len = (100);
	LINE_NUMBER(52);
	((func_nro_NewBoss_updateHp_bar) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_NewBoss_updateHp_bar])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	}
label_18:;
	{
	LINE_NUMBER(57);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(58);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1 = (jref) (jobject(nullptr));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_NewBoss_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(63);
	if (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(64);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(67);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_frame = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick)));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_NewBoss_updateSuperEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:updateSuperEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(75);
	((func_nro_NewBoss_GetFrame) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_NewBoss_GetFrame])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_nro_NewBoss_isUpdate_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_NewBoss_isUpdate_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(80);
	frame[1].o = (frame[0].o);
	LINE_NUMBER(81);
	frame[2].i = (jint(0));
	LINE_NUMBER(82);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(83);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), (jint(2)));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(84);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(86);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_12:;
	{
	LINE_NUMBER(88);
	if ((frame[2].i) >= (30)) goto label_11;
	}
	{
	LINE_NUMBER(89);
	INST_IINC(2, 1);
	LINE_NUMBER(90);
	sp[0].o = frame[1].o;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_wCount = (((jint)((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_wCount) + (24));
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_NewBoss *) NULL_CHECK((frame[1].o)))->F_isOutMap), ((jint)((nro_NewBoss *) NULL_CHECK((frame[1].o)))->F_wCount), (jint(2)));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(92);
	if ((((jint)((nro_NewBoss *) NULL_CHECK((frame[1].o)))->F_wCount) % (24)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = frame[1].o;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_wCount = (((jint)((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_wCount) - (((jint)((nro_NewBoss *) NULL_CHECK((frame[1].o)))->F_wCount) % (24)));
	goto label_11;
	}
label_11:;
	{
	LINE_NUMBER(100);
	switch(((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status)) {
		case 0: goto label_18;
		case 1: goto label_18;
		case 2: goto label_19;
		case 3: goto label_20;
		case 4: goto label_21;
		case 5: goto label_22;
		case 6: goto label_23;
		case 7: goto label_24;
		default: goto label_21;
	}
	}
label_18:;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_tick = (((jint)((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_tick) + (jint(1)));
	LINE_NUMBER(104);
	jint temp0 = (jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (temp0 <= ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (13)))))->length) - (jint(1)))) goto label_26;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_tick = ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (13)))))->length) - (jint(1)));
	}
label_26:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_frame = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (13))), ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick)));
	LINE_NUMBER(109);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)) goto label_29;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove)) goto label_3;
	}
label_29:;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	goto label_3;
	}
label_19:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_NewBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_NewBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	LINE_NUMBER(116);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)) goto label_32;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove)) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_33:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();
label_20:;
	{
	LINE_NUMBER(123);
	((func_nro_NewBoss_updateMobAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_NewBoss_updateMobAttack])(ctx, (frame[0].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}
label_21:;
	LINE_NUMBER(127);
	goto label_3;
label_22:;
	{
	LINE_NUMBER(129);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(130);
	((func_nro_NewBoss_updateMobWalk) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_NewBoss_updateMobWalk])(ctx, (frame[0].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(133);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_timeStatus = (jint(0));
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1) + (jint(1)));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1));
	LINE_NUMBER(136);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) < ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst)) goto label_3;
	}
	{
	LINE_NUMBER(137);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yFirst);
	LINE_NUMBER(138);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(139);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(144);
	M_nro_Mob_update(ctx, (frame[0].o));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}
label_3:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_setAttack_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:setAttack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (frame[1].o);
	LINE_NUMBER(154);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(155);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(156);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(157);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(158);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx);
	LINE_NUMBER(159);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy);
	LINE_NUMBER(160);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_8;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_8;
	}
	{
	LINE_NUMBER(161);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(162);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(164);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_12:;
	{
	LINE_NUMBER(167);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(169);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_13:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_removeBigBoss(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:removeBigBoss", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(4));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jbyte param2, jbyte param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:a", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(178);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wy = (jref) (frame[1].o);
	LINE_NUMBER(179);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wt = (jref) (frame[2].o);
	LINE_NUMBER(180);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_fy = (frame[3].i);
	LINE_NUMBER(181);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (frame[4].i);
	LINE_NUMBER(182);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(183);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)) goto label_6;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) == ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)) / (jint(4))));
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)) / (jint(4))));
	}
label_7:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_updateMobAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:updateMobAttack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (temp0 != ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_fy) + (jint(1)))))))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(192);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_1:;
	{
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_NewBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_NewBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_fy) + (jint(1))))));
	LINE_NUMBER(196);
	jint temp0 = (jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick;
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (15))), (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_fy) - (jint(1)))))) goto label_4;
	}
	{
	LINE_NUMBER(197);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wy;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wy;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp[1].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wt;
	((func_nro_Char_doInjure_long_long_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure_long_long_boolean_boolean])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (jlong(0)), (jint(0)), (jint(0)));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (16))), (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_fy) - (jint(1))));
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wy;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cx;
	sp[0].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wy;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_cy), (jint(1)));
	LINE_NUMBER(197);
	INST_IINC(1, 1);
	goto label_6;
	}
label_4:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_updateMobWalk(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:updateMobWalk", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_attack1;
	((func_nro_NewBoss_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_NewBoss_checkFrameTick_Array1_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	LINE_NUMBER(208);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	jint temp0 = (jint)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_speed;
	frame[1].i = temp0;
	frame[2].i = temp0;
	LINE_NUMBER(209);
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)));
	if (temp3 >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)));
	frame[2].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)) goto label_6;
	}
	INST_ILOAD(2);
	goto label_7;
label_6:;
	INST_ILOAD(2);
	INST_INEG();
label_7:;
	{
	sp -= 3;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (sp[1].i + sp[2].i);
	LINE_NUMBER(214);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove);
	LINE_NUMBER(215);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)) goto label_10;
	}
	{
	LINE_NUMBER(216);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(1));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(217);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)) goto label_12;
	}
	{
	LINE_NUMBER(218);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir = (jint(-1));
	}
label_12:;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) - ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a)));
	if (temp0 > (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(222);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a);
	LINE_NUMBER(223);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	}
label_14:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_NewBoss_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(231);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(233);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_5;
	}
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(235);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_7;
	}
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(238);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_NewBoss_isUpdate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:isUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == 0) goto label_1;
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

jbool M_nro_NewBoss_checkIsBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:checkIsBoss", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
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

void M_nro_NewBoss_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(252);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_1;
	}
	{
	LINE_NUMBER(253);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_4;
	}
	{
	LINE_NUMBER(254);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_6;
	}
	{
	LINE_NUMBER(255);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_xMFB;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_yMFB;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ICONST(1);
label_9:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(257);
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
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (33));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(261);
	if (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_12;
	}
	{
	LINE_NUMBER(262);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(263);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) < (114)) goto label_15;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) <= (120)) goto label_16;
	}
label_15:;
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (127)) goto label_16;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (128)) goto label_16;
	}
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) + ((frame[2].i) / (jint(2)))), (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) + (jint(1))), (jint(4)));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(265);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) - ((frame[2].i) / (jint(2)))) / (frame[2].i)), ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) + (jint(1))) / (frame[2].i)));
	if (temp0 != 0) goto label_20;
	}
	{
	LINE_NUMBER(267);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) - (30)) / (frame[2].i)) * (frame[2].i)), (100), (100));
	goto label_16;
	}
label_20:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) + ((frame[2].i) / (jint(2)))) / (frame[2].i)), ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) + (jint(1))) / (frame[2].i)));
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(269);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	goto label_16;
	}
label_22:;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) - ((frame[2].i) / (jint(2)))), (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) + (jint(1))), (8));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(271);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap) / (24)) * (frame[2].i)), (((((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	}
label_16:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[1].o;
	clinit_nro_NewBoss(ctx);
	sp[1].o = (jobject)SF_nro_NewBoss_vMobMove;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isOutMap), (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_wCount) - (jint(5))), (jint(3)));
	LINE_NUMBER(276);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	}
label_12:;
	{
	LINE_NUMBER(279);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY));
	LINE_NUMBER(280);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_changBody) != 0) goto label_27;
	}
	{
	LINE_NUMBER(281);
	if (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast) != (jint(-1))) goto label_29;
	}
	{
	LINE_NUMBER(282);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_29:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (33)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), (jint(4)));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (33)));
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_move = (temp0 - (33));
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) + (33)));
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_stand = temp1;
	LINE_NUMBER(288);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) <= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_move)) goto label_31;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_stand)) goto label_31;
	}
	{
	if (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_stand) == (jint(-1))) goto label_31;
	}
	{
	LINE_NUMBER(289);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_move);
	}
label_31:;
	{
	LINE_NUMBER(293);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) >= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast)) goto label_36;
	}
	{
	if (((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast) == (jint(-1))) goto label_36;
	}
	{
	LINE_NUMBER(294);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + (33));
	}
label_36:;
	{
	LINE_NUMBER(298);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) <= ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast)) goto label_39;
	}
	{
	LINE_NUMBER(299);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_moveFast = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) - (33));
	}
label_39:;
	{
	LINE_NUMBER(303);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_frame;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_42;
	}
	INST_ICONST(0);
	goto label_43;
label_42:;
	INST_ICONST(1);
label_43:;
	{
	sp -= 6;
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, (jint(2)));
	goto label_44;
	}
label_27:;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_smallBody;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - (9);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir) != (jint(1))) goto label_45;
	}
	INST_ICONST(0);
	goto label_46;
label_45:;
	INST_ICONST(2);
label_46:;
	INST_BIPUSH(33);
	POP_N(6); // Pop method args
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i);
label_44:;
	{
	LINE_NUMBER(308);
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, (frame[1].o), (jint(0)), (-(clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)));
	LINE_NUMBER(309);
	if ((longCompare(((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur), (jlong(0)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) == (jint(1))) goto label_1;
	}
	clinit_nro_Mob(ctx);
	(sp++)->o = SF_nro_Mob_imgHP;
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(312);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(313);
	frame[3].i = (jint(((((((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur) * (jlong(100ll))) / ((jlong)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_maxHp)) / (jlong(10ll))) - (jlong(1)))));
	LINE_NUMBER(314);
	if ((frame[3].i) >= 0) goto label_52;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_52:;
	{
	LINE_NUMBER(315);
	if ((frame[3].i) <= (9)) goto label_53;
	}
	INST_BIPUSH(9);
	INST_ISTORE(3);
label_53:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[3].i))), (9), (6), (jint(0)), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h)) - (10)), ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_BOTTOM) | (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_HCENTER)));
	}
label_1:;
	LINE_NUMBER(375);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_startDie(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:startDie", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(378);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(379);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cur = (jlong(0));
	LINE_NUMBER(380);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(1));
	LINE_NUMBER(381);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (-3);
	LINE_NUMBER(382);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (-((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_dir));
	LINE_NUMBER(383);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_NewBoss_attackOtherMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:attackOtherMob", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(387);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_cFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(388);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p1 = (jint(0));
	LINE_NUMBER(389);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p2 = (jint(0));
	LINE_NUMBER(390);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(3));
	LINE_NUMBER(391);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_tick = (jint(0));
	LINE_NUMBER(392);
	frame[2].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(393);
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(394);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v) << (jint(1)))) goto label_8;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y)));
	if (temp0 >= (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h) << (jint(1)))) goto label_8;
	}
	{
	LINE_NUMBER(395);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x) >= (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(396);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) - ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(398);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = ((frame[2].i) + ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v));
	}
label_12:;
	{
	LINE_NUMBER(401);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(0));
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(403);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_p3 = (jint(1));
	}
label_13:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_NewBoss_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jint M_nro_NewBoss_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_nro_NewBoss_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_h);
	}

	popStackFrame(ctx);
}

jint M_nro_NewBoss_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v);
	}

	popStackFrame(ctx);
}

void M_nro_NewBoss_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:stopMoving", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(424);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(425);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Mob *) NULL_CHECK(sp[2].o))->F_p3 = temp0;
	((nro_Mob *) NULL_CHECK(sp[1].o))->F_p2 = temp0;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_p1 = temp0;
	}
label_1:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_NewBoss_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:isInvisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
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

void M_nro_NewBoss_removeHoldEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:removeHoldEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(437);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	LINE_NUMBER(440);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:removeBlindEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(443);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:removeSleepEff", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(446);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_a_short_short(jcontext ctx, jobject self, jshort param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:a", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(449);
	if ((frame[2].i) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(450);
	jint temp0 = (jint)SM_nro_Res_distance_int_int_int_int_R_int(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a), ((jint)((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove));
	if (temp0 <= (100)) goto label_3;
	}
	{
	LINE_NUMBER(451);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(452);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(453);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(2));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(455);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a = (frame[1].i);
	LINE_NUMBER(456);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_isDontMove = (frame[2].i);
	LINE_NUMBER(457);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(460);
	((nro_NewBoss *) NULL_CHECK((frame[0].o)))->F_a = (frame[1].i);
	LINE_NUMBER(461);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(5));
	}
label_7:;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_GetFrame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:GetFrame", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	clinit_nro_Controller(ctx);
	sp[1].o = (jobject)SF_nro_Controller_frameHT_NEWBOSS;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId));
	sp[1].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((nro_NewBoss *) NULL_CHECK(sp[0].o))->F_attack1 = (jref) (checkCast(ctx, getArrayClass(&class_int, 2), sp[1].o));
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_w = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(469);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_v = ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_w);
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[1].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Mob *) NULL_CHECK((frame[0].o)))->F_templateId)))))->F_data;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_h = ((jint)((nro_EffectData *) NULL_CHECK(sp[1].o))->F_height);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(472);
	goto label_7;
label_2:;
	LINE_NUMBER(471);
	INST_ASTORE(1);
label_7:;
	LINE_NUMBER(473);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_NewBoss_onCancelChat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:onCancelChat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	((nro_Mob *) NULL_CHECK((frame[0].o)))->F_status = (jint(0));
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_NewBoss(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Mob(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/NewBoss:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_NewBoss(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/shadowBig.png"_j))));
	clinit_nro_NewBoss(ctx);
	SF_nro_NewBoss_vMobMove = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmobHP.png"_j))));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_NewBoss[] {
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
	(void *) M_nro_NewBoss_getX_R_int,
	(void *) M_nro_NewBoss_getY_R_int,
	(void *) M_nro_NewBoss_getW_R_int,
	(void *) M_nro_NewBoss_getH_R_int,
	(void *) M_nro_NewBoss_stopMoving,
	(void *) M_nro_NewBoss_isInvisible_R_boolean,
	(void *) M_nro_Mob_isBigBoss_R_boolean,
	(void *) M_nro_Mob_getData,
	(void *) M_nro_NewBoss_setBody_short,
	(void *) M_nro_NewBoss_clearBody,
	(void *) M_nro_NewBoss_checkFrameTick_Array1_int,
	(void *) M_nro_NewBoss_updateSuperEff,
	(void *) M_nro_NewBoss_update,
	(void *) M_nro_Mob_updateInjure,
	(void *) M_nro_NewBoss_setAttack_nro_Char,
	(void *) M_nro_Mob_isSpecial_R_boolean,
	(void *) M_nro_Mob_isNewModStand_R_boolean,
	(void *) M_nro_Mob_isNewMod_R_boolean,
	(void *) M_nro_NewBoss_updateMobAttack,
	(void *) M_nro_NewBoss_updateMobWalk,
	(void *) M_nro_Mob_getTemplate_R_nro_MobTemplate,
	(void *) M_nro_NewBoss_isPaint_R_boolean,
	(void *) M_nro_NewBoss_isUpdate_R_boolean,
	(void *) M_nro_NewBoss_checkIsBoss_R_boolean,
	(void *) M_nro_Mob_updateHp_bar,
	(void *) M_nro_Mob_paintShadow_lib_mGraphics,
	(void *) M_nro_NewBoss_paint_lib_mGraphics,
	(void *) M_nro_NewBoss_startDie,
	(void *) M_nro_NewBoss_attackOtherMob_nro_Mob,
	(void *) M_nro_NewBoss_removeHoldEff,
	(void *) M_nro_NewBoss_removeBlindEff,
	(void *) M_nro_NewBoss_removeSleepEff,
	(void *) M_nro_NewBoss_GetFrame,
	(void *) M_nro_Mob_isTypeNewMod_R_boolean,
	(void *) M_nro_NewBoss_removeBigBoss,
	(void *) M_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte,
	(void *) M_nro_NewBoss_a_short_short,
	(void *) M_nro_NewBoss_onCancelChat,
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
	{ "removeBigBoss", "()V" },
	{ "a", "([Lnro/Char;[JBB)V" },
	{ "a", "(SS)V" },
	{ "onCancelChat", "()V" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "vMobMove", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_NewBoss_vMobMove, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "a", &class_int, offsetof(nro_NewBoss, F_a), "I", 1 },
	{ "isDontMove", &class_int, offsetof(nro_NewBoss, F_isDontMove), "I", 1 },
	{ "isOutMap", &class_int, offsetof(nro_NewBoss, F_isOutMap), "I", 2 },
	{ "wCount", &class_int, offsetof(nro_NewBoss, F_wCount), "I", 2 },
	{ "isShadown", &class_boolean, offsetof(nro_NewBoss, F_isShadown), "Z", 2 },
	{ "tick", &class_int, offsetof(nro_NewBoss, F_tick), "I", 2 },
	{ "frame", &class_int, offsetof(nro_NewBoss, F_frame), "I", 2 },
	{ "wy", getArrayClass(&class_nro_Char, 1), offsetof(nro_NewBoss, F_wy), "[Lnro/Char;", 2 },
	{ "wt", getArrayClass(&class_long, 1), offsetof(nro_NewBoss, F_wt), "[J", 2 },
	{ "fy", &class_byte, offsetof(nro_NewBoss, F_fy), "B", 2 },
	{ "ty", &class_int, offsetof(nro_NewBoss, F_ty), "I", 2 },
	{ "stand", &class_int, offsetof(nro_NewBoss, F_stand), "I", 2 },
	{ "move", &class_int, offsetof(nro_NewBoss, F_move), "I", 2 },
	{ "moveFast", &class_int, offsetof(nro_NewBoss, F_moveFast), "I", 2 },
	{ "attack1", getArrayClass(&class_int, 2), offsetof(nro_NewBoss, F_attack1), "[[I", 2 },
};

static MethodMetadata methods[] {
	{ "setBody", (intptr_t) M_nro_NewBoss_setBody_short, VTABLE_nro_NewBoss_setBody_short, "(S)V", 17 },
	{ "clearBody", (intptr_t) M_nro_NewBoss_clearBody, VTABLE_nro_NewBoss_clearBody, "()V", 17 },
	{ "<init>", (intptr_t) init_nro_NewBoss_int_short_short_int_long_long, 0, "(ISSIJJ)V", 1 },
	{ "checkFrameTick", (intptr_t) M_nro_NewBoss_checkFrameTick_Array1_int, VTABLE_nro_NewBoss_checkFrameTick_Array1_int, "([I)V", 17 },
	{ "updateSuperEff", (intptr_t) M_nro_NewBoss_updateSuperEff, VTABLE_nro_NewBoss_updateSuperEff, "()V", 17 },
	{ "update", (intptr_t) M_nro_NewBoss_update, VTABLE_nro_NewBoss_update, "()V", 17 },
	{ "setAttack", (intptr_t) M_nro_NewBoss_setAttack_nro_Char, VTABLE_nro_NewBoss_setAttack_nro_Char, "(Lnro/Char;)V", 17 },
	{ "removeBigBoss", (intptr_t) M_nro_NewBoss_removeBigBoss, VTABLE_nro_NewBoss_removeBigBoss, "()V", 17 },
	{ "a", (intptr_t) M_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte, VTABLE_nro_NewBoss_a_Array1_nro_Char_Array1_long_byte_byte, "([Lnro/Char;[JBB)V", 17 },
	{ "updateMobAttack", (intptr_t) M_nro_NewBoss_updateMobAttack, VTABLE_nro_NewBoss_updateMobAttack, "()V", 17 },
	{ "updateMobWalk", (intptr_t) M_nro_NewBoss_updateMobWalk, VTABLE_nro_NewBoss_updateMobWalk, "()V", 17 },
	{ "isPaint", (intptr_t) M_nro_NewBoss_isPaint_R_boolean, VTABLE_nro_NewBoss_isPaint_R_boolean, "()Z", 17 },
	{ "isUpdate", (intptr_t) M_nro_NewBoss_isUpdate_R_boolean, VTABLE_nro_NewBoss_isUpdate_R_boolean, "()Z", 17 },
	{ "checkIsBoss", (intptr_t) M_nro_NewBoss_checkIsBoss_R_boolean, VTABLE_nro_NewBoss_checkIsBoss_R_boolean, "()Z", 17 },
	{ "paint", (intptr_t) M_nro_NewBoss_paint_lib_mGraphics, VTABLE_nro_NewBoss_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "startDie", (intptr_t) M_nro_NewBoss_startDie, VTABLE_nro_NewBoss_startDie, "()V", 17 },
	{ "attackOtherMob", (intptr_t) M_nro_NewBoss_attackOtherMob_nro_Mob, VTABLE_nro_NewBoss_attackOtherMob_nro_Mob, "(Lnro/Mob;)V", 17 },
	{ "getX", (intptr_t) M_nro_NewBoss_getX_R_int, VTABLE_nro_NewBoss_getX_R_int, "()I", 17 },
	{ "getY", (intptr_t) M_nro_NewBoss_getY_R_int, VTABLE_nro_NewBoss_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_NewBoss_getH_R_int, VTABLE_nro_NewBoss_getH_R_int, "()I", 17 },
	{ "getW", (intptr_t) M_nro_NewBoss_getW_R_int, VTABLE_nro_NewBoss_getW_R_int, "()I", 17 },
	{ "stopMoving", (intptr_t) M_nro_NewBoss_stopMoving, VTABLE_nro_NewBoss_stopMoving, "()V", 17 },
	{ "isInvisible", (intptr_t) M_nro_NewBoss_isInvisible_R_boolean, VTABLE_nro_NewBoss_isInvisible_R_boolean, "()Z", 17 },
	{ "removeHoldEff", (intptr_t) M_nro_NewBoss_removeHoldEff, VTABLE_nro_NewBoss_removeHoldEff, "()V", 17 },
	{ "removeBlindEff", (intptr_t) M_nro_NewBoss_removeBlindEff, VTABLE_nro_NewBoss_removeBlindEff, "()V", 17 },
	{ "removeSleepEff", (intptr_t) M_nro_NewBoss_removeSleepEff, VTABLE_nro_NewBoss_removeSleepEff, "()V", 17 },
	{ "a", (intptr_t) M_nro_NewBoss_a_short_short, VTABLE_nro_NewBoss_a_short_short, "(SS)V", 17 },
	{ "GetFrame", (intptr_t) M_nro_NewBoss_GetFrame, VTABLE_nro_NewBoss_GetFrame, "()V", 17 },
	{ "onCancelChat", (intptr_t) M_nro_NewBoss_onCancelChat, VTABLE_nro_NewBoss_onCancelChat, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_NewBoss, 0, "()V", 8 },
};

Class class_nro_NewBoss{
		.nativeName = (intptr_t) "nro/NewBoss",
		.parentClass = (intptr_t) &class_nro_Mob,
		.size = sizeof(nro_NewBoss),
		.classVtable = (intptr_t) vtable_nro_NewBoss,
		.staticInitializer = (intptr_t) clinit_nro_NewBoss,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_NewBoss,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_NewBoss = registerClass(&class_nro_NewBoss);

}

