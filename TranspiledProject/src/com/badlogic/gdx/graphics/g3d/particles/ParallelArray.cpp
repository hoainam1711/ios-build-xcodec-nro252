#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ObjectChannel.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/Integer.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_FloatChannel.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelDescriptor.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelInitializer.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_IntChannel.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) object;
	if (self->F_arrays)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrays)->clazz)->markFunction)((jobject) self->F_arrays, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(191);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(0);
	jint temp1 = jint(2);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_arrays = (jref) sp[1].o;
	LINE_NUMBER(193);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity = (frame[1].i);
	LINE_NUMBER(194);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:addChannel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:addChannel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_allocateChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(210);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer, INDEX_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_allocateChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:allocateChannel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	clinit_java_lang_Float(ctx);
	sp[1].o = (jobject)SF_java_lang_Float_TYPE;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(219);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel);
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int(ctx, sp[0].o, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_id), ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_count), ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_type;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_TYPE;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(221);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel);
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int(ctx, sp[0].o, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_id), ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_count), ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(223);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel);
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_id;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_count;
	jint temp2 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_arraySupplier;
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeArray_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:removeArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_findIndex_int_R_int(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_findIndex_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:findIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(233);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(235);
	if (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[3].o)))->F_id) != (frame[1].i)) goto label_5;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(233);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addElement_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:addElement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	if (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_size) != ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Capacity reached, cannot add other elements"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(246);
	frame[2].i = (jint(0));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, sp[0].o));
	LINE_NUMBER(248);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_add_int_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_add_int_Array1_java_lang_Object])(ctx, (frame[4].o), (frame[2].i), (frame[1].o));
	LINE_NUMBER(249);
	frame[2].i = ((frame[2].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[4].o)))->F_strideSize));
	LINE_NUMBER(250);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size) + (jint(1)));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeElement_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:removeElement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(256);
	frame[2].i = (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, sp[0].o));
	LINE_NUMBER(259);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_swap_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_swap_int_int])(ctx, (frame[4].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(260);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(261);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_size = (frame[2].i);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:getChannel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, sp[0].o));
	LINE_NUMBER(268);
	if (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[3].o)))->F_id) != ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[1].o)))->F_id)) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	LINE_NUMBER(269);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(276);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_size = (jint(0));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_setCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:setCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(282);
	if (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity) == (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_arrays;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, sp[0].o));
	LINE_NUMBER(284);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_setCapacity_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_setCapacity_int])(ctx, (frame[3].o), (frame[1].i));
	LINE_NUMBER(285);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(286);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK((frame[0].o)))->F_capacity = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_allocateChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeArray_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_findIndex_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addElement_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeElement_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_clear,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_setCapacity_int,
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
	{ "addChannel", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;" },
	{ "addChannel", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelInitializer;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;" },
	{ "allocateChannel", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;" },
	{ "removeArray", "(I)V" },
	{ "findIndex", "(I)I" },
	{ "addElement", "([Ljava/lang/Object;)V" },
	{ "removeElement", "(I)V" },
	{ "getChannel", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;" },
	{ "clear", "()V" },
	{ "setCapacity", "(I)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel,
	&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel,
};

static FieldMetadata fields[] {
	{ "arrays", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray, F_arrays), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "capacity", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray, F_capacity), "I", 1 },
	{ "size", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray, F_size), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int, 0, "(I)V", 1 },
	{ "addChannel", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;", 1 },
	{ "addChannel", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelInitializer;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;", 1 },
	{ "allocateChannel", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_allocateChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_allocateChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;", 2 },
	{ "removeArray", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeArray_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeArray_int, "(I)V", 1 },
	{ "findIndex", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_findIndex_int_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_findIndex_int_R_int, "(I)I", 2 },
	{ "addElement", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addElement_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_addElement_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "removeElement", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeElement_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_removeElement_int, "(I)V", 1 },
	{ "getChannel", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_getChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_R_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor;)Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_clear, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_clear, "()V", 1 },
	{ "setCapacity", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_setCapacity_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_setCapacity_int, "(I)V", 1 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParallelArray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParallelArray = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray);

}

