class Solution {
public:
    
    vector<int> index;
    
    bool avg(vector<int> &v) {
        
        for(int i=0;i<v.size();i++) {
            
            
            if(i>0 && i<v.size()-1) {
                
                if(v[i] == (float)((v[i+1]+v[i-1])/2))
                    index.push_back(i);
            }
            
            else
                continue;
        }
        
        return (index.size() == 0) ? 0 : 1;
    }
    
    vector<int> rearrangeArray(vector<int>& nums) {
        
        if(nums.size()==3 && avg(nums)) {
            swap(nums[0],nums[1]);
        }
        
        while(avg(nums)) {
            
            for(int i=0;i<index.size();i++) {
                
                if(i+1<index.size())
                swap(nums[i],nums[i+1]);
            }
            index.clear();
        }
        return nums;
    }
};