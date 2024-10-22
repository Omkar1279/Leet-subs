#include<bits/stdc++.h>
class Solution {
public:
    
    int reverse(int x) {
        
        int ans=0,t=x;
        if(x<0) t=(-1)*t;
        
        while(t>0) {
            ans=ans*10+t%10;
            t/=10;
        }
        if(x<0) ans=(-1)*ans;
        return ans;
    }
};