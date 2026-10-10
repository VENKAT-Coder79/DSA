class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if (n <=1) return nums[0];


        //first sort
        sort(nums.begin(),nums.end());

        int freq=1;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] ==nums[i-1]){
                freq++;
            }
            else{        //agar purane previous wala same nahi hai toh like[1,1,2,3,3]
                freq=1;
                ans=nums[i];
            }
            if(freq > n/2){
                return ans;
            }
        }
        return -1;
    }
};