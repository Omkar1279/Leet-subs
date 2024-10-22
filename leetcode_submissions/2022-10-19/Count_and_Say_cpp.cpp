class Solution {
public:
    string count(int n, string prevs = "1") {
        if(n==1) return prevs;
        int i=0, j, len = prevs.size();
        string currs = "";
        while(i<len) {
            j=i;
            while(i<len && prevs[i]==prevs[j]) i++;
            currs += to_string(i-j) + prevs[j];
        }
        return count(n-1, currs);
    }
    
    string countAndSay(int n) {
        return count(n,"1");
    }
};