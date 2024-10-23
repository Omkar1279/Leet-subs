class Solution {
public:

    int solve(string &s,int* dp,int i) {

        if(i>=s.length()) return 1;

        if(dp[i] != -1) return dp[i];

        int x=s[i]-'0',y=0,ans=0;

        if(i<s.size()-1) y=x*10+s[i+1]-'0';

        if(x>0 && x<27) ans+=solve(s,dp,i+1);

        if(x>0 && y>0 && y<27) ans+=solve(s,dp,i+2);

        return dp[i]=ans;
    }
    int numDecodings(string s) {

        int dp[101];

        memset(dp,-1,sizeof dp);

        return solve(s,dp,0);
    }
};