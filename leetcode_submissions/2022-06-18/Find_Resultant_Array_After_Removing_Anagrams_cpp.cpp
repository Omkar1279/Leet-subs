class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        int n=words.size();
        vector<string> temp=words;
        
        sort(temp[0].begin(),temp[0].end());
        
        for(int i=1;i<words.size();i++) {
            
            if(words[i].size() != words[i-1].size()) {
                sort(temp[i].begin(),temp[i].end());
                continue;
            }
            
            sort(temp[i].begin(),temp[i].end());
            
            if(temp[i] == temp[i-1]) {
                temp.erase(temp.begin()+i);
                words.erase(words.begin()+i);i--;
            }

        }
        return words;
    }
};