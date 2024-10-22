class Solution {
public:
    string longestPalindrome(string s) {
        string rs=s;
        reverse(rs.begin(),rs.end());
        
        int n=s.size();
        vector<vector<int>> dp (n+1, vector<int> (n+1,0));
        
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=n;j++) {
                
                if(i==0 || j==0) dp[i][j]=0;
                
                else if(s[i-1]==rs[j-1]) {
                    dp[i][j]= 1 + dp[i-1][j-1];
                    
                }
                
                else {
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

          int len = dp[n][n];
          int i = n;
          int j = n;

          int index = len - 1;
          string str = "";
          for (int k = 1; k <= len; k++) {
            str += "$"; // dummy string
          }

          while (i > 0 && j > 0) {
            if (s[i - 1] == rs[j - 1]) {
              str[index] = s[i - 1];
              index--;
              i--;
              j--;
            } else if (s[i - 1] > rs[j - 1]) {
              i--;
            } else j--;
          }
        return str;
    }
};