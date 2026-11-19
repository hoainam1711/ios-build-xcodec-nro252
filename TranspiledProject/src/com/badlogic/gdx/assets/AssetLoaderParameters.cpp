#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters_LoadedCallback.h"

extern "C" {


void mark_com_badlogic_gdx_assets_AssetLoaderParameters(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_AssetLoaderParameters *) object;
	if (self->F_loadedCallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadedCallback)->clazz)->markFunction)((jobject) self->F_loadedCallback, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetLoaderParameters:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_AssetLoaderParameters[] {
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback,
};

static FieldMetadata fields[] {
	{ "loadedCallback", &class_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback, offsetof(com_badlogic_gdx_assets_AssetLoaderParameters, F_loadedCallback), "Lcom/badlogic/gdx/assets/AssetLoaderParameters$LoadedCallback;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetLoaderParameters, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_assets_AssetLoaderParameters{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/AssetLoaderParameters",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_assets_AssetLoaderParameters),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_AssetLoaderParameters,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_AssetLoaderParameters,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_AssetLoaderParameters,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
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
static bool registered_com_badlogic_gdx_assets_AssetLoaderParameters = registerClass(&class_com_badlogic_gdx_assets_AssetLoaderParameters);

}

