class Solution {
public:
    int minSwaps(string s) {
        
        int n=s.size();
        stack<int>st;
        
        for(int i=0;i<n;i++) {
            
            if(s[i] == '[') {
                
                st.push(i);
                continue;
            }
            
            if(s[i] == ']' && !st.empty()) {
                st.pop();
            }
        }
        int ans=(st.size()+1)/2;
        
        return ans;
    }
};