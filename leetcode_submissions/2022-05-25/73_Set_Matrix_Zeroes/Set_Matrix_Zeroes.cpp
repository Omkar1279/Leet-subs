class Solution {
public:
    void help (vector<vector<int>>& v,int r,int c) {
        
        for(int i=0;i<v.size();i++) {
            
            v[i][c] = 0;
        }
        
        for(int j=0;j<v[0].size();j++) {
            
            v[r][j] = 0;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r=matrix.size(),c=matrix[0].size();
        vector<pair<int,int>> m;
        
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                
                if(matrix[i][j]==0) {
                    m.push_back(make_pair(i,j));

                }
            }
        }
        
        for(int it=0;it<m.size();it++) {
            
            int i=m[it].first;
            int j=m[it].second;
            help(matrix,i,j);

        }
        
    }
};