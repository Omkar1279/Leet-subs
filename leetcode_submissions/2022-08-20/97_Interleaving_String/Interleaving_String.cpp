class Solution {
public:
    bool f(int i,int j,string s1, string s2, string s3,vector<vector<int>> &dp) {
        
        if(i==s1.size() && j==s2.size()) return 1;
        
        bool res1=0,res2=0;
        if(i<s1.size() and s1[i]==s3[i+j]) res1=f(i+1,j,s1,s2,s3,dp);
        if(j<s2.size() and s2[j]==s3[i+j]) res2=f(i,j+1,s1,s2,s3,dp);
        
        return dp[i][j]= res1 || res2;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        
        vector<vector<int>> dp(201,vector<int> (201,-1));
        
        if(s1.size()+s2.size()!=s3.size()) return 0;
        
        return f(0,0,s1,s2,s3,dp);
    }
};