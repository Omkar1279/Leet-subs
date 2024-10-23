class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> mp (256,-1);
        // return f(0,s,ans);
        int n=s.size(),ans=0,r=0,l=0;
        
        while(r<n) {
            
            if(mp[(int)s[r]] != -1) {
                l=max(l,mp[(int)s[r]]+1);
            }
            ans=max(r-l+1,ans);
            mp[(int)s[r]]=r;
            r++;
        }
        
        return ans;
    }
};