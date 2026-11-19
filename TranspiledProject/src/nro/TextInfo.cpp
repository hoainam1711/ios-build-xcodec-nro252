#include "nro/TextInfo.h"
#include "lib/mFont.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/TextInfo.h"

extern "C" {

jint SF_nro_TextInfo_dx;
jint SF_nro_TextInfo_tx;
jint SF_nro_TextInfo_wStr;
jbool SF_nro_TextInfo_isBack;
jobject SF_nro_TextInfo_laststring;

void mark_nro_TextInfo(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_TextInfo_laststring)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TextInfo_laststring)->clazz)->markFunction)((jobject) SF_nro_TextInfo_laststring, mark, depth + 1);
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
	auto self = (nro_TextInfo *) object;
}

void init_nro_TextInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TextInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TextInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_TextInfo_reset(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TextInfo:reset", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TextInfo(ctx);
	{
	LINE_NUMBER(15);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_dx = (jint(0));
	LINE_NUMBER(16);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_tx = (jint(0));
	LINE_NUMBER(17);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_isBack = (jint(0));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_TextInfo_paint_lib_mGraphics_java_lang_String_int_int_int_int_lib_mFont(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TextInfo:paint", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TextInfo(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(21);
	clinit_nro_TextInfo(ctx);
	jint temp0 = (jint)SF_nro_TextInfo_wStr;
	jint temp1 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[6].o), (frame[1].o));
	if (temp0 != temp1) goto label_1;
	}
	{
	clinit_nro_TextInfo(ctx);
	sp[0].o = (jobject)SF_nro_TextInfo_laststring;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(22);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_laststring = (frame[1].o);
	LINE_NUMBER(23);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_dx = (jint(0));
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[6].o), (frame[1].o));
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_wStr = temp0;
	LINE_NUMBER(25);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_isBack = (jint(0));
	LINE_NUMBER(26);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_tx = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(29);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(30);
	if ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_wStr) <= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(31);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[6].o), (frame[0].o), (frame[1].o), ((frame[2].i) - (clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx)), (frame[3].i), (jint(0)));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(33);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, (frame[6].o), (frame[0].o), (frame[1].o), ((frame[2].i) + ((frame[4].i) / (jint(2)))), (frame[3].i), (jint(2)));
	}
label_10:;
	{
	LINE_NUMBER(36);
	SM_main_GameCanvas_resetTrans_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(37);
	if ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_wStr) <= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(38);
	if ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_isBack) != 0) goto label_14;
	}
	{
	LINE_NUMBER(39);
	jint temp0 = (clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_tx) + (jint(1));
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_tx = temp0;
	if (temp0 <= (50)) goto label_12;
	}
	{
	jint temp0 = (clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx) + (jint(1));
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_dx = temp0;
	if (temp0 < (clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_wStr)) goto label_12;
	}
	{
	LINE_NUMBER(40);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_tx = (jint(0));
	LINE_NUMBER(41);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_dx = ((-(frame[4].i)) + (30));
	LINE_NUMBER(42);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_isBack = (jint(1));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(46);
	if ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx) >= 0) goto label_20;
	}
	{
	LINE_NUMBER(47);
	frame[7].i = (((frame[4].i) + (clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx)) >> (jint(1)));
	LINE_NUMBER(48);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_dx = ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx) + (frame[7].i));
	}
label_20:;
	{
	LINE_NUMBER(51);
	if ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(52);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_dx = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(55);
	if ((clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_dx) != 0) goto label_12;
	}
	{
	jint temp0 = (clinit_nro_TextInfo(ctx), (jint)SF_nro_TextInfo_tx) + (jint(1));
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_tx = temp0;
	if (temp0 != (50)) goto label_12;
	}
	{
	LINE_NUMBER(56);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_tx = (jint(0));
	LINE_NUMBER(57);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_isBack = (jint(0));
	}
label_12:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_TextInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TextInfo:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TextInfo(ctx);
	{
	LINE_NUMBER(12);
	clinit_nro_TextInfo(ctx);
	SF_nro_TextInfo_laststring = (((jobject) createStringLiteral(ctx, u8""_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_TextInfo[] {
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
	{ "dx", &class_int, (intptr_t) &SF_nro_TextInfo_dx, "I", 10 },
	{ "tx", &class_int, (intptr_t) &SF_nro_TextInfo_tx, "I", 10 },
	{ "wStr", &class_int, (intptr_t) &SF_nro_TextInfo_wStr, "I", 10 },
	{ "isBack", &class_boolean, (intptr_t) &SF_nro_TextInfo_isBack, "Z", 10 },
	{ "laststring", &class_java_lang_String, (intptr_t) &SF_nro_TextInfo_laststring, "Ljava/lang/String;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_TextInfo, 0, "()V", 1 },
	{ "reset", (intptr_t) SM_nro_TextInfo_reset, 0, "()V", 9 },
	{ "paint", (intptr_t) SM_nro_TextInfo_paint_lib_mGraphics_java_lang_String_int_int_int_int_lib_mFont, 0, "(Llib/mGraphics;Ljava/lang/String;IIIILlib/mFont;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_TextInfo, 0, "()V", 8 },
};

Class class_nro_TextInfo{
		.nativeName = (intptr_t) "nro/TextInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_TextInfo),
		.classVtable = (intptr_t) vtable_nro_TextInfo,
		.staticInitializer = (intptr_t) clinit_nro_TextInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_TextInfo,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_TextInfo = registerClass(&class_nro_TextInfo);

}

