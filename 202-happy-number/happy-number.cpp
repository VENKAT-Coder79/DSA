class Solution {
public:
    int sumofsquares(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum = sum + d * d;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if (n == 0)
            return false;
        if (n == 1)
            return true;

        unordered_set<int> seen;
        seen.insert(n);

        while (true) {
            n = sumofsquares(n); // function call

            if (n == 1)
                return true;
            if (seen.count(n))
                return false;
            // check karo kya pahle vo sum mila tha ,ya cycle form ho raha hai

            seen.insert(n); // new sum ko store karo
        }
    }
};