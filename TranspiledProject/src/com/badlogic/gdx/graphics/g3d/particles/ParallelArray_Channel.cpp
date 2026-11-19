#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_Channel.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(62);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_id = (frame[2].i);
	LINE_NUMBER(64);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_strideSize = (frame[4].i);
	LINE_NUMBER(65);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[3].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "id", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, F_id), "I", 1 },
	{ "data", &class_java_lang_Object, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, F_data), "Ljava/lang/Object;", 1 },
	{ "strideSize", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, F_strideSize), "I", 1 },
	{ "this$0", &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel, F_this$0), "Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_com_badlogic_gdx_graphics_g3d_particles_ParallelArray_int_java_lang_Object_int, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/ParallelArray;ILjava/lang/Object;I)V", 1 },
	{ "add", 0, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_add_int_Array1_java_lang_Object, "(I[Ljava/lang/Object;)V", 1153 },
	{ "swap", 0, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_swap_int_int, "(II)V", 1025 },
	{ "setCapacity", 0, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel_setCapacity_int, "(I)V", 1028 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$Channel",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$Channel);

}

