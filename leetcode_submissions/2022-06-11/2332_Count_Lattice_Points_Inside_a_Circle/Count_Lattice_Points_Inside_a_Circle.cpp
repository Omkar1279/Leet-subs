class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        
        set<pair<int,int>> s;
        
        for(int i=0;i<circles.size();i++) {
            
            int x=circles[i][0];
            int y=circles[i][1];
            int r=circles[i][2];
            
            for(int j=x-r;j<=x+r;j++) {
                for(int k=y-r;k<=y+r;k++) {
                    
                    if((k-y)*(k-y) + (j-x)*(j-x) <= r*r) {
                        s.insert({j,k});
                    }
                }
            }
        }
        return s.size();
    }
};