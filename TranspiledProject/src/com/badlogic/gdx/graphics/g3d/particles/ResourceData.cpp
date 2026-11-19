#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/utils/Json_Serializable.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_SaveData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_Configurable.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData.h"
#include "com/badlogic/gdx/graphics/g3d/particles/ResourceData_AssetData.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_particles_ResourceData *) object;
	if (self->F_uniqueData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniqueData)->clazz)->markFunction)((jobject) self->F_uniqueData, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_sharedAssets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sharedAssets)->clazz)->markFunction)((jobject) self->F_sharedAssets, mark, depth + 1);
	if (self->F_resource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resource)->clazz)->markFunction)((jobject) self->F_resource, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_particles_ResourceData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(151);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_uniqueData = (jref) sp[1].o;
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	jint temp0 = jint(1);
	jint temp1 = jint(3);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_sharedAssets = (jref) sp[1].o;
	LINE_NUMBER(155);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_currentLoadIndex = (jint(0));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g3d_particles_ResourceData_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	init_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx, (frame[0].o));
	LINE_NUMBER(160);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_resource = (jref) (frame[1].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetData_java_lang_String_java_lang_Class_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:getAssetData", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(164);
	frame[3].i = (jint(0));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_sharedAssets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, sp[0].o));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[5].o)))->F_filename;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[5].o)))->F_type;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_5:;
	{
	LINE_NUMBER(169);
	INST_IINC(3, 1);
	LINE_NUMBER(170);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetDescriptors_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:getAssetDescriptors", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_sharedAssets;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, sp[0].o));
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[3].o)))->F_filename;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData *) NULL_CHECK((frame[3].o)))->F_type;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(178);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssets_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:getAssets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_sharedAssets;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:createSaveData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData);
	init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:createSaveData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData);
	init_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_uniqueData;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Key already used, data must be unique, use a different key"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_uniqueData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:getSaveData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[1].o))->F_currentLoadIndex;
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[1].o))->F_currentLoadIndex = (temp0 + (jint(1)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:getSaveData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_uniqueData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_write_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unique"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_uniqueData;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_utils_ObjectMap)));
	LINE_NUMBER(214);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"data"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_utils_Array)), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData)));
	LINE_NUMBER(215);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"assets"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_sharedAssets;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g3d_particles_ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object])(ctx, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jobject) getArrayClass(&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, 1))));
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"resource"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_resource;
	((func_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_writeValue_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, (jobject(nullptr)));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"unique"_j))), (((jobject) &class_com_badlogic_gdx_utils_ObjectMap)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_uniqueData = (jref) (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[1].o));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_uniqueData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, sp[0].o))))->F_resources = (jref) (frame[0].o);
	LINE_NUMBER(224);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"data"_j))), (((jobject) &class_com_badlogic_gdx_utils_Array)), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_data = (jref) (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, sp[0].o));
	LINE_NUMBER(228);
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData *) NULL_CHECK((frame[4].o)))->F_resources = (jref) (frame[0].o);
	LINE_NUMBER(229);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK((frame[0].o)))->F_sharedAssets;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"assets"_j))), (((jobject) &class_com_badlogic_gdx_utils_Array)), (((jobject) &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData)), (frame[2].o));
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o)));
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"resource"_j))), (jobject(nullptr)), (frame[2].o));
	((com_badlogic_gdx_graphics_g3d_particles_ResourceData *) NULL_CHECK(sp[0].o))->F_resource = (jref) sp[1].o;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ResourceData_lambda$write$1_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:lambda$write$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g3d_particles_ResourceData_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/particles/ResourceData:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_particles_ResourceData[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_write_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetData_java_lang_String_java_lang_Class_R_int,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetDescriptors_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssets_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
	(void *) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
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
	{ "getAssetData", "(Ljava/lang/String;Ljava/lang/Class;)I" },
	{ "getAssetDescriptors", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getAssets", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "createSaveData", "()Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;" },
	{ "createSaveData", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;" },
	{ "getSaveData", "()Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;" },
	{ "getSaveData", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Json$Serializable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData,
	&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData,
	&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData$Configurable,
};

static FieldMetadata fields[] {
	{ "uniqueData", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData, F_uniqueData), "Lcom/badlogic/gdx/utils/ObjectMap;", 2 },
	{ "data", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData, F_data), "Lcom/badlogic/gdx/utils/Array;", 2 },
	{ "sharedAssets", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData, F_sharedAssets), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "currentLoadIndex", &class_int, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData, F_currentLoadIndex), "I", 2 },
	{ "resource", &class_java_lang_Object, offsetof(com_badlogic_gdx_graphics_g3d_particles_ResourceData, F_resource), "Ljava/lang/Object;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ResourceData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_particles_ResourceData_java_lang_Object, 0, "(Ljava/lang/Object;)V", 1 },
	{ "getAssetData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetData_java_lang_String_java_lang_Class_R_int, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetData_java_lang_String_java_lang_Class_R_int, "(Ljava/lang/String;Ljava/lang/Class;)I", 0 },
	{ "getAssetDescriptors", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetDescriptors_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssetDescriptors_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getAssets", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssets_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getAssets_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "createSaveData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, "()Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;", 1 },
	{ "createSaveData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_createSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;", 1 },
	{ "getSaveData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, "()Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;", 1 },
	{ "getSaveData", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_getSaveData_java_lang_String_R_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_write_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_write_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/utils/Json;)V", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_graphics_g3d_particles_ResourceData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, VTABLE_com_badlogic_gdx_graphics_g3d_particles_ResourceData_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;)V", 1 },
	{ "lambda$write$1", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ResourceData_lambda$write$1_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ResourceData$AssetData, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$AssetData;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_graphics_g3d_particles_ResourceData_lambda$new$0_int_R_Array1_com_badlogic_gdx_graphics_g3d_particles_ResourceData$SaveData, 0, "(I)[Lcom/badlogic/gdx/graphics/g3d/particles/ResourceData$SaveData;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g3d_particles_ResourceData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/particles/ResourceData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_particles_ResourceData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_particles_ResourceData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_particles_ResourceData = registerClass(&class_com_badlogic_gdx_graphics_g3d_particles_ResourceData);

}

