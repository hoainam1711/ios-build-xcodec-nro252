#include "com/badlogic/gdx/graphics/Colors.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Colors.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Colors_map;

void mark_com_badlogic_gdx_graphics_Colors(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Colors_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Colors_map)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Colors_map, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_Colors *) object;
}

jobject SM_com_badlogic_gdx_graphics_Colors_getColors_R_com_badlogic_gdx_utils_ObjectMap(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Colors:getColors", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	{
	LINE_NUMBER(35);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Colors_get_java_lang_String_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Colors:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Color, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Colors_put_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Colors:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Color, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Colors_reset(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Colors:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	{
	LINE_NUMBER(61);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	((func_com_badlogic_gdx_utils_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CLEAR"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CLEAR;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CLEAR_WHITE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CLEAR_WHITE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BLACK"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_BLACK;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"WHITE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LIGHT_GRAY"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_LIGHT_GRAY;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(68);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GRAY"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_GRAY;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DARK_GRAY"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_DARK_GRAY;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BLUE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_BLUE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"NAVY"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_NAVY;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(73);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ROYAL"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_ROYAL;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(74);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SLATE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_SLATE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(75);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SKY"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_SKY;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CYAN"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CYAN;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"TEAL"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_TEAL;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(79);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GREEN"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_GREEN;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CHARTREUSE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CHARTREUSE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LIME"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_LIME;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"FOREST"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_FOREST;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"OLIVE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_OLIVE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"YELLOW"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_YELLOW;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GOLD"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_GOLD;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(87);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GOLDENROD"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_GOLDENROD;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(88);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ORANGE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_ORANGE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BROWN"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_BROWN;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(91);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"TAN"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_TAN;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"FIREBRICK"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_FIREBRICK;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(94);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"RED"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_RED;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SCARLET"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_SCARLET;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(96);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CORAL"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CORAL;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SALMON"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_SALMON;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"PINK"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_PINK;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(99);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MAGENTA"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_MAGENTA;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(101);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"PURPLE"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_PURPLE;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"VIOLET"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_VIOLET;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(103);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MAROON"_j));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_MAROON;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Colors(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Colors:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(106);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Colors(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Colors:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	{
	LINE_NUMBER(27);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Colors(ctx);
	SF_com_badlogic_gdx_graphics_Colors_map = sp[0].o;
	LINE_NUMBER(30);
	SM_com_badlogic_gdx_graphics_Colors_reset(ctx);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Colors[] {
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
	{ "map", &class_com_badlogic_gdx_utils_ObjectMap, (intptr_t) &SF_com_badlogic_gdx_graphics_Colors_map, "Lcom/badlogic/gdx/utils/ObjectMap;", 26 },
};

static MethodMetadata methods[] {
	{ "getColors", (intptr_t) SM_com_badlogic_gdx_graphics_Colors_getColors_R_com_badlogic_gdx_utils_ObjectMap, 0, "()Lcom/badlogic/gdx/utils/ObjectMap;", 9 },
	{ "get", (intptr_t) SM_com_badlogic_gdx_graphics_Colors_get_java_lang_String_R_com_badlogic_gdx_graphics_Color, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "put", (intptr_t) SM_com_badlogic_gdx_graphics_Colors_put_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "reset", (intptr_t) SM_com_badlogic_gdx_graphics_Colors_reset, 0, "()V", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Colors, 0, "()V", 2 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Colors, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Colors{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Colors",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Colors),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Colors,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Colors,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Colors,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Colors = registerClass(&class_com_badlogic_gdx_graphics_Colors);

}

