#include "nro/ClanImage.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "java/lang/String.h"
#include "java/util/Vector.h"
#include "nro/mHashTable.h"
#include "nro/Service.h"
#include "nro/ClanImage.h"

extern "C" {

jobject SF_nro_ClanImage_vClanImage;
jobject SF_nro_ClanImage_idImages;

void mark_nro_ClanImage(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ClanImage_vClanImage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClanImage_vClanImage)->clazz)->markFunction)((jobject) SF_nro_ClanImage_vClanImage, mark, depth + 1);
		if (SF_nro_ClanImage_idImages)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClanImage_idImages)->clazz)->markFunction)((jobject) SF_nro_ClanImage_idImages, mark, depth + 1);
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
	auto self = (nro_ClanImage *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_idImage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idImage)->clazz)->markFunction)((jobject) self->F_idImage, mark, depth + 1);
}

void init_nro_ClanImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanImage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanImage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ClanImage_addClanImage_nro_ClanImage(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanImage:addClanImage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanImage(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_clanImage_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_clanImage_short])(ctx, sp[0].o, (jshort(((jint)((nro_ClanImage *) NULL_CHECK((frame[0].o)))->F_ID))));
	LINE_NUMBER(14);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClanImage_getClanImage_short_R_nro_ClanImage(jcontext ctx, jshort param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanImage:getClanImage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanImage(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(18);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(20);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_ClanImage, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_ClanImage *) NULL_CHECK(sp[0].o))->F_ID) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(18);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_nro_ClanImage_isExistClanImage_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanImage:isExistClanImage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanImage(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(29);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(30);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_vClanImage;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	if (((jint)((nro_ClanImage *) NULL_CHECK((checkCast(ctx, &class_nro_ClanImage, sp[0].o))))->F_ID) != (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(29);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_nro_ClanImage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClanImage:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClanImage(ctx);
	{
	LINE_NUMBER(9);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vClanImage"_j))));
	clinit_nro_ClanImage(ctx);
	SF_nro_ClanImage_vClanImage = sp[0].o;
	LINE_NUMBER(10);
	clinit_nro_mHashTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_mHashTable);
	init_nro_mHashTable_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"h id images"_j))));
	clinit_nro_ClanImage(ctx);
	SF_nro_ClanImage_idImages = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ClanImage[] {
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
	{ "ID", &class_int, offsetof(nro_ClanImage, F_ID), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_ClanImage, F_name), "Ljava/lang/String;", 1 },
	{ "idImage", getArrayClass(&class_short, 1), offsetof(nro_ClanImage, F_idImage), "[S", 1 },
	{ "xu", &class_int, offsetof(nro_ClanImage, F_xu), "I", 1 },
	{ "luong", &class_int, offsetof(nro_ClanImage, F_luong), "I", 1 },
	{ "vClanImage", &class_nro_MyVector, (intptr_t) &SF_nro_ClanImage_vClanImage, "Lnro/MyVector;", 9 },
	{ "idImages", &class_nro_mHashTable, (intptr_t) &SF_nro_ClanImage_idImages, "Lnro/mHashTable;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ClanImage, 0, "()V", 1 },
	{ "addClanImage", (intptr_t) SM_nro_ClanImage_addClanImage_nro_ClanImage, 0, "(Lnro/ClanImage;)V", 9 },
	{ "getClanImage", (intptr_t) SM_nro_ClanImage_getClanImage_short_R_nro_ClanImage, 0, "(S)Lnro/ClanImage;", 9 },
	{ "isExistClanImage", (intptr_t) SM_nro_ClanImage_isExistClanImage_int_R_boolean, 0, "(I)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_ClanImage, 0, "()V", 8 },
};

Class class_nro_ClanImage{
		.nativeName = (intptr_t) "nro/ClanImage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ClanImage),
		.classVtable = (intptr_t) vtable_nro_ClanImage,
		.staticInitializer = (intptr_t) clinit_nro_ClanImage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ClanImage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ClanImage = registerClass(&class_nro_ClanImage);

}

