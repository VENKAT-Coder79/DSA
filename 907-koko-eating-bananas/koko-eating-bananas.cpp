class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(begin(piles),end(piles));

        while(low<high){
            int mid= low+ (high-low)/2;

            long long int actualhours=0;
            for(int& x : piles){
                actualhours +=(x+ mid-1)/mid;
            }
            if(actualhours <=h){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};