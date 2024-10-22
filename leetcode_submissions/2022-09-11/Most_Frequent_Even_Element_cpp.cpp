class Solution {
public:
    int size=1e5+1;
    int mostFrequentEven(vector<int>& nums) {
        
        vector<int> v(size,-1);
        
        for(int i:nums) {
            
            if(i%2==0) {
                v[i]++;
            }
        }
        return (max_element(v.begin(), v.end()) - v.begin())!=0 ? (max_element(v.begin(), v.end()) - v.begin()) : -1;
    }
};