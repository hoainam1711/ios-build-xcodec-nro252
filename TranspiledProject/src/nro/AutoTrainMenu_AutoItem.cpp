#include "nro/AutoTrainMenu_AutoItem.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/AutoTrainMenu.h"
#include "nro/AutoTrainMenu_AutoItem.h"

extern "C" {


void mark_nro_AutoTrainMenu$AutoItem(jobject object, jint mark, jint depth) {
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
	auto self = (nro_AutoTrainMenu$AutoItem *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_nro_AutoTrainMenu$AutoItem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_AutoTrainMenu$AutoItem_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/AutoTrainMenu$AutoItem:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_AutoTrainMenu$AutoItem(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(152);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(153);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(154);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_templateId = (frame[2].i);
	LINE_NUMBER(155);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_iconId = (frame[3].i);
	LINE_NUMBER(156);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_buffIconId = (frame[4].i);
	LINE_NUMBER(157);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(0));
	LINE_NUMBER(158);
	((nro_AutoTrainMenu$AutoItem *) NULL_CHECK((frame[0].o)))->F_lastUseTime = (jlong(0));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_AutoTrainMenu$AutoItem[] {
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
	{ "name", &class_java_lang_String, offsetof(nro_AutoTrainMenu$AutoItem, F_name), "Ljava/lang/String;", 1 },
	{ "templateId", &class_int, offsetof(nro_AutoTrainMenu$AutoItem, F_templateId), "I", 1 },
	{ "iconId", &class_int, offsetof(nro_AutoTrainMenu$AutoItem, F_iconId), "I", 1 },
	{ "buffIconId", &class_int, offsetof(nro_AutoTrainMenu$AutoItem, F_buffIconId), "I", 1 },
	{ "enabled", &class_boolean, offsetof(nro_AutoTrainMenu$AutoItem, F_enabled), "Z", 1 },
	{ "lastUseTime", &class_long, offsetof(nro_AutoTrainMenu$AutoItem, F_lastUseTime), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_AutoTrainMenu$AutoItem_java_lang_String_int_int_int, 0, "(Ljava/lang/String;III)V", 1 },
};

Class class_nro_AutoTrainMenu$AutoItem{
		.nativeName = (intptr_t) "nro/AutoTrainMenu$AutoItem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_AutoTrainMenu$AutoItem),
		.classVtable = (intptr_t) vtable_nro_AutoTrainMenu$AutoItem,
		.staticInitializer = (intptr_t) clinit_nro_AutoTrainMenu$AutoItem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_AutoTrainMenu$AutoItem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_nro_AutoTrainMenu,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_AutoTrainMenu$AutoItem = registerClass(&class_nro_AutoTrainMenu$AutoItem);

}

