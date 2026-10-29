class Solution {
public:
    int findright(vector<int>&nums,int target,int n){
        int low=0;
        int high=n-1;

        int right_most=-1;

        while(low <=high){
            int mid=low + (high -low)/2;
            if(nums[mid] == target){
                right_most=mid;
                low=mid+1;
            }
            else if(nums[mid] > target){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return right_most;
    }

    int findleft(vector<int>& nums, int target, int n) {
        int low = 0;
        int high = n - 1;

        int left_most = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                left_most = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return left_most;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left_most = findleft(nums, target, n);
        int right_most = findright(nums, target, n);

        return {left_most, right_most};
    }
};