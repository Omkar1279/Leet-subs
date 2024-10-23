class Solution {
public:
    
    int floor(int x) {
        return (x+1)/2;
    }
    
    int minStoneSum(vector<int>& piles, int k) {
 
        sort(piles.begin(), piles.end(), greater<int>());
        
        for(int i=0;i<k;i++) {
            
            if(piles[i] != floor(piles[i]))
                piles[i]=(int)floor(piles[i]);
            
        }
        
        return accumulate(piles.begin() , piles.end() , 0);
    }
};