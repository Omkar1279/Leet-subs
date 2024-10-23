class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        
        // Ensure that the array has an even number of elements
        if (n % 2 != 0) return false;
        
        // Pre-process remainders
        for (int i = 0; i < n; ++i) {
            // Calculate remainder and handle negative numbers correctly
            arr[i] = ((arr[i] % k) + k) % k;
        }

        // Iterate over each element to try and find a pair
        for (int i = 0; i < n; ++i) {
            // Skip if this element has already been paired (marked as -1)
            if (arr[i] == -1) continue;

            bool foundPair = false; // Flag to check if a pair was found
            
            // Try to find a pair for arr[i]
            for (int j = i + 1; j < n; ++j) {
                // Skip if this element has already been paired
                if (arr[j] == -1) continue;
                
                // Check if the sum of the remainders of arr[i] and arr[j] is divisible by k
                if ((arr[i] + arr[j]) % k == 0) {
                    // Mark both elements as paired by setting them to -1
                    arr[i] = -1;
                    arr[j] = -1;
                    foundPair = true;
                    break; // Exit the inner loop since we found a pair for arr[i]
                }
            }
            
            // If no pair was found for arr[i], return false
            if (!foundPair) return false;
        }
        
        // If all elements have been successfully paired, return true
        return true;
    }
};
