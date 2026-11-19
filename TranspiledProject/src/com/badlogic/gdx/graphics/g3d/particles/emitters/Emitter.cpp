#include "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter.h"
#include "java/lang/Integer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (jint(4));
	LINE_NUMBER(36);
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(39);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (jint(4));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_particles;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleController *) NULL_CHECK(sp[0].o))->F_particles;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size = (jint(0));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:isComplete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_percent), (jfloat(1)), -1)) < 0) goto label_1;
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

jint M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMinParticleCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:getMinParticleCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMinParticleCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:setMinParticleCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount = (frame[1].i);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMaxParticleCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:getMaxParticleCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMaxParticleCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:setMaxParticleCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = (frame[1].i);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setParticleCount_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:setParticleCount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(73);
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMinParticleCount_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMinParticleCount_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(74);
	((func_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMaxParticleCount_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMaxParticleCount_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount = ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[1].o)))->F_minParticleCount);
	LINE_NUMBER(79);
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount = ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[1].o)))->F_maxParticleCount);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_write_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"minParticleCount"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_minParticleCount));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxParticleCount"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK((frame[0].o)))->F_maxParticleCount));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"minParticleCount"_j));
	clinit_java_lang_Integer(ctx);
	sp[3].o = (jobject)SF_java_lang_Integer_TYPE;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK(sp[0].o))->F_minParticleCount = temp0;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"maxParticleCount"_j));
	clinit_java_lang_Integer(ctx);
	sp[3].o = (jobject)SF_java_lang_Integer_TYPE;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[1].o)));
	((com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter *) NULL_CHECK(sp[0].o))->F_maxParticleCount = temp1;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_write_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_activateParticles_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_killParticles_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_update,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_init,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_start,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_end,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_allocateChannels,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMinParticleCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMinParticleCount_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMaxParticleCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMaxParticleCount_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setParticleCount_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter,
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
	{ "isComplete", "()Z" },
	{ "getMinParticleCount", "()I" },
	{ "setMinParticleCount", "(I)V" },
	{ "getMaxParticleCount", "()I" },
	{ "setMaxParticleCount", "(I)V" },
	{ "setParticleCount", "(II)V" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/particles/emitters/Emitter;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Json$Serializable, };

static FieldMetadata fields[] {
	{ "minParticleCount", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, F_minParticleCount), "I", 1 },
	{ "maxParticleCount", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, F_maxParticleCount), "I", 1 },
	{ "percent", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, F_percent), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/emitters/Emitter;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, 0, "()V", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_init, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_init, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_end, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_end, "()V", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_isComplete_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_isComplete_R_boolean, "()Z", 1 },
	{ "getMinParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMinParticleCount_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMinParticleCount_R_int, "()I", 1 },
	{ "setMinParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMinParticleCount_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMinParticleCount_int, "(I)V", 1 },
	{ "getMaxParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMaxParticleCount_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_getMaxParticleCount_R_int, "()I", 1 },
	{ "setMaxParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMaxParticleCount_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setMaxParticleCount_int, "(I)V", 1 },
	{ "setParticleCount", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setParticleCount_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_setParticleCount_int_int, "(II)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_set_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter, "(Lcom/badlogic/gdx/graphics/g3d/particles/emitters/Emitter;)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_write_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_write_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/utils/Json;)V", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/emitters/Emitter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_emitters_Emitter);

}

