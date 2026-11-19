#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_TextureData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_TextureData *) object;
}

void clinit_com_badlogic_gdx_graphics_TextureData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_badlogic_gdx_graphics_TextureData[] {
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
	{ "getType", "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;" },
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumePixmap", "()Lcom/badlogic/gdx/graphics/Pixmap;" },
	{ "disposePixmap", "()Z" },
	{ "consumeCustomData", "(I)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getFormat", "()Lcom/badlogic/gdx/graphics/Pixmap$Format;" },
	{ "useMipMaps", "()Z" },
	{ "isManaged", "()Z" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_TextureData$Factory,
	&class_com_badlogic_gdx_graphics_TextureData$TextureDataType,
};

static MethodMetadata methods[] {
	{ "getType", 0, INDEX_com_badlogic_gdx_graphics_TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, "()Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 1025 },
	{ "isPrepared", 0, INDEX_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean, "()Z", 1025 },
	{ "prepare", 0, INDEX_com_badlogic_gdx_graphics_TextureData_prepare, "()V", 1025 },
	{ "consumePixmap", 0, INDEX_com_badlogic_gdx_graphics_TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, "()Lcom/badlogic/gdx/graphics/Pixmap;", 1025 },
	{ "disposePixmap", 0, INDEX_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean, "()Z", 1025 },
	{ "consumeCustomData", 0, INDEX_com_badlogic_gdx_graphics_TextureData_consumeCustomData_int, "(I)V", 1025 },
	{ "getWidth", 0, INDEX_com_badlogic_gdx_graphics_TextureData_getWidth_R_int, "()I", 1025 },
	{ "getHeight", 0, INDEX_com_badlogic_gdx_graphics_TextureData_getHeight_R_int, "()I", 1025 },
	{ "getFormat", 0, INDEX_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1025 },
	{ "useMipMaps", 0, INDEX_com_badlogic_gdx_graphics_TextureData_useMipMaps_R_boolean, "()Z", 1025 },
	{ "isManaged", 0, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, "()Z", 1025 },
};

Class class_com_badlogic_gdx_graphics_TextureData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/TextureData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_TextureData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_TextureData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_TextureData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_TextureData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_TextureData = registerClass(&class_com_badlogic_gdx_graphics_TextureData);

}

