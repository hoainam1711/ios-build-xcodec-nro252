#include "com/badlogic/gdx/math/EarClippingTriangulator.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "com/badlogic/gdx/math/GeometryUtils.h"
#include "com/badlogic/gdx/utils/ShortArray.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "com/badlogic/gdx/math/EarClippingTriangulator.h"

extern "C" {

jint SF_com_badlogic_gdx_math_EarClippingTriangulator_CONCAVE;
jint SF_com_badlogic_gdx_math_EarClippingTriangulator_CONVEX;

void mark_com_badlogic_gdx_math_EarClippingTriangulator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_math_EarClippingTriangulator *) object;
	if (self->F_indicesArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indicesArray)->clazz)->markFunction)((jobject) self->F_indicesArray, mark, depth + 1);
	if (self->F_indices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indices)->clazz)->markFunction)((jobject) self->F_indices, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_vertexTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexTypes)->clazz)->markFunction)((jobject) self->F_vertexTypes, mark, depth + 1);
	if (self->F_triangles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_triangles)->clazz)->markFunction)((jobject) self->F_triangles, mark, depth + 1);
}

void clinit_com_badlogic_gdx_math_EarClippingTriangulator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_math_EarClippingTriangulator_CONCAVE = jint(-1);
	SF_com_badlogic_gdx_math_EarClippingTriangulator_CONVEX = jint(1);
}

void init_com_badlogic_gdx_math_EarClippingTriangulator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_EarClippingTriangulator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ShortArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ShortArray);
	init_com_badlogic_gdx_utils_ShortArray(ctx, sp[1].o);
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_indicesArray = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexTypes = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ShortArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ShortArray);
	init_com_badlogic_gdx_utils_ShortArray(ctx, sp[1].o);
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_triangles = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:computeTriangles", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[1].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_R_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:computeTriangles", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:computeTriangles", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(68);
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertices = (jref) (frame[1].o);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[3].i) / (jint(2));
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexCount = temp0;
	frame[4].i = temp0;
	LINE_NUMBER(70);
	frame[5].i = ((frame[2].i) / (jint(2)));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indicesArray;
	frame[6].o = sp[0].o;
	LINE_NUMBER(73);
	((func_com_badlogic_gdx_utils_ShortArray_clear) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_clear])(ctx, (frame[6].o));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short])(ctx, (frame[6].o), (frame[4].i));
	LINE_NUMBER(75);
	((com_badlogic_gdx_utils_ShortArray *) NULL_CHECK((frame[6].o)))->F_size = (frame[4].i);
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ShortArray *) NULL_CHECK((frame[6].o)))->F_items;
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_indices = (jref) sp[1].o;
	frame[7].o = sp[1].o;
	LINE_NUMBER(77);
	jint temp3 = (jint)SM_com_badlogic_gdx_math_GeometryUtils_isClockwise_Array1_float_int_int_R_boolean(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	if (temp3 == 0) goto label_9;
	}
	{
	LINE_NUMBER(78);
	frame[8].i = (jint(0));
	}
label_11:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(79);
	ARRAY_ACCESS(jshort, (frame[7].o), (frame[8].i)) = (jshort(((frame[5].i) + (frame[8].i))));
	LINE_NUMBER(78);
	frame[8].i = (jshort(((frame[8].i) + (jint(1)))));
	goto label_11;
	}
label_12:;
	goto label_15;
label_9:;
	{
	LINE_NUMBER(81);
	frame[8].i = (jint(0));
	frame[9].i = ((frame[4].i) - (jint(1)));
	}
label_17:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_15;
	}
	{
	LINE_NUMBER(82);
	ARRAY_ACCESS(jshort, (frame[7].o), (frame[8].i)) = (jshort((((frame[5].i) + (frame[9].i)) - (frame[8].i))));
	LINE_NUMBER(81);
	INST_IINC(8, 1);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	frame[8].o = sp[0].o;
	LINE_NUMBER(86);
	((func_com_badlogic_gdx_utils_IntArray_clear) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_clear])(ctx, (frame[8].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int])(ctx, (frame[8].o), (frame[4].i));
	LINE_NUMBER(88);
	frame[9].i = (jint(0));
	frame[10].i = (frame[4].i);
	}
label_24:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_25;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int(ctx, (frame[0].o), (frame[9].i));
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(88);
	INST_IINC(9, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[9].o = sp[0].o;
	LINE_NUMBER(93);
	((func_com_badlogic_gdx_utils_ShortArray_clear) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_clear])(ctx, (frame[9].o));
	LINE_NUMBER(94);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), ((frame[4].i) - (jint(2))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short])(ctx, sp[0].o, (temp0 * (jint(3))));
	LINE_NUMBER(95);
	M_com_badlogic_gdx_math_EarClippingTriangulator_triangulate(ctx, (frame[0].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_EarClippingTriangulator_triangulate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:triangulate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(102);
	if (((jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount) <= (jint(3))) goto label_2;
	}
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_findEarTip_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(104);
	M_com_badlogic_gdx_math_EarClippingTriangulator_cutEarTip_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(107);
	jint temp1 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp1;
	LINE_NUMBER(108);
	if ((frame[2].i) != ((jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount)) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	INST_ILOAD(2);
label_8:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(109);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int(ctx, (frame[0].o), (frame[3].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	jint temp2 = frame[4].i;
	jint temp3 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int(ctx, (frame[0].o), (frame[4].i));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	LINE_NUMBER(111);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(113);
	if (((jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount) != (jint(3))) goto label_12;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[2].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(116);
	((func_com_badlogic_gdx_utils_ShortArray_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_add_short])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (jint(0)))));
	LINE_NUMBER(117);
	((func_com_badlogic_gdx_utils_ShortArray_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_add_short])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (jint(1)))));
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_utils_ShortArray_add_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_add_short])(ctx, (frame[2].o), ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (jint(2)))));
	}
label_12:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:classifyVertex", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = (((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) * (jint(2)));
	LINE_NUMBER(126);
	frame[4].i = (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[1].i))) * (jint(2)));
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[5].i = (((jint)ARRAY_ACCESS(jshort, sp[0].o, temp1)) * (jint(2)));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[6].o = sp[0].o;
	LINE_NUMBER(129);
	jint temp2 = (jint)SM_com_badlogic_gdx_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[3].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[3].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[4].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[4].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[5].i) + (jint(1))))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_EarClippingTriangulator_findEarTip_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:findEarTip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	frame[1].i = ((jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount);
	LINE_NUMBER(135);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_isEarTip_int_R_boolean(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_5;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(135);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(146);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(147);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))) == (jint(-1))) goto label_10;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(146);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_math_EarClippingTriangulator_isEarTip_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:isEarTip", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(153);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i))) != (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[3].i = temp0;
	LINE_NUMBER(156);
	jint temp1 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp1;
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(158);
	frame[6].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[3].i))) * (jint(2)));
	LINE_NUMBER(159);
	frame[7].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[1].i))) * (jint(2)));
	LINE_NUMBER(160);
	frame[8].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[4].i))) * (jint(2)));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[9].o = sp[0].o;
	LINE_NUMBER(162);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[6].i)));
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[6].i) + (jint(1)))));
	LINE_NUMBER(163);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[7].i)));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(164);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[8].i)));
	frame[15].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[8].i) + (jint(1)))));
	LINE_NUMBER(168);
	jint temp2 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[4].i));
	frame[16].i = temp2;
	}
label_16:;
	{
	if ((frame[16].i) == (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(171);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[16].i))) == (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(172);
	frame[17].i = (((jint)ARRAY_ACCESS(jshort, (frame[5].o), (frame[16].i))) * (jint(2)));
	LINE_NUMBER(173);
	frame[18].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[17].i)));
	LINE_NUMBER(174);
	frame[19].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[17].i) + (jint(1)))));
	LINE_NUMBER(178);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, (frame[14].f), (frame[15].f), (frame[10].f), (frame[11].f), (frame[18].f), (frame[19].f));
	if (temp0 < 0) goto label_19;
	}
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, (frame[10].f), (frame[11].f), (frame[12].f), (frame[13].f), (frame[18].f), (frame[19].f));
	if (temp0 < 0) goto label_19;
	}
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)SM_com_badlogic_gdx_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(ctx, (frame[12].f), (frame[13].f), (frame[14].f), (frame[15].f), (frame[18].f), (frame[19].f));
	if (temp0 < 0) goto label_19;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[16].i));
	frame[16].i = temp0;
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_math_EarClippingTriangulator_cutEarTip_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:cutEarTip", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indices;
	frame[2].o = sp[0].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_triangles;
	frame[3].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	((func_com_badlogic_gdx_utils_ShortArray_add_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_add_short])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, temp0)));
	LINE_NUMBER(193);
	((func_com_badlogic_gdx_utils_ShortArray_add_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_add_short])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[1].i))));
	LINE_NUMBER(194);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	jint temp1 = (jint)M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	((func_com_badlogic_gdx_utils_ShortArray_add_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_add_short])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, temp1)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_indicesArray;
	jint temp2 = (jint)((func_com_badlogic_gdx_utils_ShortArray_removeIndex_int_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_removeIndex_int_R_short])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexTypes;
	jint temp3 = (jint)((func_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexCount = (((jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK(sp[0].o))->F_vertexCount) - (jint(1)));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:previousIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(1);
label_2:;
	{
	sp -= 1;
	popStackFrame(ctx);
	return (sp[0].i - (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:nextIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (((frame[1].i) + (jint(1))) % ((jint)((com_badlogic_gdx_math_EarClippingTriangulator *) NULL_CHECK((frame[0].o)))->F_vertexCount));
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/math/EarClippingTriangulator:computeSpannedAreaSign", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_math_EarClippingTriangulator(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(210);
	frame[6].f = ((frame[0].f) * ((frame[5].f) - (frame[3].f)));
	LINE_NUMBER(211);
	frame[6].f = ((frame[6].f) + ((frame[2].f) * ((frame[1].f) - (frame[5].f))));
	LINE_NUMBER(212);
	frame[6].f = ((frame[6].f) + ((frame[4].f) * ((frame[3].f) - (frame[1].f))));
	LINE_NUMBER(213);
	jfloat temp0 = (jfloat)SM_java_lang_Math_signum_float_R_float(ctx, (frame[6].f));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_math_EarClippingTriangulator[] {
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
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_ShortArray,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_R_com_badlogic_gdx_utils_ShortArray,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_triangulate,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_findEarTip_R_int,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_isEarTip_int_R_boolean,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_cutEarTip_int,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int,
	(void *) M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int,
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
	{ "computeTriangles", "(Lcom/badlogic/gdx/utils/FloatArray;)Lcom/badlogic/gdx/utils/ShortArray;" },
	{ "computeTriangles", "([F)Lcom/badlogic/gdx/utils/ShortArray;" },
	{ "computeTriangles", "([FII)Lcom/badlogic/gdx/utils/ShortArray;" },
	{ "triangulate", "()V" },
	{ "classifyVertex", "(I)I" },
	{ "findEarTip", "()I" },
	{ "isEarTip", "(I)Z" },
	{ "cutEarTip", "(I)V" },
	{ "previousIndex", "(I)I" },
	{ "nextIndex", "(I)I" },
};

static FieldMetadata fields[] {
	{ "CONCAVE", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_EarClippingTriangulator_CONCAVE, "I", 26 },
	{ "CONVEX", &class_int, (intptr_t) &SF_com_badlogic_gdx_math_EarClippingTriangulator_CONVEX, "I", 26 },
	{ "indicesArray", &class_com_badlogic_gdx_utils_ShortArray, offsetof(com_badlogic_gdx_math_EarClippingTriangulator, F_indicesArray), "Lcom/badlogic/gdx/utils/ShortArray;", 18 },
	{ "indices", getArrayClass(&class_short, 1), offsetof(com_badlogic_gdx_math_EarClippingTriangulator, F_indices), "[S", 2 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_math_EarClippingTriangulator, F_vertices), "[F", 2 },
	{ "vertexCount", &class_int, offsetof(com_badlogic_gdx_math_EarClippingTriangulator, F_vertexCount), "I", 2 },
	{ "vertexTypes", &class_com_badlogic_gdx_utils_IntArray, offsetof(com_badlogic_gdx_math_EarClippingTriangulator, F_vertexTypes), "Lcom/badlogic/gdx/utils/IntArray;", 18 },
	{ "triangles", &class_com_badlogic_gdx_utils_ShortArray, offsetof(com_badlogic_gdx_math_EarClippingTriangulator, F_triangles), "Lcom/badlogic/gdx/utils/ShortArray;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_math_EarClippingTriangulator, 0, "()V", 1 },
	{ "computeTriangles", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_ShortArray, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_ShortArray, "(Lcom/badlogic/gdx/utils/FloatArray;)Lcom/badlogic/gdx/utils/ShortArray;", 1 },
	{ "computeTriangles", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_R_com_badlogic_gdx_utils_ShortArray, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_R_com_badlogic_gdx_utils_ShortArray, "([F)Lcom/badlogic/gdx/utils/ShortArray;", 1 },
	{ "computeTriangles", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_com_badlogic_gdx_utils_ShortArray, "([FII)Lcom/badlogic/gdx/utils/ShortArray;", 1 },
	{ "triangulate", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_triangulate, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_triangulate, "()V", 2 },
	{ "classifyVertex", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_classifyVertex_int_R_int, "(I)I", 2 },
	{ "findEarTip", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_findEarTip_R_int, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_findEarTip_R_int, "()I", 2 },
	{ "isEarTip", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_isEarTip_int_R_boolean, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_isEarTip_int_R_boolean, "(I)Z", 2 },
	{ "cutEarTip", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_cutEarTip_int, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_cutEarTip_int, "(I)V", 2 },
	{ "previousIndex", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_previousIndex_int_R_int, "(I)I", 2 },
	{ "nextIndex", (intptr_t) M_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int, VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_nextIndex_int_R_int, "(I)I", 2 },
	{ "computeSpannedAreaSign", (intptr_t) SM_com_badlogic_gdx_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int, 0, "(FFFFFF)I", 10 },
};

Class class_com_badlogic_gdx_math_EarClippingTriangulator{
		.nativeName = (intptr_t) "com/badlogic/gdx/math/EarClippingTriangulator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_math_EarClippingTriangulator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_math_EarClippingTriangulator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_math_EarClippingTriangulator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_math_EarClippingTriangulator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_math_EarClippingTriangulator = registerClass(&class_com_badlogic_gdx_math_EarClippingTriangulator);

}

