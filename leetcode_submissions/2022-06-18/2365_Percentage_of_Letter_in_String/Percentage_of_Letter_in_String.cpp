class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int cnt{0};
        
        for(auto ch : s) 
            if(ch==letter) cnt++;

        double percent = (double)cnt/s.size();

        return percent*100;
    }
};