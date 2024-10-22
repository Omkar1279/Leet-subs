class Solution {
public:
    bool canChange(string start, string target) {
        int pos1=0;
        int pos2=0;
        int n=start.length();
        int m=target.length();
        
        while(pos1<start.length() or pos2<target.length()) {
            
            while(pos1<n and start[pos1]=='_') pos1++;
            
            while(pos2<m and target[pos2]=='_') pos2++;
            
            if(pos1==n and pos2==m)return true;
            if(pos1>=n or pos2>=n)return false;
            if(start[pos1]!=target[pos2])return false;
            if(start[pos1]=='L' and pos1<pos2)return false;
            if(start[pos1]=='R' and pos1>pos2)return false;
            pos1++;
            pos2++;
                                  
        }
        
        return true;
    }
};