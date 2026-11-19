#include "com/badlogic/gdx/math/Polygon.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/math/GeometryUtils.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/math/Polygon.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/math/Shape2D.h"

extern "C" {


void mark_com_badlogic_gdx_math_Polygon(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_Polygon *) object;
	if (self->F_localVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_localVertices)->clazz)->markFunction)((jobject) self->F_localVertices, mark, depth + 1);
	if (self->F_worldVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_worldVertices)->clazz)->markFunction)((jobject) self->F_worldVertices, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_com_badlogic_gdx_math_Polygon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_math_Polygon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Polygon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(27);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(0)));
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_localVertices = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Polygon_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Polygon(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(27);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(42);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (6)) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"polygons must contain at least 3 points."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(43);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices = (jref) (frame[1].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getTransformedVertices", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	if (((jint)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_worldVertices;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(57);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices;
	frame[1].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_worldVertices;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_worldVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
label_4:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_worldVertices = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_worldVertices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(64);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(65);
	frame[5].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(66);
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(67);
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(68);
	frame[8].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleY);
	LINE_NUMBER(69);
	if ((floatCompare((frame[7].f), (jfloat(1)), -1)) != 0) goto label_13;
	}
	{
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) == 0) goto label_14;
	}
label_13:;
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(70);
	frame[10].f = ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(71);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[11].f = temp0;
	LINE_NUMBER(72);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[12].f = temp1;
	LINE_NUMBER(74);
	frame[13].i = (jint(0));
	frame[14].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_21:;
	{
	if ((frame[13].i) >= (frame[14].i)) goto label_22;
	}
	{
	LINE_NUMBER(75);
	frame[15].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[13].i))) - (frame[5].f));
	LINE_NUMBER(76);
	frame[16].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[13].i) + (jint(1))))) - (frame[6].f));
	LINE_NUMBER(79);
	if ((frame[9].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(80);
	frame[15].f = ((frame[15].f) * (frame[7].f));
	LINE_NUMBER(81);
	frame[16].f = ((frame[16].f) * (frame[8].f));
	}
label_26:;
	{
	LINE_NUMBER(85);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_29;
	}
	{
	LINE_NUMBER(86);
	frame[17].f = (frame[15].f);
	LINE_NUMBER(87);
	frame[15].f = (((frame[11].f) * (frame[15].f)) - ((frame[12].f) * (frame[16].f)));
	LINE_NUMBER(88);
	frame[16].f = (((frame[12].f) * (frame[17].f)) + ((frame[11].f) * (frame[16].f)));
	}
label_29:;
	{
	LINE_NUMBER(91);
	ARRAY_ACCESS(jfloat, (frame[2].o), (frame[13].i)) = (((frame[3].f) + (frame[15].f)) + (frame[5].f));
	LINE_NUMBER(92);
	ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[13].i) + (jint(1)))) = (((frame[4].f) + (frame[16].f)) + (frame[6].f));
	LINE_NUMBER(74);
	INST_IINC(13, 2);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:setOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(99);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originX = (frame[1].f);
	LINE_NUMBER(100);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originY = (frame[2].f);
	LINE_NUMBER(101);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(106);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(107);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(108);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_setVertices_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:setVertices", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (6)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"polygons must contain at least 3 points."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(119);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices = (jref) (frame[1].o);
	LINE_NUMBER(120);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_setVertex_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:setVertex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(127);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices;
	if (temp0 <= (((((jarray) nullCheck(ctx, sp[0].o))->length) / (jint(2))) - (jint(1)))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(128);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"the vertex "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" doesn't exist"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint(2)) * (frame[1].i))) = (frame[2].f);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((jint(2)) * (frame[1].i)) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(131);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(138);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_setRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:setRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(143);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(144);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_rotate_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_rotation = (((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_rotation) + (frame[1].f));
	LINE_NUMBER(150);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(155);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(156);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[2].f);
	LINE_NUMBER(157);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_scale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_scaleX = (((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_scaleX) + (frame[1].f));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_scaleY = (((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_scaleY) + (frame[1].f));
	LINE_NUMBER(164);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_dirty(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:dirty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_area_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:area", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(176);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_GeometryUtils_polygonArea_Array1_float_int_int_R_float(ctx, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Polygon_getVertexCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getVertexCount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_localVertices;
	popStackFrame(ctx);
	return ((((jarray) nullCheck(ctx, sp[0].o))->length) / (jint(2)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getVertex", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(185);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_math_Polygon_getVertexCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getVertexCount_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(186);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"the vertex "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" doesn't exist"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[2].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((jint(2)) * (frame[1].i)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (((jint(2)) * (frame[1].i)) + (jint(1))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getCentroid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_com_badlogic_gdx_math_GeometryUtils_polygonCentroid_Array1_float_int_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(ctx, (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getBoundingRectangle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(204);
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	LINE_NUMBER(205);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(206);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))));
	LINE_NUMBER(207);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(209);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(210);
	frame[7].i = (jint(2));
	}
label_7:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(211);
	if ((floatCompare((frame[2].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i))), -1)) <= 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_FLOAD(2);
label_11:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(212);
	if ((floatCompare((frame[3].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1))))), -1)) <= 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1))));
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_FLOAD(3);
label_14:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(213);
	if ((floatCompare((frame[4].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i))), 1)) >= 0) goto label_16;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[7].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_FLOAD(4);
label_17:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(214);
	if ((floatCompare((frame[5].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1))))), 1)) >= 0) goto label_19;
	}
	{
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[7].i) + (jint(1))));
	sp[0].f = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_FLOAD(5);
label_20:;
	{
	sp -= 1;
	frame[5].f = sp[0].f;
	LINE_NUMBER(210);
	INST_IINC(7, 2);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_bounds;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (frame[2].f);
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (frame[3].f);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = ((frame[4].f) - (frame[2].f));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_bounds;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = ((frame[5].f) - (frame[3].f));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:contains", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(230);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(231);
	frame[5].i = (jint(0));
	LINE_NUMBER(233);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(234);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(235);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(236);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (((frame[6].i) + (jint(2))) % (frame[4].i))));
	LINE_NUMBER(237);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (((frame[6].i) + (jint(3))) % (frame[4].i))));
	LINE_NUMBER(238);
	if ((floatCompare((frame[8].f), (frame[2].f), 1)) > 0) goto label_11;
	}
	{
	if ((floatCompare((frame[2].f), (frame[10].f), 1)) < 0) goto label_12;
	}
label_11:;
	{
	if ((floatCompare((frame[10].f), (frame[2].f), 1)) > 0) goto label_13;
	}
	{
	if ((floatCompare((frame[2].f), (frame[8].f), 1)) >= 0) goto label_13;
	}
label_12:;
	{
	if ((floatCompare((frame[1].f), (((((frame[9].f) - (frame[7].f)) / ((frame[10].f) - (frame[8].f))) * ((frame[2].f) - (frame[8].f))) + (frame[7].f)), 1)) >= 0) goto label_13;
	}
	INST_IINC(5, 1);
label_13:;
	{
	LINE_NUMBER(233);
	INST_IINC(6, 2);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(240);
	if (((frame[5].i) & (jint(1))) != (jint(1))) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getOriginX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getOriginX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getOriginY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getOriginY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originY);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Polygon_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:getScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Polygon_resetTransformations(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Polygon:resetTransformations", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	LINE_NUMBER(285);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(286);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originX = (jfloat(0));
	LINE_NUMBER(287);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_originY = (jfloat(0));
	LINE_NUMBER(288);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(289);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(290);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(291);
	((com_badlogic_gdx_math_Polygon *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Polygon[] {
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
	(void *) M_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_math_Polygon_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_math_Polygon_setPosition_float_float,
	(void *) M_com_badlogic_gdx_math_Polygon_setVertices_Array1_float,
	(void *) M_com_badlogic_gdx_math_Polygon_setVertex_int_float_float,
	(void *) M_com_badlogic_gdx_math_Polygon_translate_float_float,
	(void *) M_com_badlogic_gdx_math_Polygon_setRotation_float,
	(void *) M_com_badlogic_gdx_math_Polygon_rotate_float,
	(void *) M_com_badlogic_gdx_math_Polygon_setScale_float_float,
	(void *) M_com_badlogic_gdx_math_Polygon_scale_float,
	(void *) M_com_badlogic_gdx_math_Polygon_dirty,
	(void *) M_com_badlogic_gdx_math_Polygon_area_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getVertexCount_R_int,
	(void *) M_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Polygon_getX_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getY_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getRotation_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_math_Polygon_resetTransformations,
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
	{ "contains", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "contains", "(FF)Z" },
	{ "getVertices", "()[F" },
	{ "getTransformedVertices", "()[F" },
	{ "setOrigin", "(FF)V" },
	{ "setPosition", "(FF)V" },
	{ "setVertices", "([F)V" },
	{ "setVertex", "(IFF)V" },
	{ "translate", "(FF)V" },
	{ "setRotation", "(F)V" },
	{ "rotate", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scale", "(F)V" },
	{ "dirty", "()V" },
	{ "area", "()F" },
	{ "getVertexCount", "()I" },
	{ "getVertex", "(ILcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "getCentroid", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "getBoundingRectangle", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getOriginX", "()F" },
	{ "getOriginY", "()F" },
	{ "getRotation", "()F" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "resetTransformations", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_math_Shape2D, };

static FieldMetadata fields[] {
	{ "localVertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_Polygon, F_localVertices), "[F", 2 },
	{ "worldVertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_Polygon, F_worldVertices), "[F", 2 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_x), "F", 2 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_y), "F", 2 },
	{ "originX", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_originX), "F", 2 },
	{ "originY", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_originY), "F", 2 },
	{ "rotation", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_rotation), "F", 2 },
	{ "scaleX", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_scaleX), "F", 2 },
	{ "scaleY", &class_float, offsetof(com_badlogic_gdx_math_Polygon, F_scaleY), "F", 2 },
	{ "dirty", &class_boolean, offsetof(com_badlogic_gdx_math_Polygon, F_dirty), "Z", 2 },
	{ "bounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_math_Polygon, F_bounds), "Lcom/badlogic/gdx/math/Rectangle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Polygon, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Polygon_Array1_float, 0, "([F)V", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float, VTABLE_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float, "()[F", 1 },
	{ "getTransformedVertices", (intptr_t) M_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float, VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float, "()[F", 1 },
	{ "setOrigin", (intptr_t) M_com_badlogic_gdx_math_Polygon_setOrigin_float_float, VTABLE_com_badlogic_gdx_math_Polygon_setOrigin_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_math_Polygon_setPosition_float_float, VTABLE_com_badlogic_gdx_math_Polygon_setPosition_float_float, "(FF)V", 1 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_math_Polygon_setVertices_Array1_float, VTABLE_com_badlogic_gdx_math_Polygon_setVertices_Array1_float, "([F)V", 1 },
	{ "setVertex", (intptr_t) M_com_badlogic_gdx_math_Polygon_setVertex_int_float_float, VTABLE_com_badlogic_gdx_math_Polygon_setVertex_int_float_float, "(IFF)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_math_Polygon_translate_float_float, VTABLE_com_badlogic_gdx_math_Polygon_translate_float_float, "(FF)V", 1 },
	{ "setRotation", (intptr_t) M_com_badlogic_gdx_math_Polygon_setRotation_float, VTABLE_com_badlogic_gdx_math_Polygon_setRotation_float, "(F)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_math_Polygon_rotate_float, VTABLE_com_badlogic_gdx_math_Polygon_rotate_float, "(F)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_math_Polygon_setScale_float_float, VTABLE_com_badlogic_gdx_math_Polygon_setScale_float_float, "(FF)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_math_Polygon_scale_float, VTABLE_com_badlogic_gdx_math_Polygon_scale_float, "(F)V", 1 },
	{ "dirty", (intptr_t) M_com_badlogic_gdx_math_Polygon_dirty, VTABLE_com_badlogic_gdx_math_Polygon_dirty, "()V", 1 },
	{ "area", (intptr_t) M_com_badlogic_gdx_math_Polygon_area_R_float, VTABLE_com_badlogic_gdx_math_Polygon_area_R_float, "()F", 1 },
	{ "getVertexCount", (intptr_t) M_com_badlogic_gdx_math_Polygon_getVertexCount_R_int, VTABLE_com_badlogic_gdx_math_Polygon_getVertexCount_R_int, "()I", 1 },
	{ "getVertex", (intptr_t) M_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Polygon_getVertex_int_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(ILcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "getCentroid", (intptr_t) M_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Polygon_getCentroid_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "getBoundingRectangle", (intptr_t) M_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Polygon_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle, "()Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Polygon_contains_float_float_R_boolean, "(FF)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Polygon_contains_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_math_Polygon_getX_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_math_Polygon_getY_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getY_R_float, "()F", 1 },
	{ "getOriginX", (intptr_t) M_com_badlogic_gdx_math_Polygon_getOriginX_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getOriginX_R_float, "()F", 1 },
	{ "getOriginY", (intptr_t) M_com_badlogic_gdx_math_Polygon_getOriginY_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getOriginY_R_float, "()F", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_math_Polygon_getRotation_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getRotation_R_float, "()F", 1 },
	{ "getScaleX", (intptr_t) M_com_badlogic_gdx_math_Polygon_getScaleX_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getScaleX_R_float, "()F", 1 },
	{ "getScaleY", (intptr_t) M_com_badlogic_gdx_math_Polygon_getScaleY_R_float, VTABLE_com_badlogic_gdx_math_Polygon_getScaleY_R_float, "()F", 1 },
	{ "resetTransformations", (intptr_t) M_com_badlogic_gdx_math_Polygon_resetTransformations, VTABLE_com_badlogic_gdx_math_Polygon_resetTransformations, "()V", 1 },
};

Class class_com_badlogic_gdx_math_Polygon{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Polygon",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Polygon),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Polygon,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Polygon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Polygon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Polygon = registerClass(&class_com_badlogic_gdx_math_Polygon);

}

