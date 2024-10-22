class Solution {
public:
    int findTheWinner(int n, int k) {
        return findTheWinnerRec(n, k);
    }

private:
    int findTheWinnerRec(int n, int k) {
        // Base case: if there is only one person left, they are the winner
        if (n == 1) {
            return 1;
        }
        // Recursively find the position of the winner in the smaller circle
        int winner = findTheWinnerRec(n - 1, k);
        // Adjust the position for the current size of the circle
        return (winner + k - 1) % n + 1;
    }
};
