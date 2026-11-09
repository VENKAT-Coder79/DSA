class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <=0 )return false;
        while( n%3 ==0){     //first check it is divisible by 3 or not;
            n=n/3;
        }
        return n==1;
        
    }
};