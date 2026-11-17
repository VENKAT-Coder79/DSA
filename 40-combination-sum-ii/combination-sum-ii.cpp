class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates, int target, int start,vector<int> temp) {

        // base case
        if (target < 0)
            return;
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {

            if (i > start && candidates[i - 1] == candidates[i]) {
                continue;  //ignore duplicates
            }

            temp.push_back(candidates[i]);  //backtracking template
            solve(candidates, target - candidates[i], i + 1, temp); //remeber
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> temp;

        sort(begin(candidates), end(candidates));//for ignoring duplicates

        solve(candidates, target, 0, temp);
        return ans;
    }
};
#pragma GCC optimize("Ofast")
#include <iostream>
static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;
void* operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void*>(&BUFFER[pos - size]);
}
void* operator new[](const size_t size) { return operator new(size); }
void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
void operator delete[](void*, size_t) noexcept {}