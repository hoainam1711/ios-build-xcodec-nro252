#include "nro/InfoPhuBan.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "nro/InfoPhuBan.h"
#include "main/GameCanvas.h"

extern "C" {


void mark_nro_InfoPhuBan(jobject object, jint mark, jint depth) {
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
	auto self = (nro_InfoPhuBan *) object;
	if (self->F_nameTeam1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameTeam1)->clazz)->markFunction)((jobject) self->F_nameTeam1, mark, depth + 1);
	if (self->F_nameTeam2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameTeam2)->clazz)->markFunction)((jobject) self->F_nameTeam2, mark, depth + 1);
}

void clinit_nro_InfoPhuBan(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_InfoPhuBan_int_short_java_lang_String_java_lang_String_int_short(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jobject param3, jint param4, jshort param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoPhuBan:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoPhuBan(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_maxLife = (jint(1));
	LINE_NUMBER(22);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vecInfo chientruong"_j))));
	LINE_NUMBER(23);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_type_PB = (frame[1].i);
	LINE_NUMBER(24);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_idmapPaint = (frame[2].i);
	LINE_NUMBER(25);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_nameTeam1 = (jref) (frame[3].o);
	LINE_NUMBER(26);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_nameTeam2 = (jref) (frame[4].o);
	LINE_NUMBER(27);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_timeSecond = (frame[6].i);
	LINE_NUMBER(28);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_timeStart = (clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow);
	LINE_NUMBER(29);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_maxPoint = (frame[5].i);
	LINE_NUMBER(30);
	if (((jint)((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_maxPoint) > 0) goto label_11;
	}
	{
	LINE_NUMBER(31);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_maxPoint = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(34);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_pointTeam1 = (jint(0));
	LINE_NUMBER(35);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_pointTeam2 = (jint(0));
	LINE_NUMBER(36);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_color_1 = (jint(4));
	LINE_NUMBER(37);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_color_2 = (6);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_InfoPhuBan_updateTime_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoPhuBan:updateTime", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(41);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_type_PB = (frame[1].i);
	LINE_NUMBER(42);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_lifeTeam1 = (frame[2].i);
	LINE_NUMBER(43);
	((nro_InfoPhuBan *) NULL_CHECK((frame[0].o)))->F_lifeTeam2 = (frame[3].i);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_InfoPhuBan[] {
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
	(void *) M_nro_InfoPhuBan_updateTime_int_int_int,
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
	{ "updateTime", "(III)V" },
};

static FieldMetadata fields[] {
	{ "type_PB", &class_int, offsetof(nro_InfoPhuBan, F_type_PB), "I", 1 },
	{ "maxPoint", &class_int, offsetof(nro_InfoPhuBan, F_maxPoint), "I", 1 },
	{ "pointTeam1", &class_int, offsetof(nro_InfoPhuBan, F_pointTeam1), "I", 1 },
	{ "pointTeam2", &class_int, offsetof(nro_InfoPhuBan, F_pointTeam2), "I", 1 },
	{ "color_1", &class_int, offsetof(nro_InfoPhuBan, F_color_1), "I", 1 },
	{ "color_2", &class_int, offsetof(nro_InfoPhuBan, F_color_2), "I", 1 },
	{ "maxLife", &class_int, offsetof(nro_InfoPhuBan, F_maxLife), "I", 1 },
	{ "lifeTeam1", &class_int, offsetof(nro_InfoPhuBan, F_lifeTeam1), "I", 1 },
	{ "lifeTeam2", &class_int, offsetof(nro_InfoPhuBan, F_lifeTeam2), "I", 1 },
	{ "nameTeam1", &class_java_lang_String, offsetof(nro_InfoPhuBan, F_nameTeam1), "Ljava/lang/String;", 1 },
	{ "nameTeam2", &class_java_lang_String, offsetof(nro_InfoPhuBan, F_nameTeam2), "Ljava/lang/String;", 1 },
	{ "idmapPaint", &class_short, offsetof(nro_InfoPhuBan, F_idmapPaint), "S", 1 },
	{ "timeSecond", &class_short, offsetof(nro_InfoPhuBan, F_timeSecond), "S", 1 },
	{ "timeStart", &class_long, offsetof(nro_InfoPhuBan, F_timeStart), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_InfoPhuBan_int_short_java_lang_String_java_lang_String_int_short, 0, "(ISLjava/lang/String;Ljava/lang/String;IS)V", 1 },
	{ "updateTime", (intptr_t) M_nro_InfoPhuBan_updateTime_int_int_int, VTABLE_nro_InfoPhuBan_updateTime_int_int_int, "(III)V", 17 },
};

Class class_nro_InfoPhuBan{
		.nativeName = (intptr_t) "nro/InfoPhuBan",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_InfoPhuBan),
		.classVtable = (intptr_t) vtable_nro_InfoPhuBan,
		.staticInitializer = (intptr_t) clinit_nro_InfoPhuBan,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_InfoPhuBan,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_InfoPhuBan = registerClass(&class_nro_InfoPhuBan);

}

