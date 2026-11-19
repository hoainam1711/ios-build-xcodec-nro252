#include "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData.h"
#include "java/lang/reflect/Field.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData.h"
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


void mark_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (frame[3].o));
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(51);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(68);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isStatic = (frame[1].i);
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[3].o);
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize) * (frame[2].i)));
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(71);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirect = (jint(1));
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_8;
	}
	(sp++)->i = jint(35044);
	goto label_9;
label_8:;
	(sp++)->i = jint(35048);
label_9:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_usage = sp[1].i;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_createBufferObject_R_int(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_createBufferObject_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:createBufferObject", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[0].o))(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, sp[0].o))(ctx, sp[0].o, (jint(34962)), (frame[1].i));
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp1 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp1, temp2, (jobject(nullptr)), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, sp[0].o))(ctx, sp[0].o, (jint(34962)), (jint(0)));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:getNumVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp1 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:getNumMaxVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_boolean_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:getBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_isDirty = (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_isDirty) | (frame[1].i));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bufferChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:bufferChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	LINE_NUMBER(119);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = jint(34962);
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferSubData_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(120);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_setVertices_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:setVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(126);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(127);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirect) == 0) goto label_2;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 << (jint(2))));
	}
label_6:;
	{
	LINE_NUMBER(139);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_updateVertices_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:updateVertices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(144);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(145);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirect) == 0) goto label_2;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(148);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(150);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(151);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Buffer must be allocated direct."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(153);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:bind", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(168);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[3].o)))(ctx, (frame[3].o), (jint(34962)), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(169);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty) == 0) goto label_3;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(171);
	sp[0].o = frame[3].o;
	jint temp1 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp1, temp2, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(172);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(176);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(177);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(180);
	if ((frame[7].i) >= 0) goto label_15;
	}
	goto label_16;
label_15:;
	{
	LINE_NUMBER(181);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(183);
	sp[0].o = frame[1].o;
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	}
label_16:;
	{
	LINE_NUMBER(177);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	goto label_18;
label_8:;
	{
	LINE_NUMBER(187);
	frame[5].i = (jint(0));
	}
label_19:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_18;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(189);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(190);
	if ((frame[7].i) >= 0) goto label_23;
	}
	goto label_24;
label_23:;
	{
	LINE_NUMBER(191);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(193);
	sp[0].o = frame[1].o;
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	}
label_24:;
	{
	LINE_NUMBER(187);
	INST_IINC(5, 1);
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(197);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:unbind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:unbind", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(210);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(211);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(212);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(213);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[1].o))->F_alias;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(213);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(217);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(218);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(219);
	if ((frame[6].i) < 0) goto label_13;
	}
	{
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int])(ctx, (frame[1].o), (frame[6].i));
	}
label_13:;
	{
	LINE_NUMBER(217);
	INST_IINC(5, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(222);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[3].o)))(ctx, (frame[3].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(223);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_createBufferObject_R_int(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(229);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[1].o = sp[0].o;
	LINE_NUMBER(236);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(237);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(238);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBufferHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData:getBufferHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData *) NULL_CHECK((frame[0].o)))->F_bufferHandle);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumMaxVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_setVertices_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_updateVertices_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_boolean_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_invalidate,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_createBufferObject_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bufferChanged,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBufferHandle_R_int,
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
	{ "createBufferObject", "()I" },
	{ "bufferChanged", "()V" },
	{ "getBufferHandle", "()I" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_VertexData, };

static FieldMetadata fields[] {
	{ "attributes", &class_com_badlogic_gdx_graphics_VertexAttributes, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_attributes), "Lcom/badlogic/gdx/graphics/VertexAttributes;", 16 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_buffer), "Ljava/nio/FloatBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "bufferHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_bufferHandle), "I", 0 },
	{ "isDirect", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_isDirect), "Z", 16 },
	{ "isStatic", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_isStatic), "Z", 16 },
	{ "usage", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_usage), "I", 16 },
	{ "isDirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_isDirty), "Z", 0 },
	{ "isBound", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData, F_isBound), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(ZI[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_boolean_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "createBufferObject", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_createBufferObject_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_createBufferObject_R_int, "()I", 2 },
	{ "getAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "getNumVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumVertices_R_int, "()I", 1 },
	{ "getNumMaxVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumMaxVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getNumMaxVertices_R_int, "()I", 1 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 131073 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_boolean_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1 },
	{ "bufferChanged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bufferChanged, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bufferChanged, "()V", 2 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_setVertices_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_setVertices_Array1_float_int_int, "([FII)V", 1 },
	{ "updateVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_updateVertices_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_updateVertices_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_invalidate, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_invalidate, "()V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_dispose, "()V", 1 },
	{ "getBufferHandle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBufferHandle_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData_getBufferHandle_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/VertexBufferObjectSubData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData = registerClass(&class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectSubData);

}

