#include "nro/Effect2.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "lib/mGraphics.h"
#include "nro/Effect2.h"

extern "C" {

jobject SF_nro_Effect2_vEffect3;
jobject SF_nro_Effect2_vEffect2;
jobject SF_nro_Effect2_vRemoveEffect2;
jobject SF_nro_Effect2_vEffect2Outside;
jobject SF_nro_Effect2_vAnimateEffect;
jobject SF_nro_Effect2_vEffectFeet;

void mark_nro_Effect2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Effect2_vEffect3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect2_vEffect3)->clazz)->markFunction)((jobject) SF_nro_Effect2_vEffect3, mark, depth + 1);
		if (SF_nro_Effect2_vEffect2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect2_vEffect2)->clazz)->markFunction)((jobject) SF_nro_Effect2_vEffect2, mark, depth + 1);
		if (SF_nro_Effect2_vRemoveEffect2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect2_vRemoveEffect2)->clazz)->markFunction)((jobject) SF_nro_Effect2_vRemoveEffect2, mark, depth + 1);
		if (SF_nro_Effect2_vEffect2Outside)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect2_vEffect2Outside)->clazz)->markFunction)((jobject) SF_nro_Effect2_vEffect2Outside, mark, depth + 1);
		if (SF_nro_Effect2_vAnimateEffect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect2_vAnimateEffect)->clazz)->markFunction)((jobject) SF_nro_Effect2_vAnimateEffect, mark, depth + 1);
		if (SF_nro_Effect2_vEffectFeet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Effect2_vEffectFeet)->clazz)->markFunction)((jobject) SF_nro_Effect2_vEffectFeet, mark, depth + 1);
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
	auto self = (nro_Effect2 *) object;
}

void init_nro_Effect2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Effect2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Effect2:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Effect2(ctx);
	{
	LINE_NUMBER(6);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vEffect3"_j))));
	clinit_nro_Effect2(ctx);
	SF_nro_Effect2_vEffect3 = sp[0].o;
	LINE_NUMBER(7);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vEffect2"_j))));
	clinit_nro_Effect2(ctx);
	SF_nro_Effect2_vEffect2 = sp[0].o;
	LINE_NUMBER(8);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vRemoveEff2"_j))));
	clinit_nro_Effect2(ctx);
	SF_nro_Effect2_vRemoveEffect2 = sp[0].o;
	LINE_NUMBER(9);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vEffect2Out"_j))));
	clinit_nro_Effect2(ctx);
	SF_nro_Effect2_vEffect2Outside = sp[0].o;
	LINE_NUMBER(10);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vAnimate"_j))));
	clinit_nro_Effect2(ctx);
	SF_nro_Effect2_vAnimateEffect = sp[0].o;
	LINE_NUMBER(11);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vEffectFeet"_j))));
	clinit_nro_Effect2(ctx);
	SF_nro_Effect2_vEffectFeet = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Effect2[] {
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
	(void *) nullptr,
	(void *) nullptr,
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
	{ "update", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "vEffect3", &class_nro_MyVector, (intptr_t) &SF_nro_Effect2_vEffect3, "Lnro/MyVector;", 9 },
	{ "vEffect2", &class_nro_MyVector, (intptr_t) &SF_nro_Effect2_vEffect2, "Lnro/MyVector;", 9 },
	{ "vRemoveEffect2", &class_nro_MyVector, (intptr_t) &SF_nro_Effect2_vRemoveEffect2, "Lnro/MyVector;", 9 },
	{ "vEffect2Outside", &class_nro_MyVector, (intptr_t) &SF_nro_Effect2_vEffect2Outside, "Lnro/MyVector;", 9 },
	{ "vAnimateEffect", &class_nro_MyVector, (intptr_t) &SF_nro_Effect2_vAnimateEffect, "Lnro/MyVector;", 9 },
	{ "vEffectFeet", &class_nro_MyVector, (intptr_t) &SF_nro_Effect2_vEffectFeet, "Lnro/MyVector;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Effect2, 0, "()V", 1 },
	{ "update", 0, VTABLE_nro_Effect2_update, "()V", 1025 },
	{ "paint", 0, VTABLE_nro_Effect2_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1025 },
	{ "<clinit>", (intptr_t) clinit_nro_Effect2, 0, "()V", 8 },
};

Class class_nro_Effect2{
		.nativeName = (intptr_t) "nro/Effect2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Effect2),
		.classVtable = (intptr_t) vtable_nro_Effect2,
		.staticInitializer = (intptr_t) clinit_nro_Effect2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Effect2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Effect2 = registerClass(&class_nro_Effect2);

}

