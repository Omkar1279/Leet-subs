class Solution {
public:
    string reverse_invert(string &s) {
        for(char &c:s) {
            if(c=='1') c=0;
            else c='1';
        }
        reverse(s.begin(), s.end());
        return s;
    }

    string find(int n) {
        if(n==1) {
            return "0";
        }
        string t= find(n-1); 
        return t + "1" + reverse_invert(t);
    }
    char findKthBit(int n, int k) {
        string ans=find(n);
        
        return ans[k-1];
    }
};