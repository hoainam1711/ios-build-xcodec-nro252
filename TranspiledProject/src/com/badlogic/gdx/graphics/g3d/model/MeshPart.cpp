#include "com/badlogic/gdx/graphics/g3d/model/MeshPart.h"
#include "com/badlogic/gdx/graphics/g3d/model/MeshPart.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/graphics/Mesh.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds;

void mark_com_badlogic_gdx_graphics_g3d_model_MeshPart(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_model_MeshPart *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_center)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_center)->clazz)->markFunction)((jobject) self->F_center, mark, depth + 1);
	if (self->F_halfExtents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_halfExtents)->clazz)->markFunction)((jobject) self->F_halfExtents, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g3d_model_MeshPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(73);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_halfExtents = (jref) sp[1].o;
	LINE_NUMBER(68);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(-1.0f));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_model_MeshPart_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(82);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_halfExtents = (jref) sp[1].o;
	LINE_NUMBER(68);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(-1.0f));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int_R_com_badlogic_gdx_graphics_g3d_model_MeshPart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int_R_com_badlogic_gdx_graphics_g3d_model_MeshPart])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_model_MeshPart_com_badlogic_gdx_graphics_g3d_model_MeshPart(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_halfExtents = (jref) sp[1].o;
	LINE_NUMBER(68);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(-1.0f));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_id;
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_mesh;
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(98);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_offset = ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_offset);
	LINE_NUMBER(99);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_size = ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(100);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_primitiveType = ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_primitiveType);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_center;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_center;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_halfExtents;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_halfExtents;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_radius = ((jfloat)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_radius);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int_R_com_badlogic_gdx_graphics_g3d_model_MeshPart(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:set", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(110);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[2].o);
	LINE_NUMBER(112);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].i);
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_size = (frame[4].i);
	LINE_NUMBER(114);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_primitiveType = (frame[5].i);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_center;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_halfExtents;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(117);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(-1.0f));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_MeshPart_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_mesh;
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_calculateBoundingBox_com_badlogic_gdx_math_collision_BoundingBox_int_int_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(127);
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_center;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_halfExtents;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_halfExtents;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK(sp[0].o))->F_radius = temp0;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	if ((frame[1].o) == (frame[0].o)) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_mesh;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_primitiveType) != ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_primitiveType)) goto label_2;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_offset) != ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_offset)) goto label_2;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[1].o)))->F_size) != ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_size)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(144);
	if ((frame[1].o) != (frame[0].o)) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(145);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_graphics_g3d_model_MeshPart)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_MeshPart, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:render", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int_boolean])(ctx, sp[0].o, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_primitiveType), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_size), (frame[2].i));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:render", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int_int_int])(ctx, sp[0].o, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_primitiveType), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((com_badlogic_gdx_graphics_g3d_model_MeshPart *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/model/MeshPart:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	{
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_math_collision_BoundingBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_BoundingBox);
	init_com_badlogic_gdx_math_collision_BoundingBox(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart(ctx);
	SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_model_MeshPart[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int_R_com_badlogic_gdx_graphics_g3d_model_MeshPart,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_update,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_boolean,
	(void *) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram,
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
	{ "set", "(Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;)Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;" },
	{ "set", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Mesh;III)Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;" },
	{ "update", "()V" },
	{ "equals", "(Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;)Z" },
	{ "render", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;Z)V" },
	{ "render", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
};

static FieldMetadata fields[] {
	{ "id", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_id), "Ljava/lang/String;", 1 },
	{ "primitiveType", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_primitiveType), "I", 1 },
	{ "offset", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_offset), "I", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_size), "I", 1 },
	{ "mesh", &class_com_badlogic_gdx_graphics_Mesh, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_mesh), "Lcom/badlogic/gdx/graphics/Mesh;", 1 },
	{ "center", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_center), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "halfExtents", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_halfExtents), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "radius", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_model_MeshPart, F_radius), "F", 1 },
	{ "bounds", &class_com_badlogic_gdx_math_collision_BoundingBox, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_model_MeshPart_bounds, "Lcom/badlogic/gdx/math/collision/BoundingBox;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_MeshPart, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_MeshPart_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Mesh;III)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_model_MeshPart_com_badlogic_gdx_graphics_g3d_model_MeshPart, 0, "(Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_com_badlogic_gdx_graphics_g3d_model_MeshPart, "(Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;)Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int_R_com_badlogic_gdx_graphics_g3d_model_MeshPart, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_set_java_lang_String_com_badlogic_gdx_graphics_Mesh_int_int_int_R_com_badlogic_gdx_graphics_g3d_model_MeshPart, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Mesh;III)Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_update, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_update, "()V", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_com_badlogic_gdx_graphics_g3d_model_MeshPart_R_boolean, "(Lcom/badlogic/gdx/graphics/g3d/model/MeshPart;)Z", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "render", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_boolean, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_boolean, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;Z)V", 1 },
	{ "render", (intptr_t) M_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_g3d_model_MeshPart_render_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g3d_model_MeshPart{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/model/MeshPart",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_model_MeshPart),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_model_MeshPart,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_model_MeshPart,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_model_MeshPart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_model_MeshPart = registerClass(&class_com_badlogic_gdx_graphics_g3d_model_MeshPart);

}

