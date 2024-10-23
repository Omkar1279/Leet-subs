class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string ans;int j=0;
        
        for(int i=0;i<s.length();i++) {
            
            if( j<spaces.size() ) {
                
                if((i-j)==spaces[j]) {
                    s.insert(i, " ");j++;
                }
                
            }
        }
        
        return s;
    }
};