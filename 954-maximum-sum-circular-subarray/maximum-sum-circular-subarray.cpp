class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) 
    {

        int n = arr.size();
        int maxi = INT_MIN;
        int mini = INT_MAX;

        int currmax = 0;
        int currmin = 0;
        int total = 0;

        for (int& x : arr) 
        {
            total += x;

            // case-1 normal kadane's rule/algo -agar array mein hi maximum sum
            // ho toh;
            currmax = max(x, currmax + x);
            maxi = max(maxi, currmax);

            // min  -maxi=total-mini
            currmin = min(x, currmin + x);
            mini = min(mini, currmin);
        }
        // if  All elements are negative
        if (maxi < 0)
            return maxi;

        // case-2 agar cirular sum maximum hoga
        int circular_sum = total - mini;

        return max(maxi, circular_sum);
    
    }
};