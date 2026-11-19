#include "com/badlogic/gdx/Net_HttpRequest.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Net.h"
#include "java/util/HashMap.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Net_HttpRequest.h"
#include "java/util/Map.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"

extern "C" {


void mark_com_badlogic_gdx_Net$HttpRequest(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Net$HttpRequest *) object;
	if (self->F_httpMethod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_httpMethod)->clazz)->markFunction)((jobject) self->F_httpMethod, mark, depth + 1);
	if (self->F_url)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_url)->clazz)->markFunction)((jobject) self->F_url, mark, depth + 1);
	if (self->F_headers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_headers)->clazz)->markFunction)((jobject) self->F_headers, mark, depth + 1);
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
	if (self->F_contentStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentStream)->clazz)->markFunction)((jobject) self->F_contentStream, mark, depth + 1);
}

void clinit_com_badlogic_gdx_Net$HttpRequest(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_Net$HttpRequest(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Net$HttpRequest(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(178);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(168);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeOut = (jint(0));
	LINE_NUMBER(174);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects = (jint(1));
	LINE_NUMBER(176);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_includeCredentials = (jint(0));
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK(sp[0].o))->F_headers = (jref) sp[1].o;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_Net$HttpRequest_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Net$HttpRequest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	init_com_badlogic_gdx_Net$HttpRequest(ctx, (frame[0].o));
	LINE_NUMBER(186);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_httpMethod = (jref) (frame[1].o);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setUrl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_url = (jref) (frame[1].o);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setHeader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_headers;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setContent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_content = (jref) (frame[1].o);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setContent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(213);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentStream = (jref) (frame[1].o);
	LINE_NUMBER(214);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentLength = (frame[2].l);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setTimeOut", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(221);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeOut = (frame[1].i);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setFollowRedirects", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(229);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_WebGL;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(230);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects = (frame[1].i);
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(232);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Following redirects can't be disabled using the GWT/WebGL backend!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setIncludeCredentials", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(239);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_includeCredentials = (frame[1].i);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:setMethod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_httpMethod = (jref) (frame[1].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getTimeOut", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeOut);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getMethod", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_httpMethod;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getUrl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_url;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getContent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_content;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getContentStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentStream;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getContentLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return ((jlong)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentLength);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getHeaders", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_headers;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getFollowRedirects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:getIncludeCredentials", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_includeCredentials);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_Net$HttpRequest_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Net$HttpRequest:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_httpMethod = (jref) (jobject(nullptr));
	LINE_NUMBER(296);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_url = (jref) (jobject(nullptr));
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_headers;
	((func_java_util_Map_clear) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(298);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeOut = (jint(0));
	LINE_NUMBER(300);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_content = (jref) (jobject(nullptr));
	LINE_NUMBER(301);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentStream = (jref) (jobject(nullptr));
	LINE_NUMBER(302);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentLength = (jlong(0));
	LINE_NUMBER(304);
	((com_badlogic_gdx_Net$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects = (jint(1));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Net$HttpRequest[] {
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
	(void *) M_com_badlogic_gdx_Net$HttpRequest_reset,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean,
	(void *) M_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean,
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
	{ "reset", "()V" },
	{ "setUrl", "(Ljava/lang/String;)V" },
	{ "setHeader", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "setContent", "(Ljava/lang/String;)V" },
	{ "setContent", "(Ljava/io/InputStream;J)V" },
	{ "setTimeOut", "(I)V" },
	{ "setFollowRedirects", "(Z)V" },
	{ "setIncludeCredentials", "(Z)V" },
	{ "setMethod", "(Ljava/lang/String;)V" },
	{ "getTimeOut", "()I" },
	{ "getMethod", "()Ljava/lang/String;" },
	{ "getUrl", "()Ljava/lang/String;" },
	{ "getContent", "()Ljava/lang/String;" },
	{ "getContentStream", "()Ljava/io/InputStream;" },
	{ "getContentLength", "()J" },
	{ "getHeaders", "()Ljava/util/Map;" },
	{ "getFollowRedirects", "()Z" },
	{ "getIncludeCredentials", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "httpMethod", &class_java_lang_String, offsetof(com_badlogic_gdx_Net$HttpRequest, F_httpMethod), "Ljava/lang/String;", 2 },
	{ "url", &class_java_lang_String, offsetof(com_badlogic_gdx_Net$HttpRequest, F_url), "Ljava/lang/String;", 2 },
	{ "headers", &class_java_util_Map, offsetof(com_badlogic_gdx_Net$HttpRequest, F_headers), "Ljava/util/Map;", 2 },
	{ "timeOut", &class_int, offsetof(com_badlogic_gdx_Net$HttpRequest, F_timeOut), "I", 2 },
	{ "content", &class_java_lang_String, offsetof(com_badlogic_gdx_Net$HttpRequest, F_content), "Ljava/lang/String;", 2 },
	{ "contentStream", &class_java_io_InputStream, offsetof(com_badlogic_gdx_Net$HttpRequest, F_contentStream), "Ljava/io/InputStream;", 2 },
	{ "contentLength", &class_long, offsetof(com_badlogic_gdx_Net$HttpRequest, F_contentLength), "J", 2 },
	{ "followRedirects", &class_boolean, offsetof(com_badlogic_gdx_Net$HttpRequest, F_followRedirects), "Z", 2 },
	{ "includeCredentials", &class_boolean, offsetof(com_badlogic_gdx_Net$HttpRequest, F_includeCredentials), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Net$HttpRequest, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Net$HttpRequest_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setUrl", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setHeader", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_setHeader_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "setContent", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_setContent_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setContent", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long, VTABLE_com_badlogic_gdx_Net$HttpRequest_setContent_java_io_InputStream_long, "(Ljava/io/InputStream;J)V", 1 },
	{ "setTimeOut", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int, VTABLE_com_badlogic_gdx_Net$HttpRequest_setTimeOut_int, "(I)V", 1 },
	{ "setFollowRedirects", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean, VTABLE_com_badlogic_gdx_Net$HttpRequest_setFollowRedirects_boolean, "(Z)V", 1 },
	{ "setIncludeCredentials", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean, VTABLE_com_badlogic_gdx_Net$HttpRequest_setIncludeCredentials_boolean, "(Z)V", 1 },
	{ "setMethod", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_setMethod_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getTimeOut", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int, VTABLE_com_badlogic_gdx_Net$HttpRequest_getTimeOut_R_int, "()I", 1 },
	{ "getMethod", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_getMethod_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getUrl", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_getUrl_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getContent", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String, VTABLE_com_badlogic_gdx_Net$HttpRequest_getContent_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getContentStream", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream, VTABLE_com_badlogic_gdx_Net$HttpRequest_getContentStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1 },
	{ "getContentLength", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long, VTABLE_com_badlogic_gdx_Net$HttpRequest_getContentLength_R_long, "()J", 1 },
	{ "getHeaders", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map, VTABLE_com_badlogic_gdx_Net$HttpRequest_getHeaders_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "getFollowRedirects", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean, VTABLE_com_badlogic_gdx_Net$HttpRequest_getFollowRedirects_R_boolean, "()Z", 1 },
	{ "getIncludeCredentials", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean, VTABLE_com_badlogic_gdx_Net$HttpRequest_getIncludeCredentials_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_Net$HttpRequest_reset, VTABLE_com_badlogic_gdx_Net$HttpRequest_reset, "()V", 1 },
};

Class class_com_badlogic_gdx_Net$HttpRequest{
		.nativeName = (intptr_t) "com/badlogic/gdx/Net$HttpRequest",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Net$HttpRequest),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Net$HttpRequest,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Net$HttpRequest,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Net$HttpRequest,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Net,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Net$HttpRequest = registerClass(&class_com_badlogic_gdx_Net$HttpRequest);

}

