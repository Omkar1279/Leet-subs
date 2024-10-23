class Solution {
public:
    int lastRemaining(int n) {
        // Initialize variables to track the elimination process
        bool leftToRight = true;  // Direction of elimination
        int remaining = n;        // Number of elements remaining
        int step = 1;             // Step size between remaining elements
        int head = 1;             // Head of the current list of elements

        // Loop until only one element is remaining
        while (remaining > 1) {
            // If eliminating from left to right, or if the remaining count is odd,
            // the head of the list will move forward by the current step size
            if (leftToRight || remaining % 2 == 1) {
                head += step;
            }

            // Halve the number of remaining elements after each pass
            remaining /= 2;

            // Double the step size after each pass
            step *= 2;

            // Toggle the direction of elimination for the next pass
            leftToRight = !leftToRight;
        }

        // Return the last remaining element
        return head;
    }
};
