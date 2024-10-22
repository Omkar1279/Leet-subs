class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int n=nums.size(),ans=0;
        
        for(int i=1;i<n-1;i++) {
            
            if(nums[i]==nums[i-1]) continue;
            
            int j=i+1;
            
            while(nums[i]==nums[j] && j<n) j++;
            
            if(nums[i] < nums[j] && nums[i] < nums[i-1]) ans++;
                
            else if(nums[i] > nums[j] && nums[i] > nums[i-1]) ans++;
            
        }
        return ans;
    }
};