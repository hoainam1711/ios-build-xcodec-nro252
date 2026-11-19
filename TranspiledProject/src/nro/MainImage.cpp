#include "nro/MainImage.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/MainImage.h"
#include "lib/mSystem.h"

extern "C" {


void mark_nro_MainImage(jobject object, jint mark, jint depth) {
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
	auto self = (nro_MainImage *) object;
	if (self->F_img)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_img)->clazz)->markFunction)((jobject) self->F_img, mark, depth + 1);
}

void clinit_nro_MainImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_MainImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MainImage:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MainImage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_count = (jlong(-1ll));
	LINE_NUMBER(10);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_timeImageNull = (jint(0));
	LINE_NUMBER(11);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_nFrame = (jint(1));
	LINE_NUMBER(14);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_MainImage_javax_microedition_lcdui_Image_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MainImage:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MainImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_count = (jlong(-1ll));
	LINE_NUMBER(10);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_timeImageNull = (jint(0));
	LINE_NUMBER(11);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_nFrame = (jint(1));
	LINE_NUMBER(18);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	LINE_NUMBER(19);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_img = (jref) (frame[1].o);
	LINE_NUMBER(20);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_count = (jlong(0));
	LINE_NUMBER(21);
	((nro_MainImage *) NULL_CHECK((frame[0].o)))->F_nFrame = (frame[2].i);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MainImage[] {
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
	{ "img", &class_javax_microedition_lcdui_Image, offsetof(nro_MainImage, F_img), "Ljavax/microedition/lcdui/Image;", 1 },
	{ "count", &class_long, offsetof(nro_MainImage, F_count), "J", 1 },
	{ "timeImageNull", &class_int, offsetof(nro_MainImage, F_timeImageNull), "I", 1 },
	{ "nFrame", &class_byte, offsetof(nro_MainImage, F_nFrame), "B", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MainImage, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_nro_MainImage_javax_microedition_lcdui_Image_byte, 0, "(Ljavax/microedition/lcdui/Image;B)V", 1 },
};

Class class_nro_MainImage{
		.nativeName = (intptr_t) "nro/MainImage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_MainImage),
		.classVtable = (intptr_t) vtable_nro_MainImage,
		.staticInitializer = (intptr_t) clinit_nro_MainImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MainImage,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MainImage = registerClass(&class_nro_MainImage);

}

