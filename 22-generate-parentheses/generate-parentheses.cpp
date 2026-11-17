class Solution {
public:
    vector<string> result;

    bool isvalid(string str) {
        int count = 0; // pointer as i
        for (char ch : str) {
            if (ch == '(') {
                count++; //+1 if open
            } else {
                count--; //-1 for close
            }
            // edge case like "())("
            if (count < 0)
                return false;
        }
        return count == 0;
    }

    void solve(string& curr, int n) {
        // base case
        if (curr.size() == 2 * n) {
            if (isvalid(curr)) {
                result.push_back(curr);
            }
            return;
        }
        curr.push_back('('); // backtracking template
        solve(curr, n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr, n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        solve(curr, n);
        return result;
    }
};