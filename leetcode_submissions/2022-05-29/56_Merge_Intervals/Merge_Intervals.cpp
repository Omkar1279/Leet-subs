class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        
        int n=in.size();
        
        if(n<=1) return in;
        vector<vector<int>> ans;
        
        vector<int> v;
        
        sort(in.begin(),in.end());
        
        if((in[0][0] <= in[1][0]) && (in[1][0] <= in[0][1])) {
            v.push_back(min(in[0][0],in[1][0]));
            v.push_back(max(in[0][1],in[1][1]));
            ans.push_back(v);
            v.clear();

        }
        else {
            ans.push_back(in[0]);
            ans.push_back(in[1]);
        }

        for(int i=2;i<n;i++) {
            vector<int> temp = ans.back();
            if((temp[0] <= in[i][0]) && (in[i][0] <= temp[1])) {
                
                v.push_back(min(temp[0],in[i][0]));
                v.push_back(max(temp[1],in[i][1]));
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