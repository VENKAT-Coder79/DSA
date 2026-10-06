class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
         //actual sum
         int orgSUM=n*(n+1)/2;
         int arrSUM=0;
        //  for(int i=0;i<=n;i++){
        //     orgSUM+=i;
        //  }
         for(int i=0;i<n;i++){
            arrSUM+=nums[i];
         }
         return orgSUM-arrSUM;
    }
};