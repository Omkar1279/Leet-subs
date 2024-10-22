class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& travel) {
        
        int n=g.size(),ans=0;string ns="MPG";
        
        vector<int > sum(n-1);
        
        sum[0]=travel[0];
        for(int i=1;i<n-1;i++) {
            sum[i] += sum[i-1] + travel[i];
        }
        
        map<char,int> mp;
        
        for(int i=0;i<n;i++) {
            
            for(int j=0;j<g[i].size();j++) {
                
                mp[g[i][j]]=i;ans++;
            }
        }
        
        if(mp['M'] > 0) ans+=sum[mp['M']-1];
        if(mp['G'] > 0) ans+=sum[mp['G']-1];
        if(mp['P'] > 0) ans+=sum[mp['P']-1];

        return ans;
    }
};