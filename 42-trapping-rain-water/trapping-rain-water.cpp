class Solution {
public:
    int trap(vector<int>& height) {
        //optimal approach T(O(n))  and S(O(1))
        int n=height.size();

        int ans=0;
        int l=0; int r=n-1;     //two pointer
        int lmax=0; int rmax=0;

        while(l < r){
            lmax=max(lmax,height[l]);    //left maximum bar
            rmax= max(rmax ,height[r]);   //right maximum bar

            if(lmax < rmax){
                ans=ans+ lmax-height[l];   
                l++;
            }
            else{
                ans= ans+ rmax-height[r];
                r--;
            }
        }
        return ans;
        
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

void *operator new[](const std::size_t size) {
    return operator new(size);
}

void operator delete(void *) noexcept {}

void operator delete[](void *) noexcept {}

void operator delete(void *, std::size_t) noexcept {}

void operator delete[](void *, std::size_t) noexcept {}
