class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.length() <= 1) return s;
        
        int n=s.length(),maxlen,left;
        
        int dp[1005][1005];
        

        for(int i = 0; i < n; i++) {
            
            dp[i][i] = true;
            
            for(int j = 0; j < i; j++) {
                
                if(s[i] == s[j] && (i - j < 2 || dp[j + 1 ][i - 1]) ) dp[j][i] = true;
                
                else  dp[j][i] = false;
                
                if(dp[j][i] && i - j + 1 > maxlen) {
                    maxlen = i - j + 1;
                    left = j;
                }
            }
        }
        
        return s.substr(left, maxlen);
    }
};