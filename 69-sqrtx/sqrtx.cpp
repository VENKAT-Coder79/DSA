class Solution {
public:
    int mySqrt(int x) {

        if (x <2) return x;

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
int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());

    Solution s;
    for (string line; getline(cin, line); cout << endl)    
            cout << s.mySqrt(stoul(line));    
    exit(0);
    return 0;
}();