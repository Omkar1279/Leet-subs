class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        int n=cards.size(),ans{INT_MAX};
        map<int,int>mp;
        
        for(int i=0;i<n;i++) {
            
            auto it=mp.find(cards[i]);
            
            if(it!=mp.end()) ans=min(ans,i-it->second+1);
            
            else mp[cards[i]]=i;
        }
        
        return ans==INT_MAX ? -1 : ans;
    }
};