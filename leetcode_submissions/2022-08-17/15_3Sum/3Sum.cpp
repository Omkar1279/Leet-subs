class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        unordered_map<int,int> mp;int n=nums.size();set<vector<int>> s;
        
        for(int i=0;i<n-2;i++) {
            
            for(int j=i+1;j<n-1;j++) {
                
                int sum=nums[i]+nums[j];
                sum=(-1)*sum;
                
                if(mp.count(sum)) {
                    vector<int> t{sum,nums[i],nums[j]};
                    sort(t.begin(),t.end());
                    s.insert(t);
                }
                
            }
            mp[nums[i]]=i;
        }
        if(nums[n-2]+nums[n-1]+nums[n-3]==0) s.insert({nums[n-3],nums[n-2],nums[n-1]});
        
        vector<vector<int>> v(s.begin(),s.end()) ;
        return v;
    }
};