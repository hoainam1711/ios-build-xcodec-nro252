#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ScaledNumericValue.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ScaledNumericValue.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_RangedNumericValue.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) object;
	if (self->F_scaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scaling)->clazz)->markFunction)((jobject) self->F_scaling, mark, depth + 1);
	if (self->F_timeline)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timeline)->clazz)->markFunction)((jobject) self->F_timeline, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1380);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, (frame[0].o));
	LINE_NUMBER(1381);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	LINE_NUMBER(1382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))) = (jfloat(0));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:newHighValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1387);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin;
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	popStackFrame(ctx);
	return (temp0 + (temp1 * temp2));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setHigh", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1391);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin = (frame[1].f);
	LINE_NUMBER(1392);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax = (frame[1].f);
	LINE_NUMBER(1393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setHigh", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1396);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin = (frame[1].f);
	LINE_NUMBER(1397);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax = (frame[2].f);
	LINE_NUMBER(1398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:getHighMin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1401);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMin_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setHighMin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1405);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin = (frame[1].f);
	LINE_NUMBER(1406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:getHighMax", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1409);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMax_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setHighMax", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1413);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax = (frame[1].f);
	LINE_NUMBER(1414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_scale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1417);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(1418);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_highMin = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_highMin) * (frame[1].f));
	LINE_NUMBER(1419);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_highMax = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_highMax) * (frame[1].f));
	LINE_NUMBER(1420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1423);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1424);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1426);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(1427);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1430);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1431);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_highMin);
	LINE_NUMBER(1432);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_highMax);
	LINE_NUMBER(1433);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_scaling;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1434);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_scaling;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_scaling;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1436);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_scaling;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	}
label_6:;
	{
	LINE_NUMBER(1437);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(1438);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	}
label_9:;
	{
	LINE_NUMBER(1441);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_relative = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_relative);
	LINE_NUMBER(1442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScaling_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:getScaling", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1445);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setScaling_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setScaling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1449);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[1].o);
	LINE_NUMBER(1450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getTimeline_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:getTimeline", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setTimeline_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setTimeline", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1457);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline = (jref) (frame[1].o);
	LINE_NUMBER(1458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_isRelative_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:isRelative", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1461);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_relative);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setRelative_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:setRelative", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1465);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_relative = (frame[1].i);
	LINE_NUMBER(1466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:getScale", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1469);
	frame[2].i = (jint(-1));
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1471);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1472);
	frame[5].i = (jint(1));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(1473);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1474);
	if ((floatCompare((frame[6].f), (frame[1].f), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1475);
	frame[2].i = (frame[5].i);
	LINE_NUMBER(1476);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(1472);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1479);
	if ((frame[2].i) != (jint(-1))) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) - (jint(1)))));
	}
label_11:;
	{
	LINE_NUMBER(1480);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1481);
	frame[6].i = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(1482);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(1483);
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(1484);
	popStackFrame(ctx);
	return ((frame[7].f) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[2].i))) - (frame[7].f)) * (((frame[1].f) - (frame[8].f)) / (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[2].i))) - (frame[8].f)))));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:save", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1488);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1489);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1490);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"highMin: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1491);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"highMax: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1492);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"relative: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_relative));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1493);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"scalingCount: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1494);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(1495);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"scaling"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[2].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1494);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1496);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"timelineCount: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1497);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(1498);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"timeline"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[2].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1497);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1499);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1502);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1503);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"highMin"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_highMin = temp0;
	LINE_NUMBER(1505);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"highMax"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_highMax = temp1;
	LINE_NUMBER(1506);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"relative"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative = temp2;
	LINE_NUMBER(1507);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"scalingCount"_j))));
	sp[1].o = (jobject) createArray(ctx, &class_float, temp3);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	LINE_NUMBER(1508);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(1509);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	jint temp0 = frame[2].i;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"scaling"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1508);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1510);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"timelineCount"_j))));
	sp[1].o = (jobject) createArray(ctx, &class_float, temp0);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	LINE_NUMBER(1511);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
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
	LINE_NUMBER(1511);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1513);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1516);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1517);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMax = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_highMax);
	LINE_NUMBER(1518);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_highMin = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_highMin);
	LINE_NUMBER(1519);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_scaling;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	LINE_NUMBER(1520);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_scaling;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_scaling;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(1521);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline = (jref) sp[1].o;
	LINE_NUMBER(1522);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_timeline;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_timeline;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(1523);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_relative = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_relative);
	LINE_NUMBER(1524);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMin_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMax_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMin_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMax_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScaling_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setScaling_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getTimeline_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setTimeline_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_isRelative_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setRelative_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
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
	{ "newLowValue", "()F" },
	{ "setLow", "(F)V" },
	{ "setLow", "(FF)V" },
	{ "getLowMin", "()F" },
	{ "setLowMin", "(F)V" },
	{ "getLowMax", "()F" },
	{ "setLowMax", "(F)V" },
	{ "scale", "(F)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;)V" },
	{ "newHighValue", "()F" },
	{ "setHigh", "(F)V" },
	{ "setHigh", "(FF)V" },
	{ "getHighMin", "()F" },
	{ "setHighMin", "(F)V" },
	{ "getHighMax", "()F" },
	{ "setHighMax", "(F)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;)V" },
	{ "getScaling", "()[F" },
	{ "setScaling", "([F)V" },
	{ "getTimeline", "()[F" },
	{ "setTimeline", "([F)V" },
	{ "isRelative", "()Z" },
	{ "setRelative", "(Z)V" },
	{ "getScale", "(F)F" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;)V" },
};

static FieldMetadata fields[] {
	{ "scaling", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, F_scaling), "[F", 2 },
	{ "timeline", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, F_timeline), "[F", 0 },
	{ "highMin", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, F_highMin), "F", 2 },
	{ "highMax", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, F_highMax), "F", 2 },
	{ "relative", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, F_relative), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, 0, "()V", 1 },
	{ "newHighValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float, "()F", 1 },
	{ "setHigh", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float, "(F)V", 1 },
	{ "setHigh", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float, "(FF)V", 1 },
	{ "getHighMin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float, "()F", 1 },
	{ "setHighMin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMin_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMin_float, "(F)V", 1 },
	{ "getHighMax", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float, "()F", 1 },
	{ "setHighMax", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMax_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMax_float, "(F)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_scale_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_scale_float, "(F)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;)V", 1 },
	{ "getScaling", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScaling_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScaling_R_Array1_float, "()[F", 1 },
	{ "setScaling", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setScaling_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setScaling_Array1_float, "([F)V", 1 },
	{ "getTimeline", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getTimeline_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getTimeline_R_Array1_float, "()[F", 1 },
	{ "setTimeline", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setTimeline_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setTimeline_Array1_float, "([F)V", 1 },
	{ "isRelative", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_isRelative_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_isRelative_R_boolean, "()Z", 1 },
	{ "setRelative", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setRelative_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setRelative_boolean, "(Z)V", 1 },
	{ "getScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float, "(F)F", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);

}

