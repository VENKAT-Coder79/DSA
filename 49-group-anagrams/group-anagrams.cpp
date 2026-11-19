class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        //logic -hashing plus sorting

        for (int i = 0; i < strs.size(); i++) 
        {

            string key = strs[i];   

            sort(key.begin(), key.end());  //example-eat->aet then goto 17

            mp[key].push_back(strs[i]); //store the strings which have same key as sorted
        }
        //imagine map as eat ->key-> sort->aet->[eat,tae,ate] 
        vector<vector<string>> ans;
        for (auto &it : mp) {
            ans.push_back(it.second); //see line 5 ,first is map  sorted strings //second is orignal keys
        }
        return ans;
    }
};