#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/utils/JsonWriter.h"
#include "java/lang/Integer.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "java/io/Writer.h"
#include "com/badlogic/gdx/utils/ObjectIntMap_Entry.h"
#include "java/util/ArrayList.h"
#include "com/badlogic/gdx/utils/reflect/Field.h"
#include "java/util/Collection.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/utils/OrderedMap.h"
#include "java/io/StringWriter.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ArrayMap.h"
#include "com/badlogic/gdx/utils/LongMap.h"
#include "java/util/Map.h"
#include "com/badlogic/gdx/utils/ObjectIntMap.h"
#include "com/badlogic/gdx/utils/JsonValue_PrettyPrintSettings.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Entries.h"
#include "java/util/Collections.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap.h"
#include "com/badlogic/gdx/utils/JsonReader.h"
#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "com/badlogic/gdx/utils/IntMap_Entry.h"
#include "java/lang/SecurityException.h"
#include "com/badlogic/gdx/utils/ObjectSet_ObjectSetIterator.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_Entry.h"
#include "com/badlogic/gdx/utils/IntMap_Entries.h"
#include "java/lang/Boolean.h"
#include "java/util/HashMap.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/utils/Json_FieldMetadata.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/utils/LongMap_Entry.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/utils/Json_ReadOnlySerializer.h"
#include "com/badlogic/gdx/utils/JsonWriter_OutputType.h"
#include "com/badlogic/gdx/utils/Json_Serializer.h"
#include "java/lang/Short.h"
#include "com/badlogic/gdx/utils/LongMap_Entries.h"
#include "java/io/InputStream.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/utils/Queue.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "com/badlogic/gdx/utils/ObjectIntMap_Entries.h"
#include "com/badlogic/gdx/utils/IntSet_IntSetIterator.h"
#include "com/badlogic/gdx/utils/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/lang/Byte.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "java/util/Map_Entry.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Long.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/IntSet.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/IntMap.h"

extern "C" {

jbool SF_com_badlogic_gdx_utils_Json_debug;

void mark_com_badlogic_gdx_utils_Json(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Json *) object;
	if (self->F_writer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writer)->clazz)->markFunction)((jobject) self->F_writer, mark, depth + 1);
	if (self->F_reader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reader)->clazz)->markFunction)((jobject) self->F_reader, mark, depth + 1);
	if (self->F_typeName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeName)->clazz)->markFunction)((jobject) self->F_typeName, mark, depth + 1);
	if (self->F_outputType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputType)->clazz)->markFunction)((jobject) self->F_outputType, mark, depth + 1);
	if (self->F_defaultSerializer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultSerializer)->clazz)->markFunction)((jobject) self->F_defaultSerializer, mark, depth + 1);
	if (self->F_typeToFields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeToFields)->clazz)->markFunction)((jobject) self->F_typeToFields, mark, depth + 1);
	if (self->F_tagToClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tagToClass)->clazz)->markFunction)((jobject) self->F_tagToClass, mark, depth + 1);
	if (self->F_classToTag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classToTag)->clazz)->markFunction)((jobject) self->F_classToTag, mark, depth + 1);
	if (self->F_classToSerializer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classToSerializer)->clazz)->markFunction)((jobject) self->F_classToSerializer, mark, depth + 1);
	if (self->F_classToDefaultValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classToDefaultValues)->clazz)->markFunction)((jobject) self->F_classToDefaultValues, mark, depth + 1);
	if (self->F_equals1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_equals1)->clazz)->markFunction)((jobject) self->F_equals1, mark, depth + 1);
	if (self->F_equals2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_equals2)->clazz)->markFunction)((jobject) self->F_equals2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Json(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_Json_debug = jint(0);
}

void init_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Json(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonReader);
	init_com_badlogic_gdx_utils_JsonReader(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_reader = (jref) sp[1].o;
	LINE_NUMBER(50);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName = (jref) (((jobject) createStringLiteral(ctx, u8"class"_j)));
	LINE_NUMBER(51);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes = (jint(1));
	LINE_NUMBER(57);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_enumNames = (jint(1));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_typeToFields = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_tagToClass = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_classToTag = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_classToSerializer = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_classToDefaultValues = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_equals1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_equals2 = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_JsonWriter$OutputType_minimal;
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_outputType = (jref) sp[1].o;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Json(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_JsonReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonReader);
	init_com_badlogic_gdx_utils_JsonReader(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_reader = (jref) sp[1].o;
	LINE_NUMBER(50);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName = (jref) (((jobject) createStringLiteral(ctx, u8"class"_j)));
	LINE_NUMBER(51);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes = (jint(1));
	LINE_NUMBER(57);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_enumNames = (jint(1));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_typeToFields = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_tagToClass = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_classToTag = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_classToSerializer = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_classToDefaultValues = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_equals1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((com_badlogic_gdx_utils_Json *) NULL_CHECK(sp[0].o))->F_equals2 = (jref) sp[1].o;
	LINE_NUMBER(72);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setIgnoreUnknownFields_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setIgnoreUnknownFields", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields = (frame[1].i);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Json_getIgnoreUnknownFields_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getIgnoreUnknownFields", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setIgnoreDeprecated_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setIgnoreDeprecated", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(89);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated = (frame[1].i);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setReadDeprecated_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setReadDeprecated", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(96);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_readDeprecated = (frame[1].i);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setOutputType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_outputType = (jref) (frame[1].o);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setQuoteLongValues_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setQuoteLongValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(108);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_quoteLongValues = (frame[1].i);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setEnumNames_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setEnumNames", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(114);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_enumNames = (frame[1].i);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_addClassTag_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:addClassTag", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_tagToClass;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToTag;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_tagToClass;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getTag_java_lang_Class_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getTag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToTag;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setTypeName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setTypeName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName = (jref) (frame[1].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setDefaultSerializer_com_badlogic_gdx_utils_Json$Serializer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setDefaultSerializer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_defaultSerializer = (jref) (frame[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setSerializer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getSerializer_java_lang_Class_R_com_badlogic_gdx_utils_Json$Serializer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getSerializer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setUsePrototypes_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setUsePrototypes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes = (frame[1].i);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setElementType", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(164);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(165);
	((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[4].o)))->F_elementType = (jref) (frame[3].o);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setDeprecated_java_lang_Class_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setDeprecated", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(173);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(174);
	((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[4].o)))->F_deprecated = (frame[3].i);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setSortFields_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setSortFields", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(180);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_sortFields = (frame[1].i);
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_sortFields_java_lang_Class_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:sortFields", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(186);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_sortFields) == 0) goto label_1;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_utils_Array_sort) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_sort])(ctx, sp[0].o);
label_1:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getFields", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeToFields;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_OrderedMap, sp[0].o));
	LINE_NUMBER(191);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(193);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(194);
	frame[4].o = (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(195);
	if ((frame[4].o) == (((jobject) &class_java_lang_Object))) goto label_9;
	}
	{
	LINE_NUMBER(196);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(199);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(200);
	frame[6].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1)));
	}
label_13:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_14;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[6].i));
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredFields_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Field(ctx, (checkCast(ctx, &class_java_lang_Class, sp[1].o)));
	jint temp0 = (jint)SM_java_util_Collections_addAll_java_util_Collection_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	INST_IINC(6, -1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(203);
	clinit_com_badlogic_gdx_utils_OrderedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap);
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	init_com_badlogic_gdx_utils_OrderedMap_int(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(204);
	frame[7].i = (jint(0));
	jint temp1 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	frame[8].i = temp1;
	}
label_19:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_20;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[7].i));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_reflect_Field, sp[0].o));
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isTransient_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isTransient_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_23;
	}
	goto label_24;
label_23:;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isStatic_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_25;
	}
	goto label_24;
label_25:;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isSynthetic_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isSynthetic_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_26;
	}
	goto label_24;
label_26:;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isAccessible_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isAccessible_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_27;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(213);
	((func_com_badlogic_gdx_utils_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_setAccessible_boolean])(ctx, (frame[9].o), (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(216);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(214);
	frame[10].o = sp[0].o;
	LINE_NUMBER(215);
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[9].o));
	clinit_com_badlogic_gdx_utils_Json$FieldMetadata(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata);
	init_com_badlogic_gdx_utils_Json$FieldMetadata_com_badlogic_gdx_utils_reflect_Field(ctx, sp[2].o, (frame[9].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_24:;
	{
	LINE_NUMBER(204);
	INST_IINC(7, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_OrderedMap *) NULL_CHECK((frame[6].o)))->F_keys;
	((func_com_badlogic_gdx_utils_Json_sortFields_java_lang_Class_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_sortFields_java_lang_Class_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeToFields;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[6].o));
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_Class, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_java_lang_Class, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(237);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	init_java_io_StringWriter(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 3;
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(248);
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(254);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer])(ctx, (frame[4].o), (jint(0)), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(257);
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(261);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(262);
	goto label_11;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(258);
	frame[6].o = sp[0].o;
	LINE_NUMBER(259);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(261);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(262);
	throwException(ctx, (frame[7].o));	}
label_11:;
	LINE_NUMBER(263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 3;
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(271);
	((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:toJson", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(277);
	((func_com_badlogic_gdx_utils_Json_setWriter_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setWriter_java_io_Writer])(ctx, (frame[0].o), (frame[4].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(279);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, sp[0].o);
	LINE_NUMBER(282);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (jobject(nullptr));
	LINE_NUMBER(283);
	goto label_9;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(281);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, sp[0].o);
	LINE_NUMBER(282);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (jobject(nullptr));
	LINE_NUMBER(283);
	throwException(ctx, (frame[5].o));	}
label_9:;
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setWriter_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setWriter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(288);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_JsonWriter)) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_JsonWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonWriter);
	init_com_badlogic_gdx_utils_JsonWriter_java_io_Writer(ctx, sp[0].o, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(289);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (checkCast(ctx, &class_com_badlogic_gdx_utils_JsonWriter, (frame[1].o)));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_outputType;
	((func_com_badlogic_gdx_utils_JsonWriter_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(291);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_com_badlogic_gdx_utils_JsonWriter_setQuoteLongValues_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_setQuoteLongValues_boolean])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_quoteLongValues));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getWriter_R_com_badlogic_gdx_utils_JsonWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getWriter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_setReader_com_badlogic_gdx_utils_JsonReader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:setReader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(300);
	((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader = (jref) (frame[1].o);
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getReader_R_com_badlogic_gdx_utils_JsonReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getReader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeFields_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeFields", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(311);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(313);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(314);
	frame[5].i = (jint(0));
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(316);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_30:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_31;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(318);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated) == 0) goto label_34;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[9].o)))->F_deprecated) == 0) goto label_34;
	}
	goto label_35;
label_34:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[9].o)))->F_field;
	frame[10].o = sp[0].o;
	}
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[10].o), (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(322);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(323);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(324);
	if ((frame[11].o) != nullptr) { popExceptionFrames(frameRef, 3); goto label_4; }
	}
	INST_ALOAD(12);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 3); goto label_4; }
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_35;
label_4:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(325);
	if ((frame[11].o) == nullptr) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	INST_ALOAD(12);
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 3); goto label_10; }
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (frame[12].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_7; }
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_35;
label_7:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[11].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[12].o));
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_equals1;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[11].o);
	LINE_NUMBER(329);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_equals2;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[12].o);
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_equals1;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_equals2;
	jint temp0 = (jint)SM_java_util_Arrays_deepEquals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	goto label_35;
label_10:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_2; }
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[10].o));
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[9].o)))->F_elementType;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(347);
	goto label_35;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(338);
	frame[11].o = sp[0].o;
	LINE_NUMBER(339);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[11].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	sp -= 1;
	LINE_NUMBER(340);
	frame[11].o = sp[0].o;
	LINE_NUMBER(341);
	sp[0].o = frame[11].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(342);
	throwException(ctx, (frame[11].o));	}
label_18:;
	{
	sp -= 1;
	LINE_NUMBER(343);
	frame[11].o = sp[0].o;
	LINE_NUMBER(344);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(345);
	sp[0].o = frame[12].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(346);
	throwException(ctx, (frame[12].o));	}
label_35:;
	{
	LINE_NUMBER(316);
	INST_IINC(7, 1);
	goto label_30;
	}
label_31:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:getDefaultValues", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_usePrototypes) != 0) goto label_13;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(360);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(357);
	frame[3].o = sp[0].o;
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(363);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((com_badlogic_gdx_utils_ObjectMap *) NULL_CHECK((frame[3].o)))->F_size));
	frame[4].o = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToDefaultValues;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[4].o));
	LINE_NUMBER(366);
	frame[5].i = (jint(0));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_orderedKeys_R_com_badlogic_gdx_utils_Array])(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(368);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_23:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_24;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(370);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated) == 0) goto label_27;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[9].o)))->F_deprecated) == 0) goto label_27;
	}
	goto label_28;
label_27:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[9].o)))->F_field;
	frame[10].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(373);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[10].o), (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(383);
	goto label_28;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(374);
	frame[11].o = sp[0].o;
	LINE_NUMBER(375);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[11].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(376);
	frame[11].o = sp[0].o;
	LINE_NUMBER(377);
	sp[0].o = frame[11].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(378);
	throwException(ctx, (frame[11].o));	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(379);
	frame[11].o = sp[0].o;
	LINE_NUMBER(380);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(381);
	sp[0].o = frame[12].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(382);
	throwException(ctx, (frame[12].o));	}
label_28:;
	{
	LINE_NUMBER(368);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeField", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(390);
	((func_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(396);
	((func_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(401);
	((func_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeField", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(409);
	if ((frame[6].o) != nullptr) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_field;
	frame[7].o = sp[0].o;
	LINE_NUMBER(411);
	if ((frame[4].o) != nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_elementType;
	frame[4].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[1].o));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[7].o));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(425);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(416);
	frame[8].o = sp[0].o;
	LINE_NUMBER(417);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(418);
	frame[8].o = sp[0].o;
	LINE_NUMBER(419);
	sp[0].o = frame[8].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(420);
	throwException(ctx, (frame[8].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(421);
	frame[8].o = sp[0].o;
	LINE_NUMBER(422);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(423);
	sp[0].o = frame[9].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(424);
	throwException(ctx, (frame[9].o));	}
label_14:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(436);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(434);
	frame[3].o = sp[0].o;
	LINE_NUMBER(435);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(437);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(438);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (jobject(nullptr)));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	}
label_8:;
	LINE_NUMBER(441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(453);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(451);
	frame[4].o = sp[0].o;
	LINE_NUMBER(452);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(454);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(467);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(465);
	frame[5].o = sp[0].o;
	LINE_NUMBER(466);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(468);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(474);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(475);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	}
label_3:;
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(484);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeValue", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(494);
	if ((frame[1].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (jobject(nullptr)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(496);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(499);
	if ((frame[2].o) == nullptr) goto label_62;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_63;
	}
label_62:;
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_String))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Integer))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Boolean))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Float))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Long))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Double))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Short))) goto label_63;
	}
	{
	if ((frame[2].o) == (((jobject) &class_java_lang_Byte))) goto label_63;
	}
	{
	if ((frame[2].o) != (((jobject) &class_java_lang_Character))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_63:;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_Object_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(503);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_String))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Integer))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Boolean))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Float))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Long))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Double))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Short))) goto label_65;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_lang_Byte))) goto label_65;
	}
	{
	if ((frame[4].o) != (((jobject) &class_java_lang_Character))) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_65:;
	{
	LINE_NUMBER(511);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(512);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o));
	LINE_NUMBER(513);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(517);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Json$Serializable)) == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	LINE_NUMBER(518);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(519);
	((func_com_badlogic_gdx_utils_Json$Serializable_write_com_badlogic_gdx_utils_Json) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, INDEX_com_badlogic_gdx_utils_Json$Serializable_write_com_badlogic_gdx_utils_Json, (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, (frame[1].o))), (frame[0].o));
	LINE_NUMBER(520);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, sp[0].o));
	LINE_NUMBER(525);
	if ((frame[5].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(526);
	((func_com_badlogic_gdx_utils_Json$Serializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, INDEX_com_badlogic_gdx_utils_Json$Serializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(527);
	popStackFrame(ctx);
	INST_RETURN();
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(531);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Array)) == 0) { popExceptionFrames(frameRef, 1); goto label_19; }
	}
	{
	LINE_NUMBER(532);
	if ((frame[2].o) == nullptr) goto label_74;
	}
	{
	if ((frame[4].o) == (frame[2].o)) goto label_74;
	}
	{
	if ((frame[4].o) == (((jobject) &class_com_badlogic_gdx_utils_Array))) goto label_74;
	}
	{
	LINE_NUMBER(533);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Serialization of an Array other than the known type is not supported.\nKnown type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\nActual type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_74:;
	{
	LINE_NUMBER(535);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(536);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, (frame[1].o)));
	LINE_NUMBER(537);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_79:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_80;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(537);
	INST_IINC(7, 1);
	goto label_79;
	}
label_80:;
	{
	LINE_NUMBER(539);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(542);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_Queue)) == 0) { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	LINE_NUMBER(543);
	if ((frame[2].o) == nullptr) goto label_84;
	}
	{
	if ((frame[4].o) == (frame[2].o)) goto label_84;
	}
	{
	if ((frame[4].o) == (((jobject) &class_com_badlogic_gdx_utils_Queue))) goto label_84;
	}
	{
	LINE_NUMBER(544);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Serialization of a Queue other than the known type is not supported.\nKnown type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\nActual type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_84:;
	{
	LINE_NUMBER(546);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(547);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Queue, (frame[1].o)));
	LINE_NUMBER(548);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Queue *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_89:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_90;
	}
	{
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(548);
	INST_IINC(7, 1);
	goto label_89;
	}
label_90:;
	{
	LINE_NUMBER(550);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(551);
	popStackFrame(ctx);
	INST_RETURN();
label_22:;
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(553);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Collection)) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(554);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o == nullptr) goto label_94;
	}
	{
	if ((frame[4].o) == (((jobject) &class_java_util_ArrayList))) goto label_94;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_95;
	{
	if ((frame[2].o) == (frame[4].o)) goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(555);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(556);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_util_Collection, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Collection, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_98:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_99;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(558);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[7].o), (frame[3].o), (jobject(nullptr)));
	goto label_98;
	}
label_99:;
	{
	LINE_NUMBER(559);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	LINE_NUMBER(560);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	goto label_23;
	}
label_94:;
	{
	LINE_NUMBER(562);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (checkCast(ctx, &class_java_util_Collection, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Collection, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_104:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_105;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(564);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[7].o), (frame[3].o), (jobject(nullptr)));
	goto label_104;
	}
label_105:;
	{
	LINE_NUMBER(565);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
label_23:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(569);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	LINE_NUMBER(570);
	if ((frame[3].o) != nullptr) goto label_109;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[4].o));
	frame[3].o = sp[0].o;
	}
label_109:;
	{
	LINE_NUMBER(571);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_getLength_java_lang_Object_R_int(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(572);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(573);
	frame[7].i = (jint(0));
	}
label_112:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_113;
	}
	{
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_get_java_lang_Object_int_R_java_lang_Object(ctx, (frame[1].o), (frame[7].i));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(573);
	INST_IINC(7, 1);
	goto label_112;
	}
label_113:;
	{
	LINE_NUMBER(575);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(576);
	popStackFrame(ctx);
	INST_RETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(580);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(581);
	if ((frame[2].o) != nullptr) goto label_117;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_ObjectMap);
	INST_ASTORE(2);
label_117:;
	{
	LINE_NUMBER(582);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_119:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_120;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(586);
	goto label_119;
	}
label_120:;
	{
	LINE_NUMBER(587);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(590);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectIntMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	LINE_NUMBER(591);
	if ((frame[2].o) != nullptr) goto label_125;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_ObjectIntMap);
	INST_ASTORE(2);
label_125:;
	{
	LINE_NUMBER(592);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectIntMap_entries_R_com_badlogic_gdx_utils_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_entries_R_com_badlogic_gdx_utils_ObjectIntMap$Entries])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectIntMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_127:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_128;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap$Entry, sp[0].o));
	LINE_NUMBER(594);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectIntMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((com_badlogic_gdx_utils_ObjectIntMap$Entry *) NULL_CHECK((frame[7].o)))->F_value));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_java_lang_Integer)));
	LINE_NUMBER(596);
	goto label_127;
	}
label_128:;
	{
	LINE_NUMBER(597);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(600);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectFloatMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_37; }
	}
	{
	LINE_NUMBER(601);
	if ((frame[2].o) != nullptr) goto label_133;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_ObjectFloatMap);
	INST_ASTORE(2);
label_133:;
	{
	LINE_NUMBER(602);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_entries_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectFloatMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_135:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_136;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap$Entry, sp[0].o));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectFloatMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((com_badlogic_gdx_utils_ObjectFloatMap$Entry *) NULL_CHECK((frame[7].o)))->F_value));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_java_lang_Float)));
	LINE_NUMBER(606);
	goto label_135;
	}
label_136:;
	{
	LINE_NUMBER(607);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(608);
	popStackFrame(ctx);
	INST_RETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(610);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ObjectSet)) == 0) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
	{
	LINE_NUMBER(611);
	if ((frame[2].o) != nullptr) goto label_141;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_ObjectSet);
	INST_ASTORE(2);
label_141:;
	{
	LINE_NUMBER(612);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(613);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"values"_j))));
	LINE_NUMBER(614);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectSet, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectSet, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_145:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_146;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(616);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[7].o), (frame[3].o), (jobject(nullptr)));
	goto label_145;
	}
label_146:;
	{
	LINE_NUMBER(617);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	LINE_NUMBER(618);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(619);
	popStackFrame(ctx);
	INST_RETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(621);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_IntMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_43; }
	}
	{
	LINE_NUMBER(622);
	if ((frame[2].o) != nullptr) goto label_151;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_IntMap);
	INST_ASTORE(2);
label_151:;
	{
	LINE_NUMBER(623);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(624);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_entries_R_com_badlogic_gdx_utils_IntMap$Entries])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_153:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_154;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap$Entry, sp[0].o));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[7].o)))->F_key));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_IntMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(627);
	goto label_153;
	}
label_154:;
	{
	LINE_NUMBER(628);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(629);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
label_45: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(631);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_LongMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_46; }
	}
	{
	LINE_NUMBER(632);
	if ((frame[2].o) != nullptr) goto label_159;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_LongMap);
	INST_ASTORE(2);
label_159:;
	{
	LINE_NUMBER(633);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(634);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_entries_R_com_badlogic_gdx_utils_LongMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_LongMap, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_entries_R_com_badlogic_gdx_utils_LongMap$Entries])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_LongMap, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_161:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_162;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_LongMap$Entry, sp[0].o));
	LINE_NUMBER(635);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_long_R_java_lang_String(ctx, ((jlong)((com_badlogic_gdx_utils_LongMap$Entry *) NULL_CHECK((frame[7].o)))->F_key));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(636);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_LongMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(637);
	goto label_161;
	}
label_162:;
	{
	LINE_NUMBER(638);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(639);
	popStackFrame(ctx);
	INST_RETURN();
label_46:;
label_48: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(641);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_IntSet)) == 0) { popExceptionFrames(frameRef, 1); goto label_49; }
	}
	{
	LINE_NUMBER(642);
	if ((frame[2].o) != nullptr) goto label_167;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_IntSet);
	INST_ASTORE(2);
label_167:;
	{
	LINE_NUMBER(643);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"values"_j))));
	LINE_NUMBER(645);
	((func_com_badlogic_gdx_utils_Json_writeArrayStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart])(ctx, (frame[0].o));
	LINE_NUMBER(646);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_IntSet, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_IntSet, (frame[1].o))));
	frame[6].o = sp[0].o;
	}
label_171:;
	{
	if (((jint)((com_badlogic_gdx_utils_IntSet$IntSetIterator *) NULL_CHECK((frame[6].o)))->F_hasNext) == 0) goto label_172;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntSet$IntSetIterator_next_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_next_R_int])(ctx, (frame[6].o));
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_java_lang_Integer)), (jobject(nullptr)));
	goto label_171;
	}
label_172:;
	{
	LINE_NUMBER(648);
	((func_com_badlogic_gdx_utils_Json_writeArrayEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd])(ctx, (frame[0].o));
	LINE_NUMBER(649);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(650);
	popStackFrame(ctx);
	INST_RETURN();
label_49:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(652);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_ArrayMap)) == 0) { popExceptionFrames(frameRef, 1); goto label_52; }
	}
	{
	LINE_NUMBER(653);
	if ((frame[2].o) != nullptr) goto label_176;
	}
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_ArrayMap);
	INST_ASTORE(2);
label_176:;
	{
	LINE_NUMBER(654);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(655);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ArrayMap, (frame[1].o)));
	LINE_NUMBER(656);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_180:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_181;
	}
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[6].o)))->F_keys;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[7].i))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(658);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ArrayMap *) NULL_CHECK((frame[6].o)))->F_values;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[7].i))), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(656);
	INST_IINC(7, 1);
	goto label_180;
	}
label_181:;
	{
	LINE_NUMBER(660);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(661);
	popStackFrame(ctx);
	INST_RETURN();
label_52:;
label_54: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(663);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map)) == 0) { popExceptionFrames(frameRef, 1); goto label_55; }
	}
	{
	LINE_NUMBER(664);
	if ((frame[2].o) != nullptr) goto label_186;
	}
	(sp++)->o = ((jobject) &class_java_util_HashMap);
	INST_ASTORE(2);
label_186:;
	{
	LINE_NUMBER(665);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (checkCast(ctx, &class_java_util_Map, (frame[1].o)))))(ctx, (checkCast(ctx, &class_java_util_Map, (frame[1].o))));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_188:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_189;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(669);
	goto label_188;
	}
label_189:;
	{
	LINE_NUMBER(670);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(671);
	popStackFrame(ctx);
	INST_RETURN();
label_55:;
label_57: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(675);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_lang_Enum)), (frame[4].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_58; }
	}
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[4].o));
	if (sp[0].o != nullptr) goto label_194;
	}
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	}
label_194:;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o == nullptr) goto label_196;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_197;
	{
	if ((frame[2].o) == (frame[4].o)) goto label_196;
	}
label_197:;
	{
	LINE_NUMBER(679);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(680);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"value"_j))));
	LINE_NUMBER(681);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(682);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	goto label_56;
	}
label_196:;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_value_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o);
	}
label_56:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(686);
	popStackFrame(ctx);
	INST_RETURN();
label_58:;
label_60: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(689);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[4].o), (frame[2].o));
	LINE_NUMBER(690);
	((func_com_badlogic_gdx_utils_Json_writeFields_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeFields_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(691);
	((func_com_badlogic_gdx_utils_Json_writeObjectEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(694);
	goto label_203;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(692);
	frame[4].o = sp[0].o;
	LINE_NUMBER(693);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_203:;
	LINE_NUMBER(695);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeObjectStart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(702);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(700);
	frame[2].o = sp[0].o;
	LINE_NUMBER(701);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(703);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart])(ctx, (frame[0].o));
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeObjectStart", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(709);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(712);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(710);
	frame[4].o = sp[0].o;
	LINE_NUMBER(711);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(713);
	((func_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeObjectStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeObjectStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(721);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(719);
	frame[1].o = sp[0].o;
	LINE_NUMBER(720);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(722);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeObjectStart", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(728);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_object_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(731);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(729);
	frame[3].o = sp[0].o;
	LINE_NUMBER(730);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(732);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	if ((frame[2].o) == (frame[1].o)) goto label_7;
	}
label_6:;
	{
	((func_com_badlogic_gdx_utils_Json_writeType_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeType_java_lang_Class])(ctx, (frame[0].o), (frame[1].o));
	}
label_7:;
	LINE_NUMBER(733);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeObjectEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeObjectEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(740);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(738);
	frame[1].o = sp[0].o;
	LINE_NUMBER(739);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(741);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeArrayStart_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeArrayStart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_name_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(746);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(749);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(747);
	frame[2].o = sp[0].o;
	LINE_NUMBER(748);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeArrayStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeArrayStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_array_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(757);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(755);
	frame[1].o = sp[0].o;
	LINE_NUMBER(756);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(758);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeArrayEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeArrayEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_pop_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(765);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(763);
	frame[1].o = sp[0].o;
	LINE_NUMBER(764);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(766);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_writeType_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:writeType", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(770);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_getTag_java_lang_Class_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_getTag_java_lang_Class_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(771);
	if ((frame[2].o) != nullptr) goto label_0;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonWriter_set_java_lang_String_java_lang_String_R_com_badlogic_gdx_utils_JsonWriter])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(776);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(774);
	frame[3].o = sp[0].o;
	LINE_NUMBER(775);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(778);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(783);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_Reader_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(803);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_io_InputStream_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(810);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(811);
	frame[3].o = sp[0].o;
	LINE_NUMBER(812);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(821);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(822);
	frame[4].o = sp[0].o;
	LINE_NUMBER(823);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(830);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[2].o), (frame[3].i), (frame[4].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(837);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_Array1_char_int_int_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[3].o), (frame[4].i), (frame[5].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(843);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:fromJson", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(849);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[3].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readField", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(853);
	((func_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (jobject(nullptr)), (frame[3].o));
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readField", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(857);
	((func_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readField", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(861);
	((func_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)), (frame[4].o));
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readField", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(866);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(867);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[6].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(868);
	if ((frame[7].o) != nullptr) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	frame[8].o = sp[0].o;
	LINE_NUMBER(870);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_elementType;
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(871);
	((func_com_badlogic_gdx_utils_Json_readField_java_lang_Object_com_badlogic_gdx_utils_reflect_Field_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_com_badlogic_gdx_utils_reflect_Field_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[8].o), (frame[3].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_com_badlogic_gdx_utils_reflect_Field_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readField", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(877);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(878);
	if ((frame[6].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(880);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, (frame[4].o), (frame[6].o));
	((func_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(892);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(881);
	frame[7].o = sp[0].o;
	LINE_NUMBER(882);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = frame[2].o;
	LINE_NUMBER(883);
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(884);
	frame[7].o = sp[0].o;
	LINE_NUMBER(885);
	sp[0].o = frame[7].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(886);
	throwException(ctx, (frame[7].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(887);
	frame[7].o = sp[0].o;
	LINE_NUMBER(888);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(889);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String])(ctx, (frame[6].o));
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(890);
	sp[0].o = frame[8].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(891);
	throwException(ctx, (frame[8].o));	}
label_10:;
	LINE_NUMBER(893);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readFields", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(897);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(898);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[2].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_11:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_12;
	{
	LINE_NUMBER(899);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(900);
	if ((frame[6].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(902);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreUnknownFields) != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Json_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_19;
	}
	LINE_NUMBER(904);
	goto label_18;
label_19:;
	{
	LINE_NUMBER(906);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Field not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = frame[3].o;
	LINE_NUMBER(907);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(908);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String])(ctx, (frame[5].o));
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(909);
	throwException(ctx, (frame[7].o));	}
label_15:;
	{
	LINE_NUMBER(912);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_ignoreDeprecated) == 0) goto label_24;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_readDeprecated) != 0) goto label_24;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_deprecated) == 0) goto label_24;
	}
	goto label_18;
label_24:;
	{
	LINE_NUMBER(914);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_field;
	frame[7].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(916);
	sp[0].o = frame[7].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[7].o));
	sp[4].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_elementType;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o, (frame[5].o));
	((func_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(927);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(917);
	frame[8].o = sp[0].o;
	LINE_NUMBER(918);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error accessing field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(919);
	frame[8].o = sp[0].o;
	LINE_NUMBER(920);
	sp[0].o = frame[8].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(921);
	throwException(ctx, (frame[8].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(922);
	frame[8].o = sp[0].o;
	LINE_NUMBER(923);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(924);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_trace_R_java_lang_String])(ctx, (frame[5].o));
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(925);
	sp[0].o = frame[9].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(926);
	throwException(ctx, (frame[9].o));	}
label_18:;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_11;
	}
label_12:;
	LINE_NUMBER(929);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Json_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:ignoreUnknownField", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(938);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(944);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[3].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(951);
	if ((frame[5].o) != nullptr) goto label_2;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(959);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[5].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(967);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(974);
	if ((frame[4].o) != nullptr) goto label_1;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(981);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:readValue", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(988);
	if ((frame[3].o) != nullptr) goto label_53;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_53:;
	{
	LINE_NUMBER(990);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isObject_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_54;
	}
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o != nullptr) goto label_56;
	}
	INST_ACONST_NULL();
	goto label_57;
label_56:;
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	sp += 1;
	}
label_57:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(992);
	if ((frame[4].o) == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class])(ctx, (frame[0].o), (frame[4].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(994);
	if ((frame[1].o) != nullptr) goto label_59;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(996);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_forName_java_lang_String_R_java_lang_Class(ctx, (frame[4].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(999);
	goto label_59;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(997);
	frame[5].o = sp[0].o;
	LINE_NUMBER(998);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_59:;
	{
	LINE_NUMBER(1003);
	if ((frame[1].o) != nullptr) goto label_63;
	}
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_defaultSerializer;
	if (sp[0].o == nullptr) goto label_65;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_defaultSerializer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, INDEX_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_65:;
	{
	LINE_NUMBER(1005);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_63:;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	if (sp[0].o == nullptr) goto label_66;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_util_Collection)), (frame[1].o));
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_get_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1011);
	if ((frame[3].o) != nullptr) goto label_54;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to convert object to collection: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = frame[1].o;
	LINE_NUMBER(1012);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_66:;
	{
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, sp[0].o));
	LINE_NUMBER(1015);
	if ((frame[5].o) == nullptr) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, INDEX_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_71:;
	{
	LINE_NUMBER(1017);
	if ((frame[1].o) == (((jobject) &class_java_lang_String))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Integer))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Boolean))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Float))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Long))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Double))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Short))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Byte))) goto label_72;
	}
	{
	if ((frame[1].o) == (((jobject) &class_java_lang_Character))) goto label_72;
	}
	{
	sp[0].o = ((jobject) &class_java_lang_Enum);
	sp[1].o = frame[1].o;
	LINE_NUMBER(1019);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_74;
	}
label_72:;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_74:;
	{
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1025);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_Json$Serializable)) == 0) goto label_76;
	}
	{
	LINE_NUMBER(1026);
	((func_com_badlogic_gdx_utils_Json$Serializable_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, INDEX_com_badlogic_gdx_utils_Json$Serializable_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, (frame[6].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, (frame[6].o))), (frame[0].o), (frame[3].o));
	LINE_NUMBER(1027);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_76:;
	{
	LINE_NUMBER(1031);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_ObjectMap)) == 0) goto label_79;
	}
	{
	LINE_NUMBER(1032);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, (frame[6].o)));
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_82:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_83;
	{
	LINE_NUMBER(1034);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_82;
	}
label_83:;
	{
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_79:;
	{
	LINE_NUMBER(1037);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_ObjectIntMap)) == 0) goto label_86;
	}
	{
	LINE_NUMBER(1038);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap, (frame[6].o)));
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_89:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_90;
	{
	LINE_NUMBER(1040);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) &class_java_lang_Integer)), (jobject(nullptr)), (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[2].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[2].o)));
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_89;
	}
label_90:;
	{
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_86:;
	{
	LINE_NUMBER(1043);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_ObjectFloatMap)) == 0) goto label_93;
	}
	{
	LINE_NUMBER(1044);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectFloatMap, (frame[6].o)));
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_96:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_97;
	{
	LINE_NUMBER(1046);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) &class_java_lang_Float)), (jobject(nullptr)), (frame[8].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[2].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[2].o)));
	((func_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_96;
	}
label_97:;
	{
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_93:;
	{
	LINE_NUMBER(1049);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_ObjectSet)) == 0) goto label_100;
	}
	{
	LINE_NUMBER(1050);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectSet, (frame[6].o)));
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"values"_j))));
	frame[8].o = sp[0].o;
	}
label_103:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_104;
	{
	LINE_NUMBER(1052);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_103;
	}
label_104:;
	{
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_100:;
	{
	LINE_NUMBER(1055);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_IntMap)) == 0) goto label_107;
	}
	{
	LINE_NUMBER(1056);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntMap, (frame[6].o)));
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_110:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_111;
	{
	LINE_NUMBER(1058);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_110;
	}
label_111:;
	{
	LINE_NUMBER(1059);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_107:;
	{
	LINE_NUMBER(1061);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_LongMap)) == 0) goto label_114;
	}
	{
	LINE_NUMBER(1062);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_LongMap, (frame[6].o)));
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_117:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_118;
	{
	LINE_NUMBER(1064);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_put_long_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_put_long_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_117;
	}
label_118:;
	{
	LINE_NUMBER(1065);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_114:;
	{
	LINE_NUMBER(1067);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_IntSet)) == 0) goto label_121;
	}
	{
	LINE_NUMBER(1068);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_IntSet, (frame[6].o)));
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_getChild_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"values"_j))));
	frame[8].o = sp[0].o;
	}
label_124:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_125;
	{
	LINE_NUMBER(1070);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asInt_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_124;
	}
label_125:;
	{
	LINE_NUMBER(1071);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_121:;
	{
	LINE_NUMBER(1073);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_utils_ArrayMap)) == 0) goto label_128;
	}
	{
	LINE_NUMBER(1074);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ArrayMap, (frame[6].o)));
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_131:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_132;
	{
	LINE_NUMBER(1076);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_131;
	}
label_132:;
	{
	LINE_NUMBER(1077);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_128:;
	{
	LINE_NUMBER(1079);
	if ((isInstance(ctx, (frame[6].o), &class_java_util_Map)) == 0) goto label_135;
	}
	{
	LINE_NUMBER(1080);
	frame[7].o = (checkCast(ctx, &class_java_util_Map, (frame[6].o)));
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[8].o = sp[0].o;
	}
label_138:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_139;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_typeName;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_141;
	}
	goto label_142;
label_141:;
	{
	LINE_NUMBER(1083);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_name;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[8].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_142:;
	{
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[8].o)))->F_next;
	frame[8].o = sp[0].o;
	goto label_138;
	}
label_139:;
	{
	LINE_NUMBER(1085);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_135:;
	{
	LINE_NUMBER(1088);
	((func_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o), (frame[6].o), (frame[3].o));
	LINE_NUMBER(1089);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_54:;
	{
	LINE_NUMBER(1093);
	if ((frame[1].o) == nullptr) goto label_144;
	}
	{
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_classToSerializer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, sp[0].o));
	LINE_NUMBER(1095);
	if ((frame[4].o) == nullptr) goto label_147;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializer, INDEX_com_badlogic_gdx_utils_Json$Serializer_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[0].o), (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_147:;
	{
	LINE_NUMBER(1097);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_com_badlogic_gdx_utils_Json$Serializable)), (frame[1].o));
	if (temp0 == 0) goto label_144;
	}
	{
	LINE_NUMBER(1099);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1100);
	((func_com_badlogic_gdx_utils_Json$Serializable_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, INDEX_com_badlogic_gdx_utils_Json$Serializable_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, (frame[5].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$Serializable, (frame[5].o))), (frame[0].o), (frame[3].o));
	LINE_NUMBER(1101);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_144:;
	{
	LINE_NUMBER(1105);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isArray_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_151;
	}
	{
	LINE_NUMBER(1107);
	if ((frame[1].o) == nullptr) goto label_153;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Object))) goto label_154;
	}
label_153:;
	(sp++)->o = ((jobject) &class_com_badlogic_gdx_utils_Array);
	INST_ASTORE(1);
label_154:;
	{
	LINE_NUMBER(1108);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_com_badlogic_gdx_utils_Array)), (frame[1].o));
	if (temp0 == 0) goto label_155;
	}
	{
	LINE_NUMBER(1109);
	if ((frame[1].o) != (((jobject) &class_com_badlogic_gdx_utils_Array))) goto label_157;
	}
	{
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	sp += 1;
	goto label_158;
	}
label_157:;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o);
	sp += 1;
	}
label_158:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_160:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_161;
	{
	LINE_NUMBER(1111);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[5].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_160;
	}
label_161:;
	{
	LINE_NUMBER(1112);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_155:;
	{
	LINE_NUMBER(1114);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_com_badlogic_gdx_utils_Queue)), (frame[1].o));
	if (temp0 == 0) goto label_164;
	}
	{
	LINE_NUMBER(1115);
	if ((frame[1].o) != (((jobject) &class_com_badlogic_gdx_utils_Queue))) goto label_166;
	}
	{
	clinit_com_badlogic_gdx_utils_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Queue);
	init_com_badlogic_gdx_utils_Queue(ctx, sp[0].o);
	sp += 1;
	goto label_167;
	}
label_166:;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_utils_Queue, sp[0].o);
	sp += 1;
	}
label_167:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_169:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_170;
	{
	LINE_NUMBER(1117);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[5].o));
	((func_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_169;
	}
label_170:;
	{
	LINE_NUMBER(1118);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_164:;
	{
	LINE_NUMBER(1120);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_util_Collection)), (frame[1].o));
	if (temp0 == 0) goto label_173;
	}
	{
	LINE_NUMBER(1121);
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_175;
	}
	{
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	sp += 1;
	goto label_176;
	}
label_175:;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_util_Collection, sp[0].o);
	sp += 1;
	}
label_176:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[5].o = sp[0].o;
	}
label_178:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_179;
	{
	LINE_NUMBER(1123);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[5].o));
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[5].o)))->F_next;
	frame[5].o = sp[0].o;
	goto label_178;
	}
label_179:;
	{
	LINE_NUMBER(1124);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_173:;
	{
	LINE_NUMBER(1126);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_182;
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1128);
	if ((frame[2].o) != nullptr) goto label_185;
	}
	INST_ALOAD(4);
	INST_ASTORE(2);
label_185:;
	{
	LINE_NUMBER(1129);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[4].o), ((jint)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_size));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1130);
	frame[6].i = (jint(0));
	LINE_NUMBER(1131);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[3].o)))->F_child;
	frame[7].o = sp[0].o;
	}
label_188:;
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_189;
	{
	LINE_NUMBER(1132);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)), (frame[7].o));
	SM_com_badlogic_gdx_utils_reflect_ArrayReflection_set_java_lang_Object_int_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(1131);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	goto label_188;
	}
label_189:;
	{
	LINE_NUMBER(1133);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_182:;
	{
	LINE_NUMBER(1135);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to convert value to required type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_151:;
	{
	LINE_NUMBER(1138);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isNumber_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_192;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1140);
	if ((frame[1].o) == nullptr) goto label_193;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o == sp[1].o) goto label_193;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Float))) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
label_193:;
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asFloat_R_float])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = frame[1].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o == sp[1].o) goto label_194;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Integer))) { popExceptionFrames(frameRef, 1); goto label_11; }
	}
label_194:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asInt_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_11:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1142);
	sp[0].o = frame[1].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o == sp[1].o) goto label_195;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Long))) { popExceptionFrames(frameRef, 1); goto label_14; }
	}
label_195:;
	{
	jlong temp0 = (jlong)((func_com_badlogic_gdx_utils_JsonValue_asLong_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asLong_R_long])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_14:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1143);
	sp[0].o = frame[1].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o == sp[1].o) goto label_196;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Double))) { popExceptionFrames(frameRef, 1); goto label_17; }
	}
label_196:;
	{
	jdouble temp0 = (jdouble)((func_com_badlogic_gdx_utils_JsonValue_asDouble_R_double) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asDouble_R_double])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_17:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1144);
	if ((frame[1].o) != (((jobject) &class_java_lang_String))) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_20:;
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1145);
	sp[0].o = frame[1].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o == sp[1].o) goto label_197;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Short))) { popExceptionFrames(frameRef, 1); goto label_23; }
	}
label_197:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asShort_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asShort_R_short])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_23:;
label_25: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1146);
	sp[0].o = frame[1].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o == sp[1].o) goto label_198;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Byte))) { popExceptionFrames(frameRef, 1); goto label_26; }
	}
label_198:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asByte_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asByte_R_byte])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_26:;
label_28: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1147);
	sp[0].o = frame[1].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o == sp[1].o) goto label_199;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Character))) { popExceptionFrames(frameRef, 1); goto label_200; }
	}
label_199:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asChar_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asChar_R_char])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_200:;
	LINE_NUMBER(1149);
	goto label_201;
label_6:;
	LINE_NUMBER(1148);
	INST_ASTORE(4);
label_201:;
	{
	LINE_NUMBER(1150);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	init_com_badlogic_gdx_utils_JsonValue_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_192:;
	{
	LINE_NUMBER(1153);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isBoolean_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_202;
	}
label_32: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(1155);
	if ((frame[1].o) == nullptr) goto label_203;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_203;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Boolean))) { popExceptionFrames(frameRef, 1); goto label_204; }
	}
label_203:;
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asBoolean_R_boolean])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_204:;
	LINE_NUMBER(1157);
	goto label_205;
label_31:;
	LINE_NUMBER(1156);
	INST_ASTORE(4);
label_205:;
	{
	LINE_NUMBER(1158);
	clinit_com_badlogic_gdx_utils_JsonValue(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_JsonValue);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	init_com_badlogic_gdx_utils_JsonValue_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_202:;
	{
	LINE_NUMBER(1161);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_206;
	}
	{
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1163);
	if ((frame[1].o) == nullptr) goto label_209;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_String))) goto label_33;
	}
label_209:;
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_33:;
label_36: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(1165);
	sp[0].o = frame[1].o;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o == sp[1].o) goto label_210;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Integer))) { popExceptionFrames(frameRef, 1); goto label_37; }
	}
label_210:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_37:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(1166);
	sp[0].o = frame[1].o;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o == sp[1].o) goto label_211;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Float))) { popExceptionFrames(frameRef, 1); goto label_40; }
	}
label_211:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_40:;
label_42: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(1167);
	sp[0].o = frame[1].o;
	clinit_java_lang_Long(ctx);
	sp[1].o = (jobject)SF_java_lang_Long_TYPE;
	if (sp[0].o == sp[1].o) goto label_212;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Long))) { popExceptionFrames(frameRef, 1); goto label_43; }
	}
label_212:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Long_valueOf_java_lang_String_R_java_lang_Long(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_43:;
label_45: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(1168);
	sp[0].o = frame[1].o;
	clinit_java_lang_Double(ctx);
	sp[1].o = (jobject)SF_java_lang_Double_TYPE;
	if (sp[0].o == sp[1].o) goto label_213;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Double))) { popExceptionFrames(frameRef, 1); goto label_46; }
	}
label_213:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Double_valueOf_java_lang_String_R_java_lang_Double(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_46:;
label_48: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(1169);
	sp[0].o = frame[1].o;
	clinit_java_lang_Short(ctx);
	sp[1].o = (jobject)SF_java_lang_Short_TYPE;
	if (sp[0].o == sp[1].o) goto label_214;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Short))) { popExceptionFrames(frameRef, 1); goto label_49; }
	}
label_214:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Short_valueOf_java_lang_String_R_java_lang_Short(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_49:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(1170);
	sp[0].o = frame[1].o;
	clinit_java_lang_Byte(ctx);
	sp[1].o = (jobject)SF_java_lang_Byte_TYPE;
	if (sp[0].o == sp[1].o) goto label_215;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Byte))) { popExceptionFrames(frameRef, 1); goto label_216; }
	}
label_215:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Byte_valueOf_java_lang_String_R_java_lang_Byte(ctx, sp[0].o);
	sp++;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_216:;
	LINE_NUMBER(1172);
	goto label_217;
label_35:;
	LINE_NUMBER(1171);
	INST_ASTORE(5);
label_217:;
	{
	LINE_NUMBER(1173);
	sp[0].o = frame[1].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TYPE;
	if (sp[0].o == sp[1].o) goto label_218;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Boolean))) goto label_219;
	}
label_218:;
	{
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_java_lang_String_R_java_lang_Boolean(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_219:;
	{
	LINE_NUMBER(1174);
	sp[0].o = frame[1].o;
	clinit_java_lang_Character(ctx);
	sp[1].o = (jobject)SF_java_lang_Character_TYPE;
	if (sp[0].o == sp[1].o) goto label_220;
	}
	{
	if ((frame[1].o) != (((jobject) &class_java_lang_Character))) goto label_221;
	}
label_220:;
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (jint(0)));
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_221:;
	{
	LINE_NUMBER(1175);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_lang_Enum)), (frame[1].o));
	if (temp0 == 0) goto label_222;
	}
	{
	LINE_NUMBER(1176);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_java_lang_Enum, 1), sp[0].o));
	LINE_NUMBER(1177);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	}
label_226:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_222;
	}
	{
	LINE_NUMBER(1178);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(1179);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (frame[8].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_229;
	}
	INST_ALOAD(8);
	popStackFrame(ctx);
	INST_ARETURN();
label_229:;
	{
	LINE_NUMBER(1177);
	INST_IINC(6, 1);
	goto label_226;
	}
label_222:;
	{
	LINE_NUMBER(1182);
	if ((frame[1].o) != (((jobject) &class_java_lang_CharSequence))) goto label_230;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_230:;
	{
	LINE_NUMBER(1183);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to convert value to required type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_206:;
	{
	LINE_NUMBER(1186);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Json_copyFields_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:copyFields", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1194);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(1195);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Json$FieldMetadata, sp[0].o))))->F_field;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1197);
	if ((frame[6].o) != nullptr) goto label_0;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"To object is missing field: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1199);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[6].o)))->F_field;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), (frame[1].o));
	((func_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1202);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1200);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1201);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error copying field: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getName_R_java_lang_String])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	LINE_NUMBER(1203);
	goto label_6;
label_7:;
	LINE_NUMBER(1204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:convertToString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1207);
	if (((jint)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_enumNames) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Enum_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Enum_name_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Enum_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Enum_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:convertToString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1211);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Enum)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1212);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Class)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Class, (frame[1].o))))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_Class, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1213);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:newInstance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1218);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_newInstance_java_lang_Class_R_java_lang_Object(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(1219);
	INST_ASTORE(2);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_8; }
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_10; }
	}
	{
	LINE_NUMBER(1222);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getDeclaredConstructor_java_lang_Class_Array1_java_lang_Class_R_com_badlogic_gdx_utils_reflect_Constructor(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1223);
	((func_com_badlogic_gdx_utils_reflect_Constructor_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Constructor_setAccessible_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(1224);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1225);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1239);
	goto label_15;
	}
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(1226);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1227);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, (((jobject) &class_java_lang_Enum)), (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1228);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1229);
	sp[0].o = (jobject)((func_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getEnumConstants_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_17:;
	{
	LINE_NUMBER(1231);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(1232);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Encountered JSON object when expected array of type: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(1233);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isMemberClass_java_lang_Class_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_22;
	}
	{
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isStaticClass_java_lang_Class_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(1234);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class cannot be created (non-static member class): "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(1236);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class cannot be created (missing no-arg constructor): "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(1237);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1238);
	frame[2].o = (frame[3].o);
	}
label_15:;
	{
	LINE_NUMBER(1240);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error constructing instance of class: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:prettyPrint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:prettyPrint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1249);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1257);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_outputType;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonWriter$OutputType_int_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:prettyPrint", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1261);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json:prettyPrint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1265);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Json *) NULL_CHECK((frame[0].o)))->F_reader;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonReader_parse_java_lang_String_R_com_badlogic_gdx_utils_JsonValue])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_prettyPrint_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Json[] {
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
	(void *) M_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_utils_Json_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object,
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

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_Json$Serializer,
	&class_com_badlogic_gdx_utils_Json$FieldMetadata,
	&class_com_badlogic_gdx_utils_Json$Serializable,
	&class_com_badlogic_gdx_utils_Json$ReadOnlySerializer,
};

static FieldMetadata fields[] {
	{ "debug", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_utils_Json_debug, "Z", 26 },
	{ "writer", &class_com_badlogic_gdx_utils_JsonWriter, offsetof(com_badlogic_gdx_utils_Json, F_writer), "Lcom/badlogic/gdx/utils/JsonWriter;", 2 },
	{ "reader", &class_com_badlogic_gdx_utils_JsonReader, offsetof(com_badlogic_gdx_utils_Json, F_reader), "Lcom/badlogic/gdx/utils/JsonReader;", 2 },
	{ "typeName", &class_java_lang_String, offsetof(com_badlogic_gdx_utils_Json, F_typeName), "Ljava/lang/String;", 2 },
	{ "usePrototypes", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_usePrototypes), "Z", 2 },
	{ "outputType", &class_com_badlogic_gdx_utils_JsonWriter$OutputType, offsetof(com_badlogic_gdx_utils_Json, F_outputType), "Lcom/badlogic/gdx/utils/JsonWriter$OutputType;", 2 },
	{ "quoteLongValues", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_quoteLongValues), "Z", 2 },
	{ "ignoreUnknownFields", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_ignoreUnknownFields), "Z", 2 },
	{ "ignoreDeprecated", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_ignoreDeprecated), "Z", 2 },
	{ "readDeprecated", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_readDeprecated), "Z", 2 },
	{ "enumNames", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_enumNames), "Z", 2 },
	{ "sortFields", &class_boolean, offsetof(com_badlogic_gdx_utils_Json, F_sortFields), "Z", 2 },
	{ "defaultSerializer", &class_com_badlogic_gdx_utils_Json$Serializer, offsetof(com_badlogic_gdx_utils_Json, F_defaultSerializer), "Lcom/badlogic/gdx/utils/Json$Serializer;", 2 },
	{ "typeToFields", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_Json, F_typeToFields), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "tagToClass", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_Json, F_tagToClass), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "classToTag", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_Json, F_classToTag), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "classToSerializer", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_Json, F_classToSerializer), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "classToDefaultValues", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_utils_Json, F_classToDefaultValues), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "equals1", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_Json, F_equals1), "[Ljava/lang/Object;", 18 },
	{ "equals2", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_utils_Json, F_equals2), "[Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Json, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonWriter$OutputType, 0, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)V", 1 },
	{ "setIgnoreUnknownFields", (intptr_t) M_com_badlogic_gdx_utils_Json_setIgnoreUnknownFields_boolean, VTABLE_com_badlogic_gdx_utils_Json_setIgnoreUnknownFields_boolean, "(Z)V", 1 },
	{ "getIgnoreUnknownFields", (intptr_t) M_com_badlogic_gdx_utils_Json_getIgnoreUnknownFields_R_boolean, VTABLE_com_badlogic_gdx_utils_Json_getIgnoreUnknownFields_R_boolean, "()Z", 1 },
	{ "setIgnoreDeprecated", (intptr_t) M_com_badlogic_gdx_utils_Json_setIgnoreDeprecated_boolean, VTABLE_com_badlogic_gdx_utils_Json_setIgnoreDeprecated_boolean, "(Z)V", 1 },
	{ "setReadDeprecated", (intptr_t) M_com_badlogic_gdx_utils_Json_setReadDeprecated_boolean, VTABLE_com_badlogic_gdx_utils_Json_setReadDeprecated_boolean, "(Z)V", 1 },
	{ "setOutputType", (intptr_t) M_com_badlogic_gdx_utils_Json_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType, VTABLE_com_badlogic_gdx_utils_Json_setOutputType_com_badlogic_gdx_utils_JsonWriter$OutputType, "(Lcom/badlogic/gdx/utils/JsonWriter$OutputType;)V", 1 },
	{ "setQuoteLongValues", (intptr_t) M_com_badlogic_gdx_utils_Json_setQuoteLongValues_boolean, VTABLE_com_badlogic_gdx_utils_Json_setQuoteLongValues_boolean, "(Z)V", 1 },
	{ "setEnumNames", (intptr_t) M_com_badlogic_gdx_utils_Json_setEnumNames_boolean, VTABLE_com_badlogic_gdx_utils_Json_setEnumNames_boolean, "(Z)V", 1 },
	{ "addClassTag", (intptr_t) M_com_badlogic_gdx_utils_Json_addClassTag_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_addClassTag_java_lang_String_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "getClass", (intptr_t) M_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_getClass_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 1 },
	{ "getTag", (intptr_t) M_com_badlogic_gdx_utils_Json_getTag_java_lang_Class_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_getTag_java_lang_Class_R_java_lang_String, "(Ljava/lang/Class;)Ljava/lang/String;", 1 },
	{ "setTypeName", (intptr_t) M_com_badlogic_gdx_utils_Json_setTypeName_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_setTypeName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setDefaultSerializer", (intptr_t) M_com_badlogic_gdx_utils_Json_setDefaultSerializer_com_badlogic_gdx_utils_Json$Serializer, VTABLE_com_badlogic_gdx_utils_Json_setDefaultSerializer_com_badlogic_gdx_utils_Json$Serializer, "(Lcom/badlogic/gdx/utils/Json$Serializer;)V", 1 },
	{ "setSerializer", (intptr_t) M_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer, VTABLE_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer, "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/Json$Serializer;)V", 1 },
	{ "getSerializer", (intptr_t) M_com_badlogic_gdx_utils_Json_getSerializer_java_lang_Class_R_com_badlogic_gdx_utils_Json$Serializer, VTABLE_com_badlogic_gdx_utils_Json_getSerializer_java_lang_Class_R_com_badlogic_gdx_utils_Json$Serializer, "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/Json$Serializer;", 1 },
	{ "setUsePrototypes", (intptr_t) M_com_badlogic_gdx_utils_Json_setUsePrototypes_boolean, VTABLE_com_badlogic_gdx_utils_Json_setUsePrototypes_boolean, "(Z)V", 1 },
	{ "setElementType", (intptr_t) M_com_badlogic_gdx_utils_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_setElementType_java_lang_Class_java_lang_String_java_lang_Class, "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "setDeprecated", (intptr_t) M_com_badlogic_gdx_utils_Json_setDeprecated_java_lang_Class_java_lang_String_boolean, VTABLE_com_badlogic_gdx_utils_Json_setDeprecated_java_lang_Class_java_lang_String_boolean, "(Ljava/lang/Class;Ljava/lang/String;Z)V", 1 },
	{ "setSortFields", (intptr_t) M_com_badlogic_gdx_utils_Json_setSortFields_boolean, VTABLE_com_badlogic_gdx_utils_Json_setSortFields_boolean, "(Z)V", 1 },
	{ "sortFields", (intptr_t) M_com_badlogic_gdx_utils_Json_sortFields_java_lang_Class_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_Json_sortFields_java_lang_Class_com_badlogic_gdx_utils_Array, "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/Array;)V", 4 },
	{ "getFields", (intptr_t) M_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap, VTABLE_com_badlogic_gdx_utils_Json_getFields_java_lang_Class_R_com_badlogic_gdx_utils_OrderedMap, "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/OrderedMap;", 2 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_R_java_lang_String, "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/String;", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_R_java_lang_String, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/String;", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/Object;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/Object;Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_io_Writer, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_io_Writer, "(Ljava/lang/Object;Ljava/io/Writer;)V", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_io_Writer, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/io/Writer;)V", 1 },
	{ "toJson", (intptr_t) M_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer, VTABLE_com_badlogic_gdx_utils_Json_toJson_java_lang_Object_java_lang_Class_java_lang_Class_java_io_Writer, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Writer;)V", 1 },
	{ "setWriter", (intptr_t) M_com_badlogic_gdx_utils_Json_setWriter_java_io_Writer, VTABLE_com_badlogic_gdx_utils_Json_setWriter_java_io_Writer, "(Ljava/io/Writer;)V", 1 },
	{ "getWriter", (intptr_t) M_com_badlogic_gdx_utils_Json_getWriter_R_com_badlogic_gdx_utils_JsonWriter, VTABLE_com_badlogic_gdx_utils_Json_getWriter_R_com_badlogic_gdx_utils_JsonWriter, "()Lcom/badlogic/gdx/utils/JsonWriter;", 1 },
	{ "setReader", (intptr_t) M_com_badlogic_gdx_utils_Json_setReader_com_badlogic_gdx_utils_JsonReader, VTABLE_com_badlogic_gdx_utils_Json_setReader_com_badlogic_gdx_utils_JsonReader, "(Lcom/badlogic/gdx/utils/JsonReader;)V", 1 },
	{ "getReader", (intptr_t) M_com_badlogic_gdx_utils_Json_getReader_R_com_badlogic_gdx_utils_JsonReader, VTABLE_com_badlogic_gdx_utils_Json_getReader_R_com_badlogic_gdx_utils_JsonReader, "()Lcom/badlogic/gdx/utils/JsonReader;", 1 },
	{ "writeFields", (intptr_t) M_com_badlogic_gdx_utils_Json_writeFields_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_writeFields_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getDefaultValues", (intptr_t) M_com_badlogic_gdx_utils_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_getDefaultValues_java_lang_Class_R_Array1_java_lang_Object, "(Ljava/lang/Class;)[Ljava/lang/Object;", 2 },
	{ "writeField", (intptr_t) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String, "(Ljava/lang/Object;Ljava/lang/String;)V", 1 },
	{ "writeField", (intptr_t) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "writeField", (intptr_t) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "writeField", (intptr_t) M_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 1 },
	{ "writeValue", (intptr_t) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "writeValue", (intptr_t) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/Class;)V", 1 },
	{ "writeValue", (intptr_t) M_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_Object_java_lang_Class_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeObjectStart", (intptr_t) M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "writeObjectStart", (intptr_t) M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_String_java_lang_Class_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeObjectStart", (intptr_t) M_com_badlogic_gdx_utils_Json_writeObjectStart, VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart, "()V", 1 },
	{ "writeObjectStart", (intptr_t) M_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeObjectStart_java_lang_Class_java_lang_Class, "(Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "writeObjectEnd", (intptr_t) M_com_badlogic_gdx_utils_Json_writeObjectEnd, VTABLE_com_badlogic_gdx_utils_Json_writeObjectEnd, "()V", 1 },
	{ "writeArrayStart", (intptr_t) M_com_badlogic_gdx_utils_Json_writeArrayStart_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "writeArrayStart", (intptr_t) M_com_badlogic_gdx_utils_Json_writeArrayStart, VTABLE_com_badlogic_gdx_utils_Json_writeArrayStart, "()V", 1 },
	{ "writeArrayEnd", (intptr_t) M_com_badlogic_gdx_utils_Json_writeArrayEnd, VTABLE_com_badlogic_gdx_utils_Json_writeArrayEnd, "()V", 1 },
	{ "writeType", (intptr_t) M_com_badlogic_gdx_utils_Json_writeType_java_lang_Class, VTABLE_com_badlogic_gdx_utils_Json_writeType_java_lang_Class, "(Ljava/lang/Class;)V", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_Reader_R_java_lang_Object, "(Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_Reader_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/Reader;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_io_InputStream_R_java_lang_Object, "(Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_io_InputStream_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/io/InputStream;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object, "(Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/files/FileHandle;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_Array1_char_int_int_R_java_lang_Object, "(Ljava/lang/Class;[CII)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_Array1_char_int_int_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;[CII)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "fromJson", (intptr_t) M_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "readField", (intptr_t) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_java_lang_String_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "readField", (intptr_t) M_com_badlogic_gdx_utils_Json_readField_java_lang_Object_com_badlogic_gdx_utils_reflect_Field_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_Json_readField_java_lang_Object_com_badlogic_gdx_utils_reflect_Field_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/reflect/Field;Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "readFields", (intptr_t) M_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_Json_readFields_java_lang_Object_com_badlogic_gdx_utils_JsonValue, "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "ignoreUnknownField", (intptr_t) M_com_badlogic_gdx_utils_Json_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean, VTABLE_com_badlogic_gdx_utils_Json_ignoreUnknownField_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_boolean, "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Z", 4 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "readValue", (intptr_t) M_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Class;Lcom/badlogic/gdx/utils/JsonValue;)Ljava/lang/Object;", 1 },
	{ "copyFields", (intptr_t) M_com_badlogic_gdx_utils_Json_copyFields_java_lang_Object_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_copyFields_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "convertToString", (intptr_t) M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_convertToString_java_lang_Enum_R_java_lang_String, "(Ljava/lang/Enum;)Ljava/lang/String;", 2 },
	{ "convertToString", (intptr_t) M_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_convertToString_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 2 },
	{ "newInstance", (intptr_t) M_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_Json_newInstance_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 4 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_int_R_java_lang_String, "(Ljava/lang/Object;I)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_Object_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String, "(Ljava/lang/Object;Lcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)Ljava/lang/String;", 1 },
	{ "prettyPrint", (intptr_t) M_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Json_prettyPrint_java_lang_String_com_badlogic_gdx_utils_JsonValue$PrettyPrintSettings_R_java_lang_String, "(Ljava/lang/String;Lcom/badlogic/gdx/utils/JsonValue$PrettyPrintSettings;)Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_utils_Json{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Json",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Json),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Json,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Json,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Json,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 90,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 99,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Json = registerClass(&class_com_badlogic_gdx_utils_Json);

}

