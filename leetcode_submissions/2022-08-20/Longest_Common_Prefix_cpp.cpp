#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int i=0,j=INT_MAX;string ans;
        
        for(int i=0;i<strs.size();i++) {
            if(strs[i].size()<j) j=strs[i].size();
        }
        
        for(int i=0;i<j;i++) {
            
            char c=strs[0][i];
            for(int k=1;k<strs.size();k++) {
                
                if(c!=strs[k][i]) {c='!';break;}
            }
            if(c=='!') break;
            else ans+=c;
        }
        return ans;
    }
};