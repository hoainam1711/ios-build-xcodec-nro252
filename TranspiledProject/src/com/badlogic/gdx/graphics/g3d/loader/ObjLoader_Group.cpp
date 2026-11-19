#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_Group.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader_Group.h"
#include "com/badlogic/gdx/graphics/g3d/Material.h"
#include "com/badlogic/gdx/graphics/g3d/loader/ObjLoader.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_materialName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_materialName)->clazz)->markFunction)((jobject) self->F_materialName, mark, depth + 1);
	if (self->F_faces)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_faces)->clazz)->markFunction)((jobject) self->F_faces, mark, depth + 1);
	if (self->F_mat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mat)->clazz)->markFunction)((jobject) self->F_mat, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/ObjLoader$Group:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(324);
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (200));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[0].o))->F_faces = (jref) sp[1].o;
	LINE_NUMBER(326);
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[0].o)))->F_numFaces = (jint(0));
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g3d_Material(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_Material);
	init_com_badlogic_gdx_graphics_g3d_Material_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK(sp[0].o))->F_mat = (jref) sp[1].o;
	LINE_NUMBER(328);
	((com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group *) NULL_CHECK((frame[0].o)))->F_materialName = (jref) (((jobject) createStringLiteral(ctx, u8"default"_j)));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group[] {
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
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_name), "Ljava/lang/String;", 16 },
	{ "materialName", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_materialName), "Ljava/lang/String;", 0 },
	{ "faces", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_faces), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "numFaces", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_numFaces), "I", 0 },
	{ "hasNorms", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_hasNorms), "Z", 0 },
	{ "hasUVs", &class_boolean, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_hasUVs), "Z", 0 },
	{ "mat", &class_com_badlogic_gdx_graphics_g3d_Material, offsetof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group, F_mat), "Lcom/badlogic/gdx/graphics/g3d/Material;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
};

Class class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/loader/ObjLoader$Group",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group = registerClass(&class_com_badlogic_gdx_graphics_g3d_loader_ObjLoader$Group);

}

