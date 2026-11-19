#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/Group_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/math/Affine2.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Cullable.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_Group_tmp;

void mark_com_badlogic_gdx_scenes_scene2d_Group(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_Group_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_Group_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_Group_tmp, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Actor(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_Group *) object;
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_worldTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_worldTransform)->clazz)->markFunction)((jobject) self->F_worldTransform, mark, depth + 1);
	if (self->F_computedTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_computedTransform)->clazz)->markFunction)((jobject) self->F_computedTransform, mark, depth + 1);
	if (self->F_oldTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oldTransform)->clazz)->markFunction)((jobject) self->F_oldTransform, mark, depth + 1);
	if (self->F_cullingArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cullingArea)->clazz)->markFunction)((jobject) self->F_cullingArea, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Group(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_SnapshotArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SnapshotArray);
	jint temp0 = jint(1);
	jint temp1 = jint(4);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_Group_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_Group_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_SnapshotArray_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Affine2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Affine2);
	init_com_badlogic_gdx_math_Affine2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK(sp[0].o))->F_worldTransform = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK(sp[0].o))->F_computedTransform = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK(sp[0].o))->F_oldTransform = (jref) sp[1].o;
	LINE_NUMBER(43);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:act", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(47);
	M_com_badlogic_gdx_scenes_scene2d_Actor_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(49);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(50);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_act_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_act_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (frame[1].f));
	LINE_NUMBER(49);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(57);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(59);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_3;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:drawChildren", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(67);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_color;
	frame[2].f = (temp0 * ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].o = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	frame[5].o = sp[0].o;
	LINE_NUMBER(71);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(73);
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(74);
	frame[7].f = ((frame[6].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[5].o)))->F_width));
	LINE_NUMBER(75);
	frame[8].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[5].o)))->F_y);
	LINE_NUMBER(76);
	frame[9].f = ((frame[8].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[5].o)))->F_height));
	LINE_NUMBER(77);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_11;
	}
	{
	LINE_NUMBER(78);
	frame[10].i = (jint(0));
	frame[11].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_14:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_15;
	}
	{
	LINE_NUMBER(79);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[10].i)));
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[12].o));
	if (temp0 != 0) goto label_18;
	}
	goto label_19;
label_18:;
	{
	LINE_NUMBER(81);
	frame[13].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[12].o)))->F_x);
	frame[14].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[12].o)))->F_y);
	LINE_NUMBER(82);
	if ((floatCompare((frame[13].f), (frame[7].f), 1)) > 0) goto label_19;
	}
	{
	if ((floatCompare((frame[14].f), (frame[9].f), 1)) > 0) goto label_19;
	}
	{
	if ((floatCompare(((frame[13].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[12].o)))->F_width)), (frame[6].f), -1)) < 0) goto label_19;
	}
	{
	if ((floatCompare(((frame[14].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[12].o)))->F_height)), (frame[8].f), -1)) < 0) goto label_19;
	}
	{
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[12].o), (frame[1].o), (frame[2].f));
	}
label_19:;
	{
	LINE_NUMBER(78);
	INST_IINC(10, 1);
	goto label_14;
	}
label_15:;
	goto label_23;
label_11:;
	{
	LINE_NUMBER(87);
	frame[10].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	frame[11].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(88);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(89);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(90);
	frame[12].i = (jint(0));
	frame[13].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_29:;
	{
	if ((frame[12].i) >= (frame[13].i)) goto label_30;
	}
	{
	LINE_NUMBER(91);
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[12].i)));
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[14].o));
	if (temp0 != 0) goto label_33;
	}
	goto label_34;
label_33:;
	{
	LINE_NUMBER(93);
	frame[15].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_x);
	frame[16].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_y);
	LINE_NUMBER(94);
	if ((floatCompare((frame[15].f), (frame[7].f), 1)) > 0) goto label_34;
	}
	{
	if ((floatCompare((frame[16].f), (frame[9].f), 1)) > 0) goto label_34;
	}
	{
	if ((floatCompare(((frame[15].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_width)), (frame[6].f), -1)) < 0) goto label_34;
	}
	{
	if ((floatCompare(((frame[16].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_height)), (frame[8].f), -1)) < 0) goto label_34;
	}
	{
	LINE_NUMBER(95);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_x = ((frame[15].f) + (frame[10].f));
	LINE_NUMBER(96);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_y = ((frame[16].f) + (frame[11].f));
	LINE_NUMBER(97);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[14].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(98);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_x = (frame[15].f);
	LINE_NUMBER(99);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[14].o)))->F_y = (frame[16].f);
	}
label_34:;
	{
	LINE_NUMBER(90);
	INST_IINC(12, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[10].f);
	LINE_NUMBER(103);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[11].f);
	}
label_23:;
	LINE_NUMBER(105);
	goto label_43;
label_5:;
	{
	LINE_NUMBER(107);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_44;
	}
	{
	LINE_NUMBER(108);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_47:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_48;
	}
	{
	LINE_NUMBER(109);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_51;
	}
	goto label_52;
label_51:;
	{
	LINE_NUMBER(111);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[8].o), (frame[1].o), (frame[2].f));
	}
label_52:;
	{
	LINE_NUMBER(108);
	INST_IINC(6, 1);
	goto label_47;
	}
label_48:;
	goto label_43;
label_44:;
	{
	LINE_NUMBER(115);
	frame[6].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(116);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(117);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(118);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_58:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_59;
	}
	{
	LINE_NUMBER(119);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[8].i)));
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[10].o));
	if (temp0 != 0) goto label_62;
	}
	goto label_63;
label_62:;
	{
	LINE_NUMBER(121);
	frame[11].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[10].o)))->F_x);
	frame[12].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[10].o)))->F_y);
	LINE_NUMBER(122);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[10].o)))->F_x = ((frame[11].f) + (frame[6].f));
	LINE_NUMBER(123);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[10].o)))->F_y = ((frame[12].f) + (frame[7].f));
	LINE_NUMBER(124);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[10].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(125);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[10].o)))->F_x = (frame[11].f);
	LINE_NUMBER(126);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[10].o)))->F_y = (frame[12].f);
	}
label_63:;
	{
	LINE_NUMBER(118);
	INST_IINC(8, 1);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(128);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[6].f);
	LINE_NUMBER(129);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[7].f);
	}
label_43:;
	{
	LINE_NUMBER(132);
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, (frame[3].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:drawDebug", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	((func_com_badlogic_gdx_scenes_scene2d_Group_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(139);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(140);
	((func_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(141);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_4;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:drawDebugChildren", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(152);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_3;
	}
	{
	LINE_NUMBER(153);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(154);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_10;
	}
	goto label_11;
label_10:;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_12;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) != 0) goto label_12;
	}
	goto label_11;
label_12:;
	{
	LINE_NUMBER(157);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[6].o), (frame[1].o));
	}
label_11:;
	{
	LINE_NUMBER(153);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(159);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush])(ctx, (frame[1].o));
	goto label_13;
	}
label_3:;
	{
	LINE_NUMBER(162);
	frame[4].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x);
	frame[5].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(163);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(164);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(165);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_19:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_20;
	}
	{
	LINE_NUMBER(166);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_23;
	}
	goto label_24;
label_23:;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_25;
	}
	{
	if ((isInstance(ctx, (frame[8].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) != 0) goto label_25;
	}
	goto label_24;
label_25:;
	{
	LINE_NUMBER(169);
	frame[9].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[8].o)))->F_x);
	frame[10].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[8].o)))->F_y);
	LINE_NUMBER(170);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[8].o)))->F_x = ((frame[9].f) + (frame[4].f));
	LINE_NUMBER(171);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[8].o)))->F_y = ((frame[10].f) + (frame[5].f));
	LINE_NUMBER(172);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[8].o), (frame[1].o));
	LINE_NUMBER(173);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[8].o)))->F_x = (frame[9].f);
	LINE_NUMBER(174);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[8].o)))->F_y = (frame[10].f);
	}
label_24:;
	{
	LINE_NUMBER(165);
	INST_IINC(6, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(176);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].f);
	LINE_NUMBER(177);
	((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	}
label_13:;
	{
	LINE_NUMBER(179);
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, (frame[2].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:computeTransform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_worldTransform;
	frame[1].o = sp[0].o;
	LINE_NUMBER(185);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originX);
	frame[3].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[1].o), (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_x) + (frame[2].f)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_y) + (frame[3].f)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_rotation), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(187);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_translate_float_float_R_com_badlogic_gdx_math_Affine2])(ctx, (frame[1].o), (-(frame[2].f)), (-(frame[3].f)));
	}
label_6:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(191);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(192);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[4].o)))->F_transform) == 0) goto label_10;
	}
	goto label_8;
label_10:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[4].o)))->F_parent;
	frame[4].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(195);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[4].o)))->F_worldTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Affine2_preMul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Affine2_preMul_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Affine2])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_computedTransform;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Affine2_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_computedTransform;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:applyTransform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_oldTransform;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Batch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(205);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setTransformMatrix_com_badlogic_gdx_math_Matrix4) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setTransformMatrix_com_badlogic_gdx_math_Matrix4, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:resetTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_oldTransform;
	((func_com_badlogic_gdx_graphics_g2d_Batch_setTransformMatrix_com_badlogic_gdx_math_Matrix4) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setTransformMatrix_com_badlogic_gdx_math_Matrix4, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:applyTransform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_oldTransform;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(219);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(220);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:resetTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_oldTransform;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setTransformMatrix_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:setCullingArea", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(233);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea = (jref) (frame[1].o);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:getCullingArea", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:hit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(243);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_disabled;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(245);
	clinit_com_badlogic_gdx_scenes_scene2d_Group(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Group_tmp;
	frame[4].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[6].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_5:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(248);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(249);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[4].o), (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[7].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(251);
	if ((frame[8].o) == nullptr) goto label_11;
	}
	INST_ALOAD(8);
	popStackFrame(ctx);
	INST_ARETURN();
label_11:;
	{
	LINE_NUMBER(247);
	INST_IINC(6, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:childrenChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:addActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(268);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(269);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	((func_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:addActorAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(281);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(285);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(286);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(287);
	((func_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:addActorBefore", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[3].i), (frame[2].o));
	LINE_NUMBER(299);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(300);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(301);
	((func_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:addActorAfter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[2].o)))->F_parent;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(313);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp1 == ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	if ((frame[3].i) != (jint(-1))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_insert_int_java_lang_Object])(ctx, sp[0].o, ((frame[3].i) + (jint(1))), (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(317);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(319);
	((func_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:removeActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:removeActor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(330);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[3].i), (frame[2].i));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:removeActorAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(344);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[4].o), (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(345);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_actorRemoved_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_actorRemoved_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[4].o), (frame[3].o));
	}
label_3:;
	{
	LINE_NUMBER(347);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(348);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(349);
	((func_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:clearChildren", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	((func_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:clearChildren", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(361);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(362);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(363);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(365);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_unfocus_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[6].o), (frame[5].o));
	}
label_7:;
	{
	LINE_NUMBER(367);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[5].o), (jobject(nullptr)));
	LINE_NUMBER(368);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[5].o), (jobject(nullptr)));
	LINE_NUMBER(361);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(372);
	((func_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	M_com_badlogic_gdx_scenes_scene2d_Actor_clear(ctx, (frame[0].o));
	LINE_NUMBER(378);
	((func_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(383);
	M_com_badlogic_gdx_scenes_scene2d_Actor_clear(ctx, (frame[0].o));
	LINE_NUMBER(384);
	((func_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:findActor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	LINE_NUMBER(391);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[1].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[1].o)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	}
label_6:;
	{
	LINE_NUMBER(391);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(393);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	LINE_NUMBER(395);
	if ((isInstance(ctx, (frame[5].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[5].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[5].o))), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(397);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(393);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:setStage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(406);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(407);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (frame[1].o));
	LINE_NUMBER(406);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(408);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:swapActor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(413);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	if ((frame[1].i) < (frame[3].i)) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(414);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	if ((frame[2].i) < (frame[3].i)) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_swap_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:swapActor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	frame[4].i = temp1;
	LINE_NUMBER(423);
	if ((frame[3].i) == (jint(-1))) goto label_3;
	}
	{
	if ((frame[4].i) != (jint(-1))) goto label_4;
	}
label_3:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_swap_int_int])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:getChild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:getChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:hasChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
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

void M_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:setTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(448);
	((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform = (frame[1].i);
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:isTransform", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_transform);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:localToDescendantCoordinates", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Actor *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(459);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Actor is not a descendant: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(461);
	if ((frame[3].o) == (frame[0].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:setDebug", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(469);
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(470);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	LINE_NUMBER(472);
	if ((isInstance(ctx, (frame[4].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(473);
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[4].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[4].o))), (frame[1].i), (frame[2].i));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(475);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean])(ctx, (frame[4].o), (frame[1].i));
	}
label_8:;
	LINE_NUMBER(477);
	goto label_4;
label_2:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:debugAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(483);
	((func_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean])(ctx, (frame[0].o), (jint(1)), (jint(1)));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[1].o = sp[0].o;
	LINE_NUMBER(490);
	((func_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(491);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:toString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(496);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(499);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(500);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(501);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"|  "_j))));
	LINE_NUMBER(501);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(503);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(504);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_scenes_scene2d_Group)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(505);
	((func_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[6].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Group, (frame[6].o))), (frame[1].o), ((frame[2].i) + (jint(1))));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(508);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	}
label_15:;
	{
	LINE_NUMBER(500);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_SnapshotArray_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_end])(ctx, sp[0].o);
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_Group_lambda$new$0_int_R_Array1_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Group(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Group:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Group(ctx);
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_Group(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_Group_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_Group[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "act", "(F)V" },
	{ "fire", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "notify", "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "remove", "()Z" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getCaptureListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "removeAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "firstAscendant", "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasParent", "()Z" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setParent", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "isTouchable", "()Z" },
	{ "getTouchable", "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;" },
	{ "setTouchable", "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V" },
	{ "isVisible", "()Z" },
	{ "setVisible", "(Z)V" },
	{ "ascendantsVisible", "()Z" },
	{ "ancestorsVisible", "()Z" },
	{ "hasKeyboardFocus", "()Z" },
	{ "hasScrollFocus", "()Z" },
	{ "isTouchFocusTarget", "()Z" },
	{ "isTouchFocusListener", "()Z" },
	{ "getUserObject", "()Ljava/lang/Object;" },
	{ "setUserObject", "(Ljava/lang/Object;)V" },
	{ "getX", "()F" },
	{ "getX", "(I)F" },
	{ "setX", "(F)V" },
	{ "setX", "(FI)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "setY", "(FI)V" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "positionChanged", "()V" },
	{ "sizeChanged", "()V" },
	{ "scaleChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "getOriginX", "()F" },
	{ "setOriginX", "(F)V" },
	{ "getOriginY", "()F" },
	{ "setOriginY", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "getScaleX", "()F" },
	{ "setScaleX", "(F)V" },
	{ "getScaleY", "()F" },
	{ "setScaleY", "(F)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "setZIndex", "(I)Z" },
	{ "getZIndex", "()I" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parentToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToParentCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToAscendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToActorCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "drawDebug", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "drawDebugBounds", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "setDebug", "(Z)V" },
	{ "getDebug", "()Z" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setCullingArea", "(Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "drawChildren", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "drawDebugChildren", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "computeTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "getCullingArea", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "childrenChanged", "()V" },
	{ "addActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAt", "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorBefore", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAfter", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z" },
	{ "removeActorAt", "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "clearChildren", "()V" },
	{ "clearChildren", "(Z)V" },
	{ "clear", "(Z)V" },
	{ "findActor", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "getChild", "(I)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getChildren", "()Lcom/badlogic/gdx/utils/SnapshotArray;" },
	{ "hasChildren", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "isTransform", "()Z" },
	{ "localToDescendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setDebug", "(ZZ)V" },
	{ "debugAll", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, };

static FieldMetadata fields[] {
	{ "tmp", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_Group_tmp, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "children", &class_com_badlogic_gdx_utils_SnapshotArray, offsetof(com_badlogic_gdx_scenes_scene2d_Group, F_children), "Lcom/badlogic/gdx/utils/SnapshotArray;", 16 },
	{ "worldTransform", &class_com_badlogic_gdx_math_Affine2, offsetof(com_badlogic_gdx_scenes_scene2d_Group, F_worldTransform), "Lcom/badlogic/gdx/math/Affine2;", 18 },
	{ "computedTransform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_scenes_scene2d_Group, F_computedTransform), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "oldTransform", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_scenes_scene2d_Group, F_oldTransform), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "transform", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_Group, F_transform), "Z", 0 },
	{ "cullingArea", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_Group, F_cullingArea), "Lcom/badlogic/gdx/math/Rectangle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Group, 0, "()V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_act_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_act_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 4 },
	{ "drawDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 1 },
	{ "drawDebugChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 4 },
	{ "computeTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 4 },
	{ "applyTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/math/Matrix4;)V", 4 },
	{ "resetTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch, "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V", 4 },
	{ "applyTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;Lcom/badlogic/gdx/math/Matrix4;)V", 4 },
	{ "resetTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 4 },
	{ "setCullingArea", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)V", 1 },
	{ "getCullingArea", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle, "()Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "childrenChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_childrenChanged, "()V", 4 },
	{ "addActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActorBefore", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActorAfter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z", 1 },
	{ "removeActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "clearChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clearChildren, "()V", 1 },
	{ "clearChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean, "(Z)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_clear, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clear, "()V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean, "(Z)V", 1 },
	{ "findActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor, "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage, "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V", 4 },
	{ "swapActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean, "(II)Z", 1 },
	{ "swapActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "getChild", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor, "(I)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "getChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray, "()Lcom/badlogic/gdx/utils/SnapshotArray;", 1 },
	{ "hasChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean, "()Z", 1 },
	{ "setTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean, "(Z)V", 1 },
	{ "isTransform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean, "()Z", 1 },
	{ "localToDescendantCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean, "(ZZ)V", 1 },
	{ "debugAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group, "()Lcom/badlogic/gdx/scenes/scene2d/Group;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int, VTABLE_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int, "(Ljava/lang/StringBuilder;I)V", 0 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_Group_lambda$new$0_int_R_Array1_com_badlogic_gdx_scenes_scene2d_Actor, 0, "(I)[Lcom/badlogic/gdx/scenes/scene2d/Actor;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Group, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_Group{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/Group",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Actor,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_Group),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_Group,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Group,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_Group,
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
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 150,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_Group = registerClass(&class_com_badlogic_gdx_scenes_scene2d_Group);

}

