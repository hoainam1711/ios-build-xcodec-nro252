#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_SaveData.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_SaveData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_AssetData.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_assets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assets)->clazz)->markFunction)((jobject) self->F_assets, mark, depth + 1);
	if (self->F_resources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resources)->clazz)->markFunction)((jobject) self->F_resources, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[0].o))->F_assets = (jref) sp[1].o;
	LINE_NUMBER(62);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_loadIndex = (jint(0));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[0].o))->F_assets = (jref) sp[1].o;
	LINE_NUMBER(68);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_loadIndex = (jint(0));
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_resources = (jref) (frame[1].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_saveAsset_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:saveAsset", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_resources;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetData_java_lang_String_java_lang_Class_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetData_java_lang_String_java_lang_Class_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(74);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_sharedAssets;
	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData);
	init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData_java_lang_String_java_lang_Class(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_sharedAssets;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_assets;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_save_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:save", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_loadAsset_R_com_badlogic_gdx_assets_AssetDescriptor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:loadAsset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_loadIndex;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_assets;
	if (temp0 != ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_sharedAssets;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[2].o))->F_loadIndex;
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[2].o))->F_loadIndex = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, temp3);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, sp[0].o));
	LINE_NUMBER(88);
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[1].o)))->F_filename;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[1].o)))->F_type;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_load_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_write_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"data"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_utils_ObjectMap)));
	LINE_NUMBER(98);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"indices"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int])(ctx, sp[2].o);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) getArrayClass(&class_int, 1))));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"data"_j))), (((jobject) &class_com_badlogic_gdx_utils_ObjectMap)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK(sp[0].o))->F_data = (jref) (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[1].o));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[0].o)))->F_assets;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"indices"_j))), (((jobject) getArrayClass(&class_int, 1))), (frame[2].o));
	((func_com_badlogic_gdx_utils_IntArray_addAll_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int])(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_int, 1), sp[1].o)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_write_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_saveAsset_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_save_java_lang_String_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_loadAsset_R_com_badlogic_gdx_assets_AssetDescriptor,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_load_java_lang_String_R_java_lang_Object,
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
	{ "write", "(Lcom/badlogic/gdx/utils/Json;)V" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V" },
	{ "saveAsset", "(Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "save", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "loadAsset", "()Lcom/badlogic/gdx/assets/AssetDescriptor;" },
	{ "load", "(Ljava/lang/String;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Json$Serializable, };

static FieldMetadata fields[] {
	{ "data", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, F_data), "Lcom/badlogic/gdx/utils/ObjectMap;", 0 },
	{ "assets", &class_com_badlogic_gdx_utils_IntArray, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, F_assets), "Lcom/badlogic/gdx/utils/IntArray;", 0 },
	{ "loadIndex", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, F_loadIndex), "I", 2 },
	{ "resources", &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, F_resources), "Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_com_badlogic_gdx_graphics_g3d_particles_ResourceData, 0, "(Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData;)V", 1 },
	{ "saveAsset", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_saveAsset_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_saveAsset_java_lang_String_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "save", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_save_java_lang_String_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_save_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 1 },
	{ "loadAsset", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_loadAsset_R_com_badlogic_gdx_assets_AssetDescriptor, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_loadAsset_R_com_badlogic_gdx_assets_AssetDescriptor, "()Lcom/badlogic/gdx/assets/AssetDescriptor;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_load_java_lang_String_R_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_load_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_write_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_write_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/utils/Json;)V", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData);

}

