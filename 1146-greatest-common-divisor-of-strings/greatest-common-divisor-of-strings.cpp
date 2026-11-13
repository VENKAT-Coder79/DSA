class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //check str2 is str1+str1+str1 or not
        if(str1 +str2 != str2+str1){
            return "";
        }

        int a=str1.size();
        int b=str2.size();
         //calculating GCD manually
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        //result
        string ans="";
        for(int i=0;i<a;i++){
            ans.push_back(str1[i]);
        }
        return ans;
    }
};