class Solution {
public:
    // method 2 -optimal code-use one iterative loop
    vector<vector<int>> result; /// final result store karna
    void solve(int start, int n, int k, vector<int>& temp) {
        if (k == 0) {
            result.push_back(temp);
            return;
        }
        for (int i = start; i <= n - k + 1; i++) {
            temp.push_back(i);

            solve(i + 1, n, k - 1, temp);

            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        result.clear();
        vector<int> temp;

        solve(1, n, k, temp);
        return result;
    }
};
#pragma GCC optimize("Ofast")

#include <iostream>

static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;

void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) {
    return operator new(size);
}

void operator delete(void *) noexcept {}

void operator delete[](void *) noexcept {}

void operator delete(void *, size_t) noexcept {}

void operator delete[](void *, size_t) noexcept {}