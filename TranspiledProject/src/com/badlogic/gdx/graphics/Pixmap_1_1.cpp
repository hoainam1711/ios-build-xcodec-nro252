#include "com/badlogic/gdx/graphics/Pixmap_1_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Pixmap_DownloadPixmapResponseListener.h"
#include "com/badlogic/gdx/graphics/Pixmap_1.h"
#include "com/badlogic/gdx/graphics/Pixmap_1_1.h"
#include "java/lang/Throwable.h"
#include "java/lang/Runnable.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_Pixmap$1$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_Pixmap$1$1 *) object;
	if (self->F_val$result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$result)->clazz)->markFunction)((jobject) self->F_val$result, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_Pixmap$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_Pixmap$1$1_com_badlogic_gdx_graphics_Pixmap$1_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$1$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(212);
	((com_badlogic_gdx_graphics_Pixmap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_graphics_Pixmap$1$1 *) NULL_CHECK((frame[0].o)))->F_val$result = (jref) (frame[2].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap$1$1_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$1$1:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(216);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Pixmap$1$1 *) NULL_CHECK((frame[0].o)))->F_val$result;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_Pixmap$1$1 *) NULL_CHECK((frame[0].o)))->F_val$result;
	init_com_badlogic_gdx_graphics_Pixmap_Array1_byte_int_int(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(217);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap$1 *) NULL_CHECK(sp[0].o))->F_val$responseListener;
	((func_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadComplete_com_badlogic_gdx_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener, INDEX_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadComplete_com_badlogic_gdx_graphics_Pixmap, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(220);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(218);
	frame[1].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_graphics_Pixmap$1_failed_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap$1_failed_java_lang_Throwable])(ctx, sp[0].o, (frame[1].o));
	}
label_5:;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Pixmap$1$1[] {
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
	(void *) M_com_badlogic_gdx_graphics_Pixmap$1$1_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "val$result", getArrayClass(&class_byte, 1), offsetof(com_badlogic_gdx_graphics_Pixmap$1$1, F_val$result), "[B", 4112 },
	{ "this$0", &class_com_badlogic_gdx_graphics_Pixmap$1, offsetof(com_badlogic_gdx_graphics_Pixmap$1$1, F_this$0), "Lcom/badlogic/gdx/graphics/Pixmap$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap$1$1_com_badlogic_gdx_graphics_Pixmap$1_Array1_byte, 0, "(Lcom/badlogic/gdx/graphics/Pixmap$1;[B)V", 0 },
	{ "run", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap$1$1_run, VTABLE_com_badlogic_gdx_graphics_Pixmap$1$1_run, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_Pixmap$1$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Pixmap$1$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Pixmap$1$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Pixmap$1$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Pixmap$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Pixmap$1$1 = registerClass(&class_com_badlogic_gdx_graphics_Pixmap$1$1);

}

