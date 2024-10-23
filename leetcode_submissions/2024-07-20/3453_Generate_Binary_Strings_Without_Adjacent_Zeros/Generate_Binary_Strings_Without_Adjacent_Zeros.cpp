class Solution {
public:
    vector<string> validStrings(int n) {
        if (n == 1) return {"0", "1"};

        vector<string> prev = {"0", "1"};

        for (int i = 1; i < n; ++i) {
            vector<string> cur;
            
            for (const string& p : prev) {
                cur.push_back(p + '1');
                if (p.back() == '1') {
                    cur.push_back(p + '0');
                }
            }
            prev = cur;
        }
        return prev;
    }
};
