class Solution {
public:
    string decodeMessage(string key, string message) {
        
        map<char,char> mp;int x=97;string ans="";
        
        for(char c:key) {
            
            if(c == ' ') continue;
            
            if(!mp.count(c))  mp[c]=(char)x++;
        }
        
        for(char c : message) {
            
            if(c==' ') {ans+=' ';continue;}
            
            ans+=mp[c];
        }
        return ans;
    }
};