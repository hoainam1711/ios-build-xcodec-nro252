#include "com/badlogic/gdx/graphics/glutils/VertexArray.h"
#include "java/lang/reflect/Field.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/glutils/VertexArray.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "java/lang/reflect/Constructor.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/graphics/glutils/VertexData.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_VertexArray(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_VertexArray *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_VertexArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_VertexArray_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (frame[2].o));
	init_com_badlogic_gdx_graphics_glutils_VertexArray_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_VertexArray_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(58);
	((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[2].o);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize) * (frame[1].i)));
	((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:getBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_boolean_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexArray_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:getNumVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp1 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexArray_getNumMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:getNumMaxVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_setVertices_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:setVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_updateVertices_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:updateVertices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(102);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((func_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:bind", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp1 * (jint(4))));
	LINE_NUMBER(115);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(116);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[6].i = temp0;
	LINE_NUMBER(119);
	if ((frame[6].i) >= 0) goto label_10;
	}
	goto label_11;
label_10:;
	{
	LINE_NUMBER(120);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[6].i));
	LINE_NUMBER(122);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type) != (5126)) goto label_13;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_offset) / (jint(4))));
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp4 = (jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_offset));
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp4 = (jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(116);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_17;
label_3:;
	{
	LINE_NUMBER(133);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(135);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(136);
	if ((frame[6].i) >= 0) goto label_22;
	}
	goto label_23;
label_22:;
	{
	LINE_NUMBER(137);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[6].i));
	LINE_NUMBER(139);
	if (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type) != (5126)) goto label_25;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_offset) / (jint(4))));
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp4 = (jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o);
	goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_offset));
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[5].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp4 = (jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o);
	}
label_23:;
	{
	LINE_NUMBER(133);
	INST_IINC(4, 1);
	goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(150);
	((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:unbind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	((func_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:unbind", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(164);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(165);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[1].o))->F_alias;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	goto label_8;
label_2:;
	{
	LINE_NUMBER(169);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(170);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(171);
	if ((frame[5].i) < 0) goto label_12;
	}
	{
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int])(ctx, (frame[1].o), (frame[5].i));
	}
label_12:;
	{
	LINE_NUMBER(169);
	INST_IINC(4, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(174);
	((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexArray_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexArray *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexArray_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexArray:invalidate", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_VertexArray;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_VertexArray[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_getNumVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_getNumMaxVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_setVertices_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_updateVertices_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_boolean_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexArray_invalidate,
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
	{ "getNumVertices", "()I" },
	{ "getNumMaxVertices", "()I" },
	{ "getAttributes", "()Lcom/badlogic/gdx/graphics/VertexAttributes;" },
	{ "setVertices", "([FII)V" },
	{ "updateVertices", "(I[FII)V" },
	{ "getBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getBuffer", "(Z)Ljava/nio/FloatBuffer;" },
	{ "bind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "bind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V" },
	{ "unbind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "unbind", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V" },
	{ "invalidate", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_VertexData, };

static FieldMetadata fields[] {
	{ "attributes", &class_com_badlogic_gdx_graphics_VertexAttributes, offsetof(com_badlogic_gdx_graphics_glutils_VertexArray, F_attributes), "Lcom/badlogic/gdx/graphics/VertexAttributes;", 16 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexArray, F_buffer), "Ljava/nio/FloatBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexArray, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "isBound", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexArray, F_isBound), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexArray_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(I[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexArray_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_dispose, "()V", 1 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 131073 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_boolean_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_getBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1 },
	{ "getNumVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_getNumVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_getNumVertices_R_int, "()I", 1 },
	{ "getNumMaxVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_getNumMaxVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_getNumMaxVertices_R_int, "()I", 1 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_setVertices_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_setVertices_Array1_float_int_int, "([FII)V", 1 },
	{ "updateVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_updateVertices_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_updateVertices_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "getAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexArray_invalidate, VTABLE_com_badlogic_gdx_graphics_glutils_VertexArray_invalidate, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_VertexArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/VertexArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_VertexArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_VertexArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_VertexArray,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_VertexArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_VertexArray = registerClass(&class_com_badlogic_gdx_graphics_glutils_VertexArray);

}

