#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterator.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/VertexAttributes_ReadonlyIterable.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/Collections.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_iterator1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator1)->clazz)->markFunction)((jobject) self->F_iterator1, mark, depth + 1);
	if (self->F_iterator2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iterator2)->clazz)->markFunction)((jobject) self->F_iterator2, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(273);
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[1].o);
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterable:iterator", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	if ((clinit_com_badlogic_gdx_utils_Collections(ctx), (jint)SF_com_badlogic_gdx_utils_Collections_allocateIterators) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_array;
	init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_array;
	init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_Array1_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK(sp[0].o))->F_iterator1 = (jref) sp[1].o;
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_array;
	init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator_Array1_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK(sp[0].o))->F_iterator2 = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	if (((jint)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_valid) != 0) goto label_5;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(1));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator1;
	((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator *) NULL_CHECK(sp[0].o))->F_valid = (jint(0));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable *) NULL_CHECK((frame[0].o)))->F_iterator2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable[] {
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
	(void *) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "array", getArrayClass(&class_java_lang_Object, 1), offsetof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable, F_array), "[Ljava/lang/Object;", 18 },
	{ "iterator1", &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator, offsetof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable, F_iterator1), "Lcom/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator;", 2 },
	{ "iterator2", &class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterator, offsetof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable, F_iterator2), "Lcom/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterator;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/VertexAttributes$ReadonlyIterable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_VertexAttributes,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable = registerClass(&class_com_badlogic_gdx_graphics_VertexAttributes$ReadonlyIterable);

}

