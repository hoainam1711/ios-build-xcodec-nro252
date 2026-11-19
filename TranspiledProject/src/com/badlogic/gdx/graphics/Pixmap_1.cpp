#include "com/badlogic/gdx/graphics/Pixmap_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Pixmap_DownloadPixmapResponseListener.h"
#include "com/badlogic/gdx/Net_HttpResponse.h"
#include "com/badlogic/gdx/graphics/Pixmap_1.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Pixmap_1_1.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/Net_HttpResponseListener.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_Pixmap$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_Pixmap$1 *) object;
	if (self->F_val$responseListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$responseListener)->clazz)->markFunction)((jobject) self->F_val$responseListener, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_Pixmap$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_Pixmap$1_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	((com_badlogic_gdx_graphics_Pixmap$1 *) NULL_CHECK((frame[0].o)))->F_val$responseListener = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap$1_handleHttpResponse_com_badlogic_gdx_Net$HttpResponse(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$1:handleHttpResponse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Net$HttpResponse_getResult_R_Array1_byte) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Net$HttpResponse, INDEX_com_badlogic_gdx_Net$HttpResponse_getResult_R_Array1_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(212);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	clinit_com_badlogic_gdx_graphics_Pixmap$1$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$1$1);
	init_com_badlogic_gdx_graphics_Pixmap$1$1_com_badlogic_gdx_graphics_Pixmap$1_Array1_byte(ctx, sp[1].o, (frame[0].o), (frame[2].o));
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap$1_failed_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$1:failed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap$1 *) NULL_CHECK((frame[0].o)))->F_val$responseListener;
	((func_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadFailed_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener, INDEX_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener_downloadFailed_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap$1_cancelled(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$1:cancelled", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Pixmap$1[] {
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
	(void *) M_com_badlogic_gdx_graphics_Pixmap$1_handleHttpResponse_com_badlogic_gdx_Net$HttpResponse,
	(void *) M_com_badlogic_gdx_graphics_Pixmap$1_failed_java_lang_Throwable,
	(void *) M_com_badlogic_gdx_graphics_Pixmap$1_cancelled,
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
	{ "handleHttpResponse", "(Lcom/badlogic/gdx/Net$HttpResponse;)V" },
	{ "failed", "(Ljava/lang/Throwable;)V" },
	{ "cancelled", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Net$HttpResponseListener, };

static FieldMetadata fields[] {
	{ "val$responseListener", &class_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener, offsetof(com_badlogic_gdx_graphics_Pixmap$1, F_val$responseListener), "Lcom/badlogic/gdx/graphics/Pixmap$DownloadPixmapResponseListener;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap$1_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener, 0, "(Lcom/badlogic/gdx/graphics/Pixmap$DownloadPixmapResponseListener;)V", 0 },
	{ "handleHttpResponse", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap$1_handleHttpResponse_com_badlogic_gdx_Net$HttpResponse, VTABLE_com_badlogic_gdx_graphics_Pixmap$1_handleHttpResponse_com_badlogic_gdx_Net$HttpResponse, "(Lcom/badlogic/gdx/Net$HttpResponse;)V", 1 },
	{ "failed", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap$1_failed_java_lang_Throwable, VTABLE_com_badlogic_gdx_graphics_Pixmap$1_failed_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "cancelled", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap$1_cancelled, VTABLE_com_badlogic_gdx_graphics_Pixmap$1_cancelled, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_Pixmap$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Pixmap$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Pixmap$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Pixmap$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Pixmap$1,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Pixmap$1 = registerClass(&class_com_badlogic_gdx_graphics_Pixmap$1);

}

