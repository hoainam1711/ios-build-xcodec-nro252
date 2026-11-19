#include "nro/Clan.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/Clan.h"

extern "C" {


void mark_nro_Clan(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Clan *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_slogan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_slogan)->clazz)->markFunction)((jobject) self->F_slogan, mark, depth + 1);
	if (self->F_powerPoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_powerPoint)->clazz)->markFunction)((jobject) self->F_powerPoint, mark, depth + 1);
	if (self->F_leaderName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_leaderName)->clazz)->markFunction)((jobject) self->F_leaderName, mark, depth + 1);
}

void clinit_nro_Clan(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Clan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Clan:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Clan(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((nro_Clan *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(7);
	((nro_Clan *) NULL_CHECK((frame[0].o)))->F_slogan = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(10);
	((nro_Clan *) NULL_CHECK((frame[0].o)))->F_currMember = (jint(0));
	LINE_NUMBER(11);
	((nro_Clan *) NULL_CHECK((frame[0].o)))->F_maxMember = (50);
	LINE_NUMBER(13);
	((nro_Clan *) NULL_CHECK((frame[0].o)))->F_leaderName = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(14);
	((nro_Clan *) NULL_CHECK((frame[0].o)))->F_level = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Clan[] {
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
	{ "ID", &class_int, offsetof(nro_Clan, F_ID), "I", 1 },
	{ "imgID", &class_int, offsetof(nro_Clan, F_imgID), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_Clan, F_name), "Ljava/lang/String;", 1 },
	{ "slogan", &class_java_lang_String, offsetof(nro_Clan, F_slogan), "Ljava/lang/String;", 1 },
	{ "date", &class_int, offsetof(nro_Clan, F_date), "I", 1 },
	{ "powerPoint", &class_java_lang_String, offsetof(nro_Clan, F_powerPoint), "Ljava/lang/String;", 1 },
	{ "currMember", &class_int, offsetof(nro_Clan, F_currMember), "I", 1 },
	{ "maxMember", &class_int, offsetof(nro_Clan, F_maxMember), "I", 1 },
	{ "leaderID", &class_int, offsetof(nro_Clan, F_leaderID), "I", 1 },
	{ "leaderName", &class_java_lang_String, offsetof(nro_Clan, F_leaderName), "Ljava/lang/String;", 1 },
	{ "level", &class_int, offsetof(nro_Clan, F_level), "I", 1 },
	{ "clanPoint", &class_int, offsetof(nro_Clan, F_clanPoint), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Clan, 0, "()V", 1 },
};

Class class_nro_Clan{
		.nativeName = (intptr_t) "nro/Clan",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Clan),
		.classVtable = (intptr_t) vtable_nro_Clan,
		.staticInitializer = (intptr_t) clinit_nro_Clan,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Clan,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Clan = registerClass(&class_nro_Clan);

}

