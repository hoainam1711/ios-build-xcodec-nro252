#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_11.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Field.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_11.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) object;
	if (self->F_val$entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$entry)->clazz)->markFunction)((jobject) self->F_val$entry, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$11:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(335);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) NULL_CHECK((frame[0].o)))->F_val$entry = (jref) (frame[2].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$11:parse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) NULL_CHECK((frame[0].o)))->F_val$entry;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_offsetX = (jfloat(temp0));
	LINE_NUMBER(338);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) NULL_CHECK((frame[0].o)))->F_val$entry;
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_offsetY = (jfloat(temp1));
	LINE_NUMBER(339);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) NULL_CHECK((frame[0].o)))->F_val$entry;
	jint temp2 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_originalWidth = temp2;
	LINE_NUMBER(340);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 *) NULL_CHECK((frame[0].o)))->F_val$entry;
	jint temp3 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(4)))));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_originalHeight = temp3;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$11:parse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
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
	{ "parse", "(Ljava/lang/Object;)V" },
	{ "parse", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Region;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field, };

static FieldMetadata fields[] {
	{ "val$entry", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11, F_val$entry), "[Ljava/lang/String;", 4112 },
	{ "this$0", &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11, F_this$0), "Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData;[Ljava/lang/String;)V", 0 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Region;)V", 1 },
	{ "parse", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_parse_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$11",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11 = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11);

}

