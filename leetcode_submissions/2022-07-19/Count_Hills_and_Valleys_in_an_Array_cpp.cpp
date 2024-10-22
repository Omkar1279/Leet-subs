class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int n=nums.size(),ans=0;
        
        for(int i=1;i<n-1;i++) {
            
            if(nums[i]==nums[i-1]) continue;
            
            if(nums[i]==nums[i+1]) {
                
                if(nums[i] < nums[i+2] && i+2<n && nums[i] < nums[i-1]) ans++;
                
                else if(nums[i] > nums[i+2] && i+2<n && nums[i] > nums[i-1]) ans++;
            }
            else {
                if(nums[i] < nums[i+1] && i+1<n && nums[i] < nums[i-1]) ans++;
                
                else if(nums[i] > nums[i+1] && i+1<n && nums[i] > nums[i-1]) ans++;
            }
        }
        return ans;
    }
};