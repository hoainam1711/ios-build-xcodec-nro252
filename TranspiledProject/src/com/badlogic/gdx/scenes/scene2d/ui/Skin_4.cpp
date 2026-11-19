#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_4.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_4.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Float.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "com/badlogic/gdx/utils/Json_ReadOnlySerializer.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Json$ReadOnlySerializer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Skin$4 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(590);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$4:read", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_com_badlogic_gdx_graphics_Color)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Color, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"hex"_j))), (((jobject) &class_java_lang_String)), (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(594);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Color_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Color(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(595);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"r"_j));
	clinit_java_lang_Float(ctx);
	sp[2].o = (jobject)SF_java_lang_Float_TYPE;
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[5].f = temp0;
	LINE_NUMBER(596);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"g"_j));
	clinit_java_lang_Float(ctx);
	sp[2].o = (jobject)SF_java_lang_Float_TYPE;
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jfloat temp1 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[6].f = temp1;
	LINE_NUMBER(597);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"b"_j));
	clinit_java_lang_Float(ctx);
	sp[2].o = (jobject)SF_java_lang_Float_TYPE;
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jfloat temp2 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[7].f = temp2;
	LINE_NUMBER(598);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"a"_j));
	clinit_java_lang_Float(ctx);
	sp[2].o = (jobject)SF_java_lang_Float_TYPE;
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(1)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jfloat temp3 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[8].f = temp3;
	LINE_NUMBER(599);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$4:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$4[] {
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
	(void *) M_com_badlogic_gdx_utils_Json$ReadOnlySerializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_Color,
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
	{ "write", "(Lcom/badlogic/gdx/utils/Json;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Lcom/badlogic/gdx/graphics/Color;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$4, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 0 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Skin$4{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Skin$4",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Json$ReadOnlySerializer,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Skin$4),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$4,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Skin$4 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Skin$4);

}

