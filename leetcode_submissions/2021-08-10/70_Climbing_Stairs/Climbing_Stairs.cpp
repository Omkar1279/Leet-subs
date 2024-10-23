class Solution {
public:
    int climbStairs(int n) {
        
        int dp[n+1];
        
        if(n==0) return 0;
        
        if(n < 4)
            return n;
        
        for(int i=0;i<4;i++)
            dp[i]=i;
        
        dp[0]=0;
        
        for(int i=4;i<=n;i++) 
            dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
    }
};