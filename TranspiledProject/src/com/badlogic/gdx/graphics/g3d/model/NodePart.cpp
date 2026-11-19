#include "com/badlogic/gdx/graphics/g3d/model/NodePart.h"
#include "com/badlogic/gdx/graphics/g3d/model/MeshPart.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/model/Node.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "com/badlogic/gdx/graphics/g3d/Renderable.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodePart.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_model_NodePart(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_NodePart *) object;
	if (self->F_meshPart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshPart)->clazz)->markFunction)((jobject) self->F_meshPart, mark, depth + 1);
	if (self->F_material)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_material)->clazz)->markFunction)((jobject) self->F_material, mark, depth + 1);
	if (self->F_invBoneBindTransforms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_invBoneBindTransforms)->clazz)->markFunction)((jobject) self->F_invBoneBindTransforms, mark, depth + 1);
	if (self->F_bones)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bones)->clazz)->markFunction)((jobject) self->F_bones, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_model_NodePart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_model_NodePart_com_badlogic_gdx_graphics_g3d_model_MeshPart_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(51);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(52);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_meshPart = (jref) (frame[1].o);
	LINE_NUMBER(53);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_material = (jref) (frame[2].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_NodePart_setRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:setRenderable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_material;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_material = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_meshPart;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_meshPart;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_bones = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_NodePart_copy_R_com_badlogic_gdx_graphics_g3d_model_NodePart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:copy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart);
	init_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_NodePart_set_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_model_NodePart) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_NodePart_set_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_model_NodePart])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_NodePart_set_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_model_NodePart(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_MeshPart);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[1].o)))->F_meshPart;
	init_com_badlogic_gdx_graphics_g3d_model_MeshPart_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[0].o))->F_meshPart = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[1].o)))->F_material;
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[0].o))->F_material = (jref) sp[1].o;
	LINE_NUMBER(77);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_enabled = ((jint)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[1].o)))->F_enabled);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[1].o)))->F_invBoneBindTransforms;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(79);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_invBoneBindTransforms = (jref) (jobject(nullptr));
	LINE_NUMBER(80);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones = (jref) (jobject(nullptr));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_invBoneBindTransforms;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ArrayMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ArrayMap);
	jint temp0 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[1].o)))->F_invBoneBindTransforms;
	jint temp1 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[2].o))->F_size;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_model_NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_model_NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_model_NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_model_NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[3].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o, sp[3].o);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[0].o))->F_invBoneBindTransforms = (jref) sp[1].o;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_invBoneBindTransforms;
	((func_com_badlogic_gdx_utils_ArrayMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_clear])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_invBoneBindTransforms;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[1].o)))->F_invBoneBindTransforms;
	((func_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_invBoneBindTransforms;
	if (temp0 == ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
label_12:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_invBoneBindTransforms;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Matrix4, ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[1].o))->F_size));
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[0].o))->F_bones = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(90);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[0].o)))->F_bones;
	jint temp0 = frame[2].i;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(90);
	INST_IINC(2, 1);
	goto label_14;
	}
label_7:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_model_NodePart_lambda$set$1_int_R_Array1_com_badlogic_gdx_math_Matrix4(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:lambda$set$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Matrix4, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_model_NodePart_lambda$set$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/NodePart:lambda$set$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_NodePart(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_NodePart[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_model_NodePart_setRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_NodePart_copy_R_com_badlogic_gdx_graphics_g3d_model_NodePart,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_NodePart_set_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_model_NodePart,
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
	{ "setRenderable", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Lcom/badlogic/gdx/graphics/g3d/Renderable;" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/model/NodePart;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/model/NodePart;)Lcom/badlogic/gdx/graphics/g3d/model/NodePart;" },
};

static FieldMetadata fields[] {
	{ "meshPart", &class_com_badlogic_gdx_graphics_g3d_model_MeshPart, offsetof(com_badlogic_gdx_graphics_g3d_model_NodePart, F_meshPart), "Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;", 1 },
	{ "material", &class_com_badlogic_gdx_graphics_g3d_Material, offsetof(com_badlogic_gdx_graphics_g3d_model_NodePart, F_material), "Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "invBoneBindTransforms", &class_com_badlogic_gdx_utils_ArrayMap, offsetof(com_badlogic_gdx_graphics_g3d_model_NodePart, F_invBoneBindTransforms), "Lcom/badlogic/gdx/utils/ArrayMap;", 1 },
	{ "bones", getArrayClass(&class_com_badlogic_gdx_math_Matrix4, 1), offsetof(com_badlogic_gdx_graphics_g3d_model_NodePart, F_bones), "[Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "enabled", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_model_NodePart, F_enabled), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_NodePart, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_NodePart_com_badlogic_gdx_graphics_g3d_model_MeshPart_com_badlogic_gdx_graphics_g3d_Material, 0, "(Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;Lcom/badlogic/gdx/graphics/g3d/Material;)V", 1 },
	{ "setRenderable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_NodePart_setRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable, VTABLE_com_badlogic_gdx_graphics_g3d_model_NodePart_setRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Lcom/badlogic/gdx/graphics/g3d/Renderable;", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_NodePart_copy_R_com_badlogic_gdx_graphics_g3d_model_NodePart, VTABLE_com_badlogic_gdx_graphics_g3d_model_NodePart_copy_R_com_badlogic_gdx_graphics_g3d_model_NodePart, "()Lcom/badlogic/gdx/graphics/g3d/model/NodePart;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_NodePart_set_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_model_NodePart, VTABLE_com_badlogic_gdx_graphics_g3d_model_NodePart_set_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_model_NodePart, "(Lcom/badlogic/gdx/graphics/g3d/model/NodePart;)Lcom/badlogic/gdx/graphics/g3d/model/NodePart;", 4 },
	{ "lambda$set$1", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_model_NodePart_lambda$set$1_int_R_Array1_com_badlogic_gdx_math_Matrix4, 0, "(I)[Lcom/badlogic/gdx/math/Matrix4;", 4106 },
	{ "lambda$set$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_model_NodePart_lambda$set$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_model_Node, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/model/Node;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_NodePart{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/NodePart",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_NodePart),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_NodePart,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_NodePart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_NodePart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_NodePart = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_NodePart);

}

