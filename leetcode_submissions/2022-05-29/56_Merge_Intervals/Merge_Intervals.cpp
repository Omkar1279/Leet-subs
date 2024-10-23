class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        
        int n=in.size();
        
        if(n<=1) return in;
        vector<vector<int>> ans;vector<int> v;
        
        sort(in.begin(),in.end());

        for(int i=1;i<n;i++) {
            
            if(ans.empty()) {
                if((in[i-1][0] <= in[i][0]) && (in[i][0] <= in[i-1][1])) {
                    v.push_back(min(in[i-1][0],in[i][0]));
                    v.push_back(max(in[i-1][1],in[i][1]));
                    ans.push_back(v);
                    v.clear();
                }
                else {
                    ans.push_back(in[i-1]);
                    ans.push_back(in[i]);
                }
            }
            
            int start = ans.back()[0],end = ans.back()[1];
            if((start <= in[i][0]) && (in[i][0] <= end)) {
                
                v.push_back(min(start,in[i][0]));
                v.push_back(max(end,in[i][1]));
                ans.pop_back();
                ans.push_back(v);
                v.clear();
            }
            else {
                ans.push_back(in[i]);
            }

        }
        return ans;

    }
};