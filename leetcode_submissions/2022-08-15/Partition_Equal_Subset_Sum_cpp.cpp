class Solution {
public:
    bool f(int i, int k, vector<int> &arr, vector<vector<int>> &dp) {
    
        if(k==0) return 1;
        if(i==arr.size()-1) return (arr[i]==k);
        if(dp[i][k] !=-1) return dp[i][k];

        int pick= 0;
        int npick= f(i+1,k,arr,dp);
        if(arr[i]<=k) pick=f(i+1,k-arr[i],arr,dp);

        return dp[i][k]= pick||npick;
    }
    
    bool canPartition(vector<int>& nums) {
        int n=nums.size();

        
        int k=0;
        for(int i=0;i<n;i++) k+=nums[i];
        
        if(k%2==1) return 0;

        k/=2;
        vector<vector<int>> dp (n,vector<int> ((k+1),-1));
        if(f(0,k,nums,dp)) return 1;
        else return 0;        
    }
};