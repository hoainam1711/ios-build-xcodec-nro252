#include "com/badlogic/gdx/graphics/g3d/particles/influencers/Influencer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleControllerComponent.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/influencers/Influencer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/influencers/Influencer",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleControllerComponent,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_influencers_Influencer);

}

