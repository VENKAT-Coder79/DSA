class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());  //pahele sort karo taki duplicate remove krna easy ho

        for(int i=0;i<n;i++){

            if(i>0 && nums[i]==nums[i-1]) continue;   //no duplicate

            int j=i+1;
            int k=n-1;

            while(j<k){   //j!=k
                int sum=nums[i]+nums[j]+nums[k];

                if(sum <0) j++;
                else if(sum > 0) k--;
                else {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;

                    while(j<k  && nums[j]== nums[j-1]) j++;  //wohi i jaisa duplicate na ho
                }
            }
        }
        return ans;
    }
};