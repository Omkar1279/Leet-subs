class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
 
        sort(piles.begin(), piles.end(), greater<int>());
        
        for(int i=0;i<k;i++) 
            piles[i]=(piles[i]+1)/2;
        
        
        return accumulate(piles.begin() , piles.end() , 0);
    }
};