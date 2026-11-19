#include "nro/EffectPaint.h"
#include "java/lang/Object.h"
#include "nro/EffectPaint.h"
#include "nro/Mob.h"
#include "nro/ItemObject.h"
#include "nro/EffectCharPaint.h"
#include "nro/Char.h"

extern "C" {


void mark_nro_EffectPaint(jobject object, jint mark, jint depth) {
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
	auto self = (nro_EffectPaint *) object;
	if (self->F_eMob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eMob)->clazz)->markFunction)((jobject) self->F_eMob, mark, depth + 1);
	if (self->F_eChar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eChar)->clazz)->markFunction)((jobject) self->F_eChar, mark, depth + 1);
	if (self->F_arrEfInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrEfInfo)->clazz)->markFunction)((jobject) self->F_arrEfInfo, mark, depth + 1);
}

void clinit_nro_EffectPaint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_EffectPaint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectPaint:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectPaint(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_nro_EffectPaint_getImgId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectPaint:getImgId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK((frame[0].o)))->F_arrEfInfo;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	popStackFrame(ctx);
	return ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_EffectPaint *) NULL_CHECK((frame[0].o)))->F_index)))))->F_idImg);
	}

	popStackFrame(ctx);
}

void *vtable_nro_EffectPaint[] {
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
	(void *) M_nro_EffectPaint_getImgId_R_int,
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
	{ "getImgId", "()I" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(nro_EffectPaint, F_index), "I", 1 },
	{ "eMob", &class_nro_Mob, offsetof(nro_EffectPaint, F_eMob), "Lnro/Mob;", 1 },
	{ "eChar", &class_nro_Char, offsetof(nro_EffectPaint, F_eChar), "Lnro/Char;", 1 },
	{ "arrEfInfo", &class_nro_EffectCharPaint, offsetof(nro_EffectPaint, F_arrEfInfo), "Lnro/EffectCharPaint;", 1 },
	{ "isFly", &class_boolean, offsetof(nro_EffectPaint, F_isFly), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_EffectPaint, 0, "()V", 1 },
	{ "getImgId", (intptr_t) M_nro_EffectPaint_getImgId_R_int, VTABLE_nro_EffectPaint_getImgId_R_int, "()I", 17 },
};

Class class_nro_EffectPaint{
		.nativeName = (intptr_t) "nro/EffectPaint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_EffectPaint),
		.classVtable = (intptr_t) vtable_nro_EffectPaint,
		.staticInitializer = (intptr_t) clinit_nro_EffectPaint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_EffectPaint,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_EffectPaint = registerClass(&class_nro_EffectPaint);

}

