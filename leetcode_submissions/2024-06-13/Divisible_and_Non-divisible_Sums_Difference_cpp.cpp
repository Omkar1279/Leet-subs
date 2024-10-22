class Solution {
public:
    int differenceOfSums(int n, int m) {

        int total_sum= n*(n+1)/2, divisible_sum=0, non_divisible_sum=0;

        int divisible_numbers = n/m;

        for(int i=1;i<=divisible_numbers;i++) {
            divisible_sum += m*i;
        }

        // cout<<"divisible sum="<<divisible_sum<<endl;
        // cout<<"divisible number="<<divisible_numbers<<endl;
        // cout<<"Total sum="<<total_sum<<endl;

        return (total_sum - 2*divisible_sum);
        
    }
};