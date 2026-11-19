#include "com/badlogic/gdx/graphics/g3d/model/Node.h"
#include "com/badlogic/gdx/math/Quaternion.h"
#include "com/badlogic/gdx/graphics/g3d/model/Node.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/Mesh.h"
#include "com/badlogic/gdx/graphics/g3d/model/NodePart.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/graphics/g3d/model/MeshPart.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_model_Node(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_Node *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_translation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_translation)->clazz)->markFunction)((jobject) self->F_translation, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_scale)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scale)->clazz)->markFunction)((jobject) self->F_scale, mark, depth + 1);
	if (self->F_localTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_localTransform)->clazz)->markFunction)((jobject) self->F_localTransform, mark, depth + 1);
	if (self->F_globalTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_globalTransform)->clazz)->markFunction)((jobject) self->F_globalTransform, mark, depth + 1);
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_Node(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_inheritTransform = (jint(1));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Quaternion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Quaternion);
	init_com_badlogic_gdx_math_Quaternion_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_rotation = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_scale = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_localTransform = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_globalTransform = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_calculateLocalTransform_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:calculateLocalTransform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_isAnimated) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_localTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_translation;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Quaternion_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_localTransform;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_calculateWorldTransform_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:calculateWorldTransform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_inheritTransform) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_globalTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[1].o))->F_globalTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_localTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_globalTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_localTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_globalTransform;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:calculateTransforms", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateLocalTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateLocalTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateWorldTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateWorldTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	LINE_NUMBER(81);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(84);
	goto label_5;
	}
label_3:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:calculateBoneTransforms", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_invBoneBindTransforms;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_bones;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_invBoneBindTransforms;
	jint temp0 = (jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_bones;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	LINE_NUMBER(91);
	goto label_1;
label_4:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_invBoneBindTransforms;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(93);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_bones;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_invBoneBindTransforms;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[1].o))->F_keys;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g3d_model_Node, 1), sp[1].o)), (frame[5].i)))))->F_globalTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[3].o)))->F_invBoneBindTransforms;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK(sp[1].o))->F_values;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_math_Matrix4, 1), sp[1].o)), (frame[5].i))));
	LINE_NUMBER(93);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(95);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(96);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(98);
	((func_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(99);
	goto label_13;
	}
label_11:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:calculateBoundingBox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:calculateBoundingBox", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_inf_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:extendBoundingBox", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:extendBoundingBox", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parts;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(125);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o));
	LINE_NUMBER(127);
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[5].o)))->F_enabled) == 0) goto label_6;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_NodePart *) NULL_CHECK((frame[5].o)))->F_meshPart;
	frame[6].o = sp[0].o;
	LINE_NUMBER(129);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[6].o)))->F_mesh;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[6].o)))->F_offset;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[6].o)))->F_size;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_globalTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[6].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[6].o)))->F_offset), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[6].o)))->F_size));
	}
label_6:;
	{
	LINE_NUMBER(125);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(136);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o)), (frame[1].o));
	LINE_NUMBER(136);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_Node_attachTo_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:attachTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_Node_detach(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:detach", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(151);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_model_Node_hasChildren_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:hasChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_model_Node_getChildCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:getChildCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_getChild_int_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:getChild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_getChild_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:getChild", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g3d_model_Node_getNode_com_badlogic_gdx_utils_Array_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:addChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int])(ctx, (frame[0].o), (jint(-1)), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_model_Node_addChildren_java_lang_Iterable_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:addChildren", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_insertChildren_int_java_lang_Iterable_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_insertChildren_int_java_lang_Iterable_R_int])(ctx, (frame[0].o), (jint(-1)), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:insertChild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(201);
	frame[3].o = (frame[0].o);
	}
label_1:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(202);
	if ((frame[3].o) != (frame[2].o)) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot add a parent as a child"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(205);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean])(ctx, (frame[3].o), (frame[2].o));
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Could not remove child from its current parent"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(206);
	if ((frame[1].i) < 0) goto label_7;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[1].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	}
label_10:;
	{
	LINE_NUMBER(211);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_model_Node_insertChildren_int_java_lang_Iterable_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:insertChildren", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(222);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp0 <= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[1].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	LINE_NUMBER(223);
	frame[3].i = (frame[1].i);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int])(ctx, sp[0].o, temp0, (frame[5].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:removeChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(236);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:getChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_model_Node_hasParent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:hasParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:copy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	clinit_com_badlogic_gdx_graphics_g3d_model_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node);
	init_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_set_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_set_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_Node_set_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	((func_com_badlogic_gdx_graphics_g3d_model_Node_detach) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_detach])(ctx, (frame[0].o));
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(277);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_isAnimated = ((jint)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_isAnimated);
	LINE_NUMBER(278);
	((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_inheritTransform = ((jint)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_inheritTransform);
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_translation;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_translation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Quaternion_set_com_badlogic_gdx_math_Quaternion_R_com_badlogic_gdx_math_Quaternion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_scale;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_localTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_localTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(283);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_globalTransform;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_globalTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parts;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[1].o)))->F_parts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_NodePart, sp[0].o));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_NodePart_copy_R_com_badlogic_gdx_graphics_g3d_model_NodePart) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_NodePart_copy_R_com_badlogic_gdx_graphics_g3d_model_NodePart])(ctx, (frame[3].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(287);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o));
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(291);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_model_Node_getNode_com_badlogic_gdx_utils_Array_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/Node:getNode", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_Node(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(299);
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(301);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(302);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o);
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(302);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(305);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o);
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK(sp[0].o))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(305);
	INST_IINC(6, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(308);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(309);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_Node *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_Node, sp[0].o))))->F_children;
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g3d_model_Node_getNode_com_badlogic_gdx_utils_Array_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node(ctx, sp[0].o, (frame[1].o), (jint(1)), (frame[3].i));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_19;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_19:;
	{
	LINE_NUMBER(309);
	INST_IINC(6, 1);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_Node[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateLocalTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateWorldTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_attachTo_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_detach,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_hasChildren_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_getChildCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_getChild_int_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_getChild_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_addChildren_java_lang_Iterable_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_insertChildren_int_java_lang_Iterable_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_Node_set_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_model_Node,
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
	{ "calculateLocalTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "calculateWorldTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "calculateTransforms", "(Z)V" },
	{ "calculateBoneTransforms", "(Z)V" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "calculateBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;Z)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "extendBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "extendBoundingBox", "(Lcom/badlogic/gdx/math/collision/BoundingBox;Z)Lcom/badlogic/gdx/math/collision/BoundingBox;" },
	{ "attachTo", "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)V" },
	{ "detach", "()V" },
	{ "hasChildren", "()Z" },
	{ "getChildCount", "()I" },
	{ "getChild", "(I)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "getChild", "(Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "addChild", "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)I" },
	{ "addChildren", "(Ljava/lang/Iterable;)I" },
	{ "insertChild", "(ILcom/badlogic/gdx/graphics/g3d/model/Node;)I" },
	{ "insertChildren", "(ILjava/lang/Iterable;)I" },
	{ "removeChild", "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)Z" },
	{ "getChildren", "()Ljava/lang/Iterable;" },
	{ "getParent", "()Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "hasParent", "()Z" },
	{ "copy", "()Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)Lcom/badlogic/gdx/graphics/g3d/model/Node;" },
};

static FieldMetadata fields[] {
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_id), "Ljava/lang/String;", 1 },
	{ "inheritTransform", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_inheritTransform), "Z", 1 },
	{ "isAnimated", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_isAnimated), "Z", 1 },
	{ "translation", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_translation), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "rotation", &class_com_badlogic_gdx_math_Quaternion, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_rotation), "Lcom/badlogic/gdx/math/Quaternion;", 17 },
	{ "scale", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_scale), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "localTransform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_localTransform), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "globalTransform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_globalTransform), "Lcom/badlogic/gdx/math/Matrix4;", 17 },
	{ "parts", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_parts), "Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "parent", &class_com_badlogic_gdx_graphics_g3d_model_Node, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_parent), "Lcom/badlogic/gdx/graphics/g3d/model/Node;", 4 },
	{ "children", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_model_Node, F_children), "Lcom/badlogic/gdx/utils/Array;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_Node, 0, "()V", 1 },
	{ "calculateLocalTransform", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateLocalTransform_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateLocalTransform_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "calculateWorldTransform", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateWorldTransform_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateWorldTransform_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1 },
	{ "calculateTransforms", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateTransforms_boolean, "(Z)V", 1 },
	{ "calculateBoneTransforms", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoneTransforms_boolean, "(Z)V", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "calculateBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;Z)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "extendBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "extendBoundingBox", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_extendBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_boolean_R_com_badlogic_gdx_math_collision_BoundingBox, "(Lcom/badlogic/gdx/math/collision/BoundingBox;Z)Lcom/badlogic/gdx/math/collision/BoundingBox;", 1 },
	{ "attachTo", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_attachTo_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_attachTo_com_badlogic_gdx_graphics_g3d_model_Node, "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)V", 1 },
	{ "detach", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_detach, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_detach, "()V", 1 },
	{ "hasChildren", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_hasChildren_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_hasChildren_R_boolean, "()Z", 1 },
	{ "getChildCount", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_getChildCount_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChildCount_R_int, "()I", 1 },
	{ "getChild", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_getChild_int_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChild_int_R_com_badlogic_gdx_graphics_g3d_model_Node, "(I)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "getChild", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_getChild_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChild_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "addChild", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_addChild_com_badlogic_gdx_graphics_g3d_model_Node_R_int, "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)I", 1 },
	{ "addChildren", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_addChildren_java_lang_Iterable_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_addChildren_java_lang_Iterable_R_int, "(Ljava/lang/Iterable;)I", 1 },
	{ "insertChild", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_insertChild_int_com_badlogic_gdx_graphics_g3d_model_Node_R_int, "(ILcom/badlogic/gdx/graphics/g3d/model/Node;)I", 1 },
	{ "insertChildren", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_insertChildren_int_java_lang_Iterable_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_insertChildren_int_java_lang_Iterable_R_int, "(ILjava/lang/Iterable;)I", 1 },
	{ "removeChild", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_removeChild_com_badlogic_gdx_graphics_g3d_model_Node_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)Z", 1 },
	{ "getChildren", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getChildren_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1 },
	{ "getParent", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_getParent_R_com_badlogic_gdx_graphics_g3d_model_Node, "()Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "hasParent", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_hasParent_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_hasParent_R_boolean, "()Z", 1 },
	{ "copy", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_copy_R_com_badlogic_gdx_graphics_g3d_model_Node, "()Lcom/badlogic/gdx/graphics/g3d/model/Node;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_Node_set_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_model_Node, VTABLE_com_badlogic_gdx_graphics_g3d_model_Node_set_com_badlogic_gdx_graphics_g3d_model_Node_R_com_badlogic_gdx_graphics_g3d_model_Node, "(Lcom/badlogic/gdx/graphics/g3d/model/Node;)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 4 },
	{ "getNode", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_model_Node_getNode_com_badlogic_gdx_utils_Array_java_lang_String_boolean_boolean_R_com_badlogic_gdx_graphics_g3d_model_Node, 0, "(Lcom/badlogic/gdx/utils/Array;Ljava/lang/String;ZZ)Lcom/badlogic/gdx/graphics/g3d/model/Node;", 9 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_Node{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_Node),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_Node,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_Node = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_Node);

}

