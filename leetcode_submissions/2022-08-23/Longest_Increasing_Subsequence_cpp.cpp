class Solution {
public:
    int func(vector<int>& nums, int prev_ind, int i, vector<vector<int> > &dp){
        if(nums.size() == i) return 0;
        if(dp[prev_ind + 1][i] != -2) return dp[prev_ind + 1][i];
        int take = func(nums, prev_ind, i + 1, dp);
        if(prev_ind == -1 || nums[prev_ind] < nums[i]){
            take = max(take, 1 + func(nums, i, i + 1, dp));
        }
        return dp[prev_ind + 1][i] = take;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int> > dp(n + 1, vector<int> (n + 1, -2));
        return func(nums, -1, 0, dp);
    }
};