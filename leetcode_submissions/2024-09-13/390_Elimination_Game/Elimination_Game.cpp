class Solution {
    int solve(int n, bool leftToRight = true, int step = 1, int head = 1) {
        if(n==1) return head;


        // If eliminating from left to right or if the remaining count is odd
        if (leftToRight || n % 2 == 1) {
            head += step;
        }

        // Recursively call for the next pass, with half of the remaining elements,
        // doubled step size, and toggled direction
        return solve(n / 2, !leftToRight, step * 2, head);
    }
public:
    int lastRemaining(int n) {
        // Initialize variables to track the elimination process
        bool leftToRight = true;  // Direction of elimination
        int step = 1;             // Step size between remaining elements
        int head = 1;             // Head of the current list of elements

        return solve(n, leftToRight, step, head);
    }
};
