class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        string p;int i=0,j=0;
        
        p+=words[0];
        
        if(p.size() > s.size()){
            return 0;
            
        }
            
        
        while(p.size()+words[i+1].size() <= s.size()) {
            
            i++;
            
            p+=words[i];
            
        }
        
        if(p.size() != s.size())
            return 0;
        
        if(p.size() == s.size()) {
            
            for(int k=0;k<s.size();k++) {
                
                if(s[k] != p[k])
                    return 0;
                
            }
            
        }
            
        return 1;
    }
};