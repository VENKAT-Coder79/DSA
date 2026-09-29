class Solution {
public:
    int BS(vector<int>& nums, int key, int i, int j) {
        if (i > j) {
            return -1;
        }
        int mid = i + (j - i) / 2;

        if (nums[mid] == key) {
            return mid;
        }

        // in rotated sorted array ,atleast one side is always sorted and apply
        // BS check left side else right side is sorted

        // left sorted array
        if (nums[i] <= nums[mid]) {

            if (nums[i] <= key && key < nums[mid]) {
                return BS(nums, key, i, mid - 1);
            } else {
                return BS(nums, key, mid + 1, j);
            }

        } // right sorted
        else {
            if (nums[mid] < key && key <= nums[j]) {
                return BS(nums, key, mid + 1, j);
            } else {
                return BS(nums, key, i, mid - 1);
            }
        }
    }
    int search(vector<int>& nums, int target) {
        return BS(nums, target, 0, nums.size() - 1);
    }
};