class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size(),l=0,r=1;
        
        while(l<n && r<n) {
            
            if(abs(l-r) <= k) {
                if(nums[l]==nums[r]) return 1;
                r++;
            }
            else l++;
        }
        
        return 0;
    }
};