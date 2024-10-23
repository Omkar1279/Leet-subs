class Solution {
public:
    
    int climbStairs(int n) {
        
        int dp[n+1];
        memset(dp, -1 ,sizeof(dp));
        
        for(int i=0;i<4;i++) dp[i]=i;
        
        for(int i=4;i<=n;i++) {
            
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};