#include "lib/input/TField_2.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "java/lang/Object.h"
#include "lib/input/TField.h"
#include "java/lang/String.h"
#include "lib/input/TField_2.h"
#include "main/GameCanvas.h"
#include "nro/Command.h"
#include "java/lang/System.h"

extern "C" {


void mark_lib_input_TField$2(jobject object, jint mark, jint depth) {
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
	auto self = (lib_input_TField$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_input_TField$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_input_TField$2_lib_input_TField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_TField$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_TField$2_input_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField$2:input", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isOpeningDialog = (jint(0));
	LINE_NUMBER(226);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_lastTimeCloseDialog = temp0;
	LINE_NUMBER(227);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(228);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerDown = (jint(0));
	LINE_NUMBER(229);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(230);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustDown = (jint(0));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_TField$2_canceled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/TField$2:canceled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_isOpeningDialog = (jint(0));
	LINE_NUMBER(240);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_lastTimeCloseDialog = temp0;
	LINE_NUMBER(241);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(242);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerDown = (jint(0));
	LINE_NUMBER(243);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(244);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustDown = (jint(0));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdCancelAction;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((lib_input_TField$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdCancelAction;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_input_TField$2[] {
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
	(void *) M_lib_input_TField$2_input_java_lang_String,
	(void *) M_lib_input_TField$2_canceled,
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
	{ "input", "(Ljava/lang/String;)V" },
	{ "canceled", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Input$TextInputListener, };

static FieldMetadata fields[] {
	{ "this$0", &class_lib_input_TField, offsetof(lib_input_TField$2, F_this$0), "Llib/input/TField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_input_TField$2_lib_input_TField, 0, "(Llib/input/TField;)V", 0 },
	{ "input", (intptr_t) M_lib_input_TField$2_input_java_lang_String, VTABLE_lib_input_TField$2_input_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "canceled", (intptr_t) M_lib_input_TField$2_canceled, VTABLE_lib_input_TField$2_canceled, "()V", 1 },
};

Class class_lib_input_TField$2{
		.nativeName = (intptr_t) "lib/input/TField$2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_input_TField$2),
		.classVtable = (intptr_t) vtable_lib_input_TField$2,
		.staticInitializer = (intptr_t) clinit_lib_input_TField$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_input_TField$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_lib_input_TField$2 = registerClass(&class_lib_input_TField$2);

}

