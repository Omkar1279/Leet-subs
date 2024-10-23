class Solution {
public:
    bool judgeSquareSum(int c) {
        
        if(c==1) return 1;
               
        for(int i=0;i<c;i++) {
            
            if((i*i) > c) return 0;
            
            if(sqrt(c))
            
            for(int j=i;j<c;j++) {
                
                if((j*j) == c) return 1;

                if((j*j) > c ) break;
                
                if(c==(j*j) + (i*i)) return 1;
                
            }
        }
        return 0;
    }
};