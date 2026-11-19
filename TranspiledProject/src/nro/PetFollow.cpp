#include "nro/PetFollow.h"
#include "nro/PetFollow.h"
#include "java/lang/Object.h"
#include "nro/Res.h"
#include "main/GameCanvas.h"
#include "nro/Info.h"
#include "nro/ServerEffect.h"

extern "C" {


void mark_nro_PetFollow(jobject object, jint mark, jint depth) {
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
	auto self = (nro_PetFollow *) object;
	if (self->F_frame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frame)->clazz)->markFunction)((jobject) self->F_frame, mark, depth + 1);
}

void clinit_nro_PetFollow(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_nro_PetFollow_SetImg_int_Array1_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PetFollow:SetImg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(24);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(25);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_fimg = (frame[1].i);
	LINE_NUMBER(26);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_frame = (jref) (frame[2].o);
	LINE_NUMBER(27);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_wimg = (frame[3].i);
	LINE_NUMBER(28);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_himg = (frame[4].i);
	}
label_1:;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_nro_PetFollow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PetFollow:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PetFollow(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	clinit_nro_Info(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Info);
	init_nro_Info(ctx, sp[0].o);
	LINE_NUMBER(34);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_fimg = (jint(-1));
	LINE_NUMBER(35);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_wimg = (jint(0));
	LINE_NUMBER(36);
	((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_himg = (jint(0));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_frame = (jref) sp[1].o;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (jint(3)));
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_c = temp0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_PetFollow_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PetFollow:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	jint temp0 = 60;
	jint temp1 = (jint)((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_cmx;
	jint temp2 = ((jint)((nro_PetFollow *) NULL_CHECK((frame[0].o)))->F_cmy) + (jint(3));
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp += 3;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, sp[0].i, sp[1].i, (sp[2].i + sp[3].i), (jint(1)));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_PetFollow[] {
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
	(void *) M_nro_PetFollow_SetImg_int_Array1_int_int_int,
	(void *) M_nro_PetFollow_remove,
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
	{ "SetImg", "(I[III)V" },
	{ "remove", "()V" },
};

static FieldMetadata fields[] {
	{ "smallID", &class_short, offsetof(nro_PetFollow, F_smallID), "S", 1 },
	{ "dir", &class_int, offsetof(nro_PetFollow, F_dir), "I", 1 },
	{ "c", &class_int, offsetof(nro_PetFollow, F_c), "I", 1 },
	{ "cmtoY", &class_int, offsetof(nro_PetFollow, F_cmtoY), "I", 1 },
	{ "cmy", &class_int, offsetof(nro_PetFollow, F_cmy), "I", 1 },
	{ "f", &class_int, offsetof(nro_PetFollow, F_f), "I", 1 },
	{ "g", &class_int, offsetof(nro_PetFollow, F_g), "I", 1 },
	{ "cmtoX", &class_int, offsetof(nro_PetFollow, F_cmtoX), "I", 1 },
	{ "cmx", &class_int, offsetof(nro_PetFollow, F_cmx), "I", 1 },
	{ "j", &class_int, offsetof(nro_PetFollow, F_j), "I", 1 },
	{ "k", &class_int, offsetof(nro_PetFollow, F_k), "I", 1 },
	{ "fimg", &class_int, offsetof(nro_PetFollow, F_fimg), "I", 1 },
	{ "wimg", &class_int, offsetof(nro_PetFollow, F_wimg), "I", 1 },
	{ "himg", &class_int, offsetof(nro_PetFollow, F_himg), "I", 1 },
	{ "frame", getArrayClass(&class_int, 1), offsetof(nro_PetFollow, F_frame), "[I", 0 },
	{ "count", &class_int, offsetof(nro_PetFollow, F_count), "I", 0 },
};

static MethodMetadata methods[] {
	{ "SetImg", (intptr_t) M_nro_PetFollow_SetImg_int_Array1_int_int_int, VTABLE_nro_PetFollow_SetImg_int_Array1_int_int_int, "(I[III)V", 17 },
	{ "<init>", (intptr_t) init_nro_PetFollow, 0, "()V", 1 },
	{ "remove", (intptr_t) M_nro_PetFollow_remove, VTABLE_nro_PetFollow_remove, "()V", 17 },
};

Class class_nro_PetFollow{
		.nativeName = (intptr_t) "nro/PetFollow",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_PetFollow),
		.classVtable = (intptr_t) vtable_nro_PetFollow,
		.staticInitializer = (intptr_t) clinit_nro_PetFollow,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_PetFollow,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_PetFollow = registerClass(&class_nro_PetFollow);

}

