#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "java/lang/reflect/Constructor.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/nio/ByteOrder.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/utils/ObjectIntMap.h"
#include "com/badlogic/gdx/utils/ObjectMap_Keys.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/math/Matrix3.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/math/Vector4.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_POSITION_ATTRIBUTE;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_NORMAL_ATTRIBUTE;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_COLOR_ATTRIBUTE;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TEXCOORD_ATTRIBUTE;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TANGENT_ATTRIBUTE;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BINORMAL_ATTRIBUTE;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BONEWEIGHT_ATTRIBUTE;
jbool SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_pedantic;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
jobject SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_intbuf;

void mark_com_badlogic_gdx_graphics_glutils_ShaderProgram(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_POSITION_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_POSITION_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_POSITION_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_NORMAL_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_NORMAL_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_NORMAL_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_COLOR_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_COLOR_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_COLOR_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TEXCOORD_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TEXCOORD_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TEXCOORD_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TANGENT_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TANGENT_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TANGENT_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BINORMAL_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BINORMAL_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BINORMAL_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BONEWEIGHT_ATTRIBUTE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BONEWEIGHT_ATTRIBUTE)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BONEWEIGHT_ATTRIBUTE, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_intbuf)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_intbuf)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_intbuf, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_glutils_ShaderProgram *) object;
	if (self->F_log)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_log)->clazz)->markFunction)((jobject) self->F_log, mark, depth + 1);
	if (self->F_uniforms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniforms)->clazz)->markFunction)((jobject) self->F_uniforms, mark, depth + 1);
	if (self->F_uniformTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformTypes)->clazz)->markFunction)((jobject) self->F_uniformTypes, mark, depth + 1);
	if (self->F_uniformSizes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformSizes)->clazz)->markFunction)((jobject) self->F_uniformSizes, mark, depth + 1);
	if (self->F_uniformNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformNames)->clazz)->markFunction)((jobject) self->F_uniformNames, mark, depth + 1);
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_attributeTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeTypes)->clazz)->markFunction)((jobject) self->F_attributeTypes, mark, depth + 1);
	if (self->F_attributeSizes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeSizes)->clazz)->markFunction)((jobject) self->F_attributeSizes, mark, depth + 1);
	if (self->F_attributeNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeNames)->clazz)->markFunction)((jobject) self->F_attributeNames, mark, depth + 1);
	if (self->F_matrix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_matrix)->clazz)->markFunction)((jobject) self->F_matrix, mark, depth + 1);
	if (self->F_vertexShaderSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexShaderSource)->clazz)->markFunction)((jobject) self->F_vertexShaderSource, mark, depth + 1);
	if (self->F_fragmentShaderSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fragmentShaderSource)->clazz)->markFunction)((jobject) self->F_fragmentShaderSource, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_glutils_ShaderProgram_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(156);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(98);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_log = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_uniforms = (jref) sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_uniformTypes = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_uniformSizes = (jref) sp[1].o;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_attributes = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_attributeTypes = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectIntMap);
	init_com_badlogic_gdx_utils_ObjectIntMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_attributeSizes = (jref) sp[1].o;
	LINE_NUMBER(149);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_refCount = (jint(0));
	LINE_NUMBER(871);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_params = (jref) sp[1].o;
	LINE_NUMBER(872);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(157);
	if ((frame[1].o) != nullptr) goto label_12;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vertex shader must not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(158);
	if ((frame[2].o) != nullptr) goto label_13;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fragment shader must not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(160);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_14;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(161);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_15;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(163);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_vertexShaderSource = (jref) (frame[1].o);
	LINE_NUMBER(164);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_fragmentShaderSource = (jref) (frame[2].o);
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newFloatBuffer_int_R_java_nio_FloatBuffer(ctx, (16));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_matrix = (jref) sp[1].o;
	LINE_NUMBER(167);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_compileShaders_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(169);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributes(ctx, (frame[0].o));
	LINE_NUMBER(170);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniforms(ctx, (frame[0].o));
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_addManagedShader_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, sp[0].o, sp[1].o, (frame[0].o));
	}
label_20:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ShaderProgram_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String])(ctx, (frame[2].o));
	init_com_badlogic_gdx_graphics_glutils_ShaderProgram_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_compileShaders_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:compileShaders", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_loadShader_int_java_lang_String_R_int(ctx, (frame[0].o), (jint(35633)), (frame[1].o));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_vertexShaderHandle = temp0;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_loadShader_int_java_lang_String_R_int(ctx, (frame[0].o), (jint(35632)), (frame[2].o));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_fragmentShaderHandle = temp1;
	LINE_NUMBER(187);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_vertexShaderHandle) == (jint(-1))) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_fragmentShaderHandle) != (jint(-1))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(188);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_isCompiled = (jint(0));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_createProgram_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_createProgram_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_linkProgram_int_R_int(ctx, sp[1].o, temp0);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_program = temp1;
	LINE_NUMBER(193);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(194);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_isCompiled = (jint(0));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(198);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_isCompiled = (jint(1));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_loadShader_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:loadShader", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(202);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glCreateShader_int_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCreateShader_int_R_int, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(206);
	if ((frame[5].i) != 0) goto label_4;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(208);
	((func_com_badlogic_gdx_graphics_GL20_glShaderSource_int_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glShaderSource_int_java_lang_String, (frame[3].o)))(ctx, (frame[3].o), (frame[5].i), (frame[2].o));
	LINE_NUMBER(209);
	((func_com_badlogic_gdx_graphics_GL20_glCompileShader_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCompileShader_int, (frame[3].o)))(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(210);
	((func_com_badlogic_gdx_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetShaderiv_int_int_java_nio_IntBuffer, (frame[3].o)))(ctx, (frame[3].o), (frame[5].i), (jint(35713)), (frame[4].o));
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, (frame[4].o), (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(213);
	if ((frame[6].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetShaderInfoLog_int_R_java_lang_String, (frame[3].o)))(ctx, (frame[3].o), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(218);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[1].o))->F_log;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[2].o);
	jobject temp0 = sp[0].o;
	sp[0].o = sp[1].o;
	jobject temp1 = sp[1].o;
	sp[1].o = temp0;
	sp += 2;
	if ((frame[1].i) != (jint(35633))) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Vertex shader\n"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Fragment shader:\n"_j));
label_13:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(219);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[1].o))->F_log;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[1].o))->F_log = (jref) sp[0].o;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_createProgram_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:createProgram", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[1].o = sp[0].o;
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glCreateProgram_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glCreateProgram_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(230);
	if ((frame[2].i) == 0) goto label_3;
	}
	INST_ILOAD(2);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_linkProgram_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:linkProgram", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(234);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[2].o = sp[0].o;
	LINE_NUMBER(235);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(237);
	((func_com_badlogic_gdx_graphics_GL20_glAttachShader_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glAttachShader_int_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_vertexShaderHandle));
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_graphics_GL20_glAttachShader_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glAttachShader_int_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_fragmentShaderHandle));
	LINE_NUMBER(239);
	((func_com_badlogic_gdx_graphics_GL20_glLinkProgram_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glLinkProgram_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(241);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (jint(4)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(245);
	((func_com_badlogic_gdx_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i), (jint(35714)), (frame[4].o));
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, (frame[4].o), (jint(0)));
	frame[5].i = temp0;
	LINE_NUMBER(247);
	if ((frame[5].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String, sp[1].o))(ctx, sp[1].o, (frame[1].i));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getLog", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_isCompiled) == 0) goto label_1;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetProgramInfoLog_int_R_java_lang_String, sp[1].o))(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_log;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_log;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:isCompiled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_isCompiled);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:fetchAttributeLocation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (-2));
	frame[3].i = temp0;
	if (temp0 != (-2)) goto label_3;
	}
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int, (frame[2].o)))(ctx, (frame[2].o), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	}
label_3:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:fetchUniformLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx), (jint)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_pedantic));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:fetchUniformLocation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniforms;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (-2));
	frame[3].i = temp0;
	if (temp0 != (-2)) goto label_2;
	}
	{
	LINE_NUMBER(302);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(303);
	if ((frame[3].i) != (jint(-1))) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_5;
	{
	LINE_NUMBER(304);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_isCompiled) == 0) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No uniform with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' in shader"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(305);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"An attempted fetch uniform from uncompiled shader \n"_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(317);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(318);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(319);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(320);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1i_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1i_int_int, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i), (frame[2].i));
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(324);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(325);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(326);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1i_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1i_int_int, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(335);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[4].o = sp[0].o;
	LINE_NUMBER(336);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(337);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(338);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2i_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2i_int_int_int, (frame[4].o)))(ctx, (frame[4].o), (frame[5].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(342);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[4].o = sp[0].o;
	LINE_NUMBER(343);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(344);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2i_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2i_int_int_int, (frame[4].o)))(ctx, (frame[4].o), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(354);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(355);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(356);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(357);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3i_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3i_int_int_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(361);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(362);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(363);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3i_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3i_int_int_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(374);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[6].o = sp[0].o;
	LINE_NUMBER(375);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(376);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(377);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4i_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4i_int_int_int_int_int, (frame[6].o)))(ctx, (frame[6].o), (frame[7].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformi", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(381);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[6].o = sp[0].o;
	LINE_NUMBER(382);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(383);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4i_int_int_int_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4i_int_int_int_int_int, (frame[6].o)))(ctx, (frame[6].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_java_lang_String_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform1iv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(387);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(388);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(389);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(390);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[4].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_int_Array1_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform1iv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(394);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(395);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(396);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), (frame[4].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_java_lang_String_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform2iv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(400);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(401);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(402);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(403);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), ((frame[4].i) / (jint(2))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_int_Array1_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform2iv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(407);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(408);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(409);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (jint(2))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_java_lang_String_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform3iv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(413);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(414);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(415);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(416);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), ((frame[4].i) / (jint(3))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_int_Array1_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform3iv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(420);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(421);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(422);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (jint(3))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_java_lang_String_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform4iv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(426);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(427);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(428);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(429);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), ((frame[4].i) / (jint(4))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_int_Array1_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform4iv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(433);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(434);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(435);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4iv_int_int_Array1_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4iv_int_int_Array1_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (jint(4))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(443);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(444);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(445);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(446);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1f_int_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1f_int_float, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i), (frame[2].f));
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(450);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[3].o = sp[0].o;
	LINE_NUMBER(451);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(452);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1f_int_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1f_int_float, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i), (frame[2].f));
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(461);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[4].o = sp[0].o;
	LINE_NUMBER(462);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(463);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(464);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2f_int_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2f_int_float_float, (frame[4].o)))(ctx, (frame[4].o), (frame[5].i), (frame[2].f), (frame[3].f));
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(468);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[4].o = sp[0].o;
	LINE_NUMBER(469);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(470);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2f_int_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2f_int_float_float, (frame[4].o)))(ctx, (frame[4].o), (frame[1].i), (frame[2].f), (frame[3].f));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(480);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(481);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(482);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(483);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3f_int_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3f_int_float_float_float, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(487);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(488);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(489);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3f_int_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3f_int_float_float_float, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(500);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[6].o = sp[0].o;
	LINE_NUMBER(501);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(502);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(503);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4f_int_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4f_int_float_float_float_float, (frame[6].o)))(ctx, (frame[6].o), (frame[7].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(507);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[6].o = sp[0].o;
	LINE_NUMBER(508);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(509);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4f_int_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4f_int_float_float_float_float, (frame[6].o)))(ctx, (frame[6].o), (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform1fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(513);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(514);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(515);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(516);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[4].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform1fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(520);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(521);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(522);
	((func_com_badlogic_gdx_graphics_GL20_glUniform1fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform1fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), (frame[4].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform2fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(526);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(527);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(528);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(529);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), ((frame[4].i) / (jint(2))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform2fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(533);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(534);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(535);
	((func_com_badlogic_gdx_graphics_GL20_glUniform2fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform2fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (jint(2))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform3fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(539);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(540);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(541);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(542);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), ((frame[4].i) / (jint(3))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform3fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(546);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(547);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(548);
	((func_com_badlogic_gdx_graphics_GL20_glUniform3fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform3fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (jint(3))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform4fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(552);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(553);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(554);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(555);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), ((frame[4].i) / (jint(4))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniform4fv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(559);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(560);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(561);
	((func_com_badlogic_gdx_graphics_GL20_glUniform4fv_int_int_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniform4fv_int_int_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (jint(4))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(569);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i));
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(582);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(586);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[4].o = sp[0].o;
	LINE_NUMBER(587);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(588);
	sp[0].o = frame[4].o;
	jint temp0 = frame[1].i;
	jint temp1 = jint(1);
	jint temp2 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix4 *) NULL_CHECK((frame[2].o)))->F_val;
	((func_com_badlogic_gdx_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (jint(0)));
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(596);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(609);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(613);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[4].o = sp[0].o;
	LINE_NUMBER(614);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(615);
	sp[0].o = frame[4].o;
	jint temp0 = frame[1].i;
	jint temp1 = jint(1);
	jint temp2 = frame[3].i;
	sp[1].o = (jobject)((com_badlogic_gdx_math_Matrix3 *) NULL_CHECK((frame[2].o)))->F_val;
	((func_com_badlogic_gdx_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniformMatrix3fv_int_int_boolean_Array1_float_int, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (jint(0)));
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix3fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(624);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(625);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(627);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(628);
	((func_com_badlogic_gdx_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[3].i), (frame[4].i), (frame[2].o));
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix4fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(637);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(638);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(639);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(640);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(641);
	((func_com_badlogic_gdx_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i), (frame[3].i), (frame[4].i), (frame[2].o));
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix4fv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(645);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[5].o = sp[0].o;
	LINE_NUMBER(646);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(647);
	((func_com_badlogic_gdx_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUniformMatrix4fv_int_int_boolean_Array1_float_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].i), ((frame[4].i) / (16)), (jint(0)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformMatrix4fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(651);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_int_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_int_Array1_float_int_int])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(659);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(663);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(671);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z));
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector3(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(675);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[2].o)))->F_z));
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(683);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_w));
	LINE_NUMBER(684);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector4(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(687);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((com_badlogic_gdx_math_Vector4 *) NULL_CHECK((frame[2].o)))->F_w));
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(695);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a));
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(699);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a));
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_java_nio_Buffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setVertexAttribute", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(712);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[7].o = sp[0].o;
	LINE_NUMBER(713);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(714);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(715);
	if ((frame[8].i) != (jint(-1))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(716);
	((func_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, (frame[7].o)))(ctx, (frame[7].o), (frame[8].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	LINE_NUMBER(717);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setVertexAttribute", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(720);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[7].o = sp[0].o;
	LINE_NUMBER(721);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(722);
	((func_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_java_nio_Buffer, (frame[7].o)))(ctx, (frame[7].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setVertexAttribute", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(735);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[7].o = sp[0].o;
	LINE_NUMBER(736);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(737);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(738);
	if ((frame[8].i) != (jint(-1))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(739);
	((func_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int, (frame[7].o)))(ctx, (frame[7].o), (frame[8].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setVertexAttribute", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(743);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[7].o = sp[0].o;
	LINE_NUMBER(744);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(745);
	((func_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glVertexAttribPointer_int_int_int_boolean_int_int, (frame[7].o)))(ctx, (frame[7].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(746);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:begin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(751);
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind])(ctx, (frame[0].o));
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:bind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[1].o = sp[0].o;
	LINE_NUMBER(756);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(757);
	((func_com_badlogic_gdx_graphics_GL20_glUseProgram_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUseProgram_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program));
	LINE_NUMBER(758);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:end", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(763);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(767);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[1].o = sp[0].o;
	LINE_NUMBER(768);
	((func_com_badlogic_gdx_graphics_GL20_glUseProgram_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glUseProgram_int, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(769);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteShader_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteShader_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_vertexShaderHandle));
	LINE_NUMBER(770);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteShader_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteShader_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_fragmentShaderHandle));
	LINE_NUMBER(771);
	((func_com_badlogic_gdx_graphics_GL20_glDeleteProgram_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDeleteProgram_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program));
	LINE_NUMBER(772);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)), (frame[0].o), (jint(1)));
	}
label_6:;
	LINE_NUMBER(773);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:disableVertexAttribute", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(779);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[2].o = sp[0].o;
	LINE_NUMBER(780);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(781);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(782);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(783);
	((func_com_badlogic_gdx_graphics_GL20_glDisableVertexAttribArray_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisableVertexAttribArray_int, (frame[2].o)))(ctx, (frame[2].o), (frame[3].i));
	LINE_NUMBER(784);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:disableVertexAttribute", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(787);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[2].o = sp[0].o;
	LINE_NUMBER(788);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(789);
	((func_com_badlogic_gdx_graphics_GL20_glDisableVertexAttribArray_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glDisableVertexAttribArray_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(790);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:enableVertexAttribute", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(796);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[2].o = sp[0].o;
	LINE_NUMBER(797);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(798);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(799);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(800);
	((func_com_badlogic_gdx_graphics_GL20_glEnableVertexAttribArray_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnableVertexAttribArray_int, (frame[2].o)))(ctx, (frame[2].o), (frame[3].i));
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:enableVertexAttribute", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(804);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[2].o = sp[0].o;
	LINE_NUMBER(805);
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (frame[0].o));
	LINE_NUMBER(806);
	((func_com_badlogic_gdx_graphics_GL20_glEnableVertexAttribArray_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glEnableVertexAttribArray_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(807);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:checkManaged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(810);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_invalidated) == 0) goto label_1;
	}
	{
	LINE_NUMBER(811);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_vertexShaderSource;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_fragmentShaderSource;
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_compileShaders_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(812);
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(0));
	}
label_1:;
	LINE_NUMBER(814);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_addManagedShader_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:addManagedShader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(817);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(818);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(819);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(820);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(821);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_invalidateAllShaderPrograms_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:invalidateAllShaderPrograms", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(826);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(828);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(829);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(831);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_glutils_ShaderProgram, sp[0].o))))->F_invalidated = (jint(1));
	LINE_NUMBER(833);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_glutils_ShaderProgram, sp[0].o)));
	LINE_NUMBER(831);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(835);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_clearAllShaderPrograms_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:clearAllShaderPrograms", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(838);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(839);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_getManagedStatus_R_java_lang_String(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getManagedStatus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	{
	LINE_NUMBER(842);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(843);
	frame[1].i = (jint(0));
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Managed shaders/app: { "_j))));
	LINE_NUMBER(845);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_Application, sp[0].o));
	LINE_NUMBER(846);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o))))->F_size));
	LINE_NUMBER(847);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(848);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(849);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(850);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_getNumManagedShaderPrograms_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getNumManagedShaderPrograms", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	{
	LINE_NUMBER(855);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o))))->F_size);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setAttributef_java_lang_String_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:setAttributef", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(866);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	frame[6].o = sp[0].o;
	LINE_NUMBER(867);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(868);
	((func_com_badlogic_gdx_graphics_GL20_glVertexAttrib4f_int_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glVertexAttrib4f_int_float_float_float_float, (frame[6].o)))(ctx, (frame[6].o), (frame[7].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(869);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniforms(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:fetchUniforms", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(876);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = jint(35718);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	((func_com_badlogic_gdx_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(877);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp2 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[0].o, (jint(0)));
	frame[1].i = temp2;
	LINE_NUMBER(879);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[1].i));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_uniformNames = (jref) sp[1].o;
	LINE_NUMBER(881);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(883);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer])(ctx, sp[0].o, (jint(0)), (jint(1)));
	LINE_NUMBER(884);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(885);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, sp[0].o))(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(886);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetUniformLocation_int_java_lang_String_R_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program), (frame[3].o));
	frame[4].i = temp2;
	LINE_NUMBER(887);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	LINE_NUMBER(888);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniformTypes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp3 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp3);
	LINE_NUMBER(889);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniformSizes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp4 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp4);
	LINE_NUMBER(890);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniformNames;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(881);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(892);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:fetchAttributes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(896);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = jint(35721);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	((func_com_badlogic_gdx_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetProgramiv_int_int_java_nio_IntBuffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(897);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp2 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[0].o, (jint(0)));
	frame[1].i = temp2;
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[1].i));
	((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK(sp[0].o))->F_attributeNames = (jref) sp[1].o;
	LINE_NUMBER(901);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(902);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(903);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer])(ctx, sp[0].o, (jint(0)), (jint(1)));
	LINE_NUMBER(904);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_nio_Buffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(905);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String, sp[0].o))(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(906);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl20;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGetAttribLocation_int_java_lang_String_R_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program), (frame[3].o));
	frame[4].i = temp2;
	LINE_NUMBER(907);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	LINE_NUMBER(908);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributeTypes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp3 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp3);
	LINE_NUMBER(909);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributeSizes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp4 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp4);
	LINE_NUMBER(910);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributeNames;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(901);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(912);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasAttribute_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:hasAttribute", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getAttributeType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(923);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributeTypes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getAttributeLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeSize_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getAttributeSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributeSizes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasUniform_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:hasUniform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniforms;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getUniformType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniformTypes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getUniformLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniforms;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformSize_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getUniformSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(959);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniformSizes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributes_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_attributeNames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniforms_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getUniforms", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_uniformNames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getVertexShaderSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getVertexShaderSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_vertexShaderSource;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getFragmentShaderSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getFragmentShaderSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_fragmentShaderSource;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:getHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(984);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ShaderProgram *) NULL_CHECK((frame[0].o)))->F_program);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_POSITION_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_position"_j));
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_NORMAL_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_normal"_j));
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_COLOR_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_color"_j));
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TEXCOORD_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_texCoord"_j));
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TANGENT_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_tangent"_j));
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BINORMAL_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_binormal"_j));
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BONEWEIGHT_ATTRIBUTE = ((jobject) createStringLiteral(ctx, u8"a_boneWeight"_j));
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShaderProgram:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	{
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_pedantic = (jint(1));
	LINE_NUMBER(88);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(92);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(95);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_intbuf = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_graphics_glutils_ShaderProgram;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method begin
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[65]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method end
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[67]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ShaderProgram[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_compileShaders_java_lang_String_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_loadShader_int_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_createProgram_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_linkProgram_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_boolean_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_java_lang_String_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_int_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_java_lang_String_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_int_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_java_lang_String_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_int_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_java_lang_String_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_int_Array1_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_java_lang_String_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_java_lang_String_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_java_lang_String_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_java_lang_String_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_int_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_Array1_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector3,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector4,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_java_nio_Buffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_begin,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_end,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_addManagedShader_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setAttributef_java_lang_String_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniforms,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributes,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasAttribute_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeType_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeSize_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasUniform_java_lang_String_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformType_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformLocation_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformSize_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributes_R_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniforms_R_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getVertexShaderSource_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getFragmentShaderSource_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getHandle_R_int,
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
	{ "dispose", "()V" },
	{ "compileShaders", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "loadShader", "(ILjava/lang/String;)I" },
	{ "createProgram", "()I" },
	{ "linkProgram", "(I)I" },
	{ "getLog", "()Ljava/lang/String;" },
	{ "isCompiled", "()Z" },
	{ "fetchAttributeLocation", "(Ljava/lang/String;)I" },
	{ "fetchUniformLocation", "(Ljava/lang/String;)I" },
	{ "fetchUniformLocation", "(Ljava/lang/String;Z)I" },
	{ "setUniformi", "(Ljava/lang/String;I)V" },
	{ "setUniformi", "(II)V" },
	{ "setUniformi", "(Ljava/lang/String;II)V" },
	{ "setUniformi", "(III)V" },
	{ "setUniformi", "(Ljava/lang/String;III)V" },
	{ "setUniformi", "(IIII)V" },
	{ "setUniformi", "(Ljava/lang/String;IIII)V" },
	{ "setUniformi", "(IIIII)V" },
	{ "setUniform1iv", "(Ljava/lang/String;[III)V" },
	{ "setUniform1iv", "(I[III)V" },
	{ "setUniform2iv", "(Ljava/lang/String;[III)V" },
	{ "setUniform2iv", "(I[III)V" },
	{ "setUniform3iv", "(Ljava/lang/String;[III)V" },
	{ "setUniform3iv", "(I[III)V" },
	{ "setUniform4iv", "(Ljava/lang/String;[III)V" },
	{ "setUniform4iv", "(I[III)V" },
	{ "setUniformf", "(Ljava/lang/String;F)V" },
	{ "setUniformf", "(IF)V" },
	{ "setUniformf", "(Ljava/lang/String;FF)V" },
	{ "setUniformf", "(IFF)V" },
	{ "setUniformf", "(Ljava/lang/String;FFF)V" },
	{ "setUniformf", "(IFFF)V" },
	{ "setUniformf", "(Ljava/lang/String;FFFF)V" },
	{ "setUniformf", "(IFFFF)V" },
	{ "setUniform1fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform1fv", "(I[FII)V" },
	{ "setUniform2fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform2fv", "(I[FII)V" },
	{ "setUniform3fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform3fv", "(I[FII)V" },
	{ "setUniform4fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform4fv", "(I[FII)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix4;Z)V" },
	{ "setUniformMatrix", "(ILcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setUniformMatrix", "(ILcom/badlogic/gdx/math/Matrix4;Z)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix3;)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix3;Z)V" },
	{ "setUniformMatrix", "(ILcom/badlogic/gdx/math/Matrix3;)V" },
	{ "setUniformMatrix", "(ILcom/badlogic/gdx/math/Matrix3;Z)V" },
	{ "setUniformMatrix3fv", "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V" },
	{ "setUniformMatrix4fv", "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V" },
	{ "setUniformMatrix4fv", "(I[FII)V" },
	{ "setUniformMatrix4fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniformf", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Vector2;)V" },
	{ "setUniformf", "(ILcom/badlogic/gdx/math/Vector2;)V" },
	{ "setUniformf", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Vector3;)V" },
	{ "setUniformf", "(ILcom/badlogic/gdx/math/Vector3;)V" },
	{ "setUniformf", "(Ljava/lang/String;Lcom/badlogic/gdx/math/Vector4;)V" },
	{ "setUniformf", "(ILcom/badlogic/gdx/math/Vector4;)V" },
	{ "setUniformf", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setUniformf", "(ILcom/badlogic/gdx/graphics/Color;)V" },
	{ "setVertexAttribute", "(Ljava/lang/String;IIZILjava/nio/Buffer;)V" },
	{ "setVertexAttribute", "(IIIZILjava/nio/Buffer;)V" },
	{ "setVertexAttribute", "(Ljava/lang/String;IIZII)V" },
	{ "setVertexAttribute", "(IIIZII)V" },
	{ "begin", "()V" },
	{ "bind", "()V" },
	{ "end", "()V" },
	{ "disableVertexAttribute", "(Ljava/lang/String;)V" },
	{ "disableVertexAttribute", "(I)V" },
	{ "enableVertexAttribute", "(Ljava/lang/String;)V" },
	{ "enableVertexAttribute", "(I)V" },
	{ "checkManaged", "()V" },
	{ "addManagedShader", "(Lcom/badlogic/gdx/Application;Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "setAttributef", "(Ljava/lang/String;FFFF)V" },
	{ "fetchUniforms", "()V" },
	{ "fetchAttributes", "()V" },
	{ "hasAttribute", "(Ljava/lang/String;)Z" },
	{ "getAttributeType", "(Ljava/lang/String;)I" },
	{ "getAttributeLocation", "(Ljava/lang/String;)I" },
	{ "getAttributeSize", "(Ljava/lang/String;)I" },
	{ "hasUniform", "(Ljava/lang/String;)Z" },
	{ "getUniformType", "(Ljava/lang/String;)I" },
	{ "getUniformLocation", "(Ljava/lang/String;)I" },
	{ "getUniformSize", "(Ljava/lang/String;)I" },
	{ "getAttributes", "()[Ljava/lang/String;" },
	{ "getUniforms", "()[Ljava/lang/String;" },
	{ "getVertexShaderSource", "()Ljava/lang/String;" },
	{ "getFragmentShaderSource", "()Ljava/lang/String;" },
	{ "getHandle", "()I" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "POSITION_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_POSITION_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "NORMAL_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_NORMAL_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "COLOR_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_COLOR_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "TEXCOORD_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TEXCOORD_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "TANGENT_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_TANGENT_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "BINORMAL_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BINORMAL_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "BONEWEIGHT_ATTRIBUTE", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_BONEWEIGHT_ATTRIBUTE, "Ljava/lang/String;", 25 },
	{ "pedantic", &class_boolean, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_pedantic, "Z", 9 },
	{ "prependVertexCode", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependVertexCode, "Ljava/lang/String;", 9 },
	{ "prependFragmentCode", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_prependFragmentCode, "Ljava/lang/String;", 9 },
	{ "shaders", &class_com_badlogic_gdx_utils_ObjectMap, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_shaders, "Lcom/badlogic/gdx/utils/ObjectMap;", 26 },
	{ "log", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_log), "Ljava/lang/String;", 2 },
	{ "isCompiled", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_isCompiled), "Z", 2 },
	{ "uniforms", &class_com_badlogic_gdx_utils_ObjectIntMap, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_uniforms), "Lcom/badlogic/gdx/utils/ObjectIntMap;", 18 },
	{ "uniformTypes", &class_com_badlogic_gdx_utils_ObjectIntMap, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_uniformTypes), "Lcom/badlogic/gdx/utils/ObjectIntMap;", 18 },
	{ "uniformSizes", &class_com_badlogic_gdx_utils_ObjectIntMap, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_uniformSizes), "Lcom/badlogic/gdx/utils/ObjectIntMap;", 18 },
	{ "uniformNames", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_uniformNames), "[Ljava/lang/String;", 2 },
	{ "attributes", &class_com_badlogic_gdx_utils_ObjectIntMap, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_attributes), "Lcom/badlogic/gdx/utils/ObjectIntMap;", 18 },
	{ "attributeTypes", &class_com_badlogic_gdx_utils_ObjectIntMap, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_attributeTypes), "Lcom/badlogic/gdx/utils/ObjectIntMap;", 18 },
	{ "attributeSizes", &class_com_badlogic_gdx_utils_ObjectIntMap, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_attributeSizes), "Lcom/badlogic/gdx/utils/ObjectIntMap;", 18 },
	{ "attributeNames", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_attributeNames), "[Ljava/lang/String;", 2 },
	{ "program", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_program), "I", 2 },
	{ "vertexShaderHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_vertexShaderHandle), "I", 2 },
	{ "fragmentShaderHandle", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_fragmentShaderHandle), "I", 2 },
	{ "matrix", &class_java_nio_FloatBuffer, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_matrix), "Ljava/nio/FloatBuffer;", 18 },
	{ "vertexShaderSource", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_vertexShaderSource), "Ljava/lang/String;", 18 },
	{ "fragmentShaderSource", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_fragmentShaderSource), "Ljava/lang/String;", 18 },
	{ "invalidated", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_invalidated), "Z", 2 },
	{ "refCount", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_refCount), "I", 2 },
	{ "intbuf", &class_java_nio_IntBuffer, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShaderProgram_intbuf, "Ljava/nio/IntBuffer;", 24 },
	{ "params", &class_java_nio_IntBuffer, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_params), "Ljava/nio/IntBuffer;", 0 },
	{ "type", &class_java_nio_IntBuffer, offsetof(com_badlogic_gdx_graphics_glutils_ShaderProgram, F_type), "Ljava/nio/IntBuffer;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ShaderProgram_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ShaderProgram_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "compileShaders", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_compileShaders_java_lang_String_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_compileShaders_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "loadShader", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_loadShader_int_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_loadShader_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 2 },
	{ "createProgram", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_createProgram_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_createProgram_R_int, "()I", 4 },
	{ "linkProgram", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_linkProgram_int_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_linkProgram_int_R_int, "(I)I", 2 },
	{ "getLog", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isCompiled", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean, "()Z", 1 },
	{ "fetchAttributeLocation", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributeLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "fetchUniformLocation", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "fetchUniformLocation", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_boolean_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniformLocation_java_lang_String_boolean_R_int, "(Ljava/lang/String;Z)I", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int, "(II)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int, "(III)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int, "(Ljava/lang/String;III)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int, "(IIII)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int_int_int_int, "(Ljava/lang/String;IIII)V", 1 },
	{ "setUniformi", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_int_int_int_int_int, "(IIIII)V", 1 },
	{ "setUniform1iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_java_lang_String_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_java_lang_String_Array1_int_int_int, "(Ljava/lang/String;[III)V", 1 },
	{ "setUniform1iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_int_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1iv_int_Array1_int_int_int, "(I[III)V", 1 },
	{ "setUniform2iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_java_lang_String_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_java_lang_String_Array1_int_int_int, "(Ljava/lang/String;[III)V", 1 },
	{ "setUniform2iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_int_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2iv_int_Array1_int_int_int, "(I[III)V", 1 },
	{ "setUniform3iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_java_lang_String_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_java_lang_String_Array1_int_int_int, "(Ljava/lang/String;[III)V", 1 },
	{ "setUniform3iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_int_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3iv_int_Array1_int_int_int, "(I[III)V", 1 },
	{ "setUniform4iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_java_lang_String_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_java_lang_String_Array1_int_int_int, "(Ljava/lang/String;[III)V", 1 },
	{ "setUniform4iv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_int_Array1_int_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4iv_int_Array1_int_int_int, "(I[III)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float, "(Ljava/lang/String;F)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float, "(IF)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float, "(Ljava/lang/String;FF)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float, "(IFF)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float, "(Ljava/lang/String;FFF)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float, "(IFFF)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_float_float_float_float, "(Ljava/lang/String;FFFF)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_float_float_float_float, "(IFFFF)V", 1 },
	{ "setUniform1fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_java_lang_String_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform1fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform1fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniform2fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_java_lang_String_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform2fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform2fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniform3fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_java_lang_String_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform3fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform3fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniform4fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_java_lang_String_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform4fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniform4fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4_boolean, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix4;Z)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4, "(ILcom/badlogic/gdx/math/Matrix4;)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix4_boolean, "(ILcom/badlogic/gdx/math/Matrix4;Z)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix3;)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix3_boolean, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Matrix3;Z)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3, "(ILcom/badlogic/gdx/math/Matrix3;)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_int_com_badlogic_gdx_math_Matrix3_boolean, "(ILcom/badlogic/gdx/math/Matrix3;Z)V", 1 },
	{ "setUniformMatrix3fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean, "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V", 1 },
	{ "setUniformMatrix4fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean, "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V", 1 },
	{ "setUniformMatrix4fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_int_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniformMatrix4fv", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_Array1_float_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix4fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector2, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector2, "(ILcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector3, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector3, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector3, "(ILcom/badlogic/gdx/math/Vector3;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_math_Vector4, "(Ljava/lang/String;Lcom/badlogic/gdx/math/Vector4;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector4, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_math_Vector4, "(ILcom/badlogic/gdx/math/Vector4;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_java_lang_String_com_badlogic_gdx_graphics_Color, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setUniformf", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformf_int_com_badlogic_gdx_graphics_Color, "(ILcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_java_nio_Buffer, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_java_nio_Buffer, "(Ljava/lang/String;IIZILjava/nio/Buffer;)V", 1 },
	{ "setVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_java_nio_Buffer, "(IIIZILjava/nio/Buffer;)V", 1 },
	{ "setVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_java_lang_String_int_int_boolean_int_int, "(Ljava/lang/String;IIZII)V", 1 },
	{ "setVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setVertexAttribute_int_int_int_boolean_int_int, "(IIIZII)V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_begin, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_begin, "()V", 131073 },
	{ "bind", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_end, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_end, "()V", 131073 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose, "()V", 1 },
	{ "disableVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "disableVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_disableVertexAttribute_int, "(I)V", 1 },
	{ "enableVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "enableVertexAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_enableVertexAttribute_int, "(I)V", 1 },
	{ "checkManaged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_checkManaged, "()V", 2 },
	{ "addManagedShader", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_addManagedShader_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_addManagedShader_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/Application;Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 2 },
	{ "invalidateAllShaderPrograms", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_invalidateAllShaderPrograms_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "clearAllShaderPrograms", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_clearAllShaderPrograms_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "getManagedStatus", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_getManagedStatus_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "getNumManagedShaderPrograms", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShaderProgram_getNumManagedShaderPrograms_R_int, 0, "()I", 9 },
	{ "setAttributef", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_setAttributef_java_lang_String_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setAttributef_java_lang_String_float_float_float_float, "(Ljava/lang/String;FFFF)V", 1 },
	{ "fetchUniforms", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniforms, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchUniforms, "()V", 2 },
	{ "fetchAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributes, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_fetchAttributes, "()V", 2 },
	{ "hasAttribute", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasAttribute_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasAttribute_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getAttributeType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeType_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeType_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributeLocation", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributeSize", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeSize_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributeSize_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "hasUniform", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasUniform_java_lang_String_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_hasUniform_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getUniformType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformType_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformType_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getUniformLocation", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformLocation_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getUniformSize", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformSize_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniformSize_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributes_R_Array1_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getAttributes_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getUniforms", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniforms_R_Array1_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getUniforms_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getVertexShaderSource", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getVertexShaderSource_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getVertexShaderSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getFragmentShaderSource", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getFragmentShaderSource_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getFragmentShaderSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getHandle", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShaderProgram_getHandle_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getHandle_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_glutils_ShaderProgram{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ShaderProgram",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ShaderProgram),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ShaderProgram,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ShaderProgram,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 32,
		.nativeFields = (intptr_t) fields,
		.methodCount = 98,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 102,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ShaderProgram = registerClass(&class_com_badlogic_gdx_graphics_glutils_ShaderProgram);

}

