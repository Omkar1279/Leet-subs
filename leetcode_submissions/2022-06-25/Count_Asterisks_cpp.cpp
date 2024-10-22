class Solution {
public:
    int countAsterisks(string s) {
        
        int cnt{0},ans{0};
        for(char c:s) {
            
            if(c=='|') cnt++;
            
            if(cnt%2==0) {
                if(c=='*') ans++;
            }
        }
        return ans;
    }
};