class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        
        vector<int>prefixsum(n,0);
        prefixsum[0]=arr[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1] + arr[i];  //prefixsum ka ek array taiyar
        }

        unordered_map<int,int>mp;

        for(int j=0;j<n;j++){
            if(prefixsum[j] == k) count++;

            int val=prefixsum[j] - k;
            if(mp.find(val) != mp.end()){
                count += mp[val];
            }
            if(mp.find(prefixsum[j]) == mp.end()){
                mp[prefixsum[j]] =0;
            }
            mp[prefixsum[j]]++;

        }
        return count;
    }
};