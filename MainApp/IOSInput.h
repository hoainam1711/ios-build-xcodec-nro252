#pragma once

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <deque>

namespace ios {
enum InputKind { down = 1, drag, up, cancel, typed };
struct InputEvent { InputKind kind; int pointerOrChar, x, y; };

inline int pixelCoordinate(float normalized, int extent) {
    if (extent <= 1 || !std::isfinite(normalized)) return 0;
    return std::min(extent - 1, int(std::clamp(normalized, 0.0f, 1.0f) * extent));
}

class InputQueue {
    struct Finger {
        bool active{};
        int64_t device{}, id{};
        int x{}, y{};
    };
    std::array<Finger, 16> fingers{};
    std::deque<InputEvent> pending;
public:
    void touch(InputKind kind, int64_t device, int64_t id, int x, int y) {
        auto slot = std::find_if(fingers.begin(), fingers.end(), [&](const Finger &f) {
            return f.active && f.device == device && f.id == id;
        });
        if (kind == down) {
            if (slot != fingers.end()) return;
            slot = std::find_if(fingers.begin(), fingers.end(), [](const Finger &f) { return !f.active; });
        }
        if (slot == fingers.end()) return;
        int index = int(slot - fingers.begin());
        *slot = {kind != up && kind != cancel, device, id, x, y};
        if (kind == drag && !pending.empty() && pending.back().kind == drag && pending.back().pointerOrChar == index)
            pending.back() = {drag, index, x, y};
        else
            pending.push_back({kind, index, x, y});
    }

    void cancelTouches() {
        for (auto &f : fingers)
            if (f.active) touch(cancel, f.device, f.id, f.x, f.y);
    }
    void key(uint16_t unit) { pending.push_back({typed, unit, 0, 0}); }
    bool poll(InputEvent &event) {
        if (pending.empty()) return false;
        event = pending.front();
        pending.pop_front();
        return true;
    }
};
}
