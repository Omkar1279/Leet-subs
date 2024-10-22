class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zeroes=0, ones=0;
        for(char c:s) {
            if(c=='0') zeroes++;
            else ones++;
        }

        s="";
        cout<<ones<<endl;
        while(ones>1) {
            s+= '1';
            ones--;
        }

        for(int i=0;i<zeroes;i++) s+= '0';
        
        s+= '1';

        return s;
        
    }
};