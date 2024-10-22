class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;

        for(int i=1;i<nums.size();i++) {
            // cout<<"i="<<i<<endl;
            // cout<<"Before:\nnums[i]="<<nums[i]<<", nums[i-1]="<<nums[i-1]<<endl;

            if(nums[i] <= nums[i-1]) {
                count += (nums[i-1] - nums[i]) +1;
                nums[i] += (nums[i-1] - nums[i]) +1;
            }
            // cout<<"After:\nnums[i]="<<nums[i]<<", nums[i-1]="<<nums[i-1]<<endl;
        }

        // for(int i:nums) cout<<i<<endl;
        return count;
    }
};