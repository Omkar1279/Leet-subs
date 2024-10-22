#include<bits/stdc++.h>
class Solution {
public:
    int numSubseq(vector<int>& nums, int t) {
        
        int n=nums.size(),cnt=0,MOD=1e9+7;
        
        sort(nums.begin(),nums.end());
        
//         for(int i=0;i<n-1;i++) {
//             if(2*nums[i]<=t) cnt++;
        
//             for(int j=n-1;j>i;j--) {
                
//                 if(nums[i]+nums[j]<=t) 
//                     cnt+=pow(2,j-i-1);
        
//                 // cout<<"i="<<i<<" j="<<j<<" cnt="<<cnt<<endl;
//             }
//         }
        
        int l=0,r=n-1;        
        
        while(l<=r) {
            
            if(nums[l]+nums[r]<=t) {
                cnt+=(int)(pow(2,r-l))%MOD;l++;
            }
            else r--;
        }
        
        return cnt;
    }
};