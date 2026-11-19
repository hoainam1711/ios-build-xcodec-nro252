#include "nro/ItemTemplate.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "nro/ItemTemplate.h"

extern "C" {


void mark_nro_ItemTemplate(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ItemTemplate *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
}

void clinit_nro_ItemTemplate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_ItemTemplate_short_byte_byte_java_lang_String_java_lang_String_byte_int_short_short_boolean(jcontext ctx, jobject self, jshort param0, jbyte param1, jbyte param2, jobject param3, jobject param4, jbyte param5, jint param6, jshort param7, jshort param8, jbool param9) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTemplate:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTemplate(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(16);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_type = (frame[2].i);
	LINE_NUMBER(17);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_gender = (frame[3].i);
	LINE_NUMBER(18);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[4].o);
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_nro_Res_changeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(20);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_description = (jref) (frame[5].o);
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_description;
	sp[1].o = (jobject)SM_nro_Res_changeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_description = (jref) sp[1].o;
	LINE_NUMBER(22);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_strRequire = (frame[7].i);
	LINE_NUMBER(23);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_iconID = (frame[8].i);
	LINE_NUMBER(24);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_part = (frame[9].i);
	LINE_NUMBER(25);
	((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_isUpToUp = (frame[10].i);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ItemTemplate[] {
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
	{ "id", &class_short, offsetof(nro_ItemTemplate, F_id), "S", 1 },
	{ "type", &class_byte, offsetof(nro_ItemTemplate, F_type), "B", 1 },
	{ "gender", &class_byte, offsetof(nro_ItemTemplate, F_gender), "B", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_ItemTemplate, F_name), "Ljava/lang/String;", 1 },
	{ "description", &class_java_lang_String, offsetof(nro_ItemTemplate, F_description), "Ljava/lang/String;", 1 },
	{ "iconID", &class_short, offsetof(nro_ItemTemplate, F_iconID), "S", 1 },
	{ "part", &class_short, offsetof(nro_ItemTemplate, F_part), "S", 1 },
	{ "isUpToUp", &class_boolean, offsetof(nro_ItemTemplate, F_isUpToUp), "Z", 1 },
	{ "strRequire", &class_int, offsetof(nro_ItemTemplate, F_strRequire), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ItemTemplate_short_byte_byte_java_lang_String_java_lang_String_byte_int_short_short_boolean, 0, "(SBBLjava/lang/String;Ljava/lang/String;BISSZ)V", 1 },
};

Class class_nro_ItemTemplate{
		.nativeName = (intptr_t) "nro/ItemTemplate",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ItemTemplate),
		.classVtable = (intptr_t) vtable_nro_ItemTemplate,
		.staticInitializer = (intptr_t) clinit_nro_ItemTemplate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ItemTemplate,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ItemTemplate = registerClass(&class_nro_ItemTemplate);

}

