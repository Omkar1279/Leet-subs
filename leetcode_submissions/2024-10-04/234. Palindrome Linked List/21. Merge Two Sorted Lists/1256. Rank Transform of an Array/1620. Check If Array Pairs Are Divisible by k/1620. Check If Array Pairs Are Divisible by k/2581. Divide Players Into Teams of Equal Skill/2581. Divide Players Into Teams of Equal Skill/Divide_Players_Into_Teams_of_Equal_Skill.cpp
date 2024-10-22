class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        
        // If the number of players is odd, we cannot divide them into pairs
        if (n % 2 != 0) return -1;
        
        // Sort the skill array to try pairing smallest with largest
        sort(skill.begin(), skill.end());
        
        // Set the target sum as the sum of the first and last element
        int targetSum = skill[0] + skill[n - 1];
        long long totalProduct = 0;
        
        // Use two pointers to check pairs
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i; // The opposite end of the array
            
            // Check if the current pair has the same sum as the target sum
            if (skill[i] + skill[j] != targetSum) {
                return -1; // It's not possible to divide players into valid pairs
            }
            
            // Add the product of the skills to the total sum
            totalProduct += (long long)skill[i] * skill[j];
        }
        
        // Return the total sum of products
        return totalProduct;
    }
};
