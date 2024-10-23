class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),m=INT_MAX,sum=0;

        
        for(int i=0;i<n;i++) {
            
            
            m=min(m,prices[i]);
            
            if(prices[i]-m > 0) sum+=(prices[i]-m);
            
            m=prices[i];
            
        }
        
        if(sum<0) return 0;
        
        return sum;
        
    }
};