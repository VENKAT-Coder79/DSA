class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;

        int lpart = 0;
        int rpart = n - 1;

        while (lpart < rpart) {

            int width = rpart - lpart;
            int ht = min(height[lpart], height[rpart]);

            int area = width * ht;

            ans = max(area, ans);

            height[lpart] < height[rpart] ? lpart++ : rpart--; // ternary operator
        }
        return ans;
    }
};