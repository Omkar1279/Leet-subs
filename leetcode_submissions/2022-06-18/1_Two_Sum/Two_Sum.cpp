class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size(),temp{0};map<int,int>mp;
        
        for(int i=0;i<n;i++) {
            
            temp=target-nums[i];
            if(mp.find(temp)!=mp.end()) return {mp[temp],i};
            
            mp[nums[i]]=i;
        }
        return {};
    }
};