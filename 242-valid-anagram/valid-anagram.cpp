class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        sort(begin(s),end(s));
        sort(begin(t),end(t));
        return s==t;

        
        

    }
};