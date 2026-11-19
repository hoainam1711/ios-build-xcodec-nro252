#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelDescriptor.h"
#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_Configurable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/influencers/Influencer.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_FloatChannel.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {

jfloat SF_com_badlogic_gdx_graphics_g3d_particles_ParticleController_DEFAULT_TIME_STEP;

void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleController *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_emitter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_emitter)->clazz)->markFunction)((jobject) self->F_emitter, mark, depth + 1);
	if (self->F_influencers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_influencers)->clazz)->markFunction)((jobject) self->F_influencers, mark, depth + 1);
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
	if (self->F_particles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particles)->clazz)->markFunction)((jobject) self->F_particles, mark, depth + 1);
	if (self->F_particleChannels)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_particleChannels)->clazz)->markFunction)((jobject) self->F_particleChannels, mark, depth + 1);
	if (self->F_transform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transform)->clazz)->markFunction)((jobject) self->F_transform, mark, depth + 1);
	if (self->F_scale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scale)->clazz)->markFunction)((jobject) self->F_scale, mark, depth + 1);
	if (self->F_boundingBox)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_boundingBox)->clazz)->markFunction)((jobject) self->F_boundingBox, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleController_DEFAULT_TIME_STEP = jfloat(0.016666668f);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_scale = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	jint temp1 = jint(3);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleController_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_influencers = (jref) sp[1].o;
	LINE_NUMBER(74);
	M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTimeStep_float(ctx, (frame[0].o), (jfloat(0.016666668f)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleController_java_lang_String_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_Array1_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(79);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleController(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(81);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter = (jref) (frame[2].o);
	LINE_NUMBER(82);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer = (jref) (frame[3].o);
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_particleChannels = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(ctx, sp[1].o, (frame[4].o));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_influencers = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTimeStep_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:setTimeStep", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(89);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_deltaTime = (frame[1].f);
	LINE_NUMBER(90);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_deltaTimeSqr = (((jfloat)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_deltaTime) * ((jfloat)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_deltaTime));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:setTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:setTransform", 20 };
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
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_float_float_float_float_float_float_float_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[8].f), (frame[8].f));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[8].f), (frame[8].f), (frame[8].f));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:rotate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_rotate_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_translate_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:translate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_translate_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_translate_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTranslation_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:setTranslation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:scale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_scale_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_mul_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getScale_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getTransform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:getTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:isComplete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_isComplete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_isComplete_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_bind])(ctx, (frame[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_particles;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(158);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end])(ctx, (frame[0].o));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_particleChannels;
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_allocateChannels_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_allocateChannels_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK(sp[1].o))->F_maxParticleCount));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_init])(ctx, sp[0].o);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(165);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_init) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_init])(ctx, (frame[2].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_init) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_init])(ctx, sp[0].o);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_allocateChannels_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:allocateChannels", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray);
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_particles = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_allocateChannels) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_allocateChannels])(ctx, sp[0].o);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(174);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_allocateChannels) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_allocateChannels])(ctx, (frame[3].o));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_allocateChannels) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_allocateChannels])(ctx, sp[0].o);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(182);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController])(ctx, (frame[2].o), (frame[0].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_start])(ctx, sp[0].o);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(190);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_start) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_start])(ctx, (frame[2].o));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end])(ctx, (frame[0].o));
	LINE_NUMBER(196);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start])(ctx, (frame[0].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
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
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(202);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_end) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_end])(ctx, (frame[2].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_end])(ctx, sp[0].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_activateParticles_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:activateParticles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_activateParticles_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_activateParticles_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(211);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_activateParticles_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_activateParticles_int_int])(ctx, (frame[4].o), (frame[1].i), (frame[2].i));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_killParticles_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:killParticles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_killParticles_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_killParticles_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(219);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_killParticles_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_killParticles_int_int])(ctx, (frame[4].o), (frame[1].i), (frame[2].i));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_graphics;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_Graphics_getDeltaTime_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_getDeltaTime_R_float, sp[1].o))(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(229);
	M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTimeStep_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_update])(ctx, sp[0].o);
	LINE_NUMBER(231);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(232);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_update) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_update])(ctx, (frame[3].o));
	goto label_3;
	}
label_4:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_particles;
	if (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_update])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(240);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:copy", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, sp[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(246);
	frame[3].i = (jint(0));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
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
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(248);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent])(ctx, (frame[5].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[1].o));
	LINE_NUMBER(249);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(250);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController);
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_name;
	init_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	sp[3].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent])(ctx, sp[3].o);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleController_java_lang_String_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_Array1_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer, sp[3].o)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(256);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(257);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_dispose])(ctx, (frame[2].o));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:getBoundingBox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_boundingBox;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_boundingBox = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(263);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_calculateBoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_calculateBoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_boundingBox;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_calculateBoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:calculateBoundingBox", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_boundingBox;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_clr_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_particles;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, sp[0].o));
	LINE_NUMBER(271);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[1].o)))->F_strideSize;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_particles;
	frame[3].i = (temp0 * ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size));
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_boundingBox;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) + (jint(0))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) + (jint(1))));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_float_float_float_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, temp0, temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) + (jint(2))))));
	LINE_NUMBER(271);
	frame[2].i = ((frame[2].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[1].o)))->F_strideSize));
	goto label_4;
	}
label_5:;
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:findIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(281);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_5:;
	{
	LINE_NUMBER(279);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findInfluencer_java_lang_Class_R_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:findInfluencer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(291);
	if ((frame[2].i) <= (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_removeInfluencer_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:removeInfluencer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(297);
	if ((frame[2].i) <= (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	}
label_2:;
	LINE_NUMBER(298);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_replaceInfluencer_java_lang_Class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:replaceInfluencer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(302);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(303);
	if ((frame[3].i) <= (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[3].i), (frame[2].o));
	LINE_NUMBER(305);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[3].i) + (jint(1))));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_write_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"name"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_name;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(314);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"emitter"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter)));
	LINE_NUMBER(315);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"influencers"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_utils_Array)), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer)));
	LINE_NUMBER(316);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"renderer"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer)));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) &class_java_lang_String)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_name = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"emitter"_j))), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_emitter = (jref) (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, sp[1].o));
	LINE_NUMBER(323);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"influencers"_j))), (((jobject) &class_com_badlogic_gdx_utils_Array)), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer)), (frame[2].o));
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o)));
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"renderer"_j))), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_renderer = (jref) (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer, sp[1].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:save", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(331);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:load", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_emitter;
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_influencers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, sp[0].o));
	LINE_NUMBER(339);
	((func_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleController_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleController:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleController[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_write_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTimeStep_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Vector3_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_translate_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTranslation_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_mul_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getTransform_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_init,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_allocateChannels_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_bind,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_reset,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_activateParticles_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_killParticles_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_draw,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_dispose,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_calculateBoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findInfluencer_java_lang_Class_R_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_removeInfluencer_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_replaceInfluencer_java_lang_Class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_R_boolean,
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
	{ "write", "(Lcom/badlogic/gdx/utils/Json;)V" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "save", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "setTimeStep", "(F)V" },
	{ "setTransform", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setTransform", "(FFFFFFFF)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Quaternion;)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Vector3;F)V" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "setTranslation", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "scale", "(FFF)V" },
	{ "scale", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "getTransform", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "isComplete", "()Z" },
	{ "init", "()V" },
	{ "allocateChannels", "(I)V" },
	{ "bind", "()V" },
	{ "start", "()V" },
	{ "reset", "()V" },
	{ "end", "()V" },
	{ "activateParticles", "(II)V" },
	{ "killParticles", "(II)V" },
	{ "update", "()V" },
	{ "update", "(F)V" },
	{ "draw", "()V" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;" },
	{ "dispose", "()V" },
	{ "getBoundingBox", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "calculateBoundingBox", "()V" },
	{ "findIndex", "(Ljava/lang/Class;)I" },
	{ "findInfluencer", "(Ljava/lang/Class;)Lcom/badlogic/gdx/graphics/g3d/particles/influencers/Influencer;" },
	{ "removeInfluencer", "(Ljava/lang/Class;)V" },
	{ "replaceInfluencer", "(Ljava/lang/Class;Lcom/badlogic/gdx/graphics/g3d/particles/influencers/Influencer;)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Json$Serializable, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$Configurable, };

static FieldMetadata fields[] {
	{ "DEFAULT_TIME_STEP", &class_float, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleController_DEFAULT_TIME_STEP, "F", 28 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_name), "Ljava/lang/String;", 1 },
	{ "emitter", &class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_emitter), "Lcom/badlogic/gdx/graphics/g3d/particles/emitters/Emitter;", 1 },
	{ "influencers", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_influencers), "Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "renderer", &class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_renderer), "Lcom/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer;", 1 },
	{ "particles", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_particles), "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;", 1 },
	{ "particleChannels", &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_particleChannels), "Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels;", 1 },
	{ "transform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_transform), "Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "scale", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_scale), "Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "boundingBox", &class_com_badlogic_gdx_math_collision_BoundingBox, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_boundingBox), "Lcom/badlogic/gdx/math/collision/BoundingBox;", 4 },
	{ "deltaTime", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_deltaTime), "F", 1 },
	{ "deltaTimeSqr", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleController, F_deltaTimeSqr), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleController, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleController_java_lang_String_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_Array1_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/g3d/particles/emitters/Emitter;Lcom/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer;[Lcom/badlogic/gdx/graphics/g3d/particles/influencers/Influencer;)V", 129 },
	{ "setTimeStep", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTimeStep_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTimeStep_float, "(F)V", 2 },
	{ "setTransform", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "setTransform", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_float_float_float_float_float_float_float_float, "(FFFFFFFF)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Vector3_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Vector3_float, "(Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_translate_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_translate_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "setTranslation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTranslation_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTranslation_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float, "(FFF)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_mul_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_mul_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "getTransform", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getTransform_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getTransform_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_isComplete_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_isComplete_R_boolean, "()Z", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_init, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_init, "()V", 1 },
	{ "allocateChannels", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_allocateChannels_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_allocateChannels_int, "(I)V", 4 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_bind, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_bind, "()V", 4 },
	{ "start", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_reset, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_reset, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end, "()V", 1 },
	{ "activateParticles", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_activateParticles_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_activateParticles_int_int, "(II)V", 1 },
	{ "killParticles", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_killParticles_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_killParticles_int_int, "(II)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update, "()V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_draw, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_draw, "()V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController, "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_dispose, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_dispose, "()V", 1 },
	{ "getBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_calculateBoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_calculateBoundingBox, "()V", 4 },
	{ "findIndex", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findIndex_java_lang_Class_R_int, "(Ljava/lang/Class;)I", 2 },
	{ "findInfluencer", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findInfluencer_java_lang_Class_R_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_findInfluencer_java_lang_Class_R_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, "(Ljava/lang/Class;)Lcom/badlogic/gdx/graphics/g3d/particles/influencers/Influencer;", 1 },
	{ "removeInfluencer", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_removeInfluencer_java_lang_Class, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_removeInfluencer_java_lang_Class, "(Ljava/lang/Class;)V", 1 },
	{ "replaceInfluencer", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_replaceInfluencer_java_lang_Class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_replaceInfluencer_java_lang_Class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer_R_boolean, "(Ljava/lang/Class;Lcom/badlogic/gdx/graphics/g3d/particles/influencers/Influencer;)Z", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_write_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_write_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/utils/Json;)V", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleController_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleController_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/particles/influencers/Influencer;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleController{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleController",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleController),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleController = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleController);

}

