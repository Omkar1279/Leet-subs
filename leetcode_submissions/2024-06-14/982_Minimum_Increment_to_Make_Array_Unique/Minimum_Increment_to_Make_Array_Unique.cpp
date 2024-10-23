class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        // Edge case: if nums is empty, no increments are needed.
        if (nums.empty()) return 0;

        // Finding the maximum element in the nums array
        int maxElem = *max_element(nums.begin(), nums.end());
        
        // Creating a frequency array to count occurrences of each element
        vector<int> freq(maxElem + nums.size(), 0);
        for (int num : nums) {
            freq[num]++;
        }

        int count = 0;
        int taken = 0;

        for (int i = 0; i < freq.size(); ++i) {
            if (freq[i] > 1) {
                // We have extra elements at this position
                taken += freq[i] - 1;
                count -= (freq[i] - 1) * i;
            } else if (taken > 0 && freq[i] == 0) {
                // Fill the positions with taken elements
                taken--;
                count += i;
            }
        }

        return count;
    }
};
