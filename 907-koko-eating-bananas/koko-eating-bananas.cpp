class Solution {
public:
    bool CanEatAll(vector<int>& piles, int mid, int h) {
        int actualhours = 0;

        for (int& x : piles) {
            actualhours += x / mid;  

            if (x % mid  !=0){  //remaining bananas like 7%4=3 toh uske liye add +1;
                actualhours++;
            }
        }
        return actualhours <= h; //check karo kha pa raha hai ki nahi
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int l = 1;   //starting range
        int r = *max_element(begin(piles), end(piles));  //maximum pile of banana

        while (l < r) {

            int mid = l + (r - l) / 2;

            if (CanEatAll(piles, mid, h)) {
                r = mid; //agar kha pa raha hai toh left side move karo ,to find minimum
            } else {
                l = mid + 1; //
            }
        }
        return l;
    }
};