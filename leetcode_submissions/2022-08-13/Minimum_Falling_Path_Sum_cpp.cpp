class Solution {
public:
    
    int f(int i,int j,vector<vector<int>>& matrix,int m,vector<vector<int>> &dp) {

            if(j<0||j>=m) return -10e8;
            if(i==0) return matrix[0][j];
            if(dp[i][j]!=-1) return dp[i][j];
            
            int lup = matrix[i][j] + f(i-1,j-1,matrix,m,dp);
            int up = matrix[i][j] + f(i-1,j,matrix,m,dp);
            int rup = matrix[i][j] + f(i-1,j+1,matrix,m,dp);

        return dp[i][j]=  min(up,max(lup,rup));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int ans=10e8,n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));    
        for(int i=0;i<n;i++) {
            ans=min(ans,(int) f(n-1,i,matrix,m,dp));
        }
        return ans;        
    }
};