class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int cnt=0;
        unordered_map<char,int>m;
        
        for(auto ch : s) 
            m[ch]++;
        
        cnt = m[letter];

        double percent = (double)cnt/s.size();

        return percent*100;
    }
};