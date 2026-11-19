#include "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_Configurable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V1;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V2;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V3;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V4;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V5;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V6;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q2;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M3;
jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M4;

void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V1, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V2, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V3, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V4)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V4, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V5)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V5, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V6)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V6, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q2, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M3, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M4)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M4, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent *) object;
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_activateParticles_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:activateParticles", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_killParticles_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:killParticles", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:init", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:start", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:dispose", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_allocateChannels(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:allocateChannels", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent *) NULL_CHECK((frame[0].o)))->F_controller = (jref) (frame[1].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:save", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_write_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	{
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V1 = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V2 = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V3 = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V4 = sp[0].o;
	LINE_NUMBER(33);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V5 = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V6 = sp[0].o;
	LINE_NUMBER(34);
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q = sp[0].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q2 = sp[0].o;
	LINE_NUMBER(35);
	clinit_com_badlogic_gdx_math_Matrix3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix3);
	init_com_badlogic_gdx_math_Matrix3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M3 = sp[0].o;
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M4 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_dispose,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_write_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_activateParticles_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_killParticles_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_update,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_init,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_start,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_end,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_allocateChannels,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
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
	{ "write", "(Lcom/badlogic/gdx/utils/Json;)V" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "save", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "activateParticles", "(II)V" },
	{ "killParticles", "(II)V" },
	{ "update", "()V" },
	{ "init", "()V" },
	{ "start", "()V" },
	{ "end", "()V" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent;" },
	{ "allocateChannels", "()V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, &class_com_badlogic_gdx_utils_Json$Serializable, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$Configurable, };

static FieldMetadata fields[] {
	{ "TMP_V1", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V1, "Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "TMP_V2", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V2, "Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "TMP_V3", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V3, "Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "TMP_V4", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V4, "Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "TMP_V5", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V5, "Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "TMP_V6", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_V6, "Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "TMP_Q", &class_com_badlogic_gdx_math_Quaternion, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q, "Lcom/badlogic/gdx/math/Quaternion;", 28 },
	{ "TMP_Q2", &class_com_badlogic_gdx_math_Quaternion, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_Q2, "Lcom/badlogic/gdx/math/Quaternion;", 28 },
	{ "TMP_M3", &class_com_badlogic_gdx_math_Matrix3, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M3, "Lcom/badlogic/gdx/math/Matrix3;", 28 },
	{ "TMP_M4", &class_com_badlogic_gdx_math_Matrix4, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_TMP_M4, "Lcom/badlogic/gdx/math/Matrix4;", 28 },
	{ "controller", &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent, F_controller), "Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent, 0, "()V", 1 },
	{ "activateParticles", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_activateParticles_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_activateParticles_int_int, "(II)V", 1 },
	{ "killParticles", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_killParticles_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_killParticles_int_int, "(II)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_update, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_update, "()V", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_init, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_init, "()V", 1 },
	{ "start", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_start, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_start, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_end, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_end, "()V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_dispose, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_dispose, "()V", 1 },
	{ "copy", 0, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_copy_R_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent, "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent;", 1025 },
	{ "allocateChannels", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_allocateChannels, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_allocateChannels, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_write_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_write_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/utils/Json;)V", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent);

}

