#include "com/badlogic/gdx/math/Frustum.h"
#include "com/badlogic/gdx/math/Plane_PlaneSide.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/collision/OrientedBoundingBox.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/collision/BoundingBox.h"
#include "com/badlogic/gdx/math/Frustum.h"
#include "com/badlogic/gdx/math/Plane.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints;
jobject SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray;
jobject SF_com_badlogic_gdx_math_Frustum_tmpV;

void mark_com_badlogic_gdx_math_Frustum(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray, mark, depth + 1);
		if (SF_com_badlogic_gdx_math_Frustum_tmpV)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_math_Frustum_tmpV)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_math_Frustum_tmpV, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_math_Frustum *) object;
	if (self->F_planes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planes)->clazz)->markFunction)((jobject) self->F_planes, mark, depth + 1);
	if (self->F_planePoints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planePoints)->clazz)->markFunction)((jobject) self->F_planePoints, mark, depth + 1);
	if (self->F_planePointsArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planePointsArray)->clazz)->markFunction)((jobject) self->F_planePointsArray, mark, depth + 1);
}

void init_com_badlogic_gdx_math_Frustum(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Frustum(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Plane, (6));
	((com_badlogic_gdx_math_Frustum *) NULL_CHECK(sp[0].o))->F_planes = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (8));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	((com_badlogic_gdx_math_Frustum *) NULL_CHECK(sp[0].o))->F_planePoints = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (24));
	((com_badlogic_gdx_math_Frustum *) NULL_CHECK(sp[0].o))->F_planePointsArray = (jref) sp[1].o;
	LINE_NUMBER(54);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	if ((frame[1].i) >= (6)) goto label_6;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_math_Plane(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Plane);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[2].o);
	init_com_badlogic_gdx_math_Plane_com_badlogic_gdx_math_Vector3_float(ctx, sp[1].o, sp[2].o, (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(54);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_Frustum_update_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp1 = jint(0);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[1].o)))->F_val;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	SM_com_badlogic_gdx_math_Matrix4_prj_Array1_float_Array1_float_int_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), (8), (jint(3)));
	LINE_NUMBER(65);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (8)) goto label_5;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(67);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp0));
	LINE_NUMBER(68);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp1));
	LINE_NUMBER(69);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePointsArray;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp2));
	LINE_NUMBER(65);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(2)))));
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(5)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (7))));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(2)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(4)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(3)))));
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(5)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(1)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (6))));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(4)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (6))));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(5)));
	sp[1].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)));
	sp[2].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)));
	sp[3].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planePoints;
	((func_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_set_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(1)))));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:pointInFrustum", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(85);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_pointInFrustum_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:pointInFrustum", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(99);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(99);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_sphereInFrustum_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:sphereInFrustum", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(112);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	jfloat temp3 = -(frame[2].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(112);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_sphereInFrustum_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:sphereInFrustum", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(126);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) * (frame[3].f));
	jfloat temp3 = -(frame[4].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(126);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_com_badlogic_gdx_math_Vector3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:sphereInFrustumWithoutNearFar", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(137);
	frame[3].i = (jint(2));
	}
label_1:;
	{
	if ((frame[3].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) * ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z));
	jfloat temp3 = -(frame[2].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(137);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:sphereInFrustumWithoutNearFar", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(151);
	frame[5].i = (jint(2));
	}
label_1:;
	{
	if ((frame[5].i) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp1 = temp0 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_normal;
	jfloat temp2 = temp1 + (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_z) * (frame[3].f));
	jfloat temp3 = -(frame[4].f);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	if ((floatCompare(temp2, (temp3 - ((jfloat)((com_badlogic_gdx_math_Plane *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)))))->F_d)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(151);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:boundsInFrustum", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	goto label_6;
label_7:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	goto label_6;
label_8:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	goto label_6;
label_10:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	goto label_6;
label_11:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	goto label_6;
label_12:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_BoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	goto label_6;
label_13:;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(161);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:boundsInFrustum", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Frustum_boundsInFrustum_float_float_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_Frustum_boundsInFrustum_float_float_float_float_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[1].o)))->F_z), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y) / (jfloat(2))), (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z) / (jfloat(2))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_boundsInFrustum_float_float_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:boundsInFrustum", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(185);
	frame[7].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	frame[8].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_3;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) + (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	goto label_6;
label_7:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) + (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	goto label_6;
label_8:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) + (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) - (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	goto label_6;
label_10:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) - (frame[4].f)), ((frame[2].f) + (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	goto label_6;
label_11:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) - (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	goto label_6;
label_12:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))))->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_float_float_float_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i))), ((frame[1].f) - (frame[4].f)), ((frame[2].f) - (frame[5].f)), ((frame[3].f) - (frame[6].f)));
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	goto label_6;
label_13:;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(185);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:boundsInFrustum", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner000_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	goto label_6;
label_5:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner001_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	goto label_6;
label_7:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner010_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	goto label_6;
label_8:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner011_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	goto label_6;
label_9:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner100_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_10;
	}
	goto label_6;
label_10:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner101_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	goto label_6;
label_11:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner110_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	goto label_6;
label_12:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_math_Frustum *) NULL_CHECK((frame[0].o)))->F_planes;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Frustum_tmpV;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_collision_OrientedBoundingBox_getCorner111_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Plane_testPoint_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Plane$PlaneSide])(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_math_Plane$PlaneSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Plane$PlaneSide_Back;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	goto label_6;
label_13:;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(205);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_math_Frustum(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/Frustum:<clinit>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_Frustum(ctx);
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_math_Vector3, (8));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(-1.0f)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(1)), (jfloat(-1.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(-1.0f)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(-1.0f)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[1].o, (jfloat(-1.0f)), (jfloat(1)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject) createArray(ctx, &class_float, (24));
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray = sp[0].o;
	LINE_NUMBER(35);
	frame[0].i = (jint(0));
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray;
	jint temp0 = frame[0].i;
	INST_IINC(0, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_x);
	LINE_NUMBER(38);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray;
	jint temp1 = frame[0].i;
	INST_IINC(0, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray;
	jint temp2 = frame[0].i;
	INST_IINC(0, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_z);
	LINE_NUMBER(36);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(43);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_math_Frustum(ctx);
	SF_com_badlogic_gdx_math_Frustum_tmpV = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_Frustum[] {
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
	(void *) M_com_badlogic_gdx_math_Frustum_update_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_pointInFrustum_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_sphereInFrustum_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_sphereInFrustum_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_com_badlogic_gdx_math_Vector3_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_BoundingBox_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_float_float_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean,
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
	{ "update", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "pointInFrustum", "(Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "pointInFrustum", "(FFF)Z" },
	{ "sphereInFrustum", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "sphereInFrustum", "(FFFF)Z" },
	{ "sphereInFrustumWithoutNearFar", "(Lcom/badlogic/gdx/math/Vector3;F)Z" },
	{ "sphereInFrustumWithoutNearFar", "(FFFF)Z" },
	{ "boundsInFrustum", "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z" },
	{ "boundsInFrustum", "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Z" },
	{ "boundsInFrustum", "(FFFFFF)Z" },
	{ "boundsInFrustum", "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z" },
};

static FieldMetadata fields[] {
	{ "clipSpacePlanePoints", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), (intptr_t) &SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePoints, "[Lcom/badlogic/gdx/math/Vector3;", 28 },
	{ "clipSpacePlanePointsArray", getArrayClass(&class_float, 1), (intptr_t) &SF_com_badlogic_gdx_math_Frustum_clipSpacePlanePointsArray, "[F", 28 },
	{ "tmpV", &class_com_badlogic_gdx_math_Vector3, (intptr_t) &SF_com_badlogic_gdx_math_Frustum_tmpV, "Lcom/badlogic/gdx/math/Vector3;", 26 },
	{ "planes", getArrayClass(&class_com_badlogic_gdx_math_Plane, 1), offsetof(com_badlogic_gdx_math_Frustum, F_planes), "[Lcom/badlogic/gdx/math/Plane;", 17 },
	{ "planePoints", getArrayClass(&class_com_badlogic_gdx_math_Vector3, 1), offsetof(com_badlogic_gdx_math_Frustum, F_planePoints), "[Lcom/badlogic/gdx/math/Vector3;", 17 },
	{ "planePointsArray", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_Frustum, F_planePointsArray), "[F", 20 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_Frustum, 0, "()V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_math_Frustum_update_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_math_Frustum_update_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "pointInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "pointInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_pointInFrustum_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_pointInFrustum_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "sphereInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_sphereInFrustum_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_sphereInFrustum_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "sphereInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_sphereInFrustum_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_sphereInFrustum_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "sphereInFrustumWithoutNearFar", (intptr_t) M_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_com_badlogic_gdx_math_Vector3_float_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_com_badlogic_gdx_math_Vector3_float_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;F)Z", 1 },
	{ "sphereInFrustumWithoutNearFar", (intptr_t) M_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_sphereInFrustumWithoutNearFar_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "boundsInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_BoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/BoundingBox;)Z", 1 },
	{ "boundsInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_Vector3_com_badlogic_gdx_math_Vector3_R_boolean, "(Lcom/badlogic/gdx/math/Vector3;Lcom/badlogic/gdx/math/Vector3;)Z", 1 },
	{ "boundsInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_float_float_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_boundsInFrustum_float_float_float_float_float_float_R_boolean, "(FFFFFF)Z", 1 },
	{ "boundsInFrustum", (intptr_t) M_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, VTABLE_com_badlogic_gdx_math_Frustum_boundsInFrustum_com_badlogic_gdx_math_collision_OrientedBoundingBox_R_boolean, "(Lcom/badlogic/gdx/math/collision/OrientedBoundingBox;)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_math_Frustum, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_math_Frustum{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/Frustum",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_Frustum),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_Frustum,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_Frustum,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_Frustum,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_Frustum = registerClass(&class_com_badlogic_gdx_math_Frustum);

}

