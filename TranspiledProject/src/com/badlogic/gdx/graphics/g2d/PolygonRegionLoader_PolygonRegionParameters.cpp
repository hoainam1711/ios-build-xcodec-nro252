#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader_PolygonRegionParameters.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader_PolygonRegionParameters.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) object;
	if (self->F_texturePrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texturePrefix)->clazz)->markFunction)((jobject) self->F_texturePrefix, mark, depth + 1);
	if (self->F_textureExtensions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureExtensions)->clazz)->markFunction)((jobject) self->F_textureExtensions, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[0].o)))->F_texturePrefix = (jref) (((jobject) createStringLiteral(ctx, u8"i "_j)));
	LINE_NUMBER(47);
	((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[0].o)))->F_readerBuffer = (1024);
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (14));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"png"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"PNG"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"jpeg"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"JPEG"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"jpg"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"JPG"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (6)) = (((jobject) createStringLiteral(ctx, u8"cim"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (7)) = (((jobject) createStringLiteral(ctx, u8"CIM"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (8)) = (((jobject) createStringLiteral(ctx, u8"etc1"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (9)) = (((jobject) createStringLiteral(ctx, u8"ETC1"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (10)) = (((jobject) createStringLiteral(ctx, u8"ktx"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (11)) = (((jobject) createStringLiteral(ctx, u8"KTX"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (12)) = (((jobject) createStringLiteral(ctx, u8"zktx"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (13)) = (((jobject) createStringLiteral(ctx, u8"ZKTX"_j)));
	((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK(sp[0].o))->F_textureExtensions = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters[] {
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
	{ "texturePrefix", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, F_texturePrefix), "Ljava/lang/String;", 1 },
	{ "readerBuffer", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, F_readerBuffer), "I", 1 },
	{ "textureExtensions", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, F_textureExtensions), "[Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters = registerClass(&class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters);

}

