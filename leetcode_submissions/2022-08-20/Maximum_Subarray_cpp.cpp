class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0,ans=INT_MIN;
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i=0;i<nums.size();i++) {
            
            sum = max(0 , nums[i]+sum);
            
            ans= max(ans,sum);
            
        }
        return ans;
    }
};