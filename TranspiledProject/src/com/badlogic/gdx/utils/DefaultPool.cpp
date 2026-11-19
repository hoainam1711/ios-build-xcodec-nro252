#include "com/badlogic/gdx/utils/DefaultPool.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/utils/DefaultPool.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"

extern "C" {


void mark_com_badlogic_gdx_utils_DefaultPool(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Pool(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_DefaultPool *) object;
	if (self->F_poolTypeSupplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_poolTypeSupplier)->clazz)->markFunction)((jobject) self->F_poolTypeSupplier, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_DefaultPool(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Pool(ctx);
}

void init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DefaultPool:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DefaultPool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_int_int(ctx, (frame[0].o), (frame[1].o), (16), (jint(2147483647)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DefaultPool:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DefaultPool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(2147483647)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DefaultPool:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_DefaultPool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_utils_Pool_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(34);
	((com_badlogic_gdx_utils_DefaultPool *) NULL_CHECK((frame[0].o)))->F_poolTypeSupplier = (jref) (frame[1].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_DefaultPool_newObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/DefaultPool:newObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_DefaultPool *) NULL_CHECK((frame[0].o)))->F_poolTypeSupplier;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier, INDEX_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_DefaultPool[] {
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
	(void *) M_com_badlogic_gdx_utils_DefaultPool_newObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_free_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_fill_int,
	(void *) M_com_badlogic_gdx_utils_Pool_reset_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_discard_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Pool_clear,
	(void *) M_com_badlogic_gdx_utils_Pool_getFree_R_int,
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
	{ "newObject", "()Ljava/lang/Object;" },
	{ "obtain", "()Ljava/lang/Object;" },
	{ "free", "(Ljava/lang/Object;)V" },
	{ "fill", "(I)V" },
	{ "reset", "(Ljava/lang/Object;)V" },
	{ "discard", "(Ljava/lang/Object;)V" },
	{ "freeAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clear", "()V" },
	{ "getFree", "()I" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier,
};

static FieldMetadata fields[] {
	{ "poolTypeSupplier", &class_com_badlogic_gdx_utils_DefaultPool$PoolSupplier, offsetof(com_badlogic_gdx_utils_DefaultPool, F_poolTypeSupplier), "Lcom/badlogic/gdx/utils/DefaultPool$PoolSupplier;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier, 0, "(Lcom/badlogic/gdx/utils/DefaultPool$PoolSupplier;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_int, 0, "(Lcom/badlogic/gdx/utils/DefaultPool$PoolSupplier;I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_int_int, 0, "(Lcom/badlogic/gdx/utils/DefaultPool$PoolSupplier;II)V", 1 },
	{ "newObject", (intptr_t) M_com_badlogic_gdx_utils_DefaultPool_newObject_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_DefaultPool_newObject_R_java_lang_Object, "()Ljava/lang/Object;", 4 },
};

Class class_com_badlogic_gdx_utils_DefaultPool{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/DefaultPool",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Pool,
		.size = sizeof(com_badlogic_gdx_utils_DefaultPool),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_DefaultPool,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_DefaultPool,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_DefaultPool,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_DefaultPool = registerClass(&class_com_badlogic_gdx_utils_DefaultPool);

}

