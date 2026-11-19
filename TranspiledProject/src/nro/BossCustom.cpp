#include "nro/BossCustom.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "main/GameCanvas.h"
#include "java/util/ArrayList.h"
#include "nro/Panel.h"
#include "java/lang/CharSequence.h"
#include "nro/BossCustom.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/LinkedHashMap.h"
#include "nro/CustomBossNotification.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "nro/TileMap.h"

extern "C" {

jobject SF_nro_BossCustom_instance;

void mark_nro_BossCustom(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_BossCustom_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_BossCustom_instance)->clazz)->markFunction)((jobject) SF_nro_BossCustom_instance, mark, depth + 1);
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
	auto self = (nro_BossCustom *) object;
	if (self->F_bosses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bosses)->clazz)->markFunction)((jobject) self->F_bosses, mark, depth + 1);
	if (self->F_bossNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bossNames)->clazz)->markFunction)((jobject) self->F_bossNames, mark, depth + 1);
	if (self->F_lastChatVip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastChatVip)->clazz)->markFunction)((jobject) self->F_lastChatVip, mark, depth + 1);
}

void clinit_nro_BossCustom(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_nro_BossCustom_gI_R_nro_BossCustom(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_nro_BossCustom);

	clinit_nro_BossCustom(ctx);
	{
	LINE_NUMBER(13);
	clinit_nro_BossCustom(ctx);
	sp[0].o = (jobject)SF_nro_BossCustom_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(14);
	clinit_nro_BossCustom(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_BossCustom);
	init_nro_BossCustom(ctx, sp[0].o);
	clinit_nro_BossCustom(ctx);
	SF_nro_BossCustom_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(16);
	clinit_nro_BossCustom(ctx);
	sp[0].o = (jobject)SF_nro_BossCustom_instance;
	popStackFrame(ctx, (jobject) &class_nro_BossCustom);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_nro_BossCustom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BossCustom(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap(ctx, sp[1].o);
	((nro_BossCustom *) NULL_CHECK(sp[0].o))->F_bosses = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((nro_BossCustom *) NULL_CHECK(sp[0].o))->F_bossNames = (jref) sp[1].o;
	LINE_NUMBER(59);
	((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVip = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(60);
	((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVipTime = (jlong(0));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_BossCustom_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	((func_java_util_LinkedHashMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(28);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(29);
	((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVip = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(30);
	((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVipTime = (jlong(0));
	LINE_NUMBER(31);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jint M_nro_BossCustom_getBossCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getBossCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_nro_BossCustom_getBossName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getBossName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(38);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx, self);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject M_nro_BossCustom_getBossTurns_int_R_java_util_List(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getBossTurns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_util_List, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getBossTurnsByName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return (checkCast(ctx, &class_java_util_List, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:findBossKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[5].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_12:;
	LINE_NUMBER(77);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 < (jint(4))) goto label_14;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[5].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	if (temp0 < (jint(4))) goto label_21;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (frame[2].o));
	if (temp0 != 0) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (frame[5].o));
	if (temp0 == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_21:;
	LINE_NUMBER(88);
	goto label_16;
label_14:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_BossCustom_addBoss_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:addBoss", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx, self);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(96);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(98);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVip;
	jint temp1 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_5;
	}
	{
	if ((longCompare(((frame[3].l) - ((jlong)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVipTime)), (jlong(2000ll)))) >= 0) goto label_5;
	}
	LINE_NUMBER(99);
	popStackFrame(ctx, self);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(101);
	((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVip = (jref) (frame[2].o);
	LINE_NUMBER(102);
	((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_lastChatVipTime = (frame[3].l);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(105);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"ti\u00eau di\u1ec7t"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"h\u1ea1 g\u1ee5c"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"tieu diet"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"ha guc"_j))));
	if (temp0 == 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(106);
	M_nro_BossCustom_getBossInfo_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"boss"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"xu\u1ea5t hi\u1ec7n"_j))));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"appear"_j))));
	if (temp0 == 0) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(108);
	M_nro_BossCustom_getBossXuatHien_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	}
label_12:;
	{
	LINE_NUMBER(112);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_14;
	}
	{
	LINE_NUMBER(113);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_type) != (32)) goto label_16;
	}
	{
	LINE_NUMBER(114);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTabBossNotification) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabBossNotification])(ctx, sp[0].o);
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(115);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_type) != (33)) goto label_14;
	}
	{
	LINE_NUMBER(116);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTabInfoBoss) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTabInfoBoss])(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(119);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BossCustom_getBossXuatHien_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getBossXuatHien", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"!"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(131);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(132);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" v\u1eeba xu\u1ea5t hi\u1ec7n t\u1ea1i "_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" v\u1eeba xu\u1ea5t hi\u1ec7n t\u1ea1i "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(137);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp += 1;
	goto label_22;
	}
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_22:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(138);
	goto label_24;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" xu\u1ea5t hi\u1ec7n t\u1ea1i "_j))));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" xu\u1ea5t hi\u1ec7n t\u1ea1i "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(141);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp += 1;
	goto label_30;
	}
label_29:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_30:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(142);
	goto label_24;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" appear at "_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" appear at "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp += 1;
	goto label_36;
	}
label_35:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_36:;
	INST_ASTORE(4);
label_24:;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" khu v\u1ef1c "_j))));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" khu v\u1ef1c "_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_37:;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" khu "_j))));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" khu "_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)M_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(158);
	if ((frame[5].o) != nullptr) goto label_42;
	}
	{
	LINE_NUMBER(159);
	frame[5].o = (frame[3].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jint(0)), (frame[5].o));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jint(0)), (frame[5].o));
	}
label_45:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_util_List, sp[0].o));
	LINE_NUMBER(167);
	if ((frame[6].o) != nullptr) goto label_48;
	}
	{
	LINE_NUMBER(168);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o), (frame[6].o));
	}
label_48:;
	{
	LINE_NUMBER(172);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[7].l = temp0;
	LINE_NUMBER(175);
	jint temp1 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp1 != 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_52
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (jint(0)));
	frame[9].o = (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o));
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_nro_CustomBossNotification_isAlive_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_CustomBossNotification_isAlive_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_52
	}
	{
	LINE_NUMBER(178);
	frame[10].l = ((frame[7].l) - ((jlong)((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeStart));
	LINE_NUMBER(181);
	jlong temp0 = frame[10].l;
	jlong temp1 = (jlong)((func_nro_CustomBossNotification_getRespawnIntervalMs_R_long) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_nro_CustomBossNotification_getRespawnIntervalMs_R_long])(ctx, (frame[9].o));
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp1, (jlong(900000ll)));
	if ((longCompare(temp0, temp2)) >= 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_58;
	}
	{
	LINE_NUMBER(183);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_map = (jref) (frame[4].o);
	LINE_NUMBER(184);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)M_nro_BossCustom_getMapID_java_lang_String_R_int(ctx, (frame[0].o), (frame[4].o));
	((nro_CustomBossNotification *) NULL_CHECK(sp[0].o))->F_mapId = temp0;
	}
label_58:;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	frame[12].i = (temp0 - (jint(1)));
	}
label_61:;
	{
	if ((frame[12].i) < (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[12].i));
	jint temp0 = (jint)((func_nro_CustomBossNotification_isAlive_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o)))->vtable)[VTABLE_nro_CustomBossNotification_isAlive_R_boolean])(ctx, (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o)));
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[12].i));
	}
label_63:;
	{
	LINE_NUMBER(187);
	INST_IINC(12, -1);
	goto label_61;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_52; }
	if (bypasses[1]) { bypasses[1] = false; goto label_52; }
	{
	LINE_NUMBER(195);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeEnd = (((jlong)((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeStart) + (jlong(60000ll)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_player;
	if (sp[0].o == nullptr) goto label_66;
	}
	{
	sp[0].o = (jobject)((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_player;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_52;
	}
label_66:;
	{
	LINE_NUMBER(197);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_player = (jref) (((jobject) createStringLiteral(ctx, u8"T\u1ef1 bi\u1ebfn m\u1ea5t"_j)));
	}
label_52:;
	{
	LINE_NUMBER(204);
	clinit_nro_CustomBossNotification(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_CustomBossNotification);
	init_nro_CustomBossNotification(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(205);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_name = (jref) (frame[5].o);
	LINE_NUMBER(206);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_map = (jref) (frame[4].o);
	LINE_NUMBER(207);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_player = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(208);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)M_nro_BossCustom_getMapID_java_lang_String_R_int(ctx, (frame[0].o), (frame[4].o));
	((nro_CustomBossNotification *) NULL_CHECK(sp[0].o))->F_mapId = temp0;
	LINE_NUMBER(209);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeStart = (frame[7].l);
	LINE_NUMBER(210);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeEnd = (jlong(0));
	LINE_NUMBER(213);
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (jint(0)), (frame[9].o));
	}
label_74:;
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 <= (jint(3))) goto label_75;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	frame[10].i = (temp0 - (jint(1)));
	}
label_77:;
	{
	if ((frame[10].i) < (jint(1))) goto label_78;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[10].i));
	jint temp0 = (jint)((func_nro_CustomBossNotification_isAlive_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o)))->vtable)[VTABLE_nro_CustomBossNotification_isAlive_R_boolean])(ctx, (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o)));
	if (temp0 == 0) goto label_80;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[10].i));
	}
label_80:;
	{
	LINE_NUMBER(221);
	INST_IINC(10, -1);
	goto label_77;
	}
label_78:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= (50)) goto label_8;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	sp[1].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[10].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(231);
	goto label_78;
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(234);
	goto label_85;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(232);
	frame[2].o = sp[0].o;
	LINE_NUMBER(233);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_85:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_BossCustom_getBossInfo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getBossInfo", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"!"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(244);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(245);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8": \u0110\u00e3 ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c "_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8": \u0110\u00e3 ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(250);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8" m\u1ecdi ng\u01b0\u1eddi \u0111\u1ec1u ng\u01b0\u1ee1ng m\u1ed9."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_17;
	}
label_16:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_17:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(251);
	goto label_19;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" v\u1eeba ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c "_j))));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" v\u1eeba ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(254);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8" m\u1ecdi ng\u01b0\u1eddi \u0111\u1ec1u ng\u01b0\u1ee1ng m\u1ed9."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_25;
	}
label_24:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_25:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(255);
	goto label_19;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" \u0111\u00e3 ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c "_j))));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" \u0111\u00e3 ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(258);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_31;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8" m\u1ecdi ng\u01b0\u1eddi \u0111\u1ec1u ng\u01b0\u1ee1ng m\u1ed9."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_32;
	}
label_31:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_32:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(259);
	goto label_19;
	}
label_27:;
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" \u0111\u00e3 h\u1ea1 g\u1ee5c "_j))));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" \u0111\u00e3 h\u1ea1 g\u1ee5c "_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(262);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= (jint(1))) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	sp += 1;
	goto label_38;
	}
label_37:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_38:;
	INST_ASTORE(4);
label_19:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[4].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)M_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(271);
	if ((frame[5].o) != nullptr) goto label_42;
	}
	{
	LINE_NUMBER(272);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(273);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jint(0)), (frame[5].o));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jint(0)), (frame[5].o));
	}
label_45:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_util_List, sp[0].o));
	LINE_NUMBER(280);
	if ((frame[6].o) != nullptr) goto label_48;
	}
	{
	LINE_NUMBER(281);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(282);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o), (frame[6].o));
	}
label_48:;
	{
	LINE_NUMBER(285);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[7].l = temp0;
	LINE_NUMBER(286);
	jint temp1 = (jint)((func_java_util_List_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_isEmpty_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp1 == 0) goto label_52;
	}
	{
	LINE_NUMBER(288);
	clinit_nro_CustomBossNotification(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_CustomBossNotification);
	init_nro_CustomBossNotification(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(289);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_name = (jref) (frame[5].o);
	LINE_NUMBER(290);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_player = (jref) (frame[3].o);
	LINE_NUMBER(291);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeEnd = (frame[7].l);
	LINE_NUMBER(292);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeStart = (((jlong)((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeEnd) - (jlong(60000ll)));
	LINE_NUMBER(293);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_map = (jref) (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a r\u00f5 map"_j)));
	LINE_NUMBER(294);
	((func_java_util_List_add_int_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_int_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (jint(0)), (frame[9].o));
	LINE_NUMBER(295);
	goto label_61;
	}
label_52:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (jint(0)));
	frame[9].o = (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o));
	LINE_NUMBER(298);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_player = (jref) (frame[3].o);
	LINE_NUMBER(299);
	((nro_CustomBossNotification *) NULL_CHECK((frame[9].o)))->F_timeEnd = (frame[7].l);
	LINE_NUMBER(302);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	frame[10].i = (temp0 - (jint(1)));
	}
label_65:;
	{
	if ((frame[10].i) < (jint(1))) goto label_61;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[10].i));
	jint temp0 = (jint)((func_nro_CustomBossNotification_isAlive_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o)))->vtable)[VTABLE_nro_CustomBossNotification_isAlive_R_boolean])(ctx, (checkCast(ctx, &class_nro_CustomBossNotification, sp[0].o)));
	if (temp0 == 0) goto label_67;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o), (frame[10].i));
	}
label_67:;
	{
	LINE_NUMBER(302);
	INST_IINC(10, -1);
	goto label_65;
	}
label_61:;
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 <= (jint(3))) goto label_69;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[6].o)))(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	goto label_61;
	}
label_69:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 <= (50)) goto label_5;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	sp[1].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bossNames;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[9].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((nro_BossCustom *) NULL_CHECK((frame[0].o)))->F_bosses;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(317);
	goto label_69;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(320);
	goto label_74;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(318);
	frame[2].o = sp[0].o;
	LINE_NUMBER(319);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[2].o));
	}
label_74:;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_BossCustom_getMapID_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BossCustom:getMapID", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
label_8:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_10; }
	{
	LINE_NUMBER(326);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapNames;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(327);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapNames;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(328);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapNames;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapNames;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(329);
	INST_ILOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	if (bypasses[1]) { bypasses[1] = false; goto label_5; }
	{
	LINE_NUMBER(327);
	INST_IINC(2, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_3; } // goto label_10
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(333);
	goto label_13;
label_2:;
	INST_ASTORE(2);
label_13:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void *vtable_nro_BossCustom[] {
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
	(void *) M_nro_BossCustom_reset,
	(void *) M_nro_BossCustom_getBossCount_R_int,
	(void *) M_nro_BossCustom_getBossName_int_R_java_lang_String,
	(void *) M_nro_BossCustom_getBossTurns_int_R_java_util_List,
	(void *) M_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List,
	(void *) M_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String,
	(void *) M_nro_BossCustom_addBoss_java_lang_String,
	(void *) M_nro_BossCustom_getBossXuatHien_java_lang_String,
	(void *) M_nro_BossCustom_getBossInfo_java_lang_String,
	(void *) M_nro_BossCustom_getMapID_java_lang_String_R_int,
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
	{ "reset", "()V" },
	{ "getBossCount", "()I" },
	{ "getBossName", "(I)Ljava/lang/String;" },
	{ "getBossTurns", "(I)Ljava/util/List;" },
	{ "getBossTurnsByName", "(Ljava/lang/String;)Ljava/util/List;" },
	{ "findBossKey", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "addBoss", "(Ljava/lang/String;)V" },
	{ "getBossXuatHien", "(Ljava/lang/String;)V" },
	{ "getBossInfo", "(Ljava/lang/String;)V" },
	{ "getMapID", "(Ljava/lang/String;)I" },
};

static FieldMetadata fields[] {
	{ "instance", &class_nro_BossCustom, (intptr_t) &SF_nro_BossCustom_instance, "Lnro/BossCustom;", 10 },
	{ "bosses", &class_java_util_LinkedHashMap, offsetof(nro_BossCustom, F_bosses), "Ljava/util/LinkedHashMap;", 17 },
	{ "bossNames", &class_java_util_List, offsetof(nro_BossCustom, F_bossNames), "Ljava/util/List;", 17 },
	{ "lastChatVip", &class_java_lang_String, offsetof(nro_BossCustom, F_lastChatVip), "Ljava/lang/String;", 2 },
	{ "lastChatVipTime", &class_long, offsetof(nro_BossCustom, F_lastChatVipTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "gI", (intptr_t) SM_nro_BossCustom_gI_R_nro_BossCustom, 0, "()Lnro/BossCustom;", 41 },
	{ "<init>", (intptr_t) init_nro_BossCustom, 0, "()V", 1 },
	{ "reset", (intptr_t) M_nro_BossCustom_reset, VTABLE_nro_BossCustom_reset, "()V", 33 },
	{ "getBossCount", (intptr_t) M_nro_BossCustom_getBossCount_R_int, VTABLE_nro_BossCustom_getBossCount_R_int, "()I", 33 },
	{ "getBossName", (intptr_t) M_nro_BossCustom_getBossName_int_R_java_lang_String, VTABLE_nro_BossCustom_getBossName_int_R_java_lang_String, "(I)Ljava/lang/String;", 33 },
	{ "getBossTurns", (intptr_t) M_nro_BossCustom_getBossTurns_int_R_java_util_List, VTABLE_nro_BossCustom_getBossTurns_int_R_java_util_List, "(I)Ljava/util/List;", 33 },
	{ "getBossTurnsByName", (intptr_t) M_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List, VTABLE_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List, "(Ljava/lang/String;)Ljava/util/List;", 33 },
	{ "findBossKey", (intptr_t) M_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String, VTABLE_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "addBoss", (intptr_t) M_nro_BossCustom_addBoss_java_lang_String, VTABLE_nro_BossCustom_addBoss_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "getBossXuatHien", (intptr_t) M_nro_BossCustom_getBossXuatHien_java_lang_String, VTABLE_nro_BossCustom_getBossXuatHien_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "getBossInfo", (intptr_t) M_nro_BossCustom_getBossInfo_java_lang_String, VTABLE_nro_BossCustom_getBossInfo_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "getMapID", (intptr_t) M_nro_BossCustom_getMapID_java_lang_String_R_int, VTABLE_nro_BossCustom_getMapID_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
};

Class class_nro_BossCustom{
		.nativeName = (intptr_t) "nro/BossCustom",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_BossCustom),
		.classVtable = (intptr_t) vtable_nro_BossCustom,
		.staticInitializer = (intptr_t) clinit_nro_BossCustom,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BossCustom,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BossCustom = registerClass(&class_nro_BossCustom);

}

