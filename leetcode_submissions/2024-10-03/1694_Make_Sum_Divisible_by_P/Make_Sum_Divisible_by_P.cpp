class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long total_sum = 0;
        
        // Calculate total sum of the array
        for (int num : nums) {
            total_sum += num;
        }
        
        int remainder = total_sum % p;
        
        // If the total sum is already divisible by p, return 0
        if (remainder == 0) return 0;
        
        // Hash map to store the prefix sums mod p and their last index
        unordered_map<int, int> mod_map;
        mod_map[0] = -1;  // Initialize with prefix sum 0 at index -1
        
        long prefix_sum = 0;
        int min_len = n;  // Initialize the minimum length as the size of the array
        
        // Traverse through the array and calculate prefix sums
        for (int i = 0; i < n; i++) {
            prefix_sum += nums[i];
            int current_remainder = prefix_sum % p;
            
            // Target remainder we are looking for in the prefix sums
            int target_remainder = (current_remainder - remainder + p) % p;
            
            // If we have seen this target remainder before, calculate the subarray length
            if (mod_map.find(target_remainder) != mod_map.end()) {
                min_len = min(min_len, i - mod_map[target_remainder]);
            }
            
            // Store the current remainder and its index in the hash map
            mod_map[current_remainder] = i;
        }
        
        // If we found a valid subarray, return its length; otherwise, return -1
        return min_len == n ? -1 : min_len;
    }
};