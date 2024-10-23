class Solution {
public:
    
    bool Isit(int k,vector<int>& s) {
        
        for(auto i: s) {
            if(i==k) return 0;
        }
        return 1;
    }
    
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++) {
            
            if(nums[i] == key) {
                
                for(int j=0;j<n;j++) {
                    
                    if(abs(i-j) <= k && Isit(j,ans) ) ans.push_back(j); 
                }
            }
        }
        return ans;
    }
};