class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans;
        while (columnNumber > 0) {
            columnNumber--;

            int remain = columnNumber % 26;
            char re = remain + 'A';
            ans.push_back(re);

            columnNumber /= 26;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};