#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent.h"
#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) object;
	if (self->F_batch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batch)->clazz)->markFunction)((jobject) self->F_batch, mark, depth + 1);
	if (self->F_renderData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderData)->clazz)->markFunction)((jobject) self->F_renderData, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx, (frame[0].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) NULL_CHECK((frame[0].o)))->F_renderData = (jref) (frame[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) NULL_CHECK((frame[0].o)))->F_renderData;
	((func_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_draw_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_draw_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_setBatch_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer:setBatch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_isCompatible_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_isCompatible_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) NULL_CHECK((frame[0].o)))->F_batch = (jref) (frame[1].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) NULL_CHECK((frame[0].o)))->F_renderData;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer *) NULL_CHECK((frame[0].o)))->F_renderData;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent *) NULL_CHECK((frame[0].o)))->F_controller;
	((com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_update,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_init,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_start,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_end,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent_allocateChannels,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_setBatch_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean,
	(void *) nullptr,
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
	{ "setBatch", "(Lcom/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch;)Z" },
	{ "isCompatible", "(Lcom/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch;)Z" },
};

static FieldMetadata fields[] {
	{ "batch", &class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch, offsetof(com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer, F_batch), "Lcom/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch;", 4 },
	{ "renderData", &class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, offsetof(com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer, F_renderData), "Lcom/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData;)V", 4 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_update, VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_update, "()V", 1 },
	{ "setBatch", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_setBatch_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_setBatch_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch;)Z", 1 },
	{ "isCompatible", 0, VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_isCompatible_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch;)Z", 1025 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController, VTABLE_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer_set_com_badlogic_gdx_graphics_g3d_particles_ParticleController, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderer",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderer);

}

