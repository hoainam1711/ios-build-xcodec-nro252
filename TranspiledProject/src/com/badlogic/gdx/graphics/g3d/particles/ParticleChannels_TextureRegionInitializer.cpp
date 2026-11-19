#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_TextureRegionInitializer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_FloatChannel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_TextureRegionInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance;

void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_get_R_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer:get", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx);
	{
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(42);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(0)))) = (jfloat(0));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(1)))) = (jfloat(0));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(2)))) = (jfloat(1));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(3)))) = (jfloat(1));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(4)))) = (jfloat(0.5f));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(5)))) = (jfloat(0.5f));
	LINE_NUMBER(47);
	frame[2].i = ((frame[2].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[1].o)))->F_strideSize));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel,
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
	{ "instance", &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_instance, "Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer, 0, "()V", 1 },
	{ "get", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_get_R_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer, 0, "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer;", 9 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$FloatChannel;)V", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;)V", 4161 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$TextureRegionInitializer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer,
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
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$TextureRegionInitializer);

}

