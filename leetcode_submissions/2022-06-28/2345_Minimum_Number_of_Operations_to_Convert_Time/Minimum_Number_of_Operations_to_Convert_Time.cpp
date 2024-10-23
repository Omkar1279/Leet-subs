class Solution {
public:
    int convertTime(string current, string correct) {
        
        int ans=0;
        
        string currh="";string currm="";
        currh+=current[0];currh+=current[1];currm+=current[3];currm+=current[4];
        
        string corrh="";string corrm="";
        corrh+=correct[0];corrh+=correct[1];corrm+=correct[3];corrm+=correct[4];
        
        int x=stoi(currh),y=stoi(corrh);
        int k=stoi(currm),l=stoi(corrm);
        
        if(abs(l-k)==59) {
            return y-x;
        }
        
        while(l-k>0) {
            
            int temp=l-k;
            
            if(temp >= 15) {ans++;k+=15;}
            
            else if(temp==5) {ans++;k+=5;}
            
            else if(temp%10<5) {ans++;k++;}
        }
        
        return ans+(y-x);
        
    }
};