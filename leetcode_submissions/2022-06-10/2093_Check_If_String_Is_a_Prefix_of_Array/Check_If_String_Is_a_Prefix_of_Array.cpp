class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans;
        
        for(string c : words) {
            ans+=c;
            if(ans.size()>=s.size()) break;
        }

        return s==ans ? 1 : 0;
            
    }
};