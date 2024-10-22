class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp) {
        
        if(i==0 && j==0) return grid[i][j];
        
        if(i<0 || j<0) return 10e6;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        return dp[i][j]=grid[i][j] + min(solve(i-1,j,grid,dp),solve(i,j-1,grid,dp));
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
        if(grid.size()==1 && grid[0].size()==1) return grid[0][0];
        
        vector<vector<int>> dp (201, vector<int>(201 , -1));
        
        return solve(grid.size()-1,grid[0].size()-1,grid,dp);
    }
};