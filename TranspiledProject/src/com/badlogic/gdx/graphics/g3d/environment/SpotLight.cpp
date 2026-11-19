#include "com/badlogic/gdx/graphics/g3d/environment/SpotLight.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/graphics/g3d/environment/SpotLight.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/graphics/g3d/environment/BaseLight.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_environment_BaseLight(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_environment_SpotLight *) object;
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_environment_BaseLight(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_environment_SpotLight(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_com_badlogic_gdx_graphics_g3d_environment_BaseLight(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK(sp[0].o))->F_position = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setPosition", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setDirection", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setIntensity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(53);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[1].f);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setCutoffAngle_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setCutoffAngle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(58);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_cutoffAngle = (frame[1].f);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setExponent_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setExponent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(63);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_exponent = (frame[1].f);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[1].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_position;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_intensity), ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_cutoffAngle), ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_exponent));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(74);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(75);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(76);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(77);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[4].f);
	LINE_NUMBER(78);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_cutoffAngle = (frame[5].f);
	LINE_NUMBER(79);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_exponent = (frame[6].f);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:set", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	LINE_NUMBER(86);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(87);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(88);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[6].f);
	LINE_NUMBER(89);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_cutoffAngle = (frame[7].f);
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_exponent = (frame[8].f);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:set", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(96);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[5].f), (frame[6].f), (frame[7].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(99);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[8].f);
	LINE_NUMBER(100);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_cutoffAngle = (frame[9].f);
	LINE_NUMBER(101);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_exponent = (frame[10].f);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:set", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	frame[11].f = param10;
	frame[12].f = param11;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[7].f), (frame[8].f), (frame[9].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[10].f);
	LINE_NUMBER(112);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_cutoffAngle = (frame[11].f);
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_exponent = (frame[12].f);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setTarget_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_SpotLight)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_SpotLight, (frame[1].o))));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/SpotLight:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[1].o)))->F_color;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_position;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_direction;
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_intensity), ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_intensity));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_cutoffAngle;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_cutoffAngle;
	LINE_NUMBER(130);
	jint temp2 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, temp0, temp1);
	if (temp2 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_math_MathUtils_isEqual_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[0].o)))->F_exponent), ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_SpotLight *) NULL_CHECK((frame[1].o)))->F_exponent));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_environment_SpotLight[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_BaseLight_setColor_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setCutoffAngle_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setExponent_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setTarget_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_boolean,
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
	{ "setColor", "(FFFF)Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/graphics/g3d/environment/BaseLight;" },
	{ "setPosition", "(FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setPosition", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setDirection", "(FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setDirection", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setIntensity", "(F)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setCutoffAngle", "(F)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setExponent", "(F)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "set", "(FFFLcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/Color;FFFFFFFFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "set", "(FFFFFFFFFFFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "setTarget", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;" },
	{ "equals", "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Z" },
};

static FieldMetadata fields[] {
	{ "position", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_environment_SpotLight, F_position), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "direction", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_environment_SpotLight, F_direction), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "intensity", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_environment_SpotLight, F_intensity), "F", 1 },
	{ "cutoffAngle", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_environment_SpotLight, F_cutoffAngle), "F", 1 },
	{ "exponent", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_environment_SpotLight, F_exponent), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_environment_SpotLight, 0, "()V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setDirection", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setDirection", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setDirection_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setIntensity", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(F)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setCutoffAngle", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setCutoffAngle_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setCutoffAngle_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(F)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setExponent", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setExponent_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setExponent_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(F)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(FFFLcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;FFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(Lcom/badlogic/gdx/graphics/Color;FFFFFFFFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_set_float_float_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(FFFFFFFFFFFF)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "setTarget", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setTarget_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_setTarget_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_SpotLight, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_environment_SpotLight_equals_com_badlogic_gdx_graphics_g3d_environment_SpotLight_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/environment/SpotLight;)Z", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_environment_SpotLight{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/environment/SpotLight",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_environment_SpotLight),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_environment_SpotLight,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_environment_SpotLight = registerClass(&class_com_badlogic_gdx_graphics_g3d_environment_SpotLight);

}

