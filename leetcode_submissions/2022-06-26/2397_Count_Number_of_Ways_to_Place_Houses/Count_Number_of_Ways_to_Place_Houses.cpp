class Solution {
public:
    int MOD = 1e9+7;
    
    int countHousePlacements(int n) {
        
        if (n == 1)
            return 4;
        
        int countB=1, countS=1, prev_countB, prev_countS;
        
        for (int i=2; i<=n; i++) {
            prev_countB = countB;
            prev_countS = countS;

            countS = prev_countB + prev_countS;
            countB = prev_countS;
        }
 
    int result = countS + countB;
 
    return (result*result)%MOD;
        
    }
};