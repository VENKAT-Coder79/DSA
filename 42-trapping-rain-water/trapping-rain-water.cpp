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