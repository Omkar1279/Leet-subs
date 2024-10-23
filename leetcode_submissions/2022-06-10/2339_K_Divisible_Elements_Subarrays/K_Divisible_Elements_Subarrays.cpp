class Solution {
public:
    
    int countDistinct(vector<int>& nums, int k, int p) {
        
        int n=nums.size(),cnt=0,ans=0;
        
        unordered_set<string>mp;
        
        for(int i=0;i<n;i++) {
           
            string hash;
            for(int j=i;j<n;j++) {
                
                hash+=to_string(nums[j])+",";
                if(nums[j]%p==0) cnt++;
                
                if(cnt<=k) {
                    if(!mp.count(hash)) {
                        mp.insert(hash);
                        ans++;
                    }    
                }
        
                else {
                    break;
                }
                
                // cout<<"i="<<i<<" j="<<j<<" ans="<<ans<<" cnt="<<cnt<<endl;
            }
            cnt=0;
        }
        return ans;
    }
};