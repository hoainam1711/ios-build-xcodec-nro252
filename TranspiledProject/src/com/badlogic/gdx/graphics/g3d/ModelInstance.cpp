#include "com/badlogic/gdx/graphics/g3d/ModelInstance.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/model/Node.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodeAnimation.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "com/badlogic/gdx/graphics/g3d/Model.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodeKeyframe.h"
#include "com/badlogic/gdx/graphics/g3d/Renderable.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodePart.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/graphics/g3d/RenderableProvider.h"
#include "com/badlogic/gdx/graphics/g3d/ModelInstance.h"
#include "com/badlogic/gdx/graphics/g3d/model/Animation.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {

jbool SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes;

void mark_com_badlogic_gdx_graphics_g3d_ModelInstance(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_ModelInstance *) object;
	if (self->F_materials)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_materials)->clazz)->markFunction)((jobject) self->F_materials, mark, depth + 1);
	if (self->F_nodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nodes)->clazz)->markFunction)((jobject) self->F_nodes, mark, depth + 1);
	if (self->F_animations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_animations)->clazz)->markFunction)((jobject) self->F_animations, mark, depth + 1);
	if (self->F_model)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_model)->clazz)->markFunction)((jobject) self->F_model, mark, depth + 1);
	if (self->F_transform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transform)->clazz)->markFunction)((jobject) self->F_transform, mark, depth + 1);
	if (self->F_userData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_userData)->clazz)->markFunction)((jobject) self->F_userData, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), (jobject(nullptr)))));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(69);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o), (jint(0)), (jint(0)), (frame[3].i));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(77);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(0)), (jint(0)), (frame[4].i));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_java_lang_String_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(86);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o), (jint(1)), (frame[3].i), (frame[4].i));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(97);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)), (frame[4].i), (frame[5].i));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_java_lang_String_boolean_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(107);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(118);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i), (frame[5].i), (frame[6].i), (clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4, jbool param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(128);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	LINE_NUMBER(129);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_model = (jref) (frame[1].o);
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(2);
label_7:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Model_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[1].o), (frame[3].o), (frame[4].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[9].o));
	frame[8].o = sp[1].o;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	if ((frame[6].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	sp += 1;
	if ((frame[5].i) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[9].o)))->F_globalTransform;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[-1].o))->F_localTransform;
label_15:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[8].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[8].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_idt_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[8].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(138);
	if ((frame[5].i) == 0) goto label_19;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_hasParent_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_hasParent_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[9].o));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[1].o))->F_globalTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(139);
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[1].o)))->F_animations;
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean])(ctx, sp[0].o, sp[1].o, (frame[7].i));
	LINE_NUMBER(141);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms])(ctx, (frame[0].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(150);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	LINE_NUMBER(151);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_model = (jref) (frame[1].o);
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(2);
label_7:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(153);
	if ((frame[3].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[1].o)))->F_nodes;
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[1].o)))->F_nodes;
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[3].o));
	}
label_11:;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[1].o)))->F_animations;
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean])(ctx, sp[0].o, sp[1].o, (clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes));
	LINE_NUMBER(158);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms])(ctx, (frame[0].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(163);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_utils_Array(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(168);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_utils_Array_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_utils_Array_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(172);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	LINE_NUMBER(173);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_model = (jref) (frame[1].o);
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(2);
label_7:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[1].o)))->F_nodes;
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_Model *) NULL_CHECK((frame[1].o)))->F_animations;
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean])(ctx, sp[0].o, sp[1].o, (frame[4].i));
	LINE_NUMBER(177);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms])(ctx, (frame[0].o));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(182);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(188);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_setToTranslation_float_float_float_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(194);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), (jobject(nullptr)))));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[1].o)))->F_transform;
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_cpy_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_cpy_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[2].o);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(204);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_math_Matrix4_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_math_Matrix4_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(208);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_nodes = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_animations = (jref) sp[1].o;
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[1].o)))->F_model;
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_model = (jref) sp[1].o;
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(2);
label_7:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[1].o)))->F_nodes;
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[1].o)))->F_animations;
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean])(ctx, sp[0].o, sp[1].o, (frame[3].i));
	LINE_NUMBER(213);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms])(ctx, (frame[0].o));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_copy_R_com_badlogic_gdx_graphics_g3d_ModelInstance(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_ModelInstance);
	init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyNodes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[4].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(226);
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyNodes", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(230);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(232);
	frame[6].o = (frame[2].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_7;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(233);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[5].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[5].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(232);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(230);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(239);
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyNodes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(243);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(246);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[5].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[5].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	goto label_7;
	}
label_9:;
	LINE_NUMBER(250);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(243);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(252);
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:invalidate", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_parts;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_parts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[4].o)))->F_invBoneBindTransforms;
	frame[5].o = sp[0].o;
	LINE_NUMBER(261);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(262);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[5].o)))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[0].o = checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g3d_model_Node, 1), sp[0].o);
	jint temp0 = frame[6].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[5].o)))->F_keys;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g3d_model_Node, 1), sp[2].o)), (frame[6].i)))))->F_id;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(262);
	INST_IINC(6, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[4].o)))->F_material;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[4].o)))->F_material;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(268);
	if ((frame[6].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[4].o)))->F_material;
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_Material_copy_R_com_badlogic_gdx_graphics_g3d_Material) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_Material_copy_R_com_badlogic_gdx_graphics_g3d_Material])(ctx, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[1].o))->F_material = (jref) sp[2].o;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[2].o);
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(271);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[6].i));
	((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK(sp[0].o))->F_material = (jref) (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, sp[1].o));
	}
label_12:;
	{
	LINE_NUMBER(258);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(274);
	frame[2].i = (jint(0));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_getChildCount_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChildCount_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_18:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_getChild_int_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChild_int_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[1].o), (frame[2].i));
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	INST_IINC(2, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:invalidate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[1].o)));
	LINE_NUMBER(282);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyAnimations", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation, sp[0].o));
	LINE_NUMBER(291);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean])(ctx, (frame[0].o), (frame[3].o), (clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes));
	LINE_NUMBER(292);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(293);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyAnimations", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation, sp[0].o));
	LINE_NUMBER(300);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[2].i));
	LINE_NUMBER(301);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(302);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyAnimation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean])(ctx, (frame[0].o), (frame[1].o), (clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx), (jint)SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:copyAnimation", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(314);
	clinit_com_badlogic_gdx_graphics_g3d_model_Animation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation);
	init_com_badlogic_gdx_graphics_g3d_model_Animation(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[1].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(316);
	((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[3].o)))->F_duration = ((jfloat)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[1].o)))->F_duration);
	LINE_NUMBER(317);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[1].o)))->F_nodeAnimations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeAnimation, sp[0].o));
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_node;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[1].o))->F_id;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(319);
	if ((frame[6].o) != nullptr) goto label_8;
	}
	goto label_4;
label_8:;
	{
	LINE_NUMBER(320);
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeAnimation);
	init_com_badlogic_gdx_graphics_g3d_model_NodeAnimation(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(321);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_node = (jref) (frame[6].o);
	LINE_NUMBER(322);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_translation;
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(324);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_rotation;
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(325);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_scaling;
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_translation;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(329);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe, sp[0].o));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_translation;
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_model_NodeKeyframe *) NULL_CHECK((frame[9].o)))->F_keytime;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeKeyframe *) NULL_CHECK((frame[9].o)))->F_value;
	init_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe_float_java_lang_Object(ctx, sp[1].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[2].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_rotation;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(333);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(334);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_25:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe, sp[0].o));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_rotation;
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_model_NodeKeyframe *) NULL_CHECK((frame[9].o)))->F_keytime;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeKeyframe *) NULL_CHECK((frame[9].o)))->F_value;
	init_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe_float_java_lang_Object(ctx, sp[1].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_math_Quaternion, sp[2].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_scaling;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK(sp[0].o))->F_scaling = (jref) sp[1].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[5].o)))->F_scaling;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_30:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe, sp[0].o));
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_scaling;
	clinit_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g3d_model_NodeKeyframe *) NULL_CHECK((frame[9].o)))->F_keytime;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeKeyframe *) NULL_CHECK((frame[9].o)))->F_value;
	init_com_badlogic_gdx_graphics_g3d_model_NodeKeyframe_float_java_lang_Object(ctx, sp[1].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[2].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_30;
	}
label_15:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_translation;
	if (sp[0].o != nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_rotation;
	if (sp[0].o != nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodeAnimation *) NULL_CHECK((frame[7].o)))->F_scaling;
	if (sp[0].o == nullptr) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[3].o)))->F_nodeAnimations;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_34:;
	LINE_NUMBER(345);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK((frame[3].o)))->F_nodeAnimations;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_animations;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_35:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getRenderables", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(356);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[4].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(357);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(358);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getRenderable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, (jint(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_Renderable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_Renderable])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[2].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getRenderable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_parts;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[3].o, (jint(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[3].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getRenderable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_NodePart_setRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_NodePart_setRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_bones;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_worldTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_globalTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_worldTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK((frame[1].o)))->F_worldTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_idt_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_userData;
	((com_badlogic_gdx_graphics_g3d_Renderable *) NULL_CHECK(sp[0].o))->F_userData = (jref) sp[1].o;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getRenderables", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_parts;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_parts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o));
	LINE_NUMBER(385);
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[5].o)))->F_enabled) == 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable])(ctx, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Renderable, sp[2].o)), (frame[1].o), (frame[5].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(386);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(390);
	((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[5].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(391);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(392);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:calculateTransforms", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[1].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(404);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (jint(1)));
	LINE_NUMBER(404);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(407);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (jint(1)));
	LINE_NUMBER(407);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:calculateBoundingBox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:extendBoundingBox", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(426);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (frame[1].o));
	LINE_NUMBER(426);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getAnimation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getAnimation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_animations;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(443);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(444);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_animations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(444);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(447);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_animations;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Animation, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Animation *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(447);
	INST_IINC(5, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getMaterial", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getMaterial", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(465);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(466);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(466);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(469);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_Material, sp[0].o);
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_Material *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(469);
	INST_IINC(5, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getNode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:getNode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_ModelInstance *) NULL_CHECK((frame[0].o)))->F_nodes;
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g3d_model_Node_getNode_com_badlogic_gdx_utils_Array_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/ModelInstance:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	{
	LINE_NUMBER(43);
	clinit_com_badlogic_gdx_graphics_g3d_ModelInstance(ctx);
	SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_ModelInstance[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copy_R_com_badlogic_gdx_graphics_g3d_ModelInstance,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_Renderable,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node,
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
	{ "getRenderables", "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Pool;)V" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/ModelInstance;" },
	{ "copyNodes", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "copyNodes", "(Lcom/badlogic/gdx/utils/Array;[Ljava/lang/String;)V" },
	{ "copyNodes", "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Array;)V" },
	{ "invalidate", "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)V" },
	{ "invalidate", "()V" },
	{ "copyAnimations", "(Ljava/lang/Iterable;)V" },
	{ "copyAnimations", "(Ljava/lang/Iterable;Z)V" },
	{ "copyAnimation", "(Lcom/badlogic/gdx/graphics/g3d/model/Animation;)V" },
	{ "copyAnimation", "(Lcom/badlogic/gdx/graphics/g3d/model/Animation;Z)V" },
	{ "getRenderable", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Lcom/badlogic/gdx/graphics/g3d/Renderable;" },
	{ "getRenderable", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;Lcom/badlogic/gdx/graphics/g3d/model/Node;)Lcom/badlogic/gdx/graphics/g3d/Renderable;" },
	{ "getRenderable", "(Lcom/badlogic/gdx/graphics/g3d/Renderable;Lcom/badlogic/gdx/graphics/g3d/model/Node;Lcom/badlogic/gdx/graphics/g3d/model/NodePart;)Lcom/badlogic/gdx/graphics/g3d/Renderable;" },
	{ "getRenderables", "(Lcom/badlogic/gdx/graphics/g3d/model/Node;Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Pool;)V" },
	{ "calculateTransforms", "()V" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "extendBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "getAnimation", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Animation;" },
	{ "getAnimation", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Animation;" },
	{ "getMaterial", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/Material;" },
	{ "getMaterial", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/Material;" },
	{ "getNode", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "getNode", "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "getNode", "(Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g3d_RenderableProvider, };

static FieldMetadata fields[] {
	{ "defaultShareKeyframes", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_ModelInstance_defaultShareKeyframes, "Z", 9 },
	{ "materials", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_ModelInstance, F_materials), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "nodes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_ModelInstance, F_nodes), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "animations", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_ModelInstance, F_animations), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "model", &class_com_badlogic_gdx_graphics_g3d_Model, offsetof(com_badlogic_gdx_graphics_g3d_ModelInstance, F_model), "Lcom/badlogic/gdx/graphics/g3d/Model;", 17 },
	{ "transform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g3d_ModelInstance, F_transform), "Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "userData", &class_java_lang_Object, offsetof(com_badlogic_gdx_graphics_g3d_ModelInstance, F_userData), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_java_lang_String_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Ljava/lang/String;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;Ljava/lang/String;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_java_lang_String_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Ljava/lang/String;ZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;Ljava/lang/String;ZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_java_lang_String_boolean_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Ljava/lang/String;ZZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;Ljava/lang/String;ZZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_java_lang_String_boolean_boolean_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;Ljava/lang/String;ZZZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_Array1_java_lang_String, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;[Ljava/lang/String;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_Array1_java_lang_String, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;[Ljava/lang/String;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_utils_Array_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/utils/Array;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_float_float_float, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;FFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_Model_com_badlogic_gdx_math_Matrix4, 0, "(Lcom/badlogic/gdx/graphics/g3d/Model;Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance, 0, "(Lcom/badlogic/gdx/graphics/g3d/ModelInstance;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_math_Matrix4, 0, "(Lcom/badlogic/gdx/graphics/g3d/ModelInstance;Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_graphics_g3d_ModelInstance_com_badlogic_gdx_math_Matrix4_boolean, 0, "(Lcom/badlogic/gdx/graphics/g3d/ModelInstance;Lcom/badlogic/gdx/math/Matrix4;Z)V", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copy_R_com_badlogic_gdx_graphics_g3d_ModelInstance, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copy_R_com_badlogic_gdx_graphics_g3d_ModelInstance, "()Lcom/badlogic/gdx/graphics/g3d/ModelInstance;", 1 },
	{ "copyNodes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 2 },
	{ "copyNodes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_Array1_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_Array1_java_lang_String, "(Lcom/badlogic/gdx/utils/Array;[Ljava/lang/String;)V", 130 },
	{ "copyNodes", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyNodes_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Array;)V", 2 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate_com_badlogic_gdx_graphics_g3d_model_Node, "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)V", 2 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_invalidate, "()V", 2 },
	{ "copyAnimations", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 1 },
	{ "copyAnimations", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimations_java_lang_Iterable_boolean, "(Ljava/lang/Iterable;Z)V", 1 },
	{ "copyAnimation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation, "(Lcom/badlogic/gdx/graphics/g3d/model/Animation;)V", 1 },
	{ "copyAnimation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_copyAnimation_com_badlogic_gdx_graphics_g3d_model_Animation_boolean, "(Lcom/badlogic/gdx/graphics/g3d/model/Animation;Z)V", 1 },
	{ "getRenderables", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Pool;)V", 1 },
	{ "getRenderable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_R_com_badlogic_gdx_graphics_g3d_Renderable, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;)Lcom/badlogic/gdx/graphics/g3d/Renderable;", 1 },
	{ "getRenderable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_Renderable, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_Renderable, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;Lcom/badlogic/gdx/graphics/g3d/model/Node;)Lcom/badlogic/gdx/graphics/g3d/Renderable;", 1 },
	{ "getRenderable", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderable_com_badlogic_gdx_graphics_g3d_Renderable_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_graphics_g3d_model_NodePart_R_com_badlogic_gdx_graphics_g3d_Renderable, "(Lcom/badlogic/gdx/graphics/g3d/Renderable;Lcom/badlogic/gdx/graphics/g3d/model/Node;Lcom/badlogic/gdx/graphics/g3d/model/NodePart;)Lcom/badlogic/gdx/graphics/g3d/Renderable;", 1 },
	{ "getRenderables", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getRenderables_com_badlogic_gdx_graphics_g3d_model_Node_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Pool, "(Lcom/badlogic/gdx/graphics/g3d/model/Node;Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Pool;)V", 4 },
	{ "calculateTransforms", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateTransforms, "()V", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "extendBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "getAnimation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Animation, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Animation;", 1 },
	{ "getAnimation", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getAnimation_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Animation, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Animation;", 1 },
	{ "getMaterial", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_Material, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "getMaterial", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getMaterial_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_Material, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/Material;", 1 },
	{ "getNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "getNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;Z)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "getNode", (intptr_t) M_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_ModelInstance_getNode_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_ModelInstance, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_ModelInstance{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/ModelInstance",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_ModelInstance),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_ModelInstance,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_ModelInstance,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_ModelInstance,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 45,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_ModelInstance = registerClass(&class_com_badlogic_gdx_graphics_g3d_ModelInstance);

}

