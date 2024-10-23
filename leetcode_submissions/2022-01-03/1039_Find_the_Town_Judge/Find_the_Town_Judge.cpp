class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        int temp;
            
        if(t.size() == n) {
            return -1;
        }
        
        else {
            temp=t[0][1];
            
            for(int i=0;i<t.size();i++) {
            
                if(t[i][1] == temp) continue;
                
                else return -1;
        
            }
        }
        return temp;
    }
};