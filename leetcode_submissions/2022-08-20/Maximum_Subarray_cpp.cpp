class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int max_sub_sum = *max_element(nums.begin(),nums.end());
        for(int i=1;i<nums.size();++i){
            nums[i]+=nums[i-1];
        }
        nums.insert(nums.begin(),0);
        int l = 0,r = 0;
        while(r<nums.size()-1){
            r++;
            while(l<r && nums[r]<nums[l]){
                l++;
            }
            if(l!=r) {
                max_sub_sum = max(max_sub_sum,nums[r]-nums[l]);
            }
        }
        return max_sub_sum;
    }
};