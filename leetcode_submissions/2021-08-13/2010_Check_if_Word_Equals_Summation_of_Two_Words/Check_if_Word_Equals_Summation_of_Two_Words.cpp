class Solution {
public:
    
    
    
    int toint(string s) {
        
        int i=0;
        for(char x: s )
            i= i*10 + x-'a';
        
        return i;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {

        return (toint(firstWord)+ toint(secondWord) == toint(targetWord)) ? 1 : 0;
    }
};