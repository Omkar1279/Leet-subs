class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int cnt=0,ans=0;

        for(int i:nums) {
            if(i==1) cnt++;
            else {
                ans = max(cnt,ans);
                cnt=0;
            }
        }
        return max(ans,cnt);
    }
};