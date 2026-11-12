class Solution {
public:
    int countPrimes(int n) {
        // seive of eratosthenes

        vector<bool> isprime(n + 1, true); // all true

        isprime[0] = false;
        isprime[1] = false;

        for (int i = 2; i * i <= n; i++) { // instead of i<=sqrt(n) use- i*i<=n
            if (isprime[i] == true) {

                for (int j = 2; i * j < n; j++) { // multiple to false
                    isprime[i * j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isprime[i] == true) {
                count++;
            }
        }
        return count;
    }
};