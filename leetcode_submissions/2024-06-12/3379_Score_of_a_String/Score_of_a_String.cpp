class Solution {
public:
    int scoreOfString(string s) {

        int n=s.size(), l=0, h=n-2, count=0;

        while(l<=h) {

            count+= abs((int)s[l] - (int)s[l+1]);
            count+= abs((int)s[h] - (int)s[h+1]);

            if(l==h) {
                return count;
            }

            l++;h--;
        }
        return count;
    }
};