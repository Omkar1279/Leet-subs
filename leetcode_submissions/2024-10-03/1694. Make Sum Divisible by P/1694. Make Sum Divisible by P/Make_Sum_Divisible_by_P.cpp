class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        vector<long long> prefix(n+1, 0);  // Use long long for prefix sum to avoid overflow
        long long total_sum = 0;  // Use long long for total sum
        int ans = n;  // Start with the maximum possible subarray length, n
        
        // Step 1: Calculate prefix sum and total sum of the array
        for (int i = 0; i < n; i++) {
            total_sum += nums[i];
            prefix[i+1] = total_sum;  // Prefix sum from nums[0] to nums[i]
        }
        
        // Step 2: Check if the total sum is already divisible by p
        if (total_sum % p == 0) return 0;
        
        // Step 3: Brute force approach to check all subarrays
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                
                long long subarray_sum = prefix[j+1] - prefix[i];  // Sum of nums[i...j]
                long long remaining_sum = total_sum - subarray_sum;
                
                // Step 4: Check if the remaining sum is divisible by p
                if (remaining_sum % p == 0) {
                    ans = min(ans, j - i + 1);  
                }
            }
        }
      
        return ans == n ? -1 : ans;
    }
};
