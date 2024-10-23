class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size(), m=grid[0].size();
        if(grid.size()==1 && grid[0].size()==1) return grid[0][0];
        
        vector<vector<int>> dp (201, vector<int>(201 , -1));
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if(i==0 && j==0) dp[i][j]=grid[i][j];
                else {
                    dp[i][j]=grid[i][j] + min((i>0) ? dp[i-1][j] : 10e6 ,(j>0) ? dp[i][j-1] : 10e6);
                }
            }
        }
        return dp[n-1][m-1];
    }
};