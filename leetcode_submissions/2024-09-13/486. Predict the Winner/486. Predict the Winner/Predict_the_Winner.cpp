class Solution {
    bool help(vector<int>& nums, int turn, int p1Score, int p2Score, int l, int h) {
        // Base case: no more elements to pick
        if (l > h) return p1Score >= p2Score;

        // If it's Player 1's turn
        if (turn == 1) {
            // Player 1 picks either the leftmost or rightmost element, maximizing their score
            return help(nums, 0, p1Score + nums[l], p2Score, ++l, h) || 
                   help(nums, 0, p1Score + nums[h], p2Score, l, --h);
        }
        // If it's Player 2's turn
        else {
            // Player 2 picks either the leftmost or rightmost element, minimizing Player 1's score
            return help(nums, 1, p1Score, p2Score + nums[l], ++l, h) && 
                   help(nums, 1, p1Score, p2Score + nums[h], l, --h);
        }
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        return help(nums, 1, 0, 0, 0, nums.size() - 1);
    }
};