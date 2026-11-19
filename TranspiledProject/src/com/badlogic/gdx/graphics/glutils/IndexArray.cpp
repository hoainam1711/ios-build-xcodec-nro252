#include "com/badlogic/gdx/graphics/glutils/IndexArray.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Constructor.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/IndexArray.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/glutils/IndexData.h"
#include "java/nio/ShortBuffer.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_IndexArray(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_IndexArray *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_byteBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_byteBuffer)->clazz)->markFunction)((jobject) self->F_byteBuffer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_IndexArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_IndexArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_IndexArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK(sp[0].o))->F_empty = sp[1].i;
	LINE_NUMBER(38);
	if (((jint)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_5;
	}
	{
	LINE_NUMBER(39);
	frame[1].i = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, ((frame[1].i) * (jint(2))));
	((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK(sp[0].o))->F_byteBuffer = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_IndexArray_getNumIndices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:getNumIndices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	if (((jint)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_IndexArray_getNumMaxIndices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:getNumMaxIndices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	if (((jint)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_empty) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ShortBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_capacity_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:setIndices", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[3].i) << (jint(1))));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:setIndices", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_java_nio_ShortBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ShortBuffer_remaining_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp2 = (jint)((func_java_nio_ShortBuffer_limit_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp2 << (jint(1))));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_updateIndices_int_Array1_short_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:updateIndices", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, ((frame[1].i) * (jint(2))));
	LINE_NUMBER(94);
	sp[0].o = frame[2].o;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_short_int_java_nio_Buffer_int(ctx, sp[0].o, temp1, sp[1].o, (frame[4].i));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:getBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_boolean_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_buffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:bind", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_unbind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:unbind", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:invalidate", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_IndexArray_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/IndexArray:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_IndexArray *) NULL_CHECK((frame[0].o)))->F_byteBuffer;
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, sp[0].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_IndexArray;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getBuffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_IndexArray[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_getNumIndices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_getNumMaxIndices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_Array1_short_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_java_nio_ShortBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_updateIndices_int_Array1_short_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_R_java_nio_ShortBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_boolean_R_java_nio_ShortBuffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_bind,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_unbind,
	(void *) M_com_badlogic_gdx_graphics_glutils_IndexArray_invalidate,
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
	{ "getNumIndices", "()I" },
	{ "getNumMaxIndices", "()I" },
	{ "setIndices", "([SII)V" },
	{ "setIndices", "(Ljava/nio/ShortBuffer;)V" },
	{ "updateIndices", "(I[SII)V" },
	{ "getBuffer", "()Ljava/nio/ShortBuffer;" },
	{ "getBuffer", "(Z)Ljava/nio/ShortBuffer;" },
	{ "bind", "()V" },
	{ "unbind", "()V" },
	{ "invalidate", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_IndexData, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_nio_ShortBuffer, offsetof(com_badlogic_gdx_graphics_glutils_IndexArray, F_buffer), "Ljava/nio/ShortBuffer;", 16 },
	{ "byteBuffer", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_glutils_IndexArray, F_byteBuffer), "Ljava/nio/ByteBuffer;", 16 },
	{ "empty", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_IndexArray, F_empty), "Z", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_IndexArray_int, 0, "(I)V", 1 },
	{ "getNumIndices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_getNumIndices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_getNumIndices_R_int, "()I", 1 },
	{ "getNumMaxIndices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_getNumMaxIndices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_getNumMaxIndices_R_int, "()I", 1 },
	{ "setIndices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_Array1_short_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_Array1_short_int_int, "([SII)V", 1 },
	{ "setIndices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_java_nio_ShortBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_setIndices_java_nio_ShortBuffer, "(Ljava/nio/ShortBuffer;)V", 1 },
	{ "updateIndices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_updateIndices_int_Array1_short_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_updateIndices_int_Array1_short_int_int, "(I[SII)V", 1 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_R_java_nio_ShortBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 131073 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_boolean_R_java_nio_ShortBuffer, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_getBuffer_boolean_R_java_nio_ShortBuffer, "(Z)Ljava/nio/ShortBuffer;", 1 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_bind, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_bind, "()V", 1 },
	{ "unbind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_unbind, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_unbind, "()V", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_invalidate, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_invalidate, "()V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_IndexArray_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_IndexArray_dispose, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_IndexArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/IndexArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_IndexArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_IndexArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_IndexArray,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_IndexArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_IndexArray = registerClass(&class_com_badlogic_gdx_graphics_glutils_IndexArray);

}

