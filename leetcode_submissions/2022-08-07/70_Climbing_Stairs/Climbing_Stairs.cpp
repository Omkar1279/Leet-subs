class Solution {
public:
    
    int climbStairs(int n) {
        
        int prev=0,bprev=0,curr=0;
        
        if(n<4) return n;
        
        prev=3;bprev=2;
        
        for(int i=4;i<=n;i++) {
            
            curr=prev+bprev;
            bprev=prev;
            prev=curr;
        }
        return curr;
    }
};