#include "com/badlogic/gdx/graphics/glutils/InstanceBufferObject.h"
#include "java/lang/reflect/Field.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "com/badlogic/gdx/graphics/glutils/InstanceData.h"
#include "com/badlogic/gdx/graphics/glutils/InstanceBufferObject.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/Gdx.h"
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
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_InstanceBufferObject(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_InstanceBufferObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_InstanceBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (frame[3].o));
	init_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_InstanceBufferObject(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(49);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"InstanceBufferObject requires a device running with GLES 3.0 compatibilty"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK((frame[3].o)))->F_vertexSize) * (frame[2].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[4].o), (jint(0)));
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes])(ctx, (frame[0].o), (frame[4].o), (jint(1)), (frame[3].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_10;
	}
	(sp++)->i = jint(35044);
	goto label_11;
label_10:;
	(sp++)->i = jint(35048);
label_11:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setUsage_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setUsage_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumInstances_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:getNumInstances", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp1 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumMaxInstances_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:getNumMaxInstances", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:getBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK(sp[0].o))->F_isDirty = (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK(sp[0].o))->F_isDirty) | (frame[1].i));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:setBuffer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(96);
	if (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot change attributes while VBO is bound"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(97);
	if (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[3].o);
	LINE_NUMBER(99);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_ByteBuffer)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(100);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer = (jref) (checkCast(ctx, &class_java_nio_ByteBuffer, (frame[1].o)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Only ByteBuffer is currently supported"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(103);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer = (frame[2].i);
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[4].i) / (jint(4))));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:bufferChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	if (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, (jobject(nullptr)), ((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(115);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp2 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp2, temp3, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(116);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:setInstanceData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(122);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(126);
	M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_java_nio_FloatBuffer_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:setInstanceData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(131);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int(ctx, sp[0].o, sp[1].o, (frame[2].i));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(135);
	M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:updateInstanceData", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(140);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(143);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(146);
	M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_java_nio_FloatBuffer_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:updateInstanceData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(151);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[2].o), ((frame[3].i) * (jint(4))));
	LINE_NUMBER(155);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int(ctx, sp[0].o, sp[1].o, (frame[4].i));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(158);
	M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getUsage_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:getUsage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_usage);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setUsage_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:setUsage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(170);
	if (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot change usage while VBO is bound"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(171);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_usage = (frame[1].i);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	((func_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:bind", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(184);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[3].o)))(ctx, (frame[3].o), (jint(34962)), ((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(187);
	if (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty) == 0) goto label_3;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(189);
	sp[0].o = frame[3].o;
	jint temp1 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp1, temp2, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(190);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(194);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(195);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(197);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(198);
	if ((frame[7].i) >= 0) goto label_15;
	}
	goto label_16;
label_15:;
	{
	LINE_NUMBER(199);
	frame[8].i = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_unit);
	LINE_NUMBER(200);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), ((frame[7].i) + (frame[8].i)));
	LINE_NUMBER(202);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[7].i) + (frame[8].i);
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	LINE_NUMBER(204);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	((func_com_badlogic_gdx_graphics_GL30_glVertexAttribDivisor_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glVertexAttribDivisor_int_int, sp[0].o))(ctx, sp[0].o, ((frame[7].i) + (frame[8].i)), (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(195);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	goto label_20;
label_8:;
	{
	LINE_NUMBER(208);
	frame[5].i = (jint(0));
	}
label_21:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_20;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(210);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(211);
	if ((frame[7].i) >= 0) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(212);
	frame[8].i = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_unit);
	LINE_NUMBER(213);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), ((frame[7].i) + (frame[8].i)));
	LINE_NUMBER(215);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[7].i) + (frame[8].i);
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	LINE_NUMBER(217);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	((func_com_badlogic_gdx_graphics_GL30_glVertexAttribDivisor_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glVertexAttribDivisor_int_int, sp[0].o))(ctx, sp[0].o, ((frame[7].i) + (frame[8].i)), (jint(1)));
	}
label_26:;
	{
	LINE_NUMBER(208);
	INST_IINC(5, 1);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(220);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:unbind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	((func_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:unbind", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(233);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(235);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(236);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(238);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(239);
	if ((frame[7].i) >= 0) goto label_10;
	}
	goto label_11;
label_10:;
	{
	LINE_NUMBER(240);
	frame[8].i = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_unit);
	LINE_NUMBER(241);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int])(ctx, (frame[1].o), ((frame[7].i) + (frame[8].i)));
	}
label_11:;
	{
	LINE_NUMBER(236);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	goto label_13;
label_3:;
	{
	LINE_NUMBER(244);
	frame[5].i = (jint(0));
	}
label_14:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(246);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(247);
	if ((frame[7].i) >= 0) goto label_18;
	}
	goto label_19;
label_18:;
	{
	LINE_NUMBER(248);
	frame[8].i = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_unit);
	LINE_NUMBER(249);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int])(ctx, (frame[1].o), ((frame[7].i) + (frame[8].i)));
	}
label_19:;
	{
	LINE_NUMBER(244);
	INST_IINC(5, 1);
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(252);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[3].o)))(ctx, (frame[3].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(253);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(260);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/InstanceBufferObject:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[1].o = sp[0].o;
	LINE_NUMBER(267);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(268);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(269);
	((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(270);
	if (((jint)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_InstanceBufferObject *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_InstanceBufferObject;
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

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_InstanceBufferObject[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumInstances_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumMaxInstances_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_java_nio_FloatBuffer_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_java_nio_FloatBuffer_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_invalidate,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getUsage_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setUsage_int,
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
	{ "getNumInstances", "()I" },
	{ "getNumMaxInstances", "()I" },
	{ "getAttributes", "()Lcom/badlogic/gdx/graphics/VertexAttributes;" },
	{ "setInstanceData", "([FII)V" },
	{ "updateInstanceData", "(I[FII)V" },
	{ "setInstanceData", "(Ljava/nio/FloatBuffer;I)V" },
	{ "updateInstanceData", "(ILjava/nio/FloatBuffer;II)V" },
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

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_InstanceData, };

static FieldMetadata fields[] {
	{ "attributes", &class_com_badlogic_gdx_graphics_VertexAttributes, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_attributes), "Lcom/badlogic/gdx/graphics/VertexAttributes;", 2 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_buffer), "Ljava/nio/FloatBuffer;", 2 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_byteBuffer), "Ljava/nio/ByteBuffer;", 2 },
	{ "ownsBuffer", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_ownsBuffer), "Z", 2 },
	{ "bufferHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_bufferHandle), "I", 2 },
	{ "usage", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_usage), "I", 2 },
	{ "isDirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_isDirty), "Z", 0 },
	{ "isBound", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject, F_isBound), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(ZI[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_boolean_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "getAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "getNumInstances", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumInstances_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumInstances_R_int, "()I", 1 },
	{ "getNumMaxInstances", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumMaxInstances_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getNumMaxInstances_R_int, "()I", 1 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 131073 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1 },
	{ "setBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setBuffer_java_nio_Buffer_boolean_com_badlogic_gdx_graphics_VertexAttributes, "(Ljava/nio/Buffer;ZLcom/badlogic/gdx/graphics/VertexAttributes;)V", 4 },
	{ "bufferChanged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bufferChanged, "()V", 2 },
	{ "setInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_Array1_float_int_int, "([FII)V", 1 },
	{ "setInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_java_nio_FloatBuffer_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setInstanceData_java_nio_FloatBuffer_int, "(Ljava/nio/FloatBuffer;I)V", 1 },
	{ "updateInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "updateInstanceData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_java_nio_FloatBuffer_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_updateInstanceData_int_java_nio_FloatBuffer_int_int, "(ILjava/nio/FloatBuffer;II)V", 1 },
	{ "getUsage", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getUsage_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_getUsage_R_int, "()I", 4 },
	{ "setUsage", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setUsage_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_setUsage_int, "(I)V", 4 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_invalidate, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_invalidate, "()V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_InstanceBufferObject_dispose, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_InstanceBufferObject{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/InstanceBufferObject",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_InstanceBufferObject),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_InstanceBufferObject,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_InstanceBufferObject,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_InstanceBufferObject,
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
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_InstanceBufferObject = registerClass(&class_com_badlogic_gdx_graphics_glutils_InstanceBufferObject);

}

