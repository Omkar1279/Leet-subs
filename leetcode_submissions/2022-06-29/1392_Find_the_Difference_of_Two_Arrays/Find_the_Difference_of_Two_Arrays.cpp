class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        set<int> s;
        
        vector<vector<int>>ans;

        for(int i=0;i<nums1.size();i++) {
            
            if(!s2.count(nums1[i])) {
                s.insert(nums1[i]);
            }
        }
        vector<int> temp(s.begin(),s.end());
        ans.push_back(temp);
        s.clear();
        
        for(int i=0;i<nums2.size();i++) {
            
            if(!s1.count(nums2[i])) {
                s.insert(nums2[i]);
            }
        }
        
        vector<int> temp1(s.begin(),s.end());
        ans.push_back(temp1);
        
        return ans;
    }
};