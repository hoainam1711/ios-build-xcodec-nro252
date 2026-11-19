#include "com/badlogic/gdx/utils/reflect/Annotation.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/reflect/Annotation.h"

extern "C" {


void mark_com_badlogic_gdx_utils_reflect_Annotation(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_reflect_Annotation *) object;
	if (self->F_annotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_annotation)->clazz)->markFunction)((jobject) self->F_annotation, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_reflect_Annotation(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Annotation:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_reflect_Annotation(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((com_badlogic_gdx_utils_reflect_Annotation *) NULL_CHECK((frame[0].o)))->F_annotation = (jref) (frame[1].o);
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Annotation_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Annotation:getAnnotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Annotation *) NULL_CHECK((frame[0].o)))->F_annotation;
	sp[0].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, sp[0].o))(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Annotation *) NULL_CHECK((frame[0].o)))->F_annotation;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_reflect_Annotation_getAnnotationType_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/reflect/Annotation:getAnnotationType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_reflect_Annotation *) NULL_CHECK((frame[0].o)))->F_annotation;
	sp[0].o = (jobject)((func_java_lang_annotation_Annotation_annotationType_R_java_lang_Class) resolveInterfaceMethod(ctx, &class_java_lang_annotation_Annotation, INDEX_java_lang_annotation_Annotation_annotationType_R_java_lang_Class, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_reflect_Annotation[] {
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
	(void *) M_com_badlogic_gdx_utils_reflect_Annotation_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation,
	(void *) M_com_badlogic_gdx_utils_reflect_Annotation_getAnnotationType_R_java_lang_Class,
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
	{ "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" },
	{ "getAnnotationType", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "annotation", &class_java_lang_annotation_Annotation, offsetof(com_badlogic_gdx_utils_reflect_Annotation, F_annotation), "Ljava/lang/annotation/Annotation;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_reflect_Annotation_java_lang_annotation_Annotation, 0, "(Ljava/lang/annotation/Annotation;)V", 0 },
	{ "getAnnotation", (intptr_t) M_com_badlogic_gdx_utils_reflect_Annotation_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, VTABLE_com_badlogic_gdx_utils_reflect_Annotation_getAnnotation_java_lang_Class_R_java_lang_annotation_Annotation, "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", 1 },
	{ "getAnnotationType", (intptr_t) M_com_badlogic_gdx_utils_reflect_Annotation_getAnnotationType_R_java_lang_Class, VTABLE_com_badlogic_gdx_utils_reflect_Annotation_getAnnotationType_R_java_lang_Class, "()Ljava/lang/Class;", 1 },
};

Class class_com_badlogic_gdx_utils_reflect_Annotation{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/reflect/Annotation",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_reflect_Annotation),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_reflect_Annotation,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_reflect_Annotation,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_reflect_Annotation,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_reflect_Annotation = registerClass(&class_com_badlogic_gdx_utils_reflect_Annotation);

}

