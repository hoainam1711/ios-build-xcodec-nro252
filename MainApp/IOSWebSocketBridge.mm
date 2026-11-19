#import <Foundation/Foundation.h>

#define Class ClearwingJavaClass
#include "com/nro/clearwing/IOSWebSocketBridge.h"
#include "java/lang/String.h"
#undef Class

#include "WebSocketEventQueue.h"

#include <cstring>
#include <mutex>

@interface ClearwingWebSocketDelegate : NSObject <NSURLSessionWebSocketDelegate> {
    int64_t _generation;
    BOOL _secure;
}
- (instancetype)initWithGeneration:(int64_t)generation secure:(BOOL)secure;
@end

namespace {

using clearwing::websocket::Event;
using clearwing::websocket::EventQueue;
using clearwing::websocket::EventType;
using clearwing::websocket::Generation;
using clearwing::websocket::MessageResult;
using clearwing::websocket::maxMessageBytes;

constexpr std::size_t maxOutboundMessages = 1024;
constexpr std::size_t maxOutboundBytes = maxMessageBytes;
constexpr std::size_t pollMessageBudget = 4 * 1024 * 1024;
constexpr unsigned int pollEventLimit = 32;

struct Connection {
    NSURLSession *session;
    NSURLSessionWebSocketTask *task;
    std::deque<NSData *> outbound;
    std::size_t outboundBytes = 0;
};

// Foundation may finish delivering canceled tasks during process teardown.
[[clang::no_destroy]] std::mutex connectionMutex;
[[clang::no_destroy]] EventQueue events;
[[clang::no_destroy]] std::unordered_map<Generation, Connection> connections;

NSURL *gatewayURL(jobject url) {
    const auto string = (jstring)url;
    if (!string || !string->F_value)
        return nil;

    const auto characters = (jarray)string->F_value;
    const auto length = static_cast<NSUInteger>(characters->length);
    const auto *data = static_cast<const unichar *>(characters->data);
    for (NSUInteger index = 0; index < length; ++index) {
        if (data[index] <= 0x20 || data[index] == 0x7f)
            return nil;
    }
    if (!length)
        return nil;

    NSString *value = [[NSString alloc] initWithCharacters:data length:length];
    NSURL *parsed = [NSURL URLWithString:value];
    if (!parsed.host.length || parsed.user || parsed.password || parsed.fragment)
        return nil;

    NSString *scheme = parsed.scheme.lowercaseString;
    if ([scheme isEqualToString:@"wss"])
        return parsed;
#if defined(DEBUG) && DEBUG
    if ([scheme isEqualToString:@"ws"])
        return parsed;
#endif
    return nil;
}

void stopTask(NSURLSession *session, NSURLSessionWebSocketTask *task, NSURLSessionWebSocketCloseCode code) {
    if (code != NSURLSessionWebSocketCloseCodeInvalid)
        [task cancelWithCloseCode:code reason:nil];
    [session finishTasksAndInvalidate];
}

void terminate(
    Generation generation,
    std::string_view error = {},
    NSURLSessionWebSocketCloseCode code = NSURLSessionWebSocketCloseCodeInvalid,
    bool retire = false
) {
    NSURLSession *session = nil;
    NSURLSessionWebSocketTask *task = nil;
    {
        std::lock_guard lock(connectionMutex);
        if (retire)
            events.discard(generation);
        else if (!events.finish(generation, error))
            return;

        const auto connection = connections.find(generation);
        if (connection != connections.end()) {
            session = connection->second.session;
            task = connection->second.task;
            connections.erase(connection);
        }
    }
    stopTask(session, task, code);
}

void handleTaskFailure(Generation generation, NSURLSessionWebSocketTask *task, NSError *error) {
    const auto code = task.closeCode;
    if (code != NSURLSessionWebSocketCloseCodeInvalid &&
        code != NSURLSessionWebSocketCloseCodeAbnormalClosure &&
        code != NSURLSessionWebSocketCloseCodeTLSHandshakeFailure) {
        terminate(generation);
        return;
    }
    const char *reason = error.localizedDescription.UTF8String;
    terminate(generation, reason && *reason ? reason : "WebSocket connection ended unexpectedly",
              NSURLSessionWebSocketCloseCodeGoingAway);
}

void receive(Generation generation, NSURLSessionWebSocketTask *task) {
    __weak NSURLSessionWebSocketTask *weakTask = task;
    [task receiveMessageWithCompletionHandler:^(NSURLSessionWebSocketMessage *message, NSError *error) {
        NSURLSessionWebSocketTask *activeTask = weakTask;
        if (!activeTask)
            return;
        if (error || !message) {
            handleTaskFailure(generation, activeTask, error);
            return;
        }
        if (message.type != NSURLSessionWebSocketMessageTypeData) {
            terminate(generation, "WebSocket gateway sent a non-binary message",
                      NSURLSessionWebSocketCloseCodeUnsupportedData);
            return;
        }
        NSData *data = message.data;
        MessageResult result;
        {
            std::lock_guard lock(connectionMutex);
            result = events.message(generation, data.bytes, data.length);
        }
        if (result == MessageResult::Queued) {
            receive(generation, activeTask);
        } else if (result == MessageResult::Full) {
            terminate(generation, "WebSocket inbound message or queue limit exceeded",
                      NSURLSessionWebSocketCloseCodeMessageTooBig);
        }
    }];
}

void sendFirst(Generation generation, NSURLSessionWebSocketTask *task, NSData *data) {
    __weak NSURLSessionWebSocketTask *weakTask = task;
    NSURLSessionWebSocketMessage *message = [[NSURLSessionWebSocketMessage alloc] initWithData:data];
    [task sendMessage:message completionHandler:^(NSError *error) {
        NSURLSessionWebSocketTask *activeTask = weakTask;
        if (!activeTask)
            return;
        if (error) {
            handleTaskFailure(generation, activeTask, error);
            return;
        }
        NSData *next = nil;
        {
            std::lock_guard lock(connectionMutex);
            const auto connection = connections.find(generation);
            if (connection == connections.end())
                return;
            auto &outbound = connection->second.outbound;
            connection->second.outboundBytes -= outbound.front().length;
            outbound.pop_front();
            if (!outbound.empty())
                next = outbound.front();
        }
        if (next)
            sendFirst(generation, activeTask, next);
    }];
}

void dispatchEvent(jcontext ctx, const Event &event) {
    jtype roots[1]{};
    const FrameInfo info{"com/nro/clearwing/IOSWebSocketBridge:pollEvents", 1};
    const auto frame = pushStackFrame(ctx, &info, roots);
    tryCatch(frame, [&] {
        switch (event.type) {
            case EventType::Open:
                SM_com_nro_clearwing_IOSWebSocketBridge_onOpen_long(ctx, event.generation);
                break;
            case EventType::Message: {
                const auto array = createArray(ctx, &class_byte, static_cast<int>(event.bytes.size()));
                roots[0].o = (jobject)array;
                if (!event.bytes.empty())
                    std::memcpy(array->data, event.bytes.data(), event.bytes.size());
                SM_com_nro_clearwing_IOSWebSocketBridge_onMessage_long_Array1_byte(ctx, event.generation, roots[0].o);
                break;
            }
            case EventType::Close:
                SM_com_nro_clearwing_IOSWebSocketBridge_onClose_long(ctx, event.generation);
                break;
            case EventType::Error:
                roots[0].o = (jobject)stringFromNative(ctx, event.error.c_str());
                SM_com_nro_clearwing_IOSWebSocketBridge_onError_long_java_lang_String(ctx, event.generation, roots[0].o);
                break;
        }
    }, nullptr, [&](jobject) {
        roots[0].o = nullptr;
        NSLog(@"Clearwing WebSocket listener threw an exception");
    });
    popStackFrame(ctx);
}

} // namespace

@implementation ClearwingWebSocketDelegate

- (instancetype)initWithGeneration:(int64_t)generation secure:(BOOL)secure {
    self = [super init];
    if (self) {
        _generation = generation;
        _secure = secure;
    }
    return self;
}

- (void)URLSession:(NSURLSession *)session
    webSocketTask:(NSURLSessionWebSocketTask *)task
    didOpenWithProtocol:(NSString *)protocol {
    {
        std::lock_guard lock(connectionMutex);
        if (!events.open(_generation))
            return;
    }
    receive(_generation, task);
}

- (void)URLSession:(NSURLSession *)session
    webSocketTask:(NSURLSessionWebSocketTask *)task
    didCloseWithCode:(NSURLSessionWebSocketCloseCode)code
    reason:(NSData *)reason {
    terminate(_generation);
}

- (void)URLSession:(NSURLSession *)session
    task:(NSURLSessionTask *)task
    didCompleteWithError:(NSError *)error {
    if (error)
        handleTaskFailure(_generation, (NSURLSessionWebSocketTask *)task, error);
    else
        terminate(_generation);
}

- (void)URLSession:(NSURLSession *)session
    task:(NSURLSessionTask *)task
    willPerformHTTPRedirection:(NSHTTPURLResponse *)response
    newRequest:(NSURLRequest *)request
    completionHandler:(void (^)(NSURLRequest *))completionHandler {
    NSString *scheme = request.URL.scheme.lowercaseString;
    const bool secure = [scheme isEqualToString:@"https"] || [scheme isEqualToString:@"wss"];
    const bool insecure = [scheme isEqualToString:@"http"] || [scheme isEqualToString:@"ws"];
    completionHandler(secure || (!_secure && insecure) ? request : nil);
}

@end

extern "C" {

jbool SM_com_nro_clearwing_IOSWebSocketBridge_connectNative_java_lang_String_long_R_boolean(
    jcontext, jobject url, jlong generation
) {
    @autoreleasepool {
        NSURL *parsed = gatewayURL(url);
        NSURLSessionWebSocketTask *task = nil;
        {
            std::lock_guard lock(connectionMutex);
            if (!events.start(generation))
                return false;
            if (!parsed) {
#if defined(DEBUG) && DEBUG
                events.finish(generation, "Invalid WebSocket gateway URL");
#else
                events.finish(generation, "The iOS WebSocket gateway must use a valid wss:// URL");
#endif
                return true;
            }

            const BOOL secure = [parsed.scheme.lowercaseString isEqualToString:@"wss"];
            ClearwingWebSocketDelegate *delegate =
                [[ClearwingWebSocketDelegate alloc] initWithGeneration:generation secure:secure];
            NSURLSessionConfiguration *configuration = NSURLSessionConfiguration.ephemeralSessionConfiguration;
            configuration.timeoutIntervalForRequest = 10;
            NSURLSession *session = [NSURLSession sessionWithConfiguration:configuration delegate:delegate delegateQueue:nil];
            task = [session webSocketTaskWithURL:parsed];
            task.maximumMessageSize = static_cast<NSInteger>(maxMessageBytes);
            connections.emplace(generation, Connection{session, task, {}, 0});
        }
        [task resume];
        return true;
    }
}

void SM_com_nro_clearwing_IOSWebSocketBridge_sendNative_Array1_byte_long(
    jcontext, jobject payload, jlong generation
) {
    @autoreleasepool {
        if (!payload)
            return;
        const auto array = (jarray)payload;
        const auto size = static_cast<std::size_t>(array->length);
        NSURLSessionWebSocketTask *task = nil;
        NSData *first = nil;
        bool overflow = false;
        {
            std::lock_guard lock(connectionMutex);
            const auto connection = connections.find(generation);
            if (connection == connections.end())
                return;
            auto &state = connection->second;
            overflow = state.outbound.size() >= maxOutboundMessages ||
                       size > maxOutboundBytes - state.outboundBytes;
            if (!overflow) {
                NSData *data = size ? [NSData dataWithBytes:array->data length:size] : [NSData data];
                if (state.outbound.empty()) {
                    task = state.task;
                    first = data;
                }
                state.outbound.push_back(data);
                state.outboundBytes += size;
            }
        }
        if (overflow) {
            terminate(generation, "WebSocket outbound message or queue limit exceeded",
                      NSURLSessionWebSocketCloseCodeMessageTooBig);
        } else if (first) {
            sendFirst(generation, task, first);
        }
    }
}

void SM_com_nro_clearwing_IOSWebSocketBridge_closeNative_long(jcontext, jlong generation) {
    @autoreleasepool {
        terminate(generation, {}, NSURLSessionWebSocketCloseCodeNormalClosure, true);
    }
}

void SM_com_nro_clearwing_IOSWebSocketBridge_pollEvents(jcontext ctx) {
    @autoreleasepool {
        std::size_t bytes = 0;
        for (unsigned int count = 0; count < pollEventLimit && bytes < pollMessageBudget; ++count) {
            std::optional<Event> event;
            {
                std::lock_guard lock(connectionMutex);
                event = events.pop();
            }
            if (!event)
                return;

            bytes += event->bytes.size();
            dispatchEvent(ctx, *event);
        }
    }
}

} // extern "C"
