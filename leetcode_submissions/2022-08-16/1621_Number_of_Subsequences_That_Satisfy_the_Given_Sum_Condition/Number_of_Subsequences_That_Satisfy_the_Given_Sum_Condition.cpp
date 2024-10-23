#include<bits/stdc++.h>
class Solution {
public:
    int power(long long x, long long y, long long p) {
            long long res = 1;
            x = x % p;
            if (x == 0) return 0;
            while (y > 0)  {
                if (y & 1)
                    res = (res*x) % p;
                y = y>>1;
                x = ((x%p)*(x%p)) % p;
            }
            return (int)(res%p);
    }
    
    int numSubseq(vector<int>& nums, int t) {
        
        int n=nums.size(),cnt=0;
        long MOD=1e9+7;
        
        sort(nums.begin(),nums.end());
        
        int l=0,r=n-1;                
        while(r>=l) {
            
            if(nums[l]+nums[r]<=t) {
                cnt=((cnt%MOD)+(power(2, r - l, MOD)%MOD)%MOD);
                l++;
            }
            else r--;
        }
        
        return cnt;
    }
};