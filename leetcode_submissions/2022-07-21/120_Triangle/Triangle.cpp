class Solution {
public:

    int minimumTotal(vector<vector<int>>& t) {
        
        int n=t.size();
        
        vector<vector<int>> dp (n, vector<int> (n,0));
        
        for(int k=0;k<n;k++) {
            
            dp[n-1][k]=t[n-1][k];
            
            for(int i=n-2;i>=0;i--) {
                for(int j=i;j>=0;j--) {
                    dp[i][j]= t[i][j] + min(dp[i+1][j],dp[i+1][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};