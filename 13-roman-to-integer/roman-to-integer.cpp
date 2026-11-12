class Solution 
{
public:
    int romanMap(char c) 
    {

        switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

    int romanToInt(string s) 
    {

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            // main logic
            if (i < s.size() - 1 && romanMap(s[i]) < romanMap(s[i + 1])) {
                ans -= romanMap(s[i]);
            } else {
                ans += romanMap(s[i]);
            }
        }
        return ans;
    }
};