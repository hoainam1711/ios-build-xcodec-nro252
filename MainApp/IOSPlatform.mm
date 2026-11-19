#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <SDL_syswm.h>
#import <UIKit/UIKit.h>
#import <OpenGLES/ES2/gl.h>

#include "IOSInput.h"
#include "IOSPlatform.h"
#include <cstring>
#include <utility>

void clearwingGameMain();

extern "C" int SDL_main(int, char **) {
    clearwingGameMain();
    return 0;
}

int main(int argc, char **argv) {
    return SDL_UIKitRunApp(argc, argv, SDL_main);
}

namespace {
SDL_Window *window;
SDL_GLContext context;
GLuint framebuffer, colorbuffer;
ios::InputQueue input;
bool paused, terminating, insidePump, watchingLifecycle;
UIAlertController *dialog;
int dialogResult;
std::string dialogText;

bool refreshDrawable() {
    SDL_SysWMinfo wm{};
    SDL_VERSION(&wm.version);
    if (!SDL_GetWindowWMInfo(window, &wm)) return false;
    framebuffer = wm.info.uikit.framebuffer;
    colorbuffer = wm.info.uikit.colorbuffer;
    return framebuffer && colorbuffer;
}

void handleFinger(const SDL_TouchFingerEvent &e, ios::InputKind kind) {
    int width, height;
    SDL_GL_GetDrawableSize(window, &width, &height);
    if (width > 0 && height > 0)
        input.touch(kind, e.touchId, e.fingerId, ios::pixelCoordinate(e.x, width), ios::pixelCoordinate(e.y, height));
}

void handleText(const char *utf8) {
    NSString *text = [NSString stringWithUTF8String:utf8];
    for (NSUInteger i = 0; i < text.length; ++i) input.key([text characterAtIndex:i]);
}

// UIKit can suspend the process before SDL_PollEvent returns from the run loop.
// Deliver the notification while UIKit is still executing on the VM main thread.
int SDLCALL filterLifecycle(void *, SDL_Event *event) {
    if (![NSThread isMainThread] || !insidePump) return 1;
    switch (event->type) {
        case SDL_APP_WILLENTERBACKGROUND:
        case SDL_APP_DIDENTERBACKGROUND:
            if (!paused) {
                paused = true;
                input.cancelTouches();
                iosLifecycleChanged(2);
                if (event->type == SDL_APP_WILLENTERBACKGROUND) glFinish();
            }
            return 0;
        case SDL_APP_DIDENTERFOREGROUND:
            if (paused) {
                paused = false;
                refreshDrawable();
                iosLifecycleChanged(3);
            }
            return 0;
        case SDL_APP_TERMINATING:
            if (!terminating) {
                terminating = true;
                iosLifecycleChanged(0);
            }
            return 0;
        default: return 1;
    }
}
}

bool iosOpenVideo(bool vsync) {
    SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
    SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");
    SDL_SetHint(SDL_HINT_ORIENTATIONS, "LandscapeLeft LandscapeRight");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS) != 0) return false;
    SDL_SetEventFilter(filterLifecycle, nullptr);
    watchingLifecycle = true;
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_DisplayMode mode{};
    if (SDL_GetDesktopDisplayMode(0, &mode) != 0) return false;
    window = SDL_CreateWindow("", 0, 0, mode.w, mode.h,
        SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN | SDL_WINDOW_ALLOW_HIGHDPI);
    if (!window) return false;
    context = SDL_GL_CreateContext(window);
    if (!context || SDL_GL_MakeCurrent(window, context) != 0 || !refreshDrawable()) return false;
    SDL_GL_SetSwapInterval(vsync ? 1 : 0);
    SDL_StopTextInput();
    glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);
    glBindRenderbuffer(GL_RENDERBUFFER, colorbuffer);
    return true;
}

void iosCloseVideo() {
    @autoreleasepool {
        [dialog dismissViewControllerAnimated:NO completion:nil];
        dialog = nil;
        dialogText.clear();
        dialogResult = 0;
        input = {};
        if (watchingLifecycle) SDL_SetEventFilter(nullptr, nullptr);
        watchingLifecycle = false;
        if (context) SDL_GL_DeleteContext(context);
        if (window) SDL_DestroyWindow(window);
        context = nullptr;
        window = nullptr;
        SDL_Quit();
    }
}

unsigned iosDefaultFramebuffer() { return framebuffer; }
void iosDrawableSize(int *width, int *height) { SDL_GL_GetDrawableSize(window, width, height); }

void iosSwapDrawable() {
    @autoreleasepool {
        if (paused || UIApplication.sharedApplication.applicationState == UIApplicationStateBackground) return;
        GLint oldFramebuffer, oldRenderbuffer;
        glGetIntegerv(GL_FRAMEBUFFER_BINDING, &oldFramebuffer);
        glGetIntegerv(GL_RENDERBUFFER_BINDING, &oldRenderbuffer);
        glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);
        glBindRenderbuffer(GL_RENDERBUFFER, colorbuffer);
        SDL_GL_SwapWindow(window);
        glBindFramebuffer(GL_FRAMEBUFFER, oldFramebuffer);
        glBindRenderbuffer(GL_RENDERBUFFER, oldRenderbuffer);
    }
}

int iosPumpEvents() {
    @autoreleasepool {
        struct PumpGuard {
            PumpGuard() { insidePump = true; }
            ~PumpGuard() { insidePump = false; }
        } guard;
        if (paused) CFRunLoopRunInMode(kCFRunLoopDefaultMode, 0.025, true);
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_APP_TERMINATING:
                    terminating = true;
                    iosLifecycleChanged(0);
                    return 0;
                case SDL_QUIT: return 0;
                case SDL_APP_WILLENTERBACKGROUND:
                case SDL_APP_DIDENTERBACKGROUND:
                    if (!paused) {
                        paused = true;
                        input.cancelTouches();
                        iosLifecycleChanged(2);
                        return 2;
                    }
                    break;
                case SDL_APP_DIDENTERFOREGROUND:
                    if (paused) {
                        paused = false;
                        refreshDrawable();
                        iosLifecycleChanged(3);
                        return 3;
                    }
                    break;
                case SDL_FINGERDOWN: if (!paused) handleFinger(e.tfinger, ios::down); break;
                case SDL_FINGERMOTION: if (!paused) handleFinger(e.tfinger, ios::drag); break;
                case SDL_FINGERUP: if (!paused) handleFinger(e.tfinger, ios::up); break;
                case SDL_TEXTINPUT: if (!paused && !dialog) handleText(e.text.text); break;
                case SDL_KEYDOWN:
                    if (!paused && !dialog && SDL_IsTextInputActive()) {
                        if (e.key.keysym.sym == SDLK_BACKSPACE) input.key('\b');
                        if (e.key.keysym.sym == SDLK_RETURN || e.key.keysym.sym == SDLK_KP_ENTER) input.key('\r');
                    }
                    break;
                case SDL_WINDOWEVENT:
                    if (!paused && (e.window.event == SDL_WINDOWEVENT_SIZE_CHANGED || e.window.event == SDL_WINDOWEVENT_RESIZED))
                        refreshDrawable();
                    break;
            }
        }
        if (terminating) return 0;
        return paused ? 2 : 1;
    }
}

int iosPollInput(int *values) {
    ios::InputEvent event;
    if (input.poll(event)) {
        values[0] = event.pointerOrChar;
        values[1] = event.x;
        values[2] = event.y;
        return event.kind;
    }
    return std::exchange(dialogResult, 0);
}

bool iosBeginTextInput(const char *title, const char *text, const char *hint, const char *keyboardType) {
    @autoreleasepool {
        if (!window || paused || dialog || dialogResult) return false;
        SDL_SysWMinfo wm{};
        SDL_VERSION(&wm.version);
        if (!SDL_GetWindowWMInfo(window, &wm)) return false;
        UIViewController *presenter = wm.info.uikit.window.rootViewController;
        if (!presenter || presenter.presentedViewController) return false;
        SDL_StopTextInput();
        // SDL observes UIKit keyboard notifications even for a different text field.
        // Keep its hidden field from taking focus from the alert.
        SDL_SetHint(SDL_HINT_ENABLE_SCREEN_KEYBOARD, "0");
        dialog = [UIAlertController alertControllerWithTitle:@(title) message:nil preferredStyle:UIAlertControllerStyleAlert];
        [dialog addTextFieldWithConfigurationHandler:^(UITextField *field) {
            field.text = @(text);
            field.placeholder = @(hint);
            field.autocorrectionType = UITextAutocorrectionTypeNo;
            if (!strcmp(keyboardType, "Password")) field.secureTextEntry = YES;
            if (!strcmp(keyboardType, "NumberPad")) field.keyboardType = UIKeyboardTypeNumberPad;
            if (!strcmp(keyboardType, "PhonePad")) field.keyboardType = UIKeyboardTypePhonePad;
            if (!strcmp(keyboardType, "Email")) field.keyboardType = UIKeyboardTypeEmailAddress;
            if (!strcmp(keyboardType, "URI")) field.keyboardType = UIKeyboardTypeURL;
        }];
        [dialog addAction:[UIAlertAction actionWithTitle:NSLocalizedString(@"Cancel", nil) style:UIAlertActionStyleCancel handler:^(UIAlertAction *) {
            SDL_SetHint(SDL_HINT_ENABLE_SCREEN_KEYBOARD, "1");
            SDL_StopTextInput();
            dialogResult = 7;
            dialog = nil;
        }]];
        [dialog addAction:[UIAlertAction actionWithTitle:NSLocalizedString(@"OK", nil) style:UIAlertActionStyleDefault handler:^(UIAlertAction *) {
            SDL_SetHint(SDL_HINT_ENABLE_SCREEN_KEYBOARD, "1");
            SDL_StopTextInput();
            const char *value = dialog.textFields.firstObject.text.UTF8String;
            dialogText = value ? value : "";
            dialogResult = 6;
            dialog = nil;
        }]];
        [presenter presentViewController:dialog animated:YES completion:nil];
        return true;
    }
}

std::string iosTakeText() { return std::exchange(dialogText, {}); }

const char *iosInternalRoot() {
    static const std::string root = [[NSBundle.mainBundle.resourcePath stringByAppendingPathComponent:@"Data/assets"] fileSystemRepresentation];
    return root.c_str();
}

const char *iosLocalRoot() {
    static const std::string root = []() -> std::string {
        NSURL *directory = [NSFileManager.defaultManager URLForDirectory:NSApplicationSupportDirectory
            inDomain:NSUserDomainMask appropriateForURL:nil create:YES error:nil];
        return directory ? directory.fileSystemRepresentation : "";
    }();
    return root.c_str();
}

extern "C" const char *getOSLanguage() {
    static const std::string language = (NSLocale.preferredLanguages.firstObject ?: @"en-US").UTF8String;
    return language.c_str();
}

extern "C" const char *getSystemProperty(const char *key) {
    if (!strcmp(key, "os.name")) return "iOS";
    if (!strcmp(key, "os.arch")) {
#if defined(__aarch64__)
        return "aarch64";
#else
        return "x86_64";
#endif
    }
    if (!strcmp(key, "line.separator")) return "\n";
    if (!strcmp(key, "user.home") || !strcmp(key, "user.dir")) return iosLocalRoot();
    if (!strcmp(key, "java.io.tmpdir")) {
        static const std::string temporary = NSTemporaryDirectory().fileSystemRepresentation;
        return temporary.c_str();
    }
    return nullptr;
}
