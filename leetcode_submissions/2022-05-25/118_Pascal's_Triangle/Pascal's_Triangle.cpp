class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> pascalT;
        
        for(int i=0;i<numRows;i++) {
            
            vector<int> v(i+1,1);
            
            if(i==0 || i==1) {
                pascalT.push_back(v);
                continue;
            }
            
            for(int j=1;j<i;j++) {
                
                v[j] = pascalT[i-1][j-1] + pascalT[i-1][j];
            }
            
            pascalT.push_back(v);
        }
        return pascalT;
    }
};