class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        unordered_map<int,int> mp;
        vector<int>v;
        
        for(auto& i:nums) {
            for(int j:i) mp[j]++;
        }
        
        for(int i:nums[0]) {
            
            if(mp[i] == nums.size()) v.push_back(i);
        }
        sort(v.begin(),v.end());
        
        return v;
    }
};