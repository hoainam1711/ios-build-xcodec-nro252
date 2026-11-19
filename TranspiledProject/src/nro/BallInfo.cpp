#include "nro/BallInfo.h"
#include "java/lang/Object.h"
#include "nro/Char.h"
#include "nro/BallInfo.h"

extern "C" {


void mark_nro_BallInfo(jobject object, jint mark, jint depth) {
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
	auto self = (nro_BallInfo *) object;
	if (self->F_cFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cFocus)->clazz)->markFunction)((jobject) self->F_cFocus, mark, depth + 1);
}

void clinit_nro_BallInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_BallInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/BallInfo:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_BallInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((nro_BallInfo *) NULL_CHECK((frame[0].o)))->F_xTo = (-999);
	LINE_NUMBER(7);
	((nro_BallInfo *) NULL_CHECK((frame[0].o)))->F_yTo = (-999);
	LINE_NUMBER(13);
	((nro_BallInfo *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(1));
	LINE_NUMBER(14);
	((nro_BallInfo *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(0));
	LINE_NUMBER(15);
	((nro_BallInfo *) NULL_CHECK((frame[0].o)))->F_isSetImg = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_BallInfo[] {
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
	{ "x", &class_int, offsetof(nro_BallInfo, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_BallInfo, F_y), "I", 1 },
	{ "xTo", &class_int, offsetof(nro_BallInfo, F_xTo), "I", 1 },
	{ "yTo", &class_int, offsetof(nro_BallInfo, F_yTo), "I", 1 },
	{ "count", &class_int, offsetof(nro_BallInfo, F_count), "I", 1 },
	{ "vy", &class_int, offsetof(nro_BallInfo, F_vy), "I", 1 },
	{ "vx", &class_int, offsetof(nro_BallInfo, F_vx), "I", 1 },
	{ "dir", &class_int, offsetof(nro_BallInfo, F_dir), "I", 1 },
	{ "idImg", &class_int, offsetof(nro_BallInfo, F_idImg), "I", 1 },
	{ "isPaint", &class_boolean, offsetof(nro_BallInfo, F_isPaint), "Z", 1 },
	{ "isDone", &class_boolean, offsetof(nro_BallInfo, F_isDone), "Z", 1 },
	{ "isSetImg", &class_boolean, offsetof(nro_BallInfo, F_isSetImg), "Z", 1 },
	{ "cFocus", &class_nro_Char, offsetof(nro_BallInfo, F_cFocus), "Lnro/Char;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_BallInfo, 0, "()V", 1 },
};

Class class_nro_BallInfo{
		.nativeName = (intptr_t) "nro/BallInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_BallInfo),
		.classVtable = (intptr_t) vtable_nro_BallInfo,
		.staticInitializer = (intptr_t) clinit_nro_BallInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_BallInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_BallInfo = registerClass(&class_nro_BallInfo);

}

