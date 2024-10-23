class Solution {
public:
    vector<string> validStrings(int n) {

        if(n==1) return vector<string> {"0", "1"};

        
        vector<string> prev= {"0", "1"};

        for(int i=1; i< n; i++) {
            vector<string> cur;
            for(int j=0;j<prev.size(); j++) {
                string p = prev[j];
                if(p[p.size()-1] == '0') {
                    p+='1';
                    cur.push_back(p);
                }

                else {
                    string temp =p;
                    p+='0';
                    temp+='1';
                    cur.push_back(p);
                    cur.push_back(temp);
                }
            }
            prev = cur;
        }
        return prev;
    }
};