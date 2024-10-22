class Solution {
public:
    int myAtoi(string s) {
        long long k=0;int sign=1,i=0;
        
        while( i<s.size()&&s[i]==' ' ) i++;
        
        if(s[i]=='-') {sign=-1;i++;}
        else if(s[i]=='+') i++;
        
        if(!isdigit(s[i])) return 0;
        
        for(;i<s.size();i++) {
            
            if(!isdigit(s[i])) break;

            if(isdigit(s[i])) {
                
                if (sign != -1 && k*10+(s[i]-'0') >INT_MAX) return INT_MAX;
                if (sign == -1 && k*10+(s[i]-'0') >INT_MAX) return INT_MIN;
                
                k *= 10;
                k += (s[i]-'0');
                
                if( i<s.size() && s[i+1] == ' ') break;
            }
        }

        return (int) k*sign;
    }
};