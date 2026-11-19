#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_IndependentScaledNumericValue.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ScaledNumericValue.h"
#include "com/badlogic/gdx/Application.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_IndependentScaledNumericValue.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_RangedNumericValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1527);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_isIndependent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:isIndependent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1531);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_independent);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_setIndependent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:setIndependent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1535);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_independent = (frame[1].i);
	LINE_NUMBER(1536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1539);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1540);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1542);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(1543);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1546);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1547);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1549);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(1550);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1553);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1554);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_independent = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_independent);
	LINE_NUMBER(1555);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1558);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1559);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"independent: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_independent));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1563);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1565);
	jint temp0 = (jint)((func_java_io_BufferedReader_markSupported_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_markSupported_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	((func_java_io_BufferedReader_mark_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_mark_int])(ctx, (frame[1].o), (100));
	}
label_2:;
	{
	LINE_NUMBER(1566);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1567);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing value: independent"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1568);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"independent"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1569);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_lang_String_R_java_lang_String(ctx, (frame[2].o));
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK(sp[0].o))->F_independent = temp0;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1570);
	jint temp0 = (jint)((func_java_io_BufferedReader_markSupported_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_markSupported_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1571);
	((func_java_io_BufferedReader_reset) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_reset])(ctx, (frame[1].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1575);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"The loaded particle effect descriptor file uses an old invalid format. Please download the latest version of the Particle Editor tool and recreate the file by loading and saving it again."_j)));
	LINE_NUMBER(1578);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ParticleEmitter"_j))), (frame[3].o));
	LINE_NUMBER(1579);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(1581);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1584);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1585);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[0].o)))->F_independent = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK((frame[1].o)))->F_independent);
	LINE_NUMBER(1586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMin_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLowMax_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMin_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHighMax_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScaling_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setScaling_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getTimeline_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setTimeline_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_isRelative_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setRelative_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_isIndependent_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_setIndependent_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue,
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
	{ "isIndependent", "()Z" },
	{ "setIndependent", "(Z)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue;)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue;)V" },
};

static FieldMetadata fields[] {
	{ "independent", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, F_independent), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, 0, "()V", 1 },
	{ "isIndependent", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_isIndependent_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_isIndependent_R_boolean, "()Z", 1 },
	{ "setIndependent", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_setIndependent_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_setIndependent_boolean, "(Z)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);

}

