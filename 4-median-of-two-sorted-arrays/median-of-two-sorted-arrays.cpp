class Solution {
public:
    // LC 4
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        

        int i = 0;
        int j = 0;

        vector<int> nums3;
        // creata new array to store the sorted elements;

        // start merging and sorting
        while (i < n && j < m)
        {
            if (nums1[i] < nums2[j]) {
                nums3.push_back(nums1[i]);
                i++;
            } else {
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n) 
        {
            nums3.push_back(nums1[i]);
            i++;
        }
        while (j < m) 
        {
            nums3.push_back(nums2[j]);
            j++;
        }


        int s = nums3.size();
        if (s ==1){        //if one array is empty and other is size 1;
            return nums3[0];
        }
        int mid = s / 2;
 
         // if size of array is odd then median is middle value
        double x= nums3[mid];
        double y= (nums3[mid - 1] + nums3[mid]) /2.0;

         return (s % 2 != 0)?x:y;

    }
};