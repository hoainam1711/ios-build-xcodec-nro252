#include "com/badlogic/gdx/graphics/glutils/PixmapTextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/PixmapTextureData.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_PixmapTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_PixmapTextureData *) object;
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
	if (self->F_format)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_format)->clazz)->markFunction)((jobject) self->F_format, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(32);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (frame[1].o);
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(2);
label_4:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK(sp[0].o))->F_format = (jref) sp[1].o;
	LINE_NUMBER(38);
	((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[3].i);
	LINE_NUMBER(39);
	((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_disposePixmap = (frame[4].i);
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_managed = (frame[5].i);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:disposePixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_disposePixmap);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:consumePixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_format;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:isManaged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_PixmapTextureData *) NULL_CHECK((frame[0].o)))->F_managed);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:consumeCustomData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not upload data itself"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/PixmapTextureData:prepare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prepare() must not be called on a PixmapTextureData instance as it is already prepared."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_PixmapTextureData[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isPrepared_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_prepare,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_disposePixmap_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumeCustomData_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_useMipMaps_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isManaged_R_boolean,
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
	{ "getType", "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;" },
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumePixmap", "()Lcom/badlogic/gdx/graphics/Pixmap;" },
	{ "disposePixmap", "()Z" },
	{ "consumeCustomData", "(I)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getFormat", "()Lcom/badlogic/gdx/graphics/Pixmap$Format;" },
	{ "useMipMaps", "()Z" },
	{ "isManaged", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_TextureData, };

static FieldMetadata fields[] {
	{ "pixmap", &class_com_badlogic_gdx_graphics_Pixmap, offsetof(com_badlogic_gdx_graphics_glutils_PixmapTextureData, F_pixmap), "Lcom/badlogic/gdx/graphics/Pixmap;", 16 },
	{ "format", &class_com_badlogic_gdx_graphics_Pixmap$Format, offsetof(com_badlogic_gdx_graphics_glutils_PixmapTextureData, F_format), "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 16 },
	{ "useMipMaps", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_PixmapTextureData, F_useMipMaps), "Z", 16 },
	{ "disposePixmap", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_PixmapTextureData, F_disposePixmap), "Z", 16 },
	{ "managed", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_PixmapTextureData, F_managed), "Z", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap$Format;ZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean_boolean, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap$Format;ZZZ)V", 1 },
	{ "disposePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_disposePixmap_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "consumePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, "()Lcom/badlogic/gdx/graphics/Pixmap;", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_useMipMaps_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isManaged_R_boolean, "()Z", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 1 },
	{ "consumeCustomData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumeCustomData_int, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "isPrepared", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isPrepared_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_com_badlogic_gdx_graphics_glutils_PixmapTextureData_prepare, VTABLE_com_badlogic_gdx_graphics_glutils_PixmapTextureData_prepare, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_PixmapTextureData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/PixmapTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_PixmapTextureData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_PixmapTextureData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_PixmapTextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_PixmapTextureData = registerClass(&class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);

}

