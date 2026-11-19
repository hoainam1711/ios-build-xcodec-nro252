#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader_ObjMaterial.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelTexture.h"
#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader_ObjMaterial.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) object;
	if (self->F_materialName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_materialName)->clazz)->markFunction)((jobject) self->F_materialName, mark, depth + 1);
	if (self->F_ambientColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientColor)->clazz)->markFunction)((jobject) self->F_ambientColor, mark, depth + 1);
	if (self->F_diffuseColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_diffuseColor)->clazz)->markFunction)((jobject) self->F_diffuseColor, mark, depth + 1);
	if (self->F_specularColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_specularColor)->clazz)->markFunction)((jobject) self->F_specularColor, mark, depth + 1);
	if (self->F_alphaTexFilename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_alphaTexFilename)->clazz)->markFunction)((jobject) self->F_alphaTexFilename, mark, depth + 1);
	if (self->F_ambientTexFilename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientTexFilename)->clazz)->markFunction)((jobject) self->F_ambientTexFilename, mark, depth + 1);
	if (self->F_diffuseTexFilename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_diffuseTexFilename)->clazz)->markFunction)((jobject) self->F_diffuseTexFilename, mark, depth + 1);
	if (self->F_shininessTexFilename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shininessTexFilename)->clazz)->markFunction)((jobject) self->F_shininessTexFilename, mark, depth + 1);
	if (self->F_specularTexFilename)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_specularTexFilename)->clazz)->markFunction)((jobject) self->F_specularTexFilename, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader$ObjMaterial:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(441);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(429);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_materialName = (jref) (((jobject) createStringLiteral(ctx, u8"default"_j)));
	LINE_NUMBER(442);
	((func_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset])(ctx, (frame[0].o));
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader$ObjMaterial:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(447);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_materialName;
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_id = (jref) sp[1].o;
	LINE_NUMBER(448);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_ambientColor;
	sp += 1;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	{
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_ambientColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_ambient = (jref) sp[1].o;
	LINE_NUMBER(449);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_diffuseColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_diffuse = (jref) sp[1].o;
	LINE_NUMBER(450);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_specularColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_specular = (jref) sp[1].o;
	LINE_NUMBER(451);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_opacity = ((jfloat)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_opacity);
	LINE_NUMBER(452);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_shininess = ((jfloat)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_shininess);
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_alphaTexFilename;
	M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (9));
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_ambientTexFilename;
	M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(4)));
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_diffuseTexFilename;
	M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(2)));
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_specularTexFilename;
	M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(5)));
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_shininessTexFilename;
	M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (6));
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader$ObjMaterial:addTexture", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(463);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(464);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelTexture(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(465);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[4].o)))->F_usage = (frame[3].i);
	LINE_NUMBER(466);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelTexture *) NULL_CHECK((frame[4].o)))->F_fileName = (jref) (frame[2].o);
	LINE_NUMBER(467);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_textures;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[1].o)))->F_textures;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	}
label_1:;
	LINE_NUMBER(470);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader$ObjMaterial:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_ambientColor = (jref) (jobject(nullptr));
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_diffuseColor = (jref) sp[1].o;
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_specularColor = (jref) sp[1].o;
	LINE_NUMBER(476);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(1));
	LINE_NUMBER(477);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_shininess = (jfloat(0));
	LINE_NUMBER(478);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_alphaTexFilename = (jref) (jobject(nullptr));
	LINE_NUMBER(479);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_ambientTexFilename = (jref) (jobject(nullptr));
	LINE_NUMBER(480);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_diffuseTexFilename = (jref) (jobject(nullptr));
	LINE_NUMBER(481);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_shininessTexFilename = (jref) (jobject(nullptr));
	LINE_NUMBER(482);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[0].o)))->F_specularTexFilename = (jref) (jobject(nullptr));
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset,
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
	{ "build", "()Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;" },
	{ "addTexture", "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;Ljava/lang/String;I)V" },
	{ "reset", "()V" },
};

static FieldMetadata fields[] {
	{ "materialName", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_materialName), "Ljava/lang/String;", 0 },
	{ "ambientColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_ambientColor), "Lcom/badlogic/gdx/graphics/Color;", 0 },
	{ "diffuseColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_diffuseColor), "Lcom/badlogic/gdx/graphics/Color;", 0 },
	{ "specularColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_specularColor), "Lcom/badlogic/gdx/graphics/Color;", 0 },
	{ "opacity", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_opacity), "F", 0 },
	{ "shininess", &class_float, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_shininess), "F", 0 },
	{ "alphaTexFilename", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_alphaTexFilename), "Ljava/lang/String;", 0 },
	{ "ambientTexFilename", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_ambientTexFilename), "Ljava/lang/String;", 0 },
	{ "diffuseTexFilename", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_diffuseTexFilename), "Ljava/lang/String;", 0 },
	{ "shininessTexFilename", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_shininessTexFilename), "Ljava/lang/String;", 0 },
	{ "specularTexFilename", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, F_specularTexFilename), "Ljava/lang/String;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial, 0, "()V", 1 },
	{ "build", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, "()Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;", 1 },
	{ "addTexture", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int, VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_addTexture_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial_java_lang_String_int, "(Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;Ljava/lang/String;I)V", 2 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset, VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/loader/MtlLoader$ObjMaterial",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial = registerClass(&class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial);

}

