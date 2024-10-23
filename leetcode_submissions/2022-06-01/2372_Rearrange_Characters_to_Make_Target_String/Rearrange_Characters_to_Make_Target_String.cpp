class Solution {
public:
    
    int rearrangeCharacters(string s, string target) {
        
        int Min=INT_MAX;
        unordered_map<char,int> m;unordered_map<char,int> mt;
        
        for(int i=0;i<s.size();i++) {
            m[s[i]]++;
        }
        
        for(int i=0;i<target.size();i++) {
            mt[target[i]]++;
        }
        
        for(auto c : mt) {
            
            Min=min(Min,m[c.first]/c.second);
        }
        
        return Min;
    }
};