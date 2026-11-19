#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_Rotation3dInitializer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels_Rotation3dInitializer.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_FloatChannel.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance;

void mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer *) object;
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(103);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_get_R_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer:get", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx);
	{
	LINE_NUMBER(107);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer);
	init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx);
	SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(108);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer:init", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	jint temp0 = (frame[2].i) + (jint(0));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	jint temp1 = (frame[2].i) + (jint(1));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	jint temp2 = (frame[2].i) + (jint(2));
	jfloat temp3 = jfloat(0);
	ARRAY_ACCESS(jfloat, sp[2].o, temp2) = temp3;
	ARRAY_ACCESS(jfloat, sp[1].o, temp1) = temp3;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp3;
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel *) NULL_CHECK((frame[1].o)))->F_data;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[2].i) + (jint(3)))) = (jfloat(1));
	LINE_NUMBER(113);
	frame[2].i = ((frame[2].i) + ((jint)((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[1].o)))->F_strideSize));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	((func_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel,
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
	{ "instance", &class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer, (intptr_t) &SF_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_instance, "Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer, 0, "()V", 1 },
	{ "get", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_get_R_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer, 0, "()Lcom/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer;", 9 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$FloatChannel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$FloatChannel;)V", 1 },
	{ "init", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer_init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel;)V", 4161 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParticleChannels$Rotation3dInitializer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer,
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
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParticleChannels$Rotation3dInitializer);

}

