#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Page.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) object;
	if (self->F_page)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_page)->clazz)->markFunction)((jobject) self->F_page, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_names)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_names)->clazz)->markFunction)((jobject) self->F_names, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Region:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(497);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(505);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Region:findValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[0].o)))->F_names;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(512);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[0].o)))->F_names;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[0].o)))->F_names;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	}
label_6:;
	{
	LINE_NUMBER(512);
	INST_IINC(2, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int,
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
	{ "findValue", "(Ljava/lang/String;)[I" },
};

static FieldMetadata fields[] {
	{ "page", &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_page), "Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Page;", 1 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_name), "Ljava/lang/String;", 1 },
	{ "left", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_left), "I", 1 },
	{ "top", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_top), "I", 1 },
	{ "width", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_width), "I", 1 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_height), "I", 1 },
	{ "offsetX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_offsetY), "F", 1 },
	{ "originalWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_originalWidth), "I", 1 },
	{ "originalHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_originalHeight), "I", 1 },
	{ "degrees", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_degrees), "I", 1 },
	{ "rotate", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_rotate), "Z", 1 },
	{ "index", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_index), "I", 1 },
	{ "names", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_names), "[Ljava/lang/String;", 1 },
	{ "values", getArrayClass(&class_int, 2), offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_values), "[[I", 1 },
	{ "flip", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, F_flip), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, 0, "()V", 1 },
	{ "findValue", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region_findValue_java_lang_String_R_Array1_int, "(Ljava/lang/String;)[I", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Region",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region);

}

