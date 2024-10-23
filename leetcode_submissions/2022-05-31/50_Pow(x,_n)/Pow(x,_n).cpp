class Solution {
public:
    double posPow(double x, int n) {
        if(n==0) return 1;
        
        double temp = posPow(x, n/2);
        if(n%2 == 0)
            return temp*temp;
        else
            return temp*temp*x;
    }
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) {
            return posPow(1/x, n);
        } 
        return posPow(x,n);
    }
};