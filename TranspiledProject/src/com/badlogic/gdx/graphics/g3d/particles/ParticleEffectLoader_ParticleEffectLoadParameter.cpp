#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader_ParticleEffectLoadParameter.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader_ParticleEffectLoadParameter.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter *) object;
	if (self->F_batches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batches)->clazz)->markFunction)((jobject) self->F_batches, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(155);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter *) NULL_CHECK((frame[0].o)))->F_batches = (jref) (frame[1].o);
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter[] {
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
	{ "batches", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter, F_batches), "Lcom/badlogic/gdx/utils/Array;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectLoadParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectLoadParameter);

}

