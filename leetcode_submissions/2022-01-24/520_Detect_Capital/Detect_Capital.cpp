class Solution {
public:
    bool iscapital(char c) {
        
        if((int)c <=90 && (int)c >=65) 
            return 1;
    
        else return 0;
    }
    
    bool detectCapitalUse(string word) {
        
        for(int i=2;i<word.length();i++) {
            
            if(iscapital(word[0]) && iscapital(word[1])) {
                
                if(word.length() == 2) return 1;
                
                else {
                    
                    if(!iscapital(word[i])) return 0;
                    else continue;
                }
            }
            
            else if(iscapital(word[0]) && !iscapital(word[1])) {
                
                if(word.length() == 2) return 1;
                
                else {
                    
                    if(iscapital(word[i])) return 0;
                    else continue;
                }
            }
            
            else {
                if(iscapital(word[i])) return 0;
            }
        }
        return 1;
    }
};