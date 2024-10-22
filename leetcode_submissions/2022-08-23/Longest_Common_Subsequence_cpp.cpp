class Solution {
public:
    int f(int i,int j,string t1,string t2,vector<vector<int>> &dp) {
        
        if(i==0 && j==0) return (t1[i]==t2[j]);
        if(i<0 || j<0) return 0;
        if(dp[i][j]!= -1) return dp[i][j];

        if(t1[i]==t2[j]) return dp[i][j]= 1+f(i-1,j-1,t1,t2,dp);      
        return dp[i][j]= max(f(i-1,j,t1,t2,dp),f(i,j-1,t1,t2,dp)); 
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        if(text1==text2) return text1.size();
        int n=text1.size(),m=text2.size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        
        return f(n-1,m-1,text1,text2,dp);
    }
};