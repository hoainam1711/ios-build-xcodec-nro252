#include "nro/Skill.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "nro/SkillTemplate.h"
#include "java/lang/String.h"
#include "nro/Skill.h"

extern "C" {


void mark_nro_Skill(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Skill *) object;
	if (self->F_template)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_template)->clazz)->markFunction)((jobject) self->F_template, mark, depth + 1);
	if (self->F_moreInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moreInfo)->clazz)->markFunction)((jobject) self->F_moreInfo, mark, depth + 1);
}

void clinit_nro_Skill(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Skill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Skill:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Skill(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((nro_Skill *) NULL_CHECK((frame[0].o)))->F_paintCanNotUseSkill = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_Skill_strTimeReplay_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Skill:strTimeReplay", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	if ((((jint)((nro_Skill *) NULL_CHECK((frame[0].o)))->F_coolDown) % (1000)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (((jint)((nro_Skill *) NULL_CHECK((frame[0].o)))->F_coolDown) / (1000)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(22);
	frame[1].i = (((jint)((nro_Skill *) NULL_CHECK((frame[0].o)))->F_coolDown) % (1000));
	LINE_NUMBER(23);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)((nro_Skill *) NULL_CHECK((frame[0].o)))->F_coolDown) / (1000)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp += 1;
	if (((frame[1].i) % (100)) != 0) goto label_4;
	}
	{
	jint temp0 = (frame[1].i) / (100);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jint temp0 = (frame[1].i) / (10);
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Skill[] {
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
	(void *) M_nro_Skill_strTimeReplay_R_java_lang_String,
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
	{ "strTimeReplay", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "template", &class_nro_SkillTemplate, offsetof(nro_Skill, F_template), "Lnro/SkillTemplate;", 1 },
	{ "skillId", &class_short, offsetof(nro_Skill, F_skillId), "S", 1 },
	{ "point", &class_int, offsetof(nro_Skill, F_point), "I", 1 },
	{ "powRequire", &class_long, offsetof(nro_Skill, F_powRequire), "J", 1 },
	{ "coolDown", &class_int, offsetof(nro_Skill, F_coolDown), "I", 1 },
	{ "lastTimeUseThisSkill", &class_long, offsetof(nro_Skill, F_lastTimeUseThisSkill), "J", 1 },
	{ "dx", &class_int, offsetof(nro_Skill, F_dx), "I", 1 },
	{ "dy", &class_int, offsetof(nro_Skill, F_dy), "I", 1 },
	{ "manaUse", &class_int, offsetof(nro_Skill, F_manaUse), "I", 1 },
	{ "paintCanNotUseSkill", &class_boolean, offsetof(nro_Skill, F_paintCanNotUseSkill), "Z", 1 },
	{ "damage", &class_short, offsetof(nro_Skill, F_damage), "S", 1 },
	{ "moreInfo", &class_java_lang_String, offsetof(nro_Skill, F_moreInfo), "Ljava/lang/String;", 1 },
	{ "price", &class_short, offsetof(nro_Skill, F_price), "S", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Skill, 0, "()V", 1 },
	{ "strTimeReplay", (intptr_t) M_nro_Skill_strTimeReplay_R_java_lang_String, VTABLE_nro_Skill_strTimeReplay_R_java_lang_String, "()Ljava/lang/String;", 17 },
};

Class class_nro_Skill{
		.nativeName = (intptr_t) "nro/Skill",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Skill),
		.classVtable = (intptr_t) vtable_nro_Skill,
		.staticInitializer = (intptr_t) clinit_nro_Skill,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Skill,
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
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Skill = registerClass(&class_nro_Skill);

}

