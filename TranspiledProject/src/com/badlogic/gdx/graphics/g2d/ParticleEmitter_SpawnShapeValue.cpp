#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnShapeValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnShape.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnEllipseSide.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnShapeValue.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) object;
	if (self->F_shape)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shape)->clazz)->markFunction)((jobject) self->F_shape, mark, depth + 1);
	if (self->F_side)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_side)->clazz)->markFunction)((jobject) self->F_side, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1679);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o));
	LINE_NUMBER(1680);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_point;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1682);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_both;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_side = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:getShape", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1685);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_shape;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setShape_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:setShape", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1689);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_shape = (jref) (frame[1].o);
	LINE_NUMBER(1690);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_isEdges_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:isEdges", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1693);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_edges);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setEdges_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:setEdges", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1697);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_edges = (frame[1].i);
	LINE_NUMBER(1698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getSide_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:getSide", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1701);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_side;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setSide_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:setSide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1705);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_side = (jref) (frame[1].o);
	LINE_NUMBER(1706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1709);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_save_java_io_Writer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1710);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1711);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"shape: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_shape;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1712);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_shape;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ellipse;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(1713);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"edges: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_edges));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1714);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"side: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_side;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(1716);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1719);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_java_io_BufferedReader(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1720);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1721);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"shape"_j))));
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1722);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_shape;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ellipse;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(1723);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"edges"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_edges = temp0;
	LINE_NUMBER(1724);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"side"_j))));
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_side = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(1726);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1729);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1730);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[1].o)))->F_shape;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_shape = (jref) sp[1].o;
	LINE_NUMBER(1731);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[0].o)))->F_edges = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[1].o)))->F_edges);
	LINE_NUMBER(1732);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK((frame[1].o)))->F_side;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_side = (jref) sp[1].o;
	LINE_NUMBER(1733);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setShape_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_isEdges_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setEdges_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getSide_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setSide_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue,
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
	{ "getShape", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShape;" },
	{ "setShape", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShape;)V" },
	{ "isEdges", "()Z" },
	{ "setEdges", "(Z)V" },
	{ "getSide", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnEllipseSide;" },
	{ "setSide", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnEllipseSide;)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue;)V" },
};

static FieldMetadata fields[] {
	{ "shape", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, F_shape), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShape;", 0 },
	{ "edges", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, F_edges), "Z", 0 },
	{ "side", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, F_side), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnEllipseSide;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, 0, "()V", 1 },
	{ "getShape", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShape;", 1 },
	{ "setShape", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setShape_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setShape_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShape;)V", 1 },
	{ "isEdges", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_isEdges_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_isEdges_R_boolean, "()Z", 1 },
	{ "setEdges", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setEdges_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setEdges_boolean, "(Z)V", 1 },
	{ "getSide", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getSide_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_getSide_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnEllipseSide;", 1 },
	{ "setSide", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setSide_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setSide_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnEllipseSide;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue,
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
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue);

}

