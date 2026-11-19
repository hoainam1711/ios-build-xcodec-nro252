#include "com/badlogic/gdx/utils/JsonValue_JsonIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/JsonValue_JsonIterator.h"
#include "java/lang/Iterable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"

extern "C" {


void mark_com_badlogic_gdx_utils_JsonValue$JsonIterator(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_JsonValue$JsonIterator *) object;
	if (self->F_entry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entry)->clazz)->markFunction)((jobject) self->F_entry, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_JsonValue$JsonIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_JsonValue$JsonIterator_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue$JsonIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_JsonValue$JsonIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1342);
	((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1343);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[1].o))->F_child;
	((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_JsonValue$JsonIterator_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue$JsonIterator:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1347);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue$JsonIterator:next", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1351);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_entry;
	((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(1352);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1353);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_JsonValue *) NULL_CHECK(sp[1].o))->F_next;
	((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK(sp[0].o))->F_entry = (jref) sp[1].o;
	LINE_NUMBER(1354);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_JsonValue$JsonIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue$JsonIterator:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1358);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_JsonValue$JsonIterator *) NULL_CHECK((frame[0].o)))->F_current;
	((func_com_badlogic_gdx_utils_JsonValue_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue_remove])(ctx, sp[0].o);
	LINE_NUMBER(1359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue$JsonIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue$JsonIterator:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1362);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/JsonValue$JsonIterator:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_com_badlogic_gdx_utils_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_com_badlogic_gdx_utils_JsonValue])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_JsonValue$JsonIterator[] {
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
	(void *) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_hasNext_R_boolean,
	(void *) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_com_badlogic_gdx_utils_JsonValue,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "next", "()Lcom/badlogic/gdx/utils/JsonValue;" },
};

static jclass interfaces[] { &class_java_util_Iterator, &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "entry", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue$JsonIterator, F_entry), "Lcom/badlogic/gdx/utils/JsonValue;", 0 },
	{ "current", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue$JsonIterator, F_current), "Lcom/badlogic/gdx/utils/JsonValue;", 0 },
	{ "this$0", &class_com_badlogic_gdx_utils_JsonValue, offsetof(com_badlogic_gdx_utils_JsonValue$JsonIterator, F_this$0), "Lcom/badlogic/gdx/utils/JsonValue;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_JsonValue$JsonIterator_com_badlogic_gdx_utils_JsonValue, 0, "(Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "hasNext", (intptr_t) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_hasNext_R_boolean, VTABLE_com_badlogic_gdx_utils_JsonValue$JsonIterator_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_com_badlogic_gdx_utils_JsonValue, "()Lcom/badlogic/gdx/utils/JsonValue;", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_remove, VTABLE_com_badlogic_gdx_utils_JsonValue$JsonIterator_remove, "()V", 1 },
	{ "iterator", (intptr_t) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_iterator_R_java_util_Iterator, VTABLE_com_badlogic_gdx_utils_JsonValue$JsonIterator_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "next", (intptr_t) M_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_java_lang_Object, VTABLE_com_badlogic_gdx_utils_JsonValue$JsonIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_utils_JsonValue$JsonIterator{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/JsonValue$JsonIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_JsonValue$JsonIterator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_JsonValue$JsonIterator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_JsonValue$JsonIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_JsonValue$JsonIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_JsonValue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_JsonValue$JsonIterator = registerClass(&class_com_badlogic_gdx_utils_JsonValue$JsonIterator);

}

