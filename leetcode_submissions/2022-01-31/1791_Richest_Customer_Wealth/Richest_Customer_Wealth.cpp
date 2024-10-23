class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        
        int ans=0,temp=0;
        for(int i=0;i<a.size();i++) {
            
            for(int j=0;j<a[i].size();j++) {
                
                temp+=a[i][j];
            }
            ans=max(ans,temp);temp=0;
        }
        return ans;
    }
};