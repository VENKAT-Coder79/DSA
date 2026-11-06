class Solution {
public:
    int titleToNumber(string col) {
        int sum = 0;
        int p = 0;
        int n = col.length();

        for (int i = n - 1; i >= 0; i--) {
            int tmp = col[i] - 64;
            sum = sum + pow(26, p++) * tmp;  //power fuction double mein store kar raha tha ,isliye int
            //ex=AB
            //A=1;B=2;
            //INDEX-0,1 

            //((26^1)*1+(26^0)*2)=26+2=28;
            //
        }
        return sum;
    }
};