#include "com/badlogic/gdx/assets/AssetManager_RefCountedContainer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/assets/AssetManager_RefCountedContainer.h"
#include "com/badlogic/gdx/assets/AssetManager.h"

extern "C" {


void mark_com_badlogic_gdx_assets_AssetManager$RefCountedContainer(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) object;
	if (self->F_object)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_object)->clazz)->markFunction)((jobject) self->F_object, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_AssetManager$RefCountedContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_assets_AssetManager$RefCountedContainer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetManager$RefCountedContainer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetManager$RefCountedContainer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(813);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(815);
	((com_badlogic_gdx_assets_AssetManager$RefCountedContainer *) NULL_CHECK((frame[0].o)))->F_refCount = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_AssetManager$RefCountedContainer[] {
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
	{ "object", &class_java_lang_Object, offsetof(com_badlogic_gdx_assets_AssetManager$RefCountedContainer, F_object), "Ljava/lang/Object;", 0 },
	{ "refCount", &class_int, offsetof(com_badlogic_gdx_assets_AssetManager$RefCountedContainer, F_refCount), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetManager$RefCountedContainer, 0, "()V", 0 },
};

Class class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/AssetManager$RefCountedContainer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_assets_AssetManager$RefCountedContainer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_AssetManager$RefCountedContainer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_AssetManager$RefCountedContainer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_AssetManager$RefCountedContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetManager,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
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
static bool registered_com_badlogic_gdx_assets_AssetManager$RefCountedContainer = registerClass(&class_com_badlogic_gdx_assets_AssetManager$RefCountedContainer);

}

