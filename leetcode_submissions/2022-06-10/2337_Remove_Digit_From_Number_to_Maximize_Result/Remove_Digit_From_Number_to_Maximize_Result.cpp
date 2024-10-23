class Solution {
public:
    bool noother(string num,int i,int digit) {
        
        for(;i<num.size();i++) {
            if(num[i]==digit) return true;
        }
        return false;
    }
    
    string removeDigit(string number, char digit) {
        
        int n=number.size();
        for(int i=0;i<number.size()-1;i++) {
            
            if(number[i] == digit && (int)number[i] < (int)number[i+1]) {
                number.erase(number.begin()+i);return number;
            }
            else if(number[i] == digit && !noother(number,i+1,digit)) {
                number.erase(number.begin()+i);return number;                
            }
            
            if(number[i] == digit && (int)number[i] > (int)number[i+1] && !noother(number,i+1,digit)) {
                number.erase(number.begin()+i);return number;                                
            }
        }
        
        if(number[number.size()-1] == digit) number.erase(number.end()-1);
        
        return number;
        
    }
};