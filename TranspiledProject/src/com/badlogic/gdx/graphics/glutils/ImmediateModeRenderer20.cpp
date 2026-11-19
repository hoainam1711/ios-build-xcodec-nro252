#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20.h"
#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/Mesh.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/VertexAttributes.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/graphics/VertexAttribute.h"
#include "com/badlogic/gdx/graphics/Color.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_projModelView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_projModelView)->clazz)->markFunction)((jobject) self->F_projModelView, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_shaderUniformNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shaderUniformNames)->clazz)->markFunction)((jobject) self->F_shaderUniformNames, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_boolean_boolean_int(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	jint temp0 = 5000;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createDefaultShader_boolean_boolean_int_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(51);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(1));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createDefaultShader_boolean_boolean_int_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, (frame[2].i), (frame[3].i), (frame[4].i));
	init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(56);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(1));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Matrix4(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Matrix4);
	init_com_badlogic_gdx_math_Matrix4(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_projModelView = (jref) sp[1].o;
	LINE_NUMBER(61);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_maxVertices = (frame[1].i);
	LINE_NUMBER(62);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numTexCoords = (frame[4].i);
	LINE_NUMBER(63);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[5].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_buildVertexAttributes_boolean_boolean_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Mesh);
	init_com_badlogic_gdx_graphics_Mesh_boolean_int_int_Array1_com_badlogic_gdx_graphics_VertexAttribute(ctx, sp[1].o, (jint(0)), (frame[1].i), (jint(0)), (frame[6].o));
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_float, (temp0 * (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize) / (jint(4)))));
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttributes_R_com_badlogic_gdx_graphics_VertexAttributes])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_vertexSize = (((jint)((com_badlogic_gdx_graphics_VertexAttributes *) NULL_CHECK(sp[1].o))->F_vertexSize) / (jint(4)));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[1].o, (8));
	sp += 1;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (8));
	jint temp0 = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_offset) / (jint(4));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_normalOffset = sp[1].i;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[1].o, (jint(4)));
	sp += 1;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (jint(4)));
	jint temp0 = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_offset) / (jint(4));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	LINE_NUMBER(72);
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_colorOffset = sp[1].i;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[1].o, (16));
	sp += 1;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_getVertexAttribute_int_R_com_badlogic_gdx_graphics_VertexAttribute])(ctx, sp[0].o, (16));
	jint temp0 = ((jint)((com_badlogic_gdx_graphics_VertexAttribute *) NULL_CHECK(sp[0].o))->F_offset) / (jint(4));
	sp[0].i = temp0;
	sp += 1;
	goto label_18;
	}
label_16:;
	LINE_NUMBER(75);
	INST_ICONST(0);
label_18:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_texCoordOffset = sp[1].i;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[4].i));
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_shaderUniformNames = (jref) sp[1].o;
	LINE_NUMBER(78);
	frame[7].i = (jint(0));
	}
label_21:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_22;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shaderUniformNames;
	jint temp0 = frame[7].i;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"u_sampler"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(78);
	INST_IINC(7, 1);
	goto label_21;
	}
label_22:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_buildVertexAttributes_boolean_boolean_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:buildVertexAttributes", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(84);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, (jint(1)), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_position"_j))));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, (8), (jint(3)), (((jobject) createStringLiteral(ctx, u8"a_normal"_j))));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(87);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, (jint(4)), (jint(4)), (((jobject) createStringLiteral(ctx, u8"a_color"_j))));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(88);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute);
	jint temp0 = 16;
	jint temp1 = jint(2);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"a_texCoord"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_com_badlogic_gdx_graphics_VertexAttribute_int_int_java_lang_String(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[4].o)))->F_size));
	frame[5].o = sp[0].o;
	LINE_NUMBER(92);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[4].o)))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[6].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_com_badlogic_gdx_graphics_VertexAttribute, sp[1].o));
	LINE_NUMBER(92);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:setShader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_ownsShader) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(99);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[1].o);
	LINE_NUMBER(100);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_ownsShader = (jint(0));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:getShader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_begin_com_badlogic_gdx_math_Matrix4_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:begin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_projModelView;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Matrix4_set_com_badlogic_gdx_math_Matrix4_R_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(109);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_primitiveType = (frame[2].i);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_colorOffset);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:color", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_colorOffset);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:color", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_colorOffset))) = (frame[1].f);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_texCoord_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:texCoord", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(125);
	frame[3].i = (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_texCoordOffset));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[3].i) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords))) = (frame[1].f);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[3].i) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords)) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_numSetTexCoords = (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_numSetTexCoords) + (jint(2)));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_normal_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:normal", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(132);
	frame[4].i = (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_normalOffset));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[1].f);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_vertex_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:vertex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(139);
	frame[4].i = ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[1].f);
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(1)))) = (frame[2].f);
	LINE_NUMBER(142);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[4].i) + (jint(2)))) = (frame[3].f);
	LINE_NUMBER(144);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords = (jint(0));
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_vertexIdx = (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_vertexIdx) + ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexSize));
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_numVertices = (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK(sp[0].o))->F_numVertices) + (jint(1)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:flush", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numVertices) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_bind])(ctx, sp[0].o);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projModelView"_j));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_projModelView;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformMatrix_java_lang_String_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(153);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	if ((frame[1].i) >= ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numTexCoords)) goto label_5;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shaderUniformNames;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_setUniformi_java_lang_String_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))), (frame[1].i));
	LINE_NUMBER(153);
	INST_IINC(1, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_setVertices_Array1_float_int_int_R_com_badlogic_gdx_graphics_Mesh])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_render_com_badlogic_gdx_graphics_glutils_ShaderProgram_int])(ctx, sp[0].o, sp[1].o, ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_primitiveType));
	LINE_NUMBER(158);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numSetTexCoords = (jint(0));
	LINE_NUMBER(159);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_vertexIdx = (jint(0));
	LINE_NUMBER(160);
	((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numVertices = (jint(0));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	((func_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_flush])(ctx, (frame[0].o));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getNumVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:getNumVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_numVertices);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getMaxVertices_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:getMaxVertices", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_maxVertices);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	if (((jint)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_ownsShader) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_com_badlogic_gdx_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createVertexShader_boolean_boolean_int_R_java_lang_String(jcontext ctx, jbool param0, jbool param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:createVertexShader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(182);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attribute vec4 a_position;\n"_j))));
	LINE_NUMBER(183);
	sp += 1;
	if ((frame[0].i) == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"attribute vec3 a_normal;\n"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	sp += 1;
	if ((frame[1].i) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"attribute vec4 a_color;\n"_j));
	goto label_6;
label_5:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_6:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(187);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"attribute vec2 a_texCoord"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(190);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uniform mat4 u_projModelView;\n"_j))));
	LINE_NUMBER(191);
	sp += 1;
	if ((frame[1].i) == 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"varying vec4 v_col;\n"_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(193);
	frame[4].i = (jint(0));
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(194);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"varying vec2 v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(193);
	INST_IINC(4, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(197);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"void main() {\n   gl_Position = u_projModelView * a_position;\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(198);
	if ((frame[1].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(199);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   v_col = a_color;\n   v_col.a *= 255.0 / 254.0;\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(203);
	frame[4].i = (jint(0));
	}
label_23:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_24;
	}
	{
	LINE_NUMBER(204);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"a_texCoord"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	INST_IINC(4, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(206);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"   gl_PointSize = 1.0;\n}\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createFragmentShader_boolean_boolean_int_R_java_lang_String(jcontext ctx, jbool param0, jbool param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:createFragmentShader", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(212);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"#ifdef GL_ES\nprecision mediump float;\n#endif\n"_j)));
	LINE_NUMBER(214);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"varying vec4 v_col;\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(215);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(216);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"varying vec2 v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(217);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"uniform sampler2D u_sampler"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(220);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"void main() {\n   gl_FragColor = "_j))));
	LINE_NUMBER(221);
	sp += 1;
	if ((frame[1].i) == 0) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"v_col"_j));
	goto label_10;
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"vec4(1, 1, 1, 1)"_j));
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(223);
	if ((frame[2].i) <= 0) goto label_12;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" * "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(225);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(226);
	if ((frame[4].i) != ((frame[2].i) - (jint(1)))) goto label_16;
	}
	{
	LINE_NUMBER(227);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" texture2D(u_sampler"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",  v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(229);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" texture2D(u_sampler"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",  v_tex"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8") *"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(225);
	INST_IINC(4, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(233);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8";\n}"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createDefaultShader_boolean_boolean_int_R_com_badlogic_gdx_graphics_glutils_ShaderProgram(jcontext ctx, jbool param0, jbool param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20:createDefaultShader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createVertexShader_boolean_boolean_int_R_java_lang_String(ctx, (frame[0].i), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createFragmentShader_boolean_boolean_int_R_java_lang_String(ctx, (frame[0].i), (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(241);
	clinit_com_badlogic_gdx_graphics_glutils_ShaderProgram(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ShaderProgram);
	init_com_badlogic_gdx_graphics_glutils_ShaderProgram_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_isCompiled_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error compiling shader: "_j))));
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShaderProgram_getLog_R_java_lang_String])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_begin_com_badlogic_gdx_math_Matrix4_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_flush,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_texCoord_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_normal_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_vertex_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_end,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getNumVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getMaxVertices_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_dispose,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_buildVertexAttributes_boolean_boolean_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram,
	(void *) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram,
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
	{ "begin", "(Lcom/badlogic/gdx/math/Matrix4;I)V" },
	{ "flush", "()V" },
	{ "color", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "color", "(FFFF)V" },
	{ "color", "(F)V" },
	{ "texCoord", "(FF)V" },
	{ "normal", "(FFF)V" },
	{ "vertex", "(FFF)V" },
	{ "end", "()V" },
	{ "getNumVertices", "()I" },
	{ "getMaxVertices", "()I" },
	{ "dispose", "()V" },
	{ "buildVertexAttributes", "(ZZI)[Lcom/badlogic/gdx/graphics/VertexAttribute;" },
	{ "setShader", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "getShader", "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer, };

static FieldMetadata fields[] {
	{ "primitiveType", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_primitiveType), "I", 2 },
	{ "vertexIdx", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_vertexIdx), "I", 2 },
	{ "numSetTexCoords", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_numSetTexCoords), "I", 2 },
	{ "maxVertices", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_maxVertices), "I", 18 },
	{ "numVertices", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_numVertices), "I", 2 },
	{ "mesh", &class_com_badlogic_gdx_graphics_Mesh, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_mesh), "Lcom/badlogic/gdx/graphics/Mesh;", 18 },
	{ "shader", &class_com_badlogic_gdx_graphics_glutils_ShaderProgram, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_shader), "Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 2 },
	{ "ownsShader", &class_boolean, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_ownsShader), "Z", 2 },
	{ "numTexCoords", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_numTexCoords), "I", 18 },
	{ "vertexSize", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_vertexSize), "I", 18 },
	{ "normalOffset", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_normalOffset), "I", 18 },
	{ "colorOffset", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_colorOffset), "I", 18 },
	{ "texCoordOffset", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_texCoordOffset), "I", 18 },
	{ "projModelView", &class_com_badlogic_gdx_math_Matrix4, offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_projModelView), "Lcom/badlogic/gdx/math/Matrix4;", 18 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_vertices), "[F", 18 },
	{ "shaderUniformNames", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20, F_shaderUniformNames), "[Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_boolean_boolean_int, 0, "(ZZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int, 0, "(IZZI)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_int_boolean_boolean_int_com_badlogic_gdx_graphics_glutils_ShaderProgram, 0, "(IZZILcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "buildVertexAttributes", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_buildVertexAttributes_boolean_boolean_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_buildVertexAttributes_boolean_boolean_int_R_Array1_com_badlogic_gdx_graphics_VertexAttribute, "(ZZI)[Lcom/badlogic/gdx/graphics/VertexAttribute;", 2 },
	{ "setShader", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1 },
	{ "getShader", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_begin_com_badlogic_gdx_math_Matrix4_int, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_begin_com_badlogic_gdx_math_Matrix4_int, "(Lcom/badlogic/gdx/math/Matrix4;I)V", 1 },
	{ "color", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "color", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float_float_float_float, "(FFFF)V", 1 },
	{ "color", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_color_float, "(F)V", 1 },
	{ "texCoord", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_texCoord_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_texCoord_float_float, "(FF)V", 1 },
	{ "normal", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_normal_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_normal_float_float_float, "(FFF)V", 1 },
	{ "vertex", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_vertex_float_float_float, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_vertex_float_float_float, "(FFF)V", 1 },
	{ "flush", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_flush, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_flush, "()V", 1 },
	{ "end", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_end, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_end, "()V", 1 },
	{ "getNumVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getNumVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getNumVertices_R_int, "()I", 1 },
	{ "getMaxVertices", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getMaxVertices_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_getMaxVertices_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_dispose, VTABLE_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_dispose, "()V", 1 },
	{ "createVertexShader", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createVertexShader_boolean_boolean_int_R_java_lang_String, 0, "(ZZI)Ljava/lang/String;", 10 },
	{ "createFragmentShader", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createFragmentShader_boolean_boolean_int_R_java_lang_String, 0, "(ZZI)Ljava/lang/String;", 10 },
	{ "createDefaultShader", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20_createDefaultShader_boolean_boolean_int_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, 0, "(ZZI)Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 9 },
};

Class class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ImmediateModeRenderer20",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20 = registerClass(&class_com_badlogic_gdx_graphics_glutils_ImmediateModeRenderer20);

}

