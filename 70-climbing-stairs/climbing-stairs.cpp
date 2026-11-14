class Solution {
public:
    int climbStairs(int n) {

        // Approach-3 (Improving approach-2) -
        // See that it looks nothing but a fibonacci sequence. You just have to
        // store last 2 values (t[i-1] & t[i-2]) to find current value (t[i])
        if (n == 1 || n == 2 || n == 3)
            return n;

        // t[i] = total ways to climb i stairs
        int a = 1;
        int b = 2;
        int c = 3;

        for (int i = 3; i <= n; i++) {
            c = a + b;

            int temp = b;
            b = c;
            a = temp;
        }
        return c;
    }
};