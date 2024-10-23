class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m=matrix.size(),n=matrix[0].size();
        
        if(m==n) {        
        
            for(int i=0;i<m;i++) {
                for(int j=0;j<i;j++) {
                    swap(matrix[i][j],matrix[j][i]);   
                }    
            }
            return matrix;
        }
        
        vector<vector<int>> mt( n , vector<int> (m, 0));;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                mt[i][j]=matrix[j][i];
            }
        }
        return mt;
    }
};