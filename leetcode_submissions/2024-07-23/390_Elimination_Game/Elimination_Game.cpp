class Solution {
public:
    int eliminate(vector<int> &num) {
        if(num.size()==1) return num[0];

        vector<int> newv;
        for(int i=0;i<num.size();i++) {
            if(i%2==1) {
                newv.push_back(num[i]);
            }
            
        }
        reverse(newv.begin(), newv.end());

        
        return eliminate(newv);
    }

    int lastRemaining(int n) {
        vector<int> num;

        for(int i=1;i<=n;i++) {
            num.push_back(i);
        }

        return eliminate(num);
    }
};