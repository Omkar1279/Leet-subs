class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        
        sort(special.begin(),special.end());
        int cnt=0;

        for(int i=1;i<special.size();i++) {

            cnt=max(special[i]-special[i-1]-1,cnt);
        }
        
        return max(special[0]-bottom,max(top-special[special.size()-1],cnt));
        
    }
};