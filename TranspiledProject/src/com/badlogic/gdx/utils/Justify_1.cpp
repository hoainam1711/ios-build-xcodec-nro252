#include "com/badlogic/gdx/utils/Justify_1.h"
#include "java/lang/NoSuchFieldError.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Justify_1.h"
#include "com/badlogic/gdx/utils/Justify.h"
#include "java/lang/Enum.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;

void mark_com_badlogic_gdx_utils_Justify$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_Justify$1 *) object;
}

void clinit_com_badlogic_gdx_utils_Justify$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Justify$1:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Justify_values_R_Array1_com_badlogic_gdx_utils_Justify(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_ParagraphBySpace;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_WrappedLinesBySpace;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_6:;
	INST_ASTORE(0);
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_AllLinesBySpace;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_10:;
	INST_ASTORE(0);
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_ParagraphByGlyph;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_14:;
	INST_ASTORE(0);
label_16:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_WrappedLinesByGlyph;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(5));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_18:;
	INST_ASTORE(0);
label_20:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	clinit_com_badlogic_gdx_utils_Justify$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_AllLinesByGlyph;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	}
	popExceptionFrame(frameRef);
	goto label_25;
label_22:;
	INST_ASTORE(0);
label_25:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Justify$1[] {
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
	{ "$SwitchMap$com$badlogic$gdx$utils$Justify", getArrayClass(&class_int, 1), (intptr_t) &SF_com_badlogic_gdx_utils_Justify$1_$SwitchMap$com$badlogic$gdx$utils$Justify, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_Justify$1, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_Justify$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Justify$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Justify$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Justify$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Justify$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Justify$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 4128,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = true,
};
static bool registered_com_badlogic_gdx_utils_Justify$1 = registerClass(&class_com_badlogic_gdx_utils_Justify$1);

}

