#include "com/badlogic/gdx/math/collision/Ray.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/collision/Ray.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_com_badlogic_gdx_math_collision_Ray_serialVersionUID;
jobject SF_com_badlogic_gdx_math_collision_Ray_tmp;

void mark_com_badlogic_gdx_math_collision_Ray(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_collision_Ray_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_collision_Ray_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_collision_Ray_tmp, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_collision_Ray *) object;
	if (self->F_origin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_origin)->clazz)->markFunction)((jobject) self->F_origin, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
}

void init_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[0].o))->F_origin = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[0].o))->F_origin = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_cpy_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:cpy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_collision_Ray);
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	init_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:getEndPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_Ray_tmp;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_collision_Ray_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_collision_Ray_tmp;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ray ["_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_set_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_collision_Ray_R_com_badlogic_gdx_math_collision_Ray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[1].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[1].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_collision_Ray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(115);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(116);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_collision_Ray, (frame[1].o)));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[2].o)))->F_direction;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[2].o)))->F_origin;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_collision_Ray_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	frame[1].i = (73);
	LINE_NUMBER(123);
	frame[2].i = (jint(1));
	LINE_NUMBER(124);
	jint temp0 = (73) * (frame[2].i);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jint temp1 = (jint)((func_com_badlogic_gdx_math_Vector3_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hashCode_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(125);
	jint temp2 = (73) * (frame[2].i);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jint temp3 = (jint)((func_com_badlogic_gdx_math_Vector3_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_hashCode_R_int])(ctx, sp[0].o);
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_collision_Ray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_collision_Ray_serialVersionUID = jlong(-620692054835390878ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/collision/Ray:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	{
	LINE_NUMBER(57);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_collision_Ray(ctx);
	SF_com_badlogic_gdx_math_collision_Ray_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_collision_Ray[] {
	(void *) M_com_badlogic_gdx_math_collision_Ray_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_collision_Ray_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_collision_Ray_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_collision_Ray_cpy_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_math_collision_Ray_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_math_collision_Ray_set_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_collision_Ray_R_com_badlogic_gdx_math_collision_Ray,
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
	{ "cpy", "()Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "getEndPoint", "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;" },
	{ "mul", "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "set", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "set", "(FFFFFF)Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "set", "(Lcom/badlogic/gdx/math/collision/Ray;)Lcom/badlogic/gdx/math/collision/Ray;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_collision_Ray_serialVersionUID, "J", 26 },
	{ "origin", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_collision_Ray, F_origin), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "direction", &class_com_badlogic_gdx_math_Vector3, offsetof(com_badlogic_gdx_math_collision_Ray, F_direction), "Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "tmp", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_collision_Ray_tmp, "Lcom/badlogic/gdx/math/Vector3;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_Ray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "cpy", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_cpy_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_math_collision_Ray_cpy_R_com_badlogic_gdx_math_collision_Ray, "()Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "getEndPoint", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3, "(Lcom/badlogic/gdx/math/Vector3;F)Lcom/badlogic/gdx/math/Vector3;", 1 },
	{ "mul", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_math_collision_Ray_mul_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_collision_Ray, "(Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_collision_Ray_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_collision_Ray, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_set_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_math_collision_Ray_set_float_float_float_float_float_float_R_com_badlogic_gdx_math_collision_Ray, "(FFFFFF)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_collision_Ray_R_com_badlogic_gdx_math_collision_Ray, VTABLE_com_badlogic_gdx_math_collision_Ray_set_com_badlogic_gdx_math_collision_Ray_R_com_badlogic_gdx_math_collision_Ray, "(Lcom/badlogic/gdx/math/collision/Ray;)Lcom/badlogic/gdx/math/collision/Ray;", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_collision_Ray_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_collision_Ray_hashCode_R_int, VTABLE_com_badlogic_gdx_math_collision_Ray_hashCode_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_collision_Ray, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_collision_Ray{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/collision/Ray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_collision_Ray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_collision_Ray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_collision_Ray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_collision_Ray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_collision_Ray = registerClass(&class_com_badlogic_gdx_math_collision_Ray);

}

