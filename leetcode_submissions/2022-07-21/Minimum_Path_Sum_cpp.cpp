class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp) {
        
        if(i==0 && j==0) return grid[i][j];
        
        if(i<0 || j<0) return 101;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int left = grid[i][j] + solve(i,j-1,grid,dp);
        int up = grid[i][j] + solve(i-1,j,grid,dp);
        
        return dp[i][j]=min(left,up);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        
        if(grid.size()==1 && grid[0].size()==1) return grid[0][0];
        
        vector<vector<int>> dp (grid.size(), vector<int>(grid[0].size() , -1));
        
        return solve(grid.size()-1,grid[0].size()-1,grid,dp);
    }
};