#include "nro/Hint.h"
#include "nro/GameScr.h"
#include "nro/Hint.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/ItemTemplate.h"
#include "nro/Panel.h"
#include "java/lang/Object.h"
#include "nro/ItemMap.h"
#include "nro/MyVector.h"
#include "nro/Mob.h"
#include "nro/Npc.h"
#include "nro/PopUp.h"
#include "nro/NinjaUtil.h"
#include "nro/Char.h"

extern "C" {

jint SF_nro_Hint_x;
jint SF_nro_Hint_y;
jint SF_nro_Hint_type;
jint SF_nro_Hint_t;
jbool SF_nro_Hint_isShow;
jbool SF_nro_Hint_activeClick;
jbool SF_nro_Hint_isViewMap;
jbool SF_nro_Hint_isCloseMap;
jbool SF_nro_Hint_isViewPotential;
jbool SF_nro_Hint_isPaint;
jint SF_nro_Hint_trans;
jbool SF_nro_Hint_paintFlare;
jbool SF_nro_Hint_isCamera;

void mark_nro_Hint(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Hint *) object;
}

void clinit_nro_Hint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Hint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Hint:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Hint(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_Hint_isOnTask_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Hint:isOnTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Hint(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) != (frame[0].i)) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_index) != 0) goto label_1;
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

void SM_nro_Hint_clickNpc(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Hint:clickNpc", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Hint(ctx);
	{
	LINE_NUMBER(25);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(26);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_nro_GameScr_getNpcTask_R_nro_Npc(ctx);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_nro_GameScr_getNpcTask_R_nro_Npc(ctx);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx);
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_nro_GameScr_getNpcTask_R_nro_Npc(ctx);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy);
	LINE_NUMBER(32);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_trans = (jint(0));
	LINE_NUMBER(33);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(1));
	LINE_NUMBER(34);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_type = (--sp)->i;
label_3:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Hint_nextMap_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Hint:nextMap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Hint(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(40);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(41);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if ((temp0 - (jint(1))) < (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(43);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_PopUp, sp[0].o);
	frame[1].o = sp[0].o;
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = (((jint)((nro_PopUp *) NULL_CHECK(sp[0].o))->F_cx) + (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_sayWidth) / (jint(2))));
	LINE_NUMBER(44);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_cy) + (30));
	LINE_NUMBER(45);
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isHide) != 0) goto label_7;
	}
	{
	if (((jint)((nro_PopUp *) NULL_CHECK((frame[1].o)))->F_isPaint) == 0) goto label_7;
	}
	{
	LINE_NUMBER(46);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(1));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(48);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(51);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_type = (jint(0));
	LINE_NUMBER(52);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(1));
	LINE_NUMBER(53);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_trans = (jint(0));
	LINE_NUMBER(54);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) != 0) goto label_2;
	}
	{
	LINE_NUMBER(55);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_2:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Hint_clickMob(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Hint:clickMob", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Hint(ctx);
	{
	LINE_NUMBER(63);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_type = (jint(1));
	LINE_NUMBER(64);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_2;
	}
	{
	LINE_NUMBER(65);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(68);
	frame[0].i = (jint(0));
	LINE_NUMBER(71);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(72);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_Mob *) NULL_CHECK((checkCast(ctx, &class_nro_Mob, sp[0].o))))->F_f) == 0) goto label_8;
	}
	{
	LINE_NUMBER(73);
	frame[0].i = (jint(1));
	LINE_NUMBER(74);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(71);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(78);
	frame[1].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(80);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_f) == 0) goto label_15;
	}
	{
	LINE_NUMBER(81);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(82);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_y) + (jint(5)));
	LINE_NUMBER(83);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(1));
	LINE_NUMBER(84);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_status) != 0) goto label_12;
	}
	{
	LINE_NUMBER(85);
	((nro_Mob *) NULL_CHECK((frame[2].o)))->F_f = (jint(0));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}
label_15:;
	{
	LINE_NUMBER(91);
	if ((frame[0].i) != 0) goto label_22;
	}
	{
	LINE_NUMBER(92);
	if (((jint)((nro_Mob *) NULL_CHECK((frame[2].o)))->F_status) == 0) goto label_24;
	}
	{
	LINE_NUMBER(93);
	((nro_Mob *) NULL_CHECK((frame[2].o)))->F_f = (jint(1));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(97);
	((nro_Mob *) NULL_CHECK((frame[2].o)))->F_f = (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(78);
	INST_IINC(1, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Hint_isHaveItem_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Hint:isHaveItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Hint(ctx);
	{
	LINE_NUMBER(104);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(105);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isViewPotential = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(108);
	frame[0].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(110);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = checkCast(ctx, &class_nro_ItemMap, sp[0].o);
	frame[1].o = sp[0].o;
	jint temp0 = (jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_playerId;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[1].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) != (73)) goto label_7;
	}
	{
	LINE_NUMBER(111);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_type = (jint(1));
	LINE_NUMBER(112);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_x = ((jint)((nro_ItemMap *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(113);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_y = (((jint)((nro_ItemMap *) NULL_CHECK((frame[1].o)))->F_y) + (jint(5)));
	LINE_NUMBER(114);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isPaint = (jint(1));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(108);
	INST_IINC(0, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_nro_Hint[] {
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
};

static FieldMetadata fields[] {
	{ "x", &class_int, (intptr_t) &SF_nro_Hint_x, "I", 9 },
	{ "y", &class_int, (intptr_t) &SF_nro_Hint_y, "I", 9 },
	{ "type", &class_int, (intptr_t) &SF_nro_Hint_type, "I", 9 },
	{ "t", &class_int, (intptr_t) &SF_nro_Hint_t, "I", 9 },
	{ "isShow", &class_boolean, (intptr_t) &SF_nro_Hint_isShow, "Z", 9 },
	{ "activeClick", &class_boolean, (intptr_t) &SF_nro_Hint_activeClick, "Z", 9 },
	{ "isViewMap", &class_boolean, (intptr_t) &SF_nro_Hint_isViewMap, "Z", 9 },
	{ "isCloseMap", &class_boolean, (intptr_t) &SF_nro_Hint_isCloseMap, "Z", 9 },
	{ "isViewPotential", &class_boolean, (intptr_t) &SF_nro_Hint_isViewPotential, "Z", 9 },
	{ "isPaint", &class_boolean, (intptr_t) &SF_nro_Hint_isPaint, "Z", 9 },
	{ "trans", &class_int, (intptr_t) &SF_nro_Hint_trans, "I", 9 },
	{ "paintFlare", &class_boolean, (intptr_t) &SF_nro_Hint_paintFlare, "Z", 9 },
	{ "isCamera", &class_boolean, (intptr_t) &SF_nro_Hint_isCamera, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Hint, 0, "()V", 1 },
	{ "isOnTask", (intptr_t) SM_nro_Hint_isOnTask_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "clickNpc", (intptr_t) SM_nro_Hint_clickNpc, 0, "()V", 9 },
	{ "nextMap", (intptr_t) SM_nro_Hint_nextMap_int, 0, "(I)V", 9 },
	{ "clickMob", (intptr_t) SM_nro_Hint_clickMob, 0, "()V", 9 },
	{ "isHaveItem", (intptr_t) SM_nro_Hint_isHaveItem_R_boolean, 0, "()Z", 9 },
};

Class class_nro_Hint{
		.nativeName = (intptr_t) "nro/Hint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Hint),
		.classVtable = (intptr_t) vtable_nro_Hint,
		.staticInitializer = (intptr_t) clinit_nro_Hint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Hint,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Hint = registerClass(&class_nro_Hint);

}

