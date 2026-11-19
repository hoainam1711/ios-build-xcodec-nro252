#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"
#include "java/lang/Integer.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ScaledNumericValue.h"
#include "java/io/Writer.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_IndependentScaledNumericValue.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_GradientColorValue.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_RangedNumericValue.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpriteMode.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_Particle.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnEllipseSide.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_NumericValue.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "java/io/BufferedReader.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnShape.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_1.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_ParticleValue.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEmitter_SpawnShapeValue.h"
#include "java/lang/RuntimeException.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_SCALE;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_ANGLE;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_ROTATION;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_VELOCITY;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_WIND;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_GRAVITY;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_TINT;
jint SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_SPRITE;

void mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_ParticleEmitter *) object;
	if (self->F_delayValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_delayValue)->clazz)->markFunction)((jobject) self->F_delayValue, mark, depth + 1);
	if (self->F_lifeOffsetValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lifeOffsetValue)->clazz)->markFunction)((jobject) self->F_lifeOffsetValue, mark, depth + 1);
	if (self->F_durationValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_durationValue)->clazz)->markFunction)((jobject) self->F_durationValue, mark, depth + 1);
	if (self->F_lifeValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lifeValue)->clazz)->markFunction)((jobject) self->F_lifeValue, mark, depth + 1);
	if (self->F_emissionValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emissionValue)->clazz)->markFunction)((jobject) self->F_emissionValue, mark, depth + 1);
	if (self->F_xScaleValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xScaleValue)->clazz)->markFunction)((jobject) self->F_xScaleValue, mark, depth + 1);
	if (self->F_yScaleValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_yScaleValue)->clazz)->markFunction)((jobject) self->F_yScaleValue, mark, depth + 1);
	if (self->F_rotationValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotationValue)->clazz)->markFunction)((jobject) self->F_rotationValue, mark, depth + 1);
	if (self->F_velocityValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_velocityValue)->clazz)->markFunction)((jobject) self->F_velocityValue, mark, depth + 1);
	if (self->F_angleValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_angleValue)->clazz)->markFunction)((jobject) self->F_angleValue, mark, depth + 1);
	if (self->F_windValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_windValue)->clazz)->markFunction)((jobject) self->F_windValue, mark, depth + 1);
	if (self->F_gravityValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gravityValue)->clazz)->markFunction)((jobject) self->F_gravityValue, mark, depth + 1);
	if (self->F_transparencyValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transparencyValue)->clazz)->markFunction)((jobject) self->F_transparencyValue, mark, depth + 1);
	if (self->F_tintValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tintValue)->clazz)->markFunction)((jobject) self->F_tintValue, mark, depth + 1);
	if (self->F_xOffsetValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xOffsetValue)->clazz)->markFunction)((jobject) self->F_xOffsetValue, mark, depth + 1);
	if (self->F_yOffsetValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_yOffsetValue)->clazz)->markFunction)((jobject) self->F_yOffsetValue, mark, depth + 1);
	if (self->F_spawnWidthValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawnWidthValue)->clazz)->markFunction)((jobject) self->F_spawnWidthValue, mark, depth + 1);
	if (self->F_spawnHeightValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawnHeightValue)->clazz)->markFunction)((jobject) self->F_spawnHeightValue, mark, depth + 1);
	if (self->F_spawnShapeValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawnShapeValue)->clazz)->markFunction)((jobject) self->F_spawnShapeValue, mark, depth + 1);
	if (self->F_xSizeValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xSizeValues)->clazz)->markFunction)((jobject) self->F_xSizeValues, mark, depth + 1);
	if (self->F_ySizeValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ySizeValues)->clazz)->markFunction)((jobject) self->F_ySizeValues, mark, depth + 1);
	if (self->F_motionValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_motionValues)->clazz)->markFunction)((jobject) self->F_motionValues, mark, depth + 1);
	if (self->F_sprites)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sprites)->clazz)->markFunction)((jobject) self->F_sprites, mark, depth + 1);
	if (self->F_spriteMode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spriteMode)->clazz)->markFunction)((jobject) self->F_spriteMode, mark, depth + 1);
	if (self->F_particles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particles)->clazz)->markFunction)((jobject) self->F_particles, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_imagePaths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imagePaths)->clazz)->markFunction)((jobject) self->F_imagePaths, mark, depth + 1);
	if (self->F_active)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_active)->clazz)->markFunction)((jobject) self->F_active, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_SCALE = jint(1);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_ANGLE = jint(2);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_ROTATION = jint(4);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_VELOCITY = jint(8);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_WIND = jint(16);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_GRAVITY = jint(32);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_TINT = jint(64);
	SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_SPRITE = jint(128);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayValue = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationValue = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeValue = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionValue = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xScaleValue = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_yScaleValue = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_rotationValue = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_velocityValue = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_angleValue = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_windValue = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_gravityValue = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_transparencyValue = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_tintValue = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_yOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidthValue = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeightValue = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnShapeValue = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spriteMode = (jref) sp[1].o;
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (jint(4));
	LINE_NUMBER(86);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(1));
	LINE_NUMBER(93);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive = (jint(1));
	LINE_NUMBER(94);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha = (jint(0));
	LINE_NUMBER(95);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction = (jint(1));
	LINE_NUMBER(98);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_initialize(ctx, (frame[0].o));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayValue = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationValue = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeValue = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionValue = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xScaleValue = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_yScaleValue = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_rotationValue = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_velocityValue = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_angleValue = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_windValue = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_gravityValue = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_transparencyValue = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_tintValue = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_yOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidthValue = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeightValue = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnShapeValue = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spriteMode = (jref) sp[1].o;
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (jint(4));
	LINE_NUMBER(86);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(1));
	LINE_NUMBER(93);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive = (jint(1));
	LINE_NUMBER(94);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha = (jint(0));
	LINE_NUMBER(95);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction = (jint(1));
	LINE_NUMBER(102);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_initialize(ctx, (frame[0].o));
	LINE_NUMBER(103);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_load_java_io_BufferedReader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_load_java_io_BufferedReader])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_ParticleEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayValue = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationValue = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeValue = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionValue = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xScaleValue = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_yScaleValue = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_rotationValue = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_velocityValue = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_angleValue = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_windValue = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_gravityValue = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_transparencyValue = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_tintValue = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_yOffsetValue = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidthValue = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeightValue = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnShapeValue = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_single;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spriteMode = (jref) sp[1].o;
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (jint(4));
	LINE_NUMBER(86);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(1));
	LINE_NUMBER(93);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive = (jint(1));
	LINE_NUMBER(94);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha = (jint(0));
	LINE_NUMBER(95);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction = (jint(1));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_sprites;
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_sprites = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_name;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_imagePaths = (jref) sp[1].o;
	LINE_NUMBER(110);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int])(ctx, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_maxParticleCount));
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_minParticleCount);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_delayValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_durationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_emissionValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_lifeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_lifeOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_xScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_yScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_rotationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_velocityValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_angleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_windValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_gravityValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_transparencyValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_tintValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_xOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_yOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_spawnWidthValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_spawnHeightValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_spawnShapeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_attached = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_attached);
	LINE_NUMBER(132);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_continuous);
	LINE_NUMBER(133);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_aligned);
	LINE_NUMBER(134);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_behind = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_behind);
	LINE_NUMBER(135);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_additive);
	LINE_NUMBER(136);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_premultipliedAlpha);
	LINE_NUMBER(137);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_cleansUpBlendFunction);
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[1].o)))->F_spriteMode;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spriteMode = (jref) sp[1].o;
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getX_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getY_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:initialize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_sprites = (jref) sp[1].o;
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_imagePaths = (jref) sp[1].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setAlwaysActive_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setMaxParticleCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (frame[1].i);
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (frame[1].i));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_active = (jref) sp[1].o;
	LINE_NUMBER(158);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount = (jint(0));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, (frame[1].i));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_particles = (jref) sp[1].o;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:addParticle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	frame[1].i = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount);
	LINE_NUMBER(164);
	if ((frame[1].i) != ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount)) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[2].o = sp[0].o;
	LINE_NUMBER(166);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(167);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(168);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_activateParticle_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(169);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jint(1));
	LINE_NUMBER(170);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(171);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(166);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:addParticles", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount) - ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount)));
	frame[1].i = temp0;
	LINE_NUMBER(178);
	if ((frame[1].i) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[2].o = sp[0].o;
	LINE_NUMBER(180);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(182);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(183);
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(184);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(185);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_activateParticle_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(186);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(1));
	LINE_NUMBER(187);
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(183);
	INST_IINC(3, 1);
	goto label_8;
	}
label_14:;
	{
	LINE_NUMBER(182);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_activeCount = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_activeCount) + (frame[1].i));
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:update", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator) + ((frame[1].f) * (jfloat(1000.0f))));
	LINE_NUMBER(197);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_accumulator), (jfloat(1)), 1)) >= 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(198);
	frame[2].i = (jint(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_accumulator)));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator) - (jfloat((frame[2].i))));
	LINE_NUMBER(201);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delay), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayTimer = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayTimer) + (jfloat((frame[2].i))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(204);
	frame[3].i = (jint(0));
	LINE_NUMBER(205);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_firstUpdate) == 0) goto label_9;
	}
	{
	LINE_NUMBER(206);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_firstUpdate = (jint(0));
	LINE_NUMBER(207);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(210);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration), 1)) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationTimer = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationTimer) + (jfloat((frame[2].i))));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(213);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous) == 0) goto label_15;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_allowCompletion) == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(214);
	frame[3].i = (jint(1));
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(216);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(219);
	if ((frame[3].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta) + (frame[2].i));
	LINE_NUMBER(221);
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emission));
	jfloat temp1 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDiff));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration)));
	frame[4].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(222);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(223);
	frame[4].f = ((jfloat(1000.0f)) / (frame[4].f));
	LINE_NUMBER(224);
	if ((floatCompare((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDelta))), (frame[4].f), -1)) < 0) goto label_20;
	}
	{
	LINE_NUMBER(225);
	frame[5].i = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDelta))) / (frame[4].f))));
	LINE_NUMBER(226);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[5].i), (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount) - ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount)));
	frame[5].i = temp0;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta))) - ((jfloat((frame[5].i))) * (frame[4].f)))));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta = (jint((fmodf((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta))), (frame[4].f)))));
	LINE_NUMBER(229);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int])(ctx, (frame[0].o), (frame[5].i));
	}
label_20:;
	{
	LINE_NUMBER(232);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount) >= ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount)) goto label_7;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int])(ctx, (frame[0].o), (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount) - ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount)));
	}
label_7:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[3].o = sp[0].o;
	LINE_NUMBER(237);
	frame[4].i = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount);
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[5].o = sp[0].o;
	LINE_NUMBER(239);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_32:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_33;
	}
	{
	LINE_NUMBER(240);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[6].i))) == 0) goto label_35;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))), (frame[1].f), (frame[2].i));
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(241);
	ARRAY_ACCESS(jbyte, (frame[3].o), (frame[6].i)) = (jint(0));
	LINE_NUMBER(242);
	INST_IINC(4, -1);
	}
label_35:;
	{
	LINE_NUMBER(239);
	INST_IINC(6, 1);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(245);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount = (frame[4].i);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(249);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha) == 0) goto label_1;
	}
	{
	LINE_NUMBER(250);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(1)), (771));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(251);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive) == 0) goto label_4;
	}
	{
	LINE_NUMBER(252);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (770), (jint(1)));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(254);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (770), (771));
	}
label_3:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[2].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[3].o = sp[0].o;
	LINE_NUMBER(259);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(260);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[3].o), (frame[4].i))) == 0) goto label_12;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), (frame[1].o));
	}
label_12:;
	{
	LINE_NUMBER(259);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(263);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction) == 0) goto label_13;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive) != 0) goto label_14;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha) == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(264);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (770), (771));
	}
label_13:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator) + ((frame[2].f) * (jfloat(1000.0f))));
	LINE_NUMBER(271);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_accumulator), (jfloat(1)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(272);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(275);
	frame[3].i = (jint(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_accumulator)));
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_accumulator) - (jfloat((frame[3].i))));
	LINE_NUMBER(278);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha) == 0) goto label_7;
	}
	{
	LINE_NUMBER(279);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(1)), (771));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(280);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive) == 0) goto label_10;
	}
	{
	LINE_NUMBER(281);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (770), (jint(1)));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(283);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (770), (771));
	}
label_9:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[4].o = sp[0].o;
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	frame[6].i = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount);
	LINE_NUMBER(289);
	frame[7].i = (jint(0));
	frame[8].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(290);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (frame[7].i))) == 0) goto label_19;
	}
	{
	LINE_NUMBER(291);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i)));
	LINE_NUMBER(292);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean(ctx, (frame[0].o), (frame[9].o), (frame[2].f), (frame[3].i));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(293);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[9].o), (frame[1].o));
	goto label_19;
	}
label_22:;
	{
	LINE_NUMBER(295);
	ARRAY_ACCESS(jbyte, (frame[5].o), (frame[7].i)) = (jint(0));
	LINE_NUMBER(296);
	INST_IINC(6, -1);
	}
label_19:;
	{
	LINE_NUMBER(289);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(300);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount = (frame[6].i);
	LINE_NUMBER(302);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction) == 0) goto label_26;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive) != 0) goto label_27;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha) == 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(303);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, (frame[1].o)))(ctx, (frame[1].o), (770), (771));
	}
label_26:;
	{
	LINE_NUMBER(305);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delay), 1)) >= 0) goto label_28;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayTimer = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delayTimer) + (jfloat((frame[3].i))));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}
label_28:;
	{
	LINE_NUMBER(310);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_firstUpdate) == 0) goto label_31;
	}
	{
	LINE_NUMBER(311);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_firstUpdate = (jint(0));
	LINE_NUMBER(312);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle])(ctx, (frame[0].o));
	}
label_31:;
	{
	LINE_NUMBER(315);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration), 1)) >= 0) goto label_34;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationTimer = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationTimer) + (jfloat((frame[3].i))));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(318);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous) == 0) goto label_37;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_allowCompletion) == 0) goto label_38;
	}
label_37:;
	popStackFrame(ctx);
	INST_RETURN();
label_38:;
	{
	LINE_NUMBER(319);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart(ctx, (frame[0].o));
	}
label_36:;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta) + (frame[3].i));
	LINE_NUMBER(323);
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emission));
	jfloat temp1 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDiff));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration)));
	frame[7].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(324);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(325);
	frame[7].f = ((jfloat(1000.0f)) / (frame[7].f));
	LINE_NUMBER(326);
	if ((floatCompare((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDelta))), (frame[7].f), -1)) < 0) goto label_41;
	}
	{
	LINE_NUMBER(327);
	frame[8].i = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDelta))) / (frame[7].f))));
	LINE_NUMBER(328);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[8].i), (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount) - (frame[6].i)));
	frame[8].i = temp0;
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta))) - ((jfloat((frame[8].i))) * (frame[7].f)))));
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta = (jint((fmodf((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDelta))), (frame[7].f)))));
	LINE_NUMBER(331);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int])(ctx, (frame[0].o), (frame[8].i));
	}
label_41:;
	{
	LINE_NUMBER(334);
	if ((frame[6].i) >= ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount)) goto label_49;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int])(ctx, (frame[0].o), (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount) - (frame[6].i)));
	}
label_49:;
	LINE_NUMBER(335);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:start", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_firstUpdate = (jint(1));
	LINE_NUMBER(339);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_allowCompletion = (jint(0));
	LINE_NUMBER(340);
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart(ctx, (frame[0].o));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:reset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(348);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionDelta = (jint(0));
	LINE_NUMBER(349);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration);
	LINE_NUMBER(350);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[2].o = sp[0].o;
	LINE_NUMBER(351);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(352);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jint(0));
	LINE_NUMBER(351);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(353);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount = (jint(0));
	LINE_NUMBER(354);
	if ((frame[1].i) == 0) goto label_10;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start])(ctx, sp[0].o);
label_10:;
	LINE_NUMBER(355);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:restart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayValue;
	sp += 1;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_delay = sp[1].f;
	LINE_NUMBER(359);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayTimer = (jfloat(0));
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationTimer = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_durationTimer) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration));
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_duration = temp0;
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emission = (jint(temp1));
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDiff = (jint(temp2));
	LINE_NUMBER(366);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDiff = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_emissionDiff) - ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emission));
	}
label_9:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK(sp[0].o))->F_independent) != 0) goto label_10;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeValues(ctx, sp[0].o);
label_10:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK(sp[0].o))->F_independent) != 0) goto label_11;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeOffsetValues(ctx, sp[0].o);
label_11:;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidth = temp0;
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidthDiff = temp1;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidthDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnWidthDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidth));
	}
label_14:;
	{
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeight = temp0;
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeightDiff = temp1;
	LINE_NUMBER(378);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeightDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spawnHeightDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeight));
	}
label_17:;
	{
	LINE_NUMBER(380);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_updateFlags = (jint(0));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (jint(2)));
	}
label_19:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (8));
	}
label_20:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (jint(1)));
	}
label_21:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (jint(1)));
	}
label_22:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_timeline;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (jint(4)));
	}
label_23:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (16));
	}
label_24:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_25;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (32));
	}
label_25:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue *) NULL_CHECK(sp[0].o))->F_timeline;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (64));
	}
label_26:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spriteMode;
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_animated;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_updateFlags) | (128));
	}
label_27:;
	LINE_NUMBER(390);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:newParticle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(393);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle);
	init_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getParticles_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getParticles", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_activateParticle_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:activateParticle", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(401);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(402);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spriteMode;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(406);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_random_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_random_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(413);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(415);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_flip_boolean_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_flip_boolean_boolean])(ctx, (frame[3].o), ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_flipX), ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_flipY));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(417);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_set_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_set_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[3].o), (frame[2].o));
	}
label_10:;
	{
	LINE_NUMBER(420);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration));
	LINE_NUMBER(421);
	frame[5].i = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_updateFlags);
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK(sp[0].o))->F_independent) == 0) goto label_13;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeValues(ctx, sp[0].o);
label_13:;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue *) NULL_CHECK(sp[0].o))->F_independent) == 0) goto label_14;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeOffsetValues(ctx, sp[0].o);
label_14:;
	{
	LINE_NUMBER(427);
	sp[0].o = frame[3].o;
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_life;
	jfloat temp1 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeDiff));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_getScale_float_R_float])(ctx, sp[2].o, (frame[4].f));
	jint temp3 = temp0 + (jint((temp1 * temp2)));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[1].o))->F_life = temp3;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_currentLife = temp3;
	LINE_NUMBER(429);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_16;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_velocity = temp0;
	LINE_NUMBER(431);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_velocityDiff = temp1;
	LINE_NUMBER(432);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_16;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_velocityDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_velocityDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_velocity));
	}
label_16:;
	{
	LINE_NUMBER(435);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_angle = temp0;
	LINE_NUMBER(436);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_angleDiff = temp1;
	LINE_NUMBER(437);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_22;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_angleDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_angleDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angle));
	}
label_22:;
	{
	LINE_NUMBER(438);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(439);
	if (((frame[5].i) & (jint(2))) != 0) goto label_24;
	}
	{
	LINE_NUMBER(440);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angle;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angleDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (jfloat(0)));
	frame[6].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(441);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angle = (frame[6].f);
	LINE_NUMBER(442);
	sp[0].o = frame[3].o;
	jfloat temp3 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[6].f));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_angleCos = temp3;
	LINE_NUMBER(443);
	sp[0].o = frame[3].o;
	jfloat temp4 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[6].f));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_angleSin = temp4;
	}
label_24:;
	{
	LINE_NUMBER(446);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float])(ctx, (frame[2].o));
	frame[7].f = temp0;
	LINE_NUMBER(447);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float])(ctx, (frame[2].o));
	frame[8].f = temp1;
	LINE_NUMBER(449);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_xScale = (temp2 / (frame[7].f));
	LINE_NUMBER(450);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_xScaleDiff = (temp3 / (frame[7].f));
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_33;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_xScaleDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_xScaleDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_xScale));
	}
label_33:;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_34;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_yScale = (temp0 / (frame[8].f));
	LINE_NUMBER(455);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_yScaleDiff = (temp1 / (frame[8].f));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_38;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_yScaleDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_yScaleDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_yScale));
	}
label_38:;
	{
	LINE_NUMBER(457);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_xScale;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_xScaleDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, (jfloat(0)));
	jfloat temp3 = temp0 + (temp1 * temp2);
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_yScale;
	jfloat temp5 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_yScaleDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	jfloat temp6 = jfloat(0);
	LINE_NUMBER(458);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, temp6);
	jfloat temp8 = temp4 + (temp5 * temp7);
	LINE_NUMBER(457);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float_float])(ctx, sp[0].o, temp3, temp8);
	goto label_41;
	}
label_34:;
	{
	LINE_NUMBER(460);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_xScale;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_xScaleDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, (jfloat(0)));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float])(ctx, sp[0].o, (temp0 + (temp1 * temp2)));
	}
label_41:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_42;
	}
	{
	LINE_NUMBER(464);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(465);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_rotationDiff = temp1;
	LINE_NUMBER(466);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_46;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_rotationDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_rotationDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_rotation));
	}
label_46:;
	{
	LINE_NUMBER(467);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_rotation;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_rotationDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (jfloat(0)));
	frame[9].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(468);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned) == 0) goto label_48;
	}
	{
	frame[9].f = ((frame[9].f) + (frame[6].f));
	}
label_48:;
	{
	LINE_NUMBER(469);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float])(ctx, (frame[3].o), (frame[9].f));
	}
label_42:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_49;
	}
	{
	LINE_NUMBER(473);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_wind = temp0;
	LINE_NUMBER(474);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_windDiff = temp1;
	LINE_NUMBER(475);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_49;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_windDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_windDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_wind));
	}
label_49:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_53;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_gravity = temp0;
	LINE_NUMBER(480);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_gravityDiff = temp1;
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_53;
	}
	{
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_gravityDiff = (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_gravityDiff) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_gravity));
	}
label_53:;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_tint;
	frame[9].o = sp[0].o;
	LINE_NUMBER(485);
	if ((frame[9].o) != nullptr) goto label_58;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	frame[9].o = sp[1].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_tint = (jref) sp[1].o;
	}
label_58:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float])(ctx, sp[0].o, (jfloat(0)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(487);
	ARRAY_ACCESS(jfloat, (frame[9].o), (jint(0))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (jint(0))));
	LINE_NUMBER(488);
	ARRAY_ACCESS(jfloat, (frame[9].o), (jint(1))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (jint(1))));
	LINE_NUMBER(489);
	ARRAY_ACCESS(jfloat, (frame[9].o), (jint(2))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (jint(2))));
	LINE_NUMBER(491);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_transparency = temp0;
	LINE_NUMBER(492);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_transparencyDiff = (temp1 - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_transparency));
	LINE_NUMBER(495);
	frame[11].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(496);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_66;
	}
	{
	jfloat temp0 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float])(ctx, sp[0].o);
	frame[11].f = (temp0 + temp1);
	}
label_66:;
	{
	LINE_NUMBER(497);
	frame[12].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(498);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_68;
	}
	{
	jfloat temp0 = frame[12].f;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_newLowValue_R_float])(ctx, sp[0].o);
	frame[12].f = (temp0 + temp1);
	}
label_68:;
	{
	LINE_NUMBER(499);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnShape;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[1].o))->F_shape;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_69;
		case 2: goto label_70;
		case 3: goto label_71;
		default: goto label_72;
	}
	}
label_69:;
	{
	LINE_NUMBER(501);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidth;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[13].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(502);
	jfloat temp3 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeight;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[14].f = (temp3 + (temp4 * temp5));
	LINE_NUMBER(503);
	jfloat temp6 = frame[11].f;
	jfloat temp7 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (frame[13].f));
	frame[11].f = (temp6 + (temp7 - ((frame[13].f) * (jfloat(0.5f)))));
	LINE_NUMBER(504);
	jfloat temp8 = frame[12].f;
	jfloat temp9 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (frame[14].f));
	frame[12].f = (temp8 + (temp9 - ((frame[14].f) * (jfloat(0.5f)))));
	LINE_NUMBER(505);
	goto label_72;
	}
label_70:;
	{
	LINE_NUMBER(508);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidth;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[13].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(509);
	jfloat temp3 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeight;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[14].f = (temp3 + (temp4 * temp5));
	LINE_NUMBER(510);
	frame[15].f = ((frame[13].f) * (jfloat(0.5f)));
	LINE_NUMBER(511);
	frame[16].f = ((frame[14].f) * (jfloat(0.5f)));
	LINE_NUMBER(512);
	if ((floatCompare((frame[15].f), (jfloat(0)), -1)) == 0) goto label_72;
	}
	{
	if ((floatCompare((frame[16].f), (jfloat(0)), -1)) != 0) goto label_81;
	}
	goto label_72;
label_81:;
	{
	LINE_NUMBER(513);
	frame[17].f = ((frame[15].f) / (frame[16].f));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[0].o))->F_edges) == 0) goto label_83;
	}
	{
	LINE_NUMBER(516);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpawnEllipseSide;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue *) NULL_CHECK(sp[1].o))->F_side;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_85;
		case 2: goto label_86;
		default: goto label_87;
	}
	}
label_85:;
	{
	LINE_NUMBER(518);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (jfloat(179.0f)));
	frame[18].f = (-temp0);
	LINE_NUMBER(519);
	goto label_89;
	}
label_86:;
	{
	LINE_NUMBER(521);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (jfloat(179.0f)));
	frame[18].f = temp0;
	LINE_NUMBER(522);
	goto label_89;
	}
label_87:;
	{
	LINE_NUMBER(524);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (jfloat(360.0f)));
	frame[18].f = temp0;
	}
label_89:;
	{
	LINE_NUMBER(527);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[18].f));
	frame[19].f = temp0;
	LINE_NUMBER(528);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[18].f));
	frame[20].f = temp1;
	LINE_NUMBER(529);
	frame[11].f = ((frame[11].f) + ((frame[19].f) * (frame[15].f)));
	LINE_NUMBER(530);
	frame[12].f = ((frame[12].f) + (((frame[20].f) * (frame[15].f)) / (frame[17].f)));
	LINE_NUMBER(531);
	if (((frame[5].i) & (jint(2))) != 0) goto label_95;
	}
	{
	LINE_NUMBER(532);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angle = (frame[18].f);
	LINE_NUMBER(533);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angleCos = (frame[19].f);
	LINE_NUMBER(534);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_angleSin = (frame[20].f);
	}
label_95:;
	LINE_NUMBER(536);
	goto label_72;
label_83:;
	{
	LINE_NUMBER(537);
	frame[18].f = ((frame[15].f) * (frame[15].f));
	}
label_99:;
	{
	LINE_NUMBER(539);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (frame[13].f));
	frame[19].f = (temp0 - (frame[15].f));
	LINE_NUMBER(540);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_float_R_float(ctx, (frame[13].f));
	frame[20].f = (temp1 - (frame[15].f));
	LINE_NUMBER(541);
	if ((floatCompare((((frame[19].f) * (frame[19].f)) + ((frame[20].f) * (frame[20].f))), (frame[18].f), 1)) > 0) goto label_102;
	}
	{
	LINE_NUMBER(542);
	frame[11].f = ((frame[11].f) + (frame[19].f));
	LINE_NUMBER(543);
	frame[12].f = ((frame[12].f) + ((frame[20].f) / (frame[17].f)));
	LINE_NUMBER(544);
	goto label_106;
	}
label_102:;
	LINE_NUMBER(546);
	goto label_99;
label_106:;
	LINE_NUMBER(548);
	goto label_72;
label_71:;
	{
	LINE_NUMBER(551);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidth;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[13].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(552);
	jfloat temp3 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeight;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[14].f = (temp3 + (temp4 * temp5));
	LINE_NUMBER(553);
	if ((floatCompare((frame[13].f), (jfloat(0)), -1)) == 0) goto label_109;
	}
	{
	LINE_NUMBER(554);
	jfloat temp0 = frame[13].f;
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[15].f = (temp0 * temp1);
	LINE_NUMBER(555);
	frame[11].f = ((frame[11].f) + (frame[15].f));
	LINE_NUMBER(556);
	frame[12].f = ((frame[12].f) + ((frame[15].f) * ((frame[14].f) / (frame[13].f))));
	LINE_NUMBER(557);
	goto label_72;
	}
label_109:;
	{
	LINE_NUMBER(558);
	jfloat temp0 = frame[12].f;
	jfloat temp1 = frame[14].f;
	jfloat temp2 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_random_R_float(ctx);
	frame[12].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(559);
	goto label_72;
	}
label_72:;
	{
	LINE_NUMBER(563);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setBounds_float_float_float_float])(ctx, (frame[3].o), ((frame[11].f) - ((frame[7].f) * (jfloat(0.5f)))), ((frame[12].f) - ((frame[8].f) * (jfloat(0.5f)))), (frame[7].f), (frame[8].f));
	LINE_NUMBER(565);
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffset));
	jfloat temp1 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetDiff));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[13].i = (jint((temp0 + (temp1 * temp2))));
	LINE_NUMBER(566);
	if ((frame[13].i) <= 0) goto label_117;
	}
	{
	LINE_NUMBER(567);
	if ((frame[13].i) < ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_currentLife)) goto label_119;
	}
	{
	frame[13].i = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[3].o)))->F_currentLife) - (jint(1)));
	}
label_119:;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean(ctx, (frame[0].o), (frame[3].o), ((jfloat((frame[13].i))) / (jfloat(1000.0f))), (frame[13].i));
	}
label_117:;
	LINE_NUMBER(570);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:updateParticle", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(573);
	frame[4].i = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_currentLife) - (frame[3].i));
	LINE_NUMBER(574);
	if ((frame[4].i) > 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(575);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_currentLife = (frame[4].i);
	LINE_NUMBER(577);
	frame[5].f = ((jfloat(1)) - ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_currentLife))) / (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_life)))));
	LINE_NUMBER(578);
	frame[6].i = ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_updateFlags);
	LINE_NUMBER(580);
	if (((frame[6].i) & (jint(1))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_8;
	}
	{
	LINE_NUMBER(582);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_xScale;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_xScaleDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, (frame[5].f));
	jfloat temp3 = temp0 + (temp1 * temp2);
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_yScale;
	jfloat temp5 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_yScaleDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	jfloat temp6 = frame[5].f;
	LINE_NUMBER(583);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, temp6);
	jfloat temp8 = temp4 + (temp5 * temp7);
	LINE_NUMBER(582);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float_float])(ctx, sp[0].o, temp3, temp8);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(585);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_xScale;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_xScaleDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, (frame[5].f));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setScale_float])(ctx, sp[0].o, (temp0 + (temp1 * temp2)));
	}
label_6:;
	{
	LINE_NUMBER(589);
	if (((frame[6].i) & (8)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(590);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_velocity;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_velocityDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[7].f = ((temp0 + (temp1 * temp2)) * (frame[2].f));
	LINE_NUMBER(593);
	if (((frame[6].i) & (jint(2))) == 0) goto label_15;
	}
	{
	LINE_NUMBER(594);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_angle;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_angleDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[10].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(595);
	jfloat temp3 = frame[7].f;
	jfloat temp4 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_cosDeg_float_R_float(ctx, (frame[10].f));
	frame[8].f = (temp3 * temp4);
	LINE_NUMBER(596);
	jfloat temp5 = frame[7].f;
	jfloat temp6 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_sinDeg_float_R_float(ctx, (frame[10].f));
	frame[9].f = (temp5 * temp6);
	LINE_NUMBER(597);
	if (((frame[6].i) & (jint(4))) == 0) goto label_20;
	}
	{
	LINE_NUMBER(598);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_rotationDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[11].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(599);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned) == 0) goto label_23;
	}
	{
	frame[11].f = ((frame[11].f) + (frame[10].f));
	}
label_23:;
	{
	LINE_NUMBER(600);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float])(ctx, (frame[1].o), (frame[11].f));
	}
label_20:;
	LINE_NUMBER(602);
	goto label_24;
label_15:;
	{
	LINE_NUMBER(603);
	frame[8].f = ((frame[7].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_angleCos));
	LINE_NUMBER(604);
	frame[9].f = ((frame[7].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_angleSin));
	LINE_NUMBER(605);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned) != 0) goto label_27;
	}
	{
	if (((frame[6].i) & (jint(4))) == 0) goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(606);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_rotationDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[10].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(607);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned) == 0) goto label_29;
	}
	{
	frame[10].f = ((frame[10].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_angle));
	}
label_29:;
	{
	LINE_NUMBER(608);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float])(ctx, (frame[1].o), (frame[10].f));
	}
label_24:;
	{
	LINE_NUMBER(612);
	if (((frame[6].i) & (16)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(613);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_wind;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_windDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[8].f = (temp0 + ((temp1 + (temp2 * temp3)) * (frame[2].f)));
	}
label_30:;
	{
	LINE_NUMBER(615);
	if (((frame[6].i) & (32)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(616);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_gravity;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_gravityDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[9].f = (temp0 + ((temp1 + (temp2 * temp3)) * (frame[2].f)));
	}
label_32:;
	{
	LINE_NUMBER(618);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_translate_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_translate_float_float])(ctx, (frame[1].o), (frame[8].f), (frame[9].f));
	LINE_NUMBER(619);
	goto label_35;
	}
label_12:;
	{
	LINE_NUMBER(620);
	if (((frame[6].i) & (jint(4))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_rotationDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, (frame[5].f));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRotation_float])(ctx, sp[0].o, (temp0 + (temp1 * temp2)));
	}
label_35:;
	{
	LINE_NUMBER(625);
	if (((frame[6].i) & (64)) == 0) goto label_37;
	}
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_getColor_float_R_Array1_float])(ctx, sp[0].o, (frame[5].f));
	frame[7].o = sp[0].o;
	goto label_40;
	}
label_37:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_tint;
	frame[7].o = sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(630);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha) == 0) goto label_41;
	}
	{
	LINE_NUMBER(631);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive) == 0) goto label_43;
	}
	INST_FCONST(0);
	goto label_44;
label_43:;
	INST_FCONST(1);
label_44:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(632);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_transparency;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_transparencyDiff;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[9].f = (temp0 + (temp1 * temp2));
	LINE_NUMBER(633);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setColor_float_float_float_float])(ctx, (frame[1].o), (((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (jint(0)))) * (frame[9].f)), (((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (jint(1)))) * (frame[9].f)), (((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (jint(2)))) * (frame[9].f)), ((frame[9].f) * (frame[8].f)));
	LINE_NUMBER(634);
	goto label_48;
	}
label_41:;
	{
	LINE_NUMBER(635);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (jint(0)));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (jint(1)));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (jint(2)));
	jfloat temp3 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_transparency;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_transparencyDiff;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	jfloat temp5 = frame[5].f;
	LINE_NUMBER(636);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getScale_float_R_float])(ctx, sp[1].o, temp5);
	jfloat temp7 = temp3 + (temp4 * temp6);
	LINE_NUMBER(635);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setColor_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setColor_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2, temp7);
	}
label_48:;
	{
	LINE_NUMBER(639);
	if (((frame[6].i) & (128)) == 0) goto label_51;
	}
	{
	LINE_NUMBER(640);
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	jint temp1 = jint((temp0 * (jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)))));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))));
	frame[8].i = temp2;
	LINE_NUMBER(641);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_frame) == (frame[8].i)) goto label_51;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[8].i));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(643);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_getWidth_R_float])(ctx, (frame[1].o));
	frame[10].f = temp0;
	LINE_NUMBER(644);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_getHeight_R_float])(ctx, (frame[1].o));
	frame[11].f = temp1;
	LINE_NUMBER(645);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[1].o), (frame[9].o));
	LINE_NUMBER(646);
	sp[0].o = frame[1].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float])(ctx, (frame[9].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float])(ctx, (frame[9].o));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setSize_float_float])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(647);
	sp[0].o = frame[1].o;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float])(ctx, (frame[9].o));
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float])(ctx, (frame[9].o));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setOrigin_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setOrigin_float_float])(ctx, sp[0].o, temp4, temp5);
	LINE_NUMBER(648);
	sp[0].o = frame[1].o;
	jfloat temp6 = frame[10].f;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float])(ctx, (frame[9].o));
	jfloat temp8 = (temp6 - temp7) * (jfloat(0.5f));
	jfloat temp9 = frame[11].f;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float])(ctx, (frame[9].o));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_translate_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_translate_float_float])(ctx, sp[0].o, temp8, ((temp9 - temp10) * (jfloat(0.5f))));
	LINE_NUMBER(649);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[1].o)))->F_frame = (frame[8].i);
	}
label_51:;
	{
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeValues(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:generateLifeValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newLowValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_life = (jint(temp0));
	LINE_NUMBER(658);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeDiff = (jint(temp1));
	LINE_NUMBER(659);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeDiff = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeDiff) - ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_life));
	}
label_3:;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeOffsetValues(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:generateLifeOffsetValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(663);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	sp += 1;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue *) NULL_CHECK(sp[0].o))->F_active) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newLowValue_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newLowValue_R_float])(ctx, sp[0].o);
	jint temp1 = jint(temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffset = sp[1].i;
	LINE_NUMBER(664);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newHighValue_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_newHighValue_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffsetDiff = (jint(temp0));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue *) NULL_CHECK(sp[0].o))->F_relative) != 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffsetDiff = (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_lifeOffsetDiff) - ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffset));
	}
label_5:;
	LINE_NUMBER(666);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setPosition", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(669);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_attached) == 0) goto label_1;
	}
	{
	LINE_NUMBER(670);
	frame[3].f = ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(671);
	frame[4].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[5].o = sp[0].o;
	LINE_NUMBER(673);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_1;
	}
	{
	LINE_NUMBER(674);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (frame[6].i))) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_translate_float_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_translate_float_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))), (frame[3].f), (frame[4].f));
	}
label_9:;
	{
	LINE_NUMBER(673);
	INST_IINC(6, 1);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(676);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(677);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setSprites", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(681);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites = (jref) (frame[1].o);
	LINE_NUMBER(682);
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(683);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(685);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(686);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(687);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$ParticleEmitter$SpriteMode;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spriteMode;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_10;
		case 2: goto label_11;
		case 3: goto label_12;
		default: goto label_13;
	}
	}
label_10:;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(690);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_random_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_random_R_java_lang_Object])(ctx, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(693);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(695);
	frame[6].f = ((jfloat(1)) - ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[4].o)))->F_currentLife))) / (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[4].o)))->F_life)))));
	LINE_NUMBER(696);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint(((frame[6].f) * (jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)))))), (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK(sp[0].o))->F_frame = temp0;
	LINE_NUMBER(697);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle *) NULL_CHECK((frame[4].o)))->F_frame));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	}
label_13:;
	{
	LINE_NUMBER(700);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(701);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float])(ctx, (frame[5].o));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setOrigin_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_setOrigin_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(683);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(703);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSpriteMode_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setSpriteMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(706);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spriteMode = (jref) (frame[1].o);
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_preAllocateParticles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:preAllocateParticles", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(713);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ParticleEmitter.setSprites() must have been called before preAllocateParticles()"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(714);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(716);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	jint temp0 = frame[1].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle])(ctx, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[2].o)));
	frame[2].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(718);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_flip_boolean_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_flip_boolean_boolean])(ctx, (frame[2].o), ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_flipX), ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_flipY));
	}
label_7:;
	{
	LINE_NUMBER(714);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_allowCompletion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:allowCompletion", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_allowCompletion = (jint(1));
	LINE_NUMBER(727);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer = ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration);
	LINE_NUMBER(728);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAllowCompletion_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getAllowCompletion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_allowCompletion);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSprites_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getSprites", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_sprites;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpriteMode_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getSpriteMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spriteMode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(747);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(748);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLife_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getLife", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(751);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getXScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getYScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getRotation_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTint_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getTint", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getVelocity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getVelocity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getWind_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getWind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getGravity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getGravity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAngle_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getAngle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getEmission_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getEmission", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTransparency_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getTransparency", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDuration_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getDuration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(795);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDelay_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getDelay", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLifeOffset_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getLifeOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getXOffsetValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getYOffsetValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(811);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnWidth_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getSpawnWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(815);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnHeight_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getSpawnHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getSpawnShape", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAttached_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isAttached", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(827);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_attached);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAttached_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setAttached", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(831);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_attached = (frame[1].i);
	LINE_NUMBER(832);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isContinuous_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isContinuous", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setContinuous_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setContinuous", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(839);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous = (frame[1].i);
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAligned_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isAligned", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(843);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAligned_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setAligned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(847);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned = (frame[1].i);
	LINE_NUMBER(848);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAdditive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isAdditive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAdditive_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setAdditive", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(855);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive = (frame[1].i);
	LINE_NUMBER(856);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_cleansUpBlendFunction_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:cleansUpBlendFunction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(861);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setCleansUpBlendFunction_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setCleansUpBlendFunction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(873);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_cleansUpBlendFunction = (frame[1].i);
	LINE_NUMBER(874);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isBehind_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isBehind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(877);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_behind);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setBehind_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setBehind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(881);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_behind = (frame[1].i);
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isPremultipliedAlpha_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isPremultipliedAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(885);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPremultipliedAlpha_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setPremultipliedAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(889);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha = (frame[1].i);
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMinParticleCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getMinParticleCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMinParticleCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setMinParticleCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(897);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount = (frame[1].i);
	LINE_NUMBER(898);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMaxParticleCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getMaxParticleCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(901);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:isComplete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(905);
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous) == 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_allowCompletion) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(906);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delay), 1)) >= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(907);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration), -1)) < 0) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getPercentComplete_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getPercentComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(911);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayTimer), ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delay), 1)) >= 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(912);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(1)), (((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationTimer) / ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_duration)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(916);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(920);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getActiveCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getActiveCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(924);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_activeCount);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getImagePaths", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(928);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setImagePaths_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setImagePaths", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(932);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_imagePaths = (jref) (frame[1].o);
	LINE_NUMBER(933);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setFlip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:setFlip", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(936);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_flipX = (frame[1].i);
	LINE_NUMBER(937);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_flipY = (frame[2].i);
	LINE_NUMBER(938);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	if (sp[0].o != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(939);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(941);
	if ((frame[5].o) == nullptr) goto label_9;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_flip_boolean_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_flip_boolean_boolean])(ctx, (frame[5].o), (frame[1].i), (frame[2].i));
	}
label_9:;
	{
	LINE_NUMBER(939);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(943);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_flipY(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:flipY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(946);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float])(ctx, sp[1].o);
	jfloat temp1 = -temp0;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(947);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float])(ctx, sp[1].o);
	jfloat temp4 = -temp3;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float])(ctx, sp[0].o, temp4, (-temp5));
	LINE_NUMBER(949);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float])(ctx, sp[1].o);
	jfloat temp7 = -temp6;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float])(ctx, sp[0].o, temp7, (-temp8));
	LINE_NUMBER(950);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float])(ctx, sp[1].o);
	jfloat temp10 = -temp9;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	jfloat temp11 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float])(ctx, sp[0].o, temp10, (-temp11));
	LINE_NUMBER(952);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp12 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float])(ctx, sp[1].o);
	jfloat temp13 = -temp12;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp14 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float])(ctx, sp[0].o, temp13, (-temp14));
	LINE_NUMBER(953);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp15 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float])(ctx, sp[1].o);
	jfloat temp16 = -temp15;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	jfloat temp17 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float])(ctx, sp[0].o, temp16, (-temp17));
	LINE_NUMBER(955);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp18 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMin_R_float])(ctx, sp[1].o);
	jfloat temp19 = -temp18;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp20 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getHighMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setHigh_float_float])(ctx, sp[0].o, temp19, (-temp20));
	LINE_NUMBER(956);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp21 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMin_R_float])(ctx, sp[1].o);
	jfloat temp22 = -temp21;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	jfloat temp23 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_getLowMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setLow_float_float])(ctx, sp[0].o, temp22, (-temp23));
	LINE_NUMBER(958);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	jfloat temp24 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMin_R_float])(ctx, sp[1].o);
	jfloat temp25 = -temp24;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	jfloat temp26 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_getLowMax_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_setLow_float_float])(ctx, sp[0].o, temp25, (-temp26));
	LINE_NUMBER(959);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getBoundingBox", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_bounds;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[1].o = sp[0].o;
	LINE_NUMBER(966);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_active;
	frame[2].o = sp[0].o;
	LINE_NUMBER(967);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[3].o = sp[0].o;
	LINE_NUMBER(969);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[3].o));
	LINE_NUMBER(970);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(971);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(972);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(973);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[3].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_y), (jfloat(0)));
	LINE_NUMBER(974);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[3].o), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_width)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_height)), (jfloat(0)));
	}
label_10:;
	{
	LINE_NUMBER(970);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(977);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getXSizeValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(981);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xSizeValues;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(982);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, (jint(3)));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_xSizeValues = (jref) sp[1].o;
	LINE_NUMBER(983);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xSizeValues;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(984);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xSizeValues;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(985);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xSizeValues;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xSizeValues;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getYSizeValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_ySizeValues;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(992);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, (jint(3)));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_ySizeValues = (jref) sp[1].o;
	LINE_NUMBER(993);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_ySizeValues;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(994);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_ySizeValues;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(995);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_ySizeValues;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_ySizeValues;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:getMotionValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1001);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_motionValues;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1002);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, (jint(3)));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_motionValues = (jref) sp[1].o;
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_motionValues;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_motionValues;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_motionValues;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_motionValues;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:scaleSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1012);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1013);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(1014);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:scaleSize", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1018);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1020);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float])(ctx, (frame[6].o), (frame[1].f));
	LINE_NUMBER(1019);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1022);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float])(ctx, (frame[6].o), (frame[2].f));
	LINE_NUMBER(1021);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(1023);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleMotion_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:scaleMotion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1027);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1029);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_scale_float])(ctx, (frame[5].o), (frame[1].f));
	LINE_NUMBER(1028);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1030);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:matchSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1034);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchXSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchXSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1035);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchYSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchYSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchXSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:matchXSize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1042);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1043);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(1042);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1045);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchYSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:matchYSize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1051);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1052);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(1051);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1054);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchMotion_com_badlogic_gdx_graphics_g2d_ParticleEmitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:matchMotion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1060);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(1061);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_set_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(1060);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1063);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_save_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:save", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1066);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1067);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Delay -\n"_j))));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1069);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Duration - \n"_j))));
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1071);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Count - \n"_j))));
	LINE_NUMBER(1072);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"min: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1073);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"max: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1074);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Emission - \n"_j))));
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1076);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Life - \n"_j))));
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1078);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Life Offset - \n"_j))));
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1080);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- X Offset - \n"_j))));
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1082);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Y Offset - \n"_j))));
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1084);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Spawn Shape - \n"_j))));
	LINE_NUMBER(1085);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1086);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Spawn Width - \n"_j))));
	LINE_NUMBER(1087);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1088);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Spawn Height - \n"_j))));
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1090);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- X Scale - \n"_j))));
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1092);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Y Scale - \n"_j))));
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1094);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Velocity - \n"_j))));
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1096);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Angle - \n"_j))));
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1098);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Rotation - \n"_j))));
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1100);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Wind - \n"_j))));
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1102);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Gravity - \n"_j))));
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1104);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Tint - \n"_j))));
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1106);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Transparency - \n"_j))));
	LINE_NUMBER(1107);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_save_java_io_Writer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1108);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Options - \n"_j))));
	LINE_NUMBER(1109);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"attached: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_attached));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1110);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"continuous: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_continuous));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1111);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"aligned: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_aligned));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1112);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"additive: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_additive));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1113);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"behind: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_behind));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1114);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"premultipliedAlpha: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_premultipliedAlpha));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1115);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"spriteMode: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spriteMode;
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1116);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"- Image Paths -\n"_j))));
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_52:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(1118);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1119);
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(1120);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(1121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_load_java_io_BufferedReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_delayValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_durationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1130);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1131);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"minParticleCount"_j))));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMinParticleCount_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMinParticleCount_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1132);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"maxParticleCount"_j))));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_emissionValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_lifeOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yOffsetValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1144);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnShapeValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnWidthValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1147);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_spawnHeightValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1150);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"- Scale -"_j))));
	if (temp2 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1152);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setActive_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_setActive_boolean])(ctx, sp[0].o, (jint(0)));
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_xScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1155);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1156);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_yScaleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	}
label_32:;
	{
	LINE_NUMBER(1158);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_velocityValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1160);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_angleValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_rotationValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1165);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_windValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1166);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1167);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_gravityValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1168);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1169);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_tintValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1171);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_transparencyValue;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue_load_java_io_BufferedReader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	LINE_NUMBER(1173);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"attached"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_attached = temp0;
	LINE_NUMBER(1174);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"continuous"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_continuous = temp1;
	LINE_NUMBER(1175);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"aligned"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_aligned = temp2;
	LINE_NUMBER(1176);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"additive"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_additive = temp3;
	LINE_NUMBER(1177);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"behind"_j))));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_behind = temp4;
	LINE_NUMBER(1180);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1181);
	jint temp5 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"premultipliedAlpha"_j))));
	if (temp5 == 0) goto label_56;
	}
	{
	LINE_NUMBER(1182);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_lang_String_R_boolean(ctx, (frame[2].o));
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_premultipliedAlpha = temp0;
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(1185);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"spriteMode"_j))));
	if (temp0 == 0) goto label_59;
	}
	{
	LINE_NUMBER(1186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_lang_String_R_java_lang_String(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK(sp[0].o))->F_spriteMode = (jref) sp[1].o;
	LINE_NUMBER(1187);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(1190);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(1191);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_63;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_63;
	}
	{
	LINE_NUMBER(1192);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(1194);
	((func_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setImagePaths_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setImagePaths_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1198);
	goto label_65;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1195);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_67;
	}
	INST_ALOAD(2);
	INST_ATHROW();
	label_67:;
	{
	LINE_NUMBER(1197);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error parsing emitter: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_ParticleEmitter *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_65:;
	LINE_NUMBER(1199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:readString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1202);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:readString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1207);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Missing value: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_lang_String_R_java_lang_String(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:readBoolean", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1212);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:readBoolean", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1216);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)SM_java_lang_Boolean_parseBoolean_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:readInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1220);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/ParticleEmitter:readFloat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1224);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_initialize,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_update_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getParticles_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_activateParticle_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeValues,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeOffsetValues,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSpriteMode_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_preAllocateParticles,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_allowCompletion,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAllowCompletion_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSprites_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpriteMode_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLife_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getRotation_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTint_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getVelocity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getWind_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getGravity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAngle_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getEmission_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTransparency_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDuration_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDelay_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLifeOffset_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnWidth_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnHeight_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAttached_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAttached_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isContinuous_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setContinuous_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAligned_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAligned_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAdditive_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAdditive_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_cleansUpBlendFunction_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setCleansUpBlendFunction_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isBehind_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setBehind_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isPremultipliedAlpha_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPremultipliedAlpha_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMinParticleCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMinParticleCount_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMaxParticleCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getPercentComplete_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getActiveCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setImagePaths_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setFlip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_flipY,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleMotion_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchXSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchYSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchMotion_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_save_java_io_Writer,
	(void *) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_load_java_io_BufferedReader,
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
	{ "initialize", "()V" },
	{ "setMaxParticleCount", "(I)V" },
	{ "addParticle", "()V" },
	{ "addParticles", "(I)V" },
	{ "update", "(F)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "start", "()V" },
	{ "reset", "()V" },
	{ "reset", "(Z)V" },
	{ "restart", "()V" },
	{ "newParticle", "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;" },
	{ "getParticles", "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;" },
	{ "activateParticle", "(I)V" },
	{ "updateParticle", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;FI)Z" },
	{ "generateLifeValues", "()V" },
	{ "generateLifeOffsetValues", "()V" },
	{ "setPosition", "(FF)V" },
	{ "setSprites", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "setSpriteMode", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;)V" },
	{ "preAllocateParticles", "()V" },
	{ "allowCompletion", "()V" },
	{ "getAllowCompletion", "()Z" },
	{ "getSprites", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getSpriteMode", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getLife", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getXScale", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getYScale", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getRotation", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getTint", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue;" },
	{ "getVelocity", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getWind", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getGravity", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getAngle", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getEmission", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getTransparency", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getDuration", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "getDelay", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "getLifeOffset", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getXOffsetValue", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "getYOffsetValue", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "getSpawnWidth", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getSpawnHeight", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;" },
	{ "getSpawnShape", "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue;" },
	{ "isAttached", "()Z" },
	{ "setAttached", "(Z)V" },
	{ "isContinuous", "()Z" },
	{ "setContinuous", "(Z)V" },
	{ "isAligned", "()Z" },
	{ "setAligned", "(Z)V" },
	{ "isAdditive", "()Z" },
	{ "setAdditive", "(Z)V" },
	{ "cleansUpBlendFunction", "()Z" },
	{ "setCleansUpBlendFunction", "(Z)V" },
	{ "isBehind", "()Z" },
	{ "setBehind", "(Z)V" },
	{ "isPremultipliedAlpha", "()Z" },
	{ "setPremultipliedAlpha", "(Z)V" },
	{ "getMinParticleCount", "()I" },
	{ "setMinParticleCount", "(I)V" },
	{ "getMaxParticleCount", "()I" },
	{ "isComplete", "()Z" },
	{ "getPercentComplete", "()F" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getActiveCount", "()I" },
	{ "getImagePaths", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "setImagePaths", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "setFlip", "(ZZ)V" },
	{ "flipY", "()V" },
	{ "getBoundingBox", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "getXSizeValues", "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "getYSizeValues", "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "getMotionValues", "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;" },
	{ "scaleSize", "(F)V" },
	{ "scaleSize", "(FF)V" },
	{ "scaleMotion", "(F)V" },
	{ "matchSize", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V" },
	{ "matchXSize", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V" },
	{ "matchYSize", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V" },
	{ "matchMotion", "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V" },
	{ "save", "(Ljava/io/Writer;)V" },
	{ "load", "(Ljava/io/BufferedReader;)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShape,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnEllipseSide,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$NumericValue,
	&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ParticleValue,
};

static FieldMetadata fields[] {
	{ "UPDATE_SCALE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_SCALE, "I", 26 },
	{ "UPDATE_ANGLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_ANGLE, "I", 26 },
	{ "UPDATE_ROTATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_ROTATION, "I", 26 },
	{ "UPDATE_VELOCITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_VELOCITY, "I", 26 },
	{ "UPDATE_WIND", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_WIND, "I", 26 },
	{ "UPDATE_GRAVITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_GRAVITY, "I", 26 },
	{ "UPDATE_TINT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_TINT, "I", 26 },
	{ "UPDATE_SPRITE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_ParticleEmitter_UPDATE_SPRITE, "I", 26 },
	{ "delayValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_delayValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "lifeOffsetValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_lifeOffsetValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue;", 2 },
	{ "durationValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_durationValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "lifeValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$IndependentScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_lifeValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$IndependentScaledNumericValue;", 2 },
	{ "emissionValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_emissionValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "xScaleValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_xScaleValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "yScaleValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_yScaleValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "rotationValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_rotationValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "velocityValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_velocityValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "angleValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_angleValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "windValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_windValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "gravityValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_gravityValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "transparencyValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_transparencyValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "tintValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_tintValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue;", 2 },
	{ "xOffsetValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_xOffsetValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "yOffsetValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_yOffsetValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "spawnWidthValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnWidthValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "spawnHeightValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnHeightValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 2 },
	{ "spawnShapeValue", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnShapeValue), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue;", 2 },
	{ "xSizeValues", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_xSizeValues), "[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "ySizeValues", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_ySizeValues), "[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "motionValues", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_motionValues), "[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 2 },
	{ "accumulator", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_accumulator), "F", 2 },
	{ "sprites", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_sprites), "Lcom/badlogic/gdx/utils/Array;", 2 },
	{ "spriteMode", &class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spriteMode), "Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 2 },
	{ "particles", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_particles), "[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;", 2 },
	{ "minParticleCount", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_minParticleCount), "I", 2 },
	{ "maxParticleCount", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_maxParticleCount), "I", 2 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_x), "F", 2 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_y), "F", 2 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_name), "Ljava/lang/String;", 2 },
	{ "imagePaths", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_imagePaths), "Lcom/badlogic/gdx/utils/Array;", 2 },
	{ "activeCount", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_activeCount), "I", 2 },
	{ "active", getArrayClass(&class_boolean, 1), offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_active), "[Z", 2 },
	{ "firstUpdate", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_firstUpdate), "Z", 2 },
	{ "flipX", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_flipX), "Z", 2 },
	{ "flipY", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_flipY), "Z", 2 },
	{ "updateFlags", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_updateFlags), "I", 2 },
	{ "allowCompletion", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_allowCompletion), "Z", 2 },
	{ "bounds", &class_com_badlogic_gdx_math_collision_BoundingBox, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_bounds), "Lcom/badlogic/gdx/math/collision/BoundingBox;", 2 },
	{ "emission", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_emission), "I", 2 },
	{ "emissionDiff", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_emissionDiff), "I", 2 },
	{ "emissionDelta", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_emissionDelta), "I", 2 },
	{ "lifeOffset", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_lifeOffset), "I", 2 },
	{ "lifeOffsetDiff", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_lifeOffsetDiff), "I", 2 },
	{ "life", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_life), "I", 2 },
	{ "lifeDiff", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_lifeDiff), "I", 2 },
	{ "spawnWidth", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnWidth), "F", 2 },
	{ "spawnWidthDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnWidthDiff), "F", 2 },
	{ "spawnHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnHeight), "F", 2 },
	{ "spawnHeightDiff", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_spawnHeightDiff), "F", 2 },
	{ "duration", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_duration), "F", 1 },
	{ "durationTimer", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_durationTimer), "F", 1 },
	{ "delay", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_delay), "F", 2 },
	{ "delayTimer", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_delayTimer), "F", 2 },
	{ "attached", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_attached), "Z", 2 },
	{ "continuous", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_continuous), "Z", 2 },
	{ "aligned", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_aligned), "Z", 2 },
	{ "behind", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_behind), "Z", 2 },
	{ "additive", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_additive), "Z", 2 },
	{ "premultipliedAlpha", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_premultipliedAlpha), "Z", 2 },
	{ "cleansUpBlendFunction", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_ParticleEmitter, F_cleansUpBlendFunction), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter_java_io_BufferedReader, 0, "(Ljava/io/BufferedReader;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_ParticleEmitter_com_badlogic_gdx_graphics_g2d_ParticleEmitter, 0, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V", 1 },
	{ "initialize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_initialize, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_initialize, "()V", 2 },
	{ "setMaxParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMaxParticleCount_int, "(I)V", 1 },
	{ "addParticle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticle, "()V", 1 },
	{ "addParticles", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_addParticles_int, "(I)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_update_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_update_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch, "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "start", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_start, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_reset_boolean, "(Z)V", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_restart, "()V", 2 },
	{ "newParticle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_newParticle_com_badlogic_gdx_graphics_g2d_Sprite_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;", 4 },
	{ "getParticles", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getParticles_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getParticles_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle, "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;", 4 },
	{ "activateParticle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_activateParticle_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_activateParticle_int, "(I)V", 2 },
	{ "updateParticle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_updateParticle_com_badlogic_gdx_graphics_g2d_ParticleEmitter$Particle_float_int_R_boolean, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$Particle;FI)Z", 2 },
	{ "generateLifeValues", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeValues, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeValues, "()V", 2 },
	{ "generateLifeOffsetValues", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeOffsetValues, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_generateLifeOffsetValues, "()V", 2 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPosition_float_float, "(FF)V", 1 },
	{ "setSprites", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSprites_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "setSpriteMode", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSpriteMode_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setSpriteMode_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;)V", 1 },
	{ "preAllocateParticles", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_preAllocateParticles, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_preAllocateParticles, "()V", 1 },
	{ "allowCompletion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_allowCompletion, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_allowCompletion, "()V", 1 },
	{ "getAllowCompletion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAllowCompletion_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAllowCompletion_R_boolean, "()Z", 1 },
	{ "getSprites", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSprites_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSprites_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getSpriteMode", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpriteMode_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpriteMode_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpriteMode, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpriteMode;", 1 },
	{ "getName", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getName_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setName_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getLife", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLife_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLife_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getXScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getYScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYScale_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getRotation", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getRotation_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getRotation_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getTint", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTint_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTint_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$GradientColorValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$GradientColorValue;", 1 },
	{ "getVelocity", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getVelocity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getVelocity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getWind", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getWind_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getWind_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getGravity", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getGravity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getGravity_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getAngle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAngle_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getAngle_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getEmission", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getEmission_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getEmission_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getTransparency", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTransparency_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getTransparency_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getDuration", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDuration_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDuration_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 1 },
	{ "getDelay", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDelay_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getDelay_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 1 },
	{ "getLifeOffset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLifeOffset_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getLifeOffset_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getXOffsetValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 1 },
	{ "getYOffsetValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYOffsetValue_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 1 },
	{ "getSpawnWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnWidth_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnWidth_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getSpawnHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnHeight_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnHeight_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$ScaledNumericValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$ScaledNumericValue;", 1 },
	{ "getSpawnShape", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getSpawnShape_R_com_badlogic_gdx_graphics_g2d_ParticleEmitter$SpawnShapeValue, "()Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$SpawnShapeValue;", 1 },
	{ "isAttached", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAttached_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAttached_R_boolean, "()Z", 1 },
	{ "setAttached", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAttached_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAttached_boolean, "(Z)V", 1 },
	{ "isContinuous", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isContinuous_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isContinuous_R_boolean, "()Z", 1 },
	{ "setContinuous", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setContinuous_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setContinuous_boolean, "(Z)V", 1 },
	{ "isAligned", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAligned_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAligned_R_boolean, "()Z", 1 },
	{ "setAligned", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAligned_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAligned_boolean, "(Z)V", 1 },
	{ "isAdditive", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAdditive_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isAdditive_R_boolean, "()Z", 1 },
	{ "setAdditive", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAdditive_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setAdditive_boolean, "(Z)V", 1 },
	{ "cleansUpBlendFunction", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_cleansUpBlendFunction_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_cleansUpBlendFunction_R_boolean, "()Z", 1 },
	{ "setCleansUpBlendFunction", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setCleansUpBlendFunction_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setCleansUpBlendFunction_boolean, "(Z)V", 1 },
	{ "isBehind", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isBehind_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isBehind_R_boolean, "()Z", 1 },
	{ "setBehind", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setBehind_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setBehind_boolean, "(Z)V", 1 },
	{ "isPremultipliedAlpha", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isPremultipliedAlpha_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isPremultipliedAlpha_R_boolean, "()Z", 1 },
	{ "setPremultipliedAlpha", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPremultipliedAlpha_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setPremultipliedAlpha_boolean, "(Z)V", 1 },
	{ "getMinParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMinParticleCount_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMinParticleCount_R_int, "()I", 1 },
	{ "setMinParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMinParticleCount_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setMinParticleCount_int, "(I)V", 1 },
	{ "getMaxParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMaxParticleCount_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMaxParticleCount_R_int, "()I", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isComplete_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_isComplete_R_boolean, "()Z", 1 },
	{ "getPercentComplete", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getPercentComplete_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getPercentComplete_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getY_R_float, "()F", 1 },
	{ "getActiveCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getActiveCount_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getActiveCount_R_int, "()I", 1 },
	{ "getImagePaths", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getImagePaths_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "setImagePaths", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setImagePaths_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setImagePaths_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "setFlip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setFlip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_setFlip_boolean_boolean, "(ZZ)V", 1 },
	{ "flipY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_flipY, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_flipY, "()V", 1 },
	{ "getBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "getXSizeValues", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getXSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 4 },
	{ "getYSizeValues", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getYSizeValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 4 },
	{ "getMotionValues", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_getMotionValues_R_Array1_com_badlogic_gdx_graphics_g2d_ParticleEmitter$RangedNumericValue, "()[Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter$RangedNumericValue;", 4 },
	{ "scaleSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float, "(F)V", 1 },
	{ "scaleSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleSize_float_float, "(FF)V", 1 },
	{ "scaleMotion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleMotion_float, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_scaleMotion_float, "(F)V", 1 },
	{ "matchSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V", 1 },
	{ "matchXSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchXSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchXSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V", 1 },
	{ "matchYSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchYSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchYSize_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V", 1 },
	{ "matchMotion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchMotion_com_badlogic_gdx_graphics_g2d_ParticleEmitter, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_matchMotion_com_badlogic_gdx_graphics_g2d_ParticleEmitter, "(Lcom/badlogic/gdx/graphics/g2d/ParticleEmitter;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_save_java_io_Writer, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_save_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_ParticleEmitter_load_java_io_BufferedReader, VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEmitter_load_java_io_BufferedReader, "(Ljava/io/BufferedReader;)V", 1 },
	{ "readString", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "readString", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readString_java_io_BufferedReader_java_lang_String_R_java_lang_String, 0, "(Ljava/io/BufferedReader;Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "readBoolean", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "readBoolean", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readBoolean_java_io_BufferedReader_java_lang_String_R_boolean, 0, "(Ljava/io/BufferedReader;Ljava/lang/String;)Z", 8 },
	{ "readInt", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readInt_java_io_BufferedReader_java_lang_String_R_int, 0, "(Ljava/io/BufferedReader;Ljava/lang/String;)I", 8 },
	{ "readFloat", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_ParticleEmitter_readFloat_java_io_BufferedReader_java_lang_String_R_float, 0, "(Ljava/io/BufferedReader;Ljava/lang/String;)F", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_ParticleEmitter{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/ParticleEmitter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_ParticleEmitter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_ParticleEmitter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 11,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 70,
		.nativeFields = (intptr_t) fields,
		.methodCount = 94,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 96,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_ParticleEmitter = registerClass(&class_com_badlogic_gdx_graphics_g2d_ParticleEmitter);

}

