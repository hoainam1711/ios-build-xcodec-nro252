#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader.h"
#include "java/util/Iterator.h"
#include "java/lang/Float.h"
#include "java/io/BufferedReader.h"
#include "java/io/InputStream.h"
#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/InputStreamReader.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/io/Reader.h"
#include "com/badlogic/gdx/graphics/g3d/model/data/ModelMaterial.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g3d/loader/MtlLoader_ObjMaterial.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_loader_MtlLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_loader_MtlLoader *) object;
	if (self->F_materials)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_materials)->clazz)->markFunction)((jobject) self->F_materials, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_loader_MtlLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(333);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader *) NULL_CHECK(sp[0].o))->F_materials = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_load_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader:load", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial);
	init_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
label_6:;
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(345);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (4096));
	frame[5].o = sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(349);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (jint(0)));
	if (temp0 != (9)) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\s+"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(353);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	if (temp0 != 0) goto label_13;
	}
	LINE_NUMBER(354);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_13:;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jint(0)));
	if (temp0 != (35)) goto label_15;
	}
	LINE_NUMBER(356);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_15:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(359);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"newmtl"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader *) NULL_CHECK((frame[0].o)))->F_materials;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(363);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(364);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[4].o)))->F_materialName = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1))));
	LINE_NUMBER(365);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[4].o)))->F_materialName;
	sp[1].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[1].o, (46), (95));
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_materialName = (jref) sp[1].o;
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(367);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK((frame[4].o)))->F_materialName = (jref) (((jobject) createStringLiteral(ctx, u8"default"_j)));
	}
label_25:;
	{
	LINE_NUMBER(370);
	((func_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_reset])(ctx, (frame[4].o));
	LINE_NUMBER(371);
	goto label_27;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"ka"_j))));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color(ctx, (frame[0].o), (frame[3].o));
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_ambientColor = (jref) sp[1].o;
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"kd"_j))));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color(ctx, (frame[0].o), (frame[3].o));
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_diffuseColor = (jref) sp[1].o;
	goto label_27;
	}
label_30:;
	{
	LINE_NUMBER(375);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"ks"_j))));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color(ctx, (frame[0].o), (frame[3].o));
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_specularColor = (jref) sp[1].o;
	goto label_27;
	}
label_32:;
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"tr"_j))));
	if (temp0 != 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"d"_j))));
	if (temp0 == 0) goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_opacity = temp0;
	goto label_27;
	}
label_35:;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"ns"_j))));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_shininess = temp0;
	goto label_27;
	}
label_36:;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"map_d"_j))));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(382);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_alphaTexFilename = (jref) sp[1].o;
	goto label_27;
	}
label_38:;
	{
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"map_ka"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_ambientTexFilename = (jref) sp[1].o;
	goto label_27;
	}
label_40:;
	{
	LINE_NUMBER(385);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"map_kd"_j))));
	if (temp0 == 0) goto label_42;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_diffuseTexFilename = (jref) sp[1].o;
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(387);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"map_ks"_j))));
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_specularTexFilename = (jref) sp[1].o;
	goto label_27;
	}
label_44:;
	{
	LINE_NUMBER(389);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"map_ns"_j))));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial *) NULL_CHECK(sp[0].o))->F_shininessTexFilename = (jref) sp[1].o;
	}
label_27:;
	LINE_NUMBER(392);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_9:;
	{
	LINE_NUMBER(394);
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(397);
	goto label_47;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(395);
	frame[6].o = sp[0].o;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}
label_47:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial_build_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(401);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader *) NULL_CHECK((frame[0].o)))->F_materials;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader:parseColor", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(407);
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	frame[2].f = temp0;
	LINE_NUMBER(408);
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))));
	frame[3].f = temp1;
	LINE_NUMBER(409);
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))));
	frame[4].f = temp2;
	LINE_NUMBER(410);
	frame[5].f = (jfloat(1));
	LINE_NUMBER(411);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(412);
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))));
	frame[5].f = temp0;
	}
label_5:;
	{
	LINE_NUMBER(415);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/loader/MtlLoader:getMaterial", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader *) NULL_CHECK((frame[0].o)))->F_materials;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, sp[0].o));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[3].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	goto label_1;
label_2:;
	{
	LINE_NUMBER(421);
	clinit_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial);
	init_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(422);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK((frame[2].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(423);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial *) NULL_CHECK(sp[0].o))->F_diffuse = (jref) sp[1].o;
	LINE_NUMBER(424);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_loader_MtlLoader *) NULL_CHECK((frame[0].o)))->F_materials;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_loader_MtlLoader[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_load_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial,
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
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "parseColor", "([Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "getMaterial", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader$ObjMaterial,
};

static FieldMetadata fields[] {
	{ "materials", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader, F_materials), "Lcom/badlogic/gdx/utils/Array;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_loader_MtlLoader, 0, "()V", 0 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_load_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_load_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "parseColor", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_parseColor_Array1_java_lang_String_R_com_badlogic_gdx_graphics_Color, "([Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Color;", 2 },
	{ "getMaterial", (intptr_t) M_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, VTABLE_com_badlogic_gdx_graphics_g3d_loader_MtlLoader_getMaterial_java_lang_String_R_com_badlogic_gdx_graphics_g3d_model_data_ModelMaterial, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g3d/model/data/ModelMaterial;", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/loader/MtlLoader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_loader_MtlLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_loader_MtlLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_loader_MtlLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_loader_MtlLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_loader_MtlLoader = registerClass(&class_com_badlogic_gdx_graphics_g3d_loader_MtlLoader);

}

