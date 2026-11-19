#include "nro/Small.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/mGraphics.h"
#include "nro/Small.h"

extern "C" {


void mark_nro_Small(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Small *) object;
	if (self->F_img)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_img)->clazz)->markFunction)((jobject) self->F_img, mark, depth + 1);
}

void clinit_nro_Small(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Small_javax_microedition_lcdui_Image_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Small:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Small(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_img = (jref) (frame[1].o);
	LINE_NUMBER(16);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_id = (frame[2].i);
	LINE_NUMBER(17);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_timePaint = (jint(0));
	LINE_NUMBER(18);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_timeUpdate = (jint(0));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Small_paint_lib_mGraphics_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Small:paint", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(22);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(23);
	frame[7].i = (jint(0));
	LINE_NUMBER(24);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(25);
	frame[5].i = (frame[4].i);
	LINE_NUMBER(26);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(27);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(28);
	frame[9].o = (frame[6].o);
	LINE_NUMBER(29);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp2 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp3 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	((func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[3].i), (frame[4].i), (frame[5].i), (frame[8].i));
	LINE_NUMBER(30);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[0].o)))->F_timeUpdate);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Small:paint", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(35);
	frame[9].o = (frame[1].o);
	LINE_NUMBER(36);
	frame[10].i = (jint(0));
	LINE_NUMBER(37);
	frame[11].i = (frame[8].i);
	LINE_NUMBER(38);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(39);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(40);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(41);
	frame[5].i = (frame[4].i);
	LINE_NUMBER(42);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(43);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(44);
	frame[12].o = (frame[9].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	jint temp0 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	if (temp0 == (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[0].o)))->F_img;
	((func_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics__drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((frame[4].i) * (frame[8].i)), (frame[7].i), (frame[8].i), (frame[3].i), (frame[5].i), (frame[6].i), (frame[11].i));
	LINE_NUMBER(47);
	((nro_Small *) NULL_CHECK((frame[0].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[0].o)))->F_timeUpdate);
	}
label_11:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Small[] {
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
	(void *) M_nro_Small_paint_lib_mGraphics_int_int_int_int,
	(void *) M_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int,
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
	{ "paint", "(Llib/mGraphics;IIII)V" },
	{ "paint", "(Llib/mGraphics;IIIIIII)V" },
};

static FieldMetadata fields[] {
	{ "img", &class_javax_microedition_lcdui_Image, offsetof(nro_Small, F_img), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "id", &class_int, offsetof(nro_Small, F_id), "I", 1 },
	{ "timePaint", &class_int, offsetof(nro_Small, F_timePaint), "I", 1 },
	{ "timeUpdate", &class_int, offsetof(nro_Small, F_timeUpdate), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Small_javax_microedition_lcdui_Image_int, 0, "(Ljavax/microedition/lcdui/Image;I)V", 1 },
	{ "paint", (intptr_t) M_nro_Small_paint_lib_mGraphics_int_int_int_int, VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int, "(Llib/mGraphics;IIII)V", 17 },
	{ "paint", (intptr_t) M_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int, VTABLE_nro_Small_paint_lib_mGraphics_int_int_int_int_int_int_int, "(Llib/mGraphics;IIIIIII)V", 17 },
};

Class class_nro_Small{
		.nativeName = (intptr_t) "nro/Small",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Small),
		.classVtable = (intptr_t) vtable_nro_Small,
		.staticInitializer = (intptr_t) clinit_nro_Small,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Small,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Small = registerClass(&class_nro_Small);

}

