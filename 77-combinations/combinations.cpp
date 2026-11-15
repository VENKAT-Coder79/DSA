class Solution {
public:
    vector<vector<int>> result; /// final result store karna
    void solve(int start, int& n, int k, vector<int> &temp) {
        if (k == 0) {
            result.push_back(temp);
            return;
        }
        if (start > n) {
            return;
        }
        //backtracking template

        // include
        temp.push_back(start);
        solve(start + 1, n, k - 1, temp);

        // exlclude
        temp.pop_back();
        solve(start + 1, n, k, temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;

        solve(1, n, k, temp);
        return result;
    }
};