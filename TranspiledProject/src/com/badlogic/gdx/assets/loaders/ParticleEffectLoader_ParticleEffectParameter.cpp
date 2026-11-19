#include "com/badlogic/gdx/assets/loaders/ParticleEffectLoader_ParticleEffectParameter.h"
#include "com/badlogic/gdx/assets/loaders/ParticleEffectLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) object;
	if (self->F_atlasFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atlasFile)->clazz)->markFunction)((jobject) self->F_atlasFile, mark, depth + 1);
	if (self->F_atlasPrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atlasPrefix)->clazz)->markFunction)((jobject) self->F_atlasPrefix, mark, depth + 1);
	if (self->F_imagesDir)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imagesDir)->clazz)->markFunction)((jobject) self->F_imagesDir, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ParticleEffectLoader$ParticleEffectParameter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter[] {
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
	{ "atlasFile", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter, F_atlasFile), "Ljava/lang/String;", 1 },
	{ "atlasPrefix", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter, F_atlasPrefix), "Ljava/lang/String;", 1 },
	{ "imagesDir", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter, F_imagesDir), "Lcom/badlogic/gdx/files/FileHandle;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/ParticleEffectLoader$ParticleEffectParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter = registerClass(&class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter);

}

