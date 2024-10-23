class Solution {
public:
    int v[31] = {-1}; 
    
    int fib(int n) {
        
        if(n==0 || n==1) return n;
        
        if(v[n] > 0) return v[n];
        
        else return v[n]= fib(n-1) + fib(n-2);
        
    }
};