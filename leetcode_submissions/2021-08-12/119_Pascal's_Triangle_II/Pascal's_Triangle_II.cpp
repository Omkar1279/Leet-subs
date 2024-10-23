class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int>temp;vector<int>v;
        
        temp.push_back(1);

        
        if(rowIndex==0)
            return temp;
        
        temp.push_back(1);
        if(rowIndex==1)
            return temp;
        
        for(int i=2;i<=rowIndex;i++) {
            
            v.push_back(1);
            
            for(int j=0;j<i-1;j++) 
                v.push_back(temp[j]+temp[j+1]);
            
            v.push_back(1);
            temp.clear();temp=v;
            v.clear();
            
        }
        return temp;
    }
};