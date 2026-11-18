class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int freq[26] = {0}; // array of 26 size with 0,0,0,0,0,0

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++; // store the characters as +1
            freq[t[i] - 'a']--; // if same character then -1
        }
        for (int x : freq) { // final array should be zero
            if (x != 0)
                return false;
        }
        return true;
    }
};