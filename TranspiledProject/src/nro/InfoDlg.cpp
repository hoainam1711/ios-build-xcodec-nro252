#include "nro/InfoDlg.h"
#include "nro/Paint.h"
#include "lib/mFont.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/InfoDlg.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"

extern "C" {

jbool SF_nro_InfoDlg_isShow;
jobject SF_nro_InfoDlg_title;
jobject SF_nro_InfoDlg_subtitke;
jint SF_nro_InfoDlg_delay;
jbool SF_nro_InfoDlg_isLock;

void mark_nro_InfoDlg(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_InfoDlg_title)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_InfoDlg_title)->clazz)->markFunction)((jobject) SF_nro_InfoDlg_title, mark, depth + 1);
		if (SF_nro_InfoDlg_subtitke)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_InfoDlg_subtitke)->clazz)->markFunction)((jobject) SF_nro_InfoDlg_subtitke, mark, depth + 1);
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
	auto self = (nro_InfoDlg *) object;
}

void clinit_nro_InfoDlg(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_InfoDlg(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoDlg:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoDlg(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoDlg:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoDlg(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(15);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(16);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_isShow = (jint(1));
	LINE_NUMBER(17);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_title = (frame[0].o);
	LINE_NUMBER(18);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_subtitke = (frame[1].o);
	LINE_NUMBER(19);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_delay = (frame[2].i);
	}
label_1:;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_InfoDlg_showWait(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoDlg:showWait", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoDlg(ctx);
	{
	LINE_NUMBER(24);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_PLEASEWAIT;
	SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (1000));
	LINE_NUMBER(25);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_isLock = (jint(1));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_InfoDlg_paint_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoDlg:paint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoDlg(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(29);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(30);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_isLock) == 0) goto label_3;
	}
	{
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_delay) > (4990)) goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(31);
	SM_nro_Paint_paintPopUp_int_int_int_int_lib_mGraphics(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) - (75)), (10), (150), (55), (frame[0].o));
	LINE_NUMBER(32);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_isLock) == 0) goto label_5;
	}
	{
	LINE_NUMBER(33);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_hw;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	clinit_nro_InfoDlg(ctx);
	sp[1].o = (jobject)SF_nro_InfoDlg_title;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	SM_main_GameCanvas_paintShukiren_int_int_lib_mGraphics(ctx, ((temp0 - (temp1 / (jint(2)))) - (10)), (38), (frame[0].o));
	LINE_NUMBER(34);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	sp[1].o = frame[0].o;
	clinit_nro_InfoDlg(ctx);
	sp[2].o = (jobject)SF_nro_InfoDlg_title;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw) + (jint(5))), (31), (jint(2)));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(35);
	clinit_nro_InfoDlg(ctx);
	sp[0].o = (jobject)SF_nro_InfoDlg_subtitke;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(36);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	sp[1].o = frame[0].o;
	clinit_nro_InfoDlg(ctx);
	sp[2].o = (jobject)SF_nro_InfoDlg_title;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (23), (jint(2)));
	LINE_NUMBER(37);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_green2;
	sp[1].o = frame[0].o;
	clinit_nro_InfoDlg(ctx);
	sp[2].o = (jobject)SF_nro_InfoDlg_subtitke;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (40), (jint(2)));
	goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(39);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_8b;
	sp[1].o = frame[0].o;
	clinit_nro_InfoDlg(ctx);
	sp[2].o = (jobject)SF_nro_InfoDlg_title;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_hw), (31), (jint(2)));
	}
label_1:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_InfoDlg_update(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoDlg:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoDlg(ctx);
	{
	LINE_NUMBER(46);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(47);
	if ((clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_delay) <= 0) goto label_1;
	}
	{
	jint temp0 = (clinit_nro_InfoDlg(ctx), (jint)SF_nro_InfoDlg_delay) - (jint(1));
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_delay = temp0;
	if (temp0 > 0) goto label_1;
	}
	LINE_NUMBER(48);
	SM_nro_InfoDlg_hide(ctx);
label_1:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_InfoDlg_hide(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoDlg:hide", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoDlg(ctx);
	{
	LINE_NUMBER(55);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_title = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(56);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_subtitke = (jobject(nullptr));
	LINE_NUMBER(57);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_isLock = (jint(0));
	LINE_NUMBER(58);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_delay = (jint(0));
	LINE_NUMBER(59);
	clinit_nro_InfoDlg(ctx);
	SF_nro_InfoDlg_isShow = (jint(0));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_InfoDlg[] {
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
	{ "isShow", &class_boolean, (intptr_t) &SF_nro_InfoDlg_isShow, "Z", 9 },
	{ "title", &class_java_lang_String, (intptr_t) &SF_nro_InfoDlg_title, "Ljava/lang/String;", 10 },
	{ "subtitke", &class_java_lang_String, (intptr_t) &SF_nro_InfoDlg_subtitke, "Ljava/lang/String;", 10 },
	{ "delay", &class_int, (intptr_t) &SF_nro_InfoDlg_delay, "I", 10 },
	{ "isLock", &class_boolean, (intptr_t) &SF_nro_InfoDlg_isLock, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_InfoDlg, 0, "()V", 1 },
	{ "show", (intptr_t) SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;I)V", 9 },
	{ "showWait", (intptr_t) SM_nro_InfoDlg_showWait, 0, "()V", 9 },
	{ "paint", (intptr_t) SM_nro_InfoDlg_paint_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "update", (intptr_t) SM_nro_InfoDlg_update, 0, "()V", 9 },
	{ "hide", (intptr_t) SM_nro_InfoDlg_hide, 0, "()V", 9 },
};

Class class_nro_InfoDlg{
		.nativeName = (intptr_t) "nro/InfoDlg",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_InfoDlg),
		.classVtable = (intptr_t) vtable_nro_InfoDlg,
		.staticInitializer = (intptr_t) clinit_nro_InfoDlg,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_InfoDlg,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_InfoDlg = registerClass(&class_nro_InfoDlg);

}

