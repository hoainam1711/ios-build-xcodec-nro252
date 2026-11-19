#include "nro/InputDlg.h"
#include "lib/mFont.h"
#include "nro/Dialog.h"
#include "lib/input/TField.h"
#include "nro/InputDlg.h"
#include "nro/IActionListener.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/Paint.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/nro/GameMain_IWebPlatformInfo.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "com/nro/GameMain.h"

extern "C" {


void mark_nro_InputDlg(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Dialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_InputDlg *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_tfInput)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfInput)->clazz)->markFunction)((jobject) self->F_tfInput, mark, depth + 1);
}

void clinit_nro_InputDlg(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Dialog(ctx);
}

void init_nro_InputDlg(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InputDlg:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InputDlg(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_nro_Dialog(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (40);
	LINE_NUMBER(14);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) > (176)) goto label_3;
	}
	{
	LINE_NUMBER(15);
	((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft = (10);
	}
label_3:;
	{
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((nro_InputDlg *) NULL_CHECK(sp[0].o))->F_tfInput = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) + (10));
	LINE_NUMBER(20);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT)) - (43));
	LINE_NUMBER(21);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - ((jint(2)) * (((jint)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) + (10))));
	LINE_NUMBER(22);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	sp[1].o = (jobject)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_cmdClear;
	((nro_Dialog *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_InputDlg_show_java_lang_String_nro_Command_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InputDlg:show", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((func_lib_input_TField_setIputType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setIputType_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_lib_mFont(ctx);
	sp[1].o = (jobject)SF_lib_mFont_tahoma_8b;
	sp[1].o = (jobject)((func_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_mFont_splitFontArray_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[1].o, (frame[1].o), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (((jint)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) << (jint(1)))));
	((nro_InputDlg *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	sp[3].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (8882), (jobject(nullptr)));
	((nro_Dialog *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(34);
	((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center = (jref) (frame[2].o);
	LINE_NUMBER(35);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentDialog = (frame[0].o);
	LINE_NUMBER(36);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebPlatformInfo, INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
	INST_ALOAD(1);
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp d\u1eef li\u1ec7u"_j));
label_12:;
	{
	sp -= 2;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction = (jref) (frame[2].o);
	LINE_NUMBER(39);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((func_lib_input_TField_doChangeToTextBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_doChangeToTextBox])(ctx, sp[0].o);
	}
label_9:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_InputDlg_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InputDlg:paint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_paintz;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jint temp1 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (77)) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH);
	jint temp2 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (((jint)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_padLeft) << (jint(1)));
	jint temp3 = 69;
	sp[2].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_info;
	((func_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Paint_paintInputDlg_lib_mGraphics_int_int_int_int_Array1_java_lang_String])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(46);
	M_nro_Dialog_paint_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_InputDlg_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InputDlg:keyPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(51);
	M_nro_Dialog_keyPress_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_InputDlg_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InputDlg:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_InputDlg *) NULL_CHECK((frame[0].o)))->F_tfInput;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	LINE_NUMBER(57);
	M_nro_Dialog_update(ctx, (frame[0].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_InputDlg[] {
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
	(void *) M_nro_InputDlg_paint_lib_mGraphics,
	(void *) M_nro_InputDlg_keyPress_int,
	(void *) M_nro_InputDlg_update,
	(void *) M_nro_InputDlg_show_java_lang_String_nro_Command_int,
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
	{ "paint", "(Llib/mGraphics;)V" },
	{ "keyPress", "(I)V" },
	{ "update", "()V" },
	{ "show", "(Ljava/lang/String;Lnro/Command;I)V" },
};

static FieldMetadata fields[] {
	{ "info", getArrayClass(&class_java_lang_String, 1), offsetof(nro_InputDlg, F_info), "[Ljava/lang/String;", 2 },
	{ "tfInput", &class_lib_input_TField, offsetof(nro_InputDlg, F_tfInput), "Llib/input/TField;", 1 },
	{ "padLeft", &class_int, offsetof(nro_InputDlg, F_padLeft), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_InputDlg, 0, "()V", 1 },
	{ "show", (intptr_t) M_nro_InputDlg_show_java_lang_String_nro_Command_int, VTABLE_nro_InputDlg_show_java_lang_String_nro_Command_int, "(Ljava/lang/String;Lnro/Command;I)V", 17 },
	{ "paint", (intptr_t) M_nro_InputDlg_paint_lib_mGraphics, VTABLE_nro_InputDlg_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "keyPress", (intptr_t) M_nro_InputDlg_keyPress_int, VTABLE_nro_InputDlg_keyPress_int, "(I)V", 17 },
	{ "update", (intptr_t) M_nro_InputDlg_update, VTABLE_nro_InputDlg_update, "()V", 17 },
};

Class class_nro_InputDlg{
		.nativeName = (intptr_t) "nro/InputDlg",
		.parentClass = (intptr_t) &class_nro_Dialog,
		.size = sizeof(nro_InputDlg),
		.classVtable = (intptr_t) vtable_nro_InputDlg,
		.staticInitializer = (intptr_t) clinit_nro_InputDlg,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_InputDlg,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_InputDlg = registerClass(&class_nro_InputDlg);

}

