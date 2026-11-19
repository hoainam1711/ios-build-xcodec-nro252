#include "com/badlogic/gdx/graphics/g3d/model/NodeAnimation.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g3d/model/Node.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodeAnimation.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) object;
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
	if (self->F_translation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_translation)->clazz)->markFunction)((jobject) self->F_translation, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_scaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scaling)->clazz)->markFunction)((jobject) self->F_scaling, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodeAnimation:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[0].o)))->F_translation = (jref) (jobject(nullptr));
	LINE_NUMBER(33);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (jobject(nullptr));
	LINE_NUMBER(35);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_NodeAnimation[] {
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
	{ "node", &class_com_badlogic_gdx_graphics_g3d_model_Node, offsetof(com_badlogic_gdx_graphics_g3d_model_NodeAnimation, F_node), "Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "translation", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_NodeAnimation, F_translation), "Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "rotation", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_NodeAnimation, F_rotation), "Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "scaling", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_NodeAnimation, F_scaling), "Lcom/badlogic/gdx/utils/Array;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_NodeAnimation, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_NodeAnimation{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/NodeAnimation",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_NodeAnimation),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_NodeAnimation,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_NodeAnimation,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_NodeAnimation,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_NodeAnimation = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_NodeAnimation);

}

