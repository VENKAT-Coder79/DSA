class Solution {
public:
    int reverse(int x) {

        long long int d = 0;
        long long int sum = 0;

        while (x != 0) {
            d = x % 10;
            sum = sum * 10 + d;
            if (sum > INT_MAX || sum < INT_MIN) {
                return 0;
            }
            x = x / 10;
        }

        return sum;
    }
};