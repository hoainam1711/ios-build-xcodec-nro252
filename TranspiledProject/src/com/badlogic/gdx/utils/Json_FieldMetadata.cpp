#include "com/badlogic/gdx/utils/Json_FieldMetadata.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/utils/Json_FieldMetadata.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/lang/Class.h"
#include "java/util/Map.h"
#include "com/badlogic/gdx/utils/reflect/Field.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Json$FieldMetadata(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Json$FieldMetadata *) object;
	if (self->F_field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field)->clazz)->markFunction)((jobject) self->F_field, mark, depth + 1);
	if (self->F_elementType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementType)->clazz)->markFunction)((jobject) self->F_elementType, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Json$FieldMetadata(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Json$FieldMetadata_com_badlogic_gdx_utils_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Json$FieldMetadata:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Json$FieldMetadata(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1273);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1274);
	((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK((frame[0].o)))->F_field = (jref) (frame[1].o);
	LINE_NUMBER(1275);
	sp[0].o = ((jobject) &class_com_badlogic_gdx_utils_ObjectMap);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = ((jobject) &class_java_util_Map);
	sp[1].o = frame[1].o;
	LINE_NUMBER(1276);
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getType_R_java_lang_Class])(ctx, sp[1].o);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_reflect_ClassReflection_isAssignableFrom_java_lang_Class_java_lang_Class_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_3:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1277);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Field_getElementType_int_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_getElementType_int_R_java_lang_Class])(ctx, (frame[1].o), (frame[2].i));
	((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK(sp[0].o))->F_elementType = (jref) sp[1].o;
	LINE_NUMBER(1278);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, (frame[1].o), (((jobject) &class_java_lang_Deprecated)));
	((com_badlogic_gdx_utils_Json$FieldMetadata *) NULL_CHECK(sp[0].o))->F_deprecated = temp0;
	LINE_NUMBER(1279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Json$FieldMetadata[] {
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
	{ "field", &class_com_badlogic_gdx_utils_reflect_Field, offsetof(com_badlogic_gdx_utils_Json$FieldMetadata, F_field), "Lcom/badlogic/gdx/utils/reflect/Field;", 16 },
	{ "elementType", &class_java_lang_Class, offsetof(com_badlogic_gdx_utils_Json$FieldMetadata, F_elementType), "Ljava/lang/Class;", 0 },
	{ "deprecated", &class_boolean, offsetof(com_badlogic_gdx_utils_Json$FieldMetadata, F_deprecated), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Json$FieldMetadata_com_badlogic_gdx_utils_reflect_Field, 0, "(Lcom/badlogic/gdx/utils/reflect/Field;)V", 1 },
};

Class class_com_badlogic_gdx_utils_Json$FieldMetadata{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Json$FieldMetadata",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Json$FieldMetadata),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Json$FieldMetadata,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Json$FieldMetadata,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Json$FieldMetadata,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Json,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Json$FieldMetadata = registerClass(&class_com_badlogic_gdx_utils_Json$FieldMetadata);

}

