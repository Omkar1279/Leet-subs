class Solution {
public:
    void solve (vector<int> nums,set<vector<int>> &s,int i,vector<int> temp) {
        
        if(i==nums.size()) {
            sort(temp.begin(), temp.end());
            s.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,s,i+1,temp);
        temp.pop_back();
        solve(nums,s,i+1,temp);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> s;vector<int> temp;
        
        solve(nums,s,0,temp);
        
        vector<vector<int>> v (s.begin(),s.end());
        return v;
        
    }
};