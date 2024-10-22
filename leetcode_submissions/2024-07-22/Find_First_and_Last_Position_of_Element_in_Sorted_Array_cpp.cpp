class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        if (nums.empty() || target>nums[nums.size()-1]) return ans;

        int lower = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        if (nums[lower] != target) {
            return ans;
        }

        int upper = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        ans[0] =  lower;
        ans[1] = upper-1;

        return ans;
    }
};