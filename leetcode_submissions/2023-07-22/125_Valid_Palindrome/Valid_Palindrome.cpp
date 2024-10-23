class Solution {
public:
    bool isPalindrome(string str) {
        string s="";
        for(char c:str) {
            if(isspace(c)) continue;
            if(isalpha(c)) {
                s+=tolower(c);
            }
            else if(isdigit(c)) s+=c;
        }

        int i=0,j=s.size();j--;
        while(i<=j) {
            if(s[i]!=s[j]) return 0;
            i++;j--;
        }
        return 1;
    }
};