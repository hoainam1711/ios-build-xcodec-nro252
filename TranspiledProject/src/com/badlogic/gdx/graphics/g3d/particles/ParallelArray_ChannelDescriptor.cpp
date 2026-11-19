#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelDescriptor.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelDescriptor_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray_ChannelDescriptor.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ParallelArray.h"
#include "com/badlogic/gdx/utils/reflect/ArrayReflection.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_arraySupplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arraySupplier)->clazz)->markFunction)((jobject) self->F_arraySupplier, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_java_lang_Class_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(44);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[0].o)))->F_count = (frame[3].i);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK(sp[0].o))->F_arraySupplier = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(48);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(50);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[0].o)))->F_arraySupplier = (jref) (frame[2].o);
	LINE_NUMBER(51);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK((frame[0].o)))->F_count = (frame[3].i);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_ArraySupplier, INDEX_com_badlogic_gdx_utils_ArraySupplier_get_int_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (jint(0)));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_lambda$new$0_java_lang_Class_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ArrayReflection_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method <init>
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor[] {
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
};

static FieldMetadata fields[] {
	{ "id", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, F_id), "I", 1 },
	{ "type", &class_java_lang_Class, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, F_type), "Ljava/lang/Class;", 1 },
	{ "arraySupplier", &class_com_badlogic_gdx_utils_ArraySupplier, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, F_arraySupplier), "Lcom/badlogic/gdx/utils/ArraySupplier;", 1 },
	{ "count", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor, F_count), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_java_lang_Class_int, 0, "(ILjava/lang/Class;I)V", 131073 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_int_com_badlogic_gdx_utils_ArraySupplier_int, 0, "(ILcom/badlogic/gdx/utils/ArraySupplier;I)V", 1 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor_lambda$new$0_java_lang_Class_int_R_java_lang_Object, 0, "(Ljava/lang/Class;I)Ljava/lang/Object;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ParallelArray$ChannelDescriptor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ParallelArray$ChannelDescriptor);

}

