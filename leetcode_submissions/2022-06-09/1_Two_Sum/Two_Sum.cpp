class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();vector<int> ans(2);vector<pair<int,int>> temp(n);
        
        for(int i=0;i<n;i++) {
            temp[i]={nums[i],i};
        }
        int l=0,r=n-1;
        
        sort(temp.begin(),temp.end());
        
        while(l<=r) {
            
            if(temp[l].first+temp[r].first == target) {
                ans[0]=temp[l].second;
                ans[1]=temp[r].second;
                return ans;
            }
            
            else if(temp[l].first+temp[r].first < target) l++;
            
            else r--;
            
        }
        return ans;
    }
};