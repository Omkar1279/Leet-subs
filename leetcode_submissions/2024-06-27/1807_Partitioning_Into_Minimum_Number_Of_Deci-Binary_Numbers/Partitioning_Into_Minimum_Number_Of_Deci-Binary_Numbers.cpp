class Solution {
public:
    int minPartitions(string n) {
        vector<int> v(n.begin(), n.end());

        return *max_element(v.begin(), v.end())- '0';
    }
};