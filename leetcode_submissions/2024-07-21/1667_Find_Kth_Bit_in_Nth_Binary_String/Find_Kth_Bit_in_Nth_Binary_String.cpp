class Solution {
public:
    char findKthBit(int n, int k) {
        return findKthBitHelper(n, k);
    }

private:
    char findKthBitHelper(int n, int k) {
        if (n == 1) {
            return '0';
        }
        int len = (1 << n) - 1; // Length of the sequence at level n
        int mid = len / 2 + 1; // Middle point of the sequence
        
        if (k == mid) {
            return '1';
        } else if (k < mid) {
            return findKthBitHelper(n - 1, k);
        } else {
            // Reverse and invert part
            char result = findKthBitHelper(n - 1, len - k + 1);
            return result == '0' ? '1' : '0';
        }
    }
};
