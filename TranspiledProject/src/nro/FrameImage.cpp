#include "nro/FrameImage.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/FrameImage.h"
#include "lib/mGraphics.h"
#include "nro/Effect_End.h"

extern "C" {


void mark_nro_FrameImage(jobject object, jint mark, jint depth) {
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
	auto self = (nro_FrameImage *) object;
	if (self->F_imgFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgFrame)->clazz)->markFunction)((jobject) self->F_imgFrame, mark, depth + 1);
}

void clinit_nro_FrameImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_FrameImage_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FrameImage:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FrameImage(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_nro_Effect_End_getImage_int_R_javax_microedition_lcdui_Image(ctx, (frame[1].i));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(16);
	((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_imgFrame = (jref) (frame[2].o);
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_frameWidth = ((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))), (jint(0))));
	LINE_NUMBER(18);
	clinit_nro_Effect_End(ctx);
	sp[0].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	if (((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(2)))) <= 0) goto label_7;
	}
	{
	clinit_nro_Effect_End(ctx);
	sp[0].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(1);
label_8:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_nro_Effect_End(ctx);
	sp[1].o = (jobject)SF_nro_Effect_End_arrInfoEff;
	((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_frameHeight = (((jint)ARRAY_ACCESS(jshort, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))), (jint(1)))) / (frame[3].i));
	LINE_NUMBER(20);
	((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_nFrame = (frame[3].i);
	}
label_3:;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FrameImage:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FrameImage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(27);
	((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_imgFrame = (jref) (frame[1].o);
	LINE_NUMBER(28);
	((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_frameWidth = (frame[2].i);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) <= 0) goto label_6;
	}
	INST_ILOAD(3);
	goto label_7;
label_6:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 2;
	((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_frameHeight = sp[1].i;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_javax_microedition_lcdui_Image_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_javax_microedition_lcdui_Image_getHeight_R_int])(ctx, (frame[1].o));
	((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_nFrame = (temp0 / ((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_frameHeight));
	LINE_NUMBER(31);
	if (((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_nFrame) > 0) goto label_2;
	}
	{
	LINE_NUMBER(32);
	((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_nFrame = (jint(1));
	}
label_2:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FrameImage:drawFrame", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_imgFrame;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(41);
	if ((frame[1].i) <= ((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_nFrame)) goto label_6;
	}
	{
	LINE_NUMBER(42);
	frame[1].i = ((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_nFrame);
	}
label_6:;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_imgFrame;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((frame[1].i) * ((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_frameHeight)), ((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_frameWidth), ((jint)((nro_FrameImage *) NULL_CHECK((frame[0].o)))->F_frameHeight), (frame[4].i), (frame[2].i), (frame[3].i), (frame[5].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	LINE_NUMBER(49);
	goto label_8;
label_2:;
	LINE_NUMBER(48);
	INST_ASTORE(7);
label_8:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_FrameImage[] {
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
	(void *) M_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics,
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
	{ "drawFrame", "(IIIIILlib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "frameWidth", &class_int, offsetof(nro_FrameImage, F_frameWidth), "I", 1 },
	{ "frameHeight", &class_int, offsetof(nro_FrameImage, F_frameHeight), "I", 1 },
	{ "nFrame", &class_int, offsetof(nro_FrameImage, F_nFrame), "I", 1 },
	{ "imgFrame", &class_javax_microedition_lcdui_Image, offsetof(nro_FrameImage, F_imgFrame), "Ljavax/microedition/lcdui/Image;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_FrameImage_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_nro_FrameImage_javax_microedition_lcdui_Image_int_int, 0, "(Ljavax/microedition/lcdui/Image;II)V", 1 },
	{ "drawFrame", (intptr_t) M_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics, VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics, "(IIIIILlib/mGraphics;)V", 17 },
};

Class class_nro_FrameImage{
		.nativeName = (intptr_t) "nro/FrameImage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_FrameImage),
		.classVtable = (intptr_t) vtable_nro_FrameImage,
		.staticInitializer = (intptr_t) clinit_nro_FrameImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_FrameImage,
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
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_FrameImage = registerClass(&class_nro_FrameImage);

}

