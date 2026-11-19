#pragma once

#include <string>

// The SDL video and Java frame loops share the UIKit main thread.
bool iosOpenVideo(bool vsync);
void iosCloseVideo();
int iosPumpEvents();
void iosLifecycleChanged(int state);
void iosDrawableSize(int *width, int *height);
unsigned iosDefaultFramebuffer();
void iosSwapDrawable();

int iosPollInput(int *values);
bool iosBeginTextInput(const char *title, const char *text, const char *hint, const char *keyboardType);
std::string iosTakeText();
const char *iosInternalRoot();
const char *iosLocalRoot();
