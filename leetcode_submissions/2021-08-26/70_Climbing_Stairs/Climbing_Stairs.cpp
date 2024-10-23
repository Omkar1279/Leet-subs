class Solution {
public:
    int climbStairs(int n) {
        
        int n1=1;
        int n2=1;
        int t =0;
        
        for(int i=2;i<=n;i++) {
            t=n1+n2;
            n1=n2;
            n2=t;
        }
        
        return n2;
    }
};