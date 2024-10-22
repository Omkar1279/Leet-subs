class Solution {
public:
    int balancedStringSplit(string s) {
        int count= 0, ans= 0;

        for(char c: s) {
            if(c == 'R') count++;
            else if(c == 'L') count--;

            if(count == 0) ans++;
        }
        return ans;
    }
};