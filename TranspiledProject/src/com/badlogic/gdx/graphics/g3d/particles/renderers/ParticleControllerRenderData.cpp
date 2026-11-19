#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleController.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_FloatChannel.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData *) object;
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_positionChannel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_positionChannel)->clazz)->markFunction)((jobject) self->F_positionChannel, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData[] {
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
};

static FieldMetadata fields[] {
	{ "controller", &class_com_badlogic_gdx_graphics_g3d_particles_ParticleController, offsetof(com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, F_controller), "Lcom/badlogic/gdx/graphics/g3d/particles/ParticleController;", 1 },
	{ "positionChannel", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, offsetof(com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, F_positionChannel), "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$FloatChannel;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData);

}

