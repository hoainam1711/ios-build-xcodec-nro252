#include "com/badlogic/gdx/utils/viewport/ScalingViewport.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/utils/viewport/Viewport.h"
#include "com/badlogic/gdx/utils/viewport/ScalingViewport.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_utils_viewport_ScalingViewport(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_viewport_Viewport(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_viewport_ScalingViewport *) object;
	if (self->F_scaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scaling)->clazz)->markFunction)((jobject) self->F_scaling, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_viewport_ScalingViewport(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_viewport_Viewport(ctx);
}

void init_com_badlogic_gdx_utils_viewport_ScalingViewport_com_badlogic_gdx_utils_Scaling_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/ScalingViewport:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_viewport_ScalingViewport(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	clinit_com_badlogic_gdx_graphics_OrthographicCamera(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_OrthographicCamera);
	init_com_badlogic_gdx_graphics_OrthographicCamera(ctx, sp[2].o);
	init_com_badlogic_gdx_utils_viewport_ScalingViewport_com_badlogic_gdx_utils_Scaling_float_float_com_badlogic_gdx_graphics_Camera(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_viewport_ScalingViewport_com_badlogic_gdx_utils_Scaling_float_float_com_badlogic_gdx_graphics_Camera(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/ScalingViewport:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_viewport_ScalingViewport(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(46);
	init_com_badlogic_gdx_utils_viewport_Viewport(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((com_badlogic_gdx_utils_viewport_ScalingViewport *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[1].o);
	LINE_NUMBER(48);
	((func_com_badlogic_gdx_utils_viewport_ScalingViewport_setWorldSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_setWorldSize_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(49);
	((func_com_badlogic_gdx_utils_viewport_ScalingViewport_setCamera_com_badlogic_gdx_graphics_Camera) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_setCamera_com_badlogic_gdx_graphics_Camera])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_ScalingViewport_update_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/ScalingViewport:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_ScalingViewport *) NULL_CHECK((frame[0].o)))->F_scaling;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_viewport_ScalingViewport_getWorldWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_getWorldWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_viewport_ScalingViewport_getWorldHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_getWorldHeight_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Scaling_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Scaling_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, temp1, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(54);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_x));
	frame[5].i = temp2;
	LINE_NUMBER(55);
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[4].o)))->F_y));
	frame[6].i = temp3;
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_utils_viewport_ScalingViewport_setScreenBounds_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_setScreenBounds_int_int_int_int])(ctx, (frame[0].o), (((frame[1].i) - (frame[5].i)) / (jint(2))), (((frame[2].i) - (frame[6].i)) / (jint(2))), (frame[5].i), (frame[6].i));
	LINE_NUMBER(60);
	((func_com_badlogic_gdx_utils_viewport_ScalingViewport_apply_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_apply_boolean])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_viewport_ScalingViewport_getScaling_R_com_badlogic_gdx_utils_Scaling(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/ScalingViewport:getScaling", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_viewport_ScalingViewport *) NULL_CHECK((frame[0].o)))->F_scaling;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_viewport_ScalingViewport_setScaling_com_badlogic_gdx_utils_Scaling(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/viewport/ScalingViewport:setScaling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((com_badlogic_gdx_utils_viewport_ScalingViewport *) NULL_CHECK((frame[0].o)))->F_scaling = (jref) (frame[1].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_viewport_ScalingViewport[] {
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
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_apply,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_apply_boolean,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_update_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_ScalingViewport_update_int_int_boolean,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_project_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getPickRay_float_float_R_com_badlogic_gdx_math_collision_Ray,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_calculateScissors_com_badlogic_gdx_math_Matrix4_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_toScreenCoordinates_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getCamera_R_com_badlogic_gdx_graphics_Camera,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setCamera_com_badlogic_gdx_graphics_Camera,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getWorldWidth_R_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldWidth_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getWorldHeight_R_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldHeight_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setWorldSize_float_float,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenX_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenX_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenY_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenY_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenWidth_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenWidth_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getScreenHeight_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenHeight_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenPosition_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenSize_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_setScreenBounds_int_int_int_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getLeftGutterWidth_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterX_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getRightGutterWidth_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getBottomGutterHeight_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterY_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_Viewport_getTopGutterHeight_R_int,
	(void *) M_com_badlogic_gdx_utils_viewport_ScalingViewport_getScaling_R_com_badlogic_gdx_utils_Scaling,
	(void *) M_com_badlogic_gdx_utils_viewport_ScalingViewport_setScaling_com_badlogic_gdx_utils_Scaling,
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
	{ "apply", "()V" },
	{ "apply", "(Z)V" },
	{ "update", "(II)V" },
	{ "update", "(IIZ)V" },
	{ "unproject", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "project", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "unproject", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "project", "(Lcom/badlogic/gdx/math/Vector3;)Lcom/badlogic/gdx/math/Vector3;" },
	{ "getPickRay", "(FF)Lcom/badlogic/gdx/math/collision/Ray;" },
	{ "calculateScissors", "(Lcom/badlogic/gdx/math/Matrix4;Lcom/badlogic/gdx/math/Rectangle;Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "toScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Matrix4;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "getCamera", "()Lcom/badlogic/gdx/graphics/Camera;" },
	{ "setCamera", "(Lcom/badlogic/gdx/graphics/Camera;)V" },
	{ "getWorldWidth", "()F" },
	{ "setWorldWidth", "(F)V" },
	{ "getWorldHeight", "()F" },
	{ "setWorldHeight", "(F)V" },
	{ "setWorldSize", "(FF)V" },
	{ "getScreenX", "()I" },
	{ "setScreenX", "(I)V" },
	{ "getScreenY", "()I" },
	{ "setScreenY", "(I)V" },
	{ "getScreenWidth", "()I" },
	{ "setScreenWidth", "(I)V" },
	{ "getScreenHeight", "()I" },
	{ "setScreenHeight", "(I)V" },
	{ "setScreenPosition", "(II)V" },
	{ "setScreenSize", "(II)V" },
	{ "setScreenBounds", "(IIII)V" },
	{ "getLeftGutterWidth", "()I" },
	{ "getRightGutterX", "()I" },
	{ "getRightGutterWidth", "()I" },
	{ "getBottomGutterHeight", "()I" },
	{ "getTopGutterY", "()I" },
	{ "getTopGutterHeight", "()I" },
	{ "getScaling", "()Lcom/badlogic/gdx/utils/Scaling;" },
	{ "setScaling", "(Lcom/badlogic/gdx/utils/Scaling;)V" },
};

static FieldMetadata fields[] {
	{ "scaling", &class_com_badlogic_gdx_utils_Scaling, offsetof(com_badlogic_gdx_utils_viewport_ScalingViewport, F_scaling), "Lcom/badlogic/gdx/utils/Scaling;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_viewport_ScalingViewport_com_badlogic_gdx_utils_Scaling_float_float, 0, "(Lcom/badlogic/gdx/utils/Scaling;FF)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_viewport_ScalingViewport_com_badlogic_gdx_utils_Scaling_float_float_com_badlogic_gdx_graphics_Camera, 0, "(Lcom/badlogic/gdx/utils/Scaling;FFLcom/badlogic/gdx/graphics/Camera;)V", 1 },
	{ "update", (intptr_t) M_com_badlogic_gdx_utils_viewport_ScalingViewport_update_int_int_boolean, VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_update_int_int_boolean, "(IIZ)V", 1 },
	{ "getScaling", (intptr_t) M_com_badlogic_gdx_utils_viewport_ScalingViewport_getScaling_R_com_badlogic_gdx_utils_Scaling, VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_getScaling_R_com_badlogic_gdx_utils_Scaling, "()Lcom/badlogic/gdx/utils/Scaling;", 1 },
	{ "setScaling", (intptr_t) M_com_badlogic_gdx_utils_viewport_ScalingViewport_setScaling_com_badlogic_gdx_utils_Scaling, VTABLE_com_badlogic_gdx_utils_viewport_ScalingViewport_setScaling_com_badlogic_gdx_utils_Scaling, "(Lcom/badlogic/gdx/utils/Scaling;)V", 1 },
};

Class class_com_badlogic_gdx_utils_viewport_ScalingViewport{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/viewport/ScalingViewport",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_viewport_Viewport,
		.size = sizeof(com_badlogic_gdx_utils_viewport_ScalingViewport),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_viewport_ScalingViewport,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_viewport_ScalingViewport,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_viewport_ScalingViewport,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_viewport_ScalingViewport = registerClass(&class_com_badlogic_gdx_utils_viewport_ScalingViewport);

}

