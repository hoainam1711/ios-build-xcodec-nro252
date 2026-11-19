#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_3.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Boolean.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/utils/JsonValue.h"
#include "com/badlogic/gdx/utils/Json_ReadOnlySerializer.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_3.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Json$ReadOnlySerializer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) object;
	if (self->F_val$skinFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$skinFile)->clazz)->markFunction)((jobject) self->F_val$skinFile, mark, depth + 1);
	if (self->F_val$skin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$skin)->clazz)->markFunction)((jobject) self->F_val$skin, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$3:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(548);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) NULL_CHECK((frame[0].o)))->F_val$skinFile = (jref) (frame[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) NULL_CHECK((frame[0].o)))->F_val$skin = (jref) (frame[3].o);
	init_com_badlogic_gdx_utils_Json$ReadOnlySerializer(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$3:read", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"file"_j))), (((jobject) &class_java_lang_String)), (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(551);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"scaledSize"_j));
	clinit_java_lang_Float(ctx);
	sp[2].o = (jobject)SF_java_lang_Float_TYPE;
	sp[3].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (checkCast(ctx, &class_java_lang_Float, sp[0].o)));
	frame[5].f = temp0;
	LINE_NUMBER(552);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flip"_j));
	sp[2].o = ((jobject) &class_java_lang_Boolean);
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	frame[6].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(553);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"markupEnabled"_j));
	sp[2].o = ((jobject) &class_java_lang_Boolean);
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	frame[7].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(554);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"useIntegerPositions"_j));
	sp[2].o = ((jobject) &class_java_lang_Boolean);
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_readValue_java_lang_String_java_lang_Class_java_lang_Object_com_badlogic_gdx_utils_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	frame[8].o = (checkCast(ctx, &class_java_lang_Boolean, sp[0].o));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) NULL_CHECK((frame[0].o)))->F_val$skinFile;
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, (frame[4].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(557);
	jint temp1 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[9].o));
	if (temp1 != 0) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	frame[9].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_12;
	}
	{
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Font file not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) NULL_CHECK((frame[0].o)))->F_val$skin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegions_java_lang_String_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegions_java_lang_String_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(565);
	if ((frame[12].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(566);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData);
	sp[2].o = frame[9].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[6].o));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, sp[2].o, temp0);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean(ctx, sp[0].o, sp[1].o, (frame[12].o), (jint(1)));
	frame[11].o = sp[0].o;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin$3 *) NULL_CHECK((frame[0].o)))->F_val$skin;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[10].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion)));
	frame[13].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(569);
	if ((frame[13].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(570);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	sp[1].o = frame[9].o;
	sp[2].o = frame[13].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[6].o));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	frame[11].o = sp[0].o;
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[9].o));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(573);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[14].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(574);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	sp[1].o = frame[9].o;
	sp[2].o = frame[14].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[6].o));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	frame[11].o = sp[0].o;
	goto label_17;
	}
label_23:;
	{
	LINE_NUMBER(576);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	sp[1].o = frame[9].o;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[6].o));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, sp[1].o, temp0);
	frame[11].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[11].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = temp0;
	LINE_NUMBER(580);
	sp[0].o = frame[11].o;
	jint temp1 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[8].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setUseIntegerPositions_boolean])(ctx, sp[0].o, temp1);
	LINE_NUMBER(582);
	if ((floatCompare((frame[5].f), (jfloat(-1.0f)), -1)) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[11].o));
	jfloat temp0 = frame[5].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float])(ctx, (frame[11].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float])(ctx, sp[0].o, (temp0 / temp1));
	}
label_28:;
	LINE_NUMBER(583);
	INST_ALOAD(11);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(584);
	frame[11].o = sp[0].o;
	LINE_NUMBER(585);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading bitmap font: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[11].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin$3:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$3[] {
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
	(void *) M_com_badlogic_gdx_utils_Json$ReadOnlySerializer_write_com_badlogic_gdx_utils_Json_java_lang_Object_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
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
	{ "write", "(Lcom/badlogic/gdx/utils/Json;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "read", "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
};

static FieldMetadata fields[] {
	{ "val$skinFile", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$3, F_val$skinFile), "Lcom/badlogic/gdx/files/FileHandle;", 4112 },
	{ "val$skin", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$3, F_val$skin), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin$3, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 0 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_read_com_badlogic_gdx_utils_Json_com_badlogic_gdx_utils_JsonValue_java_lang_Class_R_java_lang_Object, "(Lcom/badlogic/gdx/utils/Json;Lcom/badlogic/gdx/utils/JsonValue;Ljava/lang/Class;)Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Skin$3{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Skin$3",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Json$ReadOnlySerializer,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Skin$3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin$3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Skin$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Skin$3 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Skin$3);

}

