#include "com/badlogic/gdx/graphics/g2d/PolygonRegion.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegion.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PolygonRegion(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_PolygonRegion *) object;
	if (self->F_textureCoords)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureCoords)->clazz)->markFunction)((jobject) self->F_textureCoords, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_triangles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_triangles)->clazz)->markFunction)((jobject) self->F_triangles, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PolygonRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_PolygonRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_Array1_float_Array1_short(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegion:<init>", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_region = (jref) (frame[1].o);
	LINE_NUMBER(35);
	((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_vertices = (jref) (frame[2].o);
	LINE_NUMBER(36);
	((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_triangles = (jref) (frame[3].o);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK(sp[0].o))->F_textureCoords = (jref) sp[1].o;
	frame[4].o = sp[1].o;
	LINE_NUMBER(39);
	frame[5].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	frame[6].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(40);
	frame[7].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2) - (frame[5].f));
	LINE_NUMBER(41);
	frame[8].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2) - (frame[6].f));
	LINE_NUMBER(42);
	frame[9].i = ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_regionWidth);
	LINE_NUMBER(43);
	frame[10].i = ((jint)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_regionHeight);
	LINE_NUMBER(44);
	frame[11].i = (jint(0));
	frame[12].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_13:;
	{
	if ((frame[11].i) >= (frame[12].i)) goto label_14;
	}
	{
	LINE_NUMBER(45);
	ARRAY_ACCESS(jfloat, (frame[4].o), (frame[11].i)) = ((frame[5].f) + ((frame[7].f) * (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[11].i))) / (jfloat((frame[9].i))))));
	LINE_NUMBER(46);
	ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[11].i) + (jint(1)))) = ((frame[6].f) + ((frame[8].f) * ((jfloat(1)) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[11].i) + (jint(1))))) / (jfloat((frame[10].i)))))));
	LINE_NUMBER(44);
	INST_IINC(11, 2);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getVertices_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegion:getVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_vertices;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTriangles_R_Array1_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegion:getTriangles", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_triangles;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTextureCoords_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegion:getTextureCoords", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_textureCoords;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegion:getRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegion *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PolygonRegion[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTriangles_R_Array1_short,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTextureCoords_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion,
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
	{ "getVertices", "()[F" },
	{ "getTriangles", "()[S" },
	{ "getTextureCoords", "()[F" },
	{ "getRegion", "()Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
};

static FieldMetadata fields[] {
	{ "textureCoords", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegion, F_textureCoords), "[F", 16 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegion, F_vertices), "[F", 16 },
	{ "triangles", getArrayClass(&class_short, 1), offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegion, F_triangles), "[S", 16 },
	{ "region", &class_com_badlogic_gdx_graphics_g2d_TextureRegion, offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegion, F_region), "Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PolygonRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_Array1_float_Array1_short, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;[F[S)V", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getVertices_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegion_getVertices_R_Array1_float, "()[F", 1 },
	{ "getTriangles", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTriangles_R_Array1_short, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTriangles_R_Array1_short, "()[S", 1 },
	{ "getTextureCoords", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTextureCoords_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegion_getTextureCoords_R_Array1_float, "()[F", 1 },
	{ "getRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegion_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegion_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion, "()Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PolygonRegion{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PolygonRegion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PolygonRegion),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PolygonRegion,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PolygonRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PolygonRegion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PolygonRegion = registerClass(&class_com_badlogic_gdx_graphics_g2d_PolygonRegion);

}

