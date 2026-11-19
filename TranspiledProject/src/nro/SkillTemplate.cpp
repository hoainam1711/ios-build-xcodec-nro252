#include "nro/SkillTemplate.h"
#include "java/lang/Object.h"
#include "nro/SkillTemplate.h"
#include "java/lang/String.h"
#include "nro/Skill.h"

extern "C" {


void mark_nro_SkillTemplate(jobject object, jint mark, jint depth) {
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
	auto self = (nro_SkillTemplate *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_skills)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skills)->clazz)->markFunction)((jobject) self->F_skills, mark, depth + 1);
	if (self->F_damInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damInfo)->clazz)->markFunction)((jobject) self->F_damInfo, mark, depth + 1);
}

void clinit_nro_SkillTemplate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_SkillTemplate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SkillTemplate:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_SkillTemplate(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_nro_SkillTemplate_isBuffToPlayer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SkillTemplate:isBuffToPlayer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	if (((jint)((nro_SkillTemplate *) NULL_CHECK((frame[0].o)))->F_type) != (jint(2))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_SkillTemplate_isUseAlone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SkillTemplate:isUseAlone", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	if (((jint)((nro_SkillTemplate *) NULL_CHECK((frame[0].o)))->F_type) != (jint(3))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_SkillTemplate_isSkillSpec_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/SkillTemplate:isSkillSpec", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	if (((jint)((nro_SkillTemplate *) NULL_CHECK((frame[0].o)))->F_type) != (jint(4))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_nro_SkillTemplate[] {
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
	(void *) M_nro_SkillTemplate_isBuffToPlayer_R_boolean,
	(void *) M_nro_SkillTemplate_isUseAlone_R_boolean,
	(void *) M_nro_SkillTemplate_isSkillSpec_R_boolean,
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
	{ "isBuffToPlayer", "()Z" },
	{ "isUseAlone", "()Z" },
	{ "isSkillSpec", "()Z" },
};

static FieldMetadata fields[] {
	{ "id", &class_byte, offsetof(nro_SkillTemplate, F_id), "B", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_SkillTemplate, F_name), "Ljava/lang/String;", 1 },
	{ "maxPoint", &class_int, offsetof(nro_SkillTemplate, F_maxPoint), "I", 1 },
	{ "manaUseType", &class_int, offsetof(nro_SkillTemplate, F_manaUseType), "I", 1 },
	{ "type", &class_int, offsetof(nro_SkillTemplate, F_type), "I", 1 },
	{ "iconId", &class_int, offsetof(nro_SkillTemplate, F_iconId), "I", 1 },
	{ "description", getArrayClass(&class_java_lang_String, 1), offsetof(nro_SkillTemplate, F_description), "[Ljava/lang/String;", 1 },
	{ "skills", getArrayClass(&class_nro_Skill, 1), offsetof(nro_SkillTemplate, F_skills), "[Lnro/Skill;", 1 },
	{ "damInfo", &class_java_lang_String, offsetof(nro_SkillTemplate, F_damInfo), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_SkillTemplate, 0, "()V", 1 },
	{ "isBuffToPlayer", (intptr_t) M_nro_SkillTemplate_isBuffToPlayer_R_boolean, VTABLE_nro_SkillTemplate_isBuffToPlayer_R_boolean, "()Z", 17 },
	{ "isUseAlone", (intptr_t) M_nro_SkillTemplate_isUseAlone_R_boolean, VTABLE_nro_SkillTemplate_isUseAlone_R_boolean, "()Z", 17 },
	{ "isSkillSpec", (intptr_t) M_nro_SkillTemplate_isSkillSpec_R_boolean, VTABLE_nro_SkillTemplate_isSkillSpec_R_boolean, "()Z", 17 },
};

Class class_nro_SkillTemplate{
		.nativeName = (intptr_t) "nro/SkillTemplate",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_SkillTemplate),
		.classVtable = (intptr_t) vtable_nro_SkillTemplate,
		.staticInitializer = (intptr_t) clinit_nro_SkillTemplate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_SkillTemplate,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_SkillTemplate = registerClass(&class_nro_SkillTemplate);

}

