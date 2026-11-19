#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_1.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/CharSequence.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_parentFieldName;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_parentFieldName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_parentFieldName)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_parentFieldName, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Json(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Skin$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Json(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_parentFieldName = ((jobject) createStringLiteral(ctx, u8"parent"_j));
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_utils_Json(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$1:readValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(483);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_lang_CharSequence)), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$1:ignoreUnknownField", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"parent"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$1:readFields", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(493);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"parent"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"parent"_j))), (((jobject) &class_java_lang_String)), (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (frame[3].o), (frame[4].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_copyFields_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_copyFields_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(499);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(500);
	frame[5].o = sp[0].o;
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(502);
	if ((frame[4].o) != (((jobject) &class_java_lang_Object))) goto label_10;
	}
	{
	LINE_NUMBER(503);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to find parent resource with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(505);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_child;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(506);
	throwException(ctx, (frame[6].o));	}
label_10:;
	LINE_NUMBER(508);
	goto label_0;
label_5:;
	{
	LINE_NUMBER(511);
	M_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$1[] {
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
	(void *) M_com_badlogic_gdx_utils_Json_setIgnoreUnknownFields_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_getIgnoreUnknownFields_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_setIgnoreDeprecated_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_setReadDeprecated_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType,
	(void *) M_com_badlogic_gdx_utils_Json_setQuoteLongValues_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_setEnumNames_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_addClassTag_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_getTag_java_lang_Class_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_setTypeName_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_setDefaultSerializer_com_badlogic_gdx_utils_Json$Serializer,
	(void *) M_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer,
	(void *) M_com_badlogic_gdx_utils_Json_getSerializer_java_lang_Class_R_com_badlogic_gdx_utils_Json$Serializer,
	(void *) M_com_badlogic_gdx_utils_Json_setUsePrototypes_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_setDeprecated_java_lang_Class_java_lang_String_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_setSortFields_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_sortFields_java_lang_Class_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_Json_setWriter_java_io_Writer,
	(void *) M_com_badlogic_gdx_utils_Json_getWriter_R_com_badlogic_gdx_utils_JsonWriter,
	(void *) M_com_badlogic_gdx_utils_Json_setReader_com_badlogic_gdx_utils_JsonReader,
	(void *) M_com_badlogic_gdx_utils_Json_getReader_R_com_badlogic_gdx_utils_JsonReader,
	(void *) M_com_badlogic_gdx_utils_Json_writeFields_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeObjectStart,
	(void *) M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_writeObjectEnd,
	(void *) M_com_badlogic_gdx_utils_Json_writeArrayStart_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_writeArrayStart,
	(void *) M_com_badlogic_gdx_utils_Json_writeArrayEnd,
	(void *) M_com_badlogic_gdx_utils_Json_writeType_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_com_badlogic_gdx_utils_reflect_Field_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_copyFields_java_lang_Object_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String,
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
	{ "setIgnoreUnknownFields", "(Z)V" },
	{ "getIgnoreUnknownFields", "()Z" },
	{ "setIgnoreDeprecated", "(Z)V" },
	{ "setReadDeprecated", "(Z)V" },
	{ "setOutputType", "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)V" },
	{ "setQuoteLongValues", "(Z)V" },
	{ "setEnumNames", "(Z)V" },
	{ "addClassTag", "(Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "getClass", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "getTag", "(Ljava/lang/Class;)Ljava/lang/String;" },
	{ "setTypeName", "(Ljava/lang/String;)V" },
	{ "setDefaultSerializer", "(Lcom/badlogic/gdx/utils/Json$Serializer;)V" },
	{ "setSerializer", "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/Json$Serializer;)V" },
	{ "getSerializer", "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/Json$Serializer;" },
	{ "setUsePrototypes", "(Z)V" },
	{ "setElementType", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "setDeprecated", "(Ljava/lang/Class;Ljava/lang/String;Z)V" },
	{ "setSortFields", "(Z)V" },
	{ "sortFields", "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/Array;)V" },
	{ "getFields", "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/OrderedMap;" },
	{ "toJson", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/String;" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/String;" },
	{ "toJson", "(Ljava/lang/Object;Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/io/Writer;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/Writer;)V" },
	{ "toJson", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Writer;)V" },
	{ "setWriter", "(Ljava/io/Writer;)V" },
	{ "getWriter", "()Lcom/badlogic/gdx/utils/JsonWriter;" },
	{ "setReader", "(Lcom/badlogic/gdx/utils/JsonReader;)V" },
	{ "getReader", "()Lcom/badlogic/gdx/utils/JsonReader;" },
	{ "writeFields", "(Ljava/lang/Object;)V" },
	{ "getDefaultValues", "(Ljava/lang/Class;)[Ljava/lang/Object;" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "writeField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "writeValue", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/Object;)V" },
	{ "writeValue", "(Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "writeValue", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeObjectStart", "(Ljava/lang/String;)V" },
	{ "writeObjectStart", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeObjectStart", "()V" },
	{ "writeObjectStart", "(Ljava/lang/Class;Ljava/lang/Class;)V" },
	{ "writeObjectEnd", "()V" },
	{ "writeArrayStart", "(Ljava/lang/String;)V" },
	{ "writeArrayStart", "()V" },
	{ "writeArrayEnd", "()V" },
	{ "writeType", "(Ljava/lang/Class;)V" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;[CII)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;[CII)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "fromJson", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "readField", "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/reflect/Field;Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "readFields", "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "ignoreUnknownField", "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Z" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "readValue", "(Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;" },
	{ "copyFields", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "convertToString", "(Ljava/lang/Enum;)Ljava/lang/String;" },
	{ "convertToString", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "newInstance", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "prettyPrint", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/Object;I)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)Ljava/lang/String;" },
	{ "prettyPrint", "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "parentFieldName", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_parentFieldName, "Ljava/lang/String;", 26 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 0 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "ignoreUnknownField", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean, "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Z", 4 },
	{ "readFields", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Skin$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Skin$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Json,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Skin$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$1,
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
		.vtableSize = 99,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Skin$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Skin$1);

}

