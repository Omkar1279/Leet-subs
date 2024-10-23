class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>v(n+1);
        
        v[0]=0;  if(n==0) return v;
        
        v[1]=1;  if(n==1) return v;
        
        for(int i=2;i<=n;i++)  v[i]=v[i/2] + i%2;
        return v;
    }
};