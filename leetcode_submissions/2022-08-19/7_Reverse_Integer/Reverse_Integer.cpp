#include<bits/stdc++.h>
class Solution {
public:
    
    int reverse(int x) {
        
        int l=0,r=0;
        string s=to_string(x);
        
        r=s.size()-1;
        
        while(l<=r) {
            // cout<<l<<" "<<r<<endl;
            swap(s[l],s[r]);
            l++;r--;
        }
        long ans=stol(s);
        
        if(ans<pow(-2,31)||ans>pow(2,31)-1) return 0;
        
        return (x<0) ?(int) 0-ans : (int)ans;
    }
};