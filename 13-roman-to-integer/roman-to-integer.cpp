class Solution {
public:
    int romanToInt(string s) {

        int ans = 0;

        unordered_map<char, int> romanMap{{'I', 1},   {'V', 5},   {'X', 10},
                                          {'L', 50},  {'C', 100}, {'D', 500},
                                          {'M', 1000}};
        for (int i = 0; i < s.size(); i++) {
            // main logic
            if (i < s.size() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                ans -= romanMap[s[i]];
            } else {
                ans += romanMap[s[i]];
            }
        }
        return ans;
    }
};