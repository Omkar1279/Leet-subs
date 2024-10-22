class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int n=grid.size(),m=grid[0].size();
        int o=n-1,p=0;
        
        if(n!=m) return false;
        
        for(int i=0;i<n;i++) {
            
            if(grid[i][i] == 0) {return false;}
        }
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if((i+j) == (n-1) && (grid[i][j] == 0)) return false;
                
                if(i!=j && grid[i][j] != 0 && (i+j) != (n-1)) {return false;}
            }
        }
        return true;
    }
};