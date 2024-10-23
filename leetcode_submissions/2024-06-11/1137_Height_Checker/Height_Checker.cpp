class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> correct_heights= heights;
        int count=0;

        sort(correct_heights.begin(), correct_heights.end());

        for(int i=0;i<heights.size();i++) {
            if(heights[i]!=correct_heights[i]) count++;
        }

        return count;
    }
};