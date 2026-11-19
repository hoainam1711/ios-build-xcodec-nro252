#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_2.h"
#include "java/lang/Exception.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_TintedDrawable.h"
#include "com/badlogic/gdx/utils/Json_ReadOnlySerializer.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$2(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Skin$2 *) object;
	if (self->F_val$skin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$skin)->clazz)->markFunction)((jobject) self->F_val$skin, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(517);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$2 *) NULL_CHECK((frame[0].o)))->F_val$skin = (jref) (frame[2].o);
	init_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$2:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_child;
	frame[4].o = sp[0].o;
	}
label_5:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_6;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(521);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(522);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(523);
	M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_readNamedObjects_com_badlogic_gdx_utils_Json_java_lang_Class_com_badlogic_gdx_utils_JsonValue(ctx, (frame[0].o), (frame[1].o), (frame[5].o), (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(526);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(524);
	frame[5].o = sp[0].o;
	LINE_NUMBER(525);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$2 *) NULL_CHECK((frame[0].o)))->F_val$skin;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_readNamedObjects_com_badlogic_gdx_utils_Json_java_lang_Class_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$2:readNamedObjects", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(532);
	if ((frame[2].o) != (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$TintedDrawable))) goto label_5;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable);
	goto label_6;
label_5:;
	INST_ALOAD(2);
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(533);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_8:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_9;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(535);
	if ((frame[6].o) != nullptr) goto label_0;
	}
	goto label_12;
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[4].o));
	LINE_NUMBER(538);
	if ((frame[4].o) == (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable))) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable)), (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[6].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable)));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(543);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(540);
	frame[7].o = sp[0].o;
	LINE_NUMBER(541);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(542);
	sp[2].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_8;
	}
label_9:;
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$2:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$2[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_ui_Skin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_readNamedObjects_com_badlogic_gdx_utils_Json_java_lang_Class_com_badlogic_gdx_utils_JsonValue,
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
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;" },
	{ "readNamedObjects", "(Lcom/badlogic/gdx/utils/Json;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V" },
};

static FieldMetadata fields[] {
	{ "val$skin", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$2, F_val$skin), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$2, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 0 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 1 },
	{ "readNamedObjects", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_readNamedObjects_com_badlogic_gdx_utils_Json_java_lang_Class_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_readNamedObjects_com_badlogic_gdx_utils_Json_java_lang_Class_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V", 2 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Skin$2{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Skin$2",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Json$ReadOnlySerializer,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Skin$2),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$2,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Skin$2 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Skin$2);

}

