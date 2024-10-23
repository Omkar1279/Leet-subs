class Solution {
public:
    int Sumofdigits(int n) {
        
        int sum=0;
        while(n>0) {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    
    int maximumSum(vector<int>& nums) {
        
        map<int,vector<int>> mp;int ans=-1,sum=0;
        
        for(int i=0;i<nums.size();i++) {
            
            mp[Sumofdigits(nums[i])].push_back(nums[i]);
        }
        
        for(auto it=mp.begin();it!=mp.end();it++) {
            
            vector<int> v;
            
            v=it->second;
            sort(v.begin(),v.end(), greater<int>());
            
            if(v.size()==1) continue;
            
            sum=v[0]+v[1];
            
            ans=max(ans,sum);
        }
        return ans;
    }
};