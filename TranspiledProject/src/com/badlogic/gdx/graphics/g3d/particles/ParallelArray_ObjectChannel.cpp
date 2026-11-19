#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ObjectChannel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ObjectChannel.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "java/util/Arrays.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ObjectChannel:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(154);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), ((frame[4].i) * (frame[3].i)));
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_java_lang_Object_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[3].i));
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_data;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK(sp[0].o))->F_data = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_add_int_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ObjectChannel:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].i = (temp0 * ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size));
	frame[4].i = ((frame[3].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize));
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(161);
	INST_IINC(3, 1);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ObjectChannel:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(169);
	frame[1].i = (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize) * (frame[1].i));
	LINE_NUMBER(170);
	frame[2].i = (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize) * (frame[2].i));
	LINE_NUMBER(171);
	frame[4].i = ((frame[1].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_data;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(171);
	INST_IINC(1, 1);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_setCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ObjectChannel:setCapacity", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK((frame[0].o)))->F_data;
	sp[2].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[2].o, (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize) * (frame[1].i)));
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel *) NULL_CHECK(sp[1].o))->F_data = (jref) sp[2].o;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[2].o;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_add_int_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_swap_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_setCapacity_int,
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
	{ "add", "(I[Ljava/lang/Object;)V" },
	{ "swap", "(II)V" },
	{ "setCapacity", "(I)V" },
};

static FieldMetadata fields[] {
	{ "data", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel, F_data), "[Ljava/lang/Object;", 1 },
	{ "this$0", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel, F_this$0), "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int_com_badlogic_gdx_utils_ArraySupplier, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;IIILcom/badlogic/gdx/utils/ArraySupplier;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_add_int_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_add_int_Array1_java_lang_Object, "(I[Ljava/lang/Object;)V", 129 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_swap_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_swap_int_int, "(II)V", 1 },
	{ "setCapacity", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_setCapacity_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel_setCapacity_int, "(I)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ObjectChannel",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ObjectChannel);

}

