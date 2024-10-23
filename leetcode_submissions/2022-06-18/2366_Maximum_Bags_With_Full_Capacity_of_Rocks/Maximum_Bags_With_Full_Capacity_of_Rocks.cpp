class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int ans=0;
        vector<int>v(rocks.size());
        
        for(int i=0;i<rocks.size();i++)  v[i]=(capacity[i]-rocks[i]);
        
        // for(int i=0;i<rocks.size();i++) cout<<v[i]<<endl;
        
        sort(v.begin(),v.end());
        
        for(int i : v) {
                       
            if(i == 0) ans++;
            
            else if ((additionalRocks-i) >= 0) {
                additionalRocks-=i;
                ans++;
            }
        }
        return ans;
    }
};