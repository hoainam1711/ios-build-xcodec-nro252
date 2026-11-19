#include "com/badlogic/gdx/math/Intersector.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/math/Intersector.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/math/Intersector_MinimumTranslationVector.h"
#include "com/badlogic/gdx/math/Polygon.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/math/Plane_PlaneSide.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/collision/OrientedBoundingBox.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Frustum.h"
#include "com/badlogic/gdx/math/Circle.h"
#include "com/badlogic/gdx/math/Intersector_SplitTriangle.h"
#include "com/badlogic/gdx/math/Plane.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "com/badlogic/gdx/math/collision/Ray.h"
#include "java/lang/RuntimeException.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_com_badlogic_gdx_math_Intersector_v0;
jobject SF_com_badlogic_gdx_math_Intersector_v1;
jobject SF_com_badlogic_gdx_math_Intersector_v2;
jobject SF_com_badlogic_gdx_math_Intersector_floatArray;
jobject SF_com_badlogic_gdx_math_Intersector_floatArray2;
jobject SF_com_badlogic_gdx_math_Intersector_ip;
jobject SF_com_badlogic_gdx_math_Intersector_ep1;
jobject SF_com_badlogic_gdx_math_Intersector_ep2;
jobject SF_com_badlogic_gdx_math_Intersector_s;
jobject SF_com_badlogic_gdx_math_Intersector_e;
jobject SF_com_badlogic_gdx_math_Intersector_v2a;
jobject SF_com_badlogic_gdx_math_Intersector_v2b;
jobject SF_com_badlogic_gdx_math_Intersector_v2c;
jobject SF_com_badlogic_gdx_math_Intersector_v2d;
jobject SF_com_badlogic_gdx_math_Intersector_p;
jobject SF_com_badlogic_gdx_math_Intersector_i;
jobject SF_com_badlogic_gdx_math_Intersector_dir;
jobject SF_com_badlogic_gdx_math_Intersector_start;
jobject SF_com_badlogic_gdx_math_Intersector_best;
jobject SF_com_badlogic_gdx_math_Intersector_tmp;
jobject SF_com_badlogic_gdx_math_Intersector_tmp1;
jobject SF_com_badlogic_gdx_math_Intersector_tmp2;
jobject SF_com_badlogic_gdx_math_Intersector_tmp3;
jobject SF_com_badlogic_gdx_math_Intersector_intersection;

void mark_com_badlogic_gdx_math_Intersector(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Intersector_v0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v0)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v0, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_v1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v1, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_v2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_floatArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_floatArray)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_floatArray, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_floatArray2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_floatArray2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_floatArray2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_ip)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_ip)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_ip, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_ep1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_ep1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_ep1, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_ep2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_ep2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_ep2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_s)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_s)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_s, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_e)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_e)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_e, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_v2a)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v2a)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v2a, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_v2b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v2b)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v2b, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_v2c)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v2c)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v2c, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_v2d)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_v2d)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_v2d, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_p)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_p)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_p, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_i)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_i)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_i, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_dir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_dir)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_dir, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_start)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_start)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_start, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_best)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_best)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_best, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_tmp, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_tmp1)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_tmp1, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_tmp2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_tmp2, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_tmp3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_tmp3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_tmp3, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Intersector_intersection)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Intersector_intersection)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Intersector_intersection, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Intersector *) object;
}

void init_com_badlogic_gdx_math_Intersector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:isPointInTriangle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(53);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(55);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(57);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v1;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v1;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(61);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v1;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) < 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:isPointInTriangle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(67);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_float_float_float_float_float_float_float_float_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:isPointInTriangle", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(72);
	frame[8].f = ((frame[0].f) - (frame[2].f));
	LINE_NUMBER(73);
	frame[9].f = ((frame[1].f) - (frame[3].f));
	LINE_NUMBER(74);
	if ((floatCompare(((((frame[4].f) - (frame[2].f)) * (frame[9].f)) - (((frame[5].f) - (frame[3].f)) * (frame[8].f))), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(75);
	if ((floatCompare(((((frame[6].f) - (frame[2].f)) * (frame[9].f)) - (((frame[7].f) - (frame[3].f)) * (frame[8].f))), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_ILOAD(10);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_8;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(76);
	if ((floatCompare(((((frame[6].f) - (frame[4].f)) * ((frame[1].f) - (frame[5].f))) - (((frame[7].f) - (frame[5].f)) * ((frame[0].f) - (frame[4].f)))), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	INST_ILOAD(10);
	sp -= 2; if (sp[0].i == sp[1].i) goto label_11;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegmentPlane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegmentPlane", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp0;
	LINE_NUMBER(83);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[2].o));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Plane_getD_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getD_R_float])(ctx, (frame[2].o));
	frame[6].f = ((-(temp0 + temp1)) / (frame[5].f));
	LINE_NUMBER(85);
	if ((floatCompare((frame[6].f), (jfloat(0)), 1)) < 0) goto label_5;
	}
	{
	if ((floatCompare((frame[6].f), (jfloat(1)), -1)) <= 0) goto label_6;
	}
label_5:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[3].o), (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[4].o), (frame[6].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_Intersector_pointLineSide_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:pointLineSide", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(95);
	jfloat temp0 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, (((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y))) - ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)))));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_Intersector_pointLineSide_float_float_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:pointLineSide", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(101);
	jfloat temp0 = (((frame[2].f) - (frame[0].f)) * ((frame[5].f) - (frame[1].f))) - (((frame[3].f) - (frame[1].f)) * ((frame[4].f) - (frame[0].f)));
	LINE_NUMBER(102);
	jfloat temp1 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, temp0);
	jint temp2 = jint(temp1);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_isPointInPolygon_com_badlogic_gdx_utils_Array_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:isPointInPolygon", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, sp[0].o));
	LINE_NUMBER(110);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(111);
	frame[5].i = (jint(0));
	LINE_NUMBER(112);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_math_Vector2, sp[0].o));
	LINE_NUMBER(114);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y), (frame[4].f), 1)) >= 0) goto label_9;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y), (frame[4].f), -1)) >= 0) goto label_10;
	}
label_9:;
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y), (frame[4].f), 1)) >= 0) goto label_11;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y), (frame[4].f), -1)) < 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(115);
	if ((floatCompare((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x) + ((((frame[4].f) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y)) / (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y))) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x)))), (frame[3].f), 1)) >= 0) goto label_11;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_12;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	INST_ISTORE(5);
label_11:;
	{
	LINE_NUMBER(117);
	frame[2].o = (frame[7].o);
	LINE_NUMBER(112);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_isPointInPolygon_Array1_float_int_int_float_float_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:isPointInPolygon", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(126);
	frame[5].i = (jint(0));
	LINE_NUMBER(127);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i)));
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(1)))));
	frame[8].f = (frame[7].f);
	LINE_NUMBER(128);
	frame[9].i = ((frame[1].i) + (jint(3)));
	LINE_NUMBER(129);
	frame[10].i = ((frame[1].i) + (frame[2].i));
	}
label_6:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_7;
	}
	{
	LINE_NUMBER(130);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[9].i)));
	LINE_NUMBER(131);
	if ((floatCompare((frame[11].f), (frame[4].f), 1)) >= 0) goto label_10;
	}
	{
	if ((floatCompare((frame[8].f), (frame[4].f), -1)) >= 0) goto label_11;
	}
label_10:;
	{
	if ((floatCompare((frame[8].f), (frame[4].f), 1)) >= 0) goto label_12;
	}
	{
	if ((floatCompare((frame[11].f), (frame[4].f), -1)) < 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(132);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[9].i) - (jint(1)))));
	LINE_NUMBER(133);
	if ((floatCompare(((frame[12].f) + ((((frame[4].f) - (frame[11].f)) / ((frame[8].f) - (frame[11].f))) * (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[9].i) - (jint(3))))) - (frame[12].f)))), (frame[3].f), 1)) >= 0) goto label_12;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_14;
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	INST_ISTORE(5);
label_12:;
	{
	LINE_NUMBER(135);
	frame[8].f = (frame[11].f);
	LINE_NUMBER(129);
	INST_IINC(9, 2);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(137);
	if ((floatCompare((frame[7].f), (frame[4].f), 1)) >= 0) goto label_17;
	}
	{
	if ((floatCompare((frame[8].f), (frame[4].f), -1)) >= 0) goto label_18;
	}
label_17:;
	{
	if ((floatCompare((frame[8].f), (frame[4].f), 1)) >= 0) goto label_19;
	}
	{
	if ((floatCompare((frame[7].f), (frame[4].f), -1)) < 0) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(138);
	if ((floatCompare(((frame[6].f) + ((((frame[4].f) - (frame[7].f)) / ((frame[8].f) - (frame[7].f))) * (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[9].i) - (jint(3))))) - (frame[6].f)))), (frame[3].f), 1)) >= 0) goto label_19;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_20;
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	INST_ISTORE(5);
label_19:;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectPolygons", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float])(ctx, (frame[0].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float])(ctx, (frame[1].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(159);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_ip;
	frame[3].o = sp[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_ep1;
	frame[4].o = sp[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_ep2;
	frame[5].o = sp[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_s;
	frame[6].o = sp[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_e;
	frame[7].o = sp[0].o;
	LINE_NUMBER(160);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_floatArray;
	frame[8].o = sp[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_floatArray2;
	frame[9].o = sp[0].o;
	LINE_NUMBER(161);
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, (frame[8].o));
	LINE_NUMBER(162);
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, (frame[9].o));
	LINE_NUMBER(163);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(165);
	frame[11].i = (jint(0));
	frame[12].i = ((((jarray) nullCheck(ctx, (frame[10].o)))->length) - (jint(2)));
	}
label_15:;
	{
	if ((frame[11].i) > (frame[12].i)) goto label_16;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[4].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (frame[11].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[11].i) + (jint(1))))));
	LINE_NUMBER(168);
	if ((frame[11].i) >= (frame[12].i)) goto label_19;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[5].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[11].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[11].i) + (jint(3))))));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[5].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (jint(1)))));
	}
label_21:;
	{
	LINE_NUMBER(172);
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) != 0) goto label_22;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_22:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) - (jint(2))));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(174);
	frame[13].i = (jint(0));
	}
label_24:;
	{
	if ((frame[13].i) >= ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size)) goto label_25;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[7].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), (frame[13].i));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), ((frame[13].i) + (jint(1))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(177);
	jint temp2 = (jint)SM_com_badlogic_gdx_math_Intersector_pointLineSide_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_int(ctx, (frame[5].o), (frame[4].o), (frame[6].o));
	if (temp2 <= 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(178);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_pointLineSide_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_int(ctx, (frame[5].o), (frame[4].o), (frame[7].o));
	if (temp0 <= 0) goto label_31;
	}
	{
	LINE_NUMBER(179);
	if ((frame[14].i) != 0) goto label_33;
	}
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectLines_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[6].o), (frame[7].o), (frame[4].o), (frame[5].o), (frame[3].o));
	LINE_NUMBER(181);
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[8].o)))->F_size) < (jint(2))) goto label_36;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[8].o), (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[8].o)))->F_size) - (jint(2))));
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), -1)) != 0) goto label_36;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[8].o)))->F_size) - (jint(1));
	LINE_NUMBER(182);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[0].o, temp0);
	if ((floatCompare(temp1, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) == 0) goto label_33;
	}
label_36:;
	{
	LINE_NUMBER(183);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[8].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x));
	LINE_NUMBER(184);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[8].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y));
	}
label_33:;
	{
	LINE_NUMBER(187);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[8].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x));
	LINE_NUMBER(188);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[8].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y));
	goto label_40;
	}
label_31:;
	{
	LINE_NUMBER(189);
	if ((frame[14].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectLines_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[6].o), (frame[7].o), (frame[4].o), (frame[5].o), (frame[3].o));
	LINE_NUMBER(191);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[8].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x));
	LINE_NUMBER(192);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[8].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y));
	}
label_40:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(174);
	INST_IINC(13, 2);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(196);
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, (frame[9].o));
	LINE_NUMBER(197);
	((func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(198);
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, (frame[8].o));
	LINE_NUMBER(165);
	INST_IINC(11, 2);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(201);
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) < (6)) goto label_48;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) - (jint(2))));
	if ((floatCompare(temp0, temp1, -1)) != 0) goto label_48;
	}
	{
	sp[0].o = frame[9].o;
	jint temp0 = jint(1);
	LINE_NUMBER(202);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[0].o, temp0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, (frame[9].o), (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) - (jint(1))));
	if ((floatCompare(temp1, temp2, -1)) != 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_FloatArray_setSize_int_R_Array1_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_setSize_int_R_Array1_float])(ctx, (frame[9].o), (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) - (jint(2))));
	}
label_48:;
	{
	LINE_NUMBER(204);
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size) < (6)) goto label_50;
	}
	{
	LINE_NUMBER(205);
	if ((frame[2].o) == nullptr) goto label_52;
	}
	{
	LINE_NUMBER(206);
	((func_com_badlogic_gdx_math_Polygon_resetTransformations) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_resetTransformations])(ctx, (frame[2].o));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float])(ctx, (frame[2].o));
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size)) goto label_55;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getVertices_R_Array1_float])(ctx, (frame[2].o));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[9].o)))->F_size));
	goto label_52;
	}
label_55:;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_FloatArray_toArray_R_Array1_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_toArray_R_Array1_float])(ctx, (frame[9].o));
	((func_com_badlogic_gdx_math_Polygon_setVertices_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_setVertices_Array1_float])(ctx, sp[0].o, sp[1].o);
	}
label_52:;
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (jint(1));
	}
label_50:;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectPolygons_com_badlogic_gdx_utils_FloatArray_com_badlogic_gdx_utils_FloatArray_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectPolygons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = jint(0);
	jint temp1 = (jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_items;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp3 = (jint)SM_com_badlogic_gdx_math_Intersector_isPointInPolygon_Array1_float_int_int_float_float_R_boolean(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))));
	if (temp3 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	jint temp1 = (jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_size;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[0].o)))->F_items;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp3 = (jint)SM_com_badlogic_gdx_math_Intersector_isPointInPolygon_Array1_float_int_int_float_float_R_boolean(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))));
	if (temp3 == 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectPolygonEdges_com_badlogic_gdx_utils_FloatArray_com_badlogic_gdx_utils_FloatArray_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectPolygonEdges_com_badlogic_gdx_utils_FloatArray_com_badlogic_gdx_utils_FloatArray_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[25];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectPolygonEdges", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(226);
	frame[2].i = (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(2)));
	frame[3].i = (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_size) - (jint(2)));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[0].o)))->F_items;
	frame[4].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(228);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[2].i)));
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(229);
	frame[8].i = (jint(0));
	}
label_7:;
	{
	if ((frame[8].i) > (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(230);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (frame[8].i)));
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[8].i) + (jint(1)))));
	LINE_NUMBER(231);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[3].i)));
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[3].i) + (jint(1)))));
	LINE_NUMBER(232);
	frame[13].i = (jint(0));
	}
label_14:;
	{
	if ((frame[13].i) > (frame[3].i)) goto label_15;
	}
	{
	LINE_NUMBER(233);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[13].i)));
	frame[15].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[13].i) + (jint(1)))));
	LINE_NUMBER(234);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[6].f), (frame[7].f), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f), (frame[14].f), (frame[15].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_19;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(235);
	frame[11].f = (frame[14].f);
	LINE_NUMBER(236);
	frame[12].f = (frame[15].f);
	LINE_NUMBER(232);
	INST_IINC(13, 2);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(238);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(239);
	frame[7].f = (frame[10].f);
	LINE_NUMBER(229);
	INST_IINC(8, 2);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Intersector_distanceLinePoint_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:distanceLinePoint", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(251);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector2_len_float_float_R_float(ctx, ((frame[2].f) - (frame[0].f)), ((frame[3].f) - (frame[1].f)));
	frame[6].f = temp0;
	LINE_NUMBER(252);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((((frame[4].f) - (frame[0].f)) * ((frame[3].f) - (frame[1].f))) - (((frame[5].f) - (frame[1].f)) * ((frame[2].f) - (frame[0].f)))));
	popStackFrame(ctx);
	return (temp1 / (frame[6].f));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:distanceSegmentPoint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(257);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	jfloat temp5 = frame[5].f;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	sp[0].o = (jobject)SM_com_badlogic_gdx_math_Intersector_nearestSegmentPoint_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst_float_float_R_float])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return temp6;
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Intersector_distanceSegmentPoint_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:distanceSegmentPoint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	sp[0].o = (jobject)SM_com_badlogic_gdx_math_Intersector_nearestSegmentPoint_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst_com_badlogic_gdx_math_Vector2_R_float])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_Intersector_nearestSegmentPoint_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:nearestSegmentPoint", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(267);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dst2_com_badlogic_gdx_math_Vector2_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(268);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[3].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(269);
	frame[5].f = ((((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x))) + ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)))) / (frame[4].f));
	LINE_NUMBER(270);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[3].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(271);
	if ((floatCompare((frame[5].f), (jfloat(1)), -1)) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[3].o), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) + ((frame[5].f) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)))), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y) + ((frame[5].f) * (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_math_Intersector_nearestSegmentPoint_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:nearestSegmentPoint", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(278);
	frame[7].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(279);
	frame[8].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(280);
	frame[9].f = (((frame[7].f) * (frame[7].f)) + ((frame[8].f) * (frame[8].f)));
	LINE_NUMBER(281);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(282);
	frame[10].f = (((((frame[4].f) - (frame[0].f)) * ((frame[2].f) - (frame[0].f))) + (((frame[5].f) - (frame[1].f)) * ((frame[3].f) - (frame[1].f)))) / (frame[9].f));
	LINE_NUMBER(283);
	if ((floatCompare((frame[10].f), (jfloat(0)), 1)) > 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(284);
	if ((floatCompare((frame[10].f), (jfloat(1)), -1)) < 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[6].o), ((frame[0].f) + ((frame[10].f) * ((frame[2].f) - (frame[0].f)))), ((frame[1].f) + ((frame[10].f) * ((frame[3].f) - (frame[1].f)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegmentCircle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegmentCircle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(295);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(0)));
	LINE_NUMBER(296);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(0)));
	LINE_NUMBER(297);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_len_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(298);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_nor_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(299);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_5;
	}
	{
	LINE_NUMBER(300);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(301);
	if ((floatCompare((frame[5].f), (frame[4].f), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(302);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(304);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[5].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)), (jfloat(0)));
	}
label_7:;
	{
	LINE_NUMBER(308);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	frame[6].f = (temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(309);
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	frame[7].f = (temp1 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(311);
	if ((floatCompare((((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f))), (frame[3].f), 1)) > 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegmentCircle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegmentCircle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(321);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(322);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2b;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(323);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(324);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2b;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_dot_com_badlogic_gdx_math_Vector2_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp1;
	LINE_NUMBER(325);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_5;
	}
	{
	LINE_NUMBER(326);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2c;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[0].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(327);
	if ((floatCompare((frame[5].f), (frame[4].f), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(328);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2c;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(330);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2d;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[5].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(331);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2c;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2d;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_add_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(334);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2c;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_x) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_x);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2c;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(336);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(338);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Vector2_Zero;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(339);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2d;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y)), (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x)));
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[3].o)))->F_normal;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2d;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	LINE_NUMBER(341);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[3].o)))->F_depth = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_radius);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[3].o)))->F_normal;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	LINE_NUMBER(344);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_radius;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK(sp[0].o))->F_depth = (temp0 - temp1);
	}
label_12:;
	{
	LINE_NUMBER(348);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2a;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len2_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len2_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_radius) * ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[2].o)))->F_radius)), 1)) > 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectFrustumBounds_com_badlogic_gdx_math_Frustum_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectFrustumBounds", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	LINE_NUMBER(357);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	LINE_NUMBER(358);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	LINE_NUMBER(359);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	LINE_NUMBER(360);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
label_1:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(362);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(366);
	frame[3].i = (jint(0));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_13;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(368);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[1].o), (frame[7].o));
	frame[3].i = (temp0 | temp1);
	LINE_NUMBER(367);
	INST_IINC(6, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectFrustumBounds_com_badlogic_gdx_math_Frustum_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectFrustumBounds", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(379);
	frame[2].i = (jint(0));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getVertices_R_Array1_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(382);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	frame[2].i = (temp0 | temp1);
	LINE_NUMBER(381);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(385);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(389);
	frame[3].i = (jint(0));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(391);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, (frame[1].o), (frame[7].o));
	frame[3].i = (temp0 | temp1);
	LINE_NUMBER(390);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Intersector_intersectRayRay_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayRay", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(407);
	frame[4].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(408);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(409);
	frame[6].f = ((((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y)) - (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x)));
	LINE_NUMBER(410);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (jfloat(std::numeric_limits<float>::infinity()));
	}
label_4:;
	{
	LINE_NUMBER(413);
	frame[7].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x) / (frame[6].f));
	LINE_NUMBER(414);
	frame[8].f = (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y) / (frame[6].f));
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (((frame[4].f) * (frame[8].f)) - ((frame[5].f) * (frame[7].f)));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayPlane_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayPlane", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = temp0;
	LINE_NUMBER(424);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Plane_getD_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getD_R_float])(ctx, (frame[1].o));
	frame[4].f = ((-(temp0 + temp1)) / (frame[3].f));
	LINE_NUMBER(426);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(428);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	sp[2].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (frame[4].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(430);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_OnPlane;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(431);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Intersector_intersectLinePlane_float_float_float_float_float_float_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectLinePlane", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(442);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[3].f), (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f));
	frame[8].o = sp[0].o;
	LINE_NUMBER(443);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f));
	frame[9].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[6].o));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[10].f = temp0;
	LINE_NUMBER(445);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(446);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getNormal_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[6].o));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Plane_getD_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_getD_R_float])(ctx, (frame[6].o));
	frame[11].f = ((-(temp0 + temp1)) / (frame[10].f));
	LINE_NUMBER(447);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[7].o), (frame[9].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[8].o), (frame[11].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[11].f);
	}
label_4:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, (frame[6].o), (frame[9].o));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_OnPlane;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(450);
	if ((frame[7].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[7].o), (frame[9].o));
	}
label_10:;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_8:;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectPlanes_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectPlanes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(461);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(462);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[2].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(463);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[2].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(465);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[4].f = (-temp0);
	LINE_NUMBER(466);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[4].f));
	if ((floatCompare(temp1, (jfloat(1.000000e-06f)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(470);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[2].o)))->F_d));
	LINE_NUMBER(471);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	LINE_NUMBER(472);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_d));
	LINE_NUMBER(474);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	jfloat temp1 = temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	jfloat temp2 = temp1 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	jfloat temp4 = temp3 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	jfloat temp5 = temp4 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	jfloat temp6 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	jfloat temp7 = temp6 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp2, temp5, (temp7 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z)));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[3].o), ((jfloat(1)) / (frame[4].f)));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayTriangle_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayTriangle", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(489);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(490);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(492);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(493);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[5].o), (frame[7].o));
	frame[8].f = temp0;
	LINE_NUMBER(494);
	jint temp1 = (jint)SM_com_badlogic_gdx_math_MathUtils_isZero_float_R_boolean(ctx, (frame[8].f));
	if (temp1 == 0) goto label_5;
	}
	{
	LINE_NUMBER(495);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_p;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(496);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_p;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_OnPlane;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(497);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(503);
	frame[8].f = ((jfloat(1)) / (frame[8].f));
	LINE_NUMBER(505);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[1].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(506);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[9].o), (frame[7].o));
	frame[10].f = (temp0 * (frame[8].f));
	LINE_NUMBER(507);
	if ((floatCompare((frame[10].f), (jfloat(0)), 1)) < 0) goto label_14;
	}
	{
	if ((floatCompare((frame[10].f), (jfloat(1)), -1)) <= 0) goto label_15;
	}
label_14:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_crs_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[9].o), (frame[5].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(510);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[11].o));
	frame[12].f = (temp0 * (frame[8].f));
	LINE_NUMBER(511);
	if ((floatCompare((frame[12].f), (jfloat(0)), 1)) < 0) goto label_18;
	}
	{
	if ((floatCompare(((frame[10].f) + (frame[12].f)), (jfloat(1)), -1)) <= 0) goto label_19;
	}
label_18:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(513);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[6].o), (frame[11].o));
	frame[13].f = (temp0 * (frame[8].f));
	LINE_NUMBER(514);
	if ((floatCompare((frame[13].f), (jfloat(0)), 1)) >= 0) goto label_21;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_21:;
	{
	LINE_NUMBER(516);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(517);
	if ((floatCompare((frame[13].f), (jfloat(1.000000e-06f)), 1)) > 0) goto label_24;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	goto label_22;
	}
label_24:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[4].o), (frame[13].f));
	}
label_22:;
	{
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRaySphere_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRaySphere", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp3 = temp2 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_float_float_float_R_float])(ctx, sp[0].o, temp1, temp3, (temp4 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z)));
	frame[4].f = temp5;
	LINE_NUMBER(538);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(540);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp1 = temp0 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x) * (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp3 = temp2 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y) * (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dst2_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dst2_float_float_float_R_float])(ctx, sp[0].o, temp1, temp3, (temp4 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z) * (frame[4].f))));
	frame[5].f = temp5;
	LINE_NUMBER(542);
	frame[6].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(543);
	if ((floatCompare((frame[5].f), (frame[6].f), -1)) <= 0) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(544);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[4].f;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[6].f) - (frame[5].f)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (temp0 - (jfloat(temp1))));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayBounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(563);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_contains_com_badlogic_gdx_math_Vector3_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(564);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(567);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(568);
	frame[5].i = (jint(0));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(573);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_6;
	}
	{
	LINE_NUMBER(574);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(575);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_6;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_11;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_6;
	}
label_11:;
	{
	LINE_NUMBER(576);
	frame[5].i = (jint(1));
	LINE_NUMBER(577);
	frame[3].f = (frame[4].f);
	}
label_6:;
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), (jfloat(0)), 1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(584);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_13;
	}
	{
	LINE_NUMBER(585);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(586);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_13;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_13;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_13;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_13;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_18;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(587);
	frame[5].i = (jint(1));
	LINE_NUMBER(588);
	frame[3].f = (frame[4].f);
	}
label_13:;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), (jfloat(0)), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(595);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_20;
	}
	{
	LINE_NUMBER(596);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(597);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_20;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_20;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_20;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_20;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_25;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_20;
	}
label_25:;
	{
	LINE_NUMBER(598);
	frame[5].i = (jint(1));
	LINE_NUMBER(599);
	frame[3].f = (frame[4].f);
	}
label_20:;
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), (jfloat(0)), 1)) >= 0) goto label_27;
	}
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(606);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_27;
	}
	{
	LINE_NUMBER(607);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(608);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_27;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_27;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_27;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_27;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_32;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_27;
	}
label_32:;
	{
	LINE_NUMBER(609);
	frame[5].i = (jint(1));
	LINE_NUMBER(610);
	frame[3].f = (frame[4].f);
	}
label_27:;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), (jfloat(0)), -1)) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z));
	LINE_NUMBER(617);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_34;
	}
	{
	LINE_NUMBER(618);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(619);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_34;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_34;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_34;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_34;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_39;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_34;
	}
label_39:;
	{
	LINE_NUMBER(620);
	frame[5].i = (jint(1));
	LINE_NUMBER(621);
	frame[3].f = (frame[4].f);
	}
label_34:;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), (jfloat(0)), 1)) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jfloat temp1 = temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z));
	LINE_NUMBER(628);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) < 0) goto label_41;
	}
	{
	LINE_NUMBER(629);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(630);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_41;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_41;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_41;
	}
	{
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_v2;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_41;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_46;
	{
	if ((floatCompare((frame[4].f), (frame[3].f), 1)) >= 0) goto label_41;
	}
label_46:;
	{
	LINE_NUMBER(631);
	frame[5].i = (jint(1));
	LINE_NUMBER(632);
	frame[3].f = (frame[4].f);
	}
label_41:;
	{
	LINE_NUMBER(636);
	if ((frame[5].i) == 0) goto label_48;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_48;
	{
	LINE_NUMBER(637);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[3].f));
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_add_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(638);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), 1)) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(639);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	goto label_53;
	}
label_51:;
	{
	LINE_NUMBER(640);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x), -1)) <= 0) goto label_53;
	}
	{
	LINE_NUMBER(641);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	}
label_53:;
	{
	LINE_NUMBER(643);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), 1)) >= 0) goto label_55;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(645);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y), -1)) <= 0) goto label_57;
	}
	{
	LINE_NUMBER(646);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	}
label_57:;
	{
	LINE_NUMBER(648);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), 1)) >= 0) goto label_59;
	}
	{
	LINE_NUMBER(649);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z);
	goto label_48;
	}
label_59:;
	{
	LINE_NUMBER(650);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z), -1)) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(651);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z);
	}
label_48:;
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayBoundsFast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(660);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, sp[3].o);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[17];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayBoundsFast", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(668);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[3].f = (temp0 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(669);
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[4].f = (temp1 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(670);
	jfloat temp2 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	frame[5].f = (temp2 / ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z));
	LINE_NUMBER(672);
	jfloat temp3 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x) * (jfloat(0.5f)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[6].f = ((temp3 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)) * (frame[3].f));
	LINE_NUMBER(673);
	jfloat temp4 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x) * (jfloat(0.5f)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[7].f = ((temp4 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)) * (frame[3].f));
	LINE_NUMBER(674);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(675);
	frame[8].f = (frame[6].f);
	LINE_NUMBER(676);
	frame[6].f = (frame[7].f);
	LINE_NUMBER(677);
	frame[7].f = (frame[8].f);
	}
label_6:;
	{
	LINE_NUMBER(680);
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y) * (jfloat(0.5f)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[8].f = ((temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)) * (frame[4].f));
	LINE_NUMBER(681);
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y) * (jfloat(0.5f)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[9].f = ((temp1 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)) * (frame[4].f));
	LINE_NUMBER(682);
	if ((floatCompare((frame[8].f), (frame[9].f), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(683);
	frame[10].f = (frame[8].f);
	LINE_NUMBER(684);
	frame[8].f = (frame[9].f);
	LINE_NUMBER(685);
	frame[9].f = (frame[10].f);
	}
label_12:;
	{
	LINE_NUMBER(688);
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) - (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z) * (jfloat(0.5f)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[10].f = ((temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)) * (frame[5].f));
	LINE_NUMBER(689);
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z) + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z) * (jfloat(0.5f)));
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	frame[11].f = ((temp1 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)) * (frame[5].f));
	LINE_NUMBER(690);
	if ((floatCompare((frame[10].f), (frame[11].f), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(691);
	frame[12].f = (frame[10].f);
	LINE_NUMBER(692);
	frame[10].f = (frame[11].f);
	LINE_NUMBER(693);
	frame[11].f = (frame[12].f);
	}
label_18:;
	{
	LINE_NUMBER(696);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[6].f), (frame[8].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (frame[10].f));
	frame[12].f = temp1;
	LINE_NUMBER(697);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[9].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, (frame[11].f));
	frame[13].f = temp3;
	LINE_NUMBER(699);
	if ((floatCompare((frame[13].f), (jfloat(0)), -1)) < 0) goto label_24;
	}
	{
	if ((floatCompare((frame[13].f), (frame[12].f), -1)) < 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayOrientedBoundsFast", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(706);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_Vector3_R_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayOrientedBoundsFast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Vector3_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayOrientedBounds", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getBounds_R_com_badlogic_gdx_math_collision_BoundingBox) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getBounds_R_com_badlogic_gdx_math_collision_BoundingBox])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(724);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Vector3_R_boolean(ctx, (frame[0].o), (frame[3].o), (frame[4].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayOrientedBounds", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(733);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(734);
	frame[5].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(737);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_getTranslation_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(738);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_sub_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(741);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(742);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	LINE_NUMBER(743);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[10].o), (frame[9].o));
	frame[11].f = temp2;
	LINE_NUMBER(744);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[10].o));
	frame[12].f = temp3;
	LINE_NUMBER(746);
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[12].f));
	if ((floatCompare(temp4, (jfloat(1.000000e-06f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(747);
	jfloat temp0 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	frame[6].f = ((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)) / (frame[12].f));
	LINE_NUMBER(748);
	jfloat temp1 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	frame[7].f = ((temp1 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)) / (frame[12].f));
	LINE_NUMBER(753);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(754);
	frame[13].f = (frame[6].f);
	LINE_NUMBER(755);
	frame[6].f = (frame[7].f);
	LINE_NUMBER(756);
	frame[7].f = (frame[13].f);
	}
label_13:;
	{
	LINE_NUMBER(759);
	if ((floatCompare((frame[7].f), (frame[5].f), 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(760);
	frame[5].f = (frame[7].f);
	}
label_17:;
	{
	LINE_NUMBER(763);
	if ((floatCompare((frame[6].f), (frame[4].f), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(764);
	frame[4].f = (frame[6].f);
	}
label_19:;
	{
	LINE_NUMBER(769);
	if ((floatCompare((frame[5].f), (frame[4].f), 1)) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(773);
	jfloat temp0 = -(frame[11].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)), (jfloat(0)), -1)) > 0) goto label_23;
	}
	{
	jfloat temp0 = -(frame[11].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)), (jfloat(0)), 1)) >= 0) goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(774);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(779);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	frame[13].o = sp[0].o;
	LINE_NUMBER(780);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	LINE_NUMBER(782);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[13].o), (frame[9].o));
	frame[11].f = temp2;
	LINE_NUMBER(783);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[13].o));
	frame[12].f = temp3;
	LINE_NUMBER(785);
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[12].f));
	if ((floatCompare(temp4, (jfloat(1.000000e-06f)), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(786);
	jfloat temp0 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	frame[6].f = ((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)) / (frame[12].f));
	LINE_NUMBER(787);
	jfloat temp1 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	frame[7].f = ((temp1 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)) / (frame[12].f));
	LINE_NUMBER(789);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(790);
	frame[14].f = (frame[6].f);
	LINE_NUMBER(791);
	frame[6].f = (frame[7].f);
	LINE_NUMBER(792);
	frame[7].f = (frame[14].f);
	}
label_32:;
	{
	LINE_NUMBER(794);
	if ((floatCompare((frame[7].f), (frame[5].f), 1)) >= 0) goto label_36;
	}
	{
	LINE_NUMBER(795);
	frame[5].f = (frame[7].f);
	}
label_36:;
	{
	LINE_NUMBER(797);
	if ((floatCompare((frame[6].f), (frame[4].f), -1)) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(798);
	frame[4].f = (frame[6].f);
	}
label_38:;
	{
	LINE_NUMBER(800);
	if ((floatCompare((frame[4].f), (frame[5].f), -1)) <= 0) goto label_40;
	}
	{
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(804);
	jfloat temp0 = -(frame[11].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)), (jfloat(0)), -1)) > 0) goto label_42;
	}
	{
	jfloat temp0 = -(frame[11].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)), (jfloat(0)), 1)) >= 0) goto label_40;
	}
label_42:;
	{
	LINE_NUMBER(805);
	popStackFrame(ctx);
	return (jint(0));
	}
label_40:;
	{
	LINE_NUMBER(810);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	frame[14].o = sp[0].o;
	LINE_NUMBER(811);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, temp0, temp1, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	LINE_NUMBER(813);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[14].o), (frame[9].o));
	frame[11].f = temp2;
	LINE_NUMBER(814);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, (frame[14].o));
	frame[12].f = temp3;
	LINE_NUMBER(816);
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[12].f));
	if ((floatCompare(temp4, (jfloat(1.000000e-06f)), -1)) <= 0) goto label_47;
	}
	{
	LINE_NUMBER(817);
	jfloat temp0 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	frame[6].f = ((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)) / (frame[12].f));
	LINE_NUMBER(818);
	jfloat temp1 = frame[11].f;
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	frame[7].f = ((temp1 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)) / (frame[12].f));
	LINE_NUMBER(820);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_51;
	}
	{
	LINE_NUMBER(821);
	frame[15].f = (frame[6].f);
	LINE_NUMBER(822);
	frame[6].f = (frame[7].f);
	LINE_NUMBER(823);
	frame[7].f = (frame[15].f);
	}
label_51:;
	{
	LINE_NUMBER(825);
	if ((floatCompare((frame[7].f), (frame[5].f), 1)) >= 0) goto label_55;
	}
	{
	LINE_NUMBER(826);
	frame[5].f = (frame[7].f);
	}
label_55:;
	{
	LINE_NUMBER(828);
	if ((floatCompare((frame[6].f), (frame[4].f), -1)) <= 0) goto label_57;
	}
	{
	LINE_NUMBER(829);
	frame[4].f = (frame[6].f);
	}
label_57:;
	{
	LINE_NUMBER(831);
	if ((floatCompare((frame[4].f), (frame[5].f), -1)) <= 0) goto label_59;
	}
	{
	LINE_NUMBER(832);
	popStackFrame(ctx);
	return (jint(0));
	}
label_47:;
	{
	LINE_NUMBER(834);
	jfloat temp0 = -(frame[11].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)), (jfloat(0)), -1)) > 0) goto label_61;
	}
	{
	jfloat temp0 = -(frame[11].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare((temp0 + ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z)), (jfloat(0)), 1)) >= 0) goto label_59;
	}
label_61:;
	{
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return (jint(0));
	}
label_59:;
	{
	LINE_NUMBER(838);
	if ((frame[3].o) == nullptr) goto label_62;
	}
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_collision_Ray_getEndPoint_com_badlogic_gdx_math_Vector3_float_R_com_badlogic_gdx_math_Vector3])(ctx, (frame[0].o), (frame[3].o), (frame[4].f));
	}
label_62:;
	{
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayTriangles_com_badlogic_gdx_math_collision_Ray_Array1_float_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayTriangles", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(857);
	frame[3].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(858);
	frame[4].i = (jint(0));
	LINE_NUMBER(860);
	if (((((jarray) nullCheck(ctx, (frame[1].o)))->length) % (9)) == 0) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangles array size is not a multiple of 9"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(862);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(863);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2))))));
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(3))));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(4))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(5))));
	LINE_NUMBER(864);
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, temp0, temp1, temp2);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (6)));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (7)));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (8)));
	LINE_NUMBER(865);
	sp[3].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[3].o, temp3, temp4, temp5);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[4].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	LINE_NUMBER(863);
	jint temp6 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayTriangle_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[6].i = temp6;
	LINE_NUMBER(867);
	if ((frame[6].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp0;
	LINE_NUMBER(869);
	if ((floatCompare((frame[7].f), (frame[3].f), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(870);
	frame[3].f = (frame[7].f);
	LINE_NUMBER(871);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_best;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(872);
	frame[4].i = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(862);
	INST_IINC(5, 9);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(877);
	if ((frame[4].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(878);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(880);
	if ((frame[2].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_best;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayTriangles_com_badlogic_gdx_math_collision_Ray_Array1_float_Array1_short_int_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayTriangles", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(892);
	frame[5].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(893);
	frame[6].i = (jint(0));
	LINE_NUMBER(895);
	if (((((jarray) nullCheck(ctx, (frame[2].o)))->length) % (jint(3))) == 0) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangle list size is not a multiple of 3"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(897);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(898);
	frame[8].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[7].i))) * (frame[3].i));
	LINE_NUMBER(899);
	frame[9].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[7].i) + (jint(1))))) * (frame[3].i));
	LINE_NUMBER(900);
	frame[10].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[7].i) + (jint(2))))) * (frame[3].i));
	LINE_NUMBER(902);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[8].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[8].i) + (jint(2))))));
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[9].i));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[9].i) + (jint(1))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[9].i) + (jint(2))));
	LINE_NUMBER(903);
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[2].o, temp0, temp1, temp2);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp3;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[10].i));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[10].i) + (jint(1))));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[10].i) + (jint(2))));
	LINE_NUMBER(904);
	sp[3].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_float_float_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[3].o, temp3, temp4, temp5);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[4].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	LINE_NUMBER(902);
	jint temp6 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayTriangle_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[11].i = temp6;
	LINE_NUMBER(906);
	if ((frame[11].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[12].f = temp0;
	LINE_NUMBER(908);
	if ((floatCompare((frame[12].f), (frame[5].f), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(909);
	frame[5].f = (frame[12].f);
	LINE_NUMBER(910);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_best;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(911);
	frame[6].i = (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(897);
	INST_IINC(7, 3);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(916);
	if ((frame[6].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(917);
	popStackFrame(ctx);
	return (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(919);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_best;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(920);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRayTriangles_com_badlogic_gdx_math_collision_Ray_java_util_List_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRayTriangles", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(929);
	frame[3].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(930);
	frame[4].i = (jint(0));
	LINE_NUMBER(932);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if ((temp0 % (jint(3))) == 0) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangle list size is not a multiple of 3"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(934);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[5].i));
	sp[1].o = checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[1].o);
	sp[2].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((frame[5].i) + (jint(1))));
	sp[2].o = checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[2].o);
	sp[3].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), ((frame[5].i) + (jint(2))));
	sp[3].o = checkCast(ctx, &class_com_badlogic_gdx_math_Vector3, sp[3].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[4].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectRayTriangle_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[6].i = temp0;
	LINE_NUMBER(937);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((com_badlogic_gdx_math_collision_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dst2_com_badlogic_gdx_math_Vector3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp0;
	LINE_NUMBER(939);
	if ((floatCompare((frame[7].f), (frame[3].f), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(940);
	frame[3].f = (frame[7].f);
	LINE_NUMBER(941);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Intersector_best;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(942);
	frame[4].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(934);
	INST_IINC(5, 3);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(947);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(948);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(950);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_best;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_set_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(951);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectBoundsPlaneFast_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Plane_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectBoundsPlaneFast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(958);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp1;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCenter_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Intersector_tmp2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getDimensions_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_scl_float_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, (jfloat(0.5f)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectBoundsPlaneFast_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK((frame[1].o)))->F_d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectBoundsPlaneFast_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectBoundsPlaneFast", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(969);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x));
	jfloat temp2 = temp0 * temp1;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y));
	jfloat temp5 = temp2 + (temp3 * temp4);
	jfloat temp6 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z;
	jfloat temp7 = (jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z;
	LINE_NUMBER(970);
	jfloat temp8 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp7);
	frame[4].f = (temp5 + (temp6 * temp8));
	LINE_NUMBER(973);
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[2].o), (frame[0].o));
	frame[5].f = (temp9 - (frame[3].f));
	LINE_NUMBER(976);
	jfloat temp10 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[5].f));
	if ((floatCompare(temp10, (frame[4].f), 1)) > 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectLines_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectLines", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(987);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectLines_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectLines_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectLines", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(995);
	frame[9].f = ((((frame[7].f) - (frame[5].f)) * ((frame[2].f) - (frame[0].f))) - (((frame[6].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))));
	LINE_NUMBER(996);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(998);
	if ((frame[8].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(999);
	frame[10].f = (((((frame[6].f) - (frame[4].f)) * ((frame[1].f) - (frame[5].f))) - (((frame[7].f) - (frame[5].f)) * ((frame[0].f) - (frame[4].f)))) / (frame[9].f));
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[8].o), ((frame[0].f) + (((frame[2].f) - (frame[0].f)) * (frame[10].f))), ((frame[1].f) + (((frame[3].f) - (frame[1].f)) * (frame[10].f))));
	}
label_3:;
	{
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectLinePolygon_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectLinePolygon", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1011);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x);
	frame[5].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y);
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(1012);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1013);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(2)))));
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(1)))));
	LINE_NUMBER(1014);
	frame[11].i = (jint(0));
	}
label_9:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_10;
	}
	{
	LINE_NUMBER(1015);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[11].i)));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[11].i) + (jint(1)))));
	LINE_NUMBER(1016);
	frame[14].f = ((((frame[13].f) - (frame[10].f)) * ((frame[6].f) - (frame[4].f))) - (((frame[12].f) - (frame[9].f)) * ((frame[7].f) - (frame[5].f))));
	LINE_NUMBER(1017);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1018);
	frame[15].f = ((frame[5].f) - (frame[10].f));
	LINE_NUMBER(1019);
	frame[16].f = ((frame[4].f) - (frame[9].f));
	LINE_NUMBER(1020);
	frame[17].f = (((((frame[12].f) - (frame[9].f)) * (frame[15].f)) - (((frame[13].f) - (frame[10].f)) * (frame[16].f))) / (frame[14].f));
	LINE_NUMBER(1021);
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	if ((floatCompare((frame[17].f), (jfloat(1)), 1)) > 0) goto label_15;
	}
	{
	LINE_NUMBER(1022);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(1025);
	frame[9].f = (frame[12].f);
	LINE_NUMBER(1026);
	frame[10].f = (frame[13].f);
	LINE_NUMBER(1014);
	INST_IINC(11, 2);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectRectangles_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectRectangles", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1035);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1036);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(1037);
	sp[0].o = frame[2].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_width)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width)));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = (temp1 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_x));
	LINE_NUMBER(1038);
	sp[0].o = frame[2].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(1039);
	sp[0].o = frame[2].o;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[0].o)))->F_height)), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height)));
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = (temp3 - ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(1040);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegmentRectangle_float_float_float_float_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegmentRectangle", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1053);
	frame[5].f = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_width));
	LINE_NUMBER(1054);
	frame[6].f = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_height));
	LINE_NUMBER(1056);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_x), (frame[6].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1058);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_y), (frame[5].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_y), (jobject(nullptr)));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(1060);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[5].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_y), (frame[5].f), (frame[6].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1061);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1063);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[4].o)))->F_x), (frame[6].f), (frame[5].f), (frame[6].f), (jobject(nullptr)));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1064);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(1066);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_contains_float_float_R_boolean])(ctx, (frame[4].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegmentRectangle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegmentRectangle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1071);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegmentRectangle_float_float_float_float_com_badlogic_gdx_math_Rectangle_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegmentPolygon_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegmentPolygon", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1080);
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x);
	frame[5].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y);
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(1081);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(1082);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(2)))));
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[8].i) - (jint(1)))));
	LINE_NUMBER(1083);
	frame[11].i = (jint(0));
	}
label_9:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_10;
	}
	{
	LINE_NUMBER(1084);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[11].i)));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[11].i) + (jint(1)))));
	LINE_NUMBER(1085);
	frame[14].f = ((((frame[13].f) - (frame[10].f)) * ((frame[6].f) - (frame[4].f))) - (((frame[12].f) - (frame[9].f)) * ((frame[7].f) - (frame[5].f))));
	LINE_NUMBER(1086);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1087);
	frame[15].f = ((frame[5].f) - (frame[10].f));
	LINE_NUMBER(1088);
	frame[16].f = ((frame[4].f) - (frame[9].f));
	LINE_NUMBER(1089);
	frame[17].f = (((((frame[12].f) - (frame[9].f)) * (frame[15].f)) - (((frame[13].f) - (frame[10].f)) * (frame[16].f))) / (frame[14].f));
	LINE_NUMBER(1090);
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	if ((floatCompare((frame[17].f), (jfloat(1)), 1)) > 0) goto label_15;
	}
	{
	LINE_NUMBER(1091);
	frame[18].f = (((((frame[6].f) - (frame[4].f)) * (frame[15].f)) - (((frame[7].f) - (frame[5].f)) * (frame[16].f))) / (frame[14].f));
	LINE_NUMBER(1092);
	if ((floatCompare((frame[18].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	if ((floatCompare((frame[18].f), (jfloat(1)), 1)) > 0) goto label_15;
	}
	{
	LINE_NUMBER(1093);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(1097);
	frame[9].f = (frame[12].f);
	LINE_NUMBER(1098);
	frame[10].f = (frame[13].f);
	LINE_NUMBER(1083);
	INST_IINC(11, 2);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1100);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegments_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegments", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1111);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[3].o)))->F_y), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8) {
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:intersectSegments", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(1117);
	frame[9].f = ((((frame[7].f) - (frame[5].f)) * ((frame[2].f) - (frame[0].f))) - (((frame[6].f) - (frame[4].f)) * ((frame[3].f) - (frame[1].f))));
	LINE_NUMBER(1118);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1120);
	frame[10].f = ((frame[1].f) - (frame[5].f));
	LINE_NUMBER(1121);
	frame[11].f = ((frame[0].f) - (frame[4].f));
	LINE_NUMBER(1122);
	frame[12].f = (((((frame[6].f) - (frame[4].f)) * (frame[10].f)) - (((frame[7].f) - (frame[5].f)) * (frame[11].f))) / (frame[9].f));
	LINE_NUMBER(1123);
	if ((floatCompare((frame[12].f), (jfloat(0)), 1)) < 0) goto label_6;
	}
	{
	if ((floatCompare((frame[12].f), (jfloat(1)), -1)) <= 0) goto label_7;
	}
label_6:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(1125);
	frame[13].f = (((((frame[2].f) - (frame[0].f)) * (frame[10].f)) - (((frame[3].f) - (frame[1].f)) * (frame[11].f))) / (frame[9].f));
	LINE_NUMBER(1126);
	if ((floatCompare((frame[13].f), (jfloat(0)), 1)) < 0) goto label_9;
	}
	{
	if ((floatCompare((frame[13].f), (jfloat(1)), -1)) <= 0) goto label_10;
	}
label_9:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(1128);
	if ((frame[8].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[8].o), ((frame[0].f) + (((frame[2].f) - (frame[0].f)) * (frame[12].f))), ((frame[1].f) + (((frame[3].f) - (frame[1].f)) * (frame[12].f))));
	}
label_11:;
	{
	LINE_NUMBER(1129);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat SM_com_badlogic_gdx_math_Intersector_det_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:det", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(1133);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[3].f)) - ((frame[1].f) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jdouble SM_com_badlogic_gdx_math_Intersector_detd_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:detd", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	return (((frame[0].d) * (frame[6].d)) - ((frame[2].d) * (frame[4].d)));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlaps_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Circle_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlaps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1141);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Circle_overlaps_com_badlogic_gdx_math_Circle_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlaps_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlaps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1145);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_overlaps_com_badlogic_gdx_math_Rectangle_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlaps_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Rectangle_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlaps", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1149);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1150);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1152);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1153);
	frame[2].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1154);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(1155);
	frame[2].f = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width));
	}
label_5:;
	{
	LINE_NUMBER(1158);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1159);
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1160);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1161);
	frame[3].f = (((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height));
	}
label_9:;
	{
	LINE_NUMBER(1164);
	frame[2].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(1165);
	frame[2].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(1166);
	frame[3].f = ((frame[3].f) - ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1167);
	frame[3].f = ((frame[3].f) * (frame[3].f));
	LINE_NUMBER(1169);
	if ((floatCompare(((frame[2].f) + (frame[3].f)), (((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK((frame[0].o)))->F_radius)), 1)) >= 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlapConvexPolygons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1177);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlapConvexPolygons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1188);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_Array1_float_Array1_float_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_Array1_float_Array1_float_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlapConvexPolygons", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1193);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlapConvexPolygons", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(1210);
	if ((frame[6].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1211);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_depth = (jfloat(3.402823e+38f));
	LINE_NUMBER(1212);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1214);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_overlapsOnAxisOfShape_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_boolean_R_boolean(ctx, (frame[3].o), (frame[4].i), (frame[5].i), (frame[0].o), (frame[1].i), (frame[2].i), (frame[6].o), (jint(1)));
	frame[7].i = temp0;
	LINE_NUMBER(1215);
	if ((frame[7].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1216);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_Intersector_overlapsOnAxisOfShape_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_boolean_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].i), (frame[6].o), (jint(0)));
	frame[7].i = temp0;
	}
label_5:;
	{
	LINE_NUMBER(1219);
	if ((frame[7].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1220);
	if ((frame[6].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1221);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_depth = (jfloat(0));
	LINE_NUMBER(1222);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_setZero_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(1224);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1226);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_overlapsOnAxisOfShape_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jobject param6, jbool param7) {
	jtype frame[32];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:overlapsOnAxisOfShape", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(1238);
	frame[8].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(1239);
	frame[9].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(1241);
	frame[10].i = (frame[1].i);
	}
label_3:;
	{
	if ((frame[10].i) >= (frame[8].i)) goto label_4;
	}
	{
	LINE_NUMBER(1242);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[10].i)));
	LINE_NUMBER(1243);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[10].i) + (jint(1)))));
	LINE_NUMBER(1244);
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[10].i) + (jint(2))) % (frame[2].i))));
	LINE_NUMBER(1245);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (((frame[10].i) + (jint(3))) % (frame[2].i))));
	LINE_NUMBER(1248);
	frame[15].f = ((frame[12].f) - (frame[14].f));
	LINE_NUMBER(1249);
	frame[16].f = (-((frame[11].f) - (frame[13].f)));
	LINE_NUMBER(1251);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_Vector2_len_float_float_R_float(ctx, (frame[15].f), (frame[16].f));
	frame[17].f = temp0;
	LINE_NUMBER(1253);
	frame[15].f = ((frame[15].f) / (frame[17].f));
	LINE_NUMBER(1254);
	frame[16].f = ((frame[16].f) / (frame[17].f));
	LINE_NUMBER(1255);
	frame[18].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(1256);
	frame[19].f = (jfloat(-3.402823e+38f));
	LINE_NUMBER(1258);
	frame[20].i = (frame[1].i);
	}
label_17:;
	{
	if ((frame[20].i) >= (frame[8].i)) goto label_18;
	}
	{
	LINE_NUMBER(1259);
	frame[21].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[20].i))) * (frame[15].f)) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[20].i) + (jint(1))))) * (frame[16].f)));
	LINE_NUMBER(1260);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[18].f), (frame[21].f));
	frame[18].f = temp0;
	LINE_NUMBER(1261);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[19].f), (frame[21].f));
	frame[19].f = temp1;
	LINE_NUMBER(1258);
	INST_IINC(20, 2);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1264);
	frame[20].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(1265);
	frame[21].f = (jfloat(-3.402823e+38f));
	LINE_NUMBER(1268);
	frame[22].i = (frame[4].i);
	}
label_25:;
	{
	if ((frame[22].i) >= (frame[9].i)) goto label_26;
	}
	{
	LINE_NUMBER(1269);
	frame[23].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[22].i))) * (frame[15].f)) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[22].i) + (jint(1))))) * (frame[16].f)));
	LINE_NUMBER(1270);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[20].f), (frame[23].f));
	frame[20].f = temp0;
	LINE_NUMBER(1271);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[21].f), (frame[23].f));
	frame[21].f = temp1;
	LINE_NUMBER(1268);
	INST_IINC(22, 2);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(1274);
	if ((floatCompare((frame[19].f), (frame[20].f), 1)) < 0) goto label_31;
	}
	{
	if ((floatCompare((frame[21].f), (frame[18].f), 1)) >= 0) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(1275);
	popStackFrame(ctx);
	return (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(1277);
	if ((frame[6].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(1278);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[19].f), (frame[21].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[18].f), (frame[20].f));
	frame[22].f = (temp0 - temp1);
	LINE_NUMBER(1279);
	if ((floatCompare((frame[18].f), (frame[20].f), 1)) >= 0) goto label_36;
	}
	{
	if ((floatCompare((frame[19].f), (frame[21].f), -1)) <= 0) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	frame[23].i = sp[0].i;
	LINE_NUMBER(1280);
	if ((floatCompare((frame[20].f), (frame[18].f), 1)) >= 0) goto label_39;
	}
	{
	if ((floatCompare((frame[21].f), (frame[19].f), -1)) <= 0) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(1282);
	frame[25].f = (jfloat(0));
	LINE_NUMBER(1283);
	frame[26].f = (jfloat(0));
	LINE_NUMBER(1284);
	if ((frame[23].i) != 0) goto label_44;
	}
	INST_ILOAD(24);
	if ((--sp)->i == 0) goto label_45;
label_44:;
	{
	LINE_NUMBER(1285);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[18].f) - (frame[20].f)));
	frame[25].f = temp0;
	LINE_NUMBER(1286);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[19].f) - (frame[21].f)));
	frame[26].f = temp1;
	LINE_NUMBER(1287);
	jfloat temp2 = frame[22].f;
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[25].f), (frame[26].f));
	frame[22].f = (temp2 + temp3);
	}
label_45:;
	{
	LINE_NUMBER(1290);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_depth), (frame[22].f), -1)) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(1291);
	((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_depth = (frame[22].f);
	LINE_NUMBER(1293);
	if ((frame[7].i) == 0) goto label_50;
	}
	{
	LINE_NUMBER(1294);
	if ((floatCompare((frame[18].f), (frame[20].f), 1)) >= 0) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	{
	sp -= 1;
	frame[27].i = sp[0].i;
	LINE_NUMBER(1295);
	if ((frame[27].i) == 0) goto label_55;
	}
	INST_FLOAD(15);
	goto label_56;
label_55:;
	INST_FLOAD(15);
	INST_FNEG();
label_56:;
	{
	sp -= 1;
	frame[15].f = sp[0].f;
	LINE_NUMBER(1296);
	if ((frame[27].i) == 0) goto label_58;
	}
	INST_FLOAD(16);
	goto label_59;
label_58:;
	INST_FLOAD(16);
	INST_FNEG();
label_59:;
	INST_FSTORE(16);
	goto label_60;
label_50:;
	{
	LINE_NUMBER(1298);
	if ((floatCompare((frame[18].f), (frame[20].f), -1)) <= 0) goto label_61;
	}
	INST_ICONST(1);
	goto label_62;
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 1;
	frame[27].i = sp[0].i;
	LINE_NUMBER(1299);
	if ((frame[27].i) == 0) goto label_64;
	}
	INST_FLOAD(15);
	goto label_65;
label_64:;
	INST_FLOAD(15);
	INST_FNEG();
label_65:;
	{
	sp -= 1;
	frame[15].f = sp[0].f;
	LINE_NUMBER(1300);
	if ((frame[27].i) == 0) goto label_67;
	}
	INST_FLOAD(16);
	goto label_68;
label_67:;
	INST_FLOAD(16);
	INST_FNEG();
label_68:;
	INST_FSTORE(16);
label_60:;
	{
	LINE_NUMBER(1303);
	if ((frame[23].i) != 0) goto label_69;
	}
	INST_ILOAD(24);
	if ((--sp)->i == 0) goto label_70;
label_69:;
	{
	LINE_NUMBER(1304);
	if ((floatCompare((frame[25].f), (frame[26].f), -1)) <= 0) goto label_71;
	}
	INST_ICONST(1);
	goto label_72;
label_71:;
	INST_ICONST(0);
label_72:;
	{
	sp -= 1;
	frame[27].i = sp[0].i;
	LINE_NUMBER(1305);
	if ((frame[27].i) == 0) goto label_74;
	}
	INST_FLOAD(15);
	goto label_75;
label_74:;
	INST_FLOAD(15);
	INST_FNEG();
label_75:;
	{
	sp -= 1;
	frame[15].f = sp[0].f;
	LINE_NUMBER(1306);
	if ((frame[27].i) == 0) goto label_77;
	}
	INST_FLOAD(16);
	goto label_78;
label_77:;
	INST_FLOAD(16);
	INST_FNEG();
label_78:;
	INST_FSTORE(16);
label_70:;
	{
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$MinimumTranslationVector *) NULL_CHECK((frame[6].o)))->F_normal;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[15].f), (frame[16].f));
	}
label_33:;
	{
	LINE_NUMBER(1241);
	INST_IINC(10, 2);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1314);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Intersector_splitTriangle_Array1_float_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Intersector$SplitTriangle(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:splitTriangle", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1334);
	frame[3].i = ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(3)));
	LINE_NUMBER(1335);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1336);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(0)) + (frame[3].i)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(1)) + (frame[3].i)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(2)) + (frame[3].i)))));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1337);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(0)) + ((frame[3].i) * (jint(2)))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(1)) + ((frame[3].i) * (jint(2)))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((jint(2)) + ((frame[3].i) * (jint(2)))))));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1340);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_reset) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_reset])(ctx, (frame[2].o));
	LINE_NUMBER(1343);
	if ((frame[4].i) != (frame[5].i)) goto label_12;
	}
	{
	if ((frame[5].i) != (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(1344);
	((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_total = (jint(1));
	LINE_NUMBER(1345);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1346);
	((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numBack = (jint(1));
	LINE_NUMBER(1347);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(1349);
	((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numFront = (jint(1));
	LINE_NUMBER(1350);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	}
label_18:;
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(1356);
	((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_total = (jint(3));
	LINE_NUMBER(1357);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_21;
	}
	INST_ICONST(0);
	goto label_22;
label_21:;
	INST_ICONST(1);
label_22:;
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_23;
	INST_ICONST(0);
	goto label_24;
label_23:;
	INST_ICONST(1);
label_24:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[6].i) == 0) goto label_25;
	}
	INST_ICONST(0);
	goto label_26;
label_25:;
	INST_ICONST(1);
label_26:;
	{
	sp -= 3;
	((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK(sp[0].o))->F_numFront = (sp[1].i + sp[2].i);
	LINE_NUMBER(1358);
	((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numBack = (((jint)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_total) - ((jint)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numFront));
	LINE_NUMBER(1363);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[4].i) != 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1366);
	frame[7].i = (jint(0));
	LINE_NUMBER(1367);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(1368);
	if ((frame[4].i) == (frame[5].i)) goto label_34;
	}
	{
	LINE_NUMBER(1370);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	SM_com_badlogic_gdx_math_Intersector_splitEdge_Array1_float_int_int_int_com_badlogic_gdx_math_Plane_Array1_float_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(1373);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	LINE_NUMBER(1374);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(1377);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_com_badlogic_gdx_math_Intersector$SplitTriangle_getSide_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_getSide_R_boolean])(ctx, (frame[2].o));
	sp += 1;
	if (temp3 != 0) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1378);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	goto label_42;
	}
label_34:;
	{
	LINE_NUMBER(1381);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	}
label_42:;
	{
	LINE_NUMBER(1385);
	frame[7].i = (frame[3].i);
	LINE_NUMBER(1386);
	frame[8].i = ((frame[3].i) + (frame[3].i));
	LINE_NUMBER(1387);
	if ((frame[5].i) == (frame[6].i)) goto label_45;
	}
	{
	LINE_NUMBER(1389);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	SM_com_badlogic_gdx_math_Intersector_splitEdge_Array1_float_int_int_int_com_badlogic_gdx_math_Plane_Array1_float_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(1392);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	LINE_NUMBER(1393);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(1396);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_com_badlogic_gdx_math_Intersector$SplitTriangle_getSide_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_getSide_R_boolean])(ctx, (frame[2].o));
	sp += 1;
	if (temp3 != 0) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1397);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	goto label_53;
	}
label_45:;
	{
	LINE_NUMBER(1400);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	}
label_53:;
	{
	LINE_NUMBER(1404);
	frame[7].i = ((frame[3].i) + (frame[3].i));
	LINE_NUMBER(1405);
	frame[8].i = (jint(0));
	LINE_NUMBER(1406);
	if ((frame[6].i) == (frame[4].i)) goto label_56;
	}
	{
	LINE_NUMBER(1408);
	sp[0].o = frame[0].o;
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = frame[3].i;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	SM_com_badlogic_gdx_math_Intersector_splitEdge_Array1_float_int_int_int_com_badlogic_gdx_math_Plane_Array1_float_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(1411);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	LINE_NUMBER(1412);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	LINE_NUMBER(1415);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_com_badlogic_gdx_math_Intersector$SplitTriangle_getSide_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_getSide_R_boolean])(ctx, (frame[2].o));
	sp += 1;
	if (temp3 != 0) goto label_61;
	}
	INST_ICONST(1);
	goto label_62;
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_setSide_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1416);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_edgeSplit;
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[3].i));
	goto label_64;
	}
label_56:;
	{
	LINE_NUMBER(1419);
	((func_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Intersector$SplitTriangle_add_Array1_float_int_int])(ctx, (frame[2].o), (frame[0].o), (frame[7].i), (frame[3].i));
	}
label_64:;
	{
	LINE_NUMBER(1423);
	if (((jint)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_numFront) != (jint(2))) goto label_65;
	}
	{
	LINE_NUMBER(1424);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	jint temp0 = (frame[3].i) * (jint(2));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) * (jint(3))), ((frame[3].i) * (jint(2))));
	LINE_NUMBER(1425);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[3].i) * (jint(5))), (frame[3].i));
	goto label_68;
	}
label_65:;
	{
	LINE_NUMBER(1427);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	jint temp0 = (frame[3].i) * (jint(2));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((frame[3].i) * (jint(3))), ((frame[3].i) * (jint(2))));
	LINE_NUMBER(1428);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Intersector$SplitTriangle *) NULL_CHECK((frame[2].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp1, sp[1].o, ((frame[3].i) * (jint(5))), (frame[3].i));
	}
label_68:;
	LINE_NUMBER(1430);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_math_Intersector_splitEdge_Array1_float_int_int_int_com_badlogic_gdx_math_Plane_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jint param6) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:splitEdge", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1435);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(1))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (jint(2))));
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(1))));
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(2))));
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_intersection;
	jfloat temp6 = (jfloat)SM_com_badlogic_gdx_math_Intersector_intersectLinePlane_float_float_float_float_float_float_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_float(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o, sp[1].o);
	frame[7].f = temp6;
	LINE_NUMBER(1437);
	sp[0].o = frame[5].o;
	jint temp7 = (frame[6].i) + (jint(0));
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_intersection;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(1438);
	sp[0].o = frame[5].o;
	jint temp8 = (frame[6].i) + (jint(1));
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_intersection;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(1439);
	sp[0].o = frame[5].o;
	jint temp9 = (frame[6].i) + (jint(2));
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Intersector_intersection;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(1440);
	frame[8].i = (jint(3));
	}
label_5:;
	{
	if ((frame[8].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(1441);
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) + (frame[8].i))));
	LINE_NUMBER(1442);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (frame[8].i))));
	LINE_NUMBER(1443);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[6].i) + (frame[8].i))) = ((frame[9].f) + ((frame[7].f) * ((frame[10].f) - (frame[9].f))));
	LINE_NUMBER(1440);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_math_Intersector_hasOverlap_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[18];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:hasOverlap", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1517);
	frame[3].o = (frame[0].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1518);
	frame[7].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(1519);
	frame[8].f = (jfloat(-3.402823e+38f));
	LINE_NUMBER(1521);
	frame[9].o = (frame[1].o);
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_6:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_7;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(1522);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[12].o), (frame[6].o));
	frame[13].f = temp0;
	LINE_NUMBER(1523);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[13].f));
	frame[7].f = temp1;
	LINE_NUMBER(1524);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[8].f), (frame[13].f));
	frame[8].f = temp2;
	LINE_NUMBER(1521);
	INST_IINC(11, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1527);
	frame[9].f = (jfloat(3.402823e+38f));
	LINE_NUMBER(1528);
	frame[10].f = (jfloat(-3.402823e+38f));
	LINE_NUMBER(1530);
	frame[11].o = (frame[2].o);
	frame[12].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	frame[13].i = (jint(0));
	}
label_14:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_15;
	}
	{
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(1531);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector3_dot_com_badlogic_gdx_math_Vector3_R_float])(ctx, (frame[14].o), (frame[6].o));
	frame[15].f = temp0;
	LINE_NUMBER(1532);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[9].f), (frame[15].f));
	frame[9].f = temp1;
	LINE_NUMBER(1533);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[10].f), (frame[15].f));
	frame[10].f = temp2;
	LINE_NUMBER(1530);
	INST_IINC(13, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1536);
	if ((floatCompare((frame[8].f), (frame[9].f), 1)) < 0) goto label_20;
	}
	{
	if ((floatCompare((frame[10].f), (frame[7].f), 1)) >= 0) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(1538);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(1517);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1542);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Intersector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Intersector:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Intersector(ctx);
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v0 = sp[0].o;
	LINE_NUMBER(38);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v1 = sp[0].o;
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v2 = sp[0].o;
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_floatArray = sp[0].o;
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_utils_FloatArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_FloatArray);
	init_com_badlogic_gdx_utils_FloatArray(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_floatArray2 = sp[0].o;
	LINE_NUMBER(143);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_ip = sp[0].o;
	LINE_NUMBER(144);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_ep1 = sp[0].o;
	LINE_NUMBER(145);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_ep2 = sp[0].o;
	LINE_NUMBER(146);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_s = sp[0].o;
	LINE_NUMBER(147);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_e = sp[0].o;
	LINE_NUMBER(244);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v2a = sp[0].o;
	LINE_NUMBER(245);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v2b = sp[0].o;
	LINE_NUMBER(246);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v2c = sp[0].o;
	LINE_NUMBER(247);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_v2d = sp[0].o;
	LINE_NUMBER(479);
	clinit_com_badlogic_gdx_math_Plane(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Plane);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[1].o);
	init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_float(ctx, sp[0].o, sp[1].o, (jfloat(0)));
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_p = sp[0].o;
	LINE_NUMBER(480);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_i = sp[0].o;
	LINE_NUMBER(527);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_dir = sp[0].o;
	LINE_NUMBER(528);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_start = sp[0].o;
	LINE_NUMBER(845);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_best = sp[0].o;
	LINE_NUMBER(846);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_tmp = sp[0].o;
	LINE_NUMBER(847);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_tmp1 = sp[0].o;
	LINE_NUMBER(848);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_tmp2 = sp[0].o;
	LINE_NUMBER(849);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_tmp3 = sp[0].o;
	LINE_NUMBER(1432);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Intersector(ctx);
	SF_com_badlogic_gdx_math_Intersector_intersection = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Intersector[] {
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_math_Intersector$MinimumTranslationVector,
	&class_com_badlogic_gdx_math_Intersector$SplitTriangle,
};

static FieldMetadata fields[] {
	{ "v0", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v0, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "v1", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v1, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "v2", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v2, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "floatArray", &class_com_badlogic_gdx_utils_FloatArray, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_floatArray, "Lcom/badlogic/gdx/utils/FloatArray;", 26 },
	{ "floatArray2", &class_com_badlogic_gdx_utils_FloatArray, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_floatArray2, "Lcom/badlogic/gdx/utils/FloatArray;", 26 },
	{ "ip", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_ip, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "ep1", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_ep1, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "ep2", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_ep2, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "s", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_s, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "e", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_e, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "v2a", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v2a, "Lcom/badlogic/gdx/math/Vector2;", 8 },
	{ "v2b", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v2b, "Lcom/badlogic/gdx/math/Vector2;", 8 },
	{ "v2c", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v2c, "Lcom/badlogic/gdx/math/Vector2;", 8 },
	{ "v2d", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_v2d, "Lcom/badlogic/gdx/math/Vector2;", 8 },
	{ "p", &class_com_badlogic_gdx_math_Plane, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_p, "Lcom/badlogic/gdx/math/Plane;", 26 },
	{ "i", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_i, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "dir", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_dir, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "start", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_start, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "best", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_best, "Lcom/badlogic/gdx/math/Vector3;", 8 },
	{ "tmp", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_tmp, "Lcom/badlogic/gdx/math/Vector3;", 8 },
	{ "tmp1", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_tmp1, "Lcom/badlogic/gdx/math/Vector3;", 8 },
	{ "tmp2", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_tmp2, "Lcom/badlogic/gdx/math/Vector3;", 8 },
	{ "tmp3", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_tmp3, "Lcom/badlogic/gdx/math/Vector3;", 8 },
	{ "intersection", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Intersector_intersection, "Lcom/badlogic/gdx/math/Vector3;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Intersector, 0, "()V", 2 },
	{ "isPointInTriangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "isPointInTriangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "isPointInTriangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_isPointInTriangle_float_float_float_float_float_float_float_float_R_boolean, 0, "(FFFFFFFF)Z", 9 },
	{ "intersectSegmentPlane", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegmentPlane_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "pointLineSide", (intptr_t) SM_com_badlogic_gdx_math_Intersector_pointLineSide_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_int, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)I", 9 },
	{ "pointLineSide", (intptr_t) SM_com_badlogic_gdx_math_Intersector_pointLineSide_float_float_float_float_float_float_R_int, 0, "(FFFFFF)I", 9 },
	{ "isPointInPolygon", (intptr_t) SM_com_badlogic_gdx_math_Intersector_isPointInPolygon_com_badlogic_gdx_utils_Array_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "isPointInPolygon", (intptr_t) SM_com_badlogic_gdx_math_Intersector_isPointInPolygon_Array1_float_int_int_float_float_R_boolean, 0, "([FIIFF)Z", 9 },
	{ "intersectPolygons", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_R_boolean, 0, "(Lcom/badlogic/gdx/math/Polygon;Lcom/badlogic/gdx/math/Polygon;Lcom/badlogic/gdx/math/Polygon;)Z", 9 },
	{ "intersectPolygons", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectPolygons_com_badlogic_gdx_utils_FloatArray_com_badlogic_gdx_utils_FloatArray_R_boolean, 0, "(Lcom/badlogic/gdx/utils/FloatArray;Lcom/badlogic/gdx/utils/FloatArray;)Z", 9 },
	{ "intersectPolygonEdges", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectPolygonEdges_com_badlogic_gdx_utils_FloatArray_com_badlogic_gdx_utils_FloatArray_R_boolean, 0, "(Lcom/badlogic/gdx/utils/FloatArray;Lcom/badlogic/gdx/utils/FloatArray;)Z", 9 },
	{ "distanceLinePoint", (intptr_t) SM_com_badlogic_gdx_math_Intersector_distanceLinePoint_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "distanceSegmentPoint", (intptr_t) SM_com_badlogic_gdx_math_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "distanceSegmentPoint", (intptr_t) SM_com_badlogic_gdx_math_Intersector_distanceSegmentPoint_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)F", 9 },
	{ "nearestSegmentPoint", (intptr_t) SM_com_badlogic_gdx_math_Intersector_nearestSegmentPoint_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "nearestSegmentPoint", (intptr_t) SM_com_badlogic_gdx_math_Intersector_nearestSegmentPoint_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, 0, "(FFFFFFLcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 9 },
	{ "intersectSegmentCircle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegmentCircle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_float_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;F)Z", 9 },
	{ "intersectSegmentCircle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegmentCircle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Circle;Lcom/badlogic/gdx/math/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "intersectFrustumBounds", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectFrustumBounds_com_badlogic_gdx_math_Frustum_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, 0, "(Lcom/badlogic/gdx/math/Frustum;Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 9 },
	{ "intersectFrustumBounds", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectFrustumBounds_com_badlogic_gdx_math_Frustum_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, 0, "(Lcom/badlogic/gdx/math/Frustum;Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z", 9 },
	{ "intersectRayRay", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayRay_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_float, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)F", 9 },
	{ "intersectRayPlane", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayPlane_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectLinePlane", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectLinePlane_float_float_float_float_float_float_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_float, 0, "(FFFFFFLcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Vector3;)F", 9 },
	{ "intersectPlanes", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectPlanes_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayTriangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayTriangle_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRaySphere", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRaySphere_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_float_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/Vector3;FLcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayBounds", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayBoundsFast", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 9 },
	{ "intersectRayBoundsFast", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayOrientedBoundsFast", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z", 9 },
	{ "intersectRayOrientedBoundsFast", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBoundsFast_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;)Z", 9 },
	{ "intersectRayOrientedBounds", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_OrientedBoundingBox_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayOrientedBounds", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayOrientedBounds_com_badlogic_gdx_math_collision_Ray_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayTriangles", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayTriangles_com_badlogic_gdx_math_collision_Ray_Array1_float_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;[FLcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayTriangles", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayTriangles_com_badlogic_gdx_math_collision_Ray_Array1_float_Array1_short_int_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;[F[SILcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectRayTriangles", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRayTriangles_com_badlogic_gdx_math_collision_Ray_java_util_List_com_badlogic_gdx_math_Vector3_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/Ray;Ljava/util/List;Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "intersectBoundsPlaneFast", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectBoundsPlaneFast_com_badlogic_gdx_math_collision_BoundingBox_com_badlogic_gdx_math_Plane_R_boolean, 0, "(Lcom/badlogic/gdx/math/collision/BoundingBox;Lcom/badlogic/gdx/math/Plane;)Z", 9 },
	{ "intersectBoundsPlaneFast", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectBoundsPlaneFast_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_float_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;F)Z", 9 },
	{ "intersectLines", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectLines_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "intersectLines", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectLines_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(FFFFFFFFLcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "intersectLinePolygon", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectLinePolygon_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Polygon_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Polygon;)Z", 9 },
	{ "intersectRectangles", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectRectangles_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle_R_boolean, 0, "(Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)Z", 9 },
	{ "intersectSegmentRectangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegmentRectangle_float_float_float_float_com_badlogic_gdx_math_Rectangle_R_boolean, 0, "(FFFFLcom/badlogic/gdx/math/Rectangle;)Z", 9 },
	{ "intersectSegmentRectangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegmentRectangle_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Rectangle_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Rectangle;)Z", 9 },
	{ "intersectSegmentPolygon", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegmentPolygon_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Polygon_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Polygon;)Z", 9 },
	{ "intersectSegments", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegments_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "intersectSegments", (intptr_t) SM_com_badlogic_gdx_math_Intersector_intersectSegments_float_float_float_float_float_float_float_float_com_badlogic_gdx_math_Vector2_R_boolean, 0, "(FFFFFFFFLcom/badlogic/gdx/math/Vector2;)Z", 9 },
	{ "det", (intptr_t) SM_com_badlogic_gdx_math_Intersector_det_float_float_float_float_R_float, 0, "(FFFF)F", 8 },
	{ "detd", (intptr_t) SM_com_badlogic_gdx_math_Intersector_detd_double_double_double_double_R_double, 0, "(DDDD)D", 8 },
	{ "overlaps", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlaps_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Circle_R_boolean, 0, "(Lcom/badlogic/gdx/math/Circle;Lcom/badlogic/gdx/math/Circle;)Z", 9 },
	{ "overlaps", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlaps_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle_R_boolean, 0, "(Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)Z", 9 },
	{ "overlaps", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlaps_com_badlogic_gdx_math_Circle_com_badlogic_gdx_math_Rectangle_R_boolean, 0, "(Lcom/badlogic/gdx/math/Circle;Lcom/badlogic/gdx/math/Rectangle;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_R_boolean, 0, "(Lcom/badlogic/gdx/math/Polygon;Lcom/badlogic/gdx/math/Polygon;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Polygon_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean, 0, "(Lcom/badlogic/gdx/math/Polygon;Lcom/badlogic/gdx/math/Polygon;Lcom/badlogic/gdx/math/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_Array1_float_Array1_float_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean, 0, "([F[FLcom/badlogic/gdx/math/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "overlapConvexPolygons", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_R_boolean, 0, "([FII[FIILcom/badlogic/gdx/math/Intersector$MinimumTranslationVector;)Z", 9 },
	{ "overlapsOnAxisOfShape", (intptr_t) SM_com_badlogic_gdx_math_Intersector_overlapsOnAxisOfShape_Array1_float_int_int_Array1_float_int_int_com_badlogic_gdx_math_Intersector$MinimumTranslationVector_boolean_R_boolean, 0, "([FII[FIILcom/badlogic/gdx/math/Intersector$MinimumTranslationVector;Z)Z", 10 },
	{ "splitTriangle", (intptr_t) SM_com_badlogic_gdx_math_Intersector_splitTriangle_Array1_float_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Intersector$SplitTriangle, 0, "([FLcom/badlogic/gdx/math/Plane;Lcom/badlogic/gdx/math/Intersector$SplitTriangle;)V", 9 },
	{ "splitEdge", (intptr_t) SM_com_badlogic_gdx_math_Intersector_splitEdge_Array1_float_int_int_int_com_badlogic_gdx_math_Plane_Array1_float_int, 0, "([FIIILcom/badlogic/gdx/math/Plane;[FI)V", 10 },
	{ "hasOverlap", (intptr_t) SM_com_badlogic_gdx_math_Intersector_hasOverlap_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_Array1_com_badlogic_gdx_math_Vector3_R_boolean, 0, "([Lcom/badlogic/gdx/math/Vector3;[Lcom/badlogic/gdx/math/Vector3;[Lcom/badlogic/gdx/math/Vector3;)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Intersector, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Intersector{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Intersector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Intersector),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Intersector,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Intersector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Intersector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 62,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Intersector = registerClass(&class_com_badlogic_gdx_math_Intersector);

}

