#include "com/nro/GameMain_IWebPlatformInfo.h"
#include "java/lang/Object.h"
#include "com/nro/GameMain_IWebPlatformInfo.h"
#include "com/nro/GameMain.h"

extern "C" {


void mark_com_nro_GameMain$IWebPlatformInfo(jobject object, jint mark, jint depth) {
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
	auto self = (com_nro_GameMain$IWebPlatformInfo *) object;
}

void clinit_com_nro_GameMain$IWebPlatformInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_com_nro_GameMain$IWebPlatformInfo[] {
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
	{ "isMobile", "()Z" },
	{ "getDevicePixelRatio", "()F" },
	{ "getScreenWidth", "()I" },
	{ "getScreenHeight", "()I" },
	{ "getTargetZoomLevel", "()I" },
};

static MethodMetadata methods[] {
	{ "isMobile", 0, INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean, "()Z", 1025 },
	{ "getDevicePixelRatio", 0, INDEX_com_nro_GameMain$IWebPlatformInfo_getDevicePixelRatio_R_float, "()F", 1025 },
	{ "getScreenWidth", 0, INDEX_com_nro_GameMain$IWebPlatformInfo_getScreenWidth_R_int, "()I", 1025 },
	{ "getScreenHeight", 0, INDEX_com_nro_GameMain$IWebPlatformInfo_getScreenHeight_R_int, "()I", 1025 },
	{ "getTargetZoomLevel", 0, INDEX_com_nro_GameMain$IWebPlatformInfo_getTargetZoomLevel_R_int, "()I", 1025 },
};

Class class_com_nro_GameMain$IWebPlatformInfo{
		.nativeName = (intptr_t) "com/nro/GameMain$IWebPlatformInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_GameMain$IWebPlatformInfo),
		.classVtable = (intptr_t) vtable_com_nro_GameMain$IWebPlatformInfo,
		.staticInitializer = (intptr_t) clinit_com_nro_GameMain$IWebPlatformInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_GameMain$IWebPlatformInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_nro_GameMain,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_GameMain$IWebPlatformInfo = registerClass(&class_com_nro_GameMain$IWebPlatformInfo);

}

