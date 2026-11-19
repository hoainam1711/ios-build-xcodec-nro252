#include "nro/Point.h"
#include "java/lang/Object.h"
#include "nro/FrameImage.h"
#include "lib/mGraphics.h"
#include "nro/Point.h"

extern "C" {


void mark_nro_Point(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Point *) object;
	if (self->F_fraImgEff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraImgEff)->clazz)->markFunction)((jobject) self->F_fraImgEff, mark, depth + 1);
	if (self->F_fraImgEff_2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraImgEff_2)->clazz)->markFunction)((jobject) self->F_fraImgEff_2, mark, depth + 1);
	if (self->F_mpaintone_Arrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mpaintone_Arrow)->clazz)->markFunction)((jobject) self->F_mpaintone_Arrow, mark, depth + 1);
	if (self->F_mImageArrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mImageArrow)->clazz)->markFunction)((jobject) self->F_mImageArrow, mark, depth + 1);
	if (self->F_mXoayArrow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mXoayArrow)->clazz)->markFunction)((jobject) self->F_mXoayArrow, mark, depth + 1);
}

void clinit_nro_Point(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Point(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Point:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Point(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((nro_Point *) NULL_CHECK((frame[0].o)))->F_isRemove = (jint(0));
	LINE_NUMBER(19);
	((nro_Point *) NULL_CHECK((frame[0].o)))->F_isSmall = (jint(0));
	LINE_NUMBER(20);
	((nro_Point *) NULL_CHECK((frame[0].o)))->F_isPaint = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (11);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (9);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (8);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (23);
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (22);
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (21);
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (19);
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (18);
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (20)) = (16);
	ARRAY_ACCESS(jbyte, sp[1].o, (21)) = (15);
	ARRAY_ACCESS(jbyte, sp[1].o, (22)) = (14);
	ARRAY_ACCESS(jbyte, sp[1].o, (23)) = (13);
	((nro_Point *) NULL_CHECK(sp[0].o))->F_mpaintone_Arrow = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (20)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (21)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (22)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (23)) = (jint(2));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_mImageArrow = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (24));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(4));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (jint(5));
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (20)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (21)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (22)) = (6);
	ARRAY_ACCESS(jbyte, sp[1].o, (23)) = (jint(2));
	((nro_Point *) NULL_CHECK(sp[0].o))->F_mXoayArrow = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Point_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Point:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_color = (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_color) + (jint(1)));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_x) + ((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_v));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	((nro_Point *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Point *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_vMax));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_nro_Point_setFrameAngle_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Point:setFrameAngle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	if ((frame[1].i) <= (15)) goto label_1;
	}
	{
	if ((frame[1].i) > (345)) goto label_1;
	}
	{
	LINE_NUMBER(36);
	jint temp0 = (((frame[1].i) - (15)) / (15)) + (jint(1));
	frame[1].i = temp0;
	if (temp0 <= (24)) goto label_3;
	}
	{
	LINE_NUMBER(37);
	frame[1].i = (24);
	}
label_3:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[0].o)))->F_mpaintone_Arrow;
	frame[2].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(42);
	frame[2].i = (12);
	}
label_6:;
	{
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Point:paint_Arrow", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(49);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(50);
	jint temp0 = ((jint)((nro_FrameImage *) NULL_CHECK((frame[2].o)))->F_nFrame) / (jint(3));
	frame[3].i = temp0;
	if (temp0 > 0) goto label_3;
	}
	{
	LINE_NUMBER(51);
	frame[3].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(55);
	if (((jint)((nro_FrameImage *) NULL_CHECK((frame[2].o)))->F_nFrame) <= (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(56);
	if (((((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_color) / (jint(3))) % (jint(2))) != 0) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	INST_ICONST(3);
label_8:;
	INST_ISTORE(5);
	goto label_10;
label_5:;
	{
	LINE_NUMBER(58);
	frame[5].i = (((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_color) % (frame[3].i));
	}
label_10:;
	{
	LINE_NUMBER(61);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Point *) NULL_CHECK((frame[0].o)))->F_mImageArrow;
	frame[3].i = ((temp0 * ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_vx)))) + (frame[5].i));
	LINE_NUMBER(62);
	if (((jint)((nro_FrameImage *) NULL_CHECK((frame[2].o)))->F_nFrame) >= (jint(3))) goto label_12;
	}
	{
	LINE_NUMBER(63);
	frame[3].i = ((((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_color) / (jint(3))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[2].o)))->F_nFrame));
	}
label_12:;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp2 = (jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((nro_Point *) NULL_CHECK((frame[0].o)))->F_mXoayArrow;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, temp0, temp1, temp2, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_Point *) NULL_CHECK((frame[0].o)))->F_vx))), (jint(3)), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Point[] {
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
	(void *) M_nro_Point_update,
	(void *) M_nro_Point_setFrameAngle_int_R_int,
	(void *) M_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean,
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
	{ "setFrameAngle", "(I)I" },
	{ "paint_Arrow", "(Llib/mGraphics;Lnro/FrameImage;IZ)V" },
};

static FieldMetadata fields[] {
	{ "type", &class_byte, offsetof(nro_Point, F_type), "B", 1 },
	{ "x", &class_int, offsetof(nro_Point, F_x), "I", 1 },
	{ "y", &class_int, offsetof(nro_Point, F_y), "I", 1 },
	{ "g", &class_int, offsetof(nro_Point, F_g), "I", 1 },
	{ "v", &class_int, offsetof(nro_Point, F_v), "I", 1 },
	{ "vMax", &class_int, offsetof(nro_Point, F_vMax), "I", 1 },
	{ "w", &class_int, offsetof(nro_Point, F_w), "I", 1 },
	{ "h", &class_int, offsetof(nro_Point, F_h), "I", 1 },
	{ "color", &class_int, offsetof(nro_Point, F_color), "I", 1 },
	{ "limitY", &class_int, offsetof(nro_Point, F_limitY), "I", 1 },
	{ "vx", &class_int, offsetof(nro_Point, F_vx), "I", 1 },
	{ "id", &class_int, offsetof(nro_Point, F_id), "I", 1 },
	{ "isRemove", &class_boolean, offsetof(nro_Point, F_isRemove), "Z", 1 },
	{ "isSmall", &class_boolean, offsetof(nro_Point, F_isSmall), "Z", 1 },
	{ "isPaint", &class_boolean, offsetof(nro_Point, F_isPaint), "Z", 1 },
	{ "fraImgEff", &class_nro_FrameImage, offsetof(nro_Point, F_fraImgEff), "Lnro/FrameImage;", 1 },
	{ "fraImgEff_2", &class_nro_FrameImage, offsetof(nro_Point, F_fraImgEff_2), "Lnro/FrameImage;", 1 },
	{ "mpaintone_Arrow", getArrayClass(&class_byte, 1), offsetof(nro_Point, F_mpaintone_Arrow), "[B", 2 },
	{ "mImageArrow", getArrayClass(&class_byte, 1), offsetof(nro_Point, F_mImageArrow), "[B", 1 },
	{ "mXoayArrow", getArrayClass(&class_byte, 1), offsetof(nro_Point, F_mXoayArrow), "[B", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Point, 0, "()V", 1 },
	{ "update", (intptr_t) M_nro_Point_update, VTABLE_nro_Point_update, "()V", 17 },
	{ "setFrameAngle", (intptr_t) M_nro_Point_setFrameAngle_int_R_int, VTABLE_nro_Point_setFrameAngle_int_R_int, "(I)I", 17 },
	{ "paint_Arrow", (intptr_t) M_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean, VTABLE_nro_Point_paint_Arrow_lib_mGraphics_nro_FrameImage_int_boolean, "(Llib/mGraphics;Lnro/FrameImage;IZ)V", 17 },
};

Class class_nro_Point{
		.nativeName = (intptr_t) "nro/Point",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Point),
		.classVtable = (intptr_t) vtable_nro_Point,
		.staticInitializer = (intptr_t) clinit_nro_Point,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Point,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Point = registerClass(&class_nro_Point);

}

