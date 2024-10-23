class Solution {
public:
    int scoreOfString(string s) {

        int n=s.size(), l=0, h=n-2, count=0;

        while(l<=h) {

            if(l==h) {
                count+= abs((int)s[l] - (int)s[l+1]);
                return count;
            }

            count+= abs((int)s[l] - (int)s[l+1]);
            count+= abs((int)s[h] - (int)s[h+1]);

            l++;h--;
            // cout<<"l= "<<l<<" h="<<h<<" count="<<count<<endl;
        }
        return count;
    }
};