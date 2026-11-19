#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader_ParticleEffectSaveParameter.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader_ParticleEffectSaveParameter.h"
#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) object;
	if (self->F_batches)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batches)->clazz)->markFunction)((jobject) self->F_batches, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_manager)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_manager)->clazz)->markFunction)((jobject) self->F_manager, mark, depth + 1);
	if (self->F_jsonOutputType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_jsonOutputType)->clazz)->markFunction)((jobject) self->F_jsonOutputType, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectSaveParameter:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[4].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_JsonWriter$OutputType_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_JsonWriter$OutputType_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectSaveParameter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(174);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(175);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[0].o)))->F_batches = (jref) (frame[3].o);
	LINE_NUMBER(176);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(177);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[0].o)))->F_manager = (jref) (frame[2].o);
	LINE_NUMBER(178);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[0].o)))->F_jsonOutputType = (jref) (frame[4].o);
	LINE_NUMBER(179);
	((com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter *) NULL_CHECK((frame[0].o)))->F_prettyPrint = (frame[5].i);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter[] {
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
	{ "batches", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, F_batches), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "file", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, F_file), "Lcom/badlogic/gdx/files/FileHandle;", 0 },
	{ "manager", &class_com_badlogic_gdx_assets_AssetManager, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, F_manager), "Lcom/badlogic/gdx/assets/AssetManager;", 0 },
	{ "jsonOutputType", &class_com_badlogic_gdx_utils_JsonWriter$OutputType, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, F_jsonOutputType), "Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 0 },
	{ "prettyPrint", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter, F_prettyPrint), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetManager_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_JsonWriter$OutputType_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetManager;Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/JsonWriter$OutputType;Z)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleEffectLoader$ParticleEffectSaveParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleEffectLoader$ParticleEffectSaveParameter);

}

