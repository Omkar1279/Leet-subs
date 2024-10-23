class Solution {
public:
    string removeStars(string s) {
        
        for(int i=0;i<s.size();i++) {
            
            if(s[i]=='*' && i>0) {s.erase(i-1,2);i-=2;}
            
        }
        return s;
    }
};