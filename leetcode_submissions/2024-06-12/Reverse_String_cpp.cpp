class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0, n=s.size(), h=n-1;

        while(l<h) {
            swap(s[l], s[h]);
            l++;h--;
        }
    }
};