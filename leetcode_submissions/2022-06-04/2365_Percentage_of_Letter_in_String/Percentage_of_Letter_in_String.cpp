class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        float ans=0;
        unordered_map<char,int>m;
        
        for(auto ch : s) 
            m[ch]++;
        
        auto it=m.find(letter);
        
        if(it == m.end()) return 0;
        
        ans = (it->second/(double) s.size());

        return ans*100;
    }
};