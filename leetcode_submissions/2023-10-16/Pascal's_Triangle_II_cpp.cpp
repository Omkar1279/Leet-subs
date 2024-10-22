class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int>prev;
        vector<int>cur;
        
        prev.push_back(1);
        if(rowIndex==0)
            return prev;
        
        prev.push_back(1);
        if(rowIndex==1)
            return prev;
        
        for(int i=2;i<=rowIndex;i++) {
            
            cur.push_back(1);
            
            for(int j=0;j<i-1;j++) 
                cur.push_back(prev[j]+prev[j+1]);
            
            cur.push_back(1);
            prev.clear();prev=cur;
            cur.clear();
            
        }
        return prev;
    }
};