class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size(),ans=INT_MIN;
        
        for(int i=0;i<=n-3;i++) {
            string temp=num.substr(i, 3);
            if(stoi(temp)%111==0) {
                ans=max(ans,(stoi(temp)));
            }
        }
        
        if(ans==0) return "000";
        
        return (ans==INT_MIN) ? "" : to_string(ans);
    }
};