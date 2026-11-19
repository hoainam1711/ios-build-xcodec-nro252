#include "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver *) object;
}

void clinit_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver:resolve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
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
	{ "resolve", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_assets_loaders_FileHandleResolver, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver, 0, "()V", 1 },
	{ "resolve", (intptr_t) M_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver = registerClass(&class_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver);

}

