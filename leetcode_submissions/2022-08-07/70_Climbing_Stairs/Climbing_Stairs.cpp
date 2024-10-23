class Solution {
public:
    int f(int n,int dp[]) {
        
        if(n<0) return 0;
        if(n==0) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n]= f(n-1,dp)+f(n-2,dp);
    }
    
    int climbStairs(int n) {
        
        int dp[n+1];
        memset(dp, -1 ,sizeof(dp));
        return f(n,dp);
        
    }
};