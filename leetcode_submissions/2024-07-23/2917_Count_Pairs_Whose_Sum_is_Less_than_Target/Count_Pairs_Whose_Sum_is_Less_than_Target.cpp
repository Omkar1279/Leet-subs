class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // Sort the array to use the two-pointer technique
        sort(nums.begin(), nums.end());
        
        // Call the recursive helper function with initial pointers
        return countPairsHelper(nums, target, 0, nums.size() - 1);
    }

private:
    int countPairsHelper(const vector<int>& nums, int target, int lo, int hi) {
        // Base case: if the pointers cross, no more pairs to count
        if (lo >= hi) {
            return 0;
        }
        
        // If the sum of the two elements is less than the target
        if (nums[lo] + nums[hi] < target) {
            // Count all pairs (nums[lo], nums[j]) for lo < j <= hi
            // and move the lower pointer up
            return (hi - lo) + countPairsHelper(nums, target, lo + 1, hi);
        } else {
            // If the sum is not less than the target, move the higher pointer down
            return countPairsHelper(nums, target, lo, hi - 1);
        }
    }
};
