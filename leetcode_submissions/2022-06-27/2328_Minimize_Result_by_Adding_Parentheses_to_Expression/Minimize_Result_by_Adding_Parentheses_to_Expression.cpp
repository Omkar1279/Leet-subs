class Solution {
public:
    string minimizeResult(string e) {
        int pos = e.find('+');
        string left = e.substr(0, pos);
        string right = e.substr(pos+1, e.size());
        
        int m = left.size(), n = right.size();
        
        int curr_max = INT_MAX;
        string res = "";
        for(int i=0; i<m; ++i)
        {
            string left1 = left.substr(0, i);
            int left1_int = (i == 0 ? 1 : stoi(left1));
            string left2 = left.substr(i, m-i);
            int left2_int = stoi(left2);
            for(int j=1; j<=n; ++j)
            {
                string right1 = right.substr(0, j);
                int right1_int = stoi(right1);
                string right2 = right.substr(j, n-j);
                int right2_int = (j==n? 1 : stoi(right2));
                
                int curr = left1_int * (left2_int + right1_int) * right2_int;
                if(curr < curr_max)
                {
                    curr_max = curr;
                    res = (i==0 ? "" : left1) + "(" + left2 + "+" + right1 + ")" + (j==n ? "" : right2);
                }
            }
        }
        return res;
    }
};