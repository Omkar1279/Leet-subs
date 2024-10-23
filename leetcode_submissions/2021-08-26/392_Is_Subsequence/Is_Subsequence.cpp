class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j=0;
        
        if(s.length() == 0) return 1;
        
        for(int i=0;i<t.length();i++) {
            
            if(s[j] == t[i])  j++;

            if(j == s.length()-1 && s[j] != t[i] && s.length()==1) return 0;
            
            if(j == s.length()-1) return 1;
        }
        return (j == s.length()-1) ? 1 : 0;
    }
};