class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        int n=words.size();
        vector<string> temp=words;
        
        for(int i=1;i<words.size();i++) {
            
            if(words[i].size() != words[i-1].size()) continue;
            
            sort(temp[i].begin(),temp[i].end());
            sort(temp[i-1].begin(),temp[i-1].end());
            
            if(temp[i] == temp[i-1]) {
                temp.erase(temp.begin()+i);
                words.erase(words.begin()+i);i--;
            }

        }
        return words;
    }
};