#include "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO.h"
#include "java/lang/reflect/Field.h"
#include "java/nio/FloatBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "java/nio/IntBuffer.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO.h"
#include "java/lang/reflect/Constructor.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/graphics/glutils/VertexData.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;

void mark_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) object;
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
	if (self->F_cachedLocations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cachedLocations)->clazz)->markFunction)((jobject) self->F_cachedLocations, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_com_badlogic_gdx_graphics_VertexAttributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes);
	init_com_badlogic_gdx_graphics_VertexAttributes_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (frame[3].o));
	init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(64);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle = (jint(-1));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_cachedLocations = (jref) sp[1].o;
	LINE_NUMBER(65);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isStatic = (frame[1].i);
	LINE_NUMBER(66);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[3].o);
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize) * (frame[2].i)));
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_ownsBuffer = (jint(1));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_14;
	}
	(sp++)->i = jint(35044);
	goto label_15;
label_14:;
	(sp++)->i = jint(35048);
label_15:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_usage = sp[1].i;
	LINE_NUMBER(75);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO(ctx, (frame[0].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_java_nio_ByteBuffer_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	LINE_NUMBER(46);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle = (jint(-1));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_cachedLocations = (jref) sp[1].o;
	LINE_NUMBER(79);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isStatic = (frame[1].i);
	LINE_NUMBER(80);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes = (jref) (frame[3].o);
	LINE_NUMBER(82);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer = (jref) (frame[2].o);
	LINE_NUMBER(83);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_ownsBuffer = (jint(0));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_14;
	}
	(sp++)->i = jint(35044);
	goto label_15;
label_14:;
	(sp++)->i = jint(35048);
label_15:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_usage = sp[1].i;
	LINE_NUMBER(89);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO(ctx, (frame[0].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:getNumVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 * (jint(4));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp1 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:getNumMaxVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	popStackFrame(ctx);
	return (temp0 / ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[0].o))->F_vertexSize));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_boolean_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:getBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_isDirty = (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_isDirty) | (frame[1].i));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bufferChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:bufferChanged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound) == 0) goto label_1;
	}
	{
	LINE_NUMBER(123);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, sp[0].o))(ctx, sp[0].o, (jint(34962)), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(124);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(125);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_setVertices_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:setVertices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(131);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_java_nio_Buffer_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].i));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(135);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_updateVertices_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:updateVertices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(140);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(4))));
	LINE_NUMBER(143);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_float_int_int_java_nio_Buffer(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(146);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bufferChanged(ctx, (frame[0].o));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:bind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:bind", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(159);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	frame[3].o = sp[0].o;
	LINE_NUMBER(161);
	((func_com_badlogic_gdx_graphics_GL30_glBindVertexArray_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glBindVertexArray_int, (frame[3].o)))(ctx, (frame[3].o), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle));
	LINE_NUMBER(163);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(166);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindData_com_badlogic_gdx_graphics_GL20(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(168);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(1));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:bindAttributes", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(175);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(176);
	if ((frame[2].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(177);
	frame[5].i = (jint(0));
	}
label_9:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_10;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(179);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(180);
	jint temp1 = frame[7].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp2 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	if (temp1 != temp2) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(177);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	goto label_5;
label_7:;
	{
	LINE_NUMBER(183);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	if (temp0 != ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(184);
	frame[5].i = (jint(0));
	}
label_20:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_5;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp1 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	if (temp0 != temp1) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(184);
	INST_IINC(5, 1);
	goto label_20;
	}
label_5:;
	{
	LINE_NUMBER(190);
	if ((frame[3].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(191);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, sp[0].o))(ctx, sp[0].o, (jint(34962)), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(192);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	((func_com_badlogic_gdx_utils_IntArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(195);
	frame[5].i = (jint(0));
	}
label_30:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_25;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_get_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(197);
	if ((frame[2].o) != nullptr) goto label_33;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_alias;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, temp0);
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i))));
	}
label_35:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[7].i = temp0;
	LINE_NUMBER(204);
	if ((frame[7].i) >= 0) goto label_37;
	}
	LINE_NUMBER(205);
	goto label_39;
label_37:;
	{
	LINE_NUMBER(208);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int])(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(209);
	sp[0].o = frame[1].o;
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_numComponents;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp3 = (jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_normalized;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, ((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize), ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK((frame[6].o)))->F_offset));
	}
label_39:;
	{
	LINE_NUMBER(195);
	INST_IINC(5, 1);
	goto label_30;
	}
label_25:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:unbindAttributes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_VertexAttributes_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_VertexAttributes_size_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(220);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_cachedLocations;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(222);
	if ((frame[4].i) >= 0) goto label_8;
	}
	LINE_NUMBER(223);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(225);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int])(ctx, (frame[1].o), (frame[4].i));
	}
label_10:;
	{
	LINE_NUMBER(220);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindData_com_badlogic_gdx_graphics_GL20(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:bindData", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty) == 0) goto label_1;
	}
	{
	LINE_NUMBER(231);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(34962)), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_FloatBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 * (jint(4))));
	LINE_NUMBER(233);
	sp[0].o = frame[1].o;
	jint temp1 = jint(34962);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	((func_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBufferData_int_int_java_nio_Buffer_int, sp[0].o))(ctx, sp[0].o, temp1, temp2, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_usage));
	LINE_NUMBER(234);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(0));
	}
label_1:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:unbind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	((func_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:unbind", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(248);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	frame[3].o = sp[0].o;
	LINE_NUMBER(249);
	((func_com_badlogic_gdx_graphics_GL30_glBindVertexArray_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glBindVertexArray_int, (frame[3].o)))(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(250);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isBound = (jint(0));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenBuffer_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_bufferHandle = temp0;
	LINE_NUMBER(257);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO(ctx, (frame[0].o));
	LINE_NUMBER(258);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_isDirty = (jint(1));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	frame[1].o = sp[0].o;
	LINE_NUMBER(266);
	((func_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindBuffer_int_int, (frame[1].o)))(ctx, (frame[1].o), (jint(34962)), (jint(0)));
	LINE_NUMBER(267);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteBuffer_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle));
	LINE_NUMBER(268);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_bufferHandle = (jint(0));
	LINE_NUMBER(269);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_ownsBuffer) == 0) goto label_5;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	}
label_5:;
	{
	LINE_NUMBER(272);
	M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_deleteVAO(ctx, (frame[0].o));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:createVAO", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(277);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	jint temp0 = jint(1);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	((func_com_badlogic_gdx_graphics_GL30_glGenVertexArrays_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glGenVertexArrays_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	jint temp1 = (jint)((func_java_nio_IntBuffer_get_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_IntBuffer_get_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK(sp[0].o))->F_vaoHandle = temp1;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_deleteVAO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:deleteVAO", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	if (((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(283);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(284);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle));
	LINE_NUMBER(285);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(286);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl30;
	jint temp0 = jint(1);
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle;
	((func_com_badlogic_gdx_graphics_GL30_glDeleteVertexArrays_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL30, INDEX_com_badlogic_gdx_graphics_GL30_glDeleteVertexArrays_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(287);
	((com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO *) NULL_CHECK((frame[0].o)))->F_vaoHandle = (jint(-1));
	}
label_1:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO(ctx);
	SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO;
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

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumMaxVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_setVertices_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_updateVertices_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_boolean_R_java_nio_FloatBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_invalidate,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bufferChanged,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindData_com_badlogic_gdx_graphics_GL20,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO,
	(void *) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_deleteVAO,
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
	{ "bufferChanged", "()V" },
	{ "bindAttributes", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V" },
	{ "unbindAttributes", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "bindData", "(Lcom/badlogic/gdx/graphics/GL20;)V" },
	{ "createVAO", "()V" },
	{ "deleteVAO", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_VertexData, };

static FieldMetadata fields[] {
	{ "tmpHandle", &class_java_nio_IntBuffer, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_tmpHandle, "Ljava/nio/IntBuffer;", 24 },
	{ "attributes", &class_com_badlogic_gdx_graphics_VertexAttributes, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_attributes), "Lcom/badlogic/gdx/graphics/VertexAttributes;", 16 },
	{ "buffer", &class_java_nio_FloatBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_buffer), "Ljava/nio/FloatBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "ownsBuffer", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_ownsBuffer), "Z", 16 },
	{ "bufferHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_bufferHandle), "I", 0 },
	{ "isStatic", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_isStatic), "Z", 16 },
	{ "usage", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_usage), "I", 16 },
	{ "isDirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_isDirty), "Z", 0 },
	{ "isBound", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_isBound), "Z", 0 },
	{ "vaoHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_vaoHandle), "I", 0 },
	{ "cachedLocations", &class_com_badlogic_gdx_utils_IntArray, offsetof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, F_cachedLocations), "Lcom/badlogic/gdx/utils/IntArray;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_Array1_com_badlogic_gdx_graphics_VertexAttribute, 0, "(ZI[Lcom/badlogic/gdx/graphics/VertexAttribute;)V", 129 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_int_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZILcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_boolean_java_nio_ByteBuffer_com_badlogic_gdx_graphics_VertexAttributes, 0, "(ZLjava/nio/ByteBuffer;Lcom/badlogic/gdx/graphics/VertexAttributes;)V", 1 },
	{ "getAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getAttributes_R_com_badlogic_gdx_graphics_VertexAttributes, "()Lcom/badlogic/gdx/graphics/VertexAttributes;", 1 },
	{ "getNumVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumVertices_R_int, "()I", 1 },
	{ "getNumMaxVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumMaxVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getNumMaxVertices_R_int, "()I", 1 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 131073 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_boolean_R_java_nio_FloatBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_getBuffer_boolean_R_java_nio_FloatBuffer, "(Z)Ljava/nio/FloatBuffer;", 1 },
	{ "bufferChanged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bufferChanged, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bufferChanged, "()V", 2 },
	{ "setVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_setVertices_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_setVertices_Array1_float_int_int, "([FII)V", 1 },
	{ "updateVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_updateVertices_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_updateVertices_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "bindAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 2 },
	{ "unbindAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbindAttributes_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 2 },
	{ "bindData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindData_com_badlogic_gdx_graphics_GL20, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_bindData_com_badlogic_gdx_graphics_GL20, "(Lcom/badlogic/gdx/graphics/GL20;)V", 2 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_unbind_com_badlogic_gdx_graphics_glutils_ShaderProgram_Array1_int, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;[I)V", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_invalidate, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_invalidate, "()V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_dispose, "()V", 1 },
	{ "createVAO", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_createVAO, "()V", 2 },
	{ "deleteVAO", (intptr_t) M_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_deleteVAO, VTABLE_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO_deleteVAO, "()V", 2 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/VertexBufferObjectWithVAO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO = registerClass(&class_com_badlogic_gdx_graphics_glutils_VertexBufferObjectWithVAO);

}

