class Solution {
public:
    int partitionString(string s) {
        
        map<char,int> mp;int cnt=0,n=s.size()-1;
        
        for(char c: s) {
            
            if(mp.find(c)!= mp.end()) {
                cnt++;
                mp.clear();
            }
            mp[c]++;
        }
        
        // if(mp[s[n-1]]>1) cnt++;
        
        return cnt+1;
    }
};