#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/ApplicationLogger.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/utils/Clipboard.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Audio.h"
#include "com/badlogic/gdx/Preferences.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/Net.h"
#include "com/badlogic/gdx/LifecycleListener.h"
#include "com/badlogic/gdx/ApplicationListener.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_com_badlogic_gdx_Application_LOG_NONE;
jint SF_com_badlogic_gdx_Application_LOG_DEBUG;
jint SF_com_badlogic_gdx_Application_LOG_INFO;
jint SF_com_badlogic_gdx_Application_LOG_ERROR;

void mark_com_badlogic_gdx_Application(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Application *) object;
}

void clinit_com_badlogic_gdx_Application(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_Application_LOG_NONE = jint(0);
	SF_com_badlogic_gdx_Application_LOG_DEBUG = jint(3);
	SF_com_badlogic_gdx_Application_LOG_INFO = jint(2);
	SF_com_badlogic_gdx_Application_LOG_ERROR = jint(1);
}

void *vtable_com_badlogic_gdx_Application[] {
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
	{ "getApplicationListener", "()Lcom/badlogic/gdx/ApplicationListener;" },
	{ "getGraphics", "()Lcom/badlogic/gdx/Graphics;" },
	{ "getAudio", "()Lcom/badlogic/gdx/Audio;" },
	{ "getInput", "()Lcom/badlogic/gdx/Input;" },
	{ "getFiles", "()Lcom/badlogic/gdx/Files;" },
	{ "getNet", "()Lcom/badlogic/gdx/Net;" },
	{ "log", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "log", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "setLogLevel", "(I)V" },
	{ "getLogLevel", "()I" },
	{ "setApplicationLogger", "(Lcom/badlogic/gdx/ApplicationLogger;)V" },
	{ "getApplicationLogger", "()Lcom/badlogic/gdx/ApplicationLogger;" },
	{ "getType", "()Lcom/badlogic/gdx/Application$ApplicationType;" },
	{ "getVersion", "()I" },
	{ "getJavaHeap", "()J" },
	{ "getNativeHeap", "()J" },
	{ "getPreferences", "(Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;" },
	{ "getClipboard", "()Lcom/badlogic/gdx/utils/Clipboard;" },
	{ "postRunnable", "(Ljava/lang/Runnable;)V" },
	{ "exit", "()V" },
	{ "addLifecycleListener", "(Lcom/badlogic/gdx/LifecycleListener;)V" },
	{ "removeLifecycleListener", "(Lcom/badlogic/gdx/LifecycleListener;)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_Application$ApplicationType,
};

static FieldMetadata fields[] {
	{ "LOG_NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_Application_LOG_NONE, "I", 25 },
	{ "LOG_DEBUG", &class_int, (intptr_t) &SF_com_badlogic_gdx_Application_LOG_DEBUG, "I", 25 },
	{ "LOG_INFO", &class_int, (intptr_t) &SF_com_badlogic_gdx_Application_LOG_INFO, "I", 25 },
	{ "LOG_ERROR", &class_int, (intptr_t) &SF_com_badlogic_gdx_Application_LOG_ERROR, "I", 25 },
};

static MethodMetadata methods[] {
	{ "getApplicationListener", 0, INDEX_com_badlogic_gdx_Application_getApplicationListener_R_com_badlogic_gdx_ApplicationListener, "()Lcom/badlogic/gdx/ApplicationListener;", 1025 },
	{ "getGraphics", 0, INDEX_com_badlogic_gdx_Application_getGraphics_R_com_badlogic_gdx_Graphics, "()Lcom/badlogic/gdx/Graphics;", 1025 },
	{ "getAudio", 0, INDEX_com_badlogic_gdx_Application_getAudio_R_com_badlogic_gdx_Audio, "()Lcom/badlogic/gdx/Audio;", 1025 },
	{ "getInput", 0, INDEX_com_badlogic_gdx_Application_getInput_R_com_badlogic_gdx_Input, "()Lcom/badlogic/gdx/Input;", 1025 },
	{ "getFiles", 0, INDEX_com_badlogic_gdx_Application_getFiles_R_com_badlogic_gdx_Files, "()Lcom/badlogic/gdx/Files;", 1025 },
	{ "getNet", 0, INDEX_com_badlogic_gdx_Application_getNet_R_com_badlogic_gdx_Net, "()Lcom/badlogic/gdx/Net;", 1025 },
	{ "log", 0, INDEX_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "log", 0, INDEX_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1025 },
	{ "error", 0, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "error", 0, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1025 },
	{ "debug", 0, INDEX_com_badlogic_gdx_Application_debug_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1025 },
	{ "debug", 0, INDEX_com_badlogic_gdx_Application_debug_java_lang_String_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 1025 },
	{ "setLogLevel", 0, INDEX_com_badlogic_gdx_Application_setLogLevel_int, "(I)V", 1025 },
	{ "getLogLevel", 0, INDEX_com_badlogic_gdx_Application_getLogLevel_R_int, "()I", 1025 },
	{ "setApplicationLogger", 0, INDEX_com_badlogic_gdx_Application_setApplicationLogger_com_badlogic_gdx_ApplicationLogger, "(Lcom/badlogic/gdx/ApplicationLogger;)V", 1025 },
	{ "getApplicationLogger", 0, INDEX_com_badlogic_gdx_Application_getApplicationLogger_R_com_badlogic_gdx_ApplicationLogger, "()Lcom/badlogic/gdx/ApplicationLogger;", 1025 },
	{ "getType", 0, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, "()Lcom/badlogic/gdx/Application$ApplicationType;", 1025 },
	{ "getVersion", 0, INDEX_com_badlogic_gdx_Application_getVersion_R_int, "()I", 1025 },
	{ "getJavaHeap", 0, INDEX_com_badlogic_gdx_Application_getJavaHeap_R_long, "()J", 1025 },
	{ "getNativeHeap", 0, INDEX_com_badlogic_gdx_Application_getNativeHeap_R_long, "()J", 1025 },
	{ "getPreferences", 0, INDEX_com_badlogic_gdx_Application_getPreferences_java_lang_String_R_com_badlogic_gdx_Preferences, "(Ljava/lang/String;)Lcom/badlogic/gdx/Preferences;", 1025 },
	{ "getClipboard", 0, INDEX_com_badlogic_gdx_Application_getClipboard_R_com_badlogic_gdx_utils_Clipboard, "()Lcom/badlogic/gdx/utils/Clipboard;", 1025 },
	{ "postRunnable", 0, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1025 },
	{ "exit", 0, INDEX_com_badlogic_gdx_Application_exit, "()V", 1025 },
	{ "addLifecycleListener", 0, INDEX_com_badlogic_gdx_Application_addLifecycleListener_com_badlogic_gdx_LifecycleListener, "(Lcom/badlogic/gdx/LifecycleListener;)V", 1025 },
	{ "removeLifecycleListener", 0, INDEX_com_badlogic_gdx_Application_removeLifecycleListener_com_badlogic_gdx_LifecycleListener, "(Lcom/badlogic/gdx/LifecycleListener;)V", 1025 },
};

Class class_com_badlogic_gdx_Application{
		.nativeName = (intptr_t) "com/badlogic/gdx/Application",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Application),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Application,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Application,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Application,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Application = registerClass(&class_com_badlogic_gdx_Application);

}

