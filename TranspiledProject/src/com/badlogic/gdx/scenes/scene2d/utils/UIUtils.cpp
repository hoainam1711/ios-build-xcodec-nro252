#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/utils/Os.h"
#include "com/badlogic/gdx/utils/SharedLibraryLoader.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"

extern "C" {

jbool SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isAndroid;
jbool SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isMac;
jbool SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isWindows;
jbool SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isLinux;
jbool SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isIos;

void mark_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_UIUtils *) object;
}

void init_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_left_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:left", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(21);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_left_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:left", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(25);
	if ((frame[0].i) != 0) goto label_1;
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

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_right_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:right", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(29);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_right_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:right", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(33);
	if ((frame[0].i) != (jint(1))) goto label_1;
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

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_middle_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:middle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isButtonPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (jint(2)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_middle_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:middle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(41);
	if ((frame[0].i) != (jint(2))) goto label_1;
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

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:shift", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (59));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (60));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:shift", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(49);
	if ((frame[0].i) == (59)) goto label_1;
	}
	{
	if ((frame[0].i) != (60)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:ctrl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(53);
	if ((clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx), (jint)SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isMac) == 0) goto label_1;
	}
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (63));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (129));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (130));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:ctrl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(60);
	if ((clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx), (jint)SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isMac) == 0) goto label_1;
	}
	{
	LINE_NUMBER(61);
	if ((frame[0].i) != (63)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(63);
	if ((frame[0].i) == (129)) goto label_5;
	}
	{
	if ((frame[0].i) != (130)) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_alt_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:alt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(67);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (57));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (58));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_alt_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:alt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(71);
	if ((frame[0].i) == (57)) goto label_1;
	}
	{
	if ((frame[0].i) != (58)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/UIUtils:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	{
	LINE_NUMBER(14);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isAndroid = sp[0].i;
	LINE_NUMBER(15);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isMac = sp[0].i;
	LINE_NUMBER(16);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isWindows = sp[0].i;
	LINE_NUMBER(17);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isLinux = sp[0].i;
	LINE_NUMBER(18);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_SharedLibraryLoader_os;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_IOS;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isIos = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_UIUtils[] {
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
	{ "isAndroid", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isAndroid, "Z", 9 },
	{ "isMac", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isMac, "Z", 9 },
	{ "isWindows", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isWindows, "Z", 9 },
	{ "isLinux", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isLinux, "Z", 9 },
	{ "isIos", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_isIos, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_UIUtils, 0, "()V", 2 },
	{ "left", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_left_R_boolean, 0, "()Z", 9 },
	{ "left", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_left_int_R_boolean, 0, "(I)Z", 9 },
	{ "right", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_right_R_boolean, 0, "()Z", 9 },
	{ "right", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_right_int_R_boolean, 0, "(I)Z", 9 },
	{ "middle", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_middle_R_boolean, 0, "()Z", 9 },
	{ "middle", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_middle_int_R_boolean, 0, "(I)Z", 9 },
	{ "shift", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean, 0, "()Z", 9 },
	{ "shift", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_int_R_boolean, 0, "(I)Z", 9 },
	{ "ctrl", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean, 0, "()Z", 9 },
	{ "ctrl", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_int_R_boolean, 0, "(I)Z", 9 },
	{ "alt", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_alt_R_boolean, 0, "()Z", 9 },
	{ "alt", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_alt_int_R_boolean, 0, "(I)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_UIUtils{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/UIUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_UIUtils),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_UIUtils,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_UIUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_UIUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_UIUtils = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_UIUtils);

}

