class Solution {
public:
    int minimumSum(int num) {
        string v= to_string(num);
        sort(v.begin(),v.end());

        return (v[0] - '0') *10 + (v[1] - '0')*10 + (v[2] - '0') + (v[3] - '0');
    }
};