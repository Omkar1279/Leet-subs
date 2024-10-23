class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        unordered_map<int,int> mp;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<nums[i].size();j++) {
                
                mp[nums[i][j]]++;
            }
        }
        
        for(int i=0;i<nums[0].size();i++) {
            
            if(mp[nums[0][i]] == nums.size()) v.push_back(nums[0][i]);
        }
        sort(v.begin(),v.end());
        
        return v;
    }
};