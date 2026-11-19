#include "com/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_Configurable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData.h"
#include "com/badlogic/gdx/graphics/g3d/RenderableProvider.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "getRenderables", "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Pool;)V" },
	{ "save", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V" },
	{ "begin", "()V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData;)V" },
	{ "end", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g3d_RenderableProvider, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$Configurable, };

static MethodMetadata methods[] {
	{ "begin", 0, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_begin, "()V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_draw_com_badlogic_gdx_graphics_g3d_particles_renderers_ParticleControllerRenderData, "(Lcom/badlogic/gdx/graphics/g3d/particles/renderers/ParticleControllerRenderData;)V", 1025 },
	{ "end", 0, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_end, "()V", 1025 },
	{ "save", 0, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_save_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1025 },
	{ "load", 0, INDEX_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch_load_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_graphics_g3d_particles_ResourceData, "(Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1025 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/batches/ParticleBatch",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_batches_ParticleBatch);

}

