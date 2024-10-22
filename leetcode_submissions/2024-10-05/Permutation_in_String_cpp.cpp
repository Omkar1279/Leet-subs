class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        int n1 = s1.size(), n2 = s2.size();

        for (char c : s1) {
            freq1[c - 'a']++;
        }

        for (int i = 0; i < n1; i++) {
            freq2[s2[i] - 'a']++;
        }

        for (int i = 0; i <= n2 - n1; i++) {
            if (freq1 == freq2) return true;

            if (i + n1 < n2) {
                freq2[s2[i] - 'a']--;  
                freq2[s2[i + n1] - 'a']++;  
            }
        }

        return false;
    }
};
