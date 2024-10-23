class Solution {
public:
    int size=1e5+1;
    int mostFrequentEven(vector<int>& nums) {
        
        map<int,int> mp;int m=0,ans;
        
        for(int i:nums) {
            if(i%2==0) mp[i]++;
        }
        
        if(mp.empty()) return -1;
        
        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second>=m) {
                m=it->second;
                ans=it->first;
            }
        }
        
        return ans;
    }
};