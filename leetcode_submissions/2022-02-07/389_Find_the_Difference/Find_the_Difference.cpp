class Solution {
public:
    
    char findTheDifference(string s, string t) {
        
        if(s == "") {
            char c= t[0];
            return c;
        }
        
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        
        for(int i=0;i<s.size();i++) {
            
            if(s[i] != t[i]) {
                return t[i];
            }
            
        }
        return t[t.size()-1];
    }
};