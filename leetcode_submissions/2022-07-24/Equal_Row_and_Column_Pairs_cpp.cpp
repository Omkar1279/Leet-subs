class Solution {
public:
    bool check(int i,int j,vector<vector<int>>& grid) {
        
        for(int k=0;k<grid.size();k++) {
            
            if(grid[k][j]!=grid[i][k]) return 0;
        }
        return 1;
    }
    
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(),ans=0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                
                if(check(i,j,grid)) ans++;
            }
        }
        return ans;
    }
};