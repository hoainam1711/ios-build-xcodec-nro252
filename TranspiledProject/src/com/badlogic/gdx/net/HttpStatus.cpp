#include "com/badlogic/gdx/net/HttpStatus.h"
#include "com/badlogic/gdx/net/HttpStatus.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_com_badlogic_gdx_net_HttpStatus_SC_CONTINUE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_SWITCHING_PROTOCOLS;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_PROCESSING;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_OK;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_CREATED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_ACCEPTED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_NON_AUTHORITATIVE_INFORMATION;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_NO_CONTENT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_RESET_CONTENT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_PARTIAL_CONTENT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_MULTI_STATUS;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_MULTIPLE_CHOICES;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_MOVED_PERMANENTLY;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_MOVED_TEMPORARILY;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_SEE_OTHER;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_MODIFIED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_USE_PROXY;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_TEMPORARY_REDIRECT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_BAD_REQUEST;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_UNAUTHORIZED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_PAYMENT_REQUIRED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_FORBIDDEN;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_FOUND;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_METHOD_NOT_ALLOWED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_ACCEPTABLE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_PROXY_AUTHENTICATION_REQUIRED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_TIMEOUT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_CONFLICT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_GONE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_LENGTH_REQUIRED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_PRECONDITION_FAILED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_TOO_LONG;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_URI_TOO_LONG;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_UNSUPPORTED_MEDIA_TYPE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_REQUESTED_RANGE_NOT_SATISFIABLE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_EXPECTATION_FAILED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_INSUFFICIENT_SPACE_ON_RESOURCE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_METHOD_FAILURE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_UNPROCESSABLE_ENTITY;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_LOCKED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_FAILED_DEPENDENCY;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_INTERNAL_SERVER_ERROR;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_IMPLEMENTED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_BAD_GATEWAY;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_SERVICE_UNAVAILABLE;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_GATEWAY_TIMEOUT;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_HTTP_VERSION_NOT_SUPPORTED;
jint SF_com_badlogic_gdx_net_HttpStatus_SC_INSUFFICIENT_STORAGE;

void mark_com_badlogic_gdx_net_HttpStatus(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_net_HttpStatus *) object;
}

void clinit_com_badlogic_gdx_net_HttpStatus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_net_HttpStatus_SC_CONTINUE = jint(100);
	SF_com_badlogic_gdx_net_HttpStatus_SC_SWITCHING_PROTOCOLS = jint(101);
	SF_com_badlogic_gdx_net_HttpStatus_SC_PROCESSING = jint(102);
	SF_com_badlogic_gdx_net_HttpStatus_SC_OK = jint(200);
	SF_com_badlogic_gdx_net_HttpStatus_SC_CREATED = jint(201);
	SF_com_badlogic_gdx_net_HttpStatus_SC_ACCEPTED = jint(202);
	SF_com_badlogic_gdx_net_HttpStatus_SC_NON_AUTHORITATIVE_INFORMATION = jint(203);
	SF_com_badlogic_gdx_net_HttpStatus_SC_NO_CONTENT = jint(204);
	SF_com_badlogic_gdx_net_HttpStatus_SC_RESET_CONTENT = jint(205);
	SF_com_badlogic_gdx_net_HttpStatus_SC_PARTIAL_CONTENT = jint(206);
	SF_com_badlogic_gdx_net_HttpStatus_SC_MULTI_STATUS = jint(207);
	SF_com_badlogic_gdx_net_HttpStatus_SC_MULTIPLE_CHOICES = jint(300);
	SF_com_badlogic_gdx_net_HttpStatus_SC_MOVED_PERMANENTLY = jint(301);
	SF_com_badlogic_gdx_net_HttpStatus_SC_MOVED_TEMPORARILY = jint(302);
	SF_com_badlogic_gdx_net_HttpStatus_SC_SEE_OTHER = jint(303);
	SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_MODIFIED = jint(304);
	SF_com_badlogic_gdx_net_HttpStatus_SC_USE_PROXY = jint(305);
	SF_com_badlogic_gdx_net_HttpStatus_SC_TEMPORARY_REDIRECT = jint(307);
	SF_com_badlogic_gdx_net_HttpStatus_SC_BAD_REQUEST = jint(400);
	SF_com_badlogic_gdx_net_HttpStatus_SC_UNAUTHORIZED = jint(401);
	SF_com_badlogic_gdx_net_HttpStatus_SC_PAYMENT_REQUIRED = jint(402);
	SF_com_badlogic_gdx_net_HttpStatus_SC_FORBIDDEN = jint(403);
	SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_FOUND = jint(404);
	SF_com_badlogic_gdx_net_HttpStatus_SC_METHOD_NOT_ALLOWED = jint(405);
	SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_ACCEPTABLE = jint(406);
	SF_com_badlogic_gdx_net_HttpStatus_SC_PROXY_AUTHENTICATION_REQUIRED = jint(407);
	SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_TIMEOUT = jint(408);
	SF_com_badlogic_gdx_net_HttpStatus_SC_CONFLICT = jint(409);
	SF_com_badlogic_gdx_net_HttpStatus_SC_GONE = jint(410);
	SF_com_badlogic_gdx_net_HttpStatus_SC_LENGTH_REQUIRED = jint(411);
	SF_com_badlogic_gdx_net_HttpStatus_SC_PRECONDITION_FAILED = jint(412);
	SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_TOO_LONG = jint(413);
	SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_URI_TOO_LONG = jint(414);
	SF_com_badlogic_gdx_net_HttpStatus_SC_UNSUPPORTED_MEDIA_TYPE = jint(415);
	SF_com_badlogic_gdx_net_HttpStatus_SC_REQUESTED_RANGE_NOT_SATISFIABLE = jint(416);
	SF_com_badlogic_gdx_net_HttpStatus_SC_EXPECTATION_FAILED = jint(417);
	SF_com_badlogic_gdx_net_HttpStatus_SC_INSUFFICIENT_SPACE_ON_RESOURCE = jint(419);
	SF_com_badlogic_gdx_net_HttpStatus_SC_METHOD_FAILURE = jint(420);
	SF_com_badlogic_gdx_net_HttpStatus_SC_UNPROCESSABLE_ENTITY = jint(422);
	SF_com_badlogic_gdx_net_HttpStatus_SC_LOCKED = jint(423);
	SF_com_badlogic_gdx_net_HttpStatus_SC_FAILED_DEPENDENCY = jint(424);
	SF_com_badlogic_gdx_net_HttpStatus_SC_INTERNAL_SERVER_ERROR = jint(500);
	SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_IMPLEMENTED = jint(501);
	SF_com_badlogic_gdx_net_HttpStatus_SC_BAD_GATEWAY = jint(502);
	SF_com_badlogic_gdx_net_HttpStatus_SC_SERVICE_UNAVAILABLE = jint(503);
	SF_com_badlogic_gdx_net_HttpStatus_SC_GATEWAY_TIMEOUT = jint(504);
	SF_com_badlogic_gdx_net_HttpStatus_SC_HTTP_VERSION_NOT_SUPPORTED = jint(505);
	SF_com_badlogic_gdx_net_HttpStatus_SC_INSUFFICIENT_STORAGE = jint(507);
}

jint M_com_badlogic_gdx_net_HttpStatus_getStatusCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/net/HttpStatus:getStatusCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_net_HttpStatus *) NULL_CHECK((frame[0].o)))->F_statusCode);
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_net_HttpStatus_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/net/HttpStatus:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_net_HttpStatus(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_net_HttpStatus *) NULL_CHECK((frame[0].o)))->F_statusCode = (frame[1].i);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_net_HttpStatus[] {
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
	(void *) M_com_badlogic_gdx_net_HttpStatus_getStatusCode_R_int,
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
	{ "getStatusCode", "()I" },
};

static FieldMetadata fields[] {
	{ "statusCode", &class_int, offsetof(com_badlogic_gdx_net_HttpStatus, F_statusCode), "I", 0 },
	{ "SC_CONTINUE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_CONTINUE, "I", 25 },
	{ "SC_SWITCHING_PROTOCOLS", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_SWITCHING_PROTOCOLS, "I", 25 },
	{ "SC_PROCESSING", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_PROCESSING, "I", 25 },
	{ "SC_OK", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_OK, "I", 25 },
	{ "SC_CREATED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_CREATED, "I", 25 },
	{ "SC_ACCEPTED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_ACCEPTED, "I", 25 },
	{ "SC_NON_AUTHORITATIVE_INFORMATION", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_NON_AUTHORITATIVE_INFORMATION, "I", 25 },
	{ "SC_NO_CONTENT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_NO_CONTENT, "I", 25 },
	{ "SC_RESET_CONTENT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_RESET_CONTENT, "I", 25 },
	{ "SC_PARTIAL_CONTENT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_PARTIAL_CONTENT, "I", 25 },
	{ "SC_MULTI_STATUS", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_MULTI_STATUS, "I", 25 },
	{ "SC_MULTIPLE_CHOICES", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_MULTIPLE_CHOICES, "I", 25 },
	{ "SC_MOVED_PERMANENTLY", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_MOVED_PERMANENTLY, "I", 25 },
	{ "SC_MOVED_TEMPORARILY", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_MOVED_TEMPORARILY, "I", 25 },
	{ "SC_SEE_OTHER", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_SEE_OTHER, "I", 25 },
	{ "SC_NOT_MODIFIED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_MODIFIED, "I", 25 },
	{ "SC_USE_PROXY", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_USE_PROXY, "I", 25 },
	{ "SC_TEMPORARY_REDIRECT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_TEMPORARY_REDIRECT, "I", 25 },
	{ "SC_BAD_REQUEST", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_BAD_REQUEST, "I", 25 },
	{ "SC_UNAUTHORIZED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_UNAUTHORIZED, "I", 25 },
	{ "SC_PAYMENT_REQUIRED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_PAYMENT_REQUIRED, "I", 25 },
	{ "SC_FORBIDDEN", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_FORBIDDEN, "I", 25 },
	{ "SC_NOT_FOUND", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_FOUND, "I", 25 },
	{ "SC_METHOD_NOT_ALLOWED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_METHOD_NOT_ALLOWED, "I", 25 },
	{ "SC_NOT_ACCEPTABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_ACCEPTABLE, "I", 25 },
	{ "SC_PROXY_AUTHENTICATION_REQUIRED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_PROXY_AUTHENTICATION_REQUIRED, "I", 25 },
	{ "SC_REQUEST_TIMEOUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_TIMEOUT, "I", 25 },
	{ "SC_CONFLICT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_CONFLICT, "I", 25 },
	{ "SC_GONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_GONE, "I", 25 },
	{ "SC_LENGTH_REQUIRED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_LENGTH_REQUIRED, "I", 25 },
	{ "SC_PRECONDITION_FAILED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_PRECONDITION_FAILED, "I", 25 },
	{ "SC_REQUEST_TOO_LONG", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_TOO_LONG, "I", 25 },
	{ "SC_REQUEST_URI_TOO_LONG", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_REQUEST_URI_TOO_LONG, "I", 25 },
	{ "SC_UNSUPPORTED_MEDIA_TYPE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_UNSUPPORTED_MEDIA_TYPE, "I", 25 },
	{ "SC_REQUESTED_RANGE_NOT_SATISFIABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_REQUESTED_RANGE_NOT_SATISFIABLE, "I", 25 },
	{ "SC_EXPECTATION_FAILED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_EXPECTATION_FAILED, "I", 25 },
	{ "SC_INSUFFICIENT_SPACE_ON_RESOURCE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_INSUFFICIENT_SPACE_ON_RESOURCE, "I", 25 },
	{ "SC_METHOD_FAILURE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_METHOD_FAILURE, "I", 25 },
	{ "SC_UNPROCESSABLE_ENTITY", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_UNPROCESSABLE_ENTITY, "I", 25 },
	{ "SC_LOCKED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_LOCKED, "I", 25 },
	{ "SC_FAILED_DEPENDENCY", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_FAILED_DEPENDENCY, "I", 25 },
	{ "SC_INTERNAL_SERVER_ERROR", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_INTERNAL_SERVER_ERROR, "I", 25 },
	{ "SC_NOT_IMPLEMENTED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_NOT_IMPLEMENTED, "I", 25 },
	{ "SC_BAD_GATEWAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_BAD_GATEWAY, "I", 25 },
	{ "SC_SERVICE_UNAVAILABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_SERVICE_UNAVAILABLE, "I", 25 },
	{ "SC_GATEWAY_TIMEOUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_GATEWAY_TIMEOUT, "I", 25 },
	{ "SC_HTTP_VERSION_NOT_SUPPORTED", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_HTTP_VERSION_NOT_SUPPORTED, "I", 25 },
	{ "SC_INSUFFICIENT_STORAGE", &class_int, (intptr_t) &SF_com_badlogic_gdx_net_HttpStatus_SC_INSUFFICIENT_STORAGE, "I", 25 },
};

static MethodMetadata methods[] {
	{ "getStatusCode", (intptr_t) M_com_badlogic_gdx_net_HttpStatus_getStatusCode_R_int, VTABLE_com_badlogic_gdx_net_HttpStatus_getStatusCode_R_int, "()I", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_net_HttpStatus_int, 0, "(I)V", 1 },
};

Class class_com_badlogic_gdx_net_HttpStatus{
		.nativeName = (intptr_t) "com/badlogic/gdx/net/HttpStatus",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_net_HttpStatus),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_net_HttpStatus,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_net_HttpStatus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_net_HttpStatus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 49,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_net_HttpStatus = registerClass(&class_com_badlogic_gdx_net_HttpStatus);

}

