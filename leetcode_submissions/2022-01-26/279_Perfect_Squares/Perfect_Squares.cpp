class Solution {
public:
    vector<int>memo;
    
    //Recursion
    int fun(int n)
    {
       
        if(n<=0)
            return 0;
        if(n==1)
            return n;
        int ans=INT_MAX;
        for(int i=1;i*i<=n;i++)
        {
            if(i*i==n)
                return n/(i*i);
            ans=min(ans,fun(n-(i*i))+fun(i*i));    
        }
                    
          return ans;          
    }
    
    
    //memoization
     int memofun(int n)
    {
     if(memo[n]!=-1)
         return memo[n];
         
        if(n<=0)
            return memo[n]=0;
        if(n==1)
            return memo[n]=n;
        int ans=INT_MAX;
        for(int i=1;i*i<=n;i++)
        {
            if(i*i==n)
                return memo[n]=n/(i*i);
            ans=min(ans,memofun(n-(i*i))+memofun(i*i));    
        }
                    
          return memo[n]=ans;          
    }
    
    
    //dp
    int dpfun(int n)
    {
        vector<int>dp(n+1);
        
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {int ans=INT_MAX;
            for(int j=1;j*j<=i;j++)
            {
                if(j*j==i)
                {ans=1;break;}
                ans=min(ans,dp[i-(j*j)]+dp[j*j]);
            }
         dp[i]=ans;
        }

        return dp[n];
    }
    
    int numSquares(int n) {
        
        memo.resize(n+1,-1);
		
		//Use function accordingly 
        return dpfun(n); // or fun(n) or memofun(n) 
    }
};