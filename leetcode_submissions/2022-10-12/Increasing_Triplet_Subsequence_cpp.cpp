class Solution {
public:
    int lis(int i,int prev,vector<int>& nums) {
        if(i==nums.size()-1) {
            if(nums[i]>prev) return 1;
            return 0;
        }
        
        int take=0,ntake=0;
        if(nums[i]>prev) take=1+lis(i+1,nums[i],nums);
        else ntake =lis(i+1,prev,nums);
        return max(take,ntake);
    }
    
    bool increasingTriplet(vector<int>& nums) {
        
        if(lis(0,0,nums)>2) return 1;
        else return 0;
    }
};