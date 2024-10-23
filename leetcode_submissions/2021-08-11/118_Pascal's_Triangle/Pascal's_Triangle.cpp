class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> iv;
        vector<int>temp;vector<int>v;
        
        temp.push_back(1);
        iv.push_back(temp);
        
        if(numRows==1)
            return iv;
        
        temp.push_back(1);
        iv.push_back(temp);
        
        for(int i=3;i<=numRows;i++) {
            
            v.push_back(1);
            
            for(int j=0;j<i-2;j++) {
                v.push_back(temp[j]+temp[j+1]);
            }   
            
            v.push_back(1);iv.push_back(v);
            temp.clear();temp=v;
            v.clear();
            
        }
        return iv;
    }
};