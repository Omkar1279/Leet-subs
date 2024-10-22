class Solution {
public:
    void solve(int i,set<vector<int>> &s,vector<int>& c,int t,vector<int> temp) {
        
        if(i==c.size()) {
            sort(temp.begin(),temp.end());
            if(accumulate(temp.begin(),temp.end(),0) == t) s.insert(temp);
            return;
        }
        else return;
        
        temp.push_back(c[i]);
        solve(i+1,s,c,t,temp);
        temp.pop_back();
        solve(i+1,s,c,t,temp);
            
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>s;vector<int> temp;
        solve(0,s,candidates,target,temp);
        
        vector<vector<int>> v (s.begin(),s.end());
        return v;        
    }
};