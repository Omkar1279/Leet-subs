class Solution {
    // Recursive helper function to calculate if Player 1 can win
    int helper(vector<int>& nums, int l, int h) {
        if (l == h) return nums[l];  // Only one number left, pick it

        // Maximize Player 1's score: Either pick from the left or right
        // Player 2 will also play optimally to minimize Player 1's score
        int pickLeft = nums[l] - helper(nums, l + 1, h);
        int pickRight = nums[h] - helper(nums, l, h - 1);

        // Player 1 will choose the move that maximizes their score
        return max(pickLeft, pickRight);
    }

public:
    bool predictTheWinner(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1) >= 0;
    }
};
