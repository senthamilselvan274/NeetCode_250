class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(char ch:s){
            if(isalnum(ch)){
                r+=tolower(ch);
            }
        }
        string res=r;
        reverse(r.begin(),r.end());
        return res==r;
    }
};
