class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int > v(256,-1);
        int cnt=0;
        
        for(int i=0;i<jewels.size();i++) v[(int)jewels[i]]++;
        
        for(int i=0;i<stones.size();i++) {
            if(v[stones[i]] != -1) cnt++;
        }
        return cnt;
    }
};