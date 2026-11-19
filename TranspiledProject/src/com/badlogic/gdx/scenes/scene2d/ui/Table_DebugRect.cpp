#include "com/badlogic/gdx/scenes/scene2d/ui/Table_DebugRect.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/utils/DefaultPool.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_DebugRect_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_0.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_DebugRect.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_math_Rectangle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table$DebugRect:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1272);
	init_com_badlogic_gdx_math_Rectangle(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table$DebugRect:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(ctx);
	{
	LINE_NUMBER(1273);
	clinit_com_badlogic_gdx_utils_DefaultPool(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_DefaultPool);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect[] {
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

static FieldMetadata fields[] {
	{ "pool", &class_com_badlogic_gdx_utils_Pool, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool, "Lcom/badlogic/gdx/utils/Pool;", 8 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect, F_color), "Lcom/badlogic/gdx/graphics/Color;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Table$DebugRect",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_math_Rectangle,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Table,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect);

}

