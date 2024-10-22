class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        for(int i=0;i<n-k;i++) {
            
            for(int j=i+1;j<=i+k;j++) {
                if(nums[i]==nums[j]) return 1;
            }
        }
        return 0;
    }
};