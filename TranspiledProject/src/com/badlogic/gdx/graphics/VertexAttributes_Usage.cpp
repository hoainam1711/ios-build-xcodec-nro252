#include "com/badlogic/gdx/graphics/VertexAttributes_Usage.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Position;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_ColorUnpacked;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_ColorPacked;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Normal;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_TextureCoordinates;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Generic;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_BoneWeight;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Tangent;
jint SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_BiNormal;

void mark_com_badlogic_gdx_graphics_VertexAttributes$Usage(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_VertexAttributes$Usage *) object;
}

void clinit_com_badlogic_gdx_graphics_VertexAttributes$Usage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Position = jint(1);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_ColorUnpacked = jint(2);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_ColorPacked = jint(4);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Normal = jint(8);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_TextureCoordinates = jint(16);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Generic = jint(32);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_BoneWeight = jint(64);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Tangent = jint(128);
	SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_BiNormal = jint(256);
}

void init_com_badlogic_gdx_graphics_VertexAttributes$Usage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$Usage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttributes$Usage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_VertexAttributes$Usage[] {
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
};

static FieldMetadata fields[] {
	{ "Position", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Position, "I", 25 },
	{ "ColorUnpacked", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_ColorUnpacked, "I", 25 },
	{ "ColorPacked", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_ColorPacked, "I", 25 },
	{ "Normal", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Normal, "I", 25 },
	{ "TextureCoordinates", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_TextureCoordinates, "I", 25 },
	{ "Generic", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Generic, "I", 25 },
	{ "BoneWeight", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_BoneWeight, "I", 25 },
	{ "Tangent", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_Tangent, "I", 25 },
	{ "BiNormal", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_VertexAttributes$Usage_BiNormal, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttributes$Usage, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_VertexAttributes$Usage{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/VertexAttributes$Usage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_VertexAttributes$Usage),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_VertexAttributes$Usage,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_VertexAttributes$Usage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_VertexAttributes$Usage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_VertexAttributes,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_VertexAttributes$Usage = registerClass(&class_com_badlogic_gdx_graphics_VertexAttributes$Usage);

}

