#include "com/badlogic/gdx/graphics/g2d/ParticleEffect.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/io/Writer.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/InputStreamReader.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/io/File.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/util/Iterator.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEffect.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/io/BufferedReader.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_ParticleEffect(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEffect *) object;
	if (self->F_emitters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emitters)->clazz)->markFunction)((jobject) self->F_emitters, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_xSizeScale = (jfloat(1));
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_ySizeScale = (jfloat(1));
	LINE_NUMBER(44);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_motionScale = (jfloat(1));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (8));
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_emitters = (jref) sp[1].o;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEffect_com_badlogic_gdx_graphics_g2d_ParticleEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_xSizeScale = (jfloat(1));
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_ySizeScale = (jfloat(1));
	LINE_NUMBER(44);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_motionScale = (jfloat(1));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[1].o)))->F_emitters;
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, sp[1].o, temp0, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[2].o))->F_size));
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_emitters = (jref) sp[1].o;
	LINE_NUMBER(52);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[1].o)))->F_emitters;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[1].o)))->F_emitters;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[2].i));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter])(ctx, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[2].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:start", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)));
	LINE_NUMBER(57);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean])(ctx, (frame[0].o), (jint(1)), (jint(1)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(71);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:reset", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(79);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[2].i));
	LINE_NUMBER(79);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(81);
	if ((frame[1].i) == 0) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_xSizeScale), (jfloat(1)), -1)) != 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_ySizeScale), (jfloat(1)), -1)) != 0) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_motionScale), (jfloat(1)), -1)) == 0) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(82);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float])(ctx, (frame[0].o), ((jfloat(1)) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_xSizeScale)), ((jfloat(1)) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_ySizeScale)), ((jfloat(1)) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_motionScale)));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[2].o))->F_motionScale = temp0;
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[1].o))->F_ySizeScale = temp0;
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_xSizeScale = temp0;
	}
label_6:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(88);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_update_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_update_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[1].f));
	LINE_NUMBER(88);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[1].o));
	LINE_NUMBER(93);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(98);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[1].o), (frame[2].f));
	LINE_NUMBER(98);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_allowCompletion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:allowCompletion", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_allowCompletion) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_allowCompletion])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)));
	LINE_NUMBER(103);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEffect_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:isComplete", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isComplete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isComplete_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(108);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setDuration_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:setDuration", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setContinuous_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setContinuous_boolean])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(119);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[4].o)))->F_duration = (jfloat((frame[1].i)));
	LINE_NUMBER(120);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[4].o)))->F_durationTimer = (jfloat(0));
	LINE_NUMBER(116);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:setPosition", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(125);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[1].f), (frame[2].f));
	LINE_NUMBER(125);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setFlip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:setFlip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(130);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setFlip_boolean_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setFlip_boolean_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[1].i), (frame[2].i));
	LINE_NUMBER(130);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_flipY(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:flipY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_flipY) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_flipY])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)));
	LINE_NUMBER(135);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEffect_getEmitters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:getEmitters", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEffect_findEmitter_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:findEmitter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getName_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(145);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_preAllocateParticles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:preAllocateParticles", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(155);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_preAllocateParticles) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_preAllocateParticles])(ctx, (frame[2].o));
	LINE_NUMBER(156);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:save", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	frame[2].i = (jint(0));
	LINE_NUMBER(161);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(163);
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	if (temp0 <= 0) goto label_7;
	}
	{
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_7:;
	{
	LINE_NUMBER(164);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_save_java_io_Writer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_save_java_io_Writer])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(161);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(169);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(170);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(174);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(178);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(179);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:loadEmitters", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(185);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(187);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, (frame[2].o));
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (512));
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_java_io_BufferedReader_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_java_io_BufferedReader_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter])(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	if (sp[0].o != nullptr) goto label_14;
	}
	goto label_1;
label_14:;
	LINE_NUMBER(192);
	goto label_11;
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(196);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(197);
	goto label_16;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(193);
	frame[4].o = sp[0].o;
	LINE_NUMBER(194);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading effect: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(196);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(197);
	throwException(ctx, (frame[5].o));	}
label_16:;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:loadEmitterImages", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:loadEmitterImages", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(205);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o));
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(210);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[8].o), (92), (47));
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[9].o), (46));
	frame[10].i = temp0;
	LINE_NUMBER(212);
	if ((frame[10].i) == (jint(-1))) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[9].o), (jint(0)), (frame[10].i));
	frame[9].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(213);
	if ((frame[2].o) == nullptr) goto label_15;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_createSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[1].o), (frame[9].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(215);
	if ((frame[11].o) != nullptr) goto label_17;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Atlas is missing region: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(216);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[6].o), (frame[11].o));
	LINE_NUMBER(217);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(218);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o), (frame[6].o));
	}
label_7:;
	{
	LINE_NUMBER(205);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:loadEmitterImages", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(1));
	LINE_NUMBER(224);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(225);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o));
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(230);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[8].o), (92), (47));
	init_java_io_File_java_lang_String(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(232);
	if ((frame[10].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(233);
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o), (frame[9].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadTexture_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadTexture_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Texture])(ctx, sp[1].o, sp[2].o);
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, sp[1].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (frame[9].o), (frame[10].o));
	}
label_16:;
	{
	LINE_NUMBER(236);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[6].o), (frame[10].o));
	LINE_NUMBER(237);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array])(ctx, (frame[5].o), (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(225);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(240);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_java_io_BufferedReader_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:newEmitter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter_java_io_BufferedReader(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:newEmitter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadTexture_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:loadTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:dispose", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_ownsTexture) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(257);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSprites_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSprites_R_com_badlogic_gdx_utils_Array])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Sprite_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[5].o));
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(261);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(257);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:getBoundingBox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_bounds;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[1].o = sp[0].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(272);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:scaleEffect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(279);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f), (frame[1].f));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:scaleEffect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(285);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f), (frame[2].f));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:scaleEffect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_xSizeScale = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_xSizeScale) * (frame[1].f));
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_ySizeScale = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_ySizeScale) * (frame[2].f));
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_motionScale = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK(sp[0].o))->F_motionScale) * (frame[3].f));
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o));
	LINE_NUMBER(295);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float])(ctx, (frame[5].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(296);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleMotion_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleMotion_float])(ctx, (frame[5].o), (frame[3].f));
	LINE_NUMBER(297);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(298);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setEmittersCleanUpBlendFunction_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEffect:setEmittersCleanUpBlendFunction", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(307);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_emitters;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setCleansUpBlendFunction_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setCleansUpBlendFunction_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter, sp[0].o)), (frame[1].i));
	LINE_NUMBER(307);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEffect[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_start,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_update_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_allowCompletion,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setDuration_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setFlip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_flipY,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_getEmitters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_findEmitter_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_preAllocateParticles,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_java_io_BufferedReader_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadTexture_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setEmittersCleanUpBlendFunction_boolean,
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
	{ "dispose", "()V" },
	{ "start", "()V" },
	{ "reset", "()V" },
	{ "reset", "(Z)V" },
	{ "reset", "(ZZ)V" },
	{ "update", "(F)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "allowCompletion", "()V" },
	{ "isComplete", "()Z" },
	{ "setDuration", "(I)V" },
	{ "setPosition", "(FF)V" },
	{ "setFlip", "(ZZ)V" },
	{ "flipY", "()V" },
	{ "getEmitters", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "findEmitter", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;" },
	{ "preAllocateParticles", "()V" },
	{ "save", "(Ljava/io/Writer;)V" },
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V" },
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Ljava/lang/String;)V" },
	{ "loadEmitters", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "loadEmitterImages", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V" },
	{ "loadEmitterImages", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Ljava/lang/String;)V" },
	{ "loadEmitterImages", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "newEmitter", "(Ljava/io/BufferedReader;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;" },
	{ "newEmitter", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;" },
	{ "loadTexture", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/Texture;" },
	{ "getBoundingBox", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "scaleEffect", "(F)V" },
	{ "scaleEffect", "(FF)V" },
	{ "scaleEffect", "(FFF)V" },
	{ "setEmittersCleanUpBlendFunction", "(Z)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "emitters", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEffect, F_emitters), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "bounds", &class_com_badlogic_gdx_math_collision_BoundingBox, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEffect, F_bounds), "Lcom/badlogic/gdx/math/collision/BoundingBox;", 2 },
	{ "ownsTexture", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEffect, F_ownsTexture), "Z", 2 },
	{ "xSizeScale", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEffect, F_xSizeScale), "F", 4 },
	{ "ySizeScale", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEffect, F_ySizeScale), "F", 4 },
	{ "motionScale", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEffect, F_motionScale), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEffect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEffect_com_badlogic_gdx_graphics_g2d_ParticleEffect, 0, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEffect;)V", 1 },
	{ "start", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_start, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_start, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean, "(Z)V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_reset_boolean_boolean, "(ZZ)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_update_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_update_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch, "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "allowCompletion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_allowCompletion, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_allowCompletion, "()V", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_isComplete_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_isComplete_R_boolean, "()Z", 1 },
	{ "setDuration", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setDuration_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_setDuration_int, "(I)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setPosition_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_setPosition_float_float, "(FF)V", 1 },
	{ "setFlip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setFlip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_setFlip_boolean_boolean, "(ZZ)V", 1 },
	{ "flipY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_flipY, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_flipY, "()V", 1 },
	{ "getEmitters", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_getEmitters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_getEmitters_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "findEmitter", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_findEmitter_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_findEmitter_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;", 1 },
	{ "preAllocateParticles", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_preAllocateParticles, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_preAllocateParticles, "()V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Ljava/lang/String;)V", 1 },
	{ "loadEmitters", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitters_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "loadEmitterImages", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V", 1 },
	{ "loadEmitterImages", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Ljava/lang/String;)V", 1 },
	{ "loadEmitterImages", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadEmitterImages_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "newEmitter", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_java_io_BufferedReader_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_java_io_BufferedReader_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Ljava/io/BufferedReader;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;", 4 },
	{ "newEmitter", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_newEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;", 4 },
	{ "loadTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadTexture_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_loadTexture_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Texture, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/Texture;", 4 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_dispose, "()V", 1 },
	{ "getBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "scaleEffect", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float, "(F)V", 1 },
	{ "scaleEffect", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float, "(FF)V", 1 },
	{ "scaleEffect", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_scaleEffect_float_float_float, "(FFF)V", 1 },
	{ "setEmittersCleanUpBlendFunction", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEffect_setEmittersCleanUpBlendFunction_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_setEmittersCleanUpBlendFunction_boolean, "(Z)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEffect{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEffect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEffect),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEffect,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEffect = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEffect);

}

