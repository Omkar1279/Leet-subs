class Solution {
public:
    string greatestLetter(string s) {
        
        set<char> st;string ans="";
        
        for(char ch : s) st.insert(ch);
        
        for(auto it=st.rbegin();it!=st.rend();it++) {
            
            if(islower(*it) && st.count(toupper(*it))) {
                 ans+=toupper(*it);
                return ans;
            }
            else if(isupper(*it) && st.count(tolower(*it))) {
                ans+=*it;
                return ans;
            }
        }
        return ans;
    }
};