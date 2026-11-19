#include "com/badlogic/gdx/graphics/Cubemap_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Cubemap_1.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters_LoadedCallback.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_Cubemap$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_Cubemap$1 *) object;
}

void clinit_com_badlogic_gdx_graphics_Cubemap$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_Cubemap$1_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap$1(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	((com_badlogic_gdx_graphics_Cubemap$1 *) NULL_CHECK((frame[0].o)))->F_val$refCount = (frame[1].i);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Cubemap$1_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap$1:finishedLoading", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(255);
	((func_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int])(ctx, (frame[1].o), (frame[2].o), ((jint)((com_badlogic_gdx_graphics_Cubemap$1 *) NULL_CHECK((frame[0].o)))->F_val$refCount));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Cubemap$1[] {
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
	(void *) M_com_badlogic_gdx_graphics_Cubemap$1_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class,
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
	{ "finishedLoading", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Ljava/lang/Class;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_assets_AssetLoaderParameters$LoadedCallback, };

static FieldMetadata fields[] {
	{ "val$refCount", &class_int, offsetof(com_badlogic_gdx_graphics_Cubemap$1, F_val$refCount), "I", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap$1_int, 0, "(I)V", 0 },
	{ "finishedLoading", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap$1_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_graphics_Cubemap$1_finishedLoading_com_badlogic_gdx_assets_AssetManager_java_lang_String_java_lang_Class, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_Cubemap$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Cubemap$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Cubemap$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Cubemap$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Cubemap$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Cubemap$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Cubemap$1 = registerClass(&class_com_badlogic_gdx_graphics_Cubemap$1);

}

