class Solution {
public:
    int partitionString(string s) {
        
        set<char> mp;int cnt=0,n=s.size()-1;
        
        for(char c: s) {
            
            if(mp.count(c)) {
                cnt++;
                mp.clear();
            }
            mp.insert(c);
        }
        
        // if(mp[s[n-1]]>1) cnt++;
        
        return cnt+1;
    }
};