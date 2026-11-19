#include "lib/input/ChatTextField_5.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "java/lang/Object.h"
#include "lib/input/TField.h"
#include "lib/input/ChatTextField.h"
#include "java/lang/String.h"
#include "nro/IChatable.h"
#include "lib/input/ChatTextField_5.h"

extern "C" {


void mark_lib_input_ChatTextField$5(jobject object, jint mark, jint depth) {
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
	auto self = (lib_input_ChatTextField$5 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_input_ChatTextField$5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_input_ChatTextField$5_lib_input_ChatTextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField$5:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_ChatTextField$5(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField$5_input_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField$5:input", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow = (jint(0));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_parentScreen;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_parentScreen;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[2].o))->F_to;
	((func_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_nro_IChatable, INDEX_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField$5_canceled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField$5:canceled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow = (jint(0));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(267);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_parentScreen;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((lib_input_ChatTextField$5 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_parentScreen;
	((func_nro_IChatable_onCancelChat) resolveInterfaceMethod(ctx, &class_nro_IChatable, INDEX_nro_IChatable_onCancelChat, sp[0].o))(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_input_ChatTextField$5[] {
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
	(void *) M_lib_input_ChatTextField$5_input_java_lang_String,
	(void *) M_lib_input_ChatTextField$5_canceled,
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
	{ "this$0", &class_lib_input_ChatTextField, offsetof(lib_input_ChatTextField$5, F_this$0), "Llib/input/ChatTextField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_input_ChatTextField$5_lib_input_ChatTextField, 0, "(Llib/input/ChatTextField;)V", 0 },
	{ "input", (intptr_t) M_lib_input_ChatTextField$5_input_java_lang_String, VTABLE_lib_input_ChatTextField$5_input_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "canceled", (intptr_t) M_lib_input_ChatTextField$5_canceled, VTABLE_lib_input_ChatTextField$5_canceled, "()V", 1 },
};

Class class_lib_input_ChatTextField$5{
		.nativeName = (intptr_t) "lib/input/ChatTextField$5",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_input_ChatTextField$5),
		.classVtable = (intptr_t) vtable_lib_input_ChatTextField$5,
		.staticInitializer = (intptr_t) clinit_lib_input_ChatTextField$5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_input_ChatTextField$5,
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
static bool registered_lib_input_ChatTextField$5 = registerClass(&class_lib_input_ChatTextField$5);

}

