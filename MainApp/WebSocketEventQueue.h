#pragma once

#include <cstddef>
#include <cstdint>
#include <deque>
#include <optional>
#include <string>
#include <string_view>
#include <unordered_map>
#include <utility>
#include <vector>

namespace clearwing::websocket {

using Generation = std::int64_t;
constexpr std::size_t maxMessageBytes = 10 * 1024 * 1024;

enum class EventType { Open, Message, Close, Error };
enum class MessageResult { Queued, Stale, Full };

struct Event {
    EventType type;
    Generation generation;
    std::vector<unsigned char> bytes;
    std::string error;
};

// The bridge serializes queue and connection state with the same mutex.
class EventQueue {
public:
    explicit EventQueue(
        std::size_t messageLimit = maxMessageBytes,
        std::size_t byteLimit = 24 * 1024 * 1024,
        std::size_t countLimit = 256,
        std::size_t generationLimit = 8)
        : messageLimit(messageLimit), byteLimit(byteLimit), countLimit(countLimit),
          generationLimit(generationLimit) {}

    bool start(Generation generation) {
        return states.size() < generationLimit && states.emplace(generation, State::Opening).second;
    }

    bool open(Generation generation) {
        const auto state = states.find(generation);
        if (state == states.end() || state->second != State::Opening)
            return false;
        pending.push_back({EventType::Open, generation, {}, {}});
        state->second = State::Open;
        return true;
    }

    MessageResult message(Generation generation, const void *bytes, std::size_t size) {
        const auto state = states.find(generation);
        if (state == states.end() || state->second != State::Open)
            return MessageResult::Stale;
        if (size > messageLimit || size > byteLimit - queuedBytes || queuedMessages == countLimit)
            return MessageResult::Full;

        Event event{EventType::Message, generation, {}, {}};
        if (size) {
            const auto *first = static_cast<const unsigned char *>(bytes);
            event.bytes.assign(first, first + size);
        }
        pending.push_back(std::move(event));
        queuedBytes += size;
        ++queuedMessages;
        return MessageResult::Queued;
    }

    bool finish(Generation generation, std::string_view error = {}) {
        const auto state = states.find(generation);
        if (state == states.end() || state->second == State::Finished)
            return false;

        if (error.size() > 1024)
            error = "WebSocket request failed";
        pending.push_back({error.empty() ? EventType::Close : EventType::Error,
                           generation, {}, std::string(error)});
        state->second = State::Finished;
        return true;
    }

    void discard(Generation generation) {
        states.erase(generation);
        std::erase_if(pending, [&](const Event &event) {
            if (event.generation != generation)
                return false;
            releaseMessage(event);
            return true;
        });
    }

    std::optional<Event> pop() {
        if (pending.empty())
            return std::nullopt;

        Event event = std::move(pending.front());
        pending.pop_front();
        releaseMessage(event);
        if (event.type == EventType::Close || event.type == EventType::Error)
            states.erase(event.generation);
        return event;
    }

private:
    enum class State { Opening, Open, Finished };

    void releaseMessage(const Event &event) {
        if (event.type == EventType::Message) {
            queuedBytes -= event.bytes.size();
            --queuedMessages;
        }
    }

    const std::size_t messageLimit;
    const std::size_t byteLimit;
    const std::size_t countLimit;
    const std::size_t generationLimit;
    std::size_t queuedBytes = 0;
    std::size_t queuedMessages = 0;
    std::deque<Event> pending;
    std::unordered_map<Generation, State> states;
};

} // namespace clearwing::websocket
