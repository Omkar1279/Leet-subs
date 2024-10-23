class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> mp;
        int count= 0;
        for(int i: nums) {
            mp[i]++;
        }

        for(auto it: mp) {
            count+= (it.second)*(it.second-1)/2;
        }
        return count;
    }
};