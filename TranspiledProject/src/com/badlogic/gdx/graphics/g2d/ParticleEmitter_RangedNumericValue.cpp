#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_RangedNumericValue.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/lang/String.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_RangedNumericValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1315);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:newLowValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1319);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin;
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin);
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	popStackFrame(ctx);
	return (temp0 + (temp1 * temp2));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:setLow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1323);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin = (frame[1].f);
	LINE_NUMBER(1324);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax = (frame[1].f);
	LINE_NUMBER(1325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:setLow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1328);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin = (frame[1].f);
	LINE_NUMBER(1329);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax = (frame[2].f);
	LINE_NUMBER(1330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:getLowMin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1333);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMin_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:setLowMin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1337);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin = (frame[1].f);
	LINE_NUMBER(1338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:getLowMax", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1341);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMax_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:setLowMax", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1345);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax = (frame[1].f);
	LINE_NUMBER(1346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1350);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK(sp[0].o))->F_lowMin = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK(sp[0].o))->F_lowMin) * (frame[1].f));
	LINE_NUMBER(1351);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK(sp[0].o))->F_lowMax = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK(sp[0].o))->F_lowMax) * (frame[1].f));
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1355);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[1].o)))->F_lowMin);
	LINE_NUMBER(1356);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[1].o)))->F_lowMax);
	LINE_NUMBER(1357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1360);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_save_java_io_Writer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1361);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1362);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"lowMin: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1363);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"lowMax: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1367);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_java_io_BufferedReader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1368);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1369);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"lowMin"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK(sp[0].o))->F_lowMin = temp0;
	LINE_NUMBER(1370);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"lowMax"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK(sp[0].o))->F_lowMax = temp1;
	LINE_NUMBER(1371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1374);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1375);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMax = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[1].o)))->F_lowMax);
	LINE_NUMBER(1376);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[0].o)))->F_lowMin = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue *) NULL_CHECK((frame[1].o)))->F_lowMin);
	LINE_NUMBER(1377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMin_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMax_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
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
};

static FieldMetadata fields[] {
	{ "lowMin", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, F_lowMin), "F", 2 },
	{ "lowMax", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, F_lowMax), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, 0, "()V", 1 },
	{ "newLowValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float, "()F", 1 },
	{ "setLow", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float, "(F)V", 1 },
	{ "setLow", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float, "(FF)V", 1 },
	{ "getLowMin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float, "()F", 1 },
	{ "setLowMin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMin_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMin_float, "(F)V", 1 },
	{ "getLowMax", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float, "()F", 1 },
	{ "setLowMax", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMax_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMax_float, "(F)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float, "(F)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);

}

