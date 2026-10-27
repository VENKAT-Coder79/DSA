class Solution {
public:
    int mySqrt(int x) {

        if (x  == 0 || x==1) return x;

        long long int ans=-1;
        
        int i=0;
        int j=x-1;
        
        while(i <= j)
        {
            long long int mid=i+(j-i)/2;
            long long int sq= 1LL*mid*mid;
            if(sq == x){
                return mid;
            }
            else if(sq > x){
                j=mid-1;
            }
            else if( sq < x){
                ans=mid;
                i=mid+1;
            }
        }
        return ans;
    }
};