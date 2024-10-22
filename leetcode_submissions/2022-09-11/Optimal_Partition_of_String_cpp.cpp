class Solution {
public:
    int partitionString(string s) {
        
        set<char> mp;int cnt=1,n=s.size()-1;
        
        for(char c: s) {
            
            if(mp.count(c)) {
                cnt++;
                mp.clear();
            }
            mp.insert(c);
        }
        
        return cnt;
    }
};