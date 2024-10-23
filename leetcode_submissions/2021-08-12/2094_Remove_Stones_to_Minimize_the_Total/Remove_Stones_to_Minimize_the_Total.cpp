class Solution {
public:
    
    int floor(int x) {
        return (x+1)/2;
    }
    
    int minStoneSum(vector<int>& piles, int k) {
 
        priority_queue<int>pq(piles.begin() , piles.end());
        
        int ans=accumulate(piles.begin() , piles.end() ,0);
        
        while(k--) {
            
            int a=pq.top();
            pq.pop();
            pq.push(floor(a));
            ans-=a/2;
        }
        
        return ans;
    }
};