#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_IntChannel.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_IntChannel.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$IntChannel:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(118);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject) createArray(ctx, &class_int, ((frame[4].i) * (frame[3].i)));
	init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_java_lang_Object_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (frame[3].i));
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_data;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK(sp[0].o))->F_data = (jref) (checkCast(ctx, getArrayClass(&class_int, 1), sp[1].o));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_add_int_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$IntChannel:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].i = (temp0 * ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray *) NULL_CHECK(sp[0].o))->F_size));
	frame[4].i = ((frame[3].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize));
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(125);
	INST_IINC(3, 1);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$IntChannel:swap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(133);
	frame[1].i = (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize) * (frame[1].i));
	LINE_NUMBER(134);
	frame[2].i = (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize) * (frame[2].i));
	LINE_NUMBER(135);
	frame[4].i = ((frame[1].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize));
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = (frame[3].i);
	LINE_NUMBER(135);
	INST_IINC(1, 1);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_setCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$IntChannel:setCapacity", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize) * (frame[1].i)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[2].o))->length), (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel *) NULL_CHECK(sp[1].o))->F_data = (jref) sp[2].o;
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[2].o;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_add_int_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_swap_int_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_setCapacity_int,
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
	{ "data", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel, F_data), "[I", 1 },
	{ "this$0", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel, F_this$0), "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_int_int, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;III)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_add_int_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_add_int_Array1_java_lang_Object, "(I[Ljava/lang/Object;)V", 129 },
	{ "swap", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_swap_int_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_swap_int_int, "(II)V", 1 },
	{ "setCapacity", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_setCapacity_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel_setCapacity_int, "(I)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$IntChannel",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel,
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
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$IntChannel);

}

