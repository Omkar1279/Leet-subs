class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last_best_index_pos =nums.size()-1; // at last position 
        
        //Using index+nums[i] >= lastindex, then true;
        //Intuition: Can I anyone reach to lastindex - starting from lastindex itself
        
        
        for(int i=nums.size()-1; i>=0;i--)
        {
            if(i+nums[i] >=last_best_index_pos)
            {
                last_best_index_pos =i; // can anyone reach to current index
            }
        }
        
        
        return (last_best_index_pos ==0); //if TRUE, reachable index is 0,then it means that OFCOURSE none of the index can reach index 0, 
        // You did it!
    }
};