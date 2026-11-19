#include "nro/Member.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/Member.h"

extern "C" {


void mark_nro_Member(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Member *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_powerPoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_powerPoint)->clazz)->markFunction)((jobject) self->F_powerPoint, mark, depth + 1);
	if (self->F_joinTime)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_joinTime)->clazz)->markFunction)((jobject) self->F_joinTime, mark, depth + 1);
}

void clinit_nro_Member(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Member(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Member:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Member(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((nro_Member *) NULL_CHECK((frame[0].o)))->F_headICON = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Member_getRole_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Member:getRole", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Member(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(19);
	if ((frame[0].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(20);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_clan_leader;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(21);
	if ((frame[0].i) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(22);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_clan_coleader;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(24);
	if ((frame[0].i) != (jint(2))) goto label_5;
	}
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_member;
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Member[] {
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
	{ "ID", &class_int, offsetof(nro_Member, F_ID), "I", 1 },
	{ "head", &class_short, offsetof(nro_Member, F_head), "S", 1 },
	{ "headICON", &class_short, offsetof(nro_Member, F_headICON), "S", 1 },
	{ "leg", &class_short, offsetof(nro_Member, F_leg), "S", 1 },
	{ "body", &class_short, offsetof(nro_Member, F_body), "S", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_Member, F_name), "Ljava/lang/String;", 1 },
	{ "role", &class_byte, offsetof(nro_Member, F_role), "B", 1 },
	{ "powerPoint", &class_java_lang_String, offsetof(nro_Member, F_powerPoint), "Ljava/lang/String;", 1 },
	{ "donate", &class_int, offsetof(nro_Member, F_donate), "I", 1 },
	{ "receive_donate", &class_int, offsetof(nro_Member, F_receive_donate), "I", 1 },
	{ "curClanPoint", &class_int, offsetof(nro_Member, F_curClanPoint), "I", 1 },
	{ "clanPoint", &class_int, offsetof(nro_Member, F_clanPoint), "I", 1 },
	{ "joinTime", &class_java_lang_String, offsetof(nro_Member, F_joinTime), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Member, 0, "()V", 1 },
	{ "getRole", (intptr_t) SM_nro_Member_getRole_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
};

Class class_nro_Member{
		.nativeName = (intptr_t) "nro/Member",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Member),
		.classVtable = (intptr_t) vtable_nro_Member,
		.staticInitializer = (intptr_t) clinit_nro_Member,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Member,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Member = registerClass(&class_nro_Member);

}

