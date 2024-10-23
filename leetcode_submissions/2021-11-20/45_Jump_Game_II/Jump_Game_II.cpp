class Solution {
public:
    
    int jump(vector<int>& a) {
        
        int n=a.size();
        
        vector<int>dp(n);
        
        dp[n-1]=0;dp[n-2]=1;
        
        for(int i=n-3;i>=0;i--) {
            
            if(a[i] >= n-1-i) {
                
                dp[i]=1;
            }
            
            else if(a[i] == 1) {
                
                dp[i]=dp[i+1]+1;
            }
            
            else if(a[i] == 0) {
                
                dp[i]=INT_MAX;
            }
            
            else {
                dp[i]=1001;
                
                for(int j=1;j<=a[i];j++) {
                    
                    dp[i]=min(dp[i],dp[j+i]);
                }
                dp[i]++;
            } 
            
        }
        
        cout<<endl;
       return dp[0]; 
    }
};