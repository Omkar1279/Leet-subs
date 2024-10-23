class Solution {
public:
    bool isPalindrome(string str) {
        string s="";
        for(char c:str) {
            if(isspace(c)) continue;
            if(isalpha(c)) {
                s+=tolower(c);
            }
        }

        string t=s;
        reverse(t.begin(),t.end());

        return (t==s);
    }
};