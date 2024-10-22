class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size(),ans=INT_MIN;string temp;
        
        for(int i=0;i<=n-3;i++) {
            temp=num.substr(i, 3);
            if(stoi(temp)%111==0) ans=max(ans,(stoi(temp)));
            
            temp.clear();
        }
        
        if(ans==0) return "000";
        
        return (ans==INT_MIN) ? "" : to_string(ans);
    }
};