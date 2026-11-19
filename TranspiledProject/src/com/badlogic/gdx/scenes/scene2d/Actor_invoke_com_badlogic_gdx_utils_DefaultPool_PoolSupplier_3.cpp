#include "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_3.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_3.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3 *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3 *) self;
	auto object = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent);
	init_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent(ctx, object);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3_get_R_java_lang_Object,
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
	{ "get", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3_get_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3_get_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_Actor_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_3);

}

