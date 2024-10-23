class Solution {
public:
    string convert(string s, int numRows) {
        
        vector<string> v (1001,"");
        
        int n=s.size(),l=0,r=0,c=0;
        
        while(l<n) {
            
            for(int i=0;i<numRows && l<n ;i++) {
                v[i].push_back(s[l++]);
            }
            
            for(int j=numRows-2;j>=1 && l<n;j--) {
                v[j].push_back(s[l++]);
            }  
        }
        string ans;
        for(auto &i:v) {
            ans+=i;
        }
        return ans;
    }
};