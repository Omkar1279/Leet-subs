class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        string p;int i=0,k=0;
        while(p.size() <= s.size()) {
            
            p+=words[i];
            
            for(int j=k;j<p.size();j++) {
                
                if(p[i] != s[i])
                    return 0;
                
                k=j;
            }
        }
        return 1;
    }
};