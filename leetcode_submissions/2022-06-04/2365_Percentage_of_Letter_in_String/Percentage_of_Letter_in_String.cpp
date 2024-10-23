class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int cnt=0;
        unordered_map<char,int>m;
        
        for(auto ch : s) 
            m[ch]++;
        
        auto it=m.find(letter);
        
        if(it == m.end()) return 0;
        
        cnt = it->second;

        double percent = (double)cnt/s.size();
        int ans = percent*100;
        return ans;
    }
};