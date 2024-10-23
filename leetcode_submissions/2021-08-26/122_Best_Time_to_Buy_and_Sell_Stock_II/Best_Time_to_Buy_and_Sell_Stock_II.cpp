class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),m=INT_MAX,profit=INT_MIN,sum=0,prev=0;

        
        for(int i=0;i<n;i++) {
            
            
            m=min(m,prices[i]);
            
            if(prices[i]-m > 0) profit=(prices[i]-m);
            
            if((profit==prices[i]-m)) sum+=profit;
            
            m=prices[i];
            
        }
        
        if(sum<0) return 0;
        
        return sum;
        
    }
};