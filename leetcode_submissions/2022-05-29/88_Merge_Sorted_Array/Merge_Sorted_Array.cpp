class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int pos=0;
        
        if(m==0) {
            nums1=nums2;
            return;
        }
        if(n==0) return;
        
        for(int i=0;i<m;i++) {
            
            if(nums1[i] > nums2[pos]) {
                swap(nums1[i],nums2[pos]);
                sort(nums2.begin(),nums2.end());
            }
        }
        
        for(int i=m;i<m+n;i++) nums1[i]=nums2[i-m];
    }
};