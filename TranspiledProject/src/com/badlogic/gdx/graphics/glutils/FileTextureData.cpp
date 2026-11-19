#include "com/badlogic/gdx/graphics/glutils/FileTextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/glutils/FileTextureData.h"
#include "com/badlogic/gdx/graphics/PixmapIO.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_FileTextureData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_FileTextureData *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_format)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_format)->clazz)->markFunction)((jobject) self->F_format, mark, depth + 1);
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_FileTextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_FileTextureData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FileTextureData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_width = (jint(0));
	LINE_NUMBER(30);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_height = (jint(0));
	LINE_NUMBER(34);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(37);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(38);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (frame[2].o);
	LINE_NUMBER(39);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_format = (jref) (frame[3].o);
	LINE_NUMBER(40);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps = (frame[4].i);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(44);
	if ((frame[3].o) != nullptr) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_format = (jref) sp[1].o;
	}
label_9:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FileTextureData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_FileTextureData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:prepare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	if (((jint)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already prepared"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_extension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_extension_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cim"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_PixmapIO_readCIM_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_files_FileHandle(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_format;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK(sp[0].o))->F_format = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(65);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(1));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_FileTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:consumePixmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	if (((jint)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Call prepare() before calling getPixmap()"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(71);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_isPrepared = (jint(0));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap;
	frame[1].o = sp[0].o;
	LINE_NUMBER(73);
	((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (jobject(nullptr));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FileTextureData_disposePixmap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:disposePixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_FileTextureData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_FileTextureData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_FileTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_format;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FileTextureData_useMipMaps_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:useMipMaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_useMipMaps);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FileTextureData_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:isManaged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_FileTextureData_getFileHandle_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:getFileHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_FileTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_FileTextureData_consumeCustomData_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:consumeCustomData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(118);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This TextureData implementation does not upload data itself"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_FileTextureData_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FileTextureData:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FileTextureData *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_FileTextureData[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_isPrepared_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_prepare,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_disposePixmap_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_consumeCustomData_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_useMipMaps_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_isManaged_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getFileHandle_R_com_badlogic_gdx_files_FileHandle,
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
	{ "getFileHandle", "()Lcom/badlogic/gdx/files/FileHandle;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_TextureData, };

static FieldMetadata fields[] {
	{ "file", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_file), "Lcom/badlogic/gdx/files/FileHandle;", 16 },
	{ "width", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_width), "I", 0 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_height), "I", 0 },
	{ "format", &class_com_badlogic_gdx_graphics_Pixmap$Format, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_format), "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 0 },
	{ "pixmap", &class_com_badlogic_gdx_graphics_Pixmap, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_pixmap), "Lcom/badlogic/gdx/graphics/Pixmap;", 0 },
	{ "useMipMaps", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_useMipMaps), "Z", 0 },
	{ "isPrepared", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_FileTextureData, F_isPrepared), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FileTextureData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap$Format;Z)V", 1 },
	{ "isPrepared", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_isPrepared_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_prepare, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_prepare, "()V", 1 },
	{ "consumePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, "()Lcom/badlogic/gdx/graphics/Pixmap;", 1 },
	{ "disposePixmap", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_disposePixmap_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_disposePixmap_R_boolean, "()Z", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_getHeight_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "useMipMaps", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_useMipMaps_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_useMipMaps_R_boolean, "()Z", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_isManaged_R_boolean, "()Z", 1 },
	{ "getFileHandle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getFileHandle_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_getFileHandle_R_com_badlogic_gdx_files_FileHandle, "()Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 1 },
	{ "consumeCustomData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_consumeCustomData_int, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_consumeCustomData_int, "(I)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FileTextureData_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_FileTextureData_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_FileTextureData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/FileTextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_FileTextureData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_FileTextureData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_FileTextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_FileTextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_FileTextureData = registerClass(&class_com_badlogic_gdx_graphics_glutils_FileTextureData);

}

