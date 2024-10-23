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
            
            mp[Sumofdigits(nums[i])].push_back(i);
        }
        
        for(auto it=mp.begin();it!=mp.end();it++) {
            
            vector<int> v;
            
            v=it->second;
            
            if(v.size()==1) continue;
            
            else if(v.size()==2) sum=nums[v[0]]+nums[v[1]];
            
            else {
                int lsum=0,lmax=0;
                
                for(int i=0;i<v.size();i++) {
                    for(int j=i+1;j<v.size();j++) {
                        lsum=nums[v[j]]+nums[v[i]];
                        lmax=max(lsum,lmax);
                    }
                }
                ans=max(ans,lmax);
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};