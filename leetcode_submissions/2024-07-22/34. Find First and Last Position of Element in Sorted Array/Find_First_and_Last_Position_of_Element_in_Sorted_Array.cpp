class Solution {
public:
    int findLower(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() -1;
        int ans = nums.size();
        

        while(lo<=hi) {
            int mid = (hi + lo)/2;

            if(nums[mid]>=target) {
                ans=mid;
                hi=mid-1;
            }
            else {
                lo=mid+1;
            }
        }
        return ans;
    }

    int findUpper(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() -1;
        int ans = nums.size();
        

        while(lo<=hi) {
            int mid = (hi + lo)/2;

            if(nums[mid]>target) {
                ans=mid;
                hi=mid-1;
            }
            else {
                lo=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        if (nums.empty() || target>nums[nums.size()-1]) return ans;

        int lower = findLower(nums, target);
        
        if (nums[lower] != target) {
            return ans;
        }

        int upper = findUpper(nums, target);
        ans[0] =  lower;
        ans[1] = upper-1;

        return ans;
    }
};