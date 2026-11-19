#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_AssetData.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_AssetData.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/reflect/ReflectionException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) object;
	if (self->F_filename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filename)->clazz)->markFunction)((jobject) self->F_filename, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$AssetData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(113);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$AssetData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(116);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(117);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[0].o)))->F_filename = (jref) (frame[1].o);
	LINE_NUMBER(118);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_write_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$AssetData:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"filename"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[0].o)))->F_filename;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"type"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$AssetData:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"filename"_j))), (((jobject) &class_java_lang_String)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK(sp[0].o))->F_filename = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) &class_java_lang_String)), (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_reflect_ReflectionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_forName_java_lang_String_R_java_lang_Class(ctx, (frame[3].o));
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(135);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(133);
	frame[4].o = sp[0].o;
	LINE_NUMBER(134);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Class not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_write_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue,
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
	{ "write", "(Lcom/badlogic/gdx/utils/Json;)V" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Json$Serializable, };

static FieldMetadata fields[] {
	{ "filename", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, F_filename), "Ljava/lang/String;", 1 },
	{ "type", &class_java_lang_Class, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, F_type), "Ljava/lang/Class;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_java_lang_String_java_lang_Class, 0, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_write_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_write_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/utils/Json;)V", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ResourceData$AssetData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData);

}

