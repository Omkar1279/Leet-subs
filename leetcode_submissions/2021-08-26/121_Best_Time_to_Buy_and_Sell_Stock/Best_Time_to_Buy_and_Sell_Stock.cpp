class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),m=INT_MAX,profit=INT_MIN;

        
        for(int i=0;i<n;i++) {

                
                m=min(m,prices[i]);
                profit=max(profit,(prices[i]-m));
            
        }
        
        if(profit<0) return 0;
        
        return profit;
    }
};