class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> mp;
        // return f(0,s,ans);
        int n=s.size(),ans=0,r=0,l=0;
        
        while(r<n) {
            
            if(mp.count(s[r])) {
                while(l<r && mp.count(s[r])) {
                    mp.erase(s[l++]);          
                }
            }
            ans=max(ans,r-l+1);
            mp.insert(s[r++]);
        }
        
        return ans;
    }
};