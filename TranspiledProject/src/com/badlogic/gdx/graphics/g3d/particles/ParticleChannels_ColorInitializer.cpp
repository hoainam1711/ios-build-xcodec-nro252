#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_ColorInitializer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_ColorInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_FloatChannel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance;

void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_get_R_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer:get", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx);
	{
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	SM_java_util_Arrays_fill_Array1_float_int_int_float(ctx, sp[0].o, temp0, (((jarray) nullCheck(ctx, sp[1].o))->length), (jfloat(1)));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel,
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
	{ "init", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;)V" },
	{ "init", "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$FloatChannel;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelInitializer, };

static FieldMetadata fields[] {
	{ "instance", &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_instance, "Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer, 0, "()V", 1 },
	{ "get", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_get_R_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer, 0, "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer;", 9 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$FloatChannel;)V", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;)V", 4161 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$ColorInitializer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$ColorInitializer);

}

