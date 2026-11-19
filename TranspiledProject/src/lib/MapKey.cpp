#include "lib/MapKey.h"
#include "java/lang/Integer.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Hashtable.h"
#include "nro/mHashTable.h"
#include "java/util/HashMap.h"
#include "lib/MapKey.h"
#include "com/badlogic/gdx/Input_Keys.h"

extern "C" {

jobject SF_lib_MapKey_h;
jobject SF_lib_MapKey_shiftNumberMap;

void mark_lib_MapKey(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_MapKey_h)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_MapKey_h)->clazz)->markFunction)((jobject) SF_lib_MapKey_h, mark, depth + 1);
		if (SF_lib_MapKey_shiftNumberMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_MapKey_shiftNumberMap)->clazz)->markFunction)((jobject) SF_lib_MapKey_shiftNumberMap, mark, depth + 1);
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
	auto self = (lib_MapKey *) object;
}

void init_lib_MapKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/MapKey:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_MapKey(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_lib_MapKey_load(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/MapKey:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_MapKey(ctx);
	{
	LINE_NUMBER(25);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"A"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (97));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(26);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"B"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (98));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(27);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"C"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (99));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(28);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"D"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (100));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(29);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"E"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (101));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(30);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"F"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (102));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(31);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"G"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (103));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(32);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"H"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (104));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(33);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"I"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (105));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(34);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"J"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (106));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(35);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"K"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (107));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(36);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"L"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (108));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(37);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"M"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (109));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(38);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"N"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (110));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(39);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"O"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (111));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(40);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"P"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (112));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(41);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Q"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (113));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(42);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"R"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (114));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(43);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"S"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (115));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(44);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"T"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (116));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(45);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"U"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (117));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(46);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"V"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (118));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(47);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"W"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (119));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(48);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"X"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (120));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(49);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Y"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (121));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(50);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Z"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (122));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(51);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"0"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (48));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(52);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"1"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (49));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(53);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"2"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (50));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(54);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"3"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (51));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"4"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (52));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(56);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"5"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (53));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(57);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"6"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (54));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"7"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (55));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(59);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"8"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (56));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"9"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (57));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(61);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SPACE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (32));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"F1"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-21));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(63);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"F2"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-22));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(64);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"EQUALS"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-25));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(65);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MINUS"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (45));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(66);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"F3"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-23));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(68);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"UP"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DOWN"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-2));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(70);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LEFT"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-3));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"RIGHT"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-4));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BACKSPACE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-8));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(73);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"PERIOD"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (46));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(74);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"AT"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (64));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(75);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"TAB"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-26));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(76);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ESCAPE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-27));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(77);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DELETE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-8));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(78);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"FORWARD DELETE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (127));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(79);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ENTER"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-5));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"RETURN"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (-5));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"."_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (46));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(82);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8","_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (44));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(83);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"/"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (47));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"-"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (45));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"="_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (61));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8";"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (59));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(87);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"'"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (39));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(88);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"`"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (96));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(89);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"["_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (91));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(90);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"]"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (93));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(91);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\\"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (92));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(92);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"COMMA"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (44));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(93);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SEMICOLON"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (59));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(94);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SLASH"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (47));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BACKSLASH"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (92));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(96);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"APOSTROPHE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (39));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GRAVE"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (96));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_lib_MapKey_map_int_R_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/MapKey:map", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_MapKey(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(101);
	if ((frame[0].i) < (144)) goto label_8;
	}
	{
	if ((frame[0].i) > (153)) goto label_8;
	}
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return ((48) + ((frame[0].i) - (144)));
	}
label_8:;
	{
	LINE_NUMBER(104);
	if ((frame[0].i) != (160)) goto label_10;
	}
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (-5);
	}
label_10:;
	{
	LINE_NUMBER(107);
	if ((frame[0].i) != (157)) goto label_12;
	}
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (43);
	}
label_12:;
	{
	LINE_NUMBER(110);
	if ((frame[0].i) != (156)) goto label_14;
	}
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (45);
	}
label_14:;
	{
	LINE_NUMBER(113);
	if ((frame[0].i) != (155)) goto label_16;
	}
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (42);
	}
label_16:;
	{
	LINE_NUMBER(116);
	if ((frame[0].i) != (154)) goto label_18;
	}
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (47);
	}
label_18:;
	{
	LINE_NUMBER(119);
	if ((frame[0].i) != (158)) goto label_20;
	}
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (46);
	}
label_20:;
	{
	LINE_NUMBER(122);
	if ((frame[0].i) != (111)) goto label_22;
	}
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (-27);
	}
label_22:;
	{
	LINE_NUMBER(125);
	if ((frame[0].i) != (112)) goto label_0;
	}
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (127);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)SM_com_badlogic_gdx_Input$Keys_toString_int_R_java_lang_String(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(131);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_h;
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	if ((frame[2].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(135);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(136);
	frame[1].o = sp[0].o;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_lib_MapKey_mapShifted_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/MapKey:mapShifted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_MapKey(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(142);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	jint temp0 = (jint)((func_java_util_HashMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(144);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(146);
	if ((frame[0].i) != (69)) goto label_5;
	}
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (95);
	}
label_5:;
	{
	LINE_NUMBER(149);
	if ((frame[0].i) != (70)) goto label_7;
	}
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (43);
	}
label_7:;
	{
	LINE_NUMBER(152);
	if ((frame[0].i) != (74)) goto label_9;
	}
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (58);
	}
label_9:;
	{
	LINE_NUMBER(155);
	if ((frame[0].i) != (76)) goto label_11;
	}
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (63);
	}
label_11:;
	{
	LINE_NUMBER(158);
	if ((frame[0].i) != (55)) goto label_13;
	}
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (60);
	}
label_13:;
	{
	LINE_NUMBER(161);
	if ((frame[0].i) != (56)) goto label_15;
	}
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (62);
	}
label_15:;
	{
	LINE_NUMBER(164);
	if ((frame[0].i) != (68)) goto label_17;
	}
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (126);
	}
label_17:;
	{
	LINE_NUMBER(167);
	if ((frame[0].i) != (75)) goto label_1;
	}
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (34);
	}
label_1:;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)SM_lib_MapKey_map_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_lib_MapKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/MapKey:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_MapKey(ctx);
	{
	LINE_NUMBER(8);
	clinit_nro_mHashTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_mHashTable);
	init_nro_mHashTable_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mapKey"_j))));
	clinit_lib_MapKey(ctx);
	SF_lib_MapKey_h = sp[0].o;
	LINE_NUMBER(9);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_lib_MapKey(ctx);
	SF_lib_MapKey_shiftNumberMap = sp[0].o;
	LINE_NUMBER(12);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (8));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (33));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(13);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (9));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (64));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(14);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (10));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (35));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(15);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (11));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (36));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(16);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (12));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (37));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(17);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (13));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (94));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(18);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (14));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (38));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(19);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (15));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (42));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(20);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (16));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (40));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(21);
	clinit_lib_MapKey(ctx);
	sp[0].o = (jobject)SF_lib_MapKey_shiftNumberMap;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (7));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (41));
	sp[0].o = (jobject)((func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_MapKey[] {
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
	{ "h", &class_nro_mHashTable, (intptr_t) &SF_lib_MapKey_h, "Lnro/mHashTable;", 10 },
	{ "shiftNumberMap", &class_java_util_HashMap, (intptr_t) &SF_lib_MapKey_shiftNumberMap, "Ljava/util/HashMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_MapKey, 0, "()V", 1 },
	{ "load", (intptr_t) SM_lib_MapKey_load, 0, "()V", 9 },
	{ "map", (intptr_t) SM_lib_MapKey_map_int_R_int, 0, "(I)I", 9 },
	{ "mapShifted", (intptr_t) SM_lib_MapKey_mapShifted_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "<clinit>", (intptr_t) clinit_lib_MapKey, 0, "()V", 8 },
};

Class class_lib_MapKey{
		.nativeName = (intptr_t) "lib/MapKey",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_MapKey),
		.classVtable = (intptr_t) vtable_lib_MapKey,
		.staticInitializer = (intptr_t) clinit_lib_MapKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_MapKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_MapKey = registerClass(&class_lib_MapKey);

}

