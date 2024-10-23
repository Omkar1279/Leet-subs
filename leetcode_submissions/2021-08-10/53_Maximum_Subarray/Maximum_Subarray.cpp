class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int dp[nums.size()+1],ans=INT_MIN;
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i=0;i<nums.size();i++) {
            
            dp[i] = nums[i] + max(0 , (i-1) >= 0 ? dp[i-1] : 0 );
            
            ans= max(ans,dp[i]);
            
        }
        return ans;
    }
};