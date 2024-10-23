class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1, sum=0;

        while(n>0) {
            int reminder=n%10;
            product*=reminder;
            sum+=reminder;
            n/=10;
        }
        return product-sum;
    }
};