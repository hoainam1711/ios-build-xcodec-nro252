#include "nro/Npc.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "nro/NClass.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/EffectCharPaint.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/Mob.h"
#include "nro/PartImage.h"
#include "nro/ItemObject.h"
#include "nro/TileMap.h"
#include "lib/mFont.h"
#include "nro/NpcTemplate.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/Effect.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Npc.h"
#include "nro/NinjaUtil.h"
#include "nro/Small.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_Npc_arrNpcTemplate;
jbool SF_nro_Npc_mabuEff;
jint SF_nro_Npc_tMabuEff;

void mark_nro_Npc(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Npc_arrNpcTemplate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Npc_arrNpcTemplate)->clazz)->markFunction)((jobject) SF_nro_Npc_arrNpcTemplate, mark, depth + 1);
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
	auto self = (nro_Npc *) object;
	if (self->F_template)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_template)->clazz)->markFunction)((jobject) self->F_template, mark, depth + 1);
	if (self->F_duahau)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_duahau)->clazz)->markFunction)((jobject) self->F_duahau, mark, depth + 1);
}

void init_nro_Npc_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Npc(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(26);
	init_nro_Char(ctx, (frame[0].o));
	LINE_NUMBER(27);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(28);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_avatar = (frame[6].i);
	LINE_NUMBER(29);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"npc avatar= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_avatar));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(30);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = (frame[3].i);
	LINE_NUMBER(31);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = (frame[4].i);
	LINE_NUMBER(32);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd = (frame[3].i);
	LINE_NUMBER(33);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd = (frame[4].i);
	LINE_NUMBER(34);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (frame[2].i);
	LINE_NUMBER(35);
	if ((frame[1].i) == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Npc_arrNpcTemplate;
	((nro_Npc *) NULL_CHECK(sp[0].o))->F_template = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i)));
	}
label_10:;
	{
	LINE_NUMBER(39);
	if ((frame[5].i) == (23)) goto label_12;
	}
	{
	if ((frame[5].i) != (42)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(40);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch = (45);
	}
label_13:;
	{
	LINE_NUMBER(43);
	if ((frame[5].i) != (51)) goto label_14;
	}
	{
	LINE_NUMBER(44);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(0));
	LINE_NUMBER(45);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex = (frame[2].i);
	LINE_NUMBER(46);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"duaHau = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[0].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o != nullptr) goto label_20;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_20:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[1].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)SM_nro_Res_changeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_18:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Npc_setStatus_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:setStatus", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(60);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex = (frame[1].i);
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Npc *) NULL_CHECK(sp[1].o))->F_cur = temp0;
	((nro_Npc *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(62);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_seconds = (frame[2].i);
	LINE_NUMBER(63);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"in ra second= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_seconds));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_Npc_clearEffTask(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:clearEffTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Npc(ctx);
	{
	LINE_NUMBER(67);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(69);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_Npc, sp[0].o);
	frame[1].o = sp[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effTask = (jref) (jobject(nullptr));
	LINE_NUMBER(70);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_indexEffTask = (jint(-1));
	LINE_NUMBER(67);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Npc_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (51)) goto label_1;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Npc *) NULL_CHECK(sp[0].o))->F_cur = temp0;
	LINE_NUMBER(78);
	if ((longCompare((((jlong)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_cur) - ((jlong)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	((nro_Npc *) NULL_CHECK(sp[0].o))->F_seconds = (((jint)((nro_Npc *) NULL_CHECK(sp[0].o))->F_seconds) - (jint(1)));
	LINE_NUMBER(80);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_last = ((jlong)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_cur);
	LINE_NUMBER(81);
	if (((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_seconds) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(82);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_seconds = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(87);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_8;
	}
	{
	LINE_NUMBER(88);
	((func_nro_Npc_updateShadown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Npc_updateShadown])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (7));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (9);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (11);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (11);
	frame[1].o = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ctaskId) < (9)) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ctaskId) > (10)) goto label_13;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_nClass;
	if (((jint)((nro_NClass *) NULL_CHECK(sp[0].o))->F_classId) <= 0) goto label_13;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_nClass;
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((nro_NClass *) NULL_CHECK(sp[1].o))->F_classId));
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (temp0 != ((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId)) goto label_13;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effTask = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (57)));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	jint temp0 = ((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) + (jint(1));
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	sp[0].o = (jobject)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_subNames;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	LINE_NUMBER(99);
	goto label_10;
label_18:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effTask = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (62)));
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(106);
	jint temp0 = (jint)SM_nro_GameScr_getTaskNpcId_R_byte(ctx);
	frame[2].i = temp0;
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (temp0 == ((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId)) goto label_17;
	}
label_22:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (temp0 == ((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId)) goto label_23;
	}
	LINE_NUMBER(109);
	goto label_10;
label_23:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	frame[3].i = (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	sp[0].o = (jobject)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_subNames;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effTask = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (98)));
	}
label_17:;
	{
	LINE_NUMBER(118);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(122);
	M_nro_Char_update(ctx, (frame[0].o));
	LINE_NUMBER(123);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (51)) goto label_28;
	}
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 <= ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_30;
	}
	{
	LINE_NUMBER(125);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(127);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	}
label_32:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if ((((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) % (jint(2))) != 0) goto label_28;
	}
	{
	LINE_NUMBER(131);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) != (jint(1))) goto label_34;
	}
	{
	LINE_NUMBER(132);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}
label_34:;
	{
	LINE_NUMBER(136);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(1));
	}
label_28:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Npc_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:paint", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	if ((clinit_nro_Npc(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(144);
	if (((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_isFocus) != 0) goto label_1;
	}
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_nro_Npc_isPaint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Npc_isPaint_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(146);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (15)) goto label_1;
	}
	{
	LINE_NUMBER(147);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == 0) goto label_6;
	}
	{
	LINE_NUMBER(148);
	M_nro_Char_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (jint(4))) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (51)) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (50)) goto label_9;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(3)));
	}
label_9:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (jint(3))) goto label_11;
	}
	{
	LINE_NUMBER(155);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), (265), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(0)), (33));
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_14;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_currChatPopup;
	if ((--sp)->o != nullptr) goto label_14;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (9), (6), (jint(0)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) + (jint(4))), (33));
	}
label_14:;
	{
	LINE_NUMBER(160);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_dyEff = (60);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (jint(4))) goto label_16;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (50)) goto label_18;
	}
	{
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (51)) goto label_18;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (6)) goto label_20;
	}
	{
	LINE_NUMBER(165);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), (545), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(5))), (jint(0)), (33));
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_23;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_currChatPopup;
	if ((--sp)->o != nullptr) goto label_23;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (9), (6), (jint(0)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (9)), (33));
	}
label_23:;
	{
	LINE_NUMBER(170);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_zoneID));
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) + (19);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (temp1 - temp2), (jint(2)));
	goto label_16;
	}
label_20:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	frame[2].i = ((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_headId);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	frame[3].i = ((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_legId);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	frame[4].i = ((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_bodyId);
	LINE_NUMBER(175);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(176);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(177);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(178);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_31;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dx);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, (temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(180);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[6].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_id;
	jint temp7 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp8 = temp7 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[6].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp9 = temp8 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_dx);
	jint temp10 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp11 = temp10 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[6].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp6, temp9, (temp11 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_dy)), (jint(0)), (jint(0)));
	LINE_NUMBER(181);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp12 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_id;
	jint temp13 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp14 = temp13 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp15 = temp14 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_dx);
	jint temp16 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp17 = temp16 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp12, temp15, (temp17 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_dy)), (jint(0)), (jint(0)));
	goto label_35;
	}
label_31:;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp1 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp2 - ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dx);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, (temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dy)), (jint(2)), (24));
	LINE_NUMBER(184);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[6].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_id;
	jint temp7 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp8 = temp7 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[6].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp9 = temp8 - ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_dx);
	jint temp10 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp11 = temp10 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[6].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp6, temp9, (temp11 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(1)))), (jint(0))))))))->F_dy)), (jint(2)), (24));
	LINE_NUMBER(185);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp12 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_id;
	jint temp13 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp14 = temp13 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp15 = temp14 - ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_dx);
	jint temp16 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	clinit_nro_Npc(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp17 = temp16 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[7].o)))->F_pi;
	clinit_nro_Npc(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp12, temp15, (temp17 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(2)))), (jint(0))))))))->F_dy)), (jint(2)), (24));
	}
label_35:;
	{
	LINE_NUMBER(188);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (51)) goto label_38;
	}
	{
	LINE_NUMBER(189);
	frame[8].i = (15);
	LINE_NUMBER(190);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (47)) goto label_41;
	}
	{
	LINE_NUMBER(191);
	frame[8].i = (47);
	}
label_41:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_38;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_currChatPopup;
	if ((--sp)->o != nullptr) goto label_38;
	{
	LINE_NUMBER(195);
	frame[9].i = (jint(0));
	LINE_NUMBER(196);
	frame[10].i = (jint(0));
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (28)) goto label_46;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (41)) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(198);
	frame[9].i = (jint(3));
	LINE_NUMBER(199);
	frame[10].i = (-12);
	}
label_47:;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (9), (6), (jint(0)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (frame[9].i)), (((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - ((frame[8].i) - (8))) + (frame[10].i)), (33));
	}
label_38:;
	{
	LINE_NUMBER(206);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_dyEff = (65);
	LINE_NUMBER(207);
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (50)) goto label_51;
	}
	clinit_nro_Npc(ctx);
	(sp++)->i = SF_nro_Npc_mabuEff;
	if ((--sp)->i == 0) goto label_51;
	{
	LINE_NUMBER(210);
	clinit_nro_Npc(ctx);
	SF_nro_Npc_tMabuEff = ((clinit_nro_Npc(ctx), (jint)SF_nro_Npc_tMabuEff) + (jint(1)));
	LINE_NUMBER(211);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_54;
	}
	{
	LINE_NUMBER(212);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	jint temp0 = 19;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-50), (50));
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, temp0, (temp1 + temp2), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_54:;
	{
	LINE_NUMBER(215);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (15)) != 0) goto label_56;
	}
	{
	LINE_NUMBER(216);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	jint temp0 = 18;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-5), (jint(5)));
	jint temp3 = temp1 + temp2;
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp5 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-90), (jint(0)));
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, (temp4 + temp5), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_56:;
	{
	LINE_NUMBER(219);
	if ((clinit_nro_Npc(ctx), (jint)SF_nro_Npc_tMabuEff) != (100)) goto label_58;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_activeSuperPower_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_activeSuperPower_int_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	}
label_58:;
	{
	LINE_NUMBER(223);
	if ((clinit_nro_Npc(ctx), (jint)SF_nro_Npc_tMabuEff) != (110)) goto label_51;
	}
	{
	LINE_NUMBER(224);
	clinit_nro_Npc(ctx);
	SF_nro_Npc_mabuEff = (jint(0));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId = (jint(4));
	}
label_51:;
	{
	LINE_NUMBER(229);
	frame[2].i = (jint(0));
	LINE_NUMBER(230);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex))))) == nullptr) goto label_63;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex)))))))->F_img;
	if (sp[0].o == nullptr) goto label_63;
	}
	{
	LINE_NUMBER(231);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex)))))))->F_img;
	jint temp0 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	}
label_63:;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex));
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(-1)), (jint(1)));
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, (temp1 + temp2), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(0)), (33));
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_66;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(236);
	clinit_nro_ChatPopup(ctx);
	sp[0].o = (jobject)SF_nro_ChatPopup_currChatPopup;
	if (sp[0].o != nullptr) goto label_68;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (9), (6), (jint(0)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (9)) + (16)) - (frame[2].i)), (33));
	}
label_68:;
	{
	LINE_NUMBER(240);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_nro_NinjaUtil_getTime_int_R_java_lang_String(ctx, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_seconds));
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (16);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = (((temp1 - temp2) - (20)) - (frame[2].i)) + (16);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	goto label_16;
	}
label_66:;
	{
	LINE_NUMBER(242);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_nro_NinjaUtil_getTime_int_R_java_lang_String(ctx, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_seconds));
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (8);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = (((temp1 - temp2) - (20)) - (frame[2].i)) + (16);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	}
label_16:;
	{
	LINE_NUMBER(247);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != 0) goto label_1;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_idImg;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_dy);
	jint temp3 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, ((temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_where)) - ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_dyEff)), (jint(0)), (jint(3)));
	LINE_NUMBER(249);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_indexEffTask = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_indexEffTask) + (jint(1)));
	LINE_NUMBER(251);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(252);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask = (jint(0));
	}
label_1:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Npc_paintName_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:paintName", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	if ((clinit_nro_Npc(ctx), (jint)SF_nro_Char_isLoadingMap) != 0) goto label_1;
	}
	{
	LINE_NUMBER(266);
	if (((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_isFocus) != 0) goto label_1;
	}
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_nro_Npc_isPaint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Npc_isPaint_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(268);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (15)) goto label_1;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (jint(3))) goto label_7;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(272);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = (temp1 - temp2) - (jint(5));
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(274);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (jint(3));
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = temp1 - temp2;
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	}
label_11:;
	{
	LINE_NUMBER(277);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_dyEff = (60);
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (50)) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (51)) goto label_13;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (6)) goto label_15;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(283);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = (temp1 - temp2) - (16);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(287);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (8);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = temp1 - temp2;
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(291);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (51)) goto label_21;
	}
	{
	LINE_NUMBER(292);
	frame[2].i = (15);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (47)) goto label_24;
	}
	{
	LINE_NUMBER(294);
	frame[2].i = (47);
	}
label_24:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(300);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (113)) goto label_21;
	}
	{
	LINE_NUMBER(301);
	frame[3].i = (jint(0));
	LINE_NUMBER(302);
	frame[4].i = (jint(0));
	LINE_NUMBER(303);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (28)) goto label_31;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (41)) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(304);
	frame[3].i = (jint(3));
	LINE_NUMBER(305);
	frame[4].i = (-12);
	}
label_32:;
	{
	LINE_NUMBER(308);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (frame[3].i);
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = ((temp1 - temp2) - (frame[2].i)) + (frame[4].i);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	goto label_21;
	}
label_26:;
	{
	LINE_NUMBER(311);
	frame[2].i = (8);
	LINE_NUMBER(312);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (47)) goto label_35;
	}
	{
	LINE_NUMBER(313);
	frame[2].i = (40);
	}
label_35:;
	{
	LINE_NUMBER(316);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (113)) goto label_21;
	}
	{
	LINE_NUMBER(317);
	frame[3].i = (jint(0));
	LINE_NUMBER(318);
	frame[4].i = (jint(0));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) == (28)) goto label_40;
	}
	{
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (41)) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(320);
	frame[3].i = (jint(3));
	LINE_NUMBER(321);
	frame[4].i = (-12);
	}
label_41:;
	{
	LINE_NUMBER(324);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (frame[3].i);
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (frame[2].i);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = (temp1 - temp2) + (frame[4].i);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	}
label_21:;
	{
	LINE_NUMBER(329);
	((nro_Npc *) NULL_CHECK((frame[0].o)))->F_dyEff = (65);
	goto label_1;
	}
label_13:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(331);
	frame[2].i = (jint(0));
	LINE_NUMBER(332);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex))))) == nullptr) goto label_45;
	}
	{
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex)))))))->F_img;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(333);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[1].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duahau;
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_duaHauIndex)))))))->F_img;
	jint temp0 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	}
label_45:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_47;
	}
	{
	LINE_NUMBER(337);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = (temp1 - temp2) - (frame[2].i);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}
label_47:;
	{
	LINE_NUMBER(341);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_yellow;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Npc *) NULL_CHECK((frame[0].o)))->F_template;
	sp[2].o = (jobject)((nro_NpcTemplate *) NULL_CHECK(sp[2].o))->F_name;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (8);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[3].o);
	jint temp3 = ((temp1 - temp2) - (frame[2].i)) + (16);
	jint temp4 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp3, temp4, sp[3].o);
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}
label_1:;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Npc_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (15);
	LINE_NUMBER(356);
	clinit_nro_Npc(ctx);
	SF_nro_Char_chatPopup = (jobject(nullptr));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Npc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Char(ctx);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Npc:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Npc(ctx);
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(-1));
	frame[0].o = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	frame[0].o = sp[0].o;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Npc[] {
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
	(void *) M_nro_Npc_update,
	(void *) M_nro_Char_updateEffect,
	(void *) M_nro_Char_checkPerformEndMovePointAction,
	(void *) M_nro_Char_checkHideCharName,
	(void *) M_nro_Char_updateSkillPaint,
	(void *) M_nro_Char_SetNum_int_int,
	(void *) M_nro_Char_updateCharDeadFly,
	(void *) M_nro_Char_updateResetPoint,
	(void *) M_nro_Char_updateSkillStand,
	(void *) M_nro_Char_updateCharAutoJump,
	(void *) M_nro_Npc_hide,
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
	(void *) M_nro_Char_checkFrameTick_Array1_int,
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
	(void *) M_nro_Npc_paint_lib_mGraphics,
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
	(void *) M_nro_Npc_setStatus_byte_int,
	(void *) M_nro_Npc_paintName_lib_mGraphics,
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
	{ "setStatus", "(BI)V" },
	{ "paintName", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "template", &class_nro_NpcTemplate, offsetof(nro_Npc, F_template), "Lnro/NpcTemplate;", 1 },
	{ "arrNpcTemplate", getArrayClass(&class_nro_NpcTemplate, 1), (intptr_t) &SF_nro_Npc_arrNpcTemplate, "[Lnro/NpcTemplate;", 9 },
	{ "isFocus", &class_boolean, offsetof(nro_Npc, F_isFocus), "Z", 1 },
	{ "duaHauIndex", &class_int, offsetof(nro_Npc, F_duaHauIndex), "I", 2 },
	{ "dyEff", &class_int, offsetof(nro_Npc, F_dyEff), "I", 2 },
	{ "mabuEff", &class_boolean, (intptr_t) &SF_nro_Npc_mabuEff, "Z", 9 },
	{ "tMabuEff", &class_int, (intptr_t) &SF_nro_Npc_tMabuEff, "I", 10 },
	{ "duahau", getArrayClass(&class_int, 1), offsetof(nro_Npc, F_duahau), "[I", 1 },
	{ "seconds", &class_int, offsetof(nro_Npc, F_seconds), "I", 2 },
	{ "last", &class_long, offsetof(nro_Npc, F_last), "J", 2 },
	{ "cur", &class_long, offsetof(nro_Npc, F_cur), "J", 2 },
	{ "idItem", &class_int, offsetof(nro_Npc, F_idItem), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Npc_int_int_int_int_int_int, 0, "(IIIIII)V", 1 },
	{ "setStatus", (intptr_t) M_nro_Npc_setStatus_byte_int, VTABLE_nro_Npc_setStatus_byte_int, "(BI)V", 17 },
	{ "clearEffTask", (intptr_t) SM_nro_Npc_clearEffTask, 0, "()V", 9 },
	{ "update", (intptr_t) M_nro_Npc_update, VTABLE_nro_Npc_update, "()V", 1 },
	{ "paint", (intptr_t) M_nro_Npc_paint_lib_mGraphics, VTABLE_nro_Npc_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "paintName", (intptr_t) M_nro_Npc_paintName_lib_mGraphics, VTABLE_nro_Npc_paintName_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "hide", (intptr_t) M_nro_Npc_hide, VTABLE_nro_Npc_hide, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_nro_Npc, 0, "()V", 8 },
};

Class class_nro_Npc{
		.nativeName = (intptr_t) "nro/Npc",
		.parentClass = (intptr_t) &class_nro_Char,
		.size = sizeof(nro_Npc),
		.classVtable = (intptr_t) vtable_nro_Npc,
		.staticInitializer = (intptr_t) clinit_nro_Npc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Npc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 137,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Npc = registerClass(&class_nro_Npc);

}

