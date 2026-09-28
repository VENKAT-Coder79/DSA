class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //use prefix-suffix method
        int preff=1;
        int suff=1;
        int ans=INT_MIN;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(preff == 0) preff=1;
            if(suff == 0) suff=1;

            preff=preff*nums[i];  //product from start
            suff=suff*nums[n-i-1]; //product from end
            
            ans=max(ans,max(preff,suff));
        }
        return ans;
        
    }
};