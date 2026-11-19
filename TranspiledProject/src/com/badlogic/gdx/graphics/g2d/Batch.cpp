#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/math/Affine2.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/glutils/ShaderProgram.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_Batch_X1;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_Y1;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_C1;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_U1;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_V1;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_X2;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_Y2;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_C2;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_U2;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_V2;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_X3;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_Y3;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_C3;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_U3;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_V3;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_X4;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_Y4;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_C4;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_U4;
jint SF_com_badlogic_gdx_graphics_g2d_Batch_V4;

void mark_com_badlogic_gdx_graphics_g2d_Batch(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_Batch *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_Batch_X1 = jint(0);
	SF_com_badlogic_gdx_graphics_g2d_Batch_Y1 = jint(1);
	SF_com_badlogic_gdx_graphics_g2d_Batch_C1 = jint(2);
	SF_com_badlogic_gdx_graphics_g2d_Batch_U1 = jint(3);
	SF_com_badlogic_gdx_graphics_g2d_Batch_V1 = jint(4);
	SF_com_badlogic_gdx_graphics_g2d_Batch_X2 = jint(5);
	SF_com_badlogic_gdx_graphics_g2d_Batch_Y2 = jint(6);
	SF_com_badlogic_gdx_graphics_g2d_Batch_C2 = jint(7);
	SF_com_badlogic_gdx_graphics_g2d_Batch_U2 = jint(8);
	SF_com_badlogic_gdx_graphics_g2d_Batch_V2 = jint(9);
	SF_com_badlogic_gdx_graphics_g2d_Batch_X3 = jint(10);
	SF_com_badlogic_gdx_graphics_g2d_Batch_Y3 = jint(11);
	SF_com_badlogic_gdx_graphics_g2d_Batch_C3 = jint(12);
	SF_com_badlogic_gdx_graphics_g2d_Batch_U3 = jint(13);
	SF_com_badlogic_gdx_graphics_g2d_Batch_V3 = jint(14);
	SF_com_badlogic_gdx_graphics_g2d_Batch_X4 = jint(15);
	SF_com_badlogic_gdx_graphics_g2d_Batch_Y4 = jint(16);
	SF_com_badlogic_gdx_graphics_g2d_Batch_C4 = jint(17);
	SF_com_badlogic_gdx_graphics_g2d_Batch_U4 = jint(18);
	SF_com_badlogic_gdx_graphics_g2d_Batch_V4 = jint(19);
}

void *vtable_com_badlogic_gdx_graphics_g2d_Batch[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFFFIIIIZZ)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFFIIIIZZ)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFIIII)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/Texture;[FII)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFFZ)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFLcom/badlogic/gdx/math/Affine2;)V" },
	{ "flush", "()V" },
	{ "disableBlending", "()V" },
	{ "enableBlending", "()V" },
	{ "setBlendFunction", "(II)V" },
	{ "setBlendFunctionSeparate", "(IIII)V" },
	{ "getBlendSrcFunc", "()I" },
	{ "getBlendDstFunc", "()I" },
	{ "getBlendSrcFuncAlpha", "()I" },
	{ "getBlendDstFuncAlpha", "()I" },
	{ "getProjectionMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "getTransformMatrix", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "setProjectionMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setTransformMatrix", "(Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "setShader", "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V" },
	{ "getShader", "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;" },
	{ "isBlendingEnabled", "()Z" },
	{ "isDrawing", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "X1", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_X1, "I", 25 },
	{ "Y1", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_Y1, "I", 25 },
	{ "C1", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_C1, "I", 25 },
	{ "U1", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_U1, "I", 25 },
	{ "V1", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_V1, "I", 25 },
	{ "X2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_X2, "I", 25 },
	{ "Y2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_Y2, "I", 25 },
	{ "C2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_C2, "I", 25 },
	{ "U2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_U2, "I", 25 },
	{ "V2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_V2, "I", 25 },
	{ "X3", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_X3, "I", 25 },
	{ "Y3", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_Y3, "I", 25 },
	{ "C3", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_C3, "I", 25 },
	{ "U3", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_U3, "I", 25 },
	{ "V3", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_V3, "I", 25 },
	{ "X4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_X4, "I", 25 },
	{ "Y4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_Y4, "I", 25 },
	{ "C4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_C4, "I", 25 },
	{ "U4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_U4, "I", 25 },
	{ "V4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Batch_V4, "I", 25 },
};

static MethodMetadata methods[] {
	{ "begin", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_begin, "()V", 1025 },
	{ "end", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_end, "()V", 1025 },
	{ "setColor", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1025 },
	{ "setColor", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, "(FFFF)V", 1025 },
	{ "getColor", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1025 },
	{ "setPackedColor", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setPackedColor_float, "(F)V", 1025 },
	{ "getPackedColor", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getPackedColor_R_float, "()F", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float_float_int_int_int_int_boolean_boolean, "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFFFIIIIZZ)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_int_int_int_int_boolean_boolean, "(Lcom/badlogic/gdx/graphics/Texture;FFFFIIIIZZ)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_int_int_int_int, "(Lcom/badlogic/gdx/graphics/Texture;FFIIII)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/Texture;FFFFFFFF)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float, "(Lcom/badlogic/gdx/graphics/Texture;FF)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_float_float_float_float, "(Lcom/badlogic/gdx/graphics/Texture;FFFF)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, "(Lcom/badlogic/gdx/graphics/Texture;[FII)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FF)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFF)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFF)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_boolean, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFFFFFFFFZ)V", 1025 },
	{ "draw", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_g2d_TextureRegion_float_float_com_badlogic_gdx_math_Affine2, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;FFLcom/badlogic/gdx/math/Affine2;)V", 1025 },
	{ "flush", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, "()V", 1025 },
	{ "disableBlending", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_disableBlending, "()V", 1025 },
	{ "enableBlending", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_enableBlending, "()V", 1025 },
	{ "setBlendFunction", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunction_int_int, "(II)V", 1025 },
	{ "setBlendFunctionSeparate", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setBlendFunctionSeparate_int_int_int_int, "(IIII)V", 1025 },
	{ "getBlendSrcFunc", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getBlendSrcFunc_R_int, "()I", 1025 },
	{ "getBlendDstFunc", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getBlendDstFunc_R_int, "()I", 1025 },
	{ "getBlendSrcFuncAlpha", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getBlendSrcFuncAlpha_R_int, "()I", 1025 },
	{ "getBlendDstFuncAlpha", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getBlendDstFuncAlpha_R_int, "()I", 1025 },
	{ "getProjectionMatrix", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getProjectionMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1025 },
	{ "getTransformMatrix", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getTransformMatrix_R_com_badlogic_gdx_math_Matrix4, "()Lcom/badlogic/gdx/math/Matrix4;", 1025 },
	{ "setProjectionMatrix", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setProjectionMatrix_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1025 },
	{ "setTransformMatrix", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setTransformMatrix_com_badlogic_gdx_math_Matrix4, "(Lcom/badlogic/gdx/math/Matrix4;)V", 1025 },
	{ "setShader", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setShader_com_badlogic_gdx_graphics_glutils_ShaderProgram, "(Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;)V", 1025 },
	{ "getShader", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_getShader_R_com_badlogic_gdx_graphics_glutils_ShaderProgram, "()Lcom/badlogic/gdx/graphics/glutils/ShaderProgram;", 1025 },
	{ "isBlendingEnabled", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_isBlendingEnabled_R_boolean, "()Z", 1025 },
	{ "isDrawing", 0, INDEX_com_badlogic_gdx_graphics_g2d_Batch_isDrawing_R_boolean, "()Z", 1025 },
};

Class class_com_badlogic_gdx_graphics_g2d_Batch{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/Batch",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_Batch),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_Batch,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_Batch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_Batch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_Batch = registerClass(&class_com_badlogic_gdx_graphics_g2d_Batch);

}

