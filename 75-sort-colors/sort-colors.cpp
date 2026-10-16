class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using insertion sort
        for(int i=1;i< nums.size();i++){
            int curr=nums[i];
            int prev=i-1;

            while(prev >=0 && nums[prev] > curr){
                nums[prev+1] = nums[prev];
                prev--;
            }
            nums[prev+1]=curr;   //placing current element
        }
        
    }
};