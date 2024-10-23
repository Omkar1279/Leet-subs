class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        if(nums1==nums2) return nums1;
        if(nums1.size() > nums2.size()) nums1.swap(nums2);

        int j=0;
        for(int i=0;i<nums1.size();i++) {
            j++;
            while (nums1[i] > nums2[j]) {
                j++;
            }

            if(nums1[i] == nums2[j]) ans.push_back(nums1[i]);
        }
        return ans;
    }
};