class Solution {
public:
    
    int help(int i, int j, vector<vector<int>> t ,vector<vector<int>>& dp) {
        
        if(i==t.size()-1) return t[i][j];
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(j>=t[i].size()) return 10e6;
        
        return dp[i][j]=t[i][j] + min(help(i+1,j,t,dp),help(i+1,j+1,t,dp));
        
    }
    
    int minimumTotal(vector<vector<int>>& t) {
        
        int n=t.size();
        
        vector<vector<int>> dp (n, vector<int> (n,-1));
        
        return help(0,0,t,dp);
    }
};