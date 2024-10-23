class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size(),m=obstacleGrid[0].size();
        
        int dp[n][m];
        
        if(n==1 && m==1) return 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if(i==0 && j==0) dp[i][j]=1;
                else if(obstacleGrid[i][j] == 1) dp[i][j]=0;
                
                else {
                    dp[i][j]= ((i>0) ? dp[i-1][j] : 0) + ((j>0) ? dp[i][j-1] : 0);
                }
            }
        }
        return dp[n-1][m-1];
    }
};