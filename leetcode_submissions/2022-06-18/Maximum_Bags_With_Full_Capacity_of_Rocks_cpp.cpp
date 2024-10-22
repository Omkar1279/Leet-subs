class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int ans=0;
        
        for(int i=0;i<rocks.size();i++)  capacity[i]-=rocks[i];
        
        sort(capacity.begin(),capacity.end());
        
        for(int i : capacity) {
                       
            if(i == 0) ans++;
            
            else if ((additionalRocks-i) >= 0) {
                additionalRocks-=i;
                ans++;
            }
        }
        return ans;
    }
};