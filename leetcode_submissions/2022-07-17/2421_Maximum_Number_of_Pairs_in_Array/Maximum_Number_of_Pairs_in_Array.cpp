class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        map<int,int>mp;vector<int> ans(2);
        
        for(int i:nums) mp[i]++;
        
        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second%2==0) {ans[0]+=it->second/2;}
            
            else {
                int temp=it->second-1;
                ans[0]+=temp/2;
            }
        }
        ans[1]=nums.size()-ans[0]*2;
        
        return ans;
    }
};