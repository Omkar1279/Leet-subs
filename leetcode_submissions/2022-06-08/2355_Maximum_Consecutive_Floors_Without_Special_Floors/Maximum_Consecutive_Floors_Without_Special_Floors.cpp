class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        
        sort(special.begin(),special.end());
        int cnt=0,diff=0;
        
        cnt+=(special[0]-bottom);
        for(int i=1;i<special.size();i++) {
            diff=special[i]-special[i-1]-1;
            cnt=max(diff,cnt);
        }
        diff=top-special[special.size()-1];
        
        return cnt=max(diff,cnt);
        
    }
};