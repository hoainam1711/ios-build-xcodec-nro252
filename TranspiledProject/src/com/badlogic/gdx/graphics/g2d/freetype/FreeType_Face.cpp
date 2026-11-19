#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Face.h"
#include "java/nio/ByteBuffer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Face.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Library.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphSlot.h"
#include "com/badlogic/gdx/utils/LongMap.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Size.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face *) object;
	if (self->F_library)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_library)->clazz)->markFunction)((jobject) self->F_library, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_long_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(162);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(163);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face *) NULL_CHECK((frame[0].o)))->F_library = (jref) (frame[3].o);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_doneFace_long(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face *) NULL_CHECK((frame[0].o)))->F_library;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library *) NULL_CHECK(sp[0].o))->F_fontData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_get_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_get_long_R_java_lang_Object])(ctx, sp[0].o, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	frame[1].o = (checkCast(ctx, &class_java_nio_ByteBuffer, sp[0].o));
	LINE_NUMBER(170);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face *) NULL_CHECK((frame[0].o)))->F_library;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library *) NULL_CHECK(sp[0].o))->F_fontData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_remove_long_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_remove_long_R_java_lang_Object])(ctx, sp[0].o, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(172);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(173);
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getFaceFlags", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getStyleFlags_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getStyleFlags", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getStyleFlags_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getNumGlyphs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getAscender_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getAscender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getAscender_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getDescender_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getDescender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getDescender_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getHeight_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getMaxAdvanceWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getMaxAdvanceHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceHeight_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlinePosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getUnderlinePosition", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlinePosition_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlineThickness_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getUnderlineThickness", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlineThickness_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_selectSize_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:selectSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(262);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_selectSize_long_int_R_boolean(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:setCharSize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(270);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setCharSize_long_int_int_int_int_R_boolean(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:setPixelSizes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_long_int_int_R_boolean(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadGlyph_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:loadGlyph", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadGlyph_long_int_int_R_boolean(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:loadChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_long_int_int_R_boolean(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getGlyph", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_long_R_long(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_long_R_long(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:hasKerning", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_long_R_boolean(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getKerning", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_long_int_int_int_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face:getCharIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_long_int_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getStyleFlags_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getAscender_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getDescender_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlinePosition_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlineThickness_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_selectSize_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadGlyph_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int,
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
	{ "dispose", "()V" },
	{ "getFaceFlags", "()I" },
	{ "getStyleFlags", "()I" },
	{ "getNumGlyphs", "()I" },
	{ "getAscender", "()I" },
	{ "getDescender", "()I" },
	{ "getHeight", "()I" },
	{ "getMaxAdvanceWidth", "()I" },
	{ "getMaxAdvanceHeight", "()I" },
	{ "getUnderlinePosition", "()I" },
	{ "getUnderlineThickness", "()I" },
	{ "selectSize", "(I)Z" },
	{ "setCharSize", "(IIII)Z" },
	{ "setPixelSizes", "(II)Z" },
	{ "loadGlyph", "(II)Z" },
	{ "loadChar", "(II)Z" },
	{ "getGlyph", "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphSlot;" },
	{ "getSize", "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Size;" },
	{ "hasKerning", "()Z" },
	{ "getKerning", "(III)I" },
	{ "getCharIndex", "(I)I" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "library", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, F_library), "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Library;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_long_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library, 0, "(JLcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Library;)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_dispose, "()V", 1 },
	{ "doneFace", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_doneFace_long, 0, "(J)V", 266 },
	{ "getFaceFlags", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_R_int, "()I", 1 },
	{ "getFaceFlags", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_long_R_int, 0, "(J)I", 266 },
	{ "getStyleFlags", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getStyleFlags_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getStyleFlags_R_int, "()I", 1 },
	{ "getStyleFlags", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getStyleFlags_long_R_int, 0, "(J)I", 266 },
	{ "getNumGlyphs", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_R_int, "()I", 1 },
	{ "getNumGlyphs", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_long_R_int, 0, "(J)I", 266 },
	{ "getAscender", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getAscender_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getAscender_R_int, "()I", 1 },
	{ "getAscender", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getAscender_long_R_int, 0, "(J)I", 266 },
	{ "getDescender", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getDescender_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getDescender_R_int, "()I", 1 },
	{ "getDescender", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getDescender_long_R_int, 0, "(J)I", 266 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getHeight_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getHeight_long_R_int, 0, "(J)I", 266 },
	{ "getMaxAdvanceWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_R_int, "()I", 1 },
	{ "getMaxAdvanceWidth", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_long_R_int, 0, "(J)I", 266 },
	{ "getMaxAdvanceHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceHeight_R_int, "()I", 1 },
	{ "getMaxAdvanceHeight", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceHeight_long_R_int, 0, "(J)I", 266 },
	{ "getUnderlinePosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlinePosition_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlinePosition_R_int, "()I", 1 },
	{ "getUnderlinePosition", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlinePosition_long_R_int, 0, "(J)I", 266 },
	{ "getUnderlineThickness", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlineThickness_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlineThickness_R_int, "()I", 1 },
	{ "getUnderlineThickness", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getUnderlineThickness_long_R_int, 0, "(J)I", 266 },
	{ "selectSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_selectSize_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_selectSize_int_R_boolean, "(I)Z", 1 },
	{ "selectSize", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_selectSize_long_int_R_boolean, 0, "(JI)Z", 266 },
	{ "setCharSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "setCharSize", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setCharSize_long_int_int_int_int_R_boolean, 0, "(JIIII)Z", 266 },
	{ "setPixelSizes", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean, "(II)Z", 1 },
	{ "setPixelSizes", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_long_int_int_R_boolean, 0, "(JII)Z", 266 },
	{ "loadGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadGlyph_int_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadGlyph_int_int_R_boolean, "(II)Z", 1 },
	{ "loadGlyph", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadGlyph_long_int_int_R_boolean, 0, "(JII)Z", 266 },
	{ "loadChar", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_int_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_int_int_R_boolean, "(II)Z", 1 },
	{ "loadChar", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_long_int_int_R_boolean, 0, "(JII)Z", 266 },
	{ "getGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot, "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphSlot;", 1 },
	{ "getGlyph", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_long_R_long, 0, "(J)J", 266 },
	{ "getSize", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size, "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Size;", 1 },
	{ "getSize", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_long_R_long, 0, "(J)J", 266 },
	{ "hasKerning", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_R_boolean, "()Z", 1 },
	{ "hasKerning", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_long_R_boolean, 0, "(J)Z", 266 },
	{ "getKerning", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int, "(III)I", 1 },
	{ "getKerning", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_long_int_int_int_R_int, 0, "(JIII)I", 266 },
	{ "getCharIndex", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int, "(I)I", 1 },
	{ "getCharIndex", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_long_int_R_int, 0, "(JI)I", 266 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Face",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face);

}

