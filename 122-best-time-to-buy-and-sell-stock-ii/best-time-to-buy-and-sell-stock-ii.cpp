class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sum=0;
        
        for(int j=1;j<n;j++){

            if(prices[j] > prices[j-1]){
                
                int val=prices[j]-prices[j-1];
                sum+=val;
                
            }
            
        }
        return sum;
        
    }
};