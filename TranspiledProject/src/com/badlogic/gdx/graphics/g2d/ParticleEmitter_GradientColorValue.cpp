#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_GradientColorValue.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_GradientColorValue.h"
#include "java/io/BufferedReader.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;

void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) object;
	if (self->F_colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colors)->clazz)->markFunction)((jobject) self->F_colors, mark, depth + 1);
	if (self->F_timeline)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timeline)->clazz)->markFunction)((jobject) self->F_timeline, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1595);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o));
	LINE_NUMBER(1592);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))) = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(1593);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(0));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	LINE_NUMBER(1596);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_alwaysActive = (jint(1));
	LINE_NUMBER(1597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getTimeline_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:getTimeline", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1600);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setTimeline_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:setTimeline", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1604);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline = (jref) (frame[1].o);
	LINE_NUMBER(1605);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColors_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:getColors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1609);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setColors_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:setColors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1614);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors = (jref) (frame[1].o);
	LINE_NUMBER(1615);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:getColor", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1618);
	frame[2].i = (jint(0));
	frame[3].i = (jint(-1));
	LINE_NUMBER(1619);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1620);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(1621);
	frame[6].i = (jint(1));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(1622);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1623);
	if ((floatCompare((frame[7].f), (frame[1].f), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1624);
	frame[3].i = (frame[6].i);
	LINE_NUMBER(1625);
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(1627);
	frame[2].i = (frame[6].i);
	LINE_NUMBER(1621);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1629);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[2].i)));
	LINE_NUMBER(1630);
	frame[2].i = ((frame[2].i) * (jint(3)));
	LINE_NUMBER(1631);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1632);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(1633);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(2)))));
	LINE_NUMBER(1634);
	if ((frame[3].i) != (jint(-1))) goto label_18;
	}
	{
	LINE_NUMBER(1635);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[7].f);
	LINE_NUMBER(1636);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[8].f);
	LINE_NUMBER(1637);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[9].f);
	LINE_NUMBER(1638);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(1640);
	frame[10].f = (((frame[1].f) - (frame[6].f)) / (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[3].i))) - (frame[6].f)));
	LINE_NUMBER(1641);
	frame[3].i = ((frame[3].i) * (jint(3)));
	LINE_NUMBER(1642);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	jint temp0 = jint(0);
	jfloat temp1 = frame[7].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp1 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))) - (frame[7].f)) * (frame[10].f)));
	LINE_NUMBER(1643);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	jint temp2 = jint(1);
	jfloat temp3 = frame[8].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (temp3 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[3].i) + (jint(1))))) - (frame[8].f)) * (frame[10].f)));
	LINE_NUMBER(1644);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	jint temp4 = jint(2);
	jfloat temp5 = frame[9].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = (temp5 + ((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[3].i) + (jint(2))))) - (frame[9].f)) * (frame[10].f)));
	LINE_NUMBER(1645);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:save", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1649);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_save_java_io_Writer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1650);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1651);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"colorsCount: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1652);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1653);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"colors"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[2].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1652);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1654);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"timelineCount: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1655);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(1656);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"timeline"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[2].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1655);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(1657);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1660);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_java_io_BufferedReader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1661);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1662);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"colorsCount"_j))));
	sp[1].o = (jobject) createArray(ctx, &class_float, temp0);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(1663);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1664);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"colors"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1663);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1665);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"timelineCount"_j))));
	sp[1].o = (jobject) createArray(ctx, &class_float, temp0);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	LINE_NUMBER(1666);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(1667);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"timeline"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1666);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(1668);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1671);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1672);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[1].o)))->F_colors;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(1673);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[1].o)))->F_colors;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_colors;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(1674);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	LINE_NUMBER(1675);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(1676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	{
	LINE_NUMBER(1590);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(4)));
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_setAlwaysActive_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_isAlwaysActive_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_isActive_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_setActive_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getTimeline_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setTimeline_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColors_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setColors_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue,
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
	{ "setAlwaysActive", "(Z)V" },
	{ "isAlwaysActive", "()Z" },
	{ "isActive", "()Z" },
	{ "setActive", "(Z)V" },
	{ "save", "(Ljava/io/Writer;)V" },
	{ "load", "(Ljava/io/BufferedReader;)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ParticleValue;)V" },
	{ "getTimeline", "()[F" },
	{ "setTimeline", "([F)V" },
	{ "getColors", "()[F" },
	{ "setColors", "([F)V" },
	{ "getColor", "(F)[F" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue;)V" },
};

static FieldMetadata fields[] {
	{ "temp", getArrayClass(&class_float, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_temp, "[F", 10 },
	{ "colors", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, F_colors), "[F", 2 },
	{ "timeline", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, F_timeline), "[F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, 0, "()V", 1 },
	{ "getTimeline", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getTimeline_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getTimeline_R_Array1_float, "()[F", 1 },
	{ "setTimeline", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setTimeline_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setTimeline_Array1_float, "([F)V", 1 },
	{ "getColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColors_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColors_R_Array1_float, "()[F", 1 },
	{ "setColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setColors_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_setColors_Array1_float, "([F)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float, "(F)[F", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue);

}

