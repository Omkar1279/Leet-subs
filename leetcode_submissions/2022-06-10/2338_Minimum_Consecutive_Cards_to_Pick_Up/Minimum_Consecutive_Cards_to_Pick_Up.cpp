class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        int n=cards.size(),ans=INT_MAX;
        vector<pair<int,int>> s(n);
        
        for(int i=0;i<n;i++) {
            s[i]={cards[i],i};
        }
        
        sort(s.begin(),s.end());
        
        for(int i=1;i<n;i++) {
            if(s[i].first==s[i-1].first) {
                ans=min(ans,(s[i].second-s[i-1].second)+1);
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};