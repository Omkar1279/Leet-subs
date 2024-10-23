class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 3) return 0;

        sort(nums.begin(), nums.end());

        return nums[nums.size()-4] - nums[0];
    }
};