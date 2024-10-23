class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        int cnt=0,k=0;
        
        string s="";
        
        for(int i=0;i<patterns.size();i++) {
            
            s=patterns[i];
            
            for(int j=0;j<word.size();j++) {
                
                if(s[k] != word[j]) {
                    k=0;
                    continue;
                }
                
                else if(s[k] == word[j]) {
                    k++;
                    
                    if(k==s.size()) {
                        k=0;
                        cnt++;
                        break;
                    }
                    continue;
                }
                
            }
        }
        
        return cnt;
        
    }
};