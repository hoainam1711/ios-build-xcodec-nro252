#include "com/badlogic/gdx/graphics/g3d/environment/PointLight.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/environment/PointLight.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/graphics/g3d/environment/BaseLight.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_environment_PointLight(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_environment_PointLight *) object;
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_environment_BaseLight(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_environment_PointLight(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_com_badlogic_gdx_graphics_g3d_environment_BaseLight(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK(sp[0].o))->F_position = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:setPosition", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:setIntensity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(37);
	((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[1].f);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[1].o)))->F_color;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[1].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[1].o)))->F_intensity));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(46);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(47);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(48);
	((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[3].f);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	LINE_NUMBER(54);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(55);
	((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[5].f);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(60);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(62);
	((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[5].f);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:set", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[7].f);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_environment_PointLight)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_environment_PointLight, (frame[1].o))));
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

jbool M_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/environment/PointLight:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_BaseLight *) NULL_CHECK((frame[1].o)))->F_color;
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[1].o)))->F_position;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[0].o)))->F_intensity), ((jfloat)((com_badlogic_gdx_graphics_g3d_environment_PointLight *) NULL_CHECK((frame[1].o)))->F_intensity), -1)) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_environment_PointLight[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_java_lang_Object_R_boolean,
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
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight,
	(void *) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_boolean,
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
	{ "setPosition", "(FFF)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "setPosition", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "setIntensity", "(F)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "set", "(FFFLcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/Color;FFFF)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "set", "(FFFFFFF)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;" },
	{ "equals", "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Z" },
};

static FieldMetadata fields[] {
	{ "position", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_environment_PointLight, F_position), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "intensity", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_environment_PointLight, F_intensity), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_environment_PointLight, 0, "()V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(FFF)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_setPosition_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "setIntensity", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_setIntensity_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(F)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(FFFLcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_com_badlogic_gdx_graphics_Color_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(Lcom/badlogic/gdx/graphics/Color;FFFF)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_set_float_float_float_float_float_float_float_R_com_badlogic_gdx_graphics_g3d_environment_PointLight, "(FFFFFFF)Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_environment_PointLight_equals_com_badlogic_gdx_graphics_g3d_environment_PointLight_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/environment/PointLight;)Z", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_environment_PointLight{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/environment/PointLight",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_environment_BaseLight,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_environment_PointLight),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_environment_PointLight,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_environment_PointLight,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_environment_PointLight,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_environment_PointLight = registerClass(&class_com_badlogic_gdx_graphics_g3d_environment_PointLight);

}

