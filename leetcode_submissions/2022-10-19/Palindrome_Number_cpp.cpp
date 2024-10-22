#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return 0;
        else if(x>=0 && x<10) return 1;
        
        vector<int> v(10,0);
        int i=0;
        while(x>0)  {
            v[x%10]++;         
            x/=10;i++;
        }
        cout<<i<<endl;
        for(int j:v) {
            // cout<<j<<endl;
            if(j==-1) continue;
            if(j==1 && i%2==0) {cout<<"j"<<endl;return 0;}
        }
        return 1;
    }
};