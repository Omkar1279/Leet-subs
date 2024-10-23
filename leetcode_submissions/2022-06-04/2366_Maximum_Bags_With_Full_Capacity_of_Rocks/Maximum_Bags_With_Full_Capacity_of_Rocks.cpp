class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int i=0,ans=0;
        vector<int>v(rocks.size());
        
        for(int i=0;i<rocks.size();i++)  v[i]=(capacity[i]-rocks[i]);
        
        // for(int i=0;i<rocks.size();i++) cout<<v[i]<<endl;
        
        sort(v.begin(),v.end());
        
        while(i< rocks.size()) {
                       
            if(v[i] == 0) ans++;
            
            else if ((additionalRocks-v[i]) >= 0 && additionalRocks > 0) {
                additionalRocks-=v[i];
                // cout<<"2\n";
                ans++;
            }
            // cout<<"i="<<i<<" ans="<<ans<<endl;
            i++;
        }
        return ans;
    }
};