class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        int size=logs.size(),max=0,id=0;
        
        for(int i=0;i<size;i++) {
            
            if(i==0) {max=logs[i][1];id=logs[i][0];}
            
            else {
                if((logs[i][1]-logs[i-1][1]) > max) {max = logs[i][1]-logs[i-1][1];id=logs[i][0];}
            }
        }
        return id;
    }
};