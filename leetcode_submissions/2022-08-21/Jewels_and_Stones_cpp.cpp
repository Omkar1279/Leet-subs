class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
       
        for(int i=0;i<stones.size();i++) {
            if(count(jewels.begin(),jewels.end(), stones[i])) cnt++;
        }
        return cnt;
    }
};