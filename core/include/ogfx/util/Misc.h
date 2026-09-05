#pragma once

#include <cstdint>

namespace ogfx {
    inline constexpr uint64_t HashString(const char* str) {
        uint64_t hash = 14695981039346656037ull;
        while (*str) {
            hash ^= static_cast<uint64_t>(*str++);
            hash *= 1099511628211ull;
        }
        return hash;
    }
}
