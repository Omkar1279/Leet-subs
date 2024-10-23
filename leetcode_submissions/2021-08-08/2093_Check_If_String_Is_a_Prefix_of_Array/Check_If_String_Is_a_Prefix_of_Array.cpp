class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        string p="";int i=0,j=0;
        
        while(p.size()<=s.size() && i<words.size()) {
            
            p+=words[i];
            
            if(p.size()>s.size())
                return 0;
            
            else if(p.size()==s.size()) {
                
                for(int k=0;k<s.size();k++) {
                    
                    if(s[k] != p[k])
                        return 0;
                }
                return 1;
            }
            
            i++;
        }
        return 0;
    }
};