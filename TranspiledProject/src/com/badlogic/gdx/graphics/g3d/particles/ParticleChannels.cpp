#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_10.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_11.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_12.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_13.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_TextureRegionInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_14.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelDescriptor.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_15.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_9.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_5.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_6.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_7.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_8.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_ScaleInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_ColorInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_2.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_Rotation2dInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_3.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_4.h"
#include "com/badlogic/gdx/graphics/g3d/ModelInstance.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_Rotation3dInitializer.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_currentGlobalId;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Life;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_PreviousPosition;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Color;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TextureRegion;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation2D;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation3D;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Scale;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ModelInstance;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ParticleController;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Acceleration;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity2D;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity3D;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation4;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation6;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_CurrentLifeOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TotalLifeOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_LifePercentOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_RedOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_GreenOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_BlueOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AlphaOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_InterpolationStartOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_InterpolationDiffOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityStrengthStartOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityStrengthDiffOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityThetaStartOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityThetaDiffOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityPhiStartOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityPhiDiffOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_XOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_YOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ZOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_WOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_UOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_U2Offset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_V2Offset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_HalfWidthOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_HalfHeightOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_CosineOffset;
jint SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_SineOffset;

void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Life)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Life)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Life, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_PreviousPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_PreviousPosition)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_PreviousPosition, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Color)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Color, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TextureRegion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TextureRegion)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TextureRegion, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation2D)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation2D)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation2D, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation3D)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation3D)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation3D, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Scale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Scale)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Scale, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ModelInstance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ModelInstance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ModelInstance, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ParticleController)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ParticleController)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ParticleController, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Acceleration)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Acceleration)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Acceleration, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity2D)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity2D)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity2D, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity3D)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity3D)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity3D, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation4)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation4, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation6)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation6, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels *) object;
}

jint SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:newGlobalId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	{
	LINE_NUMBER(33);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	jint temp0 = (jint)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_currentGlobalId;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_currentGlobalId = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(153);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(154);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds])(ctx, (frame[0].o));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:newId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParticleChannels *) NULL_CHECK(sp[0].o))->F_currentId;
	((com_badlogic_gdx_graphics_g3d_particles_ParticleChannels *) NULL_CHECK(sp[0].o))->F_currentId = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:resetIds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleChannels *) NULL_CHECK((frame[0].o)))->F_currentId = (clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_currentGlobalId);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$15_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$14_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$14", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$13_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$13", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$12_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$11_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$11", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$10_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$10", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$9_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$8_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_ModelInstance, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$7_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$6_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$5_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$4_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$3_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$2_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$1_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$0_int_R_java_lang_Object(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_CurrentLifeOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TotalLifeOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_LifePercentOffset = jint(2);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_RedOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_GreenOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_BlueOffset = jint(2);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AlphaOffset = jint(3);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_InterpolationStartOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_InterpolationDiffOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityStrengthStartOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityStrengthDiffOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityThetaStartOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityThetaDiffOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityPhiStartOffset = jint(2);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityPhiDiffOffset = jint(3);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_XOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_YOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ZOffset = jint(2);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_WOffset = jint(3);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_UOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VOffset = jint(1);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_U2Offset = jint(2);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_V2Offset = jint(3);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_HalfWidthOffset = jint(4);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_HalfHeightOffset = jint(5);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_CosineOffset = jint(0);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_SineOffset = jint(1);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	{
	LINE_NUMBER(123);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp0, sp[1].o, (jint(3)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Life = sp[0].o;
	LINE_NUMBER(124);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp1, sp[1].o, (jint(3)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position = sp[0].o;
	LINE_NUMBER(125);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_2(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_2 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_2);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp2, sp[1].o, (jint(3)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_PreviousPosition = sp[0].o;
	LINE_NUMBER(126);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_3(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_3 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_3);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp3, sp[1].o, (jint(4)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Color = sp[0].o;
	LINE_NUMBER(127);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp4 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_4(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_4 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_4);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp4, sp[1].o, (6));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TextureRegion = sp[0].o;
	LINE_NUMBER(128);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp5 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_5(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_5 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_5);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp5, sp[1].o, (jint(2)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation2D = sp[0].o;
	LINE_NUMBER(129);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp6 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_6(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_6 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_6);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp6, sp[1].o, (jint(4)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation3D = sp[0].o;
	LINE_NUMBER(130);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp7 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_7(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_7 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_7);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp7, sp[1].o, (jint(1)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Scale = sp[0].o;
	LINE_NUMBER(131);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp8 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_8(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_8 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_8);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp8, sp[1].o, (jint(1)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ModelInstance = sp[0].o;
	LINE_NUMBER(132);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp9 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_9(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_9 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_9);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp9, sp[1].o, (jint(1)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ParticleController = sp[0].o;
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp10 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_10(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_10 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_10);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp10, sp[1].o, (jint(3)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Acceleration = sp[0].o;
	LINE_NUMBER(134);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp11 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_11(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_11 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_11);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp11, sp[1].o, (jint(1)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity2D = sp[0].o;
	LINE_NUMBER(135);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp12 = (jint)SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int(ctx);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_12(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_12 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_12);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp12, sp[1].o, (jint(3)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity3D = sp[0].o;
	LINE_NUMBER(136);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp13 = jint(-1);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_13(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_13 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_13);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp13, sp[1].o, (jint(2)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation = sp[0].o;
	LINE_NUMBER(137);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp14 = jint(-1);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_14(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_14 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_14);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp14, sp[1].o, (jint(4)));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation4 = sp[0].o;
	LINE_NUMBER(138);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);
	jint temp15 = jint(-1);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_15(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_15 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_invoke_com_badlogic_gdx_utils_ArraySupplier_15);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(ctx, sp[0].o, temp15, sp[1].o, (6));
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation6 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newId_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds,
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
	{ "newId", "()I" },
	{ "resetIds", "()V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation2dInitializer,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ScaleInitializer,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer,
};

static FieldMetadata fields[] {
	{ "currentGlobalId", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_currentGlobalId, "I", 10 },
	{ "Life", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Life, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Position", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Position, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "PreviousPosition", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_PreviousPosition, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Color", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Color, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "TextureRegion", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TextureRegion, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Rotation2D", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation2D, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Rotation3D", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Rotation3D, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Scale", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Scale, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "ModelInstance", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ModelInstance, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "ParticleController", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ParticleController, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Acceleration", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Acceleration, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "AngularVelocity2D", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity2D, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "AngularVelocity3D", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AngularVelocity3D, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Interpolation", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Interpolation4", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation4, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "Interpolation6", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_Interpolation6, "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;", 25 },
	{ "CurrentLifeOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_CurrentLifeOffset, "I", 25 },
	{ "TotalLifeOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_TotalLifeOffset, "I", 25 },
	{ "LifePercentOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_LifePercentOffset, "I", 25 },
	{ "RedOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_RedOffset, "I", 25 },
	{ "GreenOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_GreenOffset, "I", 25 },
	{ "BlueOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_BlueOffset, "I", 25 },
	{ "AlphaOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_AlphaOffset, "I", 25 },
	{ "InterpolationStartOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_InterpolationStartOffset, "I", 25 },
	{ "InterpolationDiffOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_InterpolationDiffOffset, "I", 25 },
	{ "VelocityStrengthStartOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityStrengthStartOffset, "I", 25 },
	{ "VelocityStrengthDiffOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityStrengthDiffOffset, "I", 25 },
	{ "VelocityThetaStartOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityThetaStartOffset, "I", 25 },
	{ "VelocityThetaDiffOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityThetaDiffOffset, "I", 25 },
	{ "VelocityPhiStartOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityPhiStartOffset, "I", 25 },
	{ "VelocityPhiDiffOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VelocityPhiDiffOffset, "I", 25 },
	{ "XOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_XOffset, "I", 25 },
	{ "YOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_YOffset, "I", 25 },
	{ "ZOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_ZOffset, "I", 25 },
	{ "WOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_WOffset, "I", 25 },
	{ "UOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_UOffset, "I", 25 },
	{ "VOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_VOffset, "I", 25 },
	{ "U2Offset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_U2Offset, "I", 25 },
	{ "V2Offset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_V2Offset, "I", 25 },
	{ "HalfWidthOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_HalfWidthOffset, "I", 25 },
	{ "HalfHeightOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_HalfHeightOffset, "I", 25 },
	{ "CosineOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_CosineOffset, "I", 25 },
	{ "SineOffset", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_SineOffset, "I", 25 },
	{ "currentId", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleChannels, F_currentId), "I", 2 },
};

static MethodMetadata methods[] {
	{ "newGlobalId", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newGlobalId_R_int, 0, "()I", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels, 0, "()V", 1 },
	{ "newId", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newId_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_newId_R_int, "()I", 1 },
	{ "resetIds", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_resetIds, "()V", 4 },
	{ "lambda$static$15", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$15_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$14", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$14_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$13", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$13_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$12", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$12_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$11", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$11_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$10", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$10_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$9", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$9_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$8", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$8_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$7", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$7_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$6", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$6_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$5", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$5_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$4", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$4_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$3", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$3_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$2", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$2_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$1", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$1_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "lambda$static$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels_lambda$static$0_int_R_java_lang_Object, 0, "(I)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleChannels),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 45,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels);

}

