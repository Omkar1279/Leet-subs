class Solution {
public:
    int f(int i,int j,string t1,string t2,vector<vector<int>> &dp) {
        
        if(i==0 && j==0) return (t1[i]==t2[j]);
        if(dp[i][j]!= -1) return dp[i][j];
        
        int same=0,same1=0,same2=0;
        if(t1[i]==t2[j]) same=1+f(i-1,j-1,t1,t2,dp);
        if(i>0) same1 = f(i-1,j,t1,t2,dp);
        if(j>0) same2 = f(i,j-1,t1,t2,dp);
        
        return dp[i][j]= max(max(same,same1),same2); 
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        if(text1==text2) return text1.size();
        int n=text1.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        
        return f(text1.size()-1,text2.size()-1,text1,text2,dp);
    }
};