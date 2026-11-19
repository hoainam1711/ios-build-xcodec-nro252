#include "com/badlogic/gdx/graphics/glutils/VertexBufferObject.h"
#include "java/lang/reflect/Field.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/graphics/glutils/VertexBufferObject.h"
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


void mark_com_badlogic_gdx_graphics_glutils_VertexBufferObject(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_VertexBufferObject *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (frame[3].o));
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(66);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(50);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[3].o)))->F_vertexSize) * (frame[2].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(71);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes])(ctx, (frame[0].o), (frame[4].o), (jint(1)), (frame[3].o));
	LINE_NUMBER(72);
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
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_int_java_nio_ByteBuffer_boolean_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(75);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(50);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(78);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes])(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (frame[4].o));
	LINE_NUMBER(79);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:getNumVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp1 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:getNumMaxVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:getBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_isDirty = (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_isDirty) | (frame[1].i));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:setBuffer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(116);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot change attributes while VBO is bound"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(117);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(118);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[3].o);
	LINE_NUMBER(119);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_ByteBuffer)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(120);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer = (jref) (checkCast(ctx, &class_java_nio_ByteBuffer, (frame[1].o)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only ByteBuffer is currently supported"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(123);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer = (frame[2].i);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[4].i) / (jint(4))));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bufferChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:bufferChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	LINE_NUMBER(134);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(135);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setVertices_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:setVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(141);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(142);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(145);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_updateVertices_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:updateVertices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(150);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(156);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getUsage_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:getUsage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:setUsage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(168);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot change usage while VBO is bound"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(169);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage = (frame[1].i);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:bind", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(181);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(183);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[3].o)))(ctx, (frame[3].o), (jint(34962)), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(184);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty) == 0) goto label_3;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(186);
	sp[0].o = frame[3].o;
	jint temp1 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp1, temp2, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(187);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(191);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(192);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(194);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(195);
	if ((frame[7].i) >= 0) goto label_15;
	}
	goto label_16;
label_15:;
	{
	LINE_NUMBER(196);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(198);
	sp[0].o = frame[1].o;
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	}
label_16:;
	{
	LINE_NUMBER(192);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	goto label_18;
label_8:;
	{
	LINE_NUMBER(203);
	frame[5].i = (jint(0));
	}
label_19:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_18;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(205);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(206);
	if ((frame[7].i) >= 0) goto label_23;
	}
	goto label_24;
label_23:;
	{
	LINE_NUMBER(207);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(209);
	sp[0].o = frame[1].o;
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	}
label_24:;
	{
	LINE_NUMBER(203);
	INST_IINC(5, 1);
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(213);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:unbind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:unbind", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(226);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(228);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(229);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[1].o))->F_alias;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(233);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(234);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(235);
	if ((frame[6].i) < 0) goto label_13;
	}
	{
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int])(ctx, (frame[1].o), (frame[6].i));
	}
label_13:;
	{
	LINE_NUMBER(233);
	INST_IINC(5, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[3].o)))(ctx, (frame[3].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(239);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(246);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObject:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[1].o = sp[0].o;
	LINE_NUMBER(253);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(254);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(255);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(256);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_VertexBufferObject;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_VertexBufferObject[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumMaxVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setVertices_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_updateVertices_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_invalidate,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bufferChanged,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getUsage_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int,
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
	{ "setBuffer", "(Ljava/nio/Buffer;ZLcom/badlogic/gdx/graphics/VertexAttributes;)V" },
	{ "bufferChanged", "()V" },
	{ "getUsage", "()I" },
	{ "setUsage", "(I)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_VertexData, };

static FieldMetadata fields[] {
	{ "attributes", &class_com_badlogic_gdx_graphics_VertexAttributes, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_attributes), "Lcom/badlogic/gdx/graphics/VertexAttributes;", 2 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_buffer), "Ljava/nio/FloatBuffer;", 2 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_byteBuffer), "Ljava/nio/ByteBuffer;", 2 },
	{ "ownsBuffer", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_ownsBuffer), "Z", 2 },
	{ "bufferHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_bufferHandle), "I", 2 },
	{ "usage", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_usage), "I", 2 },
	{ "isDirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_isDirty), "Z", 0 },
	{ "isBound", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObject, F_isBound), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(ZI[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObject_int_java_nio_ByteBuffer_boolean_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ILjava/nio/ByteBuffer;ZLcom/badlogic/gdx/graphics/VertexAttributes;)V", 4 },
	{ "getAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "getNumVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumVertices_R_int, "()I", 1 },
	{ "getNumMaxVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumMaxVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getNumMaxVertices_R_int, "()I", 1 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 131073 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1 },
	{ "setBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes, "(Ljava/nio/Buffer;ZLcom/badlogic/gdx/graphics/VertexAttributes;)V", 4 },
	{ "bufferChanged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bufferChanged, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bufferChanged, "()V", 2 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setVertices_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setVertices_Array1_float_int_int, "([FII)V", 1 },
	{ "updateVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_updateVertices_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_updateVertices_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "getUsage", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getUsage_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_getUsage_R_int, "()I", 4 },
	{ "setUsage", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_setUsage_int, "(I)V", 4 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_invalidate, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_invalidate, "()V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObject_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObject_dispose, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_VertexBufferObject{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/VertexBufferObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_VertexBufferObject),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_VertexBufferObject,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObject,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_VertexBufferObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_VertexBufferObject = registerClass(&class_com_badlogic_gdx_graphics_glutils_VertexBufferObject);

}

