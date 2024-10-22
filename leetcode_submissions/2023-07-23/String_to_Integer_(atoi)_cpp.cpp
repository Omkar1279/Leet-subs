class Solution {
public:
    long f(int i, string s, int sign, long result) {

        if(sign*result<=INT_MIN) return INT_MIN;
        if(sign*result>=INT_MAX) return INT_MAX;

        if(i>= s.size() || s[i] < '0' || s[i]>'9') {
            return sign*result;
        }

        result= f(i+1, s, sign, ((result*10)+(s[i]-'0')));
        return result;

    }

    int myAtoi(string s) {
        int i=0, sign=1;

        while(i<s.size() && s[i]== ' ') i++;

        if(s[i] == '-') {sign = -1;i++;}
        else if(s[i] == '+') i++;

        return (int)f(i, s, sign, 0);
    }
};