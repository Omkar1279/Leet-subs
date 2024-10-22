class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++) {

            if(mp.count(nums[i])) {
                if(abs(mp[nums[i]] - i) <= k) return 1;
            }
            mp[nums[i]]=i;            
        }
        return 0;
    }
};