#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasSprite.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasSprite.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_Sprite(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) object;
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(640);
	init_com_badlogic_gdx_graphics_g2d_Sprite(ctx, (frame[0].o));
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx, sp[1].o, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(642);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetX = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetX);
	LINE_NUMBER(643);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetY = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetY);
	LINE_NUMBER(644);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(645);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float])(ctx, (frame[0].o), ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalWidth))) / (jfloat(2))), ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalHeight))) / (jfloat(2))));
	LINE_NUMBER(646);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(647);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(648);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_rotate) == 0) goto label_9;
	}
	{
	LINE_NUMBER(649);
	M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(650);
	M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetX), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetY), (jfloat((frame[3].i))), (jfloat((frame[2].i))));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(652);
	M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetX), ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetY), (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	}
label_12:;
	{
	LINE_NUMBER(653);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(656);
	init_com_badlogic_gdx_graphics_g2d_Sprite(ctx, (frame[0].o));
	LINE_NUMBER(657);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[1].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(658);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetX = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[1].o)))->F_originalOffsetX);
	LINE_NUMBER(659);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetY = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[1].o)))->F_originalOffsetY);
	LINE_NUMBER(660);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_set_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_set_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(665);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = temp0 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX);
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	M_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY)));
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(670);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	M_com_badlogic_gdx_graphics_g2d_Sprite_setX_float(ctx, sp[0].o, (temp0 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX)));
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(675);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	M_com_badlogic_gdx_graphics_g2d_Sprite_setY_float(ctx, sp[0].o, (temp0 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY)));
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setBounds", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(680);
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	frame[5].f = (temp0 / (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_originalWidth))));
	LINE_NUMBER(681);
	jfloat temp1 = frame[4].f;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	frame[6].f = (temp1 / (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_originalHeight))));
	LINE_NUMBER(682);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetX) * (frame[5].f));
	LINE_NUMBER(683);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetY) * (frame[6].f));
	LINE_NUMBER(684);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_packedHeight;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_packedWidth;
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(685);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_packedWidth;
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_packedHeight;
	sp[0].i = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(686);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = temp0 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX);
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY)), ((jfloat((frame[7].i))) * (frame[5].f)), ((jfloat((frame[8].i))) * (frame[6].f)));
	LINE_NUMBER(687);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setSize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getY_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setBounds_float_float_float_float])(ctx, sp[0].o, temp0, temp1, (frame[1].f), (frame[2].f));
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setOrigin", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(696);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX);
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float(ctx, sp[0].o, temp1, (temp2 - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY)));
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOriginCenter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:setOriginCenter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(701);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX);
	jfloat temp2 = ((jfloat)((com_badlogic_gdx_graphics_g2d_Sprite *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float(ctx, sp[0].o, temp1, (temp2 - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY)));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:flip", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(707);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_1;
	}
	{
	LINE_NUMBER(708);
	M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean(ctx, (frame[0].o), (frame[2].i), (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(710);
	M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(712);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(713);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float])(ctx, (frame[0].o));
	frame[4].f = temp1;
	LINE_NUMBER(714);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	frame[5].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX);
	LINE_NUMBER(715);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	frame[6].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY);
	LINE_NUMBER(717);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float])(ctx, (frame[0].o));
	frame[7].f = temp2;
	LINE_NUMBER(718);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float])(ctx, (frame[0].o));
	frame[8].f = temp3;
	LINE_NUMBER(720);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetX);
	LINE_NUMBER(721);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_originalOffsetY);
	LINE_NUMBER(722);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK(sp[0].o))->F_originalOffsetX = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX);
	LINE_NUMBER(724);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK(sp[0].o))->F_originalOffsetY = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY);
	LINE_NUMBER(725);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX) * (frame[7].f));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY) * (frame[8].f));
	LINE_NUMBER(729);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp4 = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX) - (frame[5].f);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_translate_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_translate_float_float])(ctx, sp[0].o, temp4, (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY) - (frame[6].f)));
	LINE_NUMBER(730);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_rotate90_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:rotate90", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(736);
	M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(738);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(739);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(740);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	frame[4].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX);
	LINE_NUMBER(741);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	frame[5].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY);
	LINE_NUMBER(743);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float])(ctx, (frame[0].o));
	frame[6].f = temp2;
	LINE_NUMBER(744);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float])(ctx, (frame[0].o));
	frame[7].f = temp3;
	LINE_NUMBER(746);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = (frame[5].f);
	LINE_NUMBER(748);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_originalHeight))) * (frame[7].f)) - (frame[4].f);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (temp0 - ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_packedWidth))) * (frame[6].f)));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_originalWidth))) * (frame[6].f)) - (frame[5].f);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = (temp0 - ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_packedHeight))) * (frame[7].f)));
	LINE_NUMBER(751);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (frame[4].f);
	}
label_11:;
	{
	LINE_NUMBER(755);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetX) - (frame[4].f);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_translate_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_translate_float_float])(ctx, sp[0].o, temp0, (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[1].o))->F_offsetY) - (frame[5].f)));
	LINE_NUMBER(756);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(761);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (temp0 - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(766);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (temp0 - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getOriginX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getOriginY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(776);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(781);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 / temp1;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (temp2 * (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_originalWidth))));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(786);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 / temp1;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (temp2 * (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_originalHeight))));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getWidthRatio", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(790);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getHeightRatio", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 / temp1);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getAtlasRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:getAtlasRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(802);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite *) NULL_CHECK((frame[0].o)))->F_region;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setU_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setV_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_flip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setSize_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOriginCenter,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_rotate90_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getAtlasRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
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
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "setRegion", "(IIII)V" },
	{ "setRegion", "(FFFF)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "setRegion", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;IIII)V" },
	{ "getTexture", "()Lcom/badlogic/gdx/graphics/Texture;" },
	{ "setTexture", "(Lcom/badlogic/gdx/graphics/Texture;)V" },
	{ "getU", "()F" },
	{ "setU", "(F)V" },
	{ "getV", "()F" },
	{ "setV", "(F)V" },
	{ "getU2", "()F" },
	{ "setU2", "(F)V" },
	{ "getV2", "()F" },
	{ "setV2", "(F)V" },
	{ "getRegionX", "()I" },
	{ "setRegionX", "(I)V" },
	{ "getRegionY", "()I" },
	{ "setRegionY", "(I)V" },
	{ "getRegionWidth", "()I" },
	{ "setRegionWidth", "(I)V" },
	{ "getRegionHeight", "()I" },
	{ "setRegionHeight", "(I)V" },
	{ "flip", "(ZZ)V" },
	{ "isFlipX", "()Z" },
	{ "isFlipY", "()Z" },
	{ "scroll", "(FF)V" },
	{ "split", "(II)[[Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g2d/Sprite;)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setSize", "(FF)V" },
	{ "setPosition", "(FF)V" },
	{ "setOriginBasedPosition", "(FF)V" },
	{ "setX", "(F)V" },
	{ "setY", "(F)V" },
	{ "setCenterX", "(F)V" },
	{ "setCenterY", "(F)V" },
	{ "setCenter", "(FF)V" },
	{ "translateX", "(F)V" },
	{ "translateY", "(F)V" },
	{ "translate", "(FF)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setAlpha", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setPackedColor", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOriginCenter", "()V" },
	{ "setRotation", "(F)V" },
	{ "getRotation", "()F" },
	{ "rotate", "(F)V" },
	{ "rotate90", "(Z)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scale", "(F)V" },
	{ "getVertices", "()[F" },
	{ "getBoundingRectangle", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getOriginX", "()F" },
	{ "getOriginY", "()F" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getPackedColor", "()F" },
	{ "setFlip", "(ZZ)V" },
	{ "getWidthRatio", "()F" },
	{ "getHeightRatio", "()F" },
	{ "getAtlasRegion", "()Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;" },
};

static FieldMetadata fields[] {
	{ "region", &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite, F_region), "Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 16 },
	{ "originalOffsetX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite, F_originalOffsetX), "F", 0 },
	{ "originalOffsetY", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite, F_originalOffsetY), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite;)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setPosition_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setPosition_float_float, "(FF)V", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setX_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setX_float, "(F)V", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setY_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setY_float, "(F)V", 1 },
	{ "setBounds", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setBounds_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setBounds_float_float_float_float, "(FFFF)V", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setSize_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setSize_float_float, "(FF)V", 1 },
	{ "setOrigin", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOrigin_float_float, "(FF)V", 1 },
	{ "setOriginCenter", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOriginCenter, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_setOriginCenter, "()V", 1 },
	{ "flip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_flip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_flip_boolean_boolean, "(ZZ)V", 1 },
	{ "rotate90", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_rotate90_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_rotate90_boolean, "(Z)V", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getY_R_float, "()F", 1 },
	{ "getOriginX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginX_R_float, "()F", 1 },
	{ "getOriginY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getOriginY_R_float, "()F", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidth_R_float, "()F", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeight_R_float, "()F", 1 },
	{ "getWidthRatio", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getWidthRatio_R_float, "()F", 1 },
	{ "getHeightRatio", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getHeightRatio_R_float, "()F", 1 },
	{ "getAtlasRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getAtlasRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_getAtlasRegion_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, "()Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasSprite",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_Sprite,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite);

}

