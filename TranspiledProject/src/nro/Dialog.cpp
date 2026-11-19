#include "nro/Dialog.h"
#include "nro/Paint.h"
#include "java/lang/Object.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/mScreen.h"
#include "nro/Command.h"

extern "C" {


void mark_nro_Dialog(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Dialog *) object;
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_center)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_center)->clazz)->markFunction)((jobject) self->F_center, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
}

void clinit_nro_Dialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Dialog:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Dialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Dialog_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Dialog:paint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(13);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(14);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	sp[2].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	sp[3].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Dialog_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Dialog:keyPress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(18);
	switch((frame[1].i)) {
		case -39: goto label_1;
		case -38: goto label_2;
		case -27: goto label_3;
		case -22: goto label_4;
		case -21: goto label_5;
		case -7: goto label_4;
		case -6: goto label_5;
		case -5: goto label_6;
		case -2: goto label_1;
		case -1: goto label_2;
		case 10: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(21);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(22);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(1));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(26);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(27);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(1));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}
label_3:;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(33);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	LINE_NUMBER(34);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(38);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	LINE_NUMBER(39);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(1));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(43);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyHold;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	LINE_NUMBER(44);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}
label_7:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Dialog_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Dialog:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(52);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(53);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(54);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(55);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_center;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(60);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(64);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	LINE_NUMBER(65);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(66);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(67);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(72);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(76);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	LINE_NUMBER(77);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(78);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(79);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(80);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK((frame[0].o)))->F_right;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(84);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	}
label_17:;
	{
	LINE_NUMBER(87);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(88);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Dialog[] {
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
	(void *) M_nro_Dialog_paint_lib_mGraphics,
	(void *) M_nro_Dialog_keyPress_int,
	(void *) M_nro_Dialog_update,
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
};

static FieldMetadata fields[] {
	{ "left", &class_nro_Command, offsetof(nro_Dialog, F_left), "Lnro/Command;", 1 },
	{ "center", &class_nro_Command, offsetof(nro_Dialog, F_center), "Lnro/Command;", 1 },
	{ "right", &class_nro_Command, offsetof(nro_Dialog, F_right), "Lnro/Command;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Dialog, 0, "()V", 1 },
	{ "paint", (intptr_t) M_nro_Dialog_paint_lib_mGraphics, VTABLE_nro_Dialog_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "keyPress", (intptr_t) M_nro_Dialog_keyPress_int, VTABLE_nro_Dialog_keyPress_int, "(I)V", 1 },
	{ "update", (intptr_t) M_nro_Dialog_update, VTABLE_nro_Dialog_update, "()V", 1 },
};

Class class_nro_Dialog{
		.nativeName = (intptr_t) "nro/Dialog",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Dialog),
		.classVtable = (intptr_t) vtable_nro_Dialog,
		.staticInitializer = (intptr_t) clinit_nro_Dialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Dialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Dialog = registerClass(&class_nro_Dialog);

}

