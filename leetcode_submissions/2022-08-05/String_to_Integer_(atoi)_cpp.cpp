class Solution {
public:
    int myAtoi(string s) {
        long long k=0;int sign;
        
        for(int i=0;i<s.size();i++) {
            
            if(isalpha(s[i]) || s[i]== ' ' || s[i] == '.') continue;

            if(isdigit(s[i])) {
                
                k = k*10+s[i]-'0';
                
                if(i>0 && s[i-1] == '-') sign = -1;
                
                if( i<s.size() && s[i+1] == ' ') break;
            }
        }
        if (sign != -1 && k>INT_MAX) return INT_MAX;
        if (sign == -1 && k>INT_MAX) return INT_MIN;

        return (int) k*sign;
    }
};