#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_Configurable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) object;
	if (self->F_controllers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controllers)->clazz)->markFunction)((jobject) self->F_controllers, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	jint temp1 = jint(3);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK(sp[0].o))->F_controllers = (jref) sp[1].o;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[1].o)))->F_controllers;
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, sp[1].o, temp0, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[2].o))->F_size));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK(sp[0].o))->F_controllers = (jref) sp[1].o;
	LINE_NUMBER(41);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[1].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[1].o)))->F_controllers;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[1].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[1].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_Array1_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK(sp[0].o))->F_controllers = (jref) sp[1].o;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:init", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_init) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_init])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(50);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:start", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_start])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(55);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:end", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_end])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(60);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_reset) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_reset])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(65);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(70);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(75);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_update_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), (frame[1].f));
	LINE_NUMBER(75);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_draw) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_draw])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(80);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:isComplete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_isComplete_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_isComplete_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(85);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setTransform_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:setTransform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_setTransform_com_badlogic_gdx_math_Matrix4])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), (frame[1].o));
	LINE_NUMBER(96);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Quaternion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Quaternion])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), (frame[1].o));
	LINE_NUMBER(102);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Vector3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:rotate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(110);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Vector3_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_rotate_com_badlogic_gdx_math_Vector3_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), (frame[1].o), (frame[2].f));
	LINE_NUMBER(110);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_translate_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_translate_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_translate_com_badlogic_gdx_math_Vector3])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), (frame[1].o));
	LINE_NUMBER(116);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:scale", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(122);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(122);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:scale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_scale_float_float_float])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(128);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getControllers_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:getControllers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_findController_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:findController", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[4].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(139);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_dispose) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_dispose])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o)));
	LINE_NUMBER(147);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:getBoundingBox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_bounds;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[1].o = sp[0].o;
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
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
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o));
	LINE_NUMBER(159);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_ext_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setBatch_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:setBatch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, sp[0].o));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK((frame[3].o)))->F_renderer;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_setBatch_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_setBatch_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	goto label_5;
label_7:;
	goto label_4;
label_5:;
	LINE_NUMBER(169);
	goto label_1;
label_2:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:save", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o));
	LINE_NUMBER(180);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(181);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(186);
	frame[3].i = (jint(0));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleEffect *) NULL_CHECK((frame[0].o)))->F_controllers;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, sp[0].o));
	LINE_NUMBER(188);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleController_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleController_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData])(ctx, (frame[5].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(189);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_dispose,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_init,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_start,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_end,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_reset,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_draw,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setTransform_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Quaternion,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Vector3_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_translate_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getControllers_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_findController_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setBatch_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect,
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
	{ "save", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "init", "()V" },
	{ "start", "()V" },
	{ "end", "()V" },
	{ "reset", "()V" },
	{ "update", "()V" },
	{ "update", "(F)V" },
	{ "draw", "()V" },
	{ "isComplete", "()Z" },
	{ "setTransform", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Quaternion;)V" },
	{ "rotate", "(Lcom/badlogic/gdx/math/Vector3;F)V" },
	{ "translate", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "scale", "(FFF)V" },
	{ "scale", "(Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "getControllers", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "findController", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;" },
	{ "getBoundingBox", "()Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "setBatch", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$Configurable, };

static FieldMetadata fields[] {
	{ "controllers", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, F_controllers), "Lcom/badlogic/gdx/utils/Array;", 2 },
	{ "bounds", &class_com_badlogic_gdx_math_collision_BoundingBox, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, F_bounds), "Lcom/badlogic/gdx/math/collision/BoundingBox;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_Array1_com_badlogic_gdx_graphics_g3d_particles_ParticleController, 0, "([Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;)V", 129 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_init, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_init, "()V", 1 },
	{ "start", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_start, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_start, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_end, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_end, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_reset, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_reset, "()V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update, "()V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_update_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_draw, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_draw, "()V", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_isComplete_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_isComplete_R_boolean, "()Z", 1 },
	{ "setTransform", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setTransform_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setTransform_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Quaternion, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Quaternion, "(Lcom/badlogic/gdx/math/Quaternion;)V", 1 },
	{ "rotate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Vector3_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_rotate_com_badlogic_gdx_math_Vector3_float, "(Lcom/badlogic/gdx/math/Vector3;F)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_translate_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_translate_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_float_float_float, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_float_float_float, "(FFF)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_scale_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "getControllers", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getControllers_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getControllers_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "findController", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_findController_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_findController_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ParticleController, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_dispose, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_dispose, "()V", 1 },
	{ "getBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_getBoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "()Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "setBatch", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setBatch_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_setBatch_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect, "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleEffect;", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ParticleController, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleEffect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffect),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffect);

}

