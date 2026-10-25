class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sum=0;
        
        for(int j=1;j<prices.size();j++){

            if(prices[j] > prices[j-1]){

                sum= sum+ prices[j]-prices[j-1];
                
            }
            
        }
        return sum;
        
    }
};