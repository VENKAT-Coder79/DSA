class Solution {
public:
    // method 2 -optimal code-use one iterative loop
    vector<vector<int>> result; /// final result store karna
    void solve(int start, int n, int k, vector<int>& temp) {
        if (k == 0) {
            result.push_back(temp);
            return;
        }
        for (int i = start; i <= n - k + 1; i++) {
            temp.push_back(i);

            solve(i + 1, n, k - 1, temp);

            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        result.clear();
        vector<int> temp;

        solve(1, n, k, temp);
        return result;
    }
};