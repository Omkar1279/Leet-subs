class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int cnt{0};
        
        for(auto ch : s) 
            if(ch==letter) cnt++;

        return ((double)cnt/s.size())*100;
    }
};