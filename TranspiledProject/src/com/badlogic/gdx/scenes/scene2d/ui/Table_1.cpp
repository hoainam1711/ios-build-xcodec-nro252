#include "com/badlogic/gdx/scenes/scene2d/ui/Table_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Cell.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_1.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Table$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Pool(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Table$1 *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Pool(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Table$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table$1:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(53);
	init_com_badlogic_gdx_utils_Pool(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table$1:newObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell);
	init_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table$1:newObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Table$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_free_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_fill_int,
	(void *) M_com_badlogic_gdx_utils_Pool_reset_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_discard_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Pool_clear,
	(void *) M_com_badlogic_gdx_utils_Pool_getFree_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
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
	{ "newObject", "()Ljava/lang/Object;" },
	{ "obtain", "()Ljava/lang/Object;" },
	{ "free", "(Ljava/lang/Object;)V" },
	{ "fill", "(I)V" },
	{ "reset", "(Ljava/lang/Object;)V" },
	{ "discard", "(Ljava/lang/Object;)V" },
	{ "freeAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clear", "()V" },
	{ "getFree", "()I" },
	{ "newObject", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Table$1, 0, "()V", 0 },
	{ "newObject", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 4 },
	{ "newObject", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table$1_newObject_R_java_lang_Object, "()Ljava/lang/Object;", 4164 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Table$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Table$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Pool,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Table$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Table$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Table$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Table$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Table$1);

}

