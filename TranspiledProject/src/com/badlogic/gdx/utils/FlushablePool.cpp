#include "com/badlogic/gdx/utils/FlushablePool.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/utils/FlushablePool.h"

extern "C" {


void mark_com_badlogic_gdx_utils_FlushablePool(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_FlushablePool *) object;
	if (self->F_obtained)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_obtained)->clazz)->markFunction)((jobject) self->F_obtained, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_FlushablePool(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Pool(ctx);
}

void init_com_badlogic_gdx_utils_FlushablePool(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_FlushablePool(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_com_badlogic_gdx_utils_Pool(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK(sp[0].o))->F_obtained = (jref) sp[1].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_FlushablePool_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_FlushablePool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	init_com_badlogic_gdx_utils_Pool_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK(sp[0].o))->F_obtained = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_FlushablePool_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_FlushablePool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	init_com_badlogic_gdx_utils_Pool_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK(sp[0].o))->F_obtained = (jref) sp[1].o;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:obtain", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)M_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK((frame[0].o)))->F_obtained;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_FlushablePool_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:flush", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK((frame[0].o)))->F_obtained;
	M_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK((frame[0].o)))->F_obtained;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:free", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK((frame[0].o)))->F_obtained;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(53);
	M_com_badlogic_gdx_utils_Pool_free_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/FlushablePool:freeAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FlushablePool *) NULL_CHECK((frame[0].o)))->F_obtained;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(59);
	M_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_FlushablePool[] {
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
	(void *) M_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_fill_int,
	(void *) M_com_badlogic_gdx_utils_Pool_reset_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_discard_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Pool_clear,
	(void *) M_com_badlogic_gdx_utils_Pool_getFree_R_int,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_flush,
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
	{ "flush", "()V" },
};

static FieldMetadata fields[] {
	{ "obtained", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_utils_FlushablePool, F_obtained), "Lcom/badlogic/gdx/utils/Array;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_FlushablePool, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_FlushablePool_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_FlushablePool_int_int, 0, "(II)V", 1 },
	{ "obtain", (intptr_t) M_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "flush", (intptr_t) M_com_badlogic_gdx_utils_FlushablePool_flush, VTABLE_com_badlogic_gdx_utils_FlushablePool_flush, "()V", 1 },
	{ "free", (intptr_t) M_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object, VTABLE_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "freeAll", (intptr_t) M_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
};

Class class_com_badlogic_gdx_utils_FlushablePool{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/FlushablePool",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Pool,
		.size = sizeof(com_badlogic_gdx_utils_FlushablePool),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_FlushablePool,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_FlushablePool,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_FlushablePool,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_FlushablePool = registerClass(&class_com_badlogic_gdx_utils_FlushablePool);

}

