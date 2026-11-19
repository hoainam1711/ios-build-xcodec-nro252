#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_5.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "com/badlogic/gdx/utils/Json_ReadOnlySerializer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_5.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/SerializationException.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$5(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Skin$5 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$5:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$5(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(603);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$5 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$5:read", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) &class_java_lang_String)), (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"color"_j))), (((jobject) &class_com_badlogic_gdx_graphics_Color)), (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Color, sp[0].o));
	LINE_NUMBER(607);
	if ((frame[5].o) != nullptr) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"TintedDrawable missing color: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(609);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(610);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[6].o)));
	LINE_NUMBER(611);
	sp[0].o = frame[7].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$5[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object,
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
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$5, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 0 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Skin$5{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Skin$5",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Json$ReadOnlySerializer,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Skin$5),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$5,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$5,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Skin$5 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Skin$5);

}

