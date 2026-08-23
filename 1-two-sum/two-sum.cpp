class Solution {
    private:
    void solve(vector<int> nums,vector<int>& ans,int key){
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==key){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ;
                }
            }
        }
    }
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        solve(nums,ans,target);
        return ans;
    }
};