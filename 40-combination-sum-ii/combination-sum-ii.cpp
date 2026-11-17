class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates, int target, int start,vector<int> temp) {

        // base case
        if (target < 0)
            return;
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {

            if (i > start && candidates[i - 1] == candidates[i]) {
                continue;  //ignore duplicates
            }

            temp.push_back(candidates[i]);  //backtracking template
            solve(candidates, target - candidates[i], i + 1, temp); //remeber
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> temp;

        sort(begin(candidates), end(candidates));//for ignoring duplicates

        solve(candidates, target, 0, temp);
        return ans;
    }
};