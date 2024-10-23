class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        int cnt=0,k=0;
        
        for(auto &c : patterns) {
            
            if(word.find(c) != -1)
                cnt++;
        }
        
        return cnt;
        
    }
};