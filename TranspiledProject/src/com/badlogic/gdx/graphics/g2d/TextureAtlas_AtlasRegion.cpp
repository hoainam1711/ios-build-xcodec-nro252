#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_TextureRegion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_names)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_names)->clazz)->markFunction)((jobject) self->F_names, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(569);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(527);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(570);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth = (frame[4].i);
	LINE_NUMBER(571);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight = (frame[5].i);
	LINE_NUMBER(572);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth = (frame[4].i);
	LINE_NUMBER(573);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight = (frame[5].i);
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(576);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(527);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(577);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(578);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_index = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_index);
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_name;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(580);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetX = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetX);
	LINE_NUMBER(581);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetY = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetY);
	LINE_NUMBER(582);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_packedWidth);
	LINE_NUMBER(583);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_packedHeight);
	LINE_NUMBER(584);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalWidth);
	LINE_NUMBER(585);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalHeight);
	LINE_NUMBER(586);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_rotate = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_rotate);
	LINE_NUMBER(587);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_degrees = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_degrees);
	LINE_NUMBER(588);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_names;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_names = (jref) sp[1].o;
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_values;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(592);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(527);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(593);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(594);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_packedWidth = temp0;
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_packedHeight = temp1;
	LINE_NUMBER(596);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth);
	LINE_NUMBER(597);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:flip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(604);
	M_com_badlogic_gdx_graphics_g2d_TextureRegion_flip_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(605);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth))) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetX);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float])(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = (temp0 - temp1);
	}
label_2:;
	{
	LINE_NUMBER(606);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight))) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetY);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float])(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (temp0 - temp1);
	}
label_3:;
	LINE_NUMBER(607);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:getRotatedPackedWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(612);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:getRotatedPackedHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = jfloat(((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:findValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_names;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(623);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_names;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(624);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_names;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(623);
	INST_IINC(2, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(626);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setTexture_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getU2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setU2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getV2_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setV2_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionX_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionY_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionWidth_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_setRegionHeight_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_scroll_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureRegion_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int,
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
	{ "getRotatedPackedWidth", "()F" },
	{ "getRotatedPackedHeight", "()F" },
	{ "findValue", "(Ljava/lang/String;)[I" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_index), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_name), "Ljava/lang/String;", 1 },
	{ "offsetX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_offsetY), "F", 1 },
	{ "packedWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_packedWidth), "I", 1 },
	{ "packedHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_packedHeight), "I", 1 },
	{ "originalWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_originalWidth), "I", 1 },
	{ "originalHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_originalHeight), "I", 1 },
	{ "rotate", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_rotate), "Z", 1 },
	{ "degrees", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_degrees), "I", 1 },
	{ "names", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_names), "[Ljava/lang/String;", 1 },
	{ "values", getArrayClass(&class_int, 2), offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, F_values), "[[I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "flip", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean, "(ZZ)V", 1 },
	{ "getRotatedPackedWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float, "()F", 1 },
	{ "getRotatedPackedHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float, "()F", 1 },
	{ "findValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int, "(Ljava/lang/String;)[I", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas$AtlasRegion",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureRegion,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);

}

