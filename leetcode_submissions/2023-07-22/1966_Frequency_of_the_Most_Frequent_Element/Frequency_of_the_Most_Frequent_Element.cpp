class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());

        int ans=0,n=nums.size();

        for(int i=0;i<n;i++) {
            int t=k,freq=1;
            for(int j=i+1;j<n;j++) {

                if((nums[i]-nums[j]) > t) break;
                else {
                    t-=(nums[i]-nums[j]);
                    if(t>=0) freq++;
                }
            }
            ans=max(ans,freq);
        }
        return ans;
    }
};