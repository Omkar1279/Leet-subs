class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        int n=piles.size()-1;
        sort(piles.begin(),piles.end());
        
        while(k--) {
            piles[n]=(piles[n]+1)/2;n--;
        }
        return accumulate(piles.begin(),piles.end(),0);
    }
};