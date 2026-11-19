#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_Node.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_Selection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Tree$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_Selection(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_com_badlogic_gdx_scenes_scene2d_ui_Tree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_utils_Selection(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$1:changed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_size_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_size_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case 0: goto label_1;
		case 1: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_rangeStart = (jref) (jobject(nullptr));
	LINE_NUMBER(73);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_first_R_java_lang_Object])(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_rangeStart = (jref) (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[1].o));
	}
label_3:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isDisabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_choose_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_hasItems_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_notEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_size_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_items_R_com_badlogic_gdx_utils_OrderedSet,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_snapshot,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_revert,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_cleanup,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_set_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_remove_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_removeAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_fireChangeEvent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getLastSelected_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getToggle_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setToggle_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getRequired_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setRequired_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_setProgrammaticChangeEvents_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Selection_getProgrammaticChangeEvents_R_boolean,
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
	{ "setDisabled", "(Z)V" },
	{ "isDisabled", "()Z" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "choose", "(Ljava/lang/Object;)V" },
	{ "hasItems", "()Z" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "size", "()I" },
	{ "items", "()Lcom/badlogic/gdx/utils/OrderedSet;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "snapshot", "()V" },
	{ "revert", "()V" },
	{ "cleanup", "()V" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "setAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "remove", "(Ljava/lang/Object;)V" },
	{ "removeAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clear", "()V" },
	{ "changed", "()V" },
	{ "fireChangeEvent", "()Z" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "getLastSelected", "()Ljava/lang/Object;" },
	{ "toArray", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "toArray", "(Lcom/badlogic/gdx/utils/Array;)Lcom/badlogic/gdx/utils/Array;" },
	{ "getToggle", "()Z" },
	{ "setToggle", "(Z)V" },
	{ "getMultiple", "()Z" },
	{ "setMultiple", "(Z)V" },
	{ "getRequired", "()Z" },
	{ "setRequired", "(Z)V" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getProgrammaticChangeEvents", "()Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Tree, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_com_badlogic_gdx_scenes_scene2d_ui_Tree, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;)V", 0 },
	{ "changed", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_changed, "()V", 4 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Tree$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Tree$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_Selection,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Tree$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Tree$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Tree$1);

}

