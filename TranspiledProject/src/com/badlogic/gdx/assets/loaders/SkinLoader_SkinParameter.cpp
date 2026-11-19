#include "com/badlogic/gdx/assets/loaders/SkinLoader_SkinParameter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/assets/loaders/SkinLoader.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/assets/loaders/SkinLoader_SkinParameter.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) object;
	if (self->F_textureAtlasPath)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureAtlasPath)->clazz)->markFunction)((jobject) self->F_textureAtlasPath, mark, depth + 1);
	if (self->F_resources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resources)->clazz)->markFunction)((jobject) self->F_resources, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(91);
	init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String_com_badlogic_gdx_utils_ObjectMap(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(102);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(103);
	((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[0].o)))->F_textureAtlasPath = (jref) (frame[1].o);
	LINE_NUMBER(104);
	((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[0].o)))->F_resources = (jref) (frame[2].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter[] {
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
	{ "textureAtlasPath", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, F_textureAtlasPath), "Ljava/lang/String;", 17 },
	{ "resources", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, F_resources), "Lcom/badlogic/gdx/utils/ObjectMap;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_com_badlogic_gdx_utils_ObjectMap, 0, "(Lcom/badlogic/gdx/utils/ObjectMap;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_java_lang_String_com_badlogic_gdx_utils_ObjectMap, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/ObjectMap;)V", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_SkinLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter = registerClass(&class_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter);

}

