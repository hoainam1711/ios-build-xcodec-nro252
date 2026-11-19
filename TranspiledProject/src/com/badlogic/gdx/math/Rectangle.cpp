#include "com/badlogic/gdx/math/Rectangle.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "com/badlogic/gdx/math/Shape2D.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/math/Circle.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_math_Rectangle_tmp;
jobject SF_com_badlogic_gdx_math_Rectangle_tmp2;
jlong SF_com_badlogic_gdx_math_Rectangle_serialVersionUID;

void mark_com_badlogic_gdx_math_Rectangle(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Rectangle_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Rectangle_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Rectangle_tmp, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Rectangle_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Rectangle_tmp2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Rectangle_tmp2, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Rectangle *) object;
}

void init_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Rectangle_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(47);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(48);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(49);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(56);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(57);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(58);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(67);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(68);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(69);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(70);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setX_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(84);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setY_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setWidth_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(112);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setHeight_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(126);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = (frame[1].f);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_getPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(142);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(152);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(153);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(163);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(164);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setSize_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(173);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(174);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = (frame[1].f);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_getSize_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(189);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), (frame[1].f), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), (frame[2].f), -1)) < 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Circle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), 1)) > 0) goto label_1;
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

jbool M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:contains", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(209);
	frame[3].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width));
	LINE_NUMBER(211);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(212);
	frame[5].f = ((frame[4].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(214);
	if ((floatCompare((frame[2].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[2].f), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), 1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[3].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[3].f), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), 1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[4].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[4].f), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), 1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[5].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[5].f), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), 1)) >= 0) goto label_5;
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

jbool M_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:overlaps", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y), -1)) <= 0) goto label_1;
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

jobject M_com_badlogic_gdx_math_Rectangle_set_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(229);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(230);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(231);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:merge", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(240);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x));
	frame[2].f = temp0;
	LINE_NUMBER(241);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width)));
	frame[3].f = temp1;
	LINE_NUMBER(242);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(243);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = ((frame[3].f) - (frame[2].f));
	LINE_NUMBER(245);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y));
	frame[4].f = temp2;
	LINE_NUMBER(246);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height)));
	frame[5].f = temp3;
	LINE_NUMBER(247);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(248);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = ((frame[5].f) - (frame[4].f));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_merge_float_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:merge", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f));
	frame[3].f = temp0;
	LINE_NUMBER(259);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), (frame[1].f));
	frame[4].f = temp1;
	LINE_NUMBER(260);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[3].f);
	LINE_NUMBER(261);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = ((frame[4].f) - (frame[3].f));
	LINE_NUMBER(263);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f));
	frame[5].f = temp2;
	LINE_NUMBER(264);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), (frame[2].f));
	frame[6].f = temp3;
	LINE_NUMBER(265);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	LINE_NUMBER(266);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = ((frame[6].f) - (frame[5].f));
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:merge", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_merge_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_merge_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_merge_Array1_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:merge", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(283);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(284);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(285);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(286);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(287);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(288);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[2].f), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x));
	frame[2].f = temp0;
	LINE_NUMBER(289);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x));
	frame[3].f = temp1;
	LINE_NUMBER(290);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[4].f), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y));
	frame[4].f = temp2;
	LINE_NUMBER(291);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[5].f), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y));
	frame[5].f = temp3;
	LINE_NUMBER(286);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(293);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(294);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width = ((frame[3].f) - (frame[2].f));
	LINE_NUMBER(295);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(296);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height = ((frame[5].f) - (frame[4].f));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getAspectRatio", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)), -1)) != 0) goto label_1;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
	goto label_2;
label_1:;
	{
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) / ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_getCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:getCenter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	LINE_NUMBER(311);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setCenter_float_float_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setCenter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), ((frame[1].f) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((frame[2].f) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_setCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:setCenter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_fitOutside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:fitOutside", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(340);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp1, temp2, -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height) * (frame[2].f)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width) / (frame[2].f)));
	}
label_4:;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), ((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2)))) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2)))) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_fitInside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:fitInside", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(358);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(360);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp1, temp2, 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height) * (frame[2].f)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width) / (frame[2].f)));
	}
label_4:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), ((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2)))) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2)))) - (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_Rectangle_fromString_java_lang_String_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:fromString", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(384);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[2].i) + (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(385);
	jint temp2 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[3].i) + (jint(1))));
	frame[4].i = temp2;
	LINE_NUMBER(386);
	if ((frame[2].i) == (jint(-1))) goto label_8;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_8;
	}
	{
	if ((frame[4].i) == (jint(-1))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (91)) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (93)) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[5].f = temp0;
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))), (frame[3].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[6].f = temp1;
	LINE_NUMBER(390);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))), (frame[4].i));
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[7].f = temp2;
	LINE_NUMBER(391);
	sp[0].o = frame[1].o;
	jint temp3 = (frame[4].i) + (jint(1));
	jint temp4 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp3, (temp4 - (jint(1))));
	jfloat temp5 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[8].f = temp5;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(393);
	INST_ASTORE(5);
label_8:;
	{
	LINE_NUMBER(397);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Rectangle: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_area_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:area", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) * ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_math_Rectangle_perimeter_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:perimeter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return ((jfloat(2)) * (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_Rectangle_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(409);
	frame[1].i = (31);
	LINE_NUMBER(410);
	frame[2].i = (jint(1));
	LINE_NUMBER(411);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(412);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(413);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(414);
	jint temp6 = (31) * (frame[2].i);
	jint temp7 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp6 + temp7);
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Rectangle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(419);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(420);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(422);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Rectangle, (frame[1].o)));
	LINE_NUMBER(423);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_height));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(424);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_width));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(425);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 == temp1) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(426);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToRawIntBits_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 == temp1) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Rectangle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_Rectangle_serialVersionUID = jlong(5733252015138115702ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Rectangle:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	{
	LINE_NUMBER(26);
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	SF_com_badlogic_gdx_math_Rectangle_tmp = sp[0].o;
	LINE_NUMBER(29);
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	SF_com_badlogic_gdx_math_Rectangle_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Rectangle[] {
	(void *) M_com_badlogic_gdx_math_Rectangle_hashCode_R_int,
	(void *) M_com_badlogic_gdx_math_Rectangle_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_math_Rectangle_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getX_R_float,
	(void *) M_com_badlogic_gdx_math_Rectangle_setX_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getY_R_float,
	(void *) M_com_badlogic_gdx_math_Rectangle_setY_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getWidth_R_float,
	(void *) M_com_badlogic_gdx_math_Rectangle_setWidth_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getHeight_R_float,
	(void *) M_com_badlogic_gdx_math_Rectangle_setHeight_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Rectangle_setPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_setSize_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getSize_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Circle_R_boolean,
	(void *) M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Rectangle_R_boolean,
	(void *) M_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean,
	(void *) M_com_badlogic_gdx_math_Rectangle_set_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_merge_float_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_merge_Array1_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float,
	(void *) M_com_badlogic_gdx_math_Rectangle_getCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_math_Rectangle_setCenter_float_float_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_setCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_fitOutside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_fitInside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_fromString_java_lang_String_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_math_Rectangle_area_R_float,
	(void *) M_com_badlogic_gdx_math_Rectangle_perimeter_R_float,
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
	{ "contains", "(Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "contains", "(FF)Z" },
	{ "set", "(FFFF)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getX", "()F" },
	{ "setX", "(F)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getY", "()F" },
	{ "setY", "(F)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getPosition", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setPosition", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "setPosition", "(FF)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "setSize", "(FF)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "setSize", "(F)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getSize", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "contains", "(Lcom/badlogic/gdx/math/Circle;)Z" },
	{ "contains", "(Lcom/badlogic/gdx/math/Rectangle;)Z" },
	{ "overlaps", "(Lcom/badlogic/gdx/math/Rectangle;)Z" },
	{ "set", "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "merge", "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "merge", "(FF)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "merge", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "merge", "([Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "getAspectRatio", "()F" },
	{ "getCenter", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setCenter", "(FF)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "setCenter", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "fitOutside", "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "fitInside", "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "fromString", "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Rectangle;" },
	{ "area", "()F" },
	{ "perimeter", "()F" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_com_badlogic_gdx_math_Shape2D, };

static FieldMetadata fields[] {
	{ "tmp", &class_com_badlogic_gdx_math_Rectangle, (intptr_t) &SF_com_badlogic_gdx_math_Rectangle_tmp, "Lcom/badlogic/gdx/math/Rectangle;", 25 },
	{ "tmp2", &class_com_badlogic_gdx_math_Rectangle, (intptr_t) &SF_com_badlogic_gdx_math_Rectangle_tmp2, "Lcom/badlogic/gdx/math/Rectangle;", 25 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_com_badlogic_gdx_math_Rectangle_serialVersionUID, "J", 26 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_math_Rectangle, F_x), "F", 1 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_math_Rectangle, F_y), "F", 1 },
	{ "width", &class_float, offsetof(com_badlogic_gdx_math_Rectangle, F_width), "F", 1 },
	{ "height", &class_float, offsetof(com_badlogic_gdx_math_Rectangle, F_height), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Rectangle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Rectangle_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle, 0, "(Lcom/badlogic/gdx/math/Rectangle;)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle, "(FFFF)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getX_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_getX_R_float, "()F", 1 },
	{ "setX", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setX_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setX_float_R_com_badlogic_gdx_math_Rectangle, "(F)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getY_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_getY_R_float, "()F", 1 },
	{ "setY", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setY_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setY_float_R_com_badlogic_gdx_math_Rectangle, "(F)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getWidth_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_getWidth_R_float, "()F", 1 },
	{ "setWidth", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setWidth_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setWidth_float_R_com_badlogic_gdx_math_Rectangle, "(F)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getHeight_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_getHeight_R_float, "()F", 1 },
	{ "setHeight", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setHeight_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setHeight_float_R_com_badlogic_gdx_math_Rectangle, "(F)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getPosition", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Rectangle_getPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setPosition_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setPosition_float_float_R_com_badlogic_gdx_math_Rectangle, "(FF)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setSize_float_float_R_com_badlogic_gdx_math_Rectangle, "(FF)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "setSize", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setSize_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setSize_float_R_com_badlogic_gdx_math_Rectangle, "(F)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getSize", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getSize_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Rectangle_getSize_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean, "(FF)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Circle_R_boolean, VTABLE_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Circle_R_boolean, "(Lcom/badlogic/gdx/math/Circle;)Z", 1 },
	{ "contains", (intptr_t) M_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Rectangle_R_boolean, VTABLE_com_badlogic_gdx_math_Rectangle_contains_com_badlogic_gdx_math_Rectangle_R_boolean, "(Lcom/badlogic/gdx/math/Rectangle;)Z", 1 },
	{ "overlaps", (intptr_t) M_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean, VTABLE_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean, "(Lcom/badlogic/gdx/math/Rectangle;)Z", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_math_Rectangle_set_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_set_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "merge", (intptr_t) M_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "merge", (intptr_t) M_com_badlogic_gdx_math_Rectangle_merge_float_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_merge_float_float_R_com_badlogic_gdx_math_Rectangle, "(FF)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "merge", (intptr_t) M_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_merge_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "merge", (intptr_t) M_com_badlogic_gdx_math_Rectangle_merge_Array1_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_merge_Array1_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, "([Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "getAspectRatio", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_getAspectRatio_R_float, "()F", 1 },
	{ "getCenter", (intptr_t) M_com_badlogic_gdx_math_Rectangle_getCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_math_Rectangle_getCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "setCenter", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setCenter_float_float_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setCenter_float_float_R_com_badlogic_gdx_math_Rectangle, "(FF)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "setCenter", (intptr_t) M_com_badlogic_gdx_math_Rectangle_setCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_setCenter_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "fitOutside", (intptr_t) M_com_badlogic_gdx_math_Rectangle_fitOutside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_fitOutside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "fitInside", (intptr_t) M_com_badlogic_gdx_math_Rectangle_fitInside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_fitInside_com_badlogic_gdx_math_Rectangle_R_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_math_Rectangle_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_math_Rectangle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromString", (intptr_t) M_com_badlogic_gdx_math_Rectangle_fromString_java_lang_String_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_math_Rectangle_fromString_java_lang_String_R_com_badlogic_gdx_math_Rectangle, "(Ljava/lang/String;)Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "area", (intptr_t) M_com_badlogic_gdx_math_Rectangle_area_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_area_R_float, "()F", 1 },
	{ "perimeter", (intptr_t) M_com_badlogic_gdx_math_Rectangle_perimeter_R_float, VTABLE_com_badlogic_gdx_math_Rectangle_perimeter_R_float, "()F", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_math_Rectangle_hashCode_R_int, VTABLE_com_badlogic_gdx_math_Rectangle_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_math_Rectangle_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_math_Rectangle_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Rectangle, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Rectangle{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Rectangle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Rectangle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Rectangle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Rectangle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Rectangle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 41,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Rectangle = registerClass(&class_com_badlogic_gdx_math_Rectangle);

}

