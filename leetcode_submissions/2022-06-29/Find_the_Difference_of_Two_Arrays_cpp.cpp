class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        
        vector<vector<int>>ans;
        
        vector<int> temp;
        for(int i=0;i<nums1.size();i++) {
            
            if(!s2.count(nums1[i])) {
                temp.push_back(nums1[i]);
            }
        }
        ans.push_back(temp);
        temp.clear();
        
        for(int i=0;i<nums2.size();i++) {
            
            if(!s1.count(nums2[i])) {
                temp.push_back(nums2[i]);
            }
        }
        ans.push_back(temp);
        
        return ans;
    }
};